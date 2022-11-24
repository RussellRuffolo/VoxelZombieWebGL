using System.Collections.Generic;
using Client;
using UnityEngine;
using ZombieLib;

public class WaterSwimmingMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        float yVel = lastVelocity.y;

        if (yVel >= PlayerStats.verticalWaterMaxSpeed)
        {
            yVel = PlayerStats.verticalWaterMaxSpeed;
        }
        else
        {
            yVel += PlayerStats.verticalWaterAcceleration * Time.fixedDeltaTime;
        }


       return currentInputs.MoveVector * PlayerStats.horizontalWaterSpeed + yVel * Vector3.up;
    }

    public void Enter()
    {
        PlayerAnimator.SetBool("InWater", true);
    }

    public void Exit()
    {
        PlayerAnimator.SetBool("InWater", false);
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckWater(playerRb, contactPoints, world))
        {
            if (playerInputs.Jump)
            {
                return MoveState.waterSwimming;
            }

            return MoveState.waterFalling;
        }

        //walk out of water onto land
        if (PlayerUtils.CheckGrounded(playerRb))
        {
            return MoveState.basicGrounded;
        }

        if (playerInputs.Jump)
        {
            return MoveState.waterJump;
        }

        return MoveState.basicAir;
    }
}