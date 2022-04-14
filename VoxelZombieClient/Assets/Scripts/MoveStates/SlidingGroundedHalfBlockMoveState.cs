using System.Collections.Generic;
using Client;
using UnityEngine;

public class SlidingGroundedHalfBlockMoveState : IMoveState
{
    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        playerRb.transform.position += Vector3.up * .5f;
        
        Vector3 velocity = new Vector3(playerRb.position.x - lastPosition.x, 0, playerRb.position.z - lastPosition.z) /
                           Time.fixedDeltaTime;
        //velocity -= velocity.normalized * PlayerStats.slideFriction;

        return velocity;
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
        if (PlayerUtils.CheckGrounded(contactPoints, playerRb))
        {
        

            // if (PlayerUtils.CheckHalfBlock(playerRb, playerInputs, contactPoints, world))
            // {
            //     return MoveState.groundedHalfBlock;
            // }

            return MoveState.basicSliding;
        }

        return MoveState.emptySlideAir;
    }
}