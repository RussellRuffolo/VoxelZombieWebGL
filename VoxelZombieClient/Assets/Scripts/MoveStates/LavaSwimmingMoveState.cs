﻿using System.Collections.Generic;
using Client;
using UnityEngine;

public class LavaSwimmingMoveState : IMoveState
{
    public void ApplyInput(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints)
    {
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