using System;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class SinglePlayerBlockEditor : BaseBlockEditor
    {
        private IWorld world;

        private IVoxelEngine vEngine;

        List<ChunkID> dirtiedChunks = new List<ChunkID>();


        protected override void OnStart()
        {
            vEngine = GameObject.FindGameObjectWithTag("Network").GetComponent<IVoxelEngine>();
            world = vEngine.World;
        }

        protected override void OnBreakBlock(ushort x, ushort y, ushort z)
        {
            world[x, y, z] = 0;
            CheckChunks(x , y , z);
        }

        protected override void OnPlaceBlock(ushort x, ushort y, ushort z, byte blockTag)
        {
            world[x, y, z] = blockTag;
            CheckChunks(x , y , z);
        }

        void CheckChunks(int x, int y, int z)
        {
            dirtiedChunks.Add(ChunkID.FromWorldPos(x / 2, y / 2, z / 2));

            if (x % 16 == 0)
            {
                if (x != 0)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos((x - 1) / 2, y / 2, z / 2));
                }
            }
            else if (x % 16 == 15)
            {
                if ((x + 1) / 2 != vEngine.Length)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos((x + 1) / 2, y / 2, z / 2));
                }
            }

            if (y % 16 == 0)
            {
                if (y != 0)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x / 2, (y - 1) / 2, z / 2));
                }
            }
            else if (y % 16 == 15)
            {
                if ((y + 1) / 2 != vEngine.Height)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x / 2, (y + 1) / 2, z / 2));
                }
            }

            if (z % 16 == 0)
            {
                if (z != 0)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x / 2, y / 2, (z - 1) / 2));
                }
            }
            else if (z % 16 == 15)
            {
                if ((z + 1) / 2 != vEngine.Width)
                {
                    dirtiedChunks.Add(ChunkID.FromWorldPos(x / 2, y / 2, (z + 1) / 2));
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