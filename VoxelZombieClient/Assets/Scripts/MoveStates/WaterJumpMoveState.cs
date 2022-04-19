using System.Collections.Generic;
using Client;
using UnityEngine;

public class WaterJumpMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    private bool Jumped;


    public Vector3 GetVelocity(Rigidbody playerRB, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Jumped = true;
        return new Vector3(currentInputs.MoveVector.x * PlayerStats.horizontalWaterSpeed,
            PlayerStats.waterExitSpeed,
            currentInputs.MoveVector.z * PlayerStats.horizontalWaterSpeed);
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
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(contactPoints))
            {
                if (playerInputs.Jump)
                {
                    return MoveState.postJump;
                }

                return MoveState.basicGrounded;
            }

            if (playerInputs.Jump)
            {
                return MoveState.postJump;
            }

            return MoveState.basicAir;
        }

        return MoveState.basicJump;
    }
}