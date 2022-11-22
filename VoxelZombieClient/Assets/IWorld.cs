using System;
using System.Collections.Generic;

public interface IWorld
{
    Dictionary<ChunkID, IChunk> Chunks { get; }
    
  //  UInt16 this[int x, int y, int z] { get; set; }
  Voxel GetVoxel(float x, float y, float z);
  void SetVoxel(float x, float y, float z, Voxel value);
  // Todo (Russell): Explain to me why this takes a UShort and IChunk takes an int.
  Voxel GetVoxel(ushort x, ushort y, ushort z);
  void SetVoxel(ushort x, ushort y, ushort z, Voxel value);

  void CheckChunks(ushort x, ushort y, ushort z);
    
    void CheckChunks(float x, float y, float z);

}