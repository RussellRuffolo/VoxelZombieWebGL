using System;
using Client;
using UnityEngine;

public class MessageReceiver : MonoBehaviour
{
    private VoxelClient VoxelClient;

    private LoginClient LoginClient;

    private GrenadeManager GrenadeManager;

    public ushort ClientId;

    private void Awake()
    {
        UInt64 test = 0;
        test.Pack(1, 2, 3, 4, 5, 6, 7, 8);

        Debug.Log("Unpacked test: " + test._000() + " " + test._001() + " " + test._101() + " " + test._100() + " " +
                  test._010() + " " + test._011() + " " + test._111() + " " + test._110() + " ");

        VoxelClient = GetComponent<VoxelClient>();
        LoginClient = GetComponent<LoginClient>();

        GrenadeManager = GetComponent<GrenadeManager>();
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

        switch (tag)
        {
            case Tags.MAP_TAG:
                string mapName = reader.ReadString();
                VoxelClient.LoadMap(mapName);
                break;
            case Tags.LOGIN_ATTEMPT_TAG:
                int response = reader.ReadInt();
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
            case Tags.USERNAME_TAG:
                LoginClient.HandleUsername(reader.ReadString());
                break;
            case Tags.GRENADE_CREATION_TAG:
                GrenadeManager.CreateGrenade(reader.ReadInt(),
                    new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat()));
                break;
            case Tags.GRENADE_POSITION_TAG:
                int numGrenades = reader.ReadInt();
                for (int i = 0; i < numGrenades; i++)
                {
                    GrenadeManager.MoveGrenade(reader.ReadInt(),
                        new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat()));
                }

                break;
            case Tags.GRENADE_DESTRUCTION_TAG:
                GrenadeManager.DestroyGrenade(reader.ReadInt());
                break;
            case Tags.CHUNK_DATA_TAG:
                VoxelClient.ProcessChunkChange(reader);
                break;
            default:
                Debug.LogError("Default Case");
                Debug.Log(message);
                break;
        }
    }
}