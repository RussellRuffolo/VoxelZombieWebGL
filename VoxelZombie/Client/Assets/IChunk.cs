using System;
using UnityEngine;

public interface IChunk
{
    Voxel GetVoxel(int x, int y, int z);
    void SetVoxel(int x, int y, int z, Voxel value);

    bool dirty { get; set; }

    Vector3 centerPosition { get; set; }
    
    void SetActiveRendering();
    
    void SetInactiveRendering();
    
    IWorld world { get; set; }
}