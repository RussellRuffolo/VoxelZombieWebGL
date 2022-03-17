using System.Collections.Generic;
using UnityEngine;

public class LavaSwimmingMoveState : IMoveState
{
    public void ApplyInput(Rigidbody player, PlayerInputs currentInputs, List<ContactPoint> contactPoints)
    {
    }

    public void Enter()
    {
    }

    public void Exit()
    {
    }

    public MoveState CheckMoveState(Rigidbody playerRb, PlayerInputs playerInputs, List<ContactPoint> contactPoints, World world)
    {
        throw new System.NotImplementedException();
    }
}