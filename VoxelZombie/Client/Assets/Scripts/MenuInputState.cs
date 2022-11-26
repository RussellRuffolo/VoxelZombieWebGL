using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;
using ZombieLib;

public class MenuInputState : IInputState
{
   public Canvas MenuCanvas;
    public void Enter()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        MenuCanvas.enabled = true;
       
    }

    public void Exit()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        MenuCanvas.enabled = false;
       
    }

    public InputState CheckInputState(ClientInputs clientInputs)
    {
        if (clientInputs.Menu)
        {
            return InputState.Standard;
        }

        return InputState.Menu;
    }

    public void ApplyInputs(ClientInputs clientInputs)
    {
    }
}