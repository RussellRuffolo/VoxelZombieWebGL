using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Security;
using System.Net.Sockets;
using System.Security;
using System.Security.Authentication;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Unity.WebRTC;
using UnityEngine;
using UnityEngine.Windows;
using ClientId = System.UInt16;

public delegate void ClientConnectedDelegate(RtcClient client);

public delegate void ClientDisconnectedDelegate(RtcClient client);

public delegate void MessageReceivedDelegate(ushort clientId, RtcClient client, byte[] message);

public class ClientConnectionManager : MonoBehaviour
{
    private Dictionary<ClientId, RtcClient> clients = new Dictionary<ClientId, RtcClient>();
    private ClientId nextClientId = 0;

    private TcpListener Listener { get; set; }
    private HttpListener HttpListener { get; set; }
    static X509Certificate2 serverCertificate = null;

    public ClientConnectedDelegate ClientConnected;
    public ClientDisconnectedDelegate ClientDisconnected;

    public MessageReceivedDelegate MessageReceived;

    public IEnumerable<RtcClient> GetAllClients()
    {
        return clients.Values.AsEnumerable();
    }


    private void Awake()
    {
        WebRTC.Initialize();

        HttpListener = new HttpListener();

        HttpListener.Prefixes.Add("http://127.0.0.1:25565/");

        StartHttpListener(HttpListener);
    }

    private async void StartHttpListener(HttpListener listener)
    {
        listener.Start();


        while (true)
        {
            HttpListenerContext ctx = await listener.GetContextAsync();

            HttpListenerRequest req = ctx.Request;
            HttpListenerResponse resp = ctx.Response;

            if (req.Url.AbsolutePath == "/get-offer")
            {
                StartCoroutine(HandleGetOffer(req, resp));
            }

            if (req.Url.AbsolutePath == "/send-answer-get-candidate")
            {
                StartCoroutine(HandleSendAnswer(req, resp));
            }
        }
    }


    private IEnumerator HandleGetOffer(HttpListenerRequest req, HttpListenerResponse resp)
    {
        ushort clientId = nextClientId;
        nextClientId++;

        RTCPeerConnection peerConnection = new RTCPeerConnection();


        peerConnection.OnIceConnectionChange += state =>
        {
            if (state == RTCIceConnectionState.Disconnected)
            {
                if (clients.ContainsKey(clientId))
                {
                    Debug.Log("Removed Client On Ice Connection Disconnected Close");
                    clients[clientId].ConnectionClosed();
                }
            }
        };

        RTCDataChannel unreliableDataChannel = peerConnection.CreateDataChannel("Unreliable", new RTCDataChannelInit()
        {
            ordered = false,
            maxRetransmits = 0
        });

        unreliableDataChannel.OnOpen += () =>
        {
            clients[clientId].UnreliableOpen = true;
            if (clients[clientId].ReliableOpen)
            {
                clients[clientId].ConnectionReady();
            }
        };

        unreliableDataChannel.OnClose += () =>
        {
            if (clients.ContainsKey(clientId))
            {
                Debug.Log("Removed Client On Unreliable Close");
                clients[clientId].ConnectionClosed();
            }
        };

        unreliableDataChannel.OnMessage += bytes => { MessageReceived(clientId, clients[clientId], bytes); };

        RTCDataChannel reliableDataChannel = peerConnection.CreateDataChannel("Reliable", new RTCDataChannelInit()
        {
            ordered = true
        });

        reliableDataChannel.OnOpen += () =>
        {
            clients[clientId].ReliableOpen = true;
            if (clients[clientId].UnreliableOpen)
            {
                clients[clientId].ConnectionReady();
            }
        };

        reliableDataChannel.OnClose += () =>
        {
            if (clients.ContainsKey(clientId))
            {
                Debug.Log("Removed Client On Reliable Close");
                clients[clientId].ConnectionClosed();
            }
        };


        //ClientId 
        reliableDataChannel.OnMessage += bytes => { MessageReceived(clientId, clients[clientId], bytes); };

        RtcClient client = new RtcClient(peerConnection, unreliableDataChannel, reliableDataChannel, clientId);

        client.ConnectionReady += () =>
        {
            Debug.Log("Connection Ready");
            ClientConnected(client);
        };

        client.ConnectionClosed += () =>
        {
            //CLIENT REMOVED ON CONNECTION CLOSED
            clients.Remove(client.ID);
            ClientDisconnected(client);
        };


        clients.Add(clientId, client);

        RTCOfferOptions options = new RTCOfferOptions();


        RTCSessionDescriptionAsyncOperation offerOp = peerConnection.CreateOffer(ref options);

        yield return offerOp;

        RTCSessionDescription desc = offerOp.Desc;

        yield return peerConnection.SetLocalDescription(ref desc);

        resp.Headers["content-type"] = "application/json";
        string sdp = offerOp.Desc.sdp;
        Debug.Log("Sdp: " + sdp);
        string newSdp = sdp.Replace("c=IN IP4 0.0.0.0", "c=IN IP4 130.44.112.230");
        GetOfferResponse respObject = new GetOfferResponse(clientId, newSdp);
        string jsonResponse = JsonUtility.ToJson(respObject);
        byte[] respBytes = Encoding.UTF8.GetBytes(jsonResponse);

        resp.Close(respBytes, false);

        peerConnection.OnIceCandidate += candidate =>
        {
            // 1. Do nothing if a candidate one is already set
            if (client.IceCandidate != null || candidate == null)
            {
                return;
            }

            // 2. Skip candidates with certain addresses.  If your server is public, you
            //    would want to skip private address, so you could add 192.168., etc.
            if (candidate.Address.StartsWith("10."))
            {
                return;
            }

            // 3. Skip candidates that aren't udp.  We only want unreliable, 
            //    unordered connections.
            if (candidate.Protocol != RTCIceProtocol.Udp)
            {
                return;
            }

            //TEST- do we need a host?
            if (candidate.Type != RTCIceCandidateType.Host)
            {
                return;
            }

            // 4. If the user is waiting for a response, send the ICE Candidate now
            if (client.IceCandidateResponse != null)
            {
                client.IceCandidateResponse.Close(Encoding.UTF8.GetBytes(JsonUtility.ToJson(candidate)), false);
                return;
            }

            // 5. Otherwise, save it for when they are ready for a response

            client.IceCandidate = candidate;
        };
    }


