using System.Collections.Generic;
using Client;
using UnityEngine;

public class WaterJumpMoveState : IMoveState
{
    public void ApplyInput(Rigidbody playerRB, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
        Vector3 waterJump = new Vector3(currentInputs.MoveVector.x * PlayerStats.horizontalWaterSpeed,
            PlayerStats.waterExitSpeed,
            currentInputs.MoveVector.z * PlayerStats.horizontalWaterSpeed);
        playerRB.velocity = waterJump;
    }

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints, World world)
    {
        throw new System.NotImplementedException();
    }
}