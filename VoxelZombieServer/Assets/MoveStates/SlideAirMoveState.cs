using System.Collections.Generic;

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
        // horizontalVelocity += currentInputs.MoveVector.normalized * PlayerStats.AirAcceleration * Time.fixedDeltaTime;
        //
        // if (horizontalVelocity.magnitude > PlayerStats.playerSpeed)
        // {
        //     horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;
        // }

        ySpeed -= PlayerStats.gravAcceleration * Time.fixedDeltaTime;

       return horizontalVelocity + ySpeed * Vector3.up;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(contactPoints))
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