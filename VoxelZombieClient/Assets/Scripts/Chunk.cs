using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public abstract class Chunk : MonoBehaviour, IChunk
{
    public IWorld world { get; set; }

    public ChunkID ID;
    
    protected byte[] voxels = new byte[16 * 16 * 16];

    public byte this[int x, int y, int z]
    {
        get { return voxels[x * 16 * 16 + y * 16 + z]; }
        set { voxels[x * 16 * 16 + y * 16 + z] = value; }
    }

    protected MeshFilter meshFilter;
    protected MeshCollider meshCollider;
    protected Mesh mesh;

    protected List<int>[] TriangleLists = new List<int>[55];

    protected List<Vector3> vertices = new List<Vector3>();
    protected List<Vector3> normals = new List<Vector3>();
    protected List<Vector3> uvList = new List<Vector3>();

    private bool m_dirty;

    public bool dirty
    {
        get => m_dirty;
        set
        {
            m_dirty = value;
            
        }
    }

    public Vector3 centerPosition { get; set; }

    public abstract void SetActiveRendering();

    public abstract void SetInactiveRendering();

    protected void RenderToMesh()
    {
        Debug.LogError("1");
        vertices.Clear();
        uvList.Clear();
        Debug.LogError("2");
        for (int i = 0; i < 55; i++)
        {
            if (TriangleLists == null)
            {
                Debug.LogError("Triangle Lists null");
            }
            else if (TriangleLists[i] == null)
            {
                Debug.LogError("Triangle List null: " + i + " " + ID.X + " " + ID.Y + " " + ID.Z);
            }
            
            
            TriangleLists[i].Clear();
        }
        Debug.LogError("3");
        normals.Clear();

        mesh.Clear();
        mesh.subMeshCount = 55;
        Debug.LogError("4");
        //GreedyMesh();
        QuickMesh();
        Debug.LogError("5");
        mesh.SetVertices(vertices);
        Debug.LogError("6");
        for (int i = 0; i < 55; i++)
        {
            mesh.SetTriangles(TriangleLists[i].ToArray(), i);
        }
        Debug.LogError("7");
        mesh.SetNormals(normals);
        mesh.SetUVs(0, uvList);
        Debug.LogError("8");
        //  mesh.SetUVs(0, UvCalculator.CalculateUVs(vertices.ToArray(), 1).ToList());
        meshFilter.mesh = mesh;
        Debug.LogError("9");
        meshCollider.sharedMesh = mesh;
        Debug.LogError("10");
        dirty = false;
    }

    public void QuickMesh()
    {
        Vector3 pos;
        int verticesPos;
        byte voxelType;

        byte blockCheck;
        Debug.LogError(" quickmesh 1");
        for (var x = 0; x < 16; x++)
        {
            for (var y = 0; y < 16; y++)
            {
                for (var z = 0; z < 16; z++)
                {
                    pos = new Vector3(x * .5f, y * .5f, z * .5f);
                    verticesPos = vertices.Count;

                    Debug.LogError(" quickmesh 2");
                    voxelType = GetBlock(x, y, z);
                    Debug.LogError(" quickmesh 3");
                    if (voxelType == 0)
                    {
                        continue;
                    }

                    //RENDER FRONT
                    if (z == 0)
                    {
                        ChunkID frontID = new ChunkID(ID.X, ID.Y, ID.Z - 1);
                        Debug.LogError(" quickmesh 4");
                        if (world.Chunks.ContainsKey(frontID))
                        {
                            
                            blockCheck = GetOutsideBlock(x, y, z - 1);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                        Debug.LogError(" quickmesh 5");
                      //  blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x, y, z - 1);
                    }

                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        foreach (var vert in ChunkInfo._frontVertices)
                            vertices.Add(pos + vert);

                        ChunkInfo.AddFrontUVs(uvList);

                        foreach (var normal in ChunkInfo._faceNormals)
                            normals.Add(normal);

                        AddTriangles(voxelType, verticesPos, ChunkInfo._frontTriangles);
                    }

                    verticesPos = vertices.Count;


                    //RENDER TOP
                    if (y == 15)
                    {
                        ChunkID topID = new ChunkID(ID.X, ID.Y + 1, ID.Z);
                        if (world.Chunks.ContainsKey(topID))
                        {
                            blockCheck = GetOutsideBlock(x, y + 1, z);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                       // blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x, y + 1, z);
                    }


                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        foreach (var vert in ChunkInfo._topVertices)
                            vertices.Add(pos + vert);

                        ChunkInfo.AddTopUVs(uvList);

                        foreach (var normal in ChunkInfo._faceNormals)
                            normals.Add(normal);

                        AddTriangles(voxelType, verticesPos, ChunkInfo._topTriangles);
                    }

                    verticesPos = vertices.Count;


                    //RENDER RIGHT
                    if (x == 15)
                    {
                        ChunkID rightID = new ChunkID(ID.X + 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(rightID))
                        {
                            blockCheck = GetOutsideBlock(x + 1, y, z);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    //    blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x + 1, y, z);
                    }

                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        foreach (var vert in ChunkInfo._rightVertices)
                            vertices.Add(pos + vert);


                        ChunkInfo.AddRightUVs(uvList);

                        AddTriangles(voxelType, verticesPos, ChunkInfo._rightTriangles);

                        foreach (var normal in ChunkInfo._faceNormals)
                            normals.Add(normal);
                    }

                    verticesPos = vertices.Count;


                    //RENDER LEFT
                    if (x == 0)
                    {
                        ChunkID leftID = new ChunkID(ID.X - 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(leftID))
                        {
                            blockCheck = GetOutsideBlock(x - 1, y, z);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                       // blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x - 1, y, z);
                    }

                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        foreach (var vert in ChunkInfo._leftVertices)
                            vertices.Add(pos + vert);

                        ChunkInfo.AddLeftUVs(uvList);


                        AddTriangles(voxelType, verticesPos, ChunkInfo._leftTriangles);

                        foreach (var normal in ChunkInfo._faceNormals)
                            normals.Add(normal);
                    }

                    verticesPos = vertices.Count;


                    //RENDER BACK

                    if (z == 15)
                    {
                        ChunkID backID = new ChunkID(ID.X, ID.Y, ID.Z + 1);
                        if (world.Chunks.ContainsKey(backID))
                        {
                            blockCheck = GetOutsideBlock(x, y, z + 1);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                    //    blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x, y, z + 1);
                    }

                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
                    {
                        foreach (var vert in ChunkInfo._backVertices)
                            vertices.Add(pos + vert);


                        ChunkInfo.AddBackUVs(uvList);


                        AddTriangles(voxelType, verticesPos, ChunkInfo._backTriangles);

                        foreach (var normal in ChunkInfo._faceNormals)
                            normals.Add(normal);
                    }

                    verticesPos = vertices.Count;


                    //RENDER BOTTOM
                    if (y == 0)
                    {
                        ChunkID bottomID = new ChunkID(ID.X, ID.Y - 1, ID.Z);
                        if (world.Chunks.ContainsKey(bottomID))
                        {
                            blockCheck = GetOutsideBlock(x, y - 1, z);
                        }
                        else
                        {
                            blockCheck = 0;
                        }
                       // blockCheck = 0;
                    }
                    else
                    {
                        blockCheck = GetBlock(x, y - 1, z);
                    }

                    if (ChunkInfo._transparentBlockSet.Contains(blockCheck) && blockCheck != voxelType)
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


    private void AddTriangles(int vType, int vPos, int[] triangles)
    {
        Debug.LogError(" add triangles 1");
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

    protected byte GetBlock(int x, int y, int z)
    {
        return this[x, y, z];
    }

    protected byte GetOutsideBlock(int x, int y, int z)
    {
        ushort xVal = (ushort)(ID.X * 16 + x);
        ushort yVal = (ushort)(ID.Y * 16 + y);
        ushort zVal = (ushort)(ID.Z * 16 + z);
        return world[xVal, yVal, zVal];
    }
}