using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.Networking;
using System.Security.Cryptography;
using System.Text;


public class VoxelServer : MonoBehaviour
{
    const char MAP_TAG = 'a';
    const char PLAYER_INIT_TAG = 'b';
    const char ADD_PLAYER_TAG = 'c';
    const char INPUT_TAG = 'd';
    const char BLOCK_EDIT_TAG = 'e';
    const char OTHER_POSITION_TAG = 'f';
    const char PLAYER_STATE_TAG = 'g';
    const char REMOVE_PLAYER_TAG = 'h';
    const char MAP_LOADED_TAG = 'i';
    const char MAP_RELOADED_TAG = 'j';
    public const char LOGIN_ATTEMPT_TAG = 'k';
    public const char CHAT_TAG = 'l';
    public const char CLIENT_POSITION_TAG = 'm';
    public const char CREATE_ACCOUNT_TAG = 'n';

    VoxelEngine vEngine;
    ServerPlayerManager PlayerManager;
    ServerGameManager gManager;
    ServerBlockEditor bEditor;
    ClientConnectionManager ConnectionManager;


    //players who have loaded the current map
    List<RtcClient> loadedPlayers = new List<RtcClient>();

    private string addAccountURL = "http://localhost/VoxelZombies/addAccount.php?";

    private string loginAttemptURL = "http://localhost/VoxelZombies/loginAttempt.php?";

    private string saltURL = "http://localhost/VoxelZombies/getSalt.php?";

    private string playerStatsURL = "http://localhost/VoxelZombies/playerStats.php?";


    public Dictionary<ushort, string> playerNames = new Dictionary<ushort, string>();

    private void Awake()
    {
        vEngine = GetComponent<VoxelEngine>();
        //  XMLServer = GetComponent<XmlUnityServer>();
        PlayerManager = GetComponent<ServerPlayerManager>();
        gManager = GetComponent<ServerGameManager>();
        bEditor = GetComponent<ServerBlockEditor>();
        ConnectionManager = GetComponent<ClientConnectionManager>();

        ConnectionManager.ClientConnected += PlayerConnected;
        ConnectionManager.ClientDisconnected += PlayerDisconnected;
        ConnectionManager.MessageReceived += ClientMessageReceived;
    }


    //When a player connects they are sent the current map to load
    void PlayerConnected(RtcClient client)
    {
        RtcMessage message = new RtcMessage(MAP_TAG);

        message.WriteStr(vEngine.currentMap.Name);

        client.SendReliableMessage(message);
    }

    void PlayerDisconnected(RtcClient client)
    {
        if (PlayerManager.PlayerDictionary.ContainsKey(client.ID))
        {
            bool wasHuman = PlayerManager.PlayerDictionary[client.ID].stateTag == 0;

            SendPublicChat(playerNames[client.ID] + " has left the game.", 2);

            ushort playerID = client.ID;
            PlayerManager.RemovePlayer(playerID);
            loadedPlayers.Remove(client);
            playerNames.Remove(playerID);

            RtcMessage removePlayerMessage = new RtcMessage(REMOVE_PLAYER_TAG);
            removePlayerMessage.WriteUShort(playerID);

            foreach (RtcClient c in ConnectionManager.GetAllClients())
            {
                c.SendReliableMessage(removePlayerMessage);
            }


            if (wasHuman)
            {
                gManager.CheckZombieWin();
            }
            else
            {
                gManager.CheckNoZombies();
            }
        }
    }

    void ClientMessageReceived(ushort clientId, RtcClient client, byte[] message)
    {
        //ClientId must already be verified.
        // char messageTag = Encoding.ASCII.GetChars(message, 0, 1)[0];
        string messageStr = new string(Encoding.ASCII.GetChars(message));
        RtcMessageReader reader = new RtcMessageReader(messageStr);
        char messageTag = reader.ReadTag();


        if (messageTag == INPUT_TAG)
        {
            PlayerManager.ReceiveInputs(clientId, client, reader);
        }
        else if (messageTag == BLOCK_EDIT_TAG)
        {
            ApplyBlockEdit(reader);
        }
        else if (messageTag == MAP_RELOADED_TAG)
        {
            ReInitializePlayer(clientId, client, reader);
        }
        else if (messageTag == LOGIN_ATTEMPT_TAG)
        {
            HandleLogin(clientId, client, reader.ReadString());
        }
        else if (messageTag == CHAT_TAG)
        {
            HandlePlayerChat(client, reader);
        }
        else if (messageTag == CREATE_ACCOUNT_TAG)
        {
            //  TryCreateAccount(e);
        }
    }

