using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class World : IWorld
{
    public Dictionary<ChunkID, IChunk> Chunks { get; }= new Dictionary<ChunkID, IChunk>();

    public UInt16 this[int x, int y, int z]
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
            /*
            ChunkID toGet = ChunkID.FromWorldPos(x, y, z);
            Chunk targetChunk;
            if(Chunks.TryGetValue(toGet, out targetChunk))
            {
                var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
                chunk[x & 0xF, y & 0xF, z & 0xF] = value;
            }
            else
            {
                Debug.Log("x: " + x + " y: " + y + " z: " + z);
            }
            */
            var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
            chunk[x & 0xF, y & 0xF, z & 0xF] = value;
            chunk.dirty = true;
        }
    }
}
