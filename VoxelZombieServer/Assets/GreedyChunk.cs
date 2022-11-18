using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public class GreedyChunk : MonoBehaviour, IChunk
{
    public IWorld world;
    private byte[] voxels = new byte[16 * 16 * 16];

    public ChunkID ID;

    private MeshFilter meshFilter;
    private MeshCollider meshCollider;
    private Mesh mesh;

    private List<int>[] TriangleLists = new List<int>[55];

    List<Vector3> vertices = new List<Vector3>();
    List<Vector3> normals = new List<Vector3>();
    List<Vector3> uvList = new List<Vector3>();

    public bool dirty { get; set; } = true;

    public byte this[int x, int y, int z]
    {
        get { return voxels[x * 16 * 16 + y * 16 + z]; }
        set { voxels[x * 16 * 16 + y * 16 + z] = value; }
    }

    public RtcMessage CurrentChunkData { get; set; }

    private VoxelServer vServer;
    private bool ActiveRendering { get; set; }

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

        vServer = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelServer>();

        chunkPosX = ID.X * 8;
        chunkPosY = ID.Y * 8;
        chunkPosZ = ID.Z * 8;
    }

    private void Update()
    {
        if (dirty && ActiveRendering)
        {
            RenderToMesh();
        }
    }


    private void RenderToMesh()
    {
        dirty = false;

        ClearMesh();

        // Task.Run(() => QuickMesh());
        QuickMesh();

        mesh.SetVertices(vertices);

        for (int i = 0; i < 55; i++)
        {
            mesh.SetTriangles(TriangleLists[i].ToArray(), i);
        }

        mesh.SetNormals(normals);
        mesh.SetUVs(0, uvList);
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;
    }

    private void ClearMesh()
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
    }

    public int CHUNK_SIZE = 16;
    int chunkPosX = 0;
    int chunkPosY = 0;
    int chunkPosZ = 0;


    public void AddActivePlayer(ushort playerId)
    {
        SetActiveRendering();
        ActiveClientIds.Add(playerId);
    }

    public void SetActiveRendering()
    {
        ActiveRendering = true;
    }

    public void RemoveActivePlayer(ushort playerId)
    {
        ActiveClientIds.Remove(playerId);
        if (ActiveClientIds.Count == 0)
        {
            ClearMesh();
            ActiveRendering = false;
        }
    }

    private List<ushort> ActiveClientIds = new List<ushort>();

    public List<ushort> ActiveIds => ActiveClientIds;

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

            var mask = new byte[CHUNK_SIZE * CHUNK_SIZE];
            var mask2 = new byte[CHUNK_SIZE * CHUNK_SIZE];

            q[d] = 1;

            // Check each slice of the chunk one at a time
            for (x[d] = -1; x[d] < CHUNK_SIZE;)
            {
                // Compute the mask
                var n = 0;
                var m = 0;
                for (x[v] = 0; x[v] < CHUNK_SIZE; ++x[v])
                {
                    for (x[u] = 0; x[u] < CHUNK_SIZE; ++x[u])
                    {
                        // q determines the direction (X, Y or Z) that we are searching
                        // m.IsEmptyBlock(x,y,z) takes global map positions and returns true if no block exists there


                        byte compareValue = GetBlock(x[0] + q[0], x[1] + q[1], x[2] + q[2]);
                        byte currentValue = GetBlock(x[0], x[1], x[2]);

                        if ( /*x[d] >= CHUNK_SIZE - 1 ||*/ (ChunkInfo._transparentBlocks.Contains(compareValue) &&
                                                            compareValue != currentValue))
                        {
                            mask[n++] = currentValue;
                        }
                        else
                        {
                            mask[n++] = 0;
                        }

                        if ( /*0 > x[d] ||*/ (ChunkInfo._transparentBlocks.Contains(currentValue) &&
                                              compareValue != currentValue))
                        {
                            mask2[m++] = compareValue;
                        }
                        else
                        {
                            mask2[m++] = 0;
                        }
                    }
                }

                ++x[d];

                n = 0;
                m = 0;

                // Generate a mesh from the mask using lexicographic ordering,      
                //   by looping over each block in this slice of the chunk
                for (j = 0; j < CHUNK_SIZE; ++j)
                {
                    for (i = 0; i < CHUNK_SIZE;)
                    {
                        if (mask[n] != 0)
                        {
                            ushort blockTag = mask[n];

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

                            // Create a quad for this face. Colour, normal or textures are not stored in this block vertex format.
                            AppendQuad(new Vector3(x[0] * .5f, x[1] * .5f, x[2] * .5f), // Top-left vertice position
                                new Vector3((x[0] + du[0]) * .5f, (x[1] + du[1]) * .5f,
                                    (x[2] + du[2]) * .5f), // Top right vertice position
                                new Vector3((x[0] + dv[0]) * .5f, (x[1] + dv[1]) * .5f,
                                    (x[2] + dv[2]) * .5f), // Bottom left vertice position
                                new Vector3((x[0] + du[0] + dv[0]) * .5f, (x[1] + du[1] + dv[1]) * .5f,
                                    (x[2] + du[2] + dv[2]) * .5f), blockTag, true // Bottom right vertice position
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

                // Generate a mesh from the mask using lexicographic ordering,      
                //   by looping over each block in this slice of the chunk
                for (j = 0; j < CHUNK_SIZE; ++j)
                {
                    for (i = 0; i < CHUNK_SIZE;)
                    {
                        if (mask2[m] != 0)
                        {
                            ushort blockTag = mask2[m];

                            // Compute the width of this quad and store it in w                        
                            //   This is done by searching along the current axis until mask[n + w] is false
                            for (w = 1; i + w < CHUNK_SIZE && mask2[m + w] == blockTag; w++)
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
                                    if (mask2[m + k + h * CHUNK_SIZE] != blockTag)
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

                            // Create a quad for this face. Colour, normal or textures are not stored in this block vertex format.
                            AppendQuad(new Vector3(x[0] * .5f, x[1] * .5f, x[2] * .5f), // Top-left vertice position
                                new Vector3((x[0] + du[0]) * .5f, (x[1] + du[1]) * .5f,
                                    (x[2] + du[2]) * .5f), // Top right vertice position
                                new Vector3((x[0] + dv[0]) * .5f, (x[1] + dv[1]) * .5f,
                                    (x[2] + dv[2]) * .5f), // Bottom left vertice position
                                new Vector3((x[0] + du[0] + dv[0]) * .5f, (x[1] + du[1] + dv[1]) * .5f,
                                    (x[2] + du[2] + dv[2]) * .5f), blockTag, false // Bottom right vertice position
                            );

                            // Clear this part of the mask, so we don't add duplicate faces
                            for (l = 0; l < h; ++l)
                            for (k = 0; k < w; ++k)
                                mask2[m + k + l * CHUNK_SIZE] = 0;

                            // Increment counters and continue
                            i += w;
                            m += w;
                        }
                        else
                        {
                            i++;
                            m++;
                        }
                    }
                }
            }
        }


        // RtcMessage chunkDataMessage = new RtcMessage(Tags.CHUNK_DATA_TAG);
        // chunkDataMessage.WriteInt(ID.X);
        // chunkDataMessage.WriteInt(ID.Y);
        // chunkDataMessage.WriteInt(ID.Z);
        //
        // for (int i = 0; i < voxels.Length; i++)
        // {
        //     chunkDataMessage.WriteByte(voxels[i]);
        // }
        //
        //
        // CurrentChunkData = chunkDataMessage;

        //UnityMainThreadDispatcher.Instance().Enqueue(ApplyChunkData());
    }


    public void AppendQuad(Vector3 tl, Vector3 tr, Vector3 bl, Vector3 br,
        ushort blockTag, bool wind)
    {
        BlockFace face = tl.y.Equals(tr.y) ? BlockFace.Top : BlockFace.Side;


        ushort adjustedTag = GetAdjustedTag(blockTag, face);


        for (int i = 0; i < 6; i++)
        {
            normals.Add(Vector3.up);
        }

        int vertPos = vertices.Count;

        vertices.Add(tl);
        vertices.Add(bl);
        vertices.Add(tr);
        vertices.Add(tr);
        vertices.Add(bl);
        vertices.Add(br);


        if (wind)
        {
            TriangleLists[adjustedTag].Add(vertPos + 2);
            TriangleLists[adjustedTag].Add(vertPos + 1);
            TriangleLists[adjustedTag].Add(vertPos + 0);


            TriangleLists[adjustedTag].Add(vertPos + 5);
            TriangleLists[adjustedTag].Add(vertPos + 4);
            TriangleLists[adjustedTag].Add(vertPos + 3);
        }
        else
        {
            TriangleLists[adjustedTag].Add(vertPos + 1);
            TriangleLists[adjustedTag].Add(vertPos + 2);
            TriangleLists[adjustedTag].Add(vertPos + 0);


            TriangleLists[adjustedTag].Add(vertPos + 4);
            TriangleLists[adjustedTag].Add(vertPos + 5);
            TriangleLists[adjustedTag].Add(vertPos + 3);
        }
    }


    public void QuickMesh()
    {
        Vector3 pos;
        int verticesPos;
        byte voxelType;

        byte blockCheck;

        for (var x = 0; x < 16; x++)
        {
            for (var y = 0; y < 16; y++)
            {
                for (var z = 0; z < 16; z++)
                {
                    pos = new Vector3(x * .5f, y * .5f, z * .5f);
                    verticesPos = vertices.Count;

                    voxelType = GetBlock(x, y, z);

                    if (voxelType == 0)
                    {
                        continue;
                    }

                    //RENDER FRONT
                    if (z == 0)
                    {
                        // ChunkID frontID = new ChunkID(ID.X, ID.Y, ID.Z - 1);
                        // if (world.Chunks.ContainsKey(frontID))
                        // {
                        //     blockCheck = GetBlock(x, y, z - 1);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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
                        // ChunkID topID = new ChunkID(ID.X, ID.Y + 1, ID.Z);
                        // if (world.Chunks.ContainsKey(topID))
                        // {
                        //     blockCheck = GetBlock(x, y + 1, z);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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
                        // ChunkID rightID = new ChunkID(ID.X + 1, ID.Y, ID.Z);
                        // if (world.Chunks.ContainsKey(rightID))
                        // {
                        //     blockCheck = GetBlock(x + 1, y, z);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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
                        // ChunkID leftID = new ChunkID(ID.X - 1, ID.Y, ID.Z);
                        // if (world.Chunks.ContainsKey(leftID))
                        // {
                        //     blockCheck = GetBlock(x - 1, y, z);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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
                        // ChunkID backID = new ChunkID(ID.X, ID.Y, ID.Z + 1);
                        // if (world.Chunks.ContainsKey(backID))
                        // {
                        //     blockCheck = GetBlock(x, y, z + 1);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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
                        // ChunkID bottomID = new ChunkID(ID.X, ID.Y - 1, ID.Z);
                        // if (world.Chunks.ContainsKey(bottomID))
                        // {
                        //     blockCheck = GetBlock(x, y - 1, z);
                        // }
                        // else
                        // {
                        //     blockCheck = 0;
                        // }
                        blockCheck = 0;
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

        RtcMessage chunkDataMessage = new RtcMessage(Tags.CHUNK_DATA_TAG);
        chunkDataMessage.WriteInt(ID.X);
        chunkDataMessage.WriteInt(ID.Y);
        chunkDataMessage.WriteInt(ID.Z);

        for (int i = 0; i < voxels.Length; i++)
        {
            chunkDataMessage.WriteByte(voxels[i]);
        }


        CurrentChunkData = chunkDataMessage;

        // UnityMainThreadDispatcher.Instance().Enqueue(ApplyChunkData());
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

    protected byte GetBlock(int x, int y, int z)
    {
        return this[x, y, z];
    }

    private ushort GetAdjustedTag(ushort blockTag, BlockFace face)
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

        return (ushort) (blockTag - 1);
    }
}

public enum BlockFace
{
    Top,
    Side,
    Bottom
}


public class UvCalculator
{
    private enum Facing
    {
        Up,
        Forward,
        Right
    };

    public static Vector2[] CalculateUVs(Vector3[] v /*vertices*/, float scale)
    {
        var uvs = new Vector2[v.Length];

        for (int i = 0; i < uvs.Length; i += 3)
        {
            int i0 = i;
            int i1 = i + 1;
            int i2 = i + 2;

            Vector3 v0 = v[i0];
            Vector3 v1 = v[i1];
            Vector3 v2 = v[i2];

            Vector3 side1 = v1 - v0;
            Vector3 side2 = v2 - v0;
            var direction = Vector3.Cross(side1, side2);
            var facing = FacingDirection(direction);
            switch (facing)
            {
                case Facing.Forward:
                    uvs[i0] = ScaledUV(v0.x, v0.y, scale);
                    uvs[i1] = ScaledUV(v1.x, v1.y, scale);
                    uvs[i2] = ScaledUV(v2.x, v2.y, scale);
                    break;
                case Facing.Up:
                    uvs[i0] = ScaledUV(v0.x, v0.z, scale);
                    uvs[i1] = ScaledUV(v1.x, v1.z, scale);
                    uvs[i2] = ScaledUV(v2.x, v2.z, scale);
                    break;
                case Facing.Right:
                    uvs[i0] = ScaledUV(v0.y, v0.z, scale);
                    uvs[i1] = ScaledUV(v1.y, v1.z, scale);
                    uvs[i2] = ScaledUV(v2.y, v2.z, scale);
                    break;
            }
        }

        return uvs;
    }

    private static bool FacesThisWay(Vector3 v, Vector3 dir, Facing p, ref float maxDot, ref Facing ret)
    {
        float t = Vector3.Dot(v, dir);
        if (t > maxDot)
        {
            ret = p;
            maxDot = t;
            return true;
        }

        return false;
    }

    private static Facing FacingDirection(Vector3 v)
    {
        var ret = Facing.Up;
        float maxDot = 0;

        if (!FacesThisWay(v, Vector3.right, Facing.Right, ref maxDot, ref ret))
            FacesThisWay(v, Vector3.left, Facing.Right, ref maxDot, ref ret);

        if (!FacesThisWay(v, Vector3.forward, Facing.Forward, ref maxDot, ref ret))
            FacesThisWay(v, Vector3.back, Facing.Forward, ref maxDot, ref ret);

        if (!FacesThisWay(v, Vector3.up, Facing.Up, ref maxDot, ref ret))
            FacesThisWay(v, Vector3.down, Facing.Up, ref maxDot, ref ret);

        return ret;
    }

    private static Vector2 ScaledUV(float uv1, float uv2, float scale)
    {
        return new Vector2(uv1 / scale, uv2 / scale);
    }
}