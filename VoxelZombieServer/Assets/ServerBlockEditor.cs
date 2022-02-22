using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ServerBlockEditor : MonoBehaviour
{
    private World world;
    private VoxelEngine vEngine;

    //Cleared at the beginning of start round
    public List<BlockEdit> EditedBlocks = new List<BlockEdit>();

    List<ChunkID> dirtiedChunks = new List<ChunkID>();

    // Start is called before the first frame update
    void Awake()
    {
        vEngine = GetComponent<VoxelEngine>();
        world = vEngine.world;
    }

    public bool TryApplyEdit(ushort x, ushort y, ushort z, ushort blockTag)
    {

        if (x < vEngine.currentMap.Length && y < vEngine.currentMap.Height && z < vEngine.currentMap.Width && world[x, y, z] != blockTag)
        {
            //check to see if block intersects players
            //a new block should not be allowed to placed inside a player

            if(blockTag != 0)
            {
                Collider[] thingsHit = Physics.OverlapBox(new Vector3(x + .5f, y + .5f, z + .5f), new Vector3(.45f, .45f, .45f));

                foreach (Collider col in thingsHit)
                {
                    if (col.CompareTag("Player"))
                    {
                        Debug.Log("Hit player");
                        return false;
                    }
                }

            }
       

            world[x, y, z] = blockTag;

            EditedBlocks.Add(new BlockEdit(x, y, z, blockTag));

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
            if(x != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x - 1, y, z));
            }
        }
        else if(x % 16 == 15)
        {
            if(x != vEngine.currentMap.Length - 1)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x + 1, y, z));
            }
        }

        if (y % 16 == 0)
        {
            if (y != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y - 1, z));
            }
        }
        else if (y % 16 == 15)
        {
            if (y != vEngine.currentMap.Height - 1)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y + 1, z));
            }
        }

        if (z % 16 == 0)
        {
            if (z != 0)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z - 1));
            }
        }
        else if (z % 16 == 15)
        {
            if (z!= vEngine.currentMap.Width - 1)
            {
                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z + 1));
            }
        }      
       

        foreach(ChunkID ID in dirtiedChunks)
        {
            world.Chunks[ID].dirty = true;
        }

        dirtiedChunks.Clear();

    }

}

public class BlockEdit
{
    public ushort x;
    public ushort y;
    public ushort z;

    public ushort blockTag;

    public BlockEdit(ushort editX, ushort editY, ushort editZ, ushort newTag)
    {
        x = editX;
        y = editY;
        z = editZ;

        blockTag = newTag;
    }
}
