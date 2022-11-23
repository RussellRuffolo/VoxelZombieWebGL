using System;
using System.Collections.Generic;
using ZombieLib;

public interface IChunk
{
    Voxel GetVoxel(int x, int y, int z);
    void SetVoxel(int x, int y, int z, Voxel value);

    bool dirty { get; set; }

    void AddActivePlayer(ushort playerId);

    void RemoveActivePlayer(ushort playerId);

    List<ushort> ActiveIds { get; }


   // RtcMessage CurrentChunkData { get; set; }

    void SetActiveRendering();

    Voxel[] GetVoxelMessage();

    void CreateMessage();
}