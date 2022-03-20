using System;
using System.Collections.Generic;

public class SinglePlayerWorld : IWorld
{
    public Dictionary<ChunkID, GreedyChunk> Chunks = new Dictionary<ChunkID, GreedyChunk>();

    public UInt32 this[int x, int y, int z]
    {
        get
        {
            ChunkID ID = ChunkID.FromWorldPos(x, y, z);
            GreedyChunk chunk;
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