﻿using System;
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

        protected override void OnBreakBlock(float x, float y, float z)
        {
            world[x, y, z] = 0;
            CheckChunks((int)x, (int)y, (int)z);
        }

        protected override void OnPlaceBlock(float x, float y, float z, UInt32 blockTag)
        {
            world[x, y, z] = (byte)blockTag;
            CheckChunks((int)x, (int)y, (int)z);
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