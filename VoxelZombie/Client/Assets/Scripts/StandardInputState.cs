using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;

public class StandardInputState : IInputState
{
    public void Enter()
    {
        
    }

    public void Exit()
    {
    }

    public InputState CheckInputState(ClientInputs clientInputs)
    {
        if (clientInputs.Menu)
        {
            return InputState.Menu;
        }

        if (clientInputs.Chat)
        {
            return InputState.Chat;
        }

        return InputState.Standard;
    }

    public void ApplyInputs(ClientInputs clientInputs)
    {
    }
}
