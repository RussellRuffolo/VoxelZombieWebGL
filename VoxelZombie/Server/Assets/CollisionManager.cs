using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionManager : MonoBehaviour
{

    public ServerPositionTracker pTracker;


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            pTracker.collidingPlayers.Add(other.transform);
        }
    }


    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (!pTracker.collidingPlayers.Contains(other.transform))
            {
                pTracker.collidingPlayers.Add(other.transform);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (pTracker.collidingPlayers.Contains(other.transform))
            {
                pTracker.collidingPlayers.Remove(other.transform);
            }
        }
    }
}
