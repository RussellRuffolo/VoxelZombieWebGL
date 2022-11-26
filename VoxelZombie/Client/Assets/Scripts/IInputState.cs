using Client;
using ZombieLib;
using ZombieLib.Interfaces;

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