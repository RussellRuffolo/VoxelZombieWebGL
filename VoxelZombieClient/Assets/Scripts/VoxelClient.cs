using System.Collections;
using System.Net;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


namespace Client
{
    public class VoxelClient : MonoBehaviour
    {
        public bool loadedFirstMap = false;

        [SerializeField] public Canvas ZombieCanvas;

        [SerializeField] public SinglePlayerMenuController SinglePlayerMenuController;
        SinglePlayerVoxelEngine vEngine;
        private IWorld world;

        public GameObject NetworkPlayerPrefab;
        public GameObject LocalPlayerPrefab;
        public GameObject LocalPlayerSimulator;

        public GameObject SingePlayerPrefab;
        public GameObject SinglerPlayerSimulator;

        public ParticleSystem BreakBlockParticleSystem;

        public GameObject PlayerMenu;

        Dictionary<ushort, Transform> NetworkPlayerDictionary = new Dictionary<ushort, Transform>();
        Transform localPlayerTransform;
        Transform localSimTransform;


        ClientChatManager chatManager;

        List<ChunkID> dirtiedChunks = new List<ChunkID>();

        public Text InputText;
        public Image LogPanel;
        public Image InputPanel;
        public Text DisplayedLogs;

        private ClientPlayerController ClientPlayerController;

        [DllImport("__Internal")]
        private static extern void SendReliableMessage(string message);

        [DllImport("__Internal")]
        private static extern void SendUnreliableMessage(string message);

        // public Canvas ZombieCanvas;

        public void SendReliableMessage(RtcMessage message)
        {
            SendReliableMessage(message.GetMessage());
        }

        public void SendUnreliableMessage(RtcMessage message)
        {
            SendUnreliableMessage(message.GetMessage());
        }


        private LoginClient LoginClient;

        private void Awake()
        {
            vEngine = GetComponent<SinglePlayerVoxelEngine>();
            world = vEngine.World;


            chatManager = GetComponent<ClientChatManager>();

            LoginClient = GetComponent<LoginClient>();
        }


        public void PerformClientPrediction(RtcMessageReader reader)
        {
            ushort id = reader.ReadUShort();

            Vector3 serverPosition = new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat());


            int clientTickNumber = reader.ReadInt();

