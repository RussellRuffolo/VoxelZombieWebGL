using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Networking;
using Random = UnityEngine.Random;

public class SinglePlayerVoxelEngine : MonoBehaviour, IVoxelEngine
{
    public IWorld World { get; } = new World();

    [SerializeField] private List<Material> Materials;
    public List<Material> materialList => Materials;

    public BoundaryController bController;

    public Material WaterMaterial;
    [SerializeField] public Texture2D[] ordinaryTextures;

    [SerializeField] public Material MaterialaArray;
    private static readonly int MainTex = Shader.PropertyToID("_MainTex");
    public int Length { get; set; }
    public int Width { get; set; }
    public int Height { get; set; }

    private void Awake()
    {
        //CreateTextureArray();
    }

    public void LoadMap(string mapName)
    {
        if (World.Chunks.Count != 0)
        {
            UnloadMap();
        }

        if (mapName == "one_chunk")
        {
            byte[] mapData = new byte[16 * 16 * 16];
            Length = 16;
            Height = 16;
            Width = 16;

            for (int i = 0; i < 16 * 16 * 16; i++)
            {
                // bool placeBlock = i % 2 == 0;
                // if (placeBlock)
                // {
                //     mapData[i] = (byte) Random.Range(1, 55);
                // }
                // else
                // {
                //     mapData[i] = 0;
                // }
                //mapData[i] = (byte) Random.Range(1, 55);
                mapData[i] = 1;
            }

            ApplyMapData(mapData);
            return;
        }


        string url = Application.streamingAssetsPath + "/" + mapName + ".bin";


        StartCoroutine(GetMapData(url));
    }


    // private void CreateTextureArray()
    // {
    //     // Create Texture2DArray
    //     Texture2DArray texture2DArray = new
    //         Texture2DArray(ordinaryTextures[0].width,
    //             ordinaryTextures[0].height, ordinaryTextures.Length,
    //             TextureFormat.RGBA32, true, false);
    //     // Apply settings
    //     texture2DArray.filterMode = FilterMode.Bilinear;
    //     texture2DArray.wrapMode = TextureWrapMode.Repeat;
    //     // Loop through ordinary textures and copy pixels to the
    //     // Texture2DArray
    //     for (int i = 0; i < ordinaryTextures.Length; i++)
    //     {
    //         texture2DArray.SetPixels(ordinaryTextures[i].GetPixels(0),
    //             i, 0);
    //     }
    //
    //     // Apply our changes
    //     texture2DArray.Apply();
    //     // Set the texture to a material
    //     MaterialaArray.SetTexture(MainTex, texture2DArray);
    // }


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
            ApplyMapData(test);
        }
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


                    GreedyChunk chunk = newChunkObj.AddComponent<GreedyChunk>();
                    ChunkID newID = new ChunkID(x, y, z);
                    World.Chunks.Add(newID, chunk);
                    chunk.ID = newID;
                    chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
                    chunk.world = World;
             //       chunk.WaterMat = WaterMaterial;
                    chunk.init();
                }
            }
        }


        int blockCount = 6;
        for (int y = 0; y < Height; y++)
        {
            for (int x = 0; x < Length; x++)
            {
                for (int z = 0; z < Width; z++)
                {
                    //  UInt16 blockId = mapBytes[blockCount];
                    //    UInt32 combinedId = (UInt32) ((blockId << 16) + blockId);
                    try
                    {
                        byte blockId = mapBytes[blockCount];
                        ulong combinedId = 0;
                        if (blockId == 44)
                        {
                            combinedId.Pack(44, 44, 44, 44, 0, 0, 0, 0);
                        }
                        else
                        {
                            combinedId.Pack(blockId, blockId, blockId, blockId, blockId, blockId, blockId, blockId);
                        }

                        World[x, y, z] = combinedId;
                        //           World[x, y + .5F, z] = mapBytes[blockCount];
                        blockCount++;
                    }
                    catch (Exception e)
                    {
                        Debug.Log("X: " + x + " Y: " + y + " Z: " + z);

                        Debug.Log(e.Message);
                    }
                }
            }
        }


        // int blockCount = 0;
        // for (int y = 0; y < Height / 2; y += 2)
        // {
        //     for (int x = 0; x < Length; x++)
        //     {
        //         for (int z = 0; z < Width; z++)
        //         {
        //             //  UInt16 blockId = mapBytes[blockCount];
        //             //    UInt32 combinedId = (UInt32) ((blockId << 16) + blockId);
        //             World[x, y, z] = mapBytes[blockCount];
        //             World[x, y + 1, z] = mapBytes[blockCount];
        //             blockCount++;
        //         }
        //     }
        // }
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