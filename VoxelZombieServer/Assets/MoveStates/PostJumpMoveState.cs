using System.Collections.Generic;
using UnityEngine;

public class PostJumpMoveState : IMoveState
{

    private int JumpRefreshCooldown = 0;
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

        JumpRefreshCooldown++;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
        JumpRefreshCooldown = 0;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        World world)
    {
        if (PlayerUtils.CheckAerialHalfBlock(playerRb, playerInputs, contactPoints, world))
        {
            Debug.Log("Aerial Half BLock");
            return MoveState.aerialHalfBlock;
        }

        if (JumpRefreshCooldown > 5)
        {
            if (PlayerUtils.CheckGrounded(contactPoints))
            {
                Debug.Log("Basic ground again");
                return MoveState.basicGrounded;
            }
        }
        
        if (playerInputs.Jump)
        {
            return MoveState.postJump;
        }

        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            Debug.Log("Basic ground again");
            return MoveState.basicGrounded;
        }


        return MoveState.basicAir;
    }
}