    private IEnumerator HandleSendAnswer(HttpListenerRequest req, HttpListenerResponse resp)
    {
        Debug.Log("Handle Send Answer");
        using (var reader = new StreamReader(req.InputStream,
                   req.ContentEncoding))
        {
            string text = reader.ReadToEnd();
            GetOfferResponse answer = JsonUtility.FromJson<GetOfferResponse>(text);
            RtcClient client = clients[answer.clientId];
            RTCSessionDescription answerDescription = new RTCSessionDescription()
            {
                sdp = answer.sdp,
                type = RTCSdpType.Answer
            };

            RTCSetSessionDescriptionAsyncOperation answerOp =
                client.PeerConnection.SetRemoteDescription(ref answerDescription);
            yield return answerOp;
            if (client.IceCandidate != null)
            {
                Debug.Log("Candidate: " + client.IceCandidate.Candidate);
                string candidate = client.IceCandidate.Candidate;
                string newCandidate = candidate.Replace("192.168.0.137", "130.44.112.230");


                JObject jObject = JObject.FromObject(new
                {
                    address = "130.44.112.230",
                    candidate = newCandidate,
                    component = "rtp",
                    foundation = client.IceCandidate.Foundation,
                    port = client.IceCandidate.Port,
                    priority = client.IceCandidate.Priority,
                    protocol = "udp",
                    sdpMid = client.IceCandidate.SdpMid,
                    sdpMLineIndex = client.IceCandidate.SdpMLineIndex,
                    type = "host",
                    usernameFragment = client.IceCandidate.UserNameFragment
                });

                jObject["relatedAddress"] = null;
                jObject["relatedPort"] = null;
                jObject["tcpType"] = null;

                string jObjectString = jObject.ToString();
                resp.Close(Encoding.UTF8.GetBytes(jObjectString), false);
                yield break;
            }

            client.IceCandidateResponse = resp;
        }
    }


    [Serializable]
    public struct GetOfferResponse
    {
        public ClientId clientId;

        public string sdp;

        public GetOfferResponse(ClientId id, string offer)
        {
            clientId = id;
            sdp = offer;
        }
    }
}