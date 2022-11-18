using System;
using System.Collections.Generic;
using System.Reflection;
using System.Text;
using Newtonsoft.Json.Linq;
using UnityEngine;
using Random = UnityEngine.Random;


public class VoxelServer : MonoBehaviour
{
    VoxelEngine vEngine;
    ServerPlayerManager PlayerManager;
    ServerGameManager gManager;
    ServerBlockEditor bEditor;
    ClientConnectionManager ConnectionManager;


    //players who have loaded the current map
    List<RtcClient> loadedPlayers = new List<RtcClient>();


    public Dictionary<ushort, string> playerNames = new Dictionary<ushort, string>();
    private GrenadeManager grenadeManager;

    private void Awake()
    {
        grenadeManager = GetComponent<GrenadeManager>();
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
        RtcMessage message = new RtcMessage(Tags.MAP_TAG);

        message.WriteStr(vEngine.currentMap.Name);

        message.WriteInt(vEngine.currentMap.Length);

        message.WriteInt(vEngine.currentMap.Width);

        message.WriteInt(vEngine.currentMap.Height);

        message.WriteFloat(vEngine.currentMap.SpawnX);

        message.WriteFloat(vEngine.currentMap.SpawnY);

        message.WriteFloat(vEngine.currentMap.SpawnZ);

        
        Debug.Log("Sending message for map with dimensions: " + vEngine.currentMap.Length + " " + vEngine.currentMap.Width + " " + vEngine.currentMap.Height);
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

            RtcMessage removePlayerMessage = new RtcMessage(Tags.REMOVE_PLAYER_TAG);
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
        Debug.Log("Message Received with clientID: " + clientId);

        //ClientId must already be verified.
        // char messageTag = Encoding.ASCII.GetChars(message, 0, 1)[0];
        string messageStr = new string(Encoding.ASCII.GetChars(message));
        RtcMessageReader reader = new RtcMessageReader(messageStr);
        char messageTag = reader.ReadTag();


        if (messageTag == Tags.INPUT_TAG)
        {
            PlayerManager.ReceiveInputs(clientId, client, reader);
        }
        else if (messageTag == Tags.MAP_RELOADED_TAG)
        {
            ReInitializePlayer(clientId, client, reader);
        }
        else if (messageTag == Tags.LOGIN_ATTEMPT_TAG)
        {
            HandleLoginAttempt(clientId, client, reader.ReadString());
        }
        else if (messageTag == Tags.CHAT_TAG)
        {
            HandlePlayerChat(client, reader);
        }
        else if (messageTag == Tags.TOKEN_TAG)
        {
            HandleToken(clientId, client, reader.ReadString());
        }
        else if (messageTag == Tags.PATCH_USERNAME_TAG)
        {
            HandlePatchUsername(clientId, client, reader.ReadString(), reader.ReadString());
        }
        else if (messageTag == Tags.ACTION_TAG)
        {
            PlayerManager.ReceiveActions(clientId, reader);
        }
        else if (messageTag == Tags.CHUNK_ACTIVE_TAG)
        {
            ChunkID id = new ChunkID(reader.ReadInt(), reader.ReadInt(), reader.ReadInt());
            vEngine.world.Chunks[id].AddActivePlayer(clientId);


            client.SendReliableMessage(vEngine.world.Chunks[id].CurrentChunkData);
        }
        else if (messageTag == Tags.BLOCK_EDIT_TAG)
        {
            ApplyBlockEdit(reader);
        }
        else if (messageTag == Tags.CHUNK_INACTIVE_TAG)
        {
            ChunkID id = new ChunkID(reader.ReadInt(), reader.ReadInt(), reader.ReadInt());
            vEngine.world.Chunks[id].RemoveActivePlayer(clientId);
        }
    }

    char[] chatParams = {' '};

