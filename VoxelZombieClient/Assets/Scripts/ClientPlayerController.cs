using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class ClientPlayerController : BasePlayerController
    {
        private List<ContactPoint> allCPs = new List<ContactPoint>();

        [SerializeField] public Rigidbody playerRb;

        [SerializeField] public BoxCollider standingCollider;

        [SerializeField] public BoxCollider slidingCollider;

        private IMoveState CurrentMoveState;
        private World world;
        private bool hasWaterJump = false;
        private bool hasWallJump = false;
        Vector3 colliderHalfExtents;

        private VoxelClient vClient;

        private Dictionary<MoveState, IMoveState> MoveStates = new Dictionary<MoveState, IMoveState>()
        {
            {MoveState.basicGrounded, new BasicGroundedMoveState()},
            {MoveState.basicAir, new BasicAirMoveState()},
            {MoveState.basicJump, new BasicJumpMoveState()},
            {MoveState.waterSwimming, new WaterSwimmingMoveState()},
            {MoveState.lavaSwimming, new LavaSwimmingMoveState()},
            {MoveState.waterJump, new WaterJumpMoveState()},
            {MoveState.basicSliding, new BasicSlidingMoveState()},
            {MoveState.basicCrawling, new BasicCrawlingMoveState()},
            {MoveState.slideAir, new SlideAirMoveState()},
            {MoveState.wallJump, new WallJumpMoveState()},
            {MoveState.groundedHalfBlock, new GroundedHalfBlockMoveState()},
            {MoveState.crouchJump, new CrouchJumpMoveState()},
            {MoveState.aerialHalfBlock, new AerialHalfBlockMoveState()},
            {MoveState.wallHang, new WallHangMoveState()},
            {MoveState.postJump, new PostJumpMoveState()},
            {MoveState.postWallJump, new PostWallJumpMoveState()}
        };

        protected override void OnAwake()
        {
            world = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientVoxelEngine>().world;

            colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);

            vClient = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelClient>();

            MoveState = MoveState.basicAir;
            CurrentMoveState = MoveStates[MoveState];

            foreach (IMoveState state in MoveStates.Values)
            {
                if (state is CrouchingMoveState crouchingMoveState)
                {
                    crouchingMoveState.standingCollider = standingCollider;
                    crouchingMoveState.slidingCollider = slidingCollider;
                }
            }
            // BasicSlidingMoveState slidingMoveState = ((BasicSlidingMoveState) MoveStates[MoveState.basicSliding]);
            // slidingMoveState.standingCollider = standingCollider;
            // slidingMoveState.slidingCollider = slidingCollider;
            //
            // SlideAirMoveState slideAirMoveState = ((SlideAirMoveState) MoveStates[MoveState.slideAir]);
            // slideAirMoveState.standingCollider = standingCollider;
            // slideAirMoveState.slidingCollider = slidingCollider;
            //
            // BasicCrawlingMoveState crawlingMoveState = ((BasicCrawlingMoveState) MoveStates[MoveState.basicCrawling]);
            // crawlingMoveState.standingCollider = standingCollider;
            // crawlingMoveState.slidingCollider = slidingCollider;
        }

        public Vector3 lastVelocity = Vector3.zero;

        private MoveState lastState = 0;

        public override void ApplyInputs(Rigidbody playerRB, ClientInputs currentInputs)
        {
            MoveState state = MoveStates[MoveState].CheckMoveState(playerRB, currentInputs, allCPs, world);

            MoveState = state;
            if (CurrentMoveState != MoveStates[state])
            {
                CurrentMoveState.Exit();
                CurrentMoveState = MoveStates[state];
                CurrentMoveState.Enter();
            }

            CurrentMoveState.ApplyInput(playerRB, currentInputs, allCPs);
            allCPs.Clear();
        }

        public MoveState CheckMoveState(ClientInputs inputs)
        {
            Vector3 feetPosition = new Vector3(transform.position.x, transform.position.y - .08f - (1.76f / 2),
                transform.position.z);
            Vector3 headPosition = new Vector3(transform.position.x, transform.position.y - .08f + (1.76f / 2),
                transform.position.z);

            ushort jumpTag = world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y + .2f),
                Mathf.FloorToInt(feetPosition.z)];
            if (jumpTag == 9 || jumpTag == 11)
            {
                hasWaterJump = true;
            }

            Collider[] thingsHit = Physics.OverlapBox(transform.position + Vector3.down * .08f, colliderHalfExtents);


            foreach (Collider col in thingsHit)
            {
                if (col.CompareTag("Water"))
                {
                    lastState = MoveState.waterSwimming;
                    return MoveState.waterSwimming;
                }

                if (col.CompareTag("Lava"))
                {
                    lastState = MoveState.lavaSwimming;
                    return MoveState.lavaSwimming;
                }
            }


            if (world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y),
                    Mathf.FloorToInt(feetPosition.z)] != 9 &&
                world[Mathf.FloorToInt(headPosition.x), Mathf.FloorToInt(headPosition.y),
                    Mathf.FloorToInt(headPosition.z)] != 9 &&
                world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y),
                    Mathf.FloorToInt(feetPosition.z)] != 11 && world[Mathf.FloorToInt(headPosition.x),
                    Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] != 11)
            {
                if ((lastState == MoveState.waterSwimming || lastState == MoveState.lavaSwimming) && inputs.Jump)
                {
                    lastState = MoveState.waterJump;
                    return MoveState.waterJump;
                }

                hasWaterJump = false;

                if (!CheckGrounded())
                {
                    if (!inputs.Jump)
                    {
                        hasWallJump = true;
                    }

                    if (hasWallJump && inputs.Jump && CheckWallContact())
                    {
                        hasWallJump = false;
                        lastState = MoveState.wallJump;
                        return MoveState.wallJump;
                    }

                    if (inputs.Slide)
                    {
                        lastState = MoveState.slideAir;
                        return MoveState.slideAir;
                    }

                    lastState = MoveState.basicAir;

                    return MoveState.basicAir;
                }


                if (inputs.Jump)
                {
                    lastState = MoveState.basicJump;

                    return MoveState.basicJump;
                }

                if (inputs.Slide)
                {
                    Vector3 velocity = playerRb.velocity;
                    Vector3 horizontalMomentum = new Vector3(velocity.x, 0, velocity.z);

                    if (horizontalMomentum.magnitude > PlayerStats.crawlSpeed)
                    {
                        lastState = MoveState.basicSliding;

                        return MoveState.basicSliding;
                    }

                    lastState = MoveState.basicCrawling;
                    return MoveState.basicCrawling;
                }

                lastState = MoveState.basicGrounded;

                return MoveState.basicGrounded;
            }

            if (world[Mathf.FloorToInt(feetPosition.x), Mathf.FloorToInt(feetPosition.y),
                    Mathf.FloorToInt(feetPosition.z)] == 9 && world[Mathf.FloorToInt(headPosition.x),
                    Mathf.FloorToInt(headPosition.y), Mathf.FloorToInt(headPosition.z)] == 9)
            {
                lastState = MoveState.waterSwimming;
                return MoveState.waterSwimming;
            }


            lastState = MoveState.lavaSwimming;
            return MoveState.lavaSwimming;
        }

        public override bool CheckGrounded()
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

        bool CheckWallContact()
        {
            foreach (ContactPoint cp in allCPs)
            {
                //Pointing horizontally
                if (cp.normal.y == 0)
                {
                    return true;
                }
            }

            return false;
        }

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


        protected override void SendInputs()
        {
            int index = lastReceivedStateTick % 1024;
            if (lastReceivedStateTick < tickNumber - 1)
            {
                int numInputs = (tickNumber - 1) - lastReceivedStateTick;

                RtcMessage inputMessage = new RtcMessage(Tags.INPUT_TAG);
                inputMessage.WriteInt(numInputs);
                inputMessage.WriteFloat(rotationY);

                for (int i = index; i < index + numInputs; i++)
                {
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.x);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.y);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.z);

                    inputMessage.WriteFloat(LoggedInputs[i % 1024].PlayerForward.x);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].PlayerForward.y);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].PlayerForward.z);

                    inputMessage.WriteUShort(LoggedInputs[i % 1024].Jump ? (ushort) 1 : (ushort) 0);

                    inputMessage.WriteUShort(LoggedInputs[i % 1024].Slide ? (ushort) 1 : (ushort) 0);

                    inputMessage.WriteInt(LoggedInputs[i % 1024].TickNumber);
                }

                vClient.SendUnreliableMessage(inputMessage);
            }
            else
            {
                Debug.LogError("Error, received state in the future");
            }
        }
    }
}