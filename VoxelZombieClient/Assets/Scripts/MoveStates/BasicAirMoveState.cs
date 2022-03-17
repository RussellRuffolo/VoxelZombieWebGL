using System.Collections.Generic;
using Client;
using UnityEngine;

public class BasicAirMoveState : IMoveState
{
    public void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 horizontalVelocity = new Vector3(playerRb.velocity.x, 0, playerRb.velocity.z);
        float ySpeed = playerRb.velocity.y;
        horizontalVelocity += currentInputs.MoveVector.normalized * PlayerStats.AirAcceleration * Time.fixedDeltaTime;

        if (horizontalVelocity.magnitude > PlayerStats.playerSpeed)
        {
            horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;
        }

        ySpeed -= PlayerStats.gravAcceleration * Time.fixedDeltaTime;

        playerRb.velocity = horizontalVelocity + ySpeed * Vector3.up;
    }

    public virtual void Enter()
    {
    }

    public virtual void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        World world)
    {
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            return MoveState.basicGrounded;
        }

        if (PlayerUtils.CheckAerialHalfBlock(playerRb, playerInputs, contactPoints, world))
        {
            Debug.Log("Aerial Half BLock");
            return MoveState.aerialHalfBlock;
        }

        if (PlayerUtils.CheckWall(playerRb, playerInputs, contactPoints, world))
        {
            return MoveState.wallHang;
        }

        return MoveState.basicAir;
    }
}