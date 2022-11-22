using System.Collections.Generic;
using UnityEngine;

public interface IVoxelEngine
{
    IWorld World { get; }
    int Length { get; set; }

    int Width { get; set; }

    int Height { get; set; }
    List<Material> materialList { get; }

    void LoadMap(string mapName);
}