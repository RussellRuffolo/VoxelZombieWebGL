using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZombieLib;

public class RtcMessageReader
{
    private string Message { get; set; }

    public RtcMessageReader(string message)
    {
        Message = message;
    }

    private int position = 0;

    public Tags ReadTag()
    {
        position += 1;
        return (Tags)Message[0];
    }
    
    public byte ReadByte()
    {
        byte[] byteArray = Convert.FromBase64String(Message.Substring(position, 4));
        
        position += 4;
        
        return byteArray[0];
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

    public ulong ReadUlong() 
    {
        byte[] ulongBytes = Convert.FromBase64String(Message.Substring(position, 12));
        position += 12;
        return (ulong) ((ulong) ulongBytes[0] << 56 | (ulong) ulongBytes[1] << 48 | (ulong) ulongBytes[2] << 40 |
                        (ulong) ulongBytes[3] << 32 |
                        (ulong) ulongBytes[4] << 24 | (ulong) ulongBytes[5] << 16 | (ulong) ulongBytes[6] << 8 |
                        (ulong) ulongBytes[7]);
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