    char[] chatParams = {' '};

    private void HandlePlayerChat(RtcClient client, RtcMessageReader reader)
    {
        string chatMessage = reader.ReadString();
        ushort colorTag = reader.ReadUShort();

        if (chatMessage[0] == '/')
        {
            string[] commands = chatMessage.Split(chatParams, System.StringSplitOptions.RemoveEmptyEntries);

            switch (commands[0])
            {
                case "/vote":
                    if (gManager.inVoteTime)
                    {
                        if (commands.Length > 1)
                        {
                            string mapName = commands[1];
                            if (gManager.AddVote(mapName))
                            {
                                SendPrivateChat(
                                    "Your vote for " + mapName + " has been recorded. Thanks for voting!", 2,
                                    client.ID);
                            }
                            else
                            {
                                SendPrivateChat(mapName + " does not match a map candidate.", 2, client.ID);
                            }
                        }
                        else
                        {
                            SendPrivateChat("Improper format, use: /vote [MapName] or /vote #", 2, client.ID);
                        }
                    }
                    else
                    {
                        SendPrivateChat("Map voting is closed until the end of the round.", 2, client.ID);
                    }

                    break;
                case "/message":
                    if (commands.Length > 2)
                    {
                        string playerName = commands[1];
                        if (playerNames.ContainsValue(playerName))
                        {
                            ushort targetID = GetIDFromName(playerName);
                            string message = "";
                            for (int i = 2; i < commands.Length; i++)
                            {
                                message += commands[i];
                                message += " ";
                            }

                            SendPrivateChat("From: " + playerNames[client.ID] + ": " + message, colorTag,
                                targetID);
                            SendPrivateChat("To: " + playerNames[targetID] + ": " + message, colorTag, client.ID);
                        }
                        else
                        {
                            SendPrivateChat("Player: " + playerName + " not found.", 2, client.ID);
                        }
                    }
                    else
                    {
                        SendPrivateChat("Improper format, use: /message [player] [message]", 2, client.ID);
                    }

                    break;
                case "/stats":
                    if (commands.Length == 1)
                    {
                        string name = PlayerManager.PlayerDictionary[client.ID].name;
                        int kills = PlayerManager.PlayerDictionary[client.ID].kills;
                        int deaths = PlayerManager.PlayerDictionary[client.ID].deaths;
                        int roundsWon = PlayerManager.PlayerDictionary[client.ID].roundsWon;
                        int timeOnline = PlayerManager.PlayerDictionary[client.ID].timeOnline +
                                         (int) (Time.time - PlayerManager.PlayerDictionary[client.ID].timeJoined);
                        int hours = timeOnline / 3600;
                        int minutes = (timeOnline - hours * 3600) / 60;
                        int seconds = timeOnline % 60;
                        SendPrivateChat(
                            name + "'s stats: \nKills: " + kills + "\nDeaths: " + deaths + "\nRounds Won: " +
                            roundsWon + "\nTime Online: " + hours + " hours, " + minutes + " minutes, " + seconds +
                            " seconds.", 2, client.ID);
                    }
                    else if (commands.Length == 2)
                    {
                        string playerName = commands[1];
                        if (playerNames.ContainsValue(playerName))
                        {
                            ushort ID = GetIDFromName(playerName);

                            int kills = PlayerManager.PlayerDictionary[ID].kills;
                            int deaths = PlayerManager.PlayerDictionary[ID].deaths;
                            int roundsWon = PlayerManager.PlayerDictionary[ID].roundsWon;
                            int timeOnline = PlayerManager.PlayerDictionary[ID].timeOnline +
                                             (int) (Time.time - PlayerManager.PlayerDictionary[client.ID]
                                                 .timeJoined);
                            int hours = timeOnline / 3600;
                            int minutes = (timeOnline - hours * 3600) / 60;
                            int seconds = timeOnline % 60;

                            SendPrivateChat(
                                playerName + "'s stats: \nKills: " + kills + "\nDeaths: " + deaths +
                                "\nRounds Won: " + roundsWon + "\nTime Online: " + hours + " hours, " + minutes +
                                " minutes, " + seconds + " seconds.", 2, client.ID);
                        }
                        else
                        {
                            StartCoroutine(PrintPlayerStats(playerName, client.ID));
                        }
                    }
                    else
                    {
                        SendPrivateChat(
                            "Improper format, use: /stats to see your stats or /stats [player] to see another players stats",
                            2, client.ID);
                    }

                    break;
                case "/commands":
                    SendPrivateChat("The available commands are: /vote, /stats, and /message", 2, client.ID);
                    break;
                default:
                    SendPrivateChat(
                        "The command: " + commands[0] + " does not exist. Use /commands to see available commands.",
                        2, client.ID);
                    break;
            }
        }
        else
        {
            string namedChatMessage = playerNames[client.ID] + ": " + chatMessage;

            SendPublicChat(namedChatMessage, colorTag);
        }
    }

