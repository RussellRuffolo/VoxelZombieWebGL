using System;
using UnityEngine;

public interface IChunk
{
    byte this[int x, int y, int z] { get; set; }

    bool dirty { get; set; }

    Vector3 centerPosition { get; set; }
    
    void SetActiveRendering();
    
    void SetInactiveRendering();
    
    IWorld world { get; set; }
}