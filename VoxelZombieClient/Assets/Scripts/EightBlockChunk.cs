// using System;
// using System.Collections.Generic;
// using UnityEngine;
//
// [RequireComponent(typeof(MeshFilter))]
// [RequireComponent(typeof(MeshRenderer))]
// [RequireComponent(typeof(MeshCollider))]
// public class EightBlockChunk : MonoBehaviour, IChunk
// {
//     private UInt64[] voxels = new UInt64[16 * 16 * 16];
//
//     public ChunkID ID;
//
//     private MeshFilter meshFilter;
//     private MeshCollider meshCollider;
//
//     public Material WaterMat;
//
//     private MeshFilter waterMeshFilter;
//     private MeshCollider waterMeshCollider;
//
//     private Mesh mesh;
//     private Mesh waterMesh;
//
// //    private List<int> Triangles = new List<int>();
//     private List<int>[] TriangleLists = new List<int>[55];
//
//     List<int> waterTriangles = new List<int>();
//
//     List<Vector3> vertices = new List<Vector3>();
//     List<Vector3> waterVertices = new List<Vector3>();
//
//     List<Vector3> normals = new List<Vector3>();
//     List<Vector3> waterNormals = new List<Vector3>();
//
//
//     List<Vector3> uvList = new List<Vector3>();
//     List<Vector3> waterUVs = new List<Vector3>();
//
//     public bool dirty { get; set; } = true;
//
//     public UInt64 this[int x, int y, int z]
//     {
//         get { return voxels[x * 16 * 16 + y * 16 + z]; }
//         set { voxels[x * 16 * 16 + y * 16 + z] = value; }
//     }
//
//     public void init()
//     {
//         tag = "Ground";
//
//         meshFilter = GetComponent<MeshFilter>();
//         meshCollider = GetComponent<MeshCollider>();
//         mesh = new Mesh();
//         mesh.subMeshCount = 1;
//
//         waterMesh = new Mesh();
//
//         GameObject waterChunk = new GameObject
//         {
//             name = "waterChunk",
//             transform =
//             {
//                 position = transform.position,
//                 parent = transform
//             },
//             tag = "Water",
//             layer = 4
//         };
//
//         for (int i = 0; i < 55; i++)
//         {
//             TriangleLists[i] = new List<int>();
//         }
//
//         MeshRenderer waterRenderer = waterChunk.AddComponent<MeshRenderer>();
//         waterRenderer.material = WaterMat;
//
//         waterMeshFilter = waterChunk.AddComponent<MeshFilter>();
//         waterMeshCollider = waterChunk.AddComponent<MeshCollider>();
//     }
//
//     private void Update()
//     {
//         if (dirty)
//             RenderToMesh();
//     }
//
//     private void RenderToMesh()
//     {
//         vertices.Clear();
//         uvList.Clear();
//
//         //   Triangles.Clear();
//
//         for (int i = 0; i < 55; i++)
//         {
//             TriangleLists[i].Clear();
//         }
//
//         normals.Clear();
//
//         mesh.Clear();
//         mesh.subMeshCount = 55;
//
//         waterVertices.Clear();
//         waterUVs.Clear();
//
//         waterTriangles.Clear();
//         waterNormals.Clear();
//
//         waterMesh.Clear();
//         waterMesh.subMeshCount = 1;
//
//         GreedyMesh();
//
//         mesh.SetVertices(vertices);
//
//
//         // mesh.SetTriangles(Triangles, 0);
//         for (int i = 0; i < 55; i++)
//         {
//             mesh.SetTriangles(TriangleLists[i], i);
//         }
//
//         mesh.SetNormals(normals);
//         mesh.SetUVs(0, uvList);
//         meshFilter.mesh = mesh;
//         meshCollider.sharedMesh = mesh;
//
//         waterMesh.SetVertices(waterVertices);
//         waterMesh.SetTriangles(waterTriangles, 0);
//         waterMesh.SetNormals(waterNormals);
//         waterMeshFilter.mesh = waterMesh;
//         waterMeshCollider.sharedMesh = waterMesh;
//
//         dirty = false;
//     }
//
//     public int CHUNK_SIZE = 32;
//
//
//     public void GreedyMesh()
//     {
//         // Sweep over each axis (X, Y and Z)
//         for (var d = 0; d < 3; ++d)
//         {
//             //for-loop counters
//             int i, j, k, l, w, h;
//
//             int u = (d + 1) % 3;
//             int v = (d + 2) % 3;
//             var x = new int[3];
//             var q = new int[3];
//
//             byte[] mask = new byte[CHUNK_SIZE * CHUNK_SIZE];
//
//             byte currentId;
//
//             byte compareId;
//
//             bool blockCurrent;
//             bool blockCompare;
//             q[d] = 1;
//
//             // Check each slice of the chunk one at a time
//             for (x[d] = -1; x[d] < CHUNK_SIZE;)
//             {
//                 // Compute the mask
//                 var n = 0;
//                 byte lastId = 0;
//                 for (x[v] = 0; x[v] < CHUNK_SIZE; ++x[v])
//                 {
//                     for (x[u] = 0; x[u] < CHUNK_SIZE; ++x[u])
//                     {
//                         blockCompare = x[d] >= CHUNK_SIZE - 1;
//                         compareId = 0;
//
//                         if (!blockCompare)
//                         {
//                             compareId = GetBlock(x[0] + q[0],
//                                 x[1] + q[1], x[2] + q[2]);
//
//                             if (_transparentBlockIDs.Contains(compareId))
//                             {
//                                 blockCompare = true;
//                             }
//                         }
//
//                         if (blockCompare)
//                         {
//                             currentId = GetBlock(x[0], x[1], x[2]);
//
//                             if (currentId == 0 && compareId != 0)
//                             {
//                                 mask[n++] = (byte) (byte.MaxValue - compareId);
//                             }
//                             else if (currentId != compareId)
//                             {
//                                 mask[n++] = currentId;
//                             }
//                             else
//                             {
//                                 mask[n++] = 0;
//                             }
//                         }
//                         else
//                         {
//                             // bool blockCurrent = (x[d] < 0) ||
//                             //                     IsEmptyBlock(x[0], x[1], x[2]);
//
//
//                             blockCurrent = (x[d] < 0);
//                             currentId = 0;
//                             if (!blockCurrent)
//                             {
//                                 currentId = GetBlock(x[0], x[1], x[2]);
//
//                                 if (_transparentBlockIDs.Contains(currentId))
//                                 {
//                                     blockCurrent = true;
//                                 }
//                             }
//
//                             if (blockCurrent)
//                             {
//                                 compareId = GetBlock(x[0] + q[0],
//                                     x[1] + q[1], x[2] + q[2]);
//                                 if (currentId != compareId)
//                                 {
//                                     mask[n++] = (byte) (byte.MaxValue - compareId);
//                                 }
//                                 else
//                                 {
//                                     mask[n++] = 0;
//                                 }
//                             }
//                             else
//                             {
//                                 mask[n++] = 0;
//                             }
//                         }
//                     }
//                 }
//
//                 ++x[d];
//
//                 n = 0;
//
//                 // Generate a mesh from the mask using lexicographic ordering,      
//                 //   by looping over each block in this slice of the chunk
//                 for (j = 0; j < CHUNK_SIZE; ++j)
//                 {
//                     for (i = 0; i < CHUNK_SIZE;)
//                     {
//                         if (mask[n] != 0)
//                         {
//                             byte blockTag = mask[n];
//
//                             // Compute the width of this quad and store it in w                        
//                             //   This is done by searching along the current axis until mask[n + w] is false
//                             for (w = 1; i + w < CHUNK_SIZE && mask[n + w] == blockTag; w++)
//                             {
//                             }
//
//                             // Compute the height of this quad and store it in h                        
//                             //   This is done by checking if every block next to this row (range 0 to w) is also part of the mask.
//                             //   For example, if w is 5 we currently have a quad of dimensions 1 x 5. To reduce triangle count,
//                             //   greedy meshing will attempt to expand this quad out to CHUNK_SIZE x 5, but will stop if it reaches a hole in the mask
//
//                             var done = false;
//                             for (h = 1; j + h < CHUNK_SIZE; h++)
//                             {
//                                 // Check each block next to this quad
//                                 for (k = 0; k < w; ++k)
//                                 {
//                                     // If there's a hole in the mask, exit
//                                     if (mask[n + k + h * CHUNK_SIZE] != blockTag)
//                                     {
//                                         done = true;
//                                         break;
//                                     }
//                                 }
//
//                                 if (done)
//                                     break;
//                             }
//
//                             x[u] = i;
//                             x[v] = j;
//
//                             // du and dv determine the size and orientation of this face
//                             var du = new int[3];
//                             du[u] = w;
//
//                             var dv = new int[3];
//                             dv[v] = h;
//
//                             if (blockTag == 9)
//                             {
//                                 AppendWaterQuad(new Vector3(x[0], x[1], x[2]) * .5f, // Top-left vertice position
//                                     new Vector3(x[0] + du[0], x[1] + du[1], x[2] + du[2]) *
//                                     .5f, // Top right vertice position
//                                     new Vector3(x[0] + dv[0], x[1] + dv[1], x[2] + dv[2]) *
//                                     .5f, // Bottom left vertice position
//                                     new Vector3(x[0] + du[0] + dv[0], x[1] + du[1] + dv[1],
//                                         x[2] + du[2] + dv[2]) * .5f, q, blockTag // Bottom right vertice position
//                                 );
//                             }
//                             else
//                             {
//                                 AppendQuad(new Vector3(x[0], x[1], x[2]) * .5f, // Top-left vertice position
//                                     new Vector3(x[0] + du[0], x[1] + du[1], x[2] + du[2]) *
//                                     .5f, // Top right vertice position
//                                     new Vector3(x[0] + dv[0], x[1] + dv[1], x[2] + dv[2]) *
//                                     .5f, // Bottom left vertice position
//                                     new Vector3(x[0] + du[0] + dv[0], x[1] + du[1] + dv[1],
//                                         x[2] + du[2] + dv[2]) * .5f, q, blockTag // Bottom right vertice position
//                                 );
//                             }
//
//
//                             // Clear this part of the mask, so we don't add duplicate faces
//                             for (l = 0; l < h; ++l)
//                             for (k = 0; k < w; ++k)
//                                 mask[n + k + l * CHUNK_SIZE] = 0;
//
//                             // Increment counters and continue
//                             i += w;
//                             n += w;
//                         }
//                         else
//                         {
//                             i++;
//                             n++;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//
//
//     public void AppendWaterQuad(Vector3 tl, Vector3 tr, Vector3 bl, Vector3 br, int[] q,
//         byte blockTag)
//     {
//         flipped = false;
//         if (blockTag > 100)
//         {
//             blockTag = (byte) (byte.MaxValue - blockTag);
//             flipped = true;
//         }
//
//         face = tl.y.Equals(tr.y) ? BlockFace.Top : BlockFace.Side;
//         adjustedTag = GetAdjustedTag(blockTag, face);
//         for (int i = 0; i < 6; i++)
//         {
//             waterNormals.Add(Vector3.up);
//         }
//
//         vertPos = waterVertices.Count;
//
//
//         if (q[0] == 1)
//         {
//             if (flipped)
//             {
//                 waterUVs.Add(new Vector2(bl.z - tl.z, 0));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(bl.z - tl.z, tr.y - tl.y));
//                 waterUVs.Add(new Vector2(bl.z - tl.z, tr.y - tl.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(0, tr.y - tl.y));
//             }
//             else
//             {
//                 waterUVs.Add(new Vector2(tl.z - bl.z, 0));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(tl.z - bl.z, tl.y - tr.y));
//                 waterUVs.Add(new Vector2(tl.z - bl.z, tl.y - tr.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(0, tl.y - tr.y));
//             }
//         }
//         else if (q[1] == 1)
//         {
//             if (flipped)
//             {
//                 waterUVs.Add(new Vector2(0, bl.x - tl.x));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(tr.z - tl.z, bl.x - tl.x));
//                 waterUVs.Add(new Vector2(tr.z - tl.z, bl.x - tl.x));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(br.z - bl.z, 0));
//             }
//             else
//             {
//                 waterUVs.Add(new Vector2(0, tl.x - bl.x));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(tl.z - tr.z, tl.x - bl.x));
//                 waterUVs.Add(new Vector2(tl.z - tr.z, tl.x - bl.x));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(bl.z - br.z, 0));
//             }
//         }
//         else
//         {
//             if (flipped)
//             {
//                 waterUVs.Add(new Vector2(0, bl.y - tl.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(tr.x - tl.x, bl.y - tl.y));
//                 waterUVs.Add(new Vector2(tr.x - tl.x, bl.y - tl.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(br.x - bl.x, 0));
//             }
//             else
//             {
//                 waterUVs.Add(new Vector2(0, tl.y - bl.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(tl.x - tr.x, tl.y - bl.y));
//                 waterUVs.Add(new Vector2(tl.x - tr.x, tl.y - bl.y));
//                 waterUVs.Add(new Vector2(0, 0));
//                 waterUVs.Add(new Vector2(bl.x - br.x, 0));
//             }
//         }
//
//         waterVertices.Add(tl);
//         waterVertices.Add(bl);
//         waterVertices.Add(tr);
//         waterVertices.Add(tr);
//         waterVertices.Add(bl);
//         waterVertices.Add(br);
//
//         if (flipped)
//         {
//             AddWindThreeWater(vertPos);
//         }
//         else
//         {
//             AddWindOneWater(vertPos);
//         }
//     }
//
//     private bool flipped;
//     private BlockFace face;
//     private byte adjustedTag;
//     private int vertPos;
//
//     public void AppendQuad(Vector3 tl, Vector3 tr, Vector3 bl, Vector3 br, int[] q,
//         byte blockTag)
//     {
//         flipped = false;
//         if (blockTag > 100)
//         {
//             blockTag = (byte) (byte.MaxValue - blockTag);
//             flipped = true;
//         }
//
//         if (q[1] == 1)
//         {
//             if (flipped)
//             {
//                 face = BlockFace.Bottom;
//             }
//             else
//             {
//                 face = BlockFace.Top;
//             }
//         }
//         else
//         {
//             face = BlockFace.Side;
//         }
//
//
//         adjustedTag = GetAdjustedTag(blockTag, face);
//         for (int i = 0; i < 6; i++)
//         {
//             normals.Add(Vector3.up);
//         }
//
//         vertPos = vertices.Count;
//
//         int uvTag = 0;
//
//         if (q[0] == 1)
//         {
//             if (flipped)
//             {
//                 uvList.Add(new Vector3(bl.z - tl.z, 0, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(bl.z - tl.z, tr.y - tl.y, uvTag));
//                 uvList.Add(new Vector3(bl.z - tl.z, tr.y - tl.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(0, tr.y - tl.y, uvTag));
//             }
//             else
//             {
//                 uvList.Add(new Vector3(tl.z - bl.z, 0, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(tl.z - bl.z, tl.y - tr.y, uvTag));
//                 uvList.Add(new Vector3(tl.z - bl.z, tl.y - tr.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(0, tl.y - tr.y, uvTag));
//             }
//         }
//         else if (q[1] == 1)
//         {
//             if (flipped)
//             {
//                 uvList.Add(new Vector3(0, bl.x - tl.x, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(tr.z - tl.z, bl.x - tl.x, uvTag));
//                 uvList.Add(new Vector3(tr.z - tl.z, bl.x - tl.x, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(br.z - bl.z, 0, uvTag));
//             }
//             else
//             {
//                 uvList.Add(new Vector3(0, tl.x - bl.x, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(tl.z - tr.z, tl.x - bl.x, uvTag));
//                 uvList.Add(new Vector3(tl.z - tr.z, tl.x - bl.x, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(bl.z - br.z, 0, uvTag));
//             }
//         }
//         else
//         {
//             if (flipped)
//             {
//                 uvList.Add(new Vector3(0, bl.y - tl.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(tr.x - tl.x, bl.y - tl.y, uvTag));
//                 uvList.Add(new Vector3(tr.x - tl.x, bl.y - tl.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(br.x - bl.x, 0, uvTag));
//             }
//             else
//             {
//                 uvList.Add(new Vector3(0, tl.y - bl.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(tl.x - tr.x, tl.y - bl.y, uvTag));
//                 uvList.Add(new Vector3(tl.x - tr.x, tl.y - bl.y, uvTag));
//                 uvList.Add(new Vector3(0, 0, uvTag));
//                 uvList.Add(new Vector3(bl.x - br.x, 0, uvTag));
//             }
//         }
//
//         vertices.Add(tl);
//         vertices.Add(bl);
//         vertices.Add(tr);
//         vertices.Add(tr);
//         vertices.Add(bl);
//         vertices.Add(br);
//
//         if (flipped)
//         {
//             AddWindThree(vertPos, adjustedTag);
//         }
//         else
//         {
//             AddWindOne(vertPos, adjustedTag);
//         }
//     }
//
//
//     private void AddWindOne(int vertPos, byte adjustedTag)
//     {
//         // Triangles.Add(vertPos + 2);
//         // Triangles.Add(vertPos + 1);
//         // Triangles.Add(vertPos + 0);
//         //
//         //
//         // Triangles.Add(vertPos + 5);
//         // Triangles.Add(vertPos + 4);
//         // Triangles.Add(vertPos + 3);
//
//
//         TriangleLists[adjustedTag].Add(vertPos + 2);
//         TriangleLists[adjustedTag].Add(vertPos + 1);
//         TriangleLists[adjustedTag].Add(vertPos + 0);
//
//
//         TriangleLists[adjustedTag].Add(vertPos + 5);
//         TriangleLists[adjustedTag].Add(vertPos + 4);
//         TriangleLists[adjustedTag].Add(vertPos + 3);
//     }
//
//
//     private void AddWindThree(int vertPos, byte adjustedTag)
//     {
//         TriangleLists[adjustedTag].Add(vertPos + 1);
//         TriangleLists[adjustedTag].Add(vertPos + 2);
//         TriangleLists[adjustedTag].Add(vertPos + 0);
//
//
//         TriangleLists[adjustedTag].Add(vertPos + 4);
//         TriangleLists[adjustedTag].Add(vertPos + 5);
//         TriangleLists[adjustedTag].Add(vertPos + 3);
//
//
//         // Triangles.Add(vertPos + 1);
//         // Triangles.Add(vertPos + 2);
//         // Triangles.Add(vertPos + 0);
//         //
//         //
//         // Triangles.Add(vertPos + 4);
//         // Triangles.Add(vertPos + 5);
//         // Triangles.Add(vertPos + 3);
//     }
//
//
//     private void AddWindOneWater(int vertPos)
//     {
//         waterTriangles.Add(vertPos + 2);
//         waterTriangles.Add(vertPos + 1);
//         waterTriangles.Add(vertPos + 0);
//
//
//         waterTriangles.Add(vertPos + 5);
//         waterTriangles.Add(vertPos + 4);
//         waterTriangles.Add(vertPos + 3);
//     }
//
//
//     private void AddWindThreeWater(int vertPos)
//     {
//         waterTriangles.Add(vertPos + 1);
//         waterTriangles.Add(vertPos + 2);
//         waterTriangles.Add(vertPos + 0);
//
//
//         waterTriangles.Add(vertPos + 4);
//         waterTriangles.Add(vertPos + 5);
//         waterTriangles.Add(vertPos + 3);
//     }
//
//     private bool IsEmptyBlock(int x, int y, int z)
//     {
//         byte blockId = GetBlock(x, y, z);
//         return blockId == 0; // || blockId == 9 || blockId == 11 || blockId == 18 || blockId == 20;
//     }
//
//     private bool IsTransparentBlock(int x, int y, int z, int i, int j, int k)
//     {
//         byte blockId = (byte) (GetBlock(x, y, z));
//         if (_transparentBlockIDs.Contains(blockId))
//         {
//             if (blockId == GetBlock(i, j, k))
//             {
//                 return false;
//             }
//
//             return true;
//         }
//
//         return false;
//     }
//
//     private List<int> _transparentBlockIDs = new List<int>
//     {
//         0, 9, 11, 18,
//         20, 37, 38, 39, 40, 44, 57, 61
//     };
//
//     private byte GetBlock(int x, int y, int z)
//     {
//         int chunkX = x / 2;
//         int chunkY = y / 2;
//         int chunkZ = z / 2;
//
//         bool upX = x % 2 == 1;
//         bool upY = y % 2 == 1;
//         bool upZ = z % 2 == 1;
//
//         ulong blockValue = this[chunkX, chunkY, chunkZ];
//
//         if (upX)
//         {
//             if (upY)
//             {
//                 if (upZ)
//                 {
//                     return blockValue._111();
//                 }
//
//                 return blockValue._110();
//             }
//
//             return blockValue._100();
//         }
//
//         if (upY)
//         {
//             if (upZ)
//             {
//                 return blockValue._011();
//             }
//
//             return blockValue._010();
//         }
//
//         if (upZ)
//         {
//             return blockValue._001();
//         }
//
//         return blockValue._000();
//     }
//
//     private byte GetAdjustedTag(byte blockTag, BlockFace face)
//     {
//         switch (blockTag)
//         {
//             case (2):
//                 if (face == BlockFace.Top)
//                 {
//                     return 49;
//                 }
//                 else if (face == BlockFace.Bottom)
//                 {
//                     return 2;
//                 }
//
//                 return 1;
//             case 17:
//                 if (face == BlockFace.Top || face == BlockFace.Bottom)
//                 {
//                     return 50;
//                 }
//
//                 return 16;
//             case 43:
//                 if (face == BlockFace.Top || face == BlockFace.Bottom)
//                 {
//                     return 51;
//                 }
//
//                 return 42;
//             case 44:
//                 if (face == BlockFace.Top || face == BlockFace.Bottom)
//                 {
//                     return 51;
//                 }
//
//                 return 43;
//             case 46:
//                 if (face == BlockFace.Top)
//                 {
//                     return 52;
//                 }
//                 else if (face == BlockFace.Bottom)
//                 {
//                     return 53;
//                 }
//
//                 return 45;
//             case 47:
//                 if (face == BlockFace.Top || face == BlockFace.Bottom)
//                 {
//                     return 54;
//                 }
//
//                 return 46;
//         }
//
//         return (byte) (blockTag - 1);
//     }
// }