using System.Collections.Generic;

using UnityEngine;
using ZombieLib;

public class CrouchJumpMoveState : CrouchingMoveState
{
    private bool Jumped;


    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.crawlSpeed;
        Jumped = true;

        return horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;
    }

    public override void Exit()
    {
        Jumped = false;
    }

    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(playerRb))
            {
                if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
                {
                    if (lastVelocity.magnitude > PlayerStats.crawlSpeed)
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