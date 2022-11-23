using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using ZombieLib;

public class World : IWorld
{
    public Dictionary<ChunkID, IChunk> Chunks { get; }= new Dictionary<ChunkID, IChunk>();

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

    // public UInt64 this[int x, int y, int z]
    // {
    //     get
    //     {
    //         ChunkID ID = ChunkID.FromWorldPos(x, y, z);
    //         IChunk chunk;
    //         if (Chunks.TryGetValue(ID, out chunk))
    //         {
    //             return chunk[x & 0xF, y & 0xF, z & 0xF];
    //         }
    //         else
    //         {
    //             //100 is no value
    //             return 0;
    //         }
    //     }
    //     set
    //     {
    //         var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
    //         chunk[x & 0xF, y & 0xF, z & 0xF] = value;
    //     }
    // }
}
