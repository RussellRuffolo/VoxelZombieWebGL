using System.Collections.Generic;
using Client;
using UnityEngine;

public class WallHangMoveState : IMoveState
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
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            if (playerInputs.Jump)
            {
                return MoveState.basicJump;
            }

            return MoveState.basicGrounded;
        }

        if (playerInputs.Jump)
        {
            return MoveState.wallJump;
        }


        return PlayerUtils.CheckWall(playerRb, playerInputs, contactPoints, world)
            ? MoveState.wallHang
            : MoveState.basicAir;
    }
}