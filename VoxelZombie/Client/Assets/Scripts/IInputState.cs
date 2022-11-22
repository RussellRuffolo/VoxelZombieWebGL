using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;

public interface IInputState : IState
{
    InputState CheckInputState(ClientInputs clientInputs);

    void ApplyInputs(ClientInputs clientInputs);
}

public enum InputState
{
    Standard,
    Menu,
    Chat
}