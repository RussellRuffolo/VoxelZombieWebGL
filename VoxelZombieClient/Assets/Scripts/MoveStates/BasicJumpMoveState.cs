using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicJumpMoveState : IMoveState
{
    private bool Jumped;

    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;

        Jumped = true;
        return horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;
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
                    return MoveState.postJump;
                }

                return MoveState.basicGrounded;
            }

            if (playerInputs.Jump)
            {
                return MoveState.postJump;
            }

            return MoveState.basicAir;
        }

        return MoveState.basicJump;
    }
}