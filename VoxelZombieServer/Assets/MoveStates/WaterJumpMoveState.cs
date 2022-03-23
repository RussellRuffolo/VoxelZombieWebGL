using System.Collections.Generic;
using UnityEngine;

public class WaterJumpMoveState : IMoveState
{
    
    private bool Jumped;

    
    public void ApplyInput(Rigidbody playerRB, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 waterJump = new Vector3(currentInputs.MoveVector.x * PlayerStats.horizontalWaterSpeed,
            PlayerStats.waterExitSpeed,
            currentInputs.MoveVector.z * PlayerStats.horizontalWaterSpeed);
        playerRB.velocity = waterJump;
        
        Jumped = true;

    }

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints, World world)
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