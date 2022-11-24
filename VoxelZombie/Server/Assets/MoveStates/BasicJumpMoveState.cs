using System.Collections.Generic;

using UnityEngine;
using ZombieLib;

public class BasicJumpMoveState : IMoveState
{
 //   private bool Jumped;

 public Animator PlayerAnimator { get; set; }

 public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        Vector3 horizontalVelocity = currentInputs.MoveVector.normalized * PlayerStats.playerSpeed;

 //       Jumped = true;
        return horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
  //      Jumped = false;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        return MoveState.postJump;
        // if (Jumped)
        // {
        //     if (PlayerUtils.CheckGrounded(playerRb))
        //     {
        //         if (playerInputs.Jump)
        //         {
        //             return MoveState.postJump;
        //         }
        //
        //         return MoveState.basicGrounded;
        //     }
        //
        //     if (playerInputs.Jump)
        //     {
        //         return MoveState.postJump;
        //     }
        //
        //     return MoveState.basicAir;
        // }
        //
        // return MoveState.basicJump;
    }
}

public class SlideJumpMoveState : CrouchingMoveState
{
    public override Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity,
        Vector3 lastPosition)
    {
        return lastVelocity + PlayerStats.jumpSpeed * Vector3.up;
    }

    public override MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, IWorld world,
        Vector3 lastVelocity)
    {
        return MoveState.slideAir;
    }
}