            Vector3 velocity = new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat());
            ClientPlayerController.ClientPrediction(serverPosition, clientTickNumber, velocity);
        }


        public void LoadMap(string mapName)
        {
            vEngine.LoadMap(mapName);

            RtcMessage message = new RtcMessage(Tags.MAP_RELOADED_TAG);
            message.WriteStr(mapName);
            SendReliableMessage(message.GetMessage());
        }

        public void InitPlayers(ushort clientId, RtcMessageReader reader)
        {
            int numPlayers = reader.ReadInt();

            for (int i = 0; i < numPlayers; i++)
            {
                ushort PlayerID = reader.ReadUShort();
                ushort StateTag = reader.ReadUShort();

                Vector3 position = new Vector3(reader.ReadFloat(),
                    reader.ReadFloat(), reader.ReadFloat());

                Vector3 eulerRotation = new Vector3(reader.ReadFloat(),
                    reader.ReadFloat(), reader.ReadFloat());

                string playerName = reader.ReadString();

                if (PlayerID == clientId)
                {
                    Instantiate(PlayerMenu);

                    GameObject LocalPlayer = Instantiate(LocalPlayerPrefab,
                        position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

                    GameObject LocalPlayerSim = Instantiate(LocalPlayerSimulator,
                        position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

                    ClientCameraController cameraController = LocalPlayer.GetComponent<ClientCameraController>();
                    cameraController.LocalPlayerSim = LocalPlayerSim.transform;

                    LocalPlayerSim.GetComponent<ClientPlayerController>().camController =
                        cameraController;
                    LocalPlayer.GetComponent<ClientBlockEditor>().blockBreakParticleSystem =
                        Instantiate(BreakBlockParticleSystem);

                    ClientPlayerController = LocalPlayerSim.GetComponent<ClientPlayerController>();

                    ClientPlayerController.PlayerAnimator = LocalPlayer.GetComponentInChildren<Animator>();
                    ClientPlayerController.InputText = InputText;
                    ClientPlayerController.LogPanel = LogPanel;
                    ClientPlayerController.InputPanel = InputPanel;
                    ClientPlayerController.DisplayedLogs = DisplayedLogs;


                    if (StateTag == 0)
                    {
                        LocalPlayer.GetComponent<MeshRenderer>().material.color = Color.white;
                    }
                    else
                    {
                        LocalPlayer.GetComponent<MeshRenderer>().material.color = Color.red;
                    }

                    chatManager.SetInputColor(StateTag);

                    localPlayerTransform = LocalPlayer.transform;
                    localSimTransform = LocalPlayerSim.transform;
                }
                else
                {
                    if (!NetworkPlayerDictionary.ContainsKey(PlayerID))
                    {
                        Debug.Log("Spawn Network Player");
                        GameObject NetworkPlayer = GameObject.Instantiate(NetworkPlayerPrefab,
                            position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

                        NetworkPlayer.GetComponentInChildren<NameTagManager>().SetName(playerName);

                        if (StateTag == 0)
                        {
                            NetworkPlayer.GetComponentInChildren<MeshRenderer>().material.color = Color.white;
                            NetworkPlayer.GetComponent<NetworkMotionSmoother>().playerAnim
                                .SetBool("IsHuman", true);
                        }
                        else
                        {
                            NetworkPlayer.GetComponentInChildren<MeshRenderer>().material.color = Color.red;
                            NetworkPlayer.GetComponent<NetworkMotionSmoother>().playerAnim
                                .SetBool("IsHuman", false);
                        }

                        NetworkPlayerDictionary.Add(PlayerID, NetworkPlayer.transform);
                    }
                }

                foreach (Transform netplayerTransform in NetworkPlayerDictionary.Values)
                {
                    netplayerTransform.GetComponentInChildren<NameTagManager>()
                        .SetPlayerTransform(localPlayerTransform);
                }
            }
        }

        public void AddPlayer(RtcMessageReader reader)
        {
            ushort PlayerID = reader.ReadUShort();

            if (!NetworkPlayerDictionary.ContainsKey(PlayerID))
            {
                Vector3 position = new Vector3(reader.ReadFloat(),
                    reader.ReadFloat(), reader.ReadFloat());

                Vector3 eulerRotation = new Vector3(reader.ReadFloat(),
                    reader.ReadFloat(), reader.ReadFloat());

                ushort stateTag = reader.ReadUShort();

                string playerName = reader.ReadString();

                GameObject NetworkPlayer = GameObject.Instantiate(NetworkPlayerPrefab,
                    position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));
                NetworkPlayer.GetComponentInChildren<NameTagManager>().SetName(playerName);
                NetworkPlayer.GetComponentInChildren<NameTagManager>().SetPlayerTransform(localPlayerTransform);

                Color newColor;

                if (stateTag == 0)
                {
                    newColor = Color.white;
                    NetworkPlayer.GetComponent<NetworkMotionSmoother>().playerAnim.SetBool("IsHuman", true);
                }
                else
                {
                    newColor = Color.red;
                    NetworkPlayer.GetComponent<NetworkMotionSmoother>().playerAnim.SetBool("IsHuman", false);
                }

                NetworkPlayer.GetComponentInChildren<MeshRenderer>().material.color = newColor;
                NetworkPlayerDictionary.Add(PlayerID, NetworkPlayer.transform);
            }
        }

        public void RemovePlayer(RtcMessageReader reader)
        {
            ushort PlayerID = reader.ReadUShort();

            Transform playerToRemove = NetworkPlayerDictionary[PlayerID];

            NetworkPlayerDictionary.Remove(PlayerID);

            Destroy(playerToRemove.gameObject);
        }

        public void SendInputs(ClientInputs[] inputsArray)
        {
            int numInputs = inputsArray.Length;
            RtcMessage inputMessage = new RtcMessage(Tags.INPUT_TAG);
            for (int i = 0; i < numInputs; i++)
            {
                inputMessage.WriteFloat(inputsArray[i].MoveVector.x);
                inputMessage.WriteFloat(inputsArray[i].MoveVector.y);
                inputMessage.WriteFloat(inputsArray[i].MoveVector.z);

                ushort jump = inputsArray[i].Jump ? (ushort) 1 : (ushort) 0;
                inputMessage.WriteUShort(jump);

                inputMessage.WriteInt(inputsArray[i].TickNumber);
            }

            SendUnreliableMessage(inputMessage.GetMessage());
        }

        public void SendBlockEdit(ushort x, ushort y, ushort z, ushort blockTag)
        {
            RtcMessage blockEditMessage = new RtcMessage(Tags.BLOCK_EDIT_TAG);
            blockEditMessage.WriteUShort(x);
            blockEditMessage.WriteUShort(y);
            blockEditMessage.WriteUShort(z);
            blockEditMessage.WriteUShort(blockTag);
            SendReliableMessage(blockEditMessage.GetMessage());
        }

        public void SendChatMessage(string chatMessage, ushort colorTag)
        {
            RtcMessage message = new RtcMessage(Tags.CHAT_TAG);
            message.WriteStr(chatMessage);
            message.WriteUShort(colorTag);
            SendReliableMessage(message.GetMessage());
        }

        public void ApplyBlockEdit(RtcMessageReader reader)
        {
            int numBlocks = reader.GetMessageLength() / 16;


            for (int i = 0; i < numBlocks; i++)
            {
                ushort x = reader.ReadUShort();
                ushort y = reader.ReadUShort();
                ushort z = reader.ReadUShort();

                byte blockTag = (byte) reader.ReadUShort();
                world[x, y, z] = blockTag;

                dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z));

                //These checks determine if the edited block was on the edge of a chunk, and dirties the neighboring chunk if so. 
                if (x % 16 == 0)
                {
                    if (x != 0)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x - 1, y, z));
                    }
                }
                else if (x % 16 == 15)
                {
                    if (x != vEngine.Length - 1)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x + 1, y, z));
                    }
                }

                if (y % 16 == 0)
                {
                    if (y != 0)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x, y - 1, z));
                    }
                }
                else if (y % 16 == 15)
                {
                    if (y != vEngine.Height - 1)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x, y + 1, z));
                    }
                }

                if (z % 16 == 0)
                {
                    if (z != 0)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z - 1));
                    }
                }
                else if (z % 16 == 15)
                {
                    if (z != vEngine.Width - 1)
                    {
                        dirtiedChunks.Add(ChunkID.FromWorldPos(x, y, z + 1));
                    }
                }


                foreach (ChunkID ID in dirtiedChunks)
                {
                    world.Chunks[ID].dirty = true;
                }

                dirtiedChunks.Clear();
            }
        }

        public void MovePlayer(RtcMessageReader reader)
        {
            ushort ID = reader.ReadUShort();

            float x = reader.ReadFloat();
            float y = reader.ReadFloat();
            float z = reader.ReadFloat();

            float yRot = reader.ReadFloat();

            bool inWater = reader.ReadUShort() == 1;
            bool moving = reader.ReadUShort() == 1;

            Vector3 position = new Vector3(x, y, z);


            if (NetworkPlayerDictionary.ContainsKey(ID))
            {
                NetworkPlayerDictionary[ID].GetComponent<NetworkMotionSmoother>()
                    .SetValues(position, yRot, inWater, moving);
            }
            else
            {
                Debug.Log("No Network Player corresponds to given ID: " + ID);
            }
        }

        public void OnSinglePlayer()
        {
            SceneManager.LoadScene("SinglePlayerScene");
        }

        public void SetPlayerState(ushort clientId, RtcMessageReader reader)
        {
            ushort ID = reader.ReadUShort();
            //0 is human, 1 is zombie
            ushort stateTag = reader.ReadUShort();

            Color newColor;

            if (stateTag == 0)
            {
                newColor = Color.white;
            }
            else
            {
                newColor = Color.red;
            }

            if (ID == clientId)
            {
                localPlayerTransform.GetComponent<MeshRenderer>().material.color = newColor;
                chatManager.SetInputColor(stateTag);
                if (stateTag == 0)
                {
                }
                else
                {
                    ZombieCanvas.enabled = true;
                    StartCoroutine(DisableZombieCanvas());
                }
            }
            else
            {
                if (NetworkPlayerDictionary.ContainsKey(ID))
                {
                    NetworkPlayerDictionary[ID].GetComponentInChildren<MeshRenderer>().material.color = newColor;
                    if (stateTag == 0)
                    {
                        NetworkPlayerDictionary[ID].GetComponent<NetworkMotionSmoother>().playerAnim
                            .SetBool("IsHuman", true);
                    }
                    else
                    {
                        NetworkPlayerDictionary[ID].GetComponent<NetworkMotionSmoother>().playerAnim
                            .SetBool("IsHuman", false);
                    }
                }
                else
                {
                    Debug.LogError("No Network Player corresponds to given ID: " + ID);
                }
            }
        }

        private IEnumerator DisableZombieCanvas()
        {
            yield return new WaitForSeconds(.5f);
            ZombieCanvas.enabled = false;
        }

        public void ReceiveChat(RtcMessageReader reader)
        {
            string chatMessage = reader.ReadString();
            ushort colorTag = reader.ReadUShort();

            chatManager.DisplayMessage(chatMessage, colorTag);
        }
    }
}