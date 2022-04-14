using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicCrawlingMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.crawlSpeed;

        return horizontalVelocity + lastVelocity.y * Vector3.up;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
        {
            if (playerInputs.Jump)
            {
                return MoveState.crouchJump;
            }

            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                if (!Mathf.Approximately(lastVelocity.magnitude, PlayerStats.crawlSpeed) &&
                    lastVelocity.magnitude > PlayerStats.crawlSpeed)
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

        if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
        {
            return MoveState.slideAir;
        }

        return MoveState.basicAir;
    }
}