using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Client
{
    public class ClientPositionTracker : MonoBehaviour
    {
        private World world;
        private ClientPlayerController pController;

        private ushort lastMoveState = 0;

        Vector3 colliderHalfExtents;

        private bool hasWaterJump = false;

        public Collider boxCollider;

        private List<Transform> collidingPlayers = new List<Transform>();

        void Awake()
        {
            world = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientVoxelEngine>().world;
            pController = GetComponent<ClientPlayerController>();

            colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);
        }


        public ushort CheckPlayerState(ushort lastState)
        {

            Vector3 feetPosition = new Vector3(transform.position.x, transform.position.y -.08f - (1.76f /2), transform.position.z);
            Vector3 headPosition = new Vector3(transform.position.x, transform.position.y - .08f + (1.76f / 2), transform.position.z);

            ushort jumpTag = world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y + .2f), Mathf.FloorToInt(feetPosition.z)];
            if (jumpTag == 9 || jumpTag == 11)
            {
                hasWaterJump = true;
            }

            Collider[] thingsHit = Physics.OverlapBox(transform.position + Vector3.down * .08f, colliderHalfExtents);


            bool inWater = false;

            foreach (Collider col in thingsHit)
            {
                if(col.CompareTag("Water"))
                {
                    inWater = true;
                }
                else if(col.CompareTag("Lava"))
                {
                    lastMoveState = 4;
                    return 4;
                }
            }

            if(inWater)
            {
                lastMoveState = 1;
                return 1;
            }
        
            

            if (world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] != 9 && world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] != 9 && world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] != 11 && world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] != 11)
            {
                if(lastMoveState == 1 || lastMoveState == 4)
                {
                    lastMoveState = 3;
                    return 3;
                }

                hasWaterJump = false;
                lastMoveState = 0;
                return 0;
                  
            }

            if(world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z)] == 9 && world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] == 9)
            {
                lastMoveState = 1;
                return 1;
            }
            else
            {
                lastMoveState = 4;
                return 4;
            }
           

            

        }

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

        private void OnTriggerEnter(Collider other)
        {
            if(other.CompareTag("NetworkPlayer"))
            {
                collidingPlayers.Add(other.transform);
            }
        }


       private void OnTriggerStay(Collider other)
        {
            if (other.CompareTag("NetworkPlayer"))
            {
                if(!collidingPlayers.Contains(other.transform))
                {
                    collidingPlayers.Add(other.transform);
                }
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("NetworkPlayer"))
            {
                if (collidingPlayers.Contains(other.transform))
                {
                    collidingPlayers.Remove(other.transform);
                }
            }
        }



        public Vector3 GetCollisionVector()
        {
            Vector3 collisionVector = Vector3.zero;

            if (collidingPlayers.Count == 0)
            {
                return collisionVector;
            }

           Vector2 xzPos = new Vector2(transform.position.x, transform.position.z);
           foreach(Transform networkPlayer in collidingPlayers)
            {
                Vector2 otherXZ = new Vector2(networkPlayer.position.x, networkPlayer.position.z);
                collisionVector += 1 / Mathf.Pow((Vector2.Distance(xzPos, otherXZ)), 2) * (transform.position - networkPlayer.position).normalized;
            }

            return collisionVector;
        }
    }



}