    private void HandlePlayerChat(RtcClient client, RtcMessageReader reader)
    {
        string chatMessage = reader.ReadString();
        ushort colorTag = reader.ReadUShort();

        if (chatMessage[0] == '/')
        {
            string[] commands = chatMessage.Split(chatParams, StringSplitOptions.RemoveEmptyEntries);

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
                            //  StartCoroutine(PrintPlayerStats(playerName, client.ID));
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

    // IEnumerator PrintPlayerStats(string name, ushort recipientID)
    // {
    //     WWWForm form = new WWWForm();
    //
    //     form.AddField("name", name);
    //
    //     UnityWebRequest stats_post = UnityWebRequest.Post(playerStatsURL, form);
    //
    //     yield return stats_post.SendWebRequest();
    //
    //     string returnText = stats_post.downloadHandler.text;
    //
    //     string[] stats = returnText.Split();
    //
    //     if (stats.Length == 4)
    //     {
    //         int kills = int.Parse(stats[0]);
    //         int deaths = int.Parse(stats[1]);
    //         int roundsWon = int.Parse(stats[2]);
    //         int timeOnline = int.Parse(stats[3]);
    //
    //         SendPrivateChat(
    //             name + "'s stats: \nKills: " + kills + "\nDeaths: " + deaths + "\nRounds Won: " + roundsWon +
    //             "\nTime Online: " + timeOnline, 2, recipientID);
    //     }
    //     else
    //     {
    //         SendPrivateChat("Player: " + name + " not found.", 2, recipientID);
    //     }
    // }

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
        RtcMessage newChatMessage = new RtcMessage(Tags.CHAT_TAG);
        newChatMessage.WriteStr(chatMessage);
        newChatMessage.WriteUShort(colorTag);
        foreach (RtcClient c in loadedPlayers)
        {
            c.SendReliableMessage(newChatMessage);
        }
    }

    public void SendPrivateChat(string chatMessage, ushort colorTag, ushort recipientID)
    {
        RtcMessage newChatMessage = new RtcMessage(Tags.CHAT_TAG);
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


    void HandleLoginAttempt(ushort clientId, RtcClient client, string name)
    {
        ushort succesfulLogin;

        try
        {
            playerNames.Add(clientId, name);

            InitializePlayer(clientId, client, name);

            SendPublicChat(playerNames[clientId] + " has joined the fray.", 2);

            succesfulLogin = 0;


            RtcMessage loginMessage = new RtcMessage(Tags.LOGIN_ATTEMPT_TAG);
            loginMessage.WriteInt(succesfulLogin);

            client.SendReliableMessage(loginMessage);
        }
        catch (Exception e)
        {
            Debug.LogError("For id: " + clientId + " ERROR: " + e.Message);
            //TODO SNAPPER
        }
    }

    void ApplyBlockEdit(RtcMessageReader reader)
    {
        //world position of the block to be edited
        ushort x = reader.ReadUShort();
        ushort y = reader.ReadUShort();
        ushort z = reader.ReadUShort();

        //the new blockTag the client requested
        byte blockTag = (byte) reader.ReadUShort();

        if (bEditor.TryApplyEdit(x, y, z, blockTag))
        {
            RtcMessage blockEditMessage = new RtcMessage(Tags.BLOCK_EDIT_TAG);
            blockEditMessage.WriteUShort(x);
            blockEditMessage.WriteUShort(y);
            blockEditMessage.WriteUShort(z);
            blockEditMessage.WriteUShort(blockTag);

            foreach (RtcClient c in ConnectionManager.GetAllClients())
            {
                c.SendReliableMessage(blockEditMessage);
            }
        }
        else
        {
            RtcMessage blockEditMessage = new RtcMessage(Tags.BLOCK_EDIT_TAG);
            blockEditMessage.WriteUShort(x);
            blockEditMessage.WriteUShort(y);
            blockEditMessage.WriteUShort(z);
            blockEditMessage.WriteUShort(vEngine.world[x, y, z]);

            foreach (RtcClient c in ConnectionManager.GetAllClients())
            {
                c.SendReliableMessage(blockEditMessage);
            }
        }
    }


    private async void HandleToken(ushort clientId, RtcClient client, string token)
    {
        string response = await HttpAsyncClient.Instance.MakeTokenRequest("https://id.crashblox.net/users/me", token);

        JObject responseObject = JObject.Parse(response);

        string username = null;
        try
        {
            username = (string) responseObject["username"];
        }
        catch (Exception e)
        {
            Debug.LogError("Caught exception parsing token response: " + e.Message);
        }

        RtcMessage usernameMessage = new RtcMessage(Tags.USERNAME_TAG);

        usernameMessage.WriteStr(username);

        client.SendReliableMessage(usernameMessage);

        Debug.Log(response);
    }

    private async void HandlePatchUsername(ushort clientId, RtcClient client, string username, string token)
    {
        string response =
            await HttpAsyncClient.Instance.MakeUsernamePatchRequest("https://id.crashblox.net/users/me", username,
                token);

        JObject responseObject = JObject.Parse(response);

        string returnName = null;
        try
        {
            returnName = (string) responseObject["username"];
        }
        catch (Exception e)
        {
            Debug.LogError("Caught exception parsing patch response: " + e.Message);
        }

        RtcMessage usernameMessage = new RtcMessage(Tags.USERNAME_TAG);

        usernameMessage.WriteStr(returnName);

        client.SendReliableMessage(usernameMessage);
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
        RtcMessage playerMessage = new RtcMessage(Tags.PLAYER_INIT_TAG);

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
        foreach (ChunkID id in vEngine.SpawnChunks)
        {
            client.SendReliableMessage(vEngine.world.Chunks[id].CurrentChunkData);
        }


        RtcMessage newPlayerMessage = new RtcMessage(Tags.ADD_PLAYER_TAG);


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


        // ChunkID id = ChunkID.FromWorldPos((int) vEngine.currentMap.SpawnX, (int) vEngine.currentMap.SpawnY,
        //     (int) vEngine.currentMap.SpawnZ);
        //
        // if (vEngine.world.Chunks[id].CurrentChunkData != null)
        // {
        //     client.SendReliableMessage(vEngine.world.Chunks[id].CurrentChunkData);
        // }
        //
        // ChunkID id2 = new ChunkID(id.X, id.Y - 1, id.Z);
        //
        // if (vEngine.world.Chunks.ContainsKey(id2) && vEngine.world.Chunks[id2].CurrentChunkData != null)
        // {
        //     client.SendReliableMessage(vEngine.world.Chunks[id2].CurrentChunkData);
        // }
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

            // ChunkID id = ChunkID.FromWorldPos((int) vEngine.currentMap.SpawnX, (int) vEngine.currentMap.SpawnY,
            //     (int) vEngine.currentMap.SpawnZ);
            //
            // if (vEngine.world.Chunks[id].CurrentChunkData != null)
            // {
            //     client.SendReliableMessage(vEngine.world.Chunks[id].CurrentChunkData);
            // }
            //
            // ChunkID id2 = new ChunkID(id.X, id.Y - 1, id.Z);
            //
            // if (vEngine.world.Chunks.ContainsKey(id2) && vEngine.world.Chunks[id2].CurrentChunkData != null)
            // {
            //     client.SendReliableMessage(vEngine.world.Chunks[id2].CurrentChunkData);
            // }

            // foreach (GreedyChunk chunk in vEngine.world.Chunks.Values)
            // {
            //     if (chunk.CurrentChunkData != null)
            //     {
            //         client.SendReliableMessage(chunk.CurrentChunkData);
            //     }
            // }
        }
        else
        {
            RtcMessage message = new RtcMessage(Tags.MAP_TAG);

            message.WriteStr(vEngine.currentMap.Name);

            message.WriteInt(vEngine.currentMap.Length);

            message.WriteInt(vEngine.currentMap.Width);

            message.WriteInt(vEngine.currentMap.Height);

            message.WriteFloat(vEngine.currentMap.SpawnX);

            message.WriteFloat(vEngine.currentMap.SpawnY);

            message.WriteFloat(vEngine.currentMap.SpawnZ);

            client.SendReliableMessage(message);
        }
    }

    public void SendBlockEdit(List<ushort> ids, ushort x, ushort y, ushort z, byte blockTag)
    {
        RtcMessage blockEditMessage = new RtcMessage(Tags.BLOCK_EDIT_TAG);
        blockEditMessage.WriteUShort(x);
        blockEditMessage.WriteUShort(y);
        blockEditMessage.WriteUShort(z);
        blockEditMessage.WriteUShort(blockTag);

        foreach (ushort id in ids)
        {
            ConnectionManager.clients[id].SendReliableMessage(blockEditMessage);
        }
    }

    public void SendPositionUpdate(ushort id, Vector3 newPosition, float yRot)
    {
        RtcMessage positionMessage = new RtcMessage(Tags.OTHER_POSITION_TAG);
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

    public void SendGrenadeCreation(int throwId, GrenadeController grenadeController)
    {
        Vector3 grenadePosition = grenadeController.transform.position;
        RtcMessage grenadeCreationMessage = new RtcMessage(Tags.GRENADE_CREATION_TAG);
        grenadeCreationMessage.WriteInt(throwId);
        grenadeCreationMessage.WriteFloat(grenadePosition.x);
        grenadeCreationMessage.WriteFloat(grenadePosition.y);
        grenadeCreationMessage.WriteFloat(grenadePosition.z);

        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            c.SendReliableMessage(grenadeCreationMessage);
        }

        grenadeManager.AddGrenade(throwId, grenadeController);
    }

    public void SendGrenadeDestruction(int throwId)
    {
        RtcMessage grenadeDestructionMessage = new RtcMessage(Tags.GRENADE_DESTRUCTION_TAG);
        grenadeDestructionMessage.WriteInt(throwId);

        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            c.SendReliableMessage(grenadeDestructionMessage);
        }

        grenadeManager.RemoveGrenade(throwId);
    }

