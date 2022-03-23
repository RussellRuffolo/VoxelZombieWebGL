using System;
using System.Collections.Generic;

public interface IWorld
{
    Dictionary<ChunkID, IChunk> Chunks { get; }
    
  //  UInt16 this[int x, int y, int z] { get; set; }
    
    UInt64 this[int x1, int y1, int z1] { get; set; }
}