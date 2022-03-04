using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class SinglePlayerBlockEditor : BaseBlockEditor
    {
        private World world;

        private ClientVoxelEngine vEngine;

        List<ChunkID> dirtiedChunks = new List<ChunkID>();


        protected override void OnStart()
        {
            vEngine = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientVoxelEngine>();
            world = vEngine.world;
        }

        protected override void OnBreakBlock(ushort x, ushort y, ushort z)
        {
            world[x, y, z] = 0;
            CheckChunks(x, y, z);
        }

        protected override void OnPlaceBlock(ushort x, ushort y, ushort z, ushort blockTag)
        {
            world[x, y, z] = blockTag;
            CheckChunks(x, y, z);
        }

        void CheckChunks(int x, int y, int z)
        {
            dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z));

            if (x % 16 == 0)
            {
                if (x != 0)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x - 1, y, z));
                }
            }
            else if (x % 16 == 15)
            {
                if (x != vEngine.Length - 1)
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
                if (y != vEngine.Height - 1)
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
                if (z != vEngine.Width - 1)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z + 1));
                }
            }


            foreach (ChunkID ID in dirtiedChunks)
            {
                world.Chunks[ID].dirty = true;
            }

            dirtiedChunks.Clear();
        }
    }
}