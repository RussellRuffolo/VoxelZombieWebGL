using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class World : IWorld
{
    public Dictionary<ChunkID, IChunk> Chunks { get; } = new Dictionary<ChunkID, IChunk>();

    public byte this[float x, float y, float z]
    {
        get
        {
            UInt64 test = this[(int) x, (int) y, (int) z];
            return test.GetByte(x, y, z);
        }
        set
        {
            UInt64 test = this[(int) x, (int) y, (int) z];
            test.SetByte(x, y, z, value);
            this[(int) x, (int) y, (int) z] = test;
        }
    }

    public byte this[ushort x, ushort y, ushort z]
    {
        get
        {
            UInt64 test = this[x / 2, y /2, z / 2];
            return test.GetByte(x, y, z);
        }
        set
        {
            UInt64 test = this[x / 2, y /2, z / 2];
            test.SetByte(x, y, z, value);
            this[x / 2, y /2, z / 2] = test;
        }
    }

    public UInt64 this[int x, int y, int z]
    {
        get
        {
            ChunkID ID = ChunkID.FromWorldPos(x, y, z);
            IChunk chunk;
            if (Chunks.TryGetValue(ID, out chunk))
            {
                return chunk[x & 0xF, y & 0xF, z & 0xF];
            }
            else
            {
                //0 is no value
                return 0;
            }
        }
        set
        {
            var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
            chunk[x & 0xF, y & 0xF, z & 0xF] = value;
        }
    }
}