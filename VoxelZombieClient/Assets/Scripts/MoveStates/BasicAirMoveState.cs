using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicAirMoveState : IMoveState
{
    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 horizontalVelocity = new Vector3(lastVelocity.x, 0, lastVelocity.z);
        float ySpeed = lastVelocity.y;
        horizontalVelocity += currentInputs.MoveVector.normalized * PlayerStats.AirAcceleration * Time.fixedDeltaTime;

        if (horizontalVelocity.magnitude > PlayerStats.playerSpeed)
        {
            horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;
        }

        ySpeed -= PlayerStats.gravAcceleration * Time.fixedDeltaTime;

       return horizontalVelocity + ySpeed * Vector3.up;
    }

    public virtual void Enter()
    {
    }

    public virtual void Exit()
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

        if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
        {
            return MoveState.basicGrounded;
        }

        if (playerInputs.Slide)
        {
            return MoveState.slideAir;
        }

        if (PlayerUtils.CheckAerialHalfBlock(playerRb, playerInputs, contactPoints, world))
        {
            return MoveState.aerialHalfBlock;
        }

        if (PlayerUtils.CheckWall(playerRb, playerInputs, contactPoints, world))
        {
            return MoveState.wallHang;
        }

        return MoveState.basicAir;
    }
}