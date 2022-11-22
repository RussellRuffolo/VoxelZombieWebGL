using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class ClientPositionTracker : MonoBehaviour
    {
        private List<ContactPoint> allCPs = new List<ContactPoint>();


        private IWorld world;
       // private ClientPlayerController pController;

        private ushort lastMoveState = 0;

        private MoveState lastState = 0;

        Vector3 colliderHalfExtents;

        private bool hasWaterJump = false;

        private bool hasWallJump = false;
        
        [SerializeField] public BoxCollider standingCollider;

        [SerializeField] public BoxCollider slidingCollider;

        [SerializeField] public Rigidbody playerRb;

        [SerializeField] public SphereCollider standingBase;

        [SerializeField] public SphereCollider slidingBase;

        private List<Transform> collidingPlayers = new List<Transform>();

        void Awake()
        {
            world = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientVoxelEngine>().World;
         //   pController = GetComponent<ClientPlayerController>();

            colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);
        }

        public void ClearContactPoints()
        {
            allCPs.Clear();
        }

     


        public ushort CheckPlayerState(ushort lastState)
        // Todo (Russell): This is unused?
        {
            Vector3 feetPosition = new Vector3(transform.position.x, transform.position.y - .08f - (1.76f / 2),
                transform.position.z);
            Vector3 headPosition = new Vector3(transform.position.x, transform.position.y - .08f + (1.76f / 2),
                transform.position.z);

            ushort jumpTag = (ushort)world.GetVoxel(Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y + .2f), Mathf.FloorToInt(feetPosition.z));
            if (jumpTag == 9 || jumpTag == 11)
            {
                hasWaterJump = true;
            }

            Collider[] thingsHit = Physics.OverlapBox(transform.position + Vector3.down * .08f, colliderHalfExtents);


            bool inWater = false;

            foreach (Collider col in thingsHit)
            {
                if (col.CompareTag("Water"))
                {
                    inWater = true;
                }
                else if (col.CompareTag("Lava"))
                {
                    lastMoveState = 4;
                    return 4;
                }
            }

            if (inWater)
            {
                lastMoveState = 1;
                return 1;
            }
            
            Voxel voxelAtFeet = world.GetVoxel(Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y), Mathf.FloorToInt(feetPosition.z));
            Voxel voxelAtHead = world.GetVoxel(Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z));
            if(!voxelAtFeet.isLiquid() && !voxelAtHead.isLiquid())
            {
                if (lastMoveState == 1 || lastMoveState == 4)
                {
                    lastMoveState = 3;
                    return 3;
                }

                hasWaterJump = false;
                lastMoveState = 0;
                return 0;
            }
            if (voxelAtFeet.isLiquid() && voxelAtHead.isLiquid())
            {
                lastMoveState = 1;
                return 1;
            }
            {
                lastMoveState = 4;
                return 4;
            }
        }

        public bool CheckWaterJump()
        // Todo (Russell): Unused?
        {
            if (hasWaterJump)
            {
                return true;
            }

            return false;
        }

        public void UseWaterJump()
        // Todo (Russell): Unused?
        {
            hasWaterJump = false;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("NetworkPlayer"))
            {
                collidingPlayers.Add(other.transform);
            }
        }


        private void OnTriggerStay(Collider other)
        {
            if (other.CompareTag("NetworkPlayer"))
            {
                if (!collidingPlayers.Contains(other.transform))
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

        public bool CheckGrounded()
        // Todo (Russell): Unused?
        {
            ContactPoint groundCP = default(ContactPoint);

            return FindGround(out groundCP, allCPs);
        }

        bool FindGround(out ContactPoint groundCP, List<ContactPoint> pointList)
        {
            groundCP = default(ContactPoint);
            bool found = false;
            foreach (ContactPoint cp in pointList)
            {
                //Pointing with some up direction
                if (cp.normal.y == 1 && (found == false || cp.normal.y > groundCP.normal.y))
                {
                    groundCP = cp;
                    found = true;
                }
            }


            return found;
        }

       

        // void FixedUpdate()
        // {
        //     allCPs.Clear();
        // }


        private void OnCollisionEnter(Collision collision)
        {
     //       Debug.Log("Adding " + collision.contacts.Length);
            allCPs.AddRange(collision.contacts);
        }

        void OnCollisionStay(Collision col)
        {
//            Debug.Log("Adding " + col.contacts.Length);
            allCPs.AddRange(col.contacts);
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
                collisionVector += 1 / Mathf.Pow((Vector2.Distance(xzPos, otherXZ)), 2) *
                                   (transform.position - networkPlayer.position).normalized;
            }

            return collisionVector;
        }
    }
}