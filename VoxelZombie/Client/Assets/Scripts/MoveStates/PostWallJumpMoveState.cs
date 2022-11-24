using System.Collections.Generic;
using Client;
using UnityEngine;
using ZombieLib;

public class PostWallJumpMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

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

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        if (PlayerUtils.CheckGrounded(playerRb))
        {
            if (playerInputs.Slide)
            {
                return MoveState.basicSliding;
            }

            return MoveState.basicGrounded;
        }

        if (playerInputs.Slide)
        {
            return MoveState.postWallJumpSlideAir;
        }

        return MoveState.postWallJump;
    }
}