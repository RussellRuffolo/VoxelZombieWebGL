using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class World : IWorld
{
    public Dictionary<ChunkID, IChunk> Chunks { get; } = new Dictionary<ChunkID, IChunk>();

    public UInt32 this[float x, float y, float z]
    {
        get { return 0; }
        set { }
    }

    public byte this[int x, int y, int z]
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
                //100 is no value
                return 100;
            }
        }
        set
        {
            var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
            chunk[x & 0xF, y & 0xF, z & 0xF] = value;
        }
    }
}