using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions.Comparers;

public class SinglePlayerWorld : IWorld
{
    public Dictionary<ChunkID, IChunk> Chunks { get; } = new Dictionary<ChunkID, IChunk>();


    // public UInt32 this[float x, float y, float z]
    // {
    //     get
    //     {
    //         int intX = Mathf.FloorToInt(x);
    //         int intY = Mathf.FloorToInt(y);
    //         int intZ = Mathf.FloorToInt(z);
    //
    //         int doubleY = Mathf.FloorToInt(y * 2);
    //
    //         ChunkID ID = ChunkID.FromWorldPos(intX, intY, intZ);
    //
    //         IChunk chunk;
    //         if (Chunks.TryGetValue(ID, out chunk))
    //         {
    //             return chunk[intX & 0xF, doubleY & 0xF, intZ & 0xF];
    //         }
    //         else
    //         {
    //             return 0;
    //         }
    //     }
    //     set
    //     {
    //         int intX = Mathf.FloorToInt(x);
    //         int intY = Mathf.FloorToInt(y);
    //         int intZ = Mathf.FloorToInt(z);
    //         
    //         var chunk = Chunks[ChunkID.FromWorldPos(intX, intY, intZ)];
    //         int doubleY = Mathf.FloorToInt(y * 2);
    //
    //         chunk[intX & 0xF, doubleY & 0xF, intZ & 0xF] = value;
    //     }
    // }

    public ulong this[int x, int y, int z]
    {
        get
        {
            ChunkID ID = ChunkID.FromWorldPos(x, y, z);
            IChunk chunk;
            if (Chunks.TryGetValue(ID, out chunk))
            {
                return chunk[x & 0xF, y & 0xF, z & 0xF]._000();
            }
            else
            {
                //100 is no value
                return 0;
            }
        }
        set
        {
            var chunk = Chunks[ChunkID.FromWorldPos(x, y, z)];
            ulong newValue = 0;
            byte byteValue = (byte) value;
            if (byteValue == 44)
            {
                newValue.Pack(44, 44, 44, 44, 0, 0, 0, 0);
            }
            else
            {
                newValue.Pack(byteValue, byteValue, byteValue, byteValue, byteValue, byteValue, byteValue, byteValue);
            }

            chunk[x & 0xF, y & 0xF, z & 0xF] = newValue;
        }
    }
}