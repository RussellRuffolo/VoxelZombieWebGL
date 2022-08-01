using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class RtcMessage
{
    private char[] messageData;
    private string messageString;

    private int writePosition = 1;

    public RtcMessage(char tag)
    {
        messageString = "";
        messageString += tag;
    }


    public void WriteInt(int i)
    {
        byte[] buffer = new byte[4];

        buffer[0] = (byte) (i >> 24);
        buffer[1] = (byte) (i >> 16);
        buffer[2] = (byte) (i >> 8);
        buffer[3] = (byte) i;

        string intString = Convert.ToBase64String(buffer);

        messageString += intString;
    }

    public void WriteStr(string str)
    {
        if (String.IsNullOrEmpty(str))
        {
            WriteInt(0);
            return;
        }

        int length = str.Length;
        WriteInt(length);
        messageString += str;
    }

    public unsafe void WriteFloat(float f)
    {
        uint u = *(uint*) &f;

        byte[] buffer = new byte[4];

        buffer[0] = (byte) (u >> 24);
        buffer[1] = (byte) (u >> 16);
        buffer[2] = (byte) (u >> 8);
        buffer[3] = (byte) u;

        string uInt32String = Convert.ToBase64String(buffer);

        messageString += uInt32String;
    }

    public void WriteUInt32(uint u)
    {
        byte[] buffer = new byte[4];

        buffer[0] = (byte) (u >> 24);
        buffer[1] = (byte) (u >> 16);
        buffer[2] = (byte) (u >> 8);
        buffer[3] = (byte) u;

        string uInt32String = Convert.ToBase64String(buffer);

        messageString += uInt32String;
    }

    public void WriteUShort(ushort u)
    {
        byte[] buffer = new byte[2];

        buffer[0] = (byte) ((uint) u >> 8);
        buffer[1] = (byte) u;

        string ushortString = Convert.ToBase64String(buffer);

        messageString += ushortString;
    }


    public string GetMessage()
    {
        return messageString;
    }
}