    IEnumerator PrintPlayerStats(string name, ushort recipientID)
    {
        WWWForm form = new WWWForm();

        form.AddField("name", name);

        UnityWebRequest stats_post = UnityWebRequest.Post(playerStatsURL, form);

        yield return stats_post.SendWebRequest();

        string returnText = stats_post.downloadHandler.text;

        string[] stats = returnText.Split();

        if (stats.Length == 4)
        {
            int kills = int.Parse(stats[0]);
            int deaths = int.Parse(stats[1]);
            int roundsWon = int.Parse(stats[2]);
            int timeOnline = int.Parse(stats[3]);

            SendPrivateChat(
                name + "'s stats: \nKills: " + kills + "\nDeaths: " + deaths + "\nRounds Won: " + roundsWon +
                "\nTime Online: " + timeOnline, 2, recipientID);
        }
        else
        {
            SendPrivateChat("Player: " + name + " not found.", 2, recipientID);
        }
    }

    public ushort GetIDFromName(string playerName)
    {
        foreach (ushort key in playerNames.Keys)
        {
            if (playerNames[key] == playerName)
            {
                return key;
            }
        }

        return 1000;
    }

    public void SendPublicChat(string chatMessage, ushort colorTag)
    {
        RtcMessage newChatMessage = new RtcMessage(CHAT_TAG);
        newChatMessage.WriteStr(chatMessage);
        newChatMessage.WriteUShort(colorTag);
        foreach (RtcClient c in loadedPlayers)
        {
            c.SendReliableMessage(newChatMessage);
        }
    }