    public void BroadcastReliable(RtcMessage reliableMessage)
    {
        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            c.SendReliableMessage(reliableMessage);
        }
    }

    public void BroadcastUnreliable(RtcMessage unreliableMessage)
    {
        foreach (RtcClient c in ConnectionManager.GetAllClients())
        {
            c.SendUnreliableMessage(unreliableMessage);
        }
    }

    public void SendPositionUpdate(ushort id, RtcClient client, Vector3 newPosition, int ClientTickNumber,
        Vector3 velocity)
    {
        RtcMessage positionMessage = new RtcMessage(Tags.CLIENT_POSITION_TAG);

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

            RtcMessage stateMessage = new RtcMessage(Tags.PLAYER_STATE_TAG);
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
        bEditor.BlockEdits.Clear();

        foreach (ushort ID in PlayerManager.PlayerDictionary.Keys)
        {
            UpdatePlayerState(ID, 0);
        }

        Vector3 spawnPosition =
            new Vector3(vEngine.currentMap.SpawnX, vEngine.currentMap.SpawnY, vEngine.currentMap.SpawnZ);

        RtcMessage mapMessage = new RtcMessage(Tags.MAP_TAG);
        mapMessage.WriteStr(vEngine.currentMap.Name);
        mapMessage.WriteInt(vEngine.currentMap.Length);

        mapMessage.WriteInt(vEngine.currentMap.Width);

        mapMessage.WriteInt(vEngine.currentMap.Height);

        mapMessage.WriteFloat(vEngine.currentMap.SpawnX);

        mapMessage.WriteFloat(vEngine.currentMap.SpawnY);

        mapMessage.WriteFloat(vEngine.currentMap.SpawnZ);

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
        int playerIndex = Random.Range(0, numClients);
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