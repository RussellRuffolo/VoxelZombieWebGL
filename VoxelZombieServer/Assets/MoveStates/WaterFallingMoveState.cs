using System.Collections.Generic;

using UnityEngine;

public class WaterFallingMoveState : IMoveState
{
    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        float yVel = lastVelocity.y;

        
        if (yVel < -PlayerStats.verticalWaterMaxSpeed)
        {
            yVel += PlayerStats.verticalWaterAcceleration * Time.fixedDeltaTime;
            if (yVel > -PlayerStats.verticalWaterMaxSpeed)
            {
                yVel = -PlayerStats.verticalWaterMaxSpeed;
            }
        }
        else
        {
            yVel -= PlayerStats.verticalWaterAcceleration * Time.fixedDeltaTime;
            if (yVel < -PlayerStats.verticalWaterMaxSpeed)
            {
                yVel = -PlayerStats.verticalWaterMaxSpeed;
            }
        }
        
        return currentInputs.MoveVector * PlayerStats.horizontalWaterSpeed + yVel * Vector3.up;

    }

    public void Enter()
    {
    }

    public void Exit()
    {
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
        if (PlayerUtils.CheckGrounded(contactPoints))
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