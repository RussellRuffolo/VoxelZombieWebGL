using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Client;
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
            ApplyMapData(test);
        }
    }

    private void ApplyMapData(byte[] mapBytes)
    {
        bController.SetMapBoundaries(Length, Width, Height);


        string namePrefix = "Chunk ";

        for (int z = 0; z < Width / 8; z++)
        {
            for (int x = 0; x < Length / 8; x++)
            {
                for (int y = 0; y < Height / 8; y++)
                {
                    var newChunkObj =
                        new GameObject(namePrefix + x + "," + y + "," + z);
                    newChunkObj.transform.position = new Vector3(x * 8, y * 8, z * 8);


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


        for (ushort y = 0; y < Height; y++)
        {
            for (ushort x = 0; x < Length; x++)
            {
                for (ushort z = 0; z < Width; z++)
                {
                    byte blockId = mapBytes[blockCount];


                    //halfblock nonsense
                    if (blockId != 44)
                    {
                        World[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
                        World[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
                        World[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
                        World[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
                    }

                    World[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2)] = blockId;

                    World[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2)] = blockId;


                    World[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;

                    World[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;


                    blockCount++;
                }
            }
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