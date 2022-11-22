using Client;
using UnityEngine;

//laser? blocks pop as you beam them
//satisfying sound when you materialize a block
//shaders and laser effect
public class SinglePlayerBlockEditActionState : IActionState
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
        bEditor.ApplyInputsSinglePlayer(inputs);
    }
}