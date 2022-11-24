using System.Collections.Generic;

using UnityEngine;
using ZombieLib;

public class PostJumpMoveState : IMoveState
{
    
    public Animator PlayerAnimator { get; set; }

    private int JumpRefreshCooldown = 0;

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
        JumpRefreshCooldown++;
        return horizontalVelocity + ySpeed * Vector3.up;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
        JumpRefreshCooldown = 0;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        // if (PlayerUtils.CheckAerialHalfBlock(playerRb, playerInputs, contactPoints, world))
        // {
        //     return MoveState.aerialHalfBlock;
        // }

        if (JumpRefreshCooldown > 5)
        {
            if (PlayerUtils.CheckGrounded(playerRb))
            {
                return MoveState.basicGrounded;
            }
        }

        if (playerInputs.Jump)
        {
            return MoveState.postJump;
        }

        if (PlayerUtils.CheckGrounded(playerRb))
        {
            return MoveState.basicGrounded;
        }


        return MoveState.basicAir;
    }
}