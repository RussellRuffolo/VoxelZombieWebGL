using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class ServerGameManager : MonoBehaviour
{
    VoxelEngine vEngine;
    VoxelServer vServer;
    ServerPlayerManager pMananger;

    public float RoundTime;
    public float MinuteCounter;

    public bool inStartTime = false;
    public bool inVoteTime = false;

    MapData map1, map2, map3;
    
    public int map1Votes, map2Votes, map3Votes;


    private void Awake()
    {
        vEngine = GetComponent<VoxelEngine>();
        vServer = GetComponent<VoxelServer>();
        pMananger = GetComponent<ServerPlayerManager>();
    }

    private void Start()
    {
        StartRound(vEngine.GetRandomMap());
    }

    private void StartRound(MapData nextMap)
    {
        inStartTime = true;
        vEngine.LoadMap(nextMap);
        vServer.StartRound();
        RoundTime = 4 * 60;
        MinuteCounter = RoundTime - 60;
        StartCoroutine(StartDelay());
    }

    private void EndRound()
    {
        map1Votes = 0;
        map2Votes = 0;
        map3Votes = 0;

        map1 = vEngine.GetRandomMap();

        StartCoroutine(VoteDelay());

        // map2 = vEngine.GetRandomMap();
        //
        // while(map2 == map1)
        // {
        //     map2 = vEngine.GetRandomMap();
        // }
        // map3 = vEngine.GetRandomMap();
        // while(map3 == map2 || map3 == map1)
        // {
        //     map3 = vEngine.GetRandomMap();
        // }
        //
        // vServer.SendPublicChat("Vote for the next map:", 2);
        // vServer.SendPublicChat("1: " + map1.Name + " 2: " + map2.Name + " 3: " + map3.Name, 2);
        // inVoteTime = true;
        // StartCoroutine(VoteDelay());
    }

    private void Update()
    {
        if (!inStartTime && !inVoteTime)
        {
            if (RoundTime > 0)
            {
                RoundTime -= Time.deltaTime;
                if (RoundTime < MinuteCounter)
                {
                    vServer.SendPublicChat("There are " + MinuteCounter / 60 + " minutes left in this round.", 2);
                    MinuteCounter -= 60;
                }
            }
            else if (RoundTime <= 0)
            {
                vServer.SendPublicChat("Humans win!", 2);
                RecordWinners();
                EndRound();
            }
        }
    }

    void RecordWinners()
    {
        foreach (PlayerInformation p in pMananger.PlayerDictionary.Values)
        {
            //If this player was human at the end of the round
            if (p.stateTag == 0)
            {
                p.roundsWon += 1;
            }
        }
    }


    public void SubtractTime()
    {
        inStartTime = false;
        EndRound();
    }

    public void CheckZombieWin()
    {
        foreach (PlayerInformation pInfo in pMananger.PlayerDictionary.Values)
        {
            if (pInfo.stateTag == 0)
            {
                //If a player is a human return- zombies haven't won yet
                return;
            }
        }

        //if no players were human then zombies win
        vServer.SendPublicChat("Zombies win!", 2);
        EndRound();
    }

    public void CheckNoZombies()
    {
        foreach (PlayerInformation pInfo in pMananger.PlayerDictionary.Values)
        {
            if (pInfo.stateTag == 1)
            {
                //If a player is a human return- zombies haven't won yet
                return;
            }
        }

        ushort newZombie = vServer.GetRandomPlayer();
        //get random player returns 1000 if no players are connected
        if (newZombie != 1000)
        {
            vServer.UpdatePlayerState(newZombie, 1);
            vServer.SendPublicChat("The Infection restarts with " + vServer.playerNames[newZombie] + "!", 2);
            CheckZombieWin();
        }
    }

    public bool AddVote(string mapName)
    {
        if (mapName == map1.Name || mapName == "1")
        {
            map1Votes++;
            return true;
        }
        else if (mapName == map2.Name || mapName == "2")
        {
            map2Votes++;
            return true;
        }
        else if (mapName == map3.Name || mapName == "3")
        {
            map3Votes++;
            return true;
        }
        else
        {
            return false;
        }
    }

    IEnumerator StartDelay()
    {
        yield return new WaitForSeconds(20);


        if (pMananger.PlayerDictionary.Count > 1)
        {
            inStartTime = false;
            ushort firstZombie = vServer.GetRandomPlayer();

            //get random player returns 1000 if no players are connected
            if (firstZombie != 1000)
            {
                vServer.UpdatePlayerState(firstZombie, 1);
                vServer.SendPublicChat("The Infection begins with " + vServer.playerNames[firstZombie] + "!", 2);
            }
        }
        else
        {
            StartCoroutine(StartDelay());
        }
    }

    IEnumerator VoteDelay()
    {
        inVoteTime = true;
        yield return new WaitForSeconds(20);
        inVoteTime = false;

        MapData nextMap;
        nextMap = map1;
        // if (map1Votes >= map2Votes)
        // {
        //     if (map1Votes >= map3Votes)
        //     {
        //         nextMap = map1;
        //     }
        //     else
        //     {
        //         nextMap = map3;
        //     }
        // }
        // else
        // {
        //     if(map3Votes >= map2Votes)
        //     {
        //         nextMap = map3;
        //     }
        //     else
        //     {
        //         nextMap = map2;
        //     }
        // }

        StartRound(nextMap);
    }
}