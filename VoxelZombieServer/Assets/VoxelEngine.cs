using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using fNbt;
using System.IO;
using System.Threading.Tasks;
using UnityEngine.UIElements;
using Random = UnityEngine.Random;

public class VoxelEngine : MonoBehaviour
{
    public World world = new World();
    public List<Material> materialList;

    //public byte[] mapBytes;

    public List<MapData> mapList = new List<MapData>();
    public MapData currentMap;


    public BoundaryController bController;


    public bool loadingMap = false;

    //const ushort MAP_TAG = 4;

    private void Awake()
    {
        MapData gurka = new MapData("gurka", 55, 42.5f, 28);
        mapList.Add(gurka);

        MapData prison = new MapData("prison", 62, 1.5f, 62);
        mapList.Add(prison);

        // MapData stadium = new MapData("stadium", 112, 65.5f, 65);
        //  mapList.Add(stadium);

        // MapData sewers = new MapData("sewers", 20, 57.5f, 51);
        //  mapList.Add(sewers);

        //
        // MapData excitebike = new MapData("excitebike", 24, 35.5f, 36);
        // mapList.Add(excitebike);

        //  MapData dwarves = new MapData("dwarves", 122, 2.5f, 7);
        //   mapList.Add(dwarves);

        //  MapData diametric = new MapData("diametric", 46, 19.5f, 26);
        //  mapList.Add(diametric);

        MapData asylum = new MapData("asylum", 25, 129.5f, 30);
        mapList.Add(asylum);

        // MapData asylum1 = new MapData("asylum", 25, 129.5f, 30);
        // mapList.Add(asylum1);
        //
        // MapData asylum2 = new MapData("asylum", 25, 129.5f, 30);
        // mapList.Add(asylum2);
        //
        MapData domti = new MapData("domti", 126, 35, 64);
        mapList.Add(domti);

        MapData excavation = new MapData("excavation", 25, 129.5f, 30);
        mapList.Add(excavation);

        MapData fortress = new MapData("fortress", 60, 132, 32);
        mapList.Add(fortress);

        MapData a_reverie = new MapData("a_reverie", 123, 3, 125);
        mapList.Add(a_reverie);

        MapData pandoras_box = new MapData("pandoras_box", 25, 129.5f, 30);
        mapList.Add(pandoras_box);

        // MapData tsunami = new MapData("tsunami", 25, 129.5f, 30);
        //   mapList.Add(tsunami);

        MapData Carson = new MapData("carson", 10, 35.5f, 120);
        mapList.Add(Carson);

        MapData Sunspots = new MapData("Sunspots", 60, 112.5f, 108);
        mapList.Add(Sunspots);

        // MapData hawaii = new MapData("hawaiiMod", 1, 67.5f, 43);
        // mapList.Add(hawaii);

        //  MapData clockwork = new MapData("clockwork", 20, 238, 3);
        //  mapList.Add(clockwork);

        //  MapData colony = new MapData("colony", 56, 67.5f, 8);
        // mapList.Add(colony);

        // MapData italy = new MapData("italy",  53, 89.5f, 63);
        //  mapList.Add(italy);
        MapData swiss = new MapData("swiss", 29, 50.5f, 12);
        mapList.Add(swiss);

        // MapData swordbase = new MapData("swordbase", 56, 20, 4);
        // mapList.Add(swordbase);

        // mapList.Add(hawaii);
    }


    public List<ChunkID> SpawnChunks = new List<ChunkID>();

