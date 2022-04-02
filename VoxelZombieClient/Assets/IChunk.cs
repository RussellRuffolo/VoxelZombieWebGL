using System;

public interface IChunk
{
    byte this[int x, int y, int z] { get; set; }

    bool dirty { get; set; }
}