using Client;
using UnityEngine;
using ZombieLib;

public interface IActionState : IState
{
    ActionState CheckActionState(ActionInputs inputs);

    void ApplyInputs(ActionInputs inputs, Rigidbody playerRb);

}