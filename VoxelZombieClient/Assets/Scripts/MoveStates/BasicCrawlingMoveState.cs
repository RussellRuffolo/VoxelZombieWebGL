using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicCrawlingMoveState : CrouchingMoveState
{
    public override void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.crawlSpeed;

        playerRb.velocity = horizontalVelocity + playerRb.velocity.y * Vector3.up;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints,
        World world)
    {
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            if (playerInputs.Jump)
            {
                return MoveState.crouchJump;
            }

            if (playerInputs.Slide)
            {
                if (playerRb.velocity.magnitude > PlayerStats.crawlSpeed)
                {
                    return MoveState.basicSliding;
                }

                return MoveState.basicCrawling;
            }

            if (PlayerUtils.CheckHalfBlock(playerRb, playerInputs, contactPoints, world))
            {
                return MoveState.groundedHalfBlock;
            }

            return MoveState.basicGrounded;
        }

        if (playerInputs.Slide)
        {
            return MoveState.slideAir;
        }

        return MoveState.basicAir;
    }
}