    public void SendPrivateChat(string chatMessage, ushort colorTag, ushort recipientID)
    {
        RtcMessage newChatMessage = new RtcMessage(CHAT_TAG);
        newChatMessage.WriteStr(chatMessage);
        newChatMessage.WriteUShort(colorTag);
        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            if (c.ID == recipientID)
            {
                c.SendReliableMessage(newChatMessage);
            }
        }
    }

    // private void TryCreateAccount(MessageReceivedEventArgs e)
    // {
    //     using (DarkRiftReader reader = e.GetMessage().GetReader())
    //     {
    //         string userName = reader.ReadString();
    //         string password = reader.ReadString();
    //
    //         StartCoroutine(PostNewAccount(userName, password, e));
    //     }
    // }

    // IEnumerator PostNewAccount(string userName, string password, MessageReceivedEventArgs e)
    // {
    //     //create a salt
    //     byte[] salt = new byte[32]; //change this to be the length of the hash later
    //     RNGCryptoServiceProvider CSPRNG = new RNGCryptoServiceProvider();
    //     CSPRNG.GetBytes(salt);
    //
    //     //get the password as bytes
    //     byte[] passwordBytes = System.Text.Encoding.UTF8.GetBytes(password);
    //
    //     //prepend the salt to the password and hash the result
    //     byte[] saltedPassword = CombineByteArrays(salt, passwordBytes);
    //     byte[] hashValue;
    //
    //     using (SHA256 mySHA256 = SHA256.Create())
    //     {
    //         hashValue = mySHA256.ComputeHash(saltedPassword);
    //     }
    //
    //     string hashedPassword = ByteArrayToString(hashValue);
    //     string saltString = ByteArrayToString(salt);
    //
    //
    //     WWWForm form = new WWWForm();
    //
    //     form.AddField("name", userName);
    //     form.AddField("password", saltString + hashedPassword);
    //
    //     UnityWebRequest account_post = UnityWebRequest.Post(addAccountURL, form);
    //
    //     yield return account_post.SendWebRequest();
    //
    //     string returnText = account_post.downloadHandler.text;
    //
    //     bool createdAccount;
    //
    //     if (returnText == "Name in Database")
    //     {
    //         createdAccount = false;
    //         Debug.Log("Name in database");
    //     }
    //     else if (returnText == "Added Account to Database")
    //     {
    //         createdAccount = true;
    //         Debug.Log("created account");
    //     }
    //     else
    //     {
    //         createdAccount = false;
    //         Debug.LogError(returnText);
    //     }
    //
    //     using (DarkRiftWriter createAccountWriter = DarkRiftWriter.Create())
    //     {
    //         createAccountWriter.Write(createdAccount);
    //         using (Message accountMessage = Message.Create(CREATE_ACCOUNT_TAG, createAccountWriter))
    //         {
    //             e.Client.SendMessage(accountMessage, SendMode.Reliable);
    //         }
    //     }
    // }

    public static byte[] CombineByteArrays(byte[] first, byte[] second)
    {
        byte[] bytes = new byte[first.Length + second.Length];
        Buffer.BlockCopy(first, 0, bytes, 0, first.Length);
        Buffer.BlockCopy(second, 0, bytes, first.Length, second.Length);
        return bytes;
    }

    public static string ByteArrayToString(byte[] ba)
    {
        return BitConverter.ToString(ba).Replace("-", "");
    }

    public static byte[] StringToByteArray(String hex)
    {
        int NumberChars = hex.Length;
        byte[] bytes = new byte[NumberChars / 2];
        for (int i = 0; i < NumberChars; i += 2)
            bytes[i / 2] = Convert.ToByte(hex.Substring(i, 2), 16);
        return bytes;
    }


    void PostLoginAttempt(ushort clientId, RtcClient client, string name, string password)
    {
        string returnText = "";


        if (!playerNames.ContainsValue(name))
        {
            returnText = "Login Successful";
        }
        else
        {
            returnText = "No Username";
        }
        
        ushort succesfulLogin;

        if (returnText == "Login Successful")
        {
            playerNames.Add(clientId, name);

            InitializePlayer(clientId, client, name);

            SendPublicChat(playerNames[clientId] + " has joined the fray.", 2);

            succesfulLogin = 0;
        }
        else if (returnText == "No Username")
        {
            succesfulLogin = 1;
        }
        else if (returnText == "Password Mismatch")
        {
            succesfulLogin = 2;
        }
        else
        {
            succesfulLogin = 3;
            Debug.LogError(returnText);
        }

        RtcMessage loginMessage = new RtcMessage(LOGIN_ATTEMPT_TAG);
        loginMessage.WriteInt(succesfulLogin);

        client.SendReliableMessage(loginMessage);
    }

    //If login is successful then initialize player
    //otherwise tell client unsuccessful so they can attempt again
    private void HandleLogin(ushort clientId, RtcClient client, string name)
    {
        PostLoginAttempt(clientId, client, name, "");
    }

    //On successful login player is initialized.
    //New player is added to PlayerManager
    //All players are told about new player
    private void InitializePlayer(ushort clientId, RtcClient client, string name)
    {
        ushort stateTag;
        if (gManager.inStartTime)
        {
            stateTag = 0;
        }
        else
        {
            stateTag = 1;
        }

        PlayerManager.AddPlayer(clientId, stateTag, vEngine.currentMap.SpawnX, vEngine.currentMap.SpawnY,
            vEngine.currentMap.SpawnZ, name);

        //This message is to the new player and tells them the ID, state, position, and name of every player
        RtcMessage playerMessage = new RtcMessage(PLAYER_INIT_TAG);

        playerMessage.WriteInt(PlayerManager.PlayerDictionary.Count);

        foreach (ushort playerID in PlayerManager.PlayerDictionary.Keys)
        {
            Transform playerTransform = PlayerManager.PlayerDictionary[playerID].transform;

            playerMessage.WriteUShort(playerID);
            playerMessage.WriteUShort(PlayerManager.PlayerDictionary[playerID].stateTag);
            Vector3 position = playerTransform.position;
            playerMessage.WriteFloat(position.x);
            playerMessage.WriteFloat(position.y);
            playerMessage.WriteFloat(position.z);

            Quaternion rotation = playerTransform.rotation;
            playerMessage.WriteFloat(rotation.eulerAngles.x);
            playerMessage.WriteFloat(rotation.eulerAngles.y);
            playerMessage.WriteFloat(rotation.eulerAngles.z);

            playerMessage.WriteStr(playerNames[playerID]);
        }

        client.SendReliableMessage(playerMessage);


        RtcMessage newPlayerMessage = new RtcMessage(ADD_PLAYER_TAG);


        Transform newPlayerTransform = PlayerManager.PlayerDictionary[clientId].transform;

        newPlayerMessage.WriteUShort(clientId);
        Vector3 newPlayerPosition = newPlayerTransform.position;
        newPlayerMessage.WriteFloat(newPlayerPosition.x);
        newPlayerMessage.WriteFloat(newPlayerPosition.y);
        newPlayerMessage.WriteFloat(newPlayerPosition.z);

        Quaternion newPlayerRotation = newPlayerTransform.rotation;
        newPlayerMessage.WriteFloat(newPlayerRotation.eulerAngles.x);
        newPlayerMessage.WriteFloat(newPlayerRotation.eulerAngles.y);
        newPlayerMessage.WriteFloat(newPlayerRotation.eulerAngles.z);

        newPlayerMessage.WriteUShort(PlayerManager.PlayerDictionary[clientId].stateTag);

        newPlayerMessage.WriteStr(playerNames[clientId]);

        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            if (c.ID != clientId)
            {
                c.SendReliableMessage(newPlayerMessage);
            }
        }

        RtcMessage blockEditMessage = new RtcMessage(BLOCK_EDIT_TAG);

        foreach (BlockEdit bEdit in bEditor.EditedBlocks)
        {
            blockEditMessage.WriteUShort(bEdit.x);
            blockEditMessage.WriteUShort(bEdit.y);
            blockEditMessage.WriteUShort(bEdit.z);
            blockEditMessage.WriteUShort(bEdit.blockTag);
        }

        client.SendReliableMessage(blockEditMessage);
    }

    private void ReInitializePlayer(ushort clientId, RtcClient client, RtcMessageReader reader)
    {
        string mapLoaded = reader.ReadString();

        if (mapLoaded == vEngine.currentMap.Name)
        {
            if (!loadedPlayers.Contains(client))
            {
                Debug.Log("re added player");
                loadedPlayers.Add(client);
            }

            RtcMessage message = new RtcMessage(BLOCK_EDIT_TAG);

            foreach (BlockEdit bEdit in bEditor.EditedBlocks)
            {
                message.WriteUShort(bEdit.x);
                message.WriteUShort(bEdit.y);
                message.WriteUShort(bEdit.z);
                message.WriteUShort(bEdit.blockTag);
            }

            client.SendReliableMessage(message);
        }
        else
        {
            RtcMessage message = new RtcMessage(MAP_TAG);

            message.WriteStr(vEngine.currentMap.Name);

            client.SendReliableMessage(message);
        }


        // Vector3 spawnPosition =
        //     new Vector3(vEngine.currentMap.SpawnX, vEngine.currentMap.SpawnY, vEngine.currentMap.SpawnZ);
        //
        //
        // RtcMessage positionMessage = new RtcMessage(OTHER_POSITION_TAG);
        // positionMessage.WriteUShort(clientId);
        //
        //
        // PlayerManager.PlayerDictionary[clientId].transform.position = spawnPosition;
        //
        // Rigidbody rb = PlayerManager.PlayerDictionary[clientId].transform.GetComponent<Rigidbody>();
        // rb.velocity = Vector3.zero;
        //
        // positionMessage.WriteFloat(spawnPosition.x);
        // positionMessage.WriteFloat(spawnPosition.y);
        // positionMessage.WriteFloat(spawnPosition.z);
        //
        // foreach (RtcClient c in ConnectionManager.GetAllClients())
        // {
        //     if (c.ID != clientId)
        //     {
        //         c.SendReliableMessage(positionMessage);
        //     }
        // }
    }


    void ApplyBlockEdit(RtcMessageReader reader)
    {
        //world position of the block to be edited
        ushort x = reader.ReadUShort();
        ushort y = reader.ReadUShort();
        ushort z = reader.ReadUShort();

        //the new blockTag the client requested
        ushort blockTag = reader.ReadUShort();

        if (bEditor.TryApplyEdit(x, y, z, blockTag))
        {
            RtcMessage blockEditMessage = new RtcMessage(BLOCK_EDIT_TAG);
            blockEditMessage.WriteUShort(x);
            blockEditMessage.WriteUShort(y);
            blockEditMessage.WriteUShort(z);
            blockEditMessage.WriteUShort(blockTag);

            foreach (RtcClient c in ConnectionManager.GetAllClients())
            {
                c.SendReliableMessage(blockEditMessage);
            }
        }
    }

    public void SendPositionUpdate(ushort id, Vector3 newPosition, float yRot)
    {
        RtcMessage positionMessage = new RtcMessage(OTHER_POSITION_TAG);
        positionMessage.WriteUShort(id);

        positionMessage.WriteFloat(newPosition.x);
        positionMessage.WriteFloat(newPosition.y);
        positionMessage.WriteFloat(newPosition.z);

        positionMessage.WriteFloat(yRot);

        positionMessage.WriteUShort(PlayerManager.PlayerDictionary[id].inWater ? (ushort) 1 : (ushort) 0);
        positionMessage.WriteUShort(PlayerManager.PlayerDictionary[id].moving ? (ushort) 1 : (ushort) 0);

        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            if (c.ID != id)
            {
                c.SendUnreliableMessage(positionMessage);
            }
        }
    }

    public void SendPositionUpdate(ushort id, RtcClient client, Vector3 newPosition, int ClientTickNumber,
        Vector3 velocity)
    {
        RtcMessage positionMessage = new RtcMessage(CLIENT_POSITION_TAG);

        positionMessage.WriteUShort(id);
        positionMessage.WriteFloat(newPosition.x);
        positionMessage.WriteFloat(newPosition.y);
        positionMessage.WriteFloat(newPosition.z);

        positionMessage.WriteInt(ClientTickNumber);

        positionMessage.WriteFloat(velocity.x);
        positionMessage.WriteFloat(velocity.y);
        positionMessage.WriteFloat(velocity.z);

        client.SendUnreliableMessage(positionMessage);
    }

    public void UpdatePlayerState(ushort ID, ushort stateTag)
    {
        if (PlayerManager.PlayerDictionary.ContainsKey(ID))
        {
            PlayerManager.PlayerDictionary[ID].stateTag = stateTag;
            Color newColor;

            if (stateTag == 0)
            {
                newColor = Color.white;
            }
            else
            {
                newColor = Color.red;
            }

            PlayerManager.PlayerDictionary[ID].transform.GetComponent<MeshRenderer>().material.color = newColor;

            RtcMessage stateMessage = new RtcMessage(PLAYER_STATE_TAG);
            stateMessage.WriteUShort(ID);
            stateMessage.WriteUShort(stateTag);

            foreach (RtcClient c in ConnectionManager.GetAllClients())
            {
                c.SendReliableMessage(stateMessage);
            }
        }
        else
        {
            Debug.LogError("Tried to set State: " + stateTag + " for player: " + ID);
        }
    }

    public void StartRound()
    {
        bEditor.EditedBlocks.Clear();

        foreach (ushort ID in PlayerManager.PlayerDictionary.Keys)
        {
            UpdatePlayerState(ID, 0);
        }

        Vector3 spawnPosition =
            new Vector3(vEngine.currentMap.SpawnX, vEngine.currentMap.SpawnY, vEngine.currentMap.SpawnZ);

        RtcMessage mapMessage = new RtcMessage(MAP_TAG);
        mapMessage.WriteStr(vEngine.currentMap.Name);
        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            c.SendReliableMessage(mapMessage);

            if (PlayerManager.PlayerDictionary.ContainsKey(c.ID))
            {
                PlayerManager.PlayerVelocities[c.ID] = Vector3.zero;
                PlayerManager.PlayerDictionary[c.ID].transform.position = spawnPosition;
            }

            loadedPlayers.Remove(c);
        }
    }

    public ushort GetRandomPlayer()
    {
        int numClients = loadedPlayers.Count;
        int playerIndex = UnityEngine.Random.Range(0, numClients);
        if (numClients != 0)
        {
            return loadedPlayers[playerIndex].ID;
        }
        else
        {
            return 1000;
        }
    }
}