using UnityEngine;
using ZombieLib;
using ZombieLib.Interfaces;

public interface IActionState : IState
{
    ActionState CheckActionState(ActionInputs inputs);

    void ApplyInputs(ActionInputs inputs, Rigidbody playerRb);

}