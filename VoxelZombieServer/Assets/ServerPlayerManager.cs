using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class ServerPlayerManager : MonoBehaviour
{
    public GameObject PlayerPrefab;

    public Dictionary<ushort, PlayerInformation> PlayerDictionary = new Dictionary<ushort, PlayerInformation>();
    public Dictionary<ushort, PlayerInputs> InputDictionary = new Dictionary<ushort, PlayerInputs>();

    public Dictionary<ushort, int> TickDic = new Dictionary<ushort, int>();
    public Dictionary<ushort, Vector3> PlayerVelocities = new Dictionary<ushort, Vector3>();

    public float PlayerSpeed;
    public float AirAcceleration;
    public float JumpSpeed;
    public float gravAcceleration;

    public float horizontalWaterSpeed;
    public float verticalWaterMaxSpeed;
    public float verticalWaterAcceleration;

    public float horizontalLavaSpeed;
    public float verticalLavaMaxSpeed;
    public float verticalLavaAcceleration;

    public float waterExitSpeed;

    private int serverTickNumber = 0;

    VoxelServer vServer;
    VoxelEngine vEngine;

    private string playerStatsURL = "http://localhost/VoxelZombies/playerStats.php?";
    private string updateStatsURL = "http://localhost/VoxelZombies/updateStats.php?";


    private void Awake()
    {
        vServer = GetComponent<VoxelServer>();
        vEngine = GetComponent<VoxelEngine>();
    }

    public void AddPlayer(ushort PlayerID, ushort stateTag, float xPos, float yPos, float zPos, string name)
    {
        Vector3 spawnPosition = new Vector3(xPos, yPos, zPos);

        GameObject newPlayer = Instantiate(PlayerPrefab, spawnPosition, Quaternion.identity);
        newPlayer.GetComponent<ServerPositionTracker>().ID = PlayerID;

        PlayerInformation newPlayerInfo = new PlayerInformation(newPlayer.transform, name, stateTag);
        PlayerDictionary.Add(PlayerID, newPlayerInfo);
        PlayerDictionary[PlayerID].timeJoined = Time.time;

        // StartCoroutine(GetPlayerStats(name, PlayerID));

        InputDictionary.Add(PlayerID, new PlayerInputs(Vector3.zero, false));
        TickDic.Add(PlayerID, -1);
        PlayerVelocities.Add(PlayerID, Vector3.zero);
    }

    IEnumerator GetPlayerStats(string name, ushort id)
    {
        WWWForm form = new WWWForm();

        form.AddField("name", name);

        UnityWebRequest stats_post = UnityWebRequest.Post(playerStatsURL, form);

        yield return stats_post.SendWebRequest();

        string returnText = stats_post.downloadHandler.text;

        string[] stats = returnText.Split();

        if (stats.Length == 4)
        {
            PlayerDictionary[id].kills = int.Parse(stats[0]);
            PlayerDictionary[id].deaths = int.Parse(stats[1]);
            PlayerDictionary[id].roundsWon = int.Parse(stats[2]);
            PlayerDictionary[id].timeOnline = int.Parse(stats[3]);
        }
    }

    IEnumerator PostPlayerStats(string name, int kills, int deaths, int roundsWon, int timeOnline)
    {
        WWWForm form = new WWWForm();

        form.AddField("name", name);
        form.AddField("kills", kills);
        form.AddField("deaths", deaths);
        form.AddField("rounds_won", roundsWon);
        form.AddField("time_online", timeOnline);

        UnityWebRequest stats_post = UnityWebRequest.Post(updateStatsURL, form);

        yield return stats_post.SendWebRequest();

        string returnText = stats_post.downloadHandler.text;

        Debug.Log(returnText);
    }

    public void RemovePlayer(ushort PlayerID)
    {
        string name = PlayerDictionary[PlayerID].name;
        int kills = PlayerDictionary[PlayerID].kills;
        int deaths = PlayerDictionary[PlayerID].deaths;
        int roundsWon = PlayerDictionary[PlayerID].roundsWon;
        int timeOnline = PlayerDictionary[PlayerID].timeOnline +
                         (int) (Time.time - PlayerDictionary[PlayerID].timeJoined);

        StartCoroutine(PostPlayerStats(name, kills, deaths, roundsWon, timeOnline));

        GameObject toDestroy = PlayerDictionary[PlayerID].transform.gameObject;
        PlayerDictionary.Remove(PlayerID);
        InputDictionary.Remove(PlayerID);
        Destroy(toDestroy);
    }

    public void ReceiveInputs(ushort clientId, RtcClient client, RtcMessageReader reader)
    {
        Transform targetPlayer = PlayerDictionary[clientId].transform;
        Rigidbody playerRB = targetPlayer.GetComponent<Rigidbody>();

        //allow this player to be moved and reassign its velocity
        //having all players be kinematic allows each one to be simulated 
        //seperately as inputs arrive
        playerRB.isKinematic = false;
        playerRB.velocity = PlayerVelocities[clientId];

        //number of inputs received from the client
        int numInputs = reader.ReadInt();

        float yRotation = reader.ReadFloat();
        PlayerDictionary[clientId].yRotation = yRotation;

        bool appliedInput = false;
        for (int i = 0; i < numInputs; i++)
        {
            Vector3 moveVector = new Vector3(reader.ReadFloat(), reader.ReadFloat(), reader.ReadFloat());

            bool Jump = reader.ReadUShort() == 1;

            int clientTickNum = reader.ReadInt();


            //If this input is from a later tick than the most recent
            //Simulate the tick on the player with the clients inputs
            if (clientTickNum > TickDic[clientId])
            {
                appliedInput = true;

                //apply the clients inputs to change the player velocity
                ApplyInputs(clientId, new PlayerInputs(moveVector, Jump));

                //simulate one tick
                if (!vEngine.loadingMap)
                {
                    Physics.Simulate(Time.fixedDeltaTime);
                }
                else
                {
                    Debug.Log("Skipped tick due to map loading");
                }


                //update the clients most recent tick
                TickDic[clientId]++;
            }
        }

        if (appliedInput)
        {
            //send the client a state update with the corresponding tick
            vServer.SendPositionUpdate(clientId, client, targetPlayer.position, TickDic[clientId], playerRB.velocity);
        }

        //store the players velocity and remove it from simulation
        PlayerVelocities[clientId] = playerRB.velocity;
        playerRB.isKinematic = true;
    }

    private void ApplyInputs(ushort id, PlayerInputs inputs)
    {
        Transform playerTransform = PlayerDictionary[id].transform;
        Rigidbody playerRB = playerTransform.GetComponent<Rigidbody>();

        float yVel = playerRB.velocity.y;
        Vector3 horizontalSpeed = new Vector3(playerRB.velocity.x, 0, playerRB.velocity.z);
        inputs.moveState = playerTransform.GetComponent<ServerPositionTracker>().CheckPlayerState();
        if (inputs.moveState == 0) //normal movement
        {
            PlayerDictionary[id].inWater = false;
            PlayerDictionary[id].moving = true;
            bool onGround = playerTransform.GetComponent<HalfBlockDetector>().CheckGrounded();

            if (onGround && yVel <= 0)
            {
                if (inputs.Jump)
                {
                    horizontalSpeed = inputs.moveVector.normalized * PlayerSpeed;
                    yVel = JumpSpeed;
                }
                else
                {
                    horizontalSpeed = inputs.moveVector.normalized * PlayerSpeed;
                    if (inputs.moveVector.magnitude == 0)
                    {
                        PlayerDictionary[id].moving = false;
                    }
                }
            }
            else
            {
                horizontalSpeed += inputs.moveVector.normalized * AirAcceleration * Time.fixedDeltaTime;

                if (horizontalSpeed.magnitude > PlayerSpeed)
                {
                    horizontalSpeed = inputs.moveVector.normalized * PlayerSpeed;
                }

                yVel -= gravAcceleration * Time.fixedDeltaTime;
            }

            playerRB.velocity = horizontalSpeed;
            playerRB.velocity += yVel * Vector3.up;
        }
        else if (inputs.moveState == 1) //water movement
        {
            PlayerDictionary[id].moving = true;
            PlayerDictionary[id].inWater = true;
            if (inputs.Jump)
            {
                if (yVel >= verticalWaterMaxSpeed)
                {
                    yVel = verticalWaterMaxSpeed;
                }
                else
                {
                    yVel += verticalWaterAcceleration * Time.fixedDeltaTime;
                }
            }
            else
            {
                if (yVel < -verticalWaterMaxSpeed)
                {
                    yVel += verticalWaterAcceleration * Time.fixedDeltaTime;
                    if (yVel > -verticalWaterMaxSpeed)
                    {
                        yVel = -verticalWaterMaxSpeed;
                    }
                }
                else
                {
                    yVel -= verticalWaterAcceleration * Time.fixedDeltaTime;
                    if (yVel < -verticalWaterMaxSpeed)
                    {
                        yVel = -verticalWaterMaxSpeed;
                    }
                }
            }

            playerRB.velocity = inputs.moveVector * horizontalWaterSpeed;
            playerRB.velocity += yVel * Vector3.up;
        }
        else if (inputs.moveState == 3) //exiting water/lava
        {
            PlayerDictionary[id].inWater = false;
            PlayerDictionary[id].moving = true;
            if (inputs.Jump && playerTransform.GetComponent<ServerPositionTracker>().CheckWaterJump())
            {
                playerTransform.GetComponent<ServerPositionTracker>().UseWaterJump();
                Vector3 waterJump = new Vector3(inputs.moveVector.x * horizontalWaterSpeed, waterExitSpeed,
                    inputs.moveVector.z * horizontalWaterSpeed);
                playerRB.velocity = waterJump;
            }
            else
            {
                yVel -= gravAcceleration * Time.fixedDeltaTime;
                playerRB.velocity = inputs.moveVector * PlayerSpeed;
                playerRB.velocity += yVel * Vector3.up;
            }
        }
        else if (inputs.moveState == 4) //lava movement
        {
            PlayerDictionary[id].inWater = true;
            PlayerDictionary[id].moving = true;
            if (inputs.Jump)
            {
                if (yVel >= verticalLavaMaxSpeed)
                {
                    yVel = verticalLavaMaxSpeed;
                }
                else
                {
                    yVel += verticalLavaAcceleration * Time.fixedDeltaTime;
                }
            }
            else
            {
                if (yVel < -verticalLavaMaxSpeed)
                {
                    yVel += verticalLavaAcceleration * Time.fixedDeltaTime;
                    if (yVel > -verticalLavaMaxSpeed)
                    {
                        yVel = -verticalLavaMaxSpeed;
                    }
                }
                else
                {
                    yVel -= verticalLavaAcceleration * Time.fixedDeltaTime;
                    if (yVel < -verticalLavaMaxSpeed)
                    {
                        yVel = -verticalLavaMaxSpeed;
                    }
                }
            }

            playerRB.velocity = inputs.moveVector * horizontalLavaSpeed;
            playerRB.velocity += yVel * Vector3.up;
        }

        playerTransform.GetComponent<HalfBlockDetector>().CheckSteps();

        // Vector3 collisionVector = playerTransform.GetComponent<ServerPositionTracker>().GetCollisionVector();

        //playerRB.velocity += collisionVector;
    }
}

public class PlayerInputs
{
    public Vector3 moveVector;
    public bool Jump;
    public int ClientTickNumber;
    public int ServerTickNumber;

    //0 is normal, 1 is water, 2 is lava
    public ushort moveState;

    public PlayerInputs(Vector3 moveVec, bool jump)
    {
        moveVector = moveVec;
        Jump = jump;
        moveState = 0;
        ClientTickNumber = 0;
        ServerTickNumber = 0;
    }
}

public class PlayerInformation
{
    public Transform transform;
    public float yRotation = 0;
    public string name;
    public ushort stateTag;

    //stats, read these from the DB at player initialization
    public int kills = 0;
    public int deaths = 0;
    public int roundsWon = 0;

    //time online in seconds
    public int timeOnline = 0;

    //Time.time at time of initialization
    public float timeJoined = 0;

    public bool inWater = false;

    public bool moving = false;

    public PlayerInformation(Transform t, string playerName, ushort tag)
    {
        transform = t;
        name = playerName;
        stateTag = tag;
    }
}