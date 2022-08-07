using UnityEngine;

public class PlayerInformation
{
    public Transform transform;
    public Rigidbody playerRb;
    public ServerPlayerController PlayerController;
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

    public PlayerInformation(Transform t, ServerPlayerController playerController, Rigidbody rb, string playerName,
        ushort tag)
    {
        PlayerController = playerController;
        playerRb = rb;
        transform = t;
        name = playerName;
        stateTag = tag;
    }
}