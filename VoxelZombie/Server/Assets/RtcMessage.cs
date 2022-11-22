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

    private byte[] byteBuffer = new byte[4];

    public void WriteInt(int i)
    {
        byteBuffer[0] = (byte) (i >> 24);
        byteBuffer[1] = (byte) (i >> 16);
        byteBuffer[2] = (byte) (i >> 8);
        byteBuffer[3] = (byte) i;

        string intString = Convert.ToBase64String(byteBuffer);

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

        byteBuffer[0] = (byte) (u >> 24);
        byteBuffer[1] = (byte) (u >> 16);
        byteBuffer[2] = (byte) (u >> 8);
        byteBuffer[3] = (byte) u;

        string uInt32String = Convert.ToBase64String(byteBuffer);

        messageString += uInt32String;
    }

    public void WriteUInt32(uint u)
    {
        byteBuffer[0] = (byte) (u >> 24);
        byteBuffer[1] = (byte) (u >> 16);
        byteBuffer[2] = (byte) (u >> 8);
        byteBuffer[3] = (byte) u;

        string uInt32String = Convert.ToBase64String(byteBuffer);

        messageString += uInt32String;
    }

    private byte[] eightByteBuffer = new byte[8];

    public void WriteUlong(ulong u)
    {
        eightByteBuffer[0] = (byte) (u >> 56);
        eightByteBuffer[1] = (byte) (u >> 48);
        eightByteBuffer[2] = (byte) (u >> 40);
        eightByteBuffer[3] = (byte) (u >> 32);
        eightByteBuffer[4] = (byte) (u >> 24);
        eightByteBuffer[5] = (byte) (u >> 16);
        eightByteBuffer[6] = (byte) (u >> 8);
        eightByteBuffer[7] = (byte) u;

        string ulongString = Convert.ToBase64String(eightByteBuffer);
        messageString += ulongString;
    }

    private byte[] twoByteBuffer = new byte[2];

    public void WriteUShort(ushort u)
    {
        twoByteBuffer[0] = (byte) ((uint) u >> 8);
        twoByteBuffer[1] = (byte) u;

        string ushortString = Convert.ToBase64String(twoByteBuffer);

        messageString += ushortString;
    }

    private byte[] oneByteBuffer = new byte[1];

    public void WriteByte(byte b)
    {
        oneByteBuffer[0] = b;
        string byteString = Convert.ToBase64String(oneByteBuffer);
        messageString += byteString;
    }

    

    public string GetMessage()
    {
        return messageString;
    }
}