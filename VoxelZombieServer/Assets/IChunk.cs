using System;
using System.Collections.Generic;

public interface IChunk
{
    byte this[int x, int y, int z] { get; set; }

    bool dirty { get; set; }

    void AddActivePlayer(ushort playerId);

    void RemoveActivePlayer(ushort playerId);

    List<ushort> ActiveIds { get; }


    RtcMessage CurrentChunkData { get; set; }
}