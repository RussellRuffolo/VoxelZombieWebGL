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

public class ClientVoxelEngine : MonoBehaviour
{
    public World world = new World();
    public List<Material> materialList;

    public BoundaryController bController;

    public int Length, Width, Height;

    private void Awake()
    {
        foreach (Material mat in materialList)
        {
            mat.SetFloat("_Glossiness", 0);
        }

        // LoadMap("asylum");
    }

    public void LoadMap(string mapName)
    {
        if (world.Chunks.Count != 0)
        {
            UnloadMap();
        }

        StartCoroutine(GetMapData("http://127.0.0.1:4555/StreamingAssets/" + mapName + ".bin"));


        // string fileName;
        //
        // if (Application.platform == RuntimePlatform.OSXPlayer)
        // {
        //     fileName = Application.dataPath + "/Resources" + "/Data" + "/StreamingAssets/" + mapName + ".bin";
        // }
        // else if (Application.platform == RuntimePlatform.WebGLPlayer)
        // {
        //
        //     StartCoroutine(GetMapData("127.0.0.1:4555/Public/StreamingAssets/" + mapName + ".bin"));
        //     return;
        //
        // }
        //
        // {
        //     fileName = Application.streamingAssetsPath + "/" + mapName + ".bin";
        // }

        // BinaryReader binReader = new BinaryReader(new FileStream(fileName, FileMode.Open));
        //
        //
        // short length = binReader.ReadInt16();
        // short width = binReader.ReadInt16();
        // short height = binReader.ReadInt16();
        //
        // byte[] mapBytes = binReader.ReadBytes(length * width * height);
        //
        // Length = length;
        // Width = width;
        // Height = height;
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


                    var chunk = newChunkObj.AddComponent<Chunk>();
                    chunk.world = world;
                    chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
                    ChunkID newID = new ChunkID(x, y, z);
                    world.Chunks.Add(newID, chunk);
                    chunk.ID = newID;

                    chunk.GetComponent<Chunk>().init();
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
                    world[x, y, z] = mapBytes[blockCount];
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
        foreach (Chunk toDestroy in world.Chunks.Values)
        {
            Destroy(toDestroy.gameObject);
        }

        world.Chunks.Clear();
    }
}