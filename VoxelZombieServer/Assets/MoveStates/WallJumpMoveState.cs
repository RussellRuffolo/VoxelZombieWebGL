using System.Collections.Generic;
using UnityEngine;

public class WallJumpMoveState : IMoveState
{
    private bool Jumped;
    private Vector3 normal = Vector3.zero;

    public void ApplyInput(Rigidbody playerRb, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y.Equals(0))
            {
                Debug.Log("set normal");
                normal = playerRb.transform.position - contactPoint.point;
                normal = new Vector3(normal.x, 0, normal.z);
                break;
            }
        }


        Debug.Log("Apply Jump " + normal);
        if (normal != Vector3.zero)
        {
            Debug.Log("Wall Jump " + normal);

            Vector3 horizontalVelocity = -currentInputs.PlayerForward.normalized * PlayerStats.playerSpeed;


            playerRb.velocity = horizontalVelocity + PlayerStats.jumpSpeed * Vector3.up;
        }


        Jumped = true;
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
        World world)
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