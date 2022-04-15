using System.Collections.Generic;
using Client;
using UnityEngine;

public class SlideJumpMoveState : IMoveState
{
    private bool Jumped;

    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 velocity = new Vector3(playerRb.position.x - lastPosition.x, 0, playerRb.position.z - lastPosition.z) /
                           Time.fixedDeltaTime;

        Jumped = true;
        return velocity + PlayerStats.jumpSpeed * Vector3.up;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
        Jumped = false;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
            {
                if (playerInputs.Jump)
                {
                    return MoveState.slideAir;
                }

                return MoveState.basicSliding;
            }

            if (playerInputs.Jump)
            {
                return MoveState.slideAir;
            }

            return MoveState.slideAir;
        }

        return MoveState.slideJump;
    }
}