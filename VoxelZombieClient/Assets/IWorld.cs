using System;
using System.Collections.Generic;

public interface IWorld
{
    Dictionary<ChunkID, IChunk> Chunks { get; }
    
  //  UInt16 this[int x, int y, int z] { get; set; }
  byte this[float x, float y, float z] { get; set; }
    byte this[ushort x, ushort y, ushort z] { get; set; }

    void CheckChunks(ushort x, ushort y, ushort z);
    
    void CheckChunks(float x, float y, float z);

}