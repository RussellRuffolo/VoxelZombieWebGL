using System.Collections.Generic;
using Client;
using UnityEngine;

public class SlideAirMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 velocity = (playerRb.transform.position - lastPosition) / Time.fixedDeltaTime;
        
        Vector3 horizontalVelocity = new Vector3(velocity.x, 0, velocity.z);
        float ySpeed = velocity.y;
        
        ySpeed -= PlayerStats.gravAcceleration * Time.fixedDeltaTime;

       return horizontalVelocity + ySpeed * Vector3.up;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(playerRb))
        {
            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                if (lastVelocity.magnitude > PlayerStats.crawlSpeed)
                {
                    Debug.Log("return slide land");
                    return MoveState.slideLand;
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

public class PostWallJumpSlideAirMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 velocity = (playerRb.transform.position - lastPosition) / Time.fixedDeltaTime;
        
        Vector3 horizontalVelocity = new Vector3(velocity.x, 0, velocity.z);
        float ySpeed = velocity.y;
        
        ySpeed -= PlayerStats.gravAcceleration * Time.fixedDeltaTime;

        return horizontalVelocity + ySpeed * Vector3.up;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(playerRb))
        {
            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                if (lastVelocity.magnitude > PlayerStats.crawlSpeed)
                {
                    Debug.Log("return slide land");
                    return MoveState.slideLand;
                }

                return MoveState.basicCrawling;
            }

            return MoveState.basicGrounded;
        }

        if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
        {
            return MoveState.postWallJumpSlideAir;
        }

        return MoveState.postWallJump;
    }
}