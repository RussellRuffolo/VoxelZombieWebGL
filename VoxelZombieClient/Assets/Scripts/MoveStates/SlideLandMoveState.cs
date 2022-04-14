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
        Vector3 velocity = direction * Mathf.Abs(lastVelocity.y) * PlayerStats.slideBoost;
        Debug.Log("Slide Land: " + velocity);
        return velocity;
    }

    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
        {
            if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
            {
                if (lastVelocity.magnitude > PlayerStats.crawlSpeed)
                {
                    Debug.Log("Sliding");
                    return MoveState.basicSliding;
                }

                Debug.Log("Crawling");
                return MoveState.basicCrawling;
            }

            Debug.Log("GROUNDED");
            return MoveState.basicGrounded;
        }
        
        Debug.Log("NOT GROUNDED");

        if (playerInputs.Slide || !PlayerUtils.CheckStandable(playerRb))
        {
            return MoveState.slideAir;
        }

        return MoveState.basicAir;
    }
}