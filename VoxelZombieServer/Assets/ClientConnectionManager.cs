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
        string certPath = "D://Certs/Sat/1/www.crashblox.net.pfx";
        string certPass = "bXPVRKsUGhbK";

        // cert = new X509Certificate2(certPath, certPass);
        // Debug.Log(cert.Issuer);
        //
        // X509Certificate2Collection collection = GetUserCertificates();
        // Debug.Log("Num certificates: " + collection.Count);
        // foreach (X509Certificate2 certificate2 in collection)
        // {
        //     Debug.Log(certificate2.FriendlyName + " " + certificate2.Subject);
        // }

     //   serverCertificate = new X509Certificate2(certPath, certPass, X509KeyStorageFlags.Exportable);

        //  serverCertificate.Import(certPath, (string) null, X509KeyStorageFlags.Exportable);
        //    IPAddress.Parse("192.168.0.171")
        // Listener = new TcpListener(IPAddress.Parse("192.168.0.171"), 443);
        // StartAsyncListener(Listener);
        HttpListener = new HttpListener();

        HttpListener.Prefixes.Add("http://127.0.0.1:25565/");
        StartHttpListener(HttpListener);
    }

    private static X509Certificate2Collection GetUserCertificates()
    {
        var localMachineStore = new X509Store(StoreLocation.LocalMachine);
        localMachineStore.Open(OpenFlags.ReadWrite);
        var certificates = localMachineStore.Certificates;
        localMachineStore.Close();
        return certificates;
    }

    private void OnApplicationQuit()
    {
        Listener.Stop();
//        HttpListener.Stop();
    }


    private async void StartAsyncListener(TcpListener listener)
    {
        listener.Start();
        Debug.Log("Starting Listener");
        while (true)
        {
            TcpClient client = await listener.AcceptTcpClientAsync();

            Debug.Log("Accepted client");
            SslStream sslStream = new SslStream(client.GetStream(), false);

            try
            {
                await sslStream.AuthenticateAsServerAsync(serverCertificate, false, SslProtocols.Tls12, true);

                sslStream.ReadTimeout = 5000;
                sslStream.WriteTimeout = 5000;

                string messageData = ReadMessage(sslStream);
                Debug.Log(messageData);
                byte[] message = Encoding.UTF8.GetBytes("Hello from the server.<EOF>");
                Console.WriteLine("Sending hello message.");
                sslStream.Write(message);
            }
            catch (AuthenticationException e)
            {
                Debug.Log("Authentication Exception: " + e.Message);
                //do i need to reset cert. 
                Debug.Log(e.InnerException);
                sslStream.Close();
                client.Close();
            }
            catch (ArgumentException e)
            {
                Debug.Log("Argument Exception: " + e.Message);
                //do i need to reset cert. 
                Debug.Log(e.InnerException);
                sslStream.Close();
                client.Close();
            }
            finally
            {
                //cert.Reset();
                sslStream.Close();
                client.Close();
            }
        }
    }

    private async void StartHttpListener(HttpListener listener)
    {
        listener.Start();
        Debug.Log("Starting Listener");

        while (true)
        {
            HttpListenerContext ctx = await listener.GetContextAsync();
            Debug.Log("Context");
            //  Peel out the requests and response objects
            HttpListenerRequest req = ctx.Request;
            HttpListenerResponse resp = ctx.Response;

            resp.Headers.Add("Access-Control-Allow-Origin", "*");
            resp.Headers.Add("Access-Control-Allow-Private-Network", "true");

            // if (req.HttpMethod == "GET")
            //   {
            if (req.Url.AbsolutePath == "/get-offer")
            {
                StartCoroutine(HandleGetOffer(req, resp));
            }
            //      }

            //   else if (req.HttpMethod == "POST")
            // {
            if (req.Url.AbsolutePath == "/send-answer-get-candidate")
            {
                StartCoroutine(HandleSendAnswer(req, resp));
            }
        }
    }


    static string ReadMessage(SslStream sslStream)
    {
        // Read the  message sent by the client.
        // The client signals the end of the message using the
        // "<EOF>" marker.
        byte[] buffer = new byte[2048];
        StringBuilder messageData = new StringBuilder();
        int bytes = -1;
        do
        {
            // Read the client's test message.
            bytes = sslStream.Read(buffer, 0, buffer.Length);

            // Use Decoder class to convert from bytes to UTF8
            // in case a character spans two buffers.
            Decoder decoder = Encoding.UTF8.GetDecoder();
            char[] chars = new char[decoder.GetCharCount(buffer, 0, bytes)];
            decoder.GetChars(buffer, 0, bytes, chars, 0);
            messageData.Append(chars);
            // Check for EOF or an empty message.
            if (messageData.ToString().IndexOf("<EOF>") != -1)
            {
                break;
            }
        } while (bytes != 0);

        return messageData.ToString();
    }

    private IEnumerator HandleGetOffer(HttpListenerRequest req, HttpListenerResponse resp)
    {
        Debug.Log("Handle Get Offer");
        ushort clientId = nextClientId;
        nextClientId++;

        RTCPeerConnection peerConnection = new RTCPeerConnection();
     

        peerConnection.OnIceConnectionChange += state => { Debug.Log("On Ice State Change: " + state); };

        RTCDataChannel unreliableDataChannel = peerConnection.CreateDataChannel("Unreliable", new RTCDataChannelInit()
        {
            ordered = false,
            maxRetransmits = 0
        });

        unreliableDataChannel.OnOpen += () =>
        {
            Debug.Log("Unreliable Open");
            clients[clientId].UnreliableOpen = true;
            if (clients[clientId].ReliableOpen)
            {
                clients[clientId].ConnectionReady();
            }
        };

        unreliableDataChannel.OnClose += () => { Debug.Log("On Close"); };

        unreliableDataChannel.OnMessage += bytes => { MessageReceived(clientId, clients[clientId], bytes); };

        RTCDataChannel reliableDataChannel = peerConnection.CreateDataChannel("Reliable", new RTCDataChannelInit()
        {
            ordered = true
        });

        reliableDataChannel.OnOpen += () =>
        {
            Debug.Log("Reliable Open");
            clients[clientId].ReliableOpen = true;
            if (clients[clientId].UnreliableOpen)
            {
                clients[clientId].ConnectionReady();
            }
        };

        reliableDataChannel.OnClose += () => { clients[clientId].ConnectionClosed(); };


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
        string newSdp = sdp.Replace("c=IN IP4 0.0.0.0", "c=IN IP4 209.6.75.168");
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
                string newCandidate = candidate.Replace("192.168.0.171", "209.6.75.168");
                JObject jObject = JObject.FromObject(new
                {
                    address = "209.6.75.168",
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