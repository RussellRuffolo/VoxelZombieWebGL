using System;

public interface IChunk
{
    UInt16 this[int x, int y, int z] { get; set; }

    bool dirty { get; set; }
}