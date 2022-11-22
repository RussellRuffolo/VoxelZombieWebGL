using System;
using UnityEngine;

public interface IChunk
{
    byte GetVoxel(int x, int y, int z);
    void SetVoxel(int x, int y, int z, byte value);

    bool dirty { get; set; }

    Vector3 centerPosition { get; set; }
    
    void SetActiveRendering();
    
    void SetInactiveRendering();
    
    IWorld world { get; set; }
}