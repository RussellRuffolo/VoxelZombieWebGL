﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public struct ChunkID : IEquatable<ChunkID>
{
    public readonly int X;
    public readonly int Y;
    public readonly int Z;

    public ChunkID(int x, int y, int z)
    {
        X = x;
        Y = y;
        Z = z;
    }

    public bool Equals(ChunkID other)
    {
        return X == other.X && Y == other.Y && Z == other.Z;
    }

    public override bool Equals(object obj)
    {
        if (ReferenceEquals(null, obj))
            return false;
        return obj is ChunkID other && Equals(other);
    }

    public override int GetHashCode()
    {
        unchecked
        {
            var hashCode = X;
            hashCode = (hashCode * 397) ^ Y;
            hashCode = (hashCode * 397) ^ Z;
            return hashCode;
        }
    }

    public static bool operator ==(ChunkID left, ChunkID right)
    {
        return left.Equals(right);
    }

    public static bool operator !=(ChunkID left, ChunkID right)
    {
        return !left.Equals(right);
    }

    public static ChunkID FromWorldPos(int x, int y, int z)
    {
        return new ChunkID(x >> 4, y >> 4, z >> 4);
    }
}
