using System;

public interface IChunk
{
    UInt64 this[int x, int y, int z] { get; set; }

    bool dirty { get; set; }
}