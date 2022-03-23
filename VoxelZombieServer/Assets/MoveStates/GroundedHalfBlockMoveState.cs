using System.Collections.Generic;
using UnityEngine;

public class GroundedHalfBlockMoveState : IMoveState
{
    public void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        playerRb.transform.position += Vector3.up * .5f;
        //perhaps also tp you in the direction of your velocity the amount you should have moved last frame but didn't because of collision with block. 

        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;

        playerRb.velocity = horizontalVelocity + playerRb.velocity.y * Vector3.up;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        World world)
    {
        if (PlayerUtils.CheckGrounded(contactPoints))
        {
            if (playerInputs.Jump)
            {
                return MoveState.basicJump;
            }

            // if (PlayerUtils.CheckHalfBlock(playerRb, playerInputs, contactPoints, world))
            // {
            //     return MoveState.groundedHalfBlock;
            // }

            return MoveState.basicGrounded;
        }

        return MoveState.basicAir;
    }
}