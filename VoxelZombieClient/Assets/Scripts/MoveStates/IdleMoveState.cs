using System;
using System.Collections.Generic;
using Client;
using UnityEngine;

public class IdleMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    public Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity,
        Vector3 lastPosition)
    {
        return Vector3.zero;
    }

    public void Enter()
    {
        PlayerAnimator.SetBool("Moving", false);
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world,
        Vector3 lastVelocity)
    {
        if (playerInputs.MoveVector != Vector3.zero)
        {
            return MoveState.basicGrounded;
        }

        return MoveState.idle;
    }
}