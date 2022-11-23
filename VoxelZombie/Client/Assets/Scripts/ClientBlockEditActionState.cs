using Client;
using UnityEngine;
using ZombieLib;

public class ClientBlockEditActionState : IActionState
{
    public void Enter()
    {
    }

    public void Exit()
    {
        bEditor.OnExit();
    }

    public BaseBlockEditor bEditor;


    public ActionState CheckActionState(ActionInputs inputs)
    {
        if (inputs.Two)
        {
            return ActionState.Grenade;
        }

        return ActionState.BlockEdit;
    }

    public void ApplyInputs(ActionInputs inputs, Rigidbody playerRb)
    {
        bEditor.ApplyInputsClient(inputs);
    }
}