using System.Collections.Generic;
using Client;
using UnityEngine;

public class CrouchJumpMoveState : CrouchingMoveState
{
    private bool Jumped;


    public override void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.crawlSpeed;


        playerRb.velocity = horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;

        Jumped = true;
    }

    public override void Exit()
    {
        Jumped = false;
    }

    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world)
    {
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(contactPoints))
            {
                if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
                {
                    if (playerRb.velocity.magnitude > PlayerStats.crawlSpeed)
                    {
                        return MoveState.basicSliding;
                    }

                    return MoveState.basicCrawling;
                }

                return MoveState.basicGrounded;
            }

            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                return MoveState.slideAir;
            }

            return MoveState.basicAir;
        }

        return MoveState.crouchJump;
    }
}