    public void LoadMap(MapData map)
    {
        loadingMap = true;
        UnloadMap();

        currentMap = map;


        string fileName = Application.dataPath + "/StreamingAssets/" + map.Name + ".bin";
        BinaryReader binReader = new BinaryReader(new FileStream(fileName, FileMode.Open));

        short length = binReader.ReadInt16();
        short width = binReader.ReadInt16();
        short height = binReader.ReadInt16();

        map.Length = length;
        map.Width = width;
        map.Height = height;

        bController.SetMapBoundaries(length, width, height);


        byte[] mapBytes = binReader.ReadBytes(length * width * height);


        string namePrefix = "Chunk ";

        for (int z = 0; z < width / 8; z++)
        {
            for (int x = 0; x < length / 8; x++)
            {
                for (int y = 0; y < height / 8; y++)
                {
                    var newChunkObj =
                        new GameObject(namePrefix + x + "," + y + "," + z);
                    newChunkObj.transform.position = new Vector3(x * 8, y * 8, z * 8);


                    var chunk = newChunkObj.AddComponent<GreedyChunk>();
                    chunk.world = world;
                    chunk.GetComponent<MeshRenderer>().materials = materialList.ToArray();
                    ChunkID newID = new ChunkID(x, y, z);
                    world.Chunks.Add(newID, chunk);
                    chunk.ID = newID;


                    chunk.init();
                }
            }
        }

        SpawnChunks.Add(ChunkID.FromWorldPos(map.SpawnX, map.SpawnY, map.SpawnZ));
        SpawnChunks.Add(ChunkID.FromWorldPos(map.SpawnX, map.SpawnY - 8, map.SpawnZ));


        int blockCount = 0;
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < length; x++)
            {
                for (int z = 0; z < width; z++)
                {
                    byte blockId = mapBytes[blockCount];


                    //halfblock nonsense
                    if (blockId != 44)
                    {
                        world[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
                        world[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2)] = blockId;
                        world[(ushort) (x * 2), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
                        world[(ushort) (x * 2 + 1), (ushort) (y * 2 + 1), (ushort) (z * 2 + 1)] = blockId;
                    }

                    world[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2)] = blockId;

                    world[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2)] = blockId;


                    world[(ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;

                    world[(ushort) (x * 2 + 1), (ushort) (y * 2), (ushort) (z * 2 + 1)] = blockId;


                    blockCount++;
                }
            }
        }


        loadingMap = false;
    }

    public void UnloadMap()
    {
        foreach (GreedyChunk toDestroy in world.Chunks.Values)
        {
            Destroy(toDestroy.gameObject);
        }

        world.Chunks.Clear();
        SpawnChunks.Clear();
    }

    //returns a map other than current map
    // public MapData GetRandomMap()
    // {
    //     
    //     int mapIndex = Random.Range(0, mapList.Count);
    //     if (currentMap != mapList[mapIndex])
    //     {
    //         return mapList[mapIndex];
    //     }
    //     else
    //     {
    //         return GetRandomMap();
    //     }
    // }

    int GetRandomIndex()
    {
        int mapIndex = Random.Range(0, mapList.Count);
        if (currentMap != mapList[mapIndex])
        {
            return mapIndex;
        }

        return (mapIndex + 1) % mapList.Count;
    }

    private MapData[] maps = new MapData[3];

    public MapData[] GetNextMaps()
    {
        int index = GetRandomIndex();

        for (int i = 0; i < 3; i++)
        {
            maps[i] = mapList[index];
            index = (index + 1) % mapList.Count;
            if (mapList[index] == currentMap)
            {
                index = (index + 1) % mapList.Count;
            }
        }

        return maps;
    }
}


public struct MapData : IEquatable<MapData>
{
    public string Name;


    public float SpawnX;
    public float SpawnY;
    public float SpawnZ;

    public int Length;
    public int Width;
    public int Height;

    public MapData(string name, float spawnX, float spawnY, float spawnZ)
    {
        Name = name;


        SpawnX = spawnX;
        SpawnY = spawnY;
        SpawnZ = spawnZ;

        Length = 0;
        Width = 0;
        Height = 0;
    }

    public bool Equals(MapData other)
    {
        return other.Name == Name;
    }

    public static bool operator ==(MapData lhs, MapData rhs)
    {
        // Equals handles case of null on right side.
        return lhs.Equals(rhs);
    }

    public static bool operator !=(MapData lhs, MapData rhs)
    {
        return !(lhs == rhs);
    }
}

public class VoxelCoordinate
{
    public int x;
    public int y;
    public int z;

    public VoxelCoordinate(int xPos, int yPos, int zPos)
    {
        x = xPos;
        y = yPos;
        z = zPos;
    }

    public override bool Equals(object obj)
    {
        if (obj is VoxelCoordinate)
        {
            VoxelCoordinate testObj = (VoxelCoordinate) obj;
            if (testObj.x == x && testObj.y == y && testObj.z == z)
            {
                return true;
            }
        }

        return false;
    }

    public Vector3 WorldPosition()
    {
        return new Vector3(x, y, z);
    }
}