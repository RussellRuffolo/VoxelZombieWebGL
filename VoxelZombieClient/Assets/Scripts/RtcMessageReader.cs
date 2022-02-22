using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RtcMessageReader
{
    private string Message { get; set; }

    public RtcMessageReader(string message)
    {
        Message = message;
    }

    private int position = 0;

    public char ReadTag()
    {
        position += 1;
        return Message[0];
    }

    public int GetMessageLength()
    {
        return Message.Length - 1;
    }


    public int ReadInt()
    {
        byte[] intBytes = Convert.FromBase64String(Message.Substring(position, 8));
        position += 8;
        return (int) intBytes[0] << 24 | (int) intBytes[1] << 16 | (int) intBytes[2] << 8 |
               (int) intBytes[3];
    }

    public uint ReadUInt32()
    {
        byte[] uInt32Bytes = Convert.FromBase64String(Message.Substring(position, 8));
        position += 8;

        return (uint) ((int) uInt32Bytes[0] << 24 | (int) uInt32Bytes[1] << 16 | (int) uInt32Bytes[2] << 8) |
               (uint) uInt32Bytes[3];
    }

    public string ReadString()
    {
        int length = ReadInt();
        string str = Message.Substring(position, length);
        position += length;
        return str;
    }

    public unsafe float ReadFloat()
    {
        uint u = ReadUInt32();
        return *(float*) &u;
    }

    public ushort ReadUShort()
    {
        byte[] ushortBytes = Convert.FromBase64String(Message.Substring(position, 4));
        position += 4;
        return (ushort) ((uint) ushortBytes[0] << 8 | (uint) ushortBytes[1]);
    }
}