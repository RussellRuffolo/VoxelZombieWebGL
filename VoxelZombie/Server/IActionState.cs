﻿using UnityEngine;
using ZombieLib;

public interface IActionState 
{
    ActionState CheckActionState(ActionInputs inputs);
    void ApplyInputs(ActionInputs inputs, Rigidbody playerRb);
    void Enter();
    void Exit();
}