﻿using System.Collections.Generic;
using UnityEngine;

public class BasicSlidingMoveState : CrouchingMoveState
{
    public override void ApplyInput(Rigidbody playerRb, PlayerInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 velocity = playerRb.velocity;
        velocity -= velocity.normalized * PlayerStats.slideFriction;
        playerRb.velocity = velocity;
    }


    public override MoveState CheckMoveState(Rigidbody playerRb, PlayerInputs playerInputs,
        List<ContactPoint> contactPoints, World world)
    {
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            if (playerInputs.Slide)
            {
                if (playerRb.velocity.magnitude > PlayerStats.crawlSpeed)
                {
                    return MoveState.basicSliding;
                }

                return MoveState.basicCrawling;
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