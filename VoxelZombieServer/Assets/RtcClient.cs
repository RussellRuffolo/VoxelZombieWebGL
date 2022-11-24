using System.Collections;
using System.Collections.Generic;
using System.Net;
using Unity.WebRTC;
using UnityEngine;
using ClientId = System.UInt16;

public delegate void ConnectionReadyDelegate();

public delegate void ConnectionClosedDelegate();

public class RtcClient
{
    public RTCPeerConnection PeerConnection;

    public RTCDataChannel UnreliableDataChannel;

    public RTCDataChannel ReliableDataChannel;

    public RTCIceCandidate IceCandidate;

    public HttpListenerResponse IceCandidateResponse;

    public bool ReliableOpen;
    public bool UnreliableOpen;

    public ushort ID;

    public ConnectionReadyDelegate ConnectionReady;

    public ConnectionClosedDelegate ConnectionClosed;

    public bool SendUnreliableMessage(RtcMessage message)
    {
        //FOR DEBUG, not necessary
        if (UnreliableDataChannel.ReadyState == RTCDataChannelState.Open)
        {
            UnreliableDataChannel.Send(message.GetMessage());
            return true;
        }

        Debug.LogWarning("Sent message to non-open client");
        return false;
    }

    private byte[] testMessage = new byte[] {1, 2, 3};

    public bool SendReliableMessage(RtcMessage message)
    {
        //FOR DEBUG, not necessary
        if (ReliableDataChannel.ReadyState == RTCDataChannelState.Open)
        {
            ReliableDataChannel.Send(testMessage);
            ReliableDataChannel.Send(message.GetMessage());
            return true;
        }

        Debug.LogWarning("Sent message to non-open client");
        return false;
    }

    public void SendByteMessage(byte[] message)
    {
        ReliableDataChannel.Send(message);
    }


    public RtcClient(RTCPeerConnection peerConnection, RTCDataChannel unreliableDataChannel,
        RTCDataChannel reliableDataChannel, ushort clientId)
    {
        PeerConnection = peerConnection;
        UnreliableDataChannel = unreliableDataChannel;
        ReliableDataChannel = reliableDataChannel;
        ID = clientId;
        IceCandidate = null;
        IceCandidateResponse = null;
    }
}