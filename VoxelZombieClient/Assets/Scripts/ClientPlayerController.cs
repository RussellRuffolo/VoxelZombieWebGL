using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Client
{
    public class ClientPlayerController : BasePlayerController
    {
        private List<ContactPoint> allCPs = new List<ContactPoint>();

        [SerializeField] public Rigidbody playerRb;


        private IMoveState CurrentMoveState;
        private IWorld world;
        private bool hasWaterJump = false;
        private bool hasWallJump = false;
        Vector3 colliderHalfExtents;

        private VoxelClient vClient;


        protected override void OnAwake()
        {
            world = GameObject.FindGameObjectWithTag("Network").GetComponent<SinglePlayerVoxelEngine>().World;

            colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);

            vClient = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelClient>();


            InputStates.Add(InputState.Chat, new ChatInputState());


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
        }

        public Vector3 lastPosition = Vector3.zero;
        public Vector3 currentVelocity = Vector3.zero;

        public override void ApplyInputs(Rigidbody playerRB, ClientInputs currentInputs)
        {
            MoveState state = MoveStates[MoveState]
                .CheckMoveState(playerRB, currentInputs, allCPs, world, lastVelocity);

            MoveState = state;

            if (CurrentMoveState != MoveStates[state])
            {
                CurrentMoveState.Exit();
                CurrentMoveState = MoveStates[state];
                CurrentMoveState.Enter();
            }

            currentVelocity = CurrentMoveState.GetVelocity(playerRB, currentInputs, allCPs, lastVelocity, lastPosition);
            allCPs.Clear();

            lastPosition = playerRB.transform.position;
            playerRb.MovePosition(playerRb.transform.position +
                                  (currentVelocity) * Time.fixedDeltaTime);

            lastVelocity = currentVelocity;
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


        private void OnCollisionEnter(Collision collision)
        {
            allCPs.AddRange(collision.contacts);
        }

        void OnCollisionStay(Collision col)
        {
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