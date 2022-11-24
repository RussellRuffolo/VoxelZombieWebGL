﻿using System;
using System.Collections.Generic;

using UnityEngine;
using ZombieLib;

public class IdleMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    public Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity,
        Vector3 lastPosition)
    {
        return Vector3.zero;
    }

    public void Enter()
    {
   
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world,
        Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckWater(playerRb, contactPoints, world))
        {
            if (playerInputs.Jump)
            {
                return MoveState.waterSwimming;
            }

            return MoveState.waterFalling;
        }

        if (PlayerUtils.CheckGrounded(playerRb))
        {
            if (playerInputs.Jump)
            {
                return MoveState.basicJump;
            }

            if (playerInputs.Slide)
            {
                if (lastVelocity.magnitude > PlayerStats.crawlSpeed)
                {
                    return MoveState.basicSliding;
                }

                return MoveState.basicCrawling;
            }

            if (PlayerUtils.CheckHalfBlock(playerRb, playerInputs, contactPoints, world))
            {
                return MoveState.groundedHalfBlock;
            }

            if (playerInputs.MoveVector == Vector3.zero)
            {
                return MoveState.idle;
            }

            return MoveState.basicGrounded;
        }

        return MoveState.basicAir;
    }
}