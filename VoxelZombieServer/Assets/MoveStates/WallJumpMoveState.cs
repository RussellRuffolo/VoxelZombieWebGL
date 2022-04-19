using System.Collections.Generic;

using UnityEngine;

public class WallJumpMoveState : IMoveState
{
    
    

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


        Vector3 horizontalVelocity = -currentInputs.PlayerForward.normalized * PlayerStats.playerSpeed;


        return horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;
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
            if (PlayerUtils.CheckGrounded(contactPoints))
            {
                return MoveState.basicGrounded;
            }

            return MoveState.postWallJump;
        }

        return MoveState.wallJump;
    }
}