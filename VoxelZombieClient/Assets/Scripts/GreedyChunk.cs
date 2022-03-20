using System;
using UnityEngine;

public class GreedyChunk : MonoBehaviour
{
    public SinglePlayerWorld world;
    private UInt32[] voxels = new UInt32[16 * 16 * 16];

    public ChunkID ID;

    public UInt32 this[int x, int y, int z]
    {
        get { return voxels[x * 16 * 16 + y * 16 + z]; }
        set { voxels[x * 16 * 16 + y * 16 + z] = value; }
    }
}