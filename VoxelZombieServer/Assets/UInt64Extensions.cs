using System;
using UnityEngine;

public static class UInt64Extensions
{
    // public static void Pack(ref this UInt64 value, byte _000, byte _001, byte _101, byte _100, byte _010, byte _011,
    //     byte _111, byte _110)
    // {
    //     value = BitConverter.ToUInt64(new[] {_000, _001, _101, _100, _010, _011, _111, _110}, 0);
    //     // value = (ulong) (_000 << 56 | _001 << 48 | _101 << 40 | _100 << 32 | _010 << 24 | _011 << 16 | _111 << 8 |
    //     //                  _110);
    // }

    public static void Pack(ref this UInt64 value, byte _000, byte _001, byte _101, byte _100, byte _010, byte _011,
        byte _111, byte _110)
    {
        value = ((ulong) _000 | (ulong) _001 << 8 | (ulong) _101 << 16 | (ulong) _100 << 24 | (ulong) _010 << 32 |
                 (ulong) _011 << 40 | (ulong) _111 << 48 | (ulong) _110 << 56);
        // value = (ulong) (_000 << 56 | _001 << 48 | _101 << 40 | _100 << 32 | _010 << 24 | _011 << 16 | _111 << 8 |
        //                  _110);
    }

    public static void PrintBytes(ref this UInt64 test)
    {
        Debug.Log("Unpacked test: " + test._000() + " " + test._001() + " " + test._101() + " " + test._100() + " " +
                  test._010() + " " + test._011() + " " + test._111() + " " + test._110() + " ");
    }

    public static byte GetByte(ref this UInt64 value, float x, float y, float z)
    {
        bool xUp = x % (int) x >= .5f;
        bool yUp = y % (int) y >= .5f;
        bool zUp = z % (int) z >= .5f;

        if (!xUp)
        {
            if (!yUp)
            {
                if (!zUp)
                {
                    return value._000();
                }

                return value._001();
            }

            if (!zUp)
            {
                return value._010();
            }

            return value._011();
        }

        if (!yUp)
        {
            if (!zUp)
            {
                return value._100();
            }

            return value._101();
        }

        if (!zUp)
        {
            return value._110();
        }

        return value._111();
    }
    
    public static byte GetByte(ref this UInt64 value, ushort x, ushort y, ushort z)
    {
        bool xUp = x % 2 >= 1f;
        bool yUp = y % 2 >= 1;
        bool zUp = z % 2 >= 1;

        if (!xUp)
        {
            if (!yUp)
            {
                if (!zUp)
                {
                    return value._000();
                }

                return value._001();
            }

            if (!zUp)
            {
                return value._010();
            }

            return value._011();
        }

        if (!yUp)
        {
            if (!zUp)
            {
                return value._100();
            }

            return value._101();
        }

        if (!zUp)
        {
            return value._110();
        }

        return value._111();
    }

    public static void SetByte(ref this UInt64 value, float x, float y, float z, byte newValue)
    {
        bool xUp = x % (int) x >= .5f;
        bool yUp = y % (int) y >= .5f;
        bool zUp = z % (int) z >= .5f;

        if (!xUp)
        {
            if (!yUp)
            {
                if (!zUp)
                {
                    value.Pack(newValue, value._001(), value._101(), value._100(), value._010(), value._011(),
                        value._111(), value._110());


                    return;
                }

                value.Pack(value._000(), newValue, value._101(), value._100(), value._010(), value._011(),
                    value._111(), value._110());

                return;
            }

            if (!zUp)
            {
                value.Pack(value._000(), value._001(), value._101(), value._100(), newValue, value._011(),
                    value._111(), value._110());

                return;
            }

            value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), newValue,
                value._111(), value._110());

            return;
        }

        if (!yUp)
        {
            if (!zUp)
            {
                value.Pack(value._000(), value._001(), value._101(), newValue, value._010(), value._011(),
                    value._111(), value._110());

                return;
            }

            value.Pack(value._000(), value._001(), newValue, value._100(), value._010(), value._011(),
                value._111(), value._110());

            return;
        }

        if (!zUp)
        {
            value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), value._011(),
                value._111(), newValue);

            return;
        }

        value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), value._011(),
            newValue, value._110());
    }

    public static void SetByte(ref this UInt64 value, ushort x, ushort y, ushort z, byte newValue)
    {
        bool xUp = x % 2 >= 1;
        bool yUp = y % 2 >= 1;
        bool zUp = z % 2 >= 1;

        if (!xUp)
        {
            if (!yUp)
            {
                if (!zUp)
                {
                    value.Pack(newValue, value._001(), value._101(), value._100(), value._010(), value._011(),
                        value._111(), value._110());


                    return;
                }

                value.Pack(value._000(), newValue, value._101(), value._100(), value._010(), value._011(),
                    value._111(), value._110());

                return;
            }

            if (!zUp)
            {
                value.Pack(value._000(), value._001(), value._101(), value._100(), newValue, value._011(),
                    value._111(), value._110());

                return;
            }

            value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), newValue,
                value._111(), value._110());

            return;
        }

        if (!yUp)
        {
            if (!zUp)
            {
                value.Pack(value._000(), value._001(), value._101(), newValue, value._010(), value._011(),
                    value._111(), value._110());

                return;
            }

            value.Pack(value._000(), value._001(), newValue, value._100(), value._010(), value._011(),
                value._111(), value._110());

            return;
        }

        if (!zUp)
        {
            value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), value._011(),
                value._111(), newValue);

            return;
        }

        value.Pack(value._000(), value._001(), value._101(), value._100(), value._010(), value._011(),
            newValue, value._110());
    }

    public static byte _000(this UInt64 value)
    {
        return (byte) ((value) & 0xFF);
    }

    public static byte _001(this UInt64 value)
    {
        return (byte) ((value >> 8) & 0xFF);
    }

    public static byte _101(this UInt64 value)
    {
        return (byte) ((value >> 16) & 0xFF);
    }

    public static byte _100(this UInt64 value)
    {
        return (byte) ((value >> 24) & 0xFF);
    }

    public static byte _010(this UInt64 value)
    {
        return (byte) ((value >> 32) & 0xFF);
    }

    public static byte _011(this UInt64 value)
    {
        return (byte) ((value >> 40) & 0xFF);
    }

    public static byte _111(this UInt64 value)
    {
        return (byte) ((value >> 48) & 0xFF);
    }

    public static byte _110(this UInt64 value)
    {
        return (byte) ((value >> 56) & 0xFF);
    }
}