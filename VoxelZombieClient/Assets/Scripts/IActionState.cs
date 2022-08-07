using Client;
using UnityEngine;

public interface IActionState : IState
{
    ActionState CheckActionState(ActionInputs inputs);

    void ApplyInputs(ActionInputs inputs, Rigidbody playerRb);

}