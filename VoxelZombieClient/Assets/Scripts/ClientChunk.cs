using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public class ClientChunk : MonoBehaviour, IChunk
{
    public IWorld world;
    private UInt64[] voxels = new UInt64[16 * 16 * 16];

    public ChunkID ID;

    private MeshFilter meshFilter;
    private MeshCollider meshCollider;
    private Mesh mesh;

    private List<int>[] TriangleLists = new List<int>[55];


    List<Vector3> vertices = new List<Vector3>();
    List<Vector3> normals = new List<Vector3>();
    List<Vector3> uvList = new List<Vector3>();

    public bool dirty { get; set; } = true;

    public UInt64 this[int x, int y, int z]
    {
        get { return voxels[x * 16 * 16 + y * 16 + z]; }
        set { voxels[x * 16 * 16 + y * 16 + z] = value; }
    }

    public void init()
    {
        tag = "Ground";

        meshFilter = GetComponent<MeshFilter>();
        meshCollider = GetComponent<MeshCollider>();
        mesh = new Mesh();
        mesh.subMeshCount = 55;

        for (int i = 0; i < 55; i++)
        {
            TriangleLists[i] = new List<int>();
        }
    }

    public void ProcessChunkChange(RtcMessageReader reader)
    {
        vertices.Clear();
        uvList.Clear();

        for (int i = 0; i < 55; i++)
        {
            TriangleLists[i].Clear();
        }

        normals.Clear();

        mesh.Clear();
        mesh.subMeshCount = 55;

        int vertexCount = reader.ReadInt();

        for (int i = 0; i < vertexCount; i++)
        {
            vertices.Add(new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat()));
        }

        for (int i = 0; i < 55; i++)
        {
            int triangleCount = reader.ReadInt();

            for (int j = 0; j < triangleCount; j++)
            {
                TriangleLists[i].Add(reader.ReadInt());
            }
        }

        mesh.SetVertices(vertices);

        for (int i = 0; i < 55; i++)
        {
            mesh.SetTriangles(TriangleLists[i].ToArray(), i);
        }

        for (int i = 0; i < vertexCount; i++)
        {
            normals.Add(Vector3.up);
        }


        mesh.SetNormals(normals);
        mesh.SetUVs(0, GreedyChunk.UvCalculator.CalculateUVs(vertices.ToArray(), 1).ToList());


        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;

    }
} 