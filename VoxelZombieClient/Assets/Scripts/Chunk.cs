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
    private UInt16[] voxels = new ushort[16 * 16 * 16];

    public UInt64 this[int x, int y, int z]
    {
        get
        {
            return 0;
        }
        set
        {
            
        }
    }

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

    private Vector3[] _cubeVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 1, 0),
        new Vector3(0, 1, 0),
        new Vector3(0, 1, 1),
        new Vector3(1, 1, 1),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1),
    };

    private Vector3[] _frontVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 1, 0),
        new Vector3(0, 1, 0),
    };

    private Vector3[] _frontHalfVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 0.5f, 0),
        new Vector3(0, 0.5f, 0),
    };

    private int[] _frontTriangles = new[]
    {
        0, 2, 1,
        0, 3, 2
    };

    private Vector3[] _topVertices = new[]
    {
        new Vector3(1, 1, 0),
        new Vector3(0, 1, 0),
        new Vector3(0, 1, 1),
        new Vector3(1, 1, 1),
    };

    private Vector3[] _topHalfVertices = new[]
    {
        new Vector3(1, .5f, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, 1),
        new Vector3(1, .5f, 1),
    };

    private int[] _topTriangles = new[]
    {
        0, 1, 2,
        0, 2, 3
    };

    private Vector3[] _rightVertices = new[]
    {
        new Vector3(1, 0, 0),
        new Vector3(1, 1, 0),
        new Vector3(1, 1, 1),
        new Vector3(1, 0, 1)
    };

    private Vector3[] _rightHalfVertices = new[]
    {
        new Vector3(1, 0, 0),
        new Vector3(1, .5f, 0),
        new Vector3(1, .5f, 1),
        new Vector3(1, 0, 1)
    };

    private int[] _rightTriangles = new[]
    {
        0, 1, 2,
        0, 2, 3
    };

    private Vector3[] _leftVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(0, 1, 0),
        new Vector3(0, 1, 1),
        new Vector3(0, 0, 1)
    };

    private Vector3[] _leftHalfVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, 1),
        new Vector3(0, 0, 1)
    };

    private int[] _leftTriangles = new[]
    {
        0, 3, 2,
        0, 2, 1
    };

    private Vector3[] _backVertices = new[]
    {
        new Vector3(0, 1, 1),
        new Vector3(1, 1, 1),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1),
    };

    private Vector3[] _backHalfVertices = new[]
    {
        new Vector3(0, .5f, 1),
        new Vector3(1, .5f, 1),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1),
    };

    private int[] _backTriangles = new[]
    {
        2, 1, 0,
        2, 0, 3
    };

    private Vector3[] _bottomVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1)
    };

    private int[] _bottomTriangles = new[]
    {
        0, 2, 3,
        0, 1, 2
    };

    private int[] _cubeTriangles = new[]
    {
        // Front
        0, 2, 1,
        0, 3, 2,
        // Top
        2, 3, 4,
        2, 4, 5,
        // Right
        1, 2, 5,
        1, 5, 6,
        // Left
        0, 7, 4,
        0, 4, 3,
        // Back
        5, 4, 7,
        5, 7, 6,
        // Bottom
        0, 6, 7,
        0, 1, 6
    };

    private static Vector3[] _cubeNormals = new[]
    {
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up, Vector3.up
    };

    private static Vector3[] _faceNormals = new[]
    {
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up
    };

    // public UInt32 this[int x, int y, int z]
    // {
    //     get { return voxels[x * 16 * 16 + y * 16 + z]; }
    //     set { voxels[x * 16 * 16 + y * 16 + z] = (UInt16) value; }
    // }

    private List<int> _transparentBlockIDs = new List<int>
    {
        0, 9, 11, 18,
        20, 37, 38, 39, 40, 44, 57, 61
    };

    private List<int> _modeledBlockIDs = new List<int>
    {
        37, 38, 39, 40, 57, 61
    };

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


        flower1 = Resources.Load<GameObject>("Flower1");
        flower2 = Resources.Load<GameObject>("Flower2");
        flower3 = Resources.Load<GameObject>("Flower3");
        mushroom1 = Resources.Load<GameObject>("Mushroom1");
        mushroom2 = Resources.Load<GameObject>("Mushroom2");
        mushroom3 = Resources.Load<GameObject>("Mushroom3");
        mushroom4 = Resources.Load<GameObject>("Mushroom4");
    }

    private void Update()
    {
        if (dirty)
            RenderToMesh();
    }

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
                    var pos = new Vector3(x, y, z);
                    var verticesPos = vertices.Count;
                    var waterVertPos = waterVertices.Count;
                    var lavaVertPos = lavaVertices.Count;
                    ushort voxelType = (ushort) this[x, y, z];
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

                    if (_modeledBlockIDs.Contains(voxelType))
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
                    int front;
                    if (z == 0)
                    {
                        ChunkID frontID = new ChunkID(ID.X, ID.Y, ID.Z - 1);
                        if (world.Chunks.ContainsKey(frontID))
                        {
                            front = (ushort) world[ID.X * 16 + x, ID.Y * 16 + y, ID.Z * 16 + z - 1];
                        }
                        else
                        {
                            front = 0;
                        }
                    }
                    else
                    {
                        front = (ushort) this[x, y, z - 1];
                    }

                    if (_transparentBlockIDs.Contains(front) && front != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _frontVertices)
                                waterVertices.Add(pos + vert);

                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(1, 0));

                            waterUVs.Add(new Vector2(1, 1));
                            waterUVs.Add(new Vector2(0, 1));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _frontTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _frontVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(1, 0));

                            lavaUVs.Add(new Vector2(1, 1));
                            lavaUVs.Add(new Vector2(0, 1));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _frontTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in _frontHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in _frontVertices)
                                    vertices.Add(pos + vert);
                            }


                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(1, 0));

                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(0, 1));

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);

                            AddTriangles(voxelType, verticesPos, _frontTriangles);
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
                    int top;
                    if (y == 15)
                    {
                        ChunkID topID = new ChunkID(ID.X, ID.Y + 1, ID.Z);
                        if (world.Chunks.ContainsKey(topID))
                        {
                            top = (ushort) world[ID.X * 16 + x, ID.Y * 16 + y + 1, ID.Z * 16 + z];
                        }
                        else
                        {
                            top = 0;
                        }
                    }
                    else
                    {
                        top = (ushort) this[x, y + 1, z];
                    }

                    if (top == 44)
                        top = 0;
                    if ((_transparentBlockIDs.Contains(top) && top != voxelType) || voxelType == 44)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _topVertices)
                                waterVertices.Add(pos + vert);


                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(0, 1));
                            waterUVs.Add(new Vector2(1, 1));
                            waterUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _topTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _topVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(0, 1));
                            lavaUVs.Add(new Vector2(1, 1));
                            lavaUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _topTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in _topHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in _topVertices)
                                    vertices.Add(pos + vert);
                            }

                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(0, 1));
                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);

                            AddTriangles(voxelType, verticesPos, _topTriangles);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER RIGHT
                    int right;
                    if (x == 15)
                    {
                        ChunkID rightID = new ChunkID(ID.X + 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(rightID))
                        {
                            right = (ushort) world[ID.X * 16 + x + 1, ID.Y * 16 + y, ID.Z * 16 + z];
                        }
                        else
                        {
                            right = 0;
                        }
                    }
                    else
                    {
                        right = (ushort) this[x + 1, y, z];
                    }

                    if (_transparentBlockIDs.Contains(right) && right != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _rightVertices)
                                waterVertices.Add(pos + vert);

                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(0, 1));
                            waterUVs.Add(new Vector2(1, 1));
                            waterUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _rightTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _rightVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(0, 1));
                            lavaUVs.Add(new Vector2(1, 1));
                            lavaUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _rightTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in _rightHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in _rightVertices)
                                    vertices.Add(pos + vert);
                            }

                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(0, 1));
                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(1, 0));
                            AddTriangles(voxelType, verticesPos, _rightTriangles);

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER LEFT
                    int left;
                    if (x == 0)
                    {
                        ChunkID leftID = new ChunkID(ID.X - 1, ID.Y, ID.Z);
                        if (world.Chunks.ContainsKey(leftID))
                        {
                            left = (ushort) world[ID.X * 16 + x - 1, ID.Y * 16 + y, ID.Z * 16 + z];
                        }
                        else
                        {
                            left = 0;
                        }
                    }
                    else
                    {
                        left = (ushort) this[x - 1, y, z];
                    }

                    if (_transparentBlockIDs.Contains(left) && left != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _leftVertices)
                                waterVertices.Add(pos + vert);

                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(0, 1));
                            waterUVs.Add(new Vector2(1, 1));
                            waterUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _leftTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _leftVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(0, 1));
                            lavaUVs.Add(new Vector2(1, 1));
                            lavaUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _leftTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in _leftHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in _leftVertices)
                                    vertices.Add(pos + vert);
                            }


                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(0, 1));
                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(1, 0));
                            AddTriangles(voxelType, verticesPos, _leftTriangles);

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER BACK
                    int back;
                    if (z == 15)
                    {
                        ChunkID backID = new ChunkID(ID.X, ID.Y, ID.Z + 1);
                        if (world.Chunks.ContainsKey(backID))
                        {
                            back = (ushort) world[ID.X * 16 + x, ID.Y * 16 + y, ID.Z * 16 + z + 1];
                        }
                        else
                        {
                            back = 0;
                        }
                    }
                    else
                    {
                        back = (ushort) this[x, y, z + 1];
                    }

                    if (_transparentBlockIDs.Contains(back) && back != voxelType)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _backVertices)
                                waterVertices.Add(pos + vert);

                            waterUVs.Add(new Vector2(1, 0));
                            waterUVs.Add(new Vector2(0, 1));
                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _backTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _backVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(1, 0));
                            lavaUVs.Add(new Vector2(0, 1));
                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _backTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            if (voxelType == 44)
                            {
                                foreach (var vert in _backHalfVertices)
                                    vertices.Add(pos + vert);
                            }
                            else
                            {
                                foreach (var vert in _backVertices)
                                    vertices.Add(pos + vert);
                            }


                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(0, 1));

                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(1, 0));

                            AddTriangles(voxelType, verticesPos, _backTriangles);

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);
                        }
                    }

                    verticesPos = vertices.Count;
                    waterVertPos = waterVertices.Count;
                    lavaVertPos = lavaVertices.Count;


                    //RENDER BOTTOM
                    int bottom;
                    if (y == 0)
                    {
                        ChunkID bottomID = new ChunkID(ID.X, ID.Y - 1, ID.Z);
                        if (world.Chunks.ContainsKey(bottomID))
                        {
                            bottom = (ushort) world[ID.X * 16 + x, ID.Y * 16 + y - 1, ID.Z * 16 + z];
                        }
                        else
                        {
                            bottom = 0;
                        }
                    }
                    else
                    {
                        bottom = (ushort) this[x, y - 1, z];
                    }

                    if ((_transparentBlockIDs.Contains(bottom) && bottom != voxelType) || bottom == 44)
                    {
                        if (voxelType == 9)
                        {
                            foreach (var vert in _bottomVertices)
                                waterVertices.Add(pos + vert);

                            waterUVs.Add(new Vector2(0, 0));
                            waterUVs.Add(new Vector2(0, 1));
                            waterUVs.Add(new Vector2(1, 1));
                            waterUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                waterNormals.Add(normal);

                            foreach (var tri in _bottomTriangles)
                            {
                                waterTriangles.Add(waterVertPos + tri);
                            }
                        }
                        else if (voxelType == 11)
                        {
                            foreach (var vert in _bottomVertices)
                                lavaVertices.Add(pos + vert);

                            lavaUVs.Add(new Vector2(0, 0));
                            lavaUVs.Add(new Vector2(0, 1));
                            lavaUVs.Add(new Vector2(1, 1));
                            lavaUVs.Add(new Vector2(1, 0));

                            foreach (var normal in _faceNormals)
                                lavaNormals.Add(normal);

                            foreach (var tri in _bottomTriangles)
                            {
                                lavaTriangles.Add(lavaVertPos + tri);
                            }
                        }
                        else
                        {
                            foreach (var vert in _bottomVertices)
                                vertices.Add(pos + vert);

                            uvList.Add(new Vector2(0, 0));
                            uvList.Add(new Vector2(0, 1));
                            uvList.Add(new Vector2(1, 1));
                            uvList.Add(new Vector2(1, 0));
                            AddTriangles(voxelType, verticesPos, _bottomTriangles);

                            foreach (var normal in _faceNormals)
                                normals.Add(normal);
                        }
                    }
                }
            }
        }

        // Apply new mesh to MeshFilter

        //FOR MEMORY PURPOSES TRY TO CHANGE THIS TO NOT MAKE A NEW MESH EVERY TIME
        //MESH.CLEAR() should work but need to make it the first time
        var mesh = new Mesh();
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

        var waterMesh = new Mesh();
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
                if (triangles == _topTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[49].Add(vPos + tri);
                }
                else if (triangles == _bottomTriangles)
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
                if (triangles == _topTriangles || triangles == _bottomTriangles)
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
                if (triangles == _topTriangles || triangles == _bottomTriangles)
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
                if (triangles == _topTriangles || triangles == _bottomTriangles)
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
                if (triangles == _topTriangles)
                {
                    foreach (var tri in triangles)
                        TriangleLists[52].Add(vPos + tri);
                }
                else if (triangles == _bottomTriangles)
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
                if (triangles == _topTriangles || triangles == _bottomTriangles)
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