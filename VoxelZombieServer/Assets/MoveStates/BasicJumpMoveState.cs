using System.Collections.Generic;
using UnityEngine;

public class BasicJumpMoveState : IMoveState
{
    private bool Jumped;

    public void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;


        playerRb.velocity = horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;

        Jumped = true;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
        Jumped = false;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints, World world)
    {
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(contactPoints))
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