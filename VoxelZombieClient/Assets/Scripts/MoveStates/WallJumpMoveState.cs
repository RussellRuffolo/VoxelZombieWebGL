using System.Collections.Generic;
using Client;
using UnityEngine;

public class WallJumpMoveState : IMoveState
{
    
    public Animator PlayerAnimator { get; set; }

    private bool Jumped;
    private Vector3 normal = Vector3.zero;

    public Vector3 GetVelocity(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y.Equals(0))
            {
                normal = playerRb.transform.position - contactPoint.point;
                normal = new Vector3(normal.x, 0, normal.z);
                break;
            }
        }

        Jumped = true;


        float directionMod = Mathf.Clamp(Vector3.Dot(-currentInputs.PlayerForward.normalized, currentInputs.MoveVector.normalized), .3f, 1);
        
        Vector3 horizontalVelocity = -currentInputs.PlayerForward.normalized * PlayerStats.playerSpeed * directionMod;


        return horizontalVelocity + PlayerStats.jumpSpeed * 1.5f * Vector3.up * directionMod;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
        Jumped = false;
        normal = Vector3.zero;
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        if (Jumped)
        {
            if (PlayerUtils.CheckGrounded(playerRb))
            {
                return MoveState.basicGrounded;
            }

            return MoveState.postWallJump;
        }

        return MoveState.wallJump;
    }
}