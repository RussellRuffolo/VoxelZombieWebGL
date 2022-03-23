using System;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public class EightBlockChunk : MonoBehaviour, IChunk
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

        chunkPosX = ID.X * 16;
        chunkPosY = ID.Y * 16;
        chunkPosZ = ID.Z * 16;
    }

    private void Update()
    {
        if (dirty)
            RenderToMesh();
    }

    private void RenderToMesh()
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

        GreedyMesh();

        mesh.SetVertices(vertices);

        for (int i = 0; i < 55; i++)
        {
            mesh.SetTriangles(TriangleLists[i].ToArray(), i);
        }

        mesh.SetNormals(normals);
        mesh.SetUVs(0, uvList);
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;

        dirty = false;
    }

    public int CHUNK_SIZE = 32;
    int chunkPosX = 0;
    int chunkPosY = 0;
    int chunkPosZ = 0;

    public void GreedyMesh()
    {
        // Sweep over each axis (X, Y and Z)
        for (var d = 0; d < 3; ++d)
        {
            //for-loop counters
            int i, j, k, l, w, h;

            int u = (d + 1) % 3;
            int v = (d + 2) % 3;
            var x = new int[3];
            var q = new int[3];

            byte[] mask = new byte[CHUNK_SIZE * CHUNK_SIZE];
            q[d] = 1;

            // Check each slice of the chunk one at a time
            for (x[d] = -1; x[d] < CHUNK_SIZE;)
            {
                // Compute the mask
                var n = 0;
                for (x[v] = 0; x[v] < CHUNK_SIZE; ++x[v])
                {
                    for (x[u] = 0; x[u] < CHUNK_SIZE; ++x[u])
                    {
                        // q determines the direction (X, Y or Z) that we are searching
                        // m.IsEmptyBlock(x,y,z) takes global map positions and returns true if no block exists there

                        bool blockCompare = x[d] >= CHUNK_SIZE - 1 || IsEmptyBlock(x[0] + q[0],
                            x[1] + q[1], x[2] + q[2]);

                        // The mask is set to true if there is a visible face between two blocks,
                        //   i.e. both aren't empty and both aren't blocks

                        if (blockCompare)
                        {
                            mask[n++] = GetBlock(x[0], x[1], x[2]);
                        }
                        else
                        {
                            bool blockCurrent = (x[d] < 0) ||
                                                IsEmptyBlock(x[0], x[1], x[2]);
                            if (blockCurrent)
                            {
                                mask[n++] = (byte) (byte.MaxValue - GetBlock(x[0] + q[0],
                                    x[1] + q[1], x[2] + q[2]));
                            }
                            else
                            {
                                mask[n++] = 0;
                            }
                        }
                    }
                }

                ++x[d];

                n = 0;

                // Generate a mesh from the mask using lexicographic ordering,      
                //   by looping over each block in this slice of the chunk
                for (j = 0; j < CHUNK_SIZE; ++j)
                {
                    for (i = 0; i < CHUNK_SIZE;)
                    {
                        if (mask[n] != 0)
                        {
                            byte blockTag = mask[n];

                            // Compute the width of this quad and store it in w                        
                            //   This is done by searching along the current axis until mask[n + w] is false
                            for (w = 1; i + w < CHUNK_SIZE && mask[n + w] == blockTag; w++)
                            {
                            }

                            // Compute the height of this quad and store it in h                        
                            //   This is done by checking if every block next to this row (range 0 to w) is also part of the mask.
                            //   For example, if w is 5 we currently have a quad of dimensions 1 x 5. To reduce triangle count,
                            //   greedy meshing will attempt to expand this quad out to CHUNK_SIZE x 5, but will stop if it reaches a hole in the mask

                            var done = false;
                            for (h = 1; j + h < CHUNK_SIZE; h++)
                            {
                                // Check each block next to this quad
                                for (k = 0; k < w; ++k)
                                {
                                    // If there's a hole in the mask, exit
                                    if (mask[n + k + h * CHUNK_SIZE] != blockTag)
                                    {
                                        done = true;
                                        break;
                                    }
                                }

                                if (done)
                                    break;
                            }

                            x[u] = i;
                            x[v] = j;

                            // du and dv determine the size and orientation of this face
                            var du = new int[3];
                            du[u] = w;

                            var dv = new int[3];
                            dv[v] = h;


                            AppendQuad(new Vector3(x[0], x[1], x[2]) * .5f, // Top-left vertice position
                                new Vector3(x[0] + du[0], x[1] + du[1], x[2] + du[2]) *
                                .5f, // Top right vertice position
                                new Vector3(x[0] + dv[0], x[1] + dv[1], x[2] + dv[2]) *
                                .5f, // Bottom left vertice position
                                new Vector3(x[0] + du[0] + dv[0], x[1] + du[1] + dv[1],
                                    x[2] + du[2] + dv[2]) * .5f, blockTag // Bottom right vertice position
                            );


                            // Clear this part of the mask, so we don't add duplicate faces
                            for (l = 0; l < h; ++l)
                            for (k = 0; k < w; ++k)
                                mask[n + k + l * CHUNK_SIZE] = 0;

                            // Increment counters and continue
                            i += w;
                            n += w;
                        }
                        else
                        {
                            i++;
                            n++;
                        }
                    }
                }
            }
        }
    }


    public void AppendQuad(Vector3 tl, Vector3 tr, Vector3 bl, Vector3 br,
        byte blockTag)
    {
        bool flipped = false;
        if (blockTag > 100)
        {
            blockTag = (byte) (byte.MaxValue - blockTag);
            flipped = true;
        }


        BlockFace face = tl.y.Equals(tr.y) ? BlockFace.Top : BlockFace.Side;
        byte adjustedTag = GetAdjustedTag(blockTag, face);
        for (int i = 0; i < 6; i++)
        {
            normals.Add(Vector3.up);
        }

        int vertPos = vertices.Count;
        uvList.Add(Vector3.up);
        uvList.Add(Vector3.zero);
        uvList.Add(Vector3.up + Vector3.right);
        uvList.Add(Vector3.up + Vector3.right);
        uvList.Add(Vector3.zero);
        uvList.Add(Vector3.right);

        vertices.Add(tl);
        vertices.Add(bl);
        vertices.Add(tr);
        vertices.Add(tr);
        vertices.Add(bl);
        vertices.Add(br);

        if (flipped)
        {
            AddWindThree(vertPos, adjustedTag);
        }
        else
        {
            AddWindOne(vertPos, adjustedTag);
        }
    }


    private void AddWindOne(int vertPos, ushort blockTag)
    {
        TriangleLists[blockTag].Add(vertPos + 2);
        TriangleLists[blockTag].Add(vertPos + 1);
        TriangleLists[blockTag].Add(vertPos + 0);


        TriangleLists[blockTag].Add(vertPos + 5);
        TriangleLists[blockTag].Add(vertPos + 4);
        TriangleLists[blockTag].Add(vertPos + 3);
    }


    private void AddWindThree(int vertPos, ushort blockTag)
    {
        TriangleLists[blockTag].Add(vertPos + 1);
        TriangleLists[blockTag].Add(vertPos + 2);
        TriangleLists[blockTag].Add(vertPos + 0);


        TriangleLists[blockTag].Add(vertPos + 4);
        TriangleLists[blockTag].Add(vertPos + 5);
        TriangleLists[blockTag].Add(vertPos + 3);
    }

    private bool IsEmptyBlock(int x, int y, int z)
    {
        return GetBlock(x, y, z) == 0;
    }

    private byte GetBlock(int x, int y, int z)
    {
        int chunkX = x / 2;
        int chunkY = y / 2;
        int chunkZ = z / 2;

        bool upX = x % 2 == 1;
        bool upY = y % 2 == 1;
        bool upZ = z % 2 == 1;

        ulong blockValue = this[chunkX, chunkY, chunkZ];

        if (upX)
        {
            if (upY)
            {
                if (upZ)
                {
                    return blockValue._111();
                }

                return blockValue._110();
            }

            return blockValue._100();
        }

        if (upY)
        {
            if (upZ)
            {
                return blockValue._011();
            }

            return blockValue._010();
        }

        if (upZ)
        {
            return blockValue._001();
        }

        return blockValue._000();
    }

    private byte GetAdjustedTag(byte blockTag, BlockFace face)
    {
        switch (blockTag)
        {
            case (2):
                if (face == BlockFace.Top)
                {
                    return 49;
                }

                return 1;
            case 17:
                if (face == BlockFace.Top)
                {
                    return 50;
                }

                return 16;
            case 43:
                if (face == BlockFace.Top)
                {
                    return 51;
                }

                return 42;
            case 44:
                if (face == BlockFace.Top)
                {
                    return 51;
                }

                return 43;
            case 46:
                if (face == BlockFace.Top)
                {
                    return 52;
                }

                return 45;
            case 47:
                if (face == BlockFace.Top)
                {
                    return 54;
                }

                return 46;
        }

        return (byte) (blockTag - 1);
    }
}