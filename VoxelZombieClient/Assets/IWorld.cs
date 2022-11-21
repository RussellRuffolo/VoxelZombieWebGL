using System;
using System.Collections.Generic;

public interface IWorld
{
    Dictionary<ChunkID, IChunk> Chunks { get; }
    
  //  UInt16 this[int x, int y, int z] { get; set; }
  byte GetVoxel(float x, float y, float z);
  void SetVoxel(float x, float y, float z, byte value);
  byte GetVoxel(ushort x, ushort y, ushort z);
  void SetVoxel(ushort x, ushort y, ushort z, byte value);

  void CheckChunks(ushort x, ushort y, ushort z);
    
    void CheckChunks(float x, float y, float z);

}