using System.Collections.Generic;
using Client;
using UnityEngine;

public class PostWallJumpMoveState : IMoveState
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

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world)
    {
        Debug.Log("post wall jump");
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            if (playerInputs.Slide)
            {
                return MoveState.basicSliding;
            }

            return MoveState.basicGrounded;
        }

        return MoveState.postWallJump;
    }
}