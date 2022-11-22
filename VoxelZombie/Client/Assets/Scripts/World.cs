using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using ZombieLib;

public class World : IWorld
{
    List<ChunkID> dirtiedChunks = new List<ChunkID>();

    public World(IVoxelEngine voxelEngine)
    {
        VoxelEngine = voxelEngine;
    }

    public Dictionary<ChunkID, IChunk> Chunks { get; } = new Dictionary<ChunkID, IChunk>();

    public bool IsInChunkBounds(ChunkID id)
    {
        bool test = id.Z < VoxelEngine.Width / 8 && id.X < VoxelEngine.Length / 8 && id.Y < VoxelEngine.Height / 8 &&
                    id.Z >= 0 && id.X >= 0 && id.Y >= 0;
        return test ;
    }

    public IVoxelEngine VoxelEngine { get; set; }

    public Voxel GetVoxel(float x, float y, float z) => GetVoxel((ushort)(x * 2), (ushort)(y * 2), (ushort)(z * 2));

    public void SetVoxel(float x, float y, float z, Voxel value) =>
        SetVoxel((ushort)(x * 2), (ushort)(y * 2), (ushort) (z * 2), (Voxel)value);

    public Voxel GetVoxel(ushort x, ushort y, ushort z)
    {
        ChunkID ID = ChunkID.FromBlockPos(x, y, z);

        if (Chunks.TryGetValue(ID, out var chunk))
        {
            return chunk.GetVoxel(x & 0xF, y & 0xF, z & 0xF);
        }

        return 0;
    }

    public void SetVoxel(ushort x, ushort y, ushort z, Voxel value)
    {
        ChunkID ID = ChunkID.FromBlockPos(x, y, z);

        if (Chunks.TryGetValue(ID, out var chunk))
        {
            chunk.SetVoxel(x & 0xF, y & 0xF, z & 0xF, value);
            chunk.dirty = true;
        }
    }

    public void CheckChunks(float x, float y, float z)
    {
        CheckChunks((ushort) (x * 2), (ushort) (y * 2), (ushort) (z * 2));
    }

    public void CheckChunks(ushort x, ushort y, ushort z)
    {
        dirtiedChunks.Add(ChunkID.FromBlockPos(x, y, z));

        if (x % 16 == 0)
        {
            if (x != 0)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos((ushort) (x - 1), y, z));
            }
        }
        else if (x % 16 == 15)
        {
            if ((x + 1) / 2 != VoxelEngine.Length)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos((ushort) (x + 1), y, z));
            }
        }

        if (y % 16 == 0)
        {
            if (y != 0)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos(x, (ushort) (y - 1), z));
            }
        }
        else if (y % 16 == 15)
        {
            if ((y + 1) / 2 != VoxelEngine.Height)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos(x, (ushort) (y + 1), z));
            }
        }

        if (z % 16 == 0)
        {
            if (z != 0)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos(x, y, (ushort) (z - 1)));
            }
        }
        else if (z % 16 == 15)
        {
            if ((z + 1) / 2 != VoxelEngine.Width)
            {
                dirtiedChunks.Add(ChunkID.FromBlockPos(x, y, (ushort) (z + 1)));
            }
        }


        foreach (ChunkID ID in dirtiedChunks)
        {
            Chunks[ID].dirty = true;
        }

        dirtiedChunks.Clear();
    }

    // public byte this[int x, int y, int z]
    // {
    //     get
    //     {
    //         ChunkID ID = ChunkID.FromWorldPos(x, y, z);
    //         IChunk chunk;
    //         if (Chunks.TryGetValue(ID, out chunk))
    //         {
    //             return chunk[x & 0x7, y & 0x7, z & 0x7];
    //         }
    //         else
    //         {
    //             //0 is no value
    //             return 0;
    //         }
    //     }
    //     set
    //     {
    //         var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
    //         chunk[x & 0x7, y & 0x7, z & 0x7] = value;
    //         chunk.dirty = true;
    //     }
    // }
}