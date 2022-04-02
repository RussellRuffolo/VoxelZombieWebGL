using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public class Chunk : MonoBehaviour, IChunk
{
    public IWorld world;
    private byte[] voxels = new byte[16 * 16 * 16];


    private MeshFilter meshFilter;
    private MeshCollider meshCollider;

    private MeshFilter waterMeshFilter;
    private MeshCollider waterMeshCollider;

    private MeshFilter lavaMeshFilter;
    private MeshCollider lavaMeshCollider;

    public ChunkID ID;

    private GameObject flower1;
    private GameObject flower2;
    private GameObject flower3;

    private GameObject mushroom1;
    private GameObject mushroom2;
    private GameObject mushroom3;
    private GameObject mushroom4;

    List<int>[] TriangleLists = new List<int>[55];

    List<Vector3> vertices = new List<Vector3>();
    List<Vector3> waterVertices = new List<Vector3>();
    List<Vector3> lavaVertices = new List<Vector3>();

    List<int> waterTriangles = new List<int>();
    List<int> lavaTriangles = new List<int>();

    List<Vector3> normals = new List<Vector3>();
    List<Vector3> waterNormals = new List<Vector3>();
    List<Vector3> lavaNormals = new List<Vector3>();

    List<Vector3> uvList = new List<Vector3>();
    List<Vector3> waterUVs = new List<Vector3>();
    List<Vector3> lavaUVs = new List<Vector3>();

    private Dictionary<Vector3, GameObject> modeledObjects = new Dictionary<Vector3, GameObject>();
    //0-48 are default MC ids offset back by 1 because 0 was air
    //49 is grass top
    //50 is wood top
    //51 is slabs top
    //52 is tnt top
    //53 is tnt bottom
    //54 is bookshelf top/bottom


    public bool dirty { get; set; } = true;

    public byte this[int x, int y, int z]
    {
        get { return voxels[x * 16 * 16 + y * 16 + z]; }
        set { voxels[x * 16 * 16 + y * 16 + z] = value; }
    }

    public void init()
    {
        tag = "Ground";
        for (int i = 0; i < 55; i++)
        {
            TriangleLists[i] = new List<int>();
        }

        meshFilter = GetComponent<MeshFilter>();
        meshCollider = GetComponent<MeshCollider>();
        PhysicMaterial physMat = new PhysicMaterial();
        physMat.frictionCombine = PhysicMaterialCombine.Minimum;
        physMat.dynamicFriction = 0;
        physMat.staticFriction = 0;
        meshCollider.material = physMat;

        GameObject waterChunk = new GameObject();
        waterChunk.name = "waterChunk";
        waterChunk.transform.position = transform.position;
        waterChunk.transform.parent = transform;
        waterChunk.tag = "Water";
        waterChunk.layer = 4; //water

        //  List<Material> LiquidMats = new List<Material>();
        // LiquidMats.Add(GetComponent<MeshRenderer>().materials[8]);
        // LiquidMats.Add(GetComponent<MeshRenderer>().materials[10]);
        Material[] waterMats = new Material[1];
        waterMats[0] = GetComponent<MeshRenderer>().materials[8];

        MeshRenderer waterRenderer = waterChunk.AddComponent<MeshRenderer>();
        waterRenderer.materials = waterMats;

        waterMeshFilter = waterChunk.AddComponent<MeshFilter>();
        waterMeshCollider = waterChunk.AddComponent<MeshCollider>();

        GameObject lavaChunk = new GameObject();
        lavaChunk.name = "lavaChunk";
        lavaChunk.transform.position = transform.position;
        lavaChunk.transform.parent = transform;
        lavaChunk.tag = "Lava";
        lavaChunk.layer = 9; //lava
        Material[] lavaMats = new Material[1];
        lavaMats[0] = GetComponent<MeshRenderer>().materials[10];

        MeshRenderer lavaRenderer = lavaChunk.AddComponent<MeshRenderer>();
        lavaRenderer.materials = lavaMats;

        lavaMeshFilter = lavaChunk.AddComponent<MeshFilter>();
        lavaMeshCollider = lavaChunk.AddComponent<MeshCollider>();

        mesh = new Mesh();
        waterMesh = new Mesh();

        flower1 = Resources.Load<GameObject>("Flower1");
        flower2 = Resources.Load<GameObject>("Flower2");
        flower3 = Resources.Load<GameObject>("Flower3");
        mushroom1 = Resources.Load<GameObject>("Mushroom1");
        mushroom2 = Resources.Load<GameObject>("Mushroom2");
        mushroom3 = Resources.Load<GameObject>("Mushroom3");
        mushroom4 = Resources.Load<GameObject>("Mushroom4");
    }

    private Mesh mesh;
    private Mesh waterMesh;


    private void Update()
    {
        if (dirty)
            RenderToMesh();
    }


    private Vector3 pos;

    private int verticesPos;
    private int waterVertPos;
    private int lavaVertPos;

    private byte voxelType;

    private byte blockCheck;

    public void RenderToMesh()
    {
        vertices.Clear();
        waterVertices.Clear();
        lavaVertices.Clear();

        foreach (List<int> triangleList in TriangleLists)
        {
            triangleList.Clear();
        }

        waterTriangles.Clear();
        lavaTriangles.Clear();

        normals.Clear();
        waterNormals.Clear();
        lavaNormals.Clear();


        uvList.Clear();
        waterUVs.Clear();
        lavaUVs.Clear();

        for (var x = 0; x < 16; x++)
        {
            for (var y = 0; y < 16; y++)
            {
                for (var z = 0; z < 16; z++)
                {
                    pos = new Vector3(x, y, z);
                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;
                    voxelType = this[x, y, z];
                    // If it is air we ignore this block
                    if (voxelType == 0)
                    {
                        if (modeledObjects.ContainsKey(pos))
                        {
                            Destroy(modeledObjects[pos]);
                            modeledObjects.Remove(pos);
                        }

                        continue;
                    }

                    if (ChunkInfo._modeledBlockIDs.Contains(voxelType))
                    {
                        if (!modeledObjects.ContainsKey(pos))
                        {
                            GameObject newModel;
                            switch (voxelType)
                            {
                                case 37:
                                    newModel = Instantiate(flower1);
                                    break;
                                case 38:
                                    newModel = Instantiate(flower2);
                                    break;
                                case 61:
                                    newModel = Instantiate(flower3);
                                    break;
                                case 39:
                                    newModel = Instantiate(mushroom1);
                                    break;
                                case 40:
                                    newModel = Instantiate(mushroom2);
                                    break;
                                case 57:
                                    newModel = Instantiate(mushroom4);
                                    break;
                                default:
                                    Debug.Log("Block ID: " + voxelType + " not handled.");
                                    continue;
                            }

                            newModel.transform.parent = transform;
                            newModel.transform.localPosition = new Vector3(x + .5f, y, z + .5f);

                            float yRot = (x * y * z) % 360;

                            newModel.transform.eulerAngles = new Vector3(0, yRot, 0);
                            modeledObjects.Add(pos, newModel);
                        }


                        continue;
                    }

                    if (normals.Count != vertices.Count)
                    {
                        Debug.Log("Normals: " + normals.Count + " Vertices: " + vertices.Count);
                    }

                    //RENDER FRONT

                    if (z == 0)
                    {
                        ChunkID frontID = new ChunkID(ID.X, ID.Y, ID.Z - 1);
                        if (world.Chunks.ContainsKey(frontID))
                        {
                            blockCheck = world[ID.X * 16 + x, ID.Y * 16 + y, ID.Z * 16 + z - 1];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x, y, z - 1];
                    }

                    if (ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._frontVertices)
                                waterVertices.Add(pos + vert);

                            ChunkInfo.AddFrontUVs(waterUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._frontTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._frontVertices)
                                lavaVertices.Add(pos + vert);

                            ChunkInfo.AddFrontUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._frontTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in ChunkInfo._frontHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in ChunkInfo._frontVertices)
                                    vertices.Add(pos + vert);
                            }

                            ChunkInfo.AddFrontUVs(uvList);

                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);

                            AddTriangles(voxelType, verticesPos, ChunkInfo._frontTriangles);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;

                    if (normals.Count != vertices.Count)
                    {
                        Debug.Log("Normals: " + normals.Count + " Vertices: " + vertices.Count);
                    }

                    //RENDER TOP

                    if (y == 15)
                    {
                        ChunkID topID = new ChunkID(ID.X, ID.Y + 1, ID.Z);
                        if (world.Chunks.ContainsKey(topID))
                        {
                            blockCheck = world[ID.X * 16 + x, ID.Y * 16 + y + 1, ID.Z * 16 + z];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x, y + 1, z];
                    }

                    if (blockCheck == 44)
                        blockCheck = 0;
                    if ((ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType) ||
                        voxelType == 44)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._topVertices)
                                waterVertices.Add(pos + vert);

                            ChunkInfo.AddTopUVs(waterUVs);

                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._topTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._topVertices)
                                lavaVertices.Add(pos + vert);
                            ChunkInfo.AddTopUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._topTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in ChunkInfo._topHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in ChunkInfo._topVertices)
                                    vertices.Add(pos + vert);
                            }

                            ChunkInfo.AddTopUVs(uvList);


                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);

                            AddTriangles(voxelType, verticesPos, ChunkInfo._topTriangles);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER RIGHT

                    if (x == 15)
                    {
                        ChunkID rightID = new ChunkID(ID.X + 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(rightID))
                        {
                            blockCheck = world[ID.X * 16 + x + 1, ID.Y * 16 + y, ID.Z * 16 + z];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x + 1, y, z];
                    }

                    if (ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._rightVertices)
                                waterVertices.Add(pos + vert);
                            ChunkInfo.AddRightUVs(waterUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._rightTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._rightVertices)
                                lavaVertices.Add(pos + vert);
                            ChunkInfo.AddRightUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._rightTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in ChunkInfo._rightHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in ChunkInfo._rightVertices)
                                    vertices.Add(pos + vert);
                            }

                            ChunkInfo.AddRightUVs(uvList);

                            AddTriangles(voxelType, verticesPos, ChunkInfo._rightTriangles);

                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER LEFT
                    if (x == 0)
                    {
                        ChunkID leftID = new ChunkID(ID.X - 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(leftID))
                        {
                            blockCheck = world[ID.X * 16 + x - 1, ID.Y * 16 + y, ID.Z * 16 + z];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x - 1, y, z];
                    }

                    if (ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._leftVertices)
                                waterVertices.Add(pos + vert);
                            ChunkInfo.AddLeftUVs(waterUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._leftTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._leftVertices)
                                lavaVertices.Add(pos + vert);
                            ChunkInfo.AddLeftUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._leftTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in ChunkInfo._leftHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in ChunkInfo._leftVertices)
                                    vertices.Add(pos + vert);
                            }


                            ChunkInfo.AddLeftUVs(uvList);

                            AddTriangles(voxelType, verticesPos, ChunkInfo._leftTriangles);

                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER BACK

                    if (z == 15)
                    {
                        ChunkID backID = new ChunkID(ID.X, ID.Y, ID.Z + 1);
                        if (world.Chunks.ContainsKey(backID))
                        {
                            blockCheck = world[ID.X * 16 + x, ID.Y * 16 + y, ID.Z * 16 + z + 1];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x, y, z + 1];
                    }

                    if (ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._backVertices)
                                waterVertices.Add(pos + vert);
                            ChunkInfo.AddBackUVs(waterUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._backTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._backVertices)
                                lavaVertices.Add(pos + vert);
                            ChunkInfo.AddBackUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._backTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in ChunkInfo._backHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in ChunkInfo._backVertices)
                                    vertices.Add(pos + vert);
                            }

                            ChunkInfo.AddBackUVs(uvList);


                            AddTriangles(voxelType, verticesPos, ChunkInfo._backTriangles);

                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER BOTTOM
                    if (y == 0)
                    {
                        ChunkID bottomID = new ChunkID(ID.X, ID.Y - 1, ID.Z);
                        if (world.Chunks.ContainsKey(bottomID))
                        {
                            blockCheck = world[ID.X * 16 + x, ID.Y * 16 + y - 1, ID.Z * 16 + z];
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    }
                    else
                    {
                        blockCheck = this[x, y - 1, z];
                    }

                    if ((ChunkInfo._transparentBlockIDs.Contains(blockCheck) && blockCheck != voxelType) ||
                        blockCheck == 44)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in ChunkInfo._bottomVertices)
                                waterVertices.Add(pos + vert);
                            ChunkInfo.AddBottomUVs(waterUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in ChunkInfo._bottomTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in ChunkInfo._bottomVertices)
                                lavaVertices.Add(pos + vert);
                            ChunkInfo.AddBottomUVs(lavaUVs);


                            foreach (var normal in ChunkInfo._faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in ChunkInfo._bottomTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            foreach (var vert in ChunkInfo._bottomVertices)
                                vertices.Add(pos + vert);

                            ChunkInfo.AddBottomUVs(uvList);

                            AddTriangles(voxelType, verticesPos, ChunkInfo._bottomTriangles);

                            foreach (var normal in ChunkInfo._faceNormals)
                                normals.Add(normal);
                        }
                    }
                }
            }
        }

        // Apply new mesh to MeshFilter

        //FOR MEMORY PURPOSES TRY TO CHANGE THIS TO NOT MAKE A NEW MESH EVERY TIME
        //MESH.CLEAR() should work but need to make it the first time
        mesh.Clear();
        mesh.subMeshCount = 55;
        mesh.SetVertices(vertices);
        for (int i = 0; i < 55; i++)
        {
            if (i != 8)
            {
                mesh.SetTriangles(TriangleLists[i].ToArray(), i);
            }
        }

        mesh.SetNormals(normals);
        mesh.SetUVs(0, uvList);
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;

        waterMesh.Clear();
        waterMesh.subMeshCount = 1;
        waterMesh.SetVertices(waterVertices);
        waterMesh.SetTriangles(waterTriangles.ToArray(), 0);
        waterMesh.SetNormals(waterNormals);
        waterMeshFilter.mesh = waterMesh;
        waterMeshCollider.sharedMesh = waterMesh;

        var lavaMesh = new Mesh();
        lavaMesh.subMeshCount = 1;
        lavaMesh.SetVertices(lavaVertices);
        lavaMesh.SetTriangles(lavaTriangles.ToArray(), 0);
        lavaMesh.SetNormals(lavaNormals);
        lavaMeshFilter.mesh = lavaMesh;
        lavaMeshCollider.sharedMesh = lavaMesh;

        if (normals.Count != vertices.Count)
        {
            Debug.Log("Normals: " + normals.Count + " Vertices: " + vertices.Count);
        }

        dirty = false;
    }


    private void AddTriangles(int vType, int vPos, int[] triangles)
    {
        //0-48 are default MC ids offset back by 1 because 0 was air
        //49 is grass top
        //50 is wood top
        //51 is slabs top
        //52 is tnt top
        //53 is bookshelf top
        switch (vType)
        {
            case (2):
                if (triangles == ChunkInfo._topTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[49].Add(vPos + tri);
                }
                else if (triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                    {
                        TriangleLists[2].Add(vPos + tri);
                    }
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            case (17):
                if (triangles == ChunkInfo._topTriangles || triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[50].Add(vPos + tri);
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            case (43):
                if (triangles == ChunkInfo._topTriangles || triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[51].Add(vPos + tri);
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            case (44): //half slabs             
                if (triangles == ChunkInfo._topTriangles || triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[51].Add(vPos + tri);
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            case (46):
                if (triangles == ChunkInfo._topTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[52].Add(vPos + tri);
                }
                else if (triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[53].Add(vPos + tri);
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            case 47:
                if (triangles == ChunkInfo._topTriangles || triangles == ChunkInfo._bottomTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[54].Add(vPos + tri);
                }
                else
                {
                    foreach (var tri in triangles)
                        TriangleLists[vType - 1].Add(vPos + tri);
                }

                break;
            default:
                foreach (var tri in triangles)
                    TriangleLists[vType - 1].Add(vPos + tri);
                break;
        }
    }
}