using System;
using System.Collections;
using System.Collections.Generic;
using fNbt;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor;
using UnityEngine.Networking;


public interface IVoxelEngine
{
    IWorld World { get; }
    int Length { get; set; }
    
    int Width { get; set; }
    
    int Height { get; set; }
    List<Material> materialList { get; }
}


public delegate void MapLoadedDelegate(Vector3 spawnPosition);

public class ClientVoxelEngine : MonoBehaviour, IVoxelEngine
{
    public IWorld World { get; } = new World();
    
    public List<Material> materialList { get; }

    public BoundaryController bController;

    public int Length { get; set; }
    public int Width{ get; set; } 
    public int Height { get; set; }

    public MapLoadedDelegate MapLoadedDelegate;

 

    private void Awake()
    {
        foreach (Material mat in materialList)
        {
            mat.SetFloat("_Glossiness", 0);
        }
    }

    public void LoadMap(string mapName)
    {
        if (World.Chunks.Count != 0)
        {
            UnloadMap();
        }


        string url = Application.streamingAssetsPath + "/" + mapName + ".bin";


        StartCoroutine(GetMapData(url));
    }

    private void ApplyMapData(byte[] mapBytes)
    {
        bController.SetMapBoundaries(Length, Width, Height);


        string namePrefix = "Chunk ";

        for (int z = 0; z < Width / 16; z++)
        {
            for (int x = 0; x < Length / 16; x++)
            {
                for (int y = 0; y < Height / 16; y++)
                {
                    var newChunkObj =
                        new GameObject(namePrefix + x.ToString() + "," + y.ToString() + "," + z.ToString());
                    newChunkObj.transform.position = new Vector3(x * 16, y * 16, z * 16);


                    var chunk = newChunkObj.AddComponent<GreedyChunk>();
                 
                    chunk.world = World;
                    chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
                    ChunkID newID = new ChunkID(x, y, z);
                    World.Chunks.Add(newID, chunk);
                    chunk.ID = newID;

                    chunk.GetComponent<GreedyChunk>().init();
                }
            }
        }


        int blockCount = 0;
        for (int y = 0; y < Height; y++)
        {
            for (int x = 0; x < Length; x++)
            {
                for (int z = 0; z < Width; z++)
                {
                    World[x, y, z] = mapBytes[blockCount];
                    blockCount++;
                }
            }
        }
    }

    private IEnumerator GetMapData(string url)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            yield return request.SendWebRequest();

            var test = request.downloadHandler.data;

            short length = (short) (test[1] << 8 | test[0]);
            short width = (short) (test[3] << 8 | test[2]);
            short height = (short) (test[5] << 8 | test[4]);

            Length = length;
            Width = width;
            Height = height;
            //TODO fix this needless copy
            ApplyMapData(test.Skip(6).ToArray());
        }
    }

    public void UnloadMap()
    {
        foreach (GreedyChunk toDestroy in World.Chunks.Values)
        {
            Destroy(toDestroy.gameObject);
        }

        World.Chunks.Clear();
    }
}