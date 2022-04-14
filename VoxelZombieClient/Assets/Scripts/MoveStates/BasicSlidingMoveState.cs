using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicSlidingMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 velocity = new Vector3(playerRb.position.x - lastPosition.x, 0, playerRb.position.z - lastPosition.z) /
                           Time.fixedDeltaTime;
        velocity -= velocity.normalized * PlayerStats.slideFriction;

        return velocity;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
        {
            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                if (PlayerUtils.CheckHalfBlock(playerRb, playerInputs, contactPoints, world))
                {
                    return MoveState.slidingGroundedHalfBlock;
                }
                
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
}