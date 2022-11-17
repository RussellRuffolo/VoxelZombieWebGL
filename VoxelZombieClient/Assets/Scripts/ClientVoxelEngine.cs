using System;
using System.Collections;
using System.Collections.Generic;
using fNbt;
using System.IO;
using System.Linq;
using Client;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor;
using UnityEngine.Networking;


public delegate void MapLoadedDelegate(Vector3 spawnPosition);

public class ClientVoxelEngine : MonoBehaviour, IVoxelEngine
{
    public IWorld World { get; private set; }

    [SerializeField] private List<Material> Materials;
    public List<Material> materialList => Materials;

    public BoundaryController bController;

    public int Length { get; set; }
    public int Width { get; set; }
    public int Height { get; set; }

    public MapLoadedDelegate MapLoadedDelegate;

    public VoxelClient VoxelClient;

    private void Awake()
    {
        World = new World(this);
        foreach (Material mat in materialList)
        {
            mat.SetFloat("_Glossiness", 0);
        }

        VoxelClient = GetComponent<VoxelClient>();
    }

    public void LoadMap(string mapName)
    {
    }
    // {
    //     if (World.Chunks.Count != 0)
    //     {
    //         UnloadMap();
    //     }
    //
    //
    //     string url = Application.streamingAssetsPath + "/" + mapName + ".bin";
    //
    //
    //     StartCoroutine(GetMapData(url));
    // }

    public void CreateChunk(ChunkID id)
    {
        var newChunkObj =
            new GameObject(namePrefix + id.X.ToString() + "," + id.Y.ToString() + "," + id.Z.ToString());
        newChunkObj.transform.position = new Vector3(id.X * 8, id.Y * 8, id.Z * 8);


        var chunk = newChunkObj.AddComponent<ClientChunk>();

        chunk.world = World;
        chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
        World.Chunks.Add(id, chunk);
        chunk.ID = id;
        chunk.VoxelClient = VoxelClient;

        chunk.init();
    }

    string namePrefix = "Chunk ";

    public void CreateChunks(int l, int w, int h, float spawnX, float spawnY, float spawnZ)
    {
        if (World.Chunks.Count != 0)
        {
            UnloadMap();
        }

        Length = l;
        Width = w;
        Height = h;

        bController.SetMapBoundaries(Length, Width, Height);


        // for (int z = 0; z < Width / 8; z++)
        // {
        //     for (int x = 0; x < Length / 8; x++)
        //     {
        //         for (int y = 0; y < Height / 8; y++)
        //         {
        //             var newChunkObj =
        //                 new GameObject(namePrefix + x.ToString() + "," + y.ToString() + "," + z.ToString());
        //             newChunkObj.transform.position = new Vector3(x * 8, y * 8, z * 8);
        //
        //
        //             var chunk = newChunkObj.AddComponent<ClientChunk>();
        //
        //             chunk.world = World;
        //             chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
        //             ChunkID newID = new ChunkID(x, y, z);
        //             World.Chunks.Add(newID, chunk);
        //             chunk.ID = newID;
        //             chunk.VoxelClient = VoxelClient;
        //
        //             chunk.GetComponent<ClientChunk>().init();
        //         }
        //     }
        // }
    }

    // private void ApplyMapData(byte[] mapBytes)
    // {
    //     bController.SetMapBoundaries(Length, Width, Height);
    //
    //
    //     string namePrefix = "Chunk ";
    //
    //     for (int z = 0; z < Width / 8; z++)
    //     {
    //         for (int x = 0; x < Length / 8; x++)
    //         {
    //             for (int y = 0; y < Height / 8; y++)
    //             {
    //                 var newChunkObj =
    //                     new GameObject(namePrefix + x.ToString() + "," + y.ToString() + "," + z.ToString());
    //                 newChunkObj.transform.position = new Vector3(x * 8, y * 8, z * 8);
    //
    //
    //                 var chunk = newChunkObj.AddComponent<ClientChunk>();
    //
    //                 chunk.world = World;
    //                 chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
    //                 ChunkID newID = new ChunkID(x, y, z);
    //                 World.Chunks.Add(newID, chunk);
    //                 chunk.ID = newID;
    //
    //                 chunk.GetComponent<ClientChunk>().init();
    //             }
    //         }
    //     }
    //
    //
    //     int blockCount = 0;
    //     for (ushort y = 0; y < Height; y++)
    //     {
    //         for (ushort x = 0; x < Length; x++)
    //         {
    //             for (ushort z = 0; z < Width; z++)
    //             {
    //                 byte blockId = mapBytes[blockCount];
    //
    //
    //                 //halfblock nonsense
    //                 if (blockId != 44)
    //                 {
    //                     World[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
    //                     World[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
    //                     World[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
    //                     World[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
    //                 }
    //
    //                 World[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2)] = blockId;
    //
    //                 World[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2)] = blockId;
    //
    //
    //                 World[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;
    //
    //                 World[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;
    //
    //
    //                 blockCount++;
    //             }
    //         }
    //     }
    // }
    //
    // private IEnumerator GetMapData(string url)
    // {
    //     using (UnityWebRequest request = UnityWebRequest.Get(url))
    //     {
    //         yield return request.SendWebRequest();
    //
    //         var test = request.downloadHandler.data;
    //
    //         short length = (short) (test[1] << 8 | test[0]);
    //         short width = (short) (test[3] << 8 | test[2]);
    //         short height = (short) (test[5] << 8 | test[4]);
    //
    //         Length = length;
    //         Width = width;
    //         Height = height;
    //         //TODO fix this needless copy
    //         ApplyMapData(test.Skip(6).ToArray());
    //     }
    // }

    public void UnloadMap()
    {
        foreach (ClientChunk toDestroy in World.Chunks.Values)
        {
            Destroy(toDestroy.gameObject);
        }

        World.Chunks.Clear();
    }
}