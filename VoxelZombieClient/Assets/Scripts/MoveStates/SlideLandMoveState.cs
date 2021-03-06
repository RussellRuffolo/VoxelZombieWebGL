using System.Collections.Generic;
using Client;
using UnityEngine;

public class SlideLandMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs,
        List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 direction = new Vector3(lastVelocity.x, 0, lastVelocity.z).normalized;
Debug.Log("Slide Land");
        return direction * Mathf.Abs(lastVelocity.y) * PlayerStats.slideBoost;
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