using System;

public static class UInt64Extensions
{
    public static void Pack(ref this UInt64 value, byte _000, byte _001, byte _101, byte _100, byte _010, byte _011,
        byte _111, byte _110)
    {
        value = BitConverter.ToUInt64(new[] {_000, _001, _101, _100, _010, _011, _111, _110}, 0);
        // value = (ulong) (_000 << 56 | _001 << 48 | _101 << 40 | _100 << 32 | _010 << 24 | _011 << 16 | _111 << 8 |
        //                  _110);
    }

    public static byte _000(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[0];
    }

    public static byte _001(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[1];
    }

    public static byte _101(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[2];
    }

    public static byte _100(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[3];
    }

    public static byte _010(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[4];
    }

    public static byte _011(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[5];
    }

    public static byte _111(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[6];
    }

    public static byte _110(this UInt64 value)
    {
        return BitConverter.GetBytes(value)[7];
    }
}