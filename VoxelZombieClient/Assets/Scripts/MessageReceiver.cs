using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Client;
using UnityEngine;
using UnityEngine.UI;

public class MessageReceiver : MonoBehaviour
{
    private VoxelClient VoxelClient;

    private LoginClient LoginClient;
    [SerializeField] public Text reliableText;

    [SerializeField] public Text unreliableText;

    public ushort ClientId;

    private void Awake()
    {
        VoxelClient = GetComponent<VoxelClient>();
        LoginClient = GetComponent<LoginClient>();
    }

    public void SetClientId(int clientId)
    {
        ClientId = (ushort) clientId;
    }

    public void ReceiveReliableMessage(string message)
    {
        ReceiveMessage(message);
    }

    public void ReceiveUnreliableMessage(string message)
    {
        ReceiveMessage(message);
    }

    private void ReceiveMessage(string message)
    {
        RtcMessageReader reader = new RtcMessageReader(message);
        char tag = reader.ReadTag();
        Debug.LogError("received message: " + message);

        switch (tag)
        {
            case Tags.MAP_TAG:
                string mapName = reader.ReadString();
                VoxelClient.LoadMap(mapName);
                Debug.LogError("Case A: " + mapName);
                break;
            case Tags.LOGIN_ATTEMPT_TAG:
                int response = reader.ReadInt();
                Debug.LogError("Response was: " + response);
                LoginClient.OnLoginResponse(response);
                break;
            case Tags.PLAYER_INIT_TAG:
                VoxelClient.InitPlayers(ClientId, reader);
                break;
            case Tags.ADD_PLAYER_TAG:
                VoxelClient.AddPlayer(reader);
                break;
            case Tags.BLOCK_EDIT_TAG:
                VoxelClient.ApplyBlockEdit(reader);
                break;
            case Tags.OTHER_POSITION_TAG:
                VoxelClient.MovePlayer(reader);
                break;
            case Tags.CLIENT_POSITION_TAG:
                // Debug.Log("Received Client Position Message");
                VoxelClient.PerformClientPrediction(reader);
                break;
            case Tags.PLAYER_STATE_TAG:
                //  Debug.Log("Received Player State Message");
                VoxelClient.SetPlayerState(ClientId, reader);
                break;
            case Tags.REMOVE_PLAYER_TAG:
                // Debug.Log("Received Player Remove Message");
                VoxelClient.RemovePlayer(reader);
                break;
            case Tags.CHAT_TAG:
                // Debug.Log("Received Chat Message");
                VoxelClient.ReceiveChat(reader);
                break;
            default:
                Debug.LogError("Default Case");
                Debug.Log(message);
                break;
        }
    }
}