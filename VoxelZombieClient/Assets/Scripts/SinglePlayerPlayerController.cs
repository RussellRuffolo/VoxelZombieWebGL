using System;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class SinglePlayerPlayerController : BasePlayerController
    {
        private List<ContactPoint> allCPs = new List<ContactPoint>();

        [SerializeField] public Rigidbody playerRb;

        [SerializeField] public BoxCollider standingCollider;

        [SerializeField] public BoxCollider slidingCollider;

        private IMoveState CurrentMoveState;
        private IWorld world;
        private bool hasWaterJump = false;
        private bool hasWallJump = false;
        Vector3 colliderHalfExtents;


        protected override void OnAwake()
        {
            world = GameObject.FindGameObjectWithTag("Network").GetComponent<IVoxelEngine>().World;

            colliderHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);


            MoveState = MoveState.basicAir;
            CurrentMoveState = MoveStates[MoveState];
            lastPosition = transform.position;
            foreach (IMoveState state in MoveStates.Values)
            {
                if (state is CrouchingMoveState crouchingMoveState)
                {
                    crouchingMoveState.standingCollider = standingCollider;
                    crouchingMoveState.slidingCollider = slidingCollider;
                }
            }
        }

        public Vector3 lastVelocity = Vector3.zero;
        public Vector3 currentVelocity = Vector3.zero;
        private MoveState lastState = 0;

        public Vector3 lastPosition = Vector3.zero;

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
        }
    }
}