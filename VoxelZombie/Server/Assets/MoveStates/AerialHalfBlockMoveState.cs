using System.Collections.Generic;

using UnityEngine;

public class AerialHalfBlockMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Debug.Log("Aerial half block");
        float yPos = playerRb.transform.position.y;
        float yDec = yPos - (int)yPos;
        float yOffset;
        if (yDec > .5f)
        {
            yOffset = 1 - yDec;
        }
        else
        {
            yOffset = .5f - yDec;
        }

        playerRb.transform.position += Vector3.up * yOffset;
        //perhaps also tp you in the direction of your velocity the amount you should have moved last frame but didn't because of collision with block. 

        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;

        return horizontalVelocity + lastVelocity.y * Vector3.up;
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