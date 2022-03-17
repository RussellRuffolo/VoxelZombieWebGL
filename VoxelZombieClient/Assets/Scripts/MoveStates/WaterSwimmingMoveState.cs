using System.Collections.Generic;
using Client;
using UnityEngine;

public class WaterSwimmingMoveState : IMoveState
{
    public void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        float yVel = playerRb.velocity.y;
        if (currentInputs.Jump)
        {
            if (yVel >= PlayerStats.verticalWaterMaxSpeed)
            {
                yVel = PlayerStats.verticalWaterMaxSpeed;
            }
            else
            {
                yVel += PlayerStats.verticalWaterAcceleration * Time.fixedDeltaTime;
            }
        }
        else
        {
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
        }

        playerRb.velocity = currentInputs.MoveVector * PlayerStats.horizontalWaterSpeed + yVel * Vector3.up;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints, World world)
    {
        throw new System.NotImplementedException();
    }
}