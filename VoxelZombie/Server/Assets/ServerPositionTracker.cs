using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using UnityEngine;

public class ServerPositionTracker : MonoBehaviour
{
    public float minMoveDelta;
    private Vector3 lastPosition;
    private float lastRotation;
    public ushort ID;

    VoxelServer vServer;

    ServerPlayerManager pManager;
    ServerGameManager gManager;

    private World world;

    Rigidbody rb;

    Vector3 colliderHalfExtents;

    private ushort lastMoveState = 0;

    private bool hasWaterJump = false;

    public List<Transform> collidingPlayers = new List<Transform>();

    private string killDataURL = "http://localhost/VoxelZombies/killData.php?";

    private void Awake()
    {
        lastPosition = transform.position;
        lastRotation = 0;

        vServer = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelServer>();
        pManager = GameObject.FindGameObjectWithTag("Network").GetComponent<ServerPlayerManager>();
        gManager = GameObject.FindGameObjectWithTag("Network").GetComponent<ServerGameManager>();
        world = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelEngine>().world;
        rb = GetComponent<Rigidbody>();

        colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);
    }

    private void FixedUpdate()
    {

        if (Vector3.Distance(lastPosition, transform.position) > minMoveDelta || pManager.PlayerDictionary[ID].yRotation != lastRotation)
        {
            vServer.SendPositionUpdate(ID, transform.position, pManager.PlayerDictionary[ID].yRotation);
            lastPosition = transform.position;
            lastRotation = pManager.PlayerDictionary[ID].yRotation;
        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("Player"))
        {
            ServerPositionTracker otherTracker = collision.transform.GetComponent<ServerPositionTracker>();
            if (pManager.PlayerDictionary[ID].stateTag == 1)
            {

                if (pManager.PlayerDictionary[otherTracker.ID].stateTag == 0)
                {
                    vServer.UpdatePlayerState(otherTracker.ID, 1);
                    vServer.SendPublicChat(vServer.playerNames[otherTracker.ID] + " was infected by " + vServer.playerNames[ID] + "!", 2);
                    gManager.CheckZombieWin();

                    //StartCoroutine(PostKillData(ID, otherTracker.ID));

                    pManager.PlayerDictionary[ID].kills += 1;
                    pManager.PlayerDictionary[otherTracker.ID].deaths += 1;


                }
            }
        }
    }

    //state changes are being handled at initialization/disconnect now
    //This code will be removed barring a design revert


    // public ushort CheckPlayerState()
    // {
    //     Vector3 feetPosition = new Vector3(transform.position.x, transform.position.y - .08f - (1.76f / 2), transform.position.z);
    //     Vector3 headPosition = new Vector3(transform.position.x, transform.position.y - .08f + (1.76f / 2), transform.position.z);
    //     ushort jumpTag = world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y + .2f), Mathf.FloorToInt(feetPosition.z)];
    //     if (jumpTag == 9 || jumpTag == 11)
    //     {
    //         hasWaterJump = true;
    //     }
    //
    //     Collider[] thingsHit = Physics.OverlapBox(transform.position + Vector3.down * .08f, colliderHalfExtents);
    //
    //     bool inWater = false;
    //
    //     foreach (Collider col in thingsHit)
    //     {
    //         if (col.CompareTag("Water"))
    //         {
    //             inWater = true;               
    //             
    //         }
    //         else if(col.CompareTag("Lava"))
    //         {
    //             lastMoveState = 4;
    //             return 4;
    //         }
    //     }
    //
    //     if(inWater)
    //     {
    //         lastMoveState = 1;
    //         return 1;
    //     }
    //
    //     
    //
    //     if (world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] != 9 && world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] != 9 && world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] != 11 && world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] != 11)
    //     {
    //         if(lastMoveState == 1 || lastMoveState == 4)
    //         {
    //             lastMoveState = 3;              
    //             return 3;
    //         }
    //
    //         hasWaterJump = false;
    //         lastMoveState = 0;
    //         return 0;
    //
    //     }
    //
    //     if(world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] == 9 || world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] == 9)
    //     {
    //         lastMoveState = 1;
    //         return 1;
    //
    //     }
    //     else
    //     {
    //         lastMoveState = 4;
    //         return 4;
    //     }
    //
    //
    //
    // }

    public bool CheckWaterJump()
    {
        if (hasWaterJump)
        {
            return true;
        }

        return false;

    }

    public void UseWaterJump()
    {
        hasWaterJump = false;
    }



    public Vector3 GetCollisionVector()
    {
        Vector3 collisionVector = Vector3.zero;

        if (collidingPlayers.Count == 0)
        {
            return collisionVector;
        }

        Vector2 xzPos = new Vector2(transform.position.x, transform.position.z);
        foreach (Transform networkPlayer in collidingPlayers)
        {
            Vector2 otherXZ = new Vector2(networkPlayer.position.x, networkPlayer.position.z);
            collisionVector += 1 / Mathf.Pow((Vector2.Distance(xzPos, otherXZ)), 2) * (transform.position - networkPlayer.position).normalized;
        }

        return collisionVector;
    }
}
