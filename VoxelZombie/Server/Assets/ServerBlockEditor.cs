using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZombieLib;

public class ServerBlockEditor : MonoBehaviour
{
    private World world;
    private VoxelEngine vEngine;

    //Cleared at the beginning of start round
    // public List<BlockEdit> EditedBlocks = new List<BlockEdit>();

    public Dictionary<BlockLocation, byte> BlockEdits = new Dictionary<BlockLocation, byte>();

    List<ChunkID> dirtiedChunks = new List<ChunkID>();

    // Start is called before the first frame update
    void Awake()
    {
        vEngine = GetComponent<VoxelEngine>();
        world = vEngine.world;
    }

    public bool TryApplyEdit(ushort x, ushort y, ushort z, byte blockTag)
    {
        if (x / 2 < vEngine.currentMap.Length && y / 2 < vEngine.currentMap.Height &&
            z / 2 < vEngine.currentMap.Width && world[x, y, z] != blockTag)
        {
            //check to see if block intersects players
            //a new block should not be allowed to placed inside a player

            if (blockTag != 0)
            {
                Collider[] thingsHit = Physics.OverlapBox(new Vector3(x / 2f + .5f, y / 2f + .5f, z / 2f + .5f),
                    new Vector3(.125f, .125f, .125f));

                foreach (Collider col in thingsHit)
                {
                    if (col.CompareTag("Player"))
                    {
                        Debug.Log("Hit player");
                        return false;
                    }
                }
            }
            else
            {
                if (world[x, y, z] == 7)
                {
                    return false;
                }
            }


            world[x, y, z] = blockTag;

            //EditedBlocks.Add(new BlockEdit(x, y, z, blockTag));
            BlockEdits.Add(new BlockLocation(x, y, z), blockTag);
            //vEngine.mapBytes[z + x * vEngine.currentMap.Length + y * vEngine.currentMap.Length * vEngine.currentMap.Width] = (byte)blockTag;

            CheckChunks(x, y, z);

            return true;
        }

        return false;
    }

    void CheckChunks(int x, int y, int z)
    {
        dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z));

        if (x % 16 == 0)
        {
            if (x != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos((x - 1), y, z));
            }
        }
        else if (x % 16 == 15)
        {
            if ((x + 1) / 2 != vEngine.currentMap.Length)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos((x + 1), y, z));
            }
        }

        if (y % 16 == 0)
        {
            if (y != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, (y - 1), z));
            }
        }
        else if (y % 16 == 15)
        {
            if ((y + 1) / 2 != vEngine.currentMap.Height)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, (y + 1), z));
            }
        }

        if (z % 16 == 0)
        {
            if (z != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, (z - 1)));
            }
        }
        else if (z % 16 == 15)
        {
            if ((z + 1) / 2 != vEngine.currentMap.Width)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, (z + 1)));
            }
        }


        foreach (ChunkID ID in dirtiedChunks)
        {
            world.Chunks[ID].dirty = true;
        }

        dirtiedChunks.Clear();
    }
}

public class BlockEdit
{
    public float x;
    public float y;
    public float z;

    public byte blockTag;

    public BlockEdit(float editX, float editY, float editZ, byte newTag)
    {
        x = editX;
        y = editY;
        z = editZ;

        blockTag = newTag;
    }
}

public class BlockLocation
{
    public ushort x;
    public ushort y;
    public ushort z;

    public BlockLocation(ushort xLoc, ushort yLoc, ushort zLoc)
    {
        x = xLoc;
        y = yLoc;
        z = zLoc;
    }
}