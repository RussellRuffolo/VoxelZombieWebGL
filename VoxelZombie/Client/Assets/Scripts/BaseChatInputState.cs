using Client;
using UnityEngine.UI;
using ZombieLib;

public abstract class BaseChatInputState : IInputState
{
    public Text inputText;

    public Image logPanel;
    public Image inputPanel;

    public Text DisplayedLogs;

    public VoxelClient vClient;

    public abstract void Enter();


    public abstract void Exit();

    public abstract InputState CheckInputState(ClientInputs clientInputs);

    public abstract void ApplyInputs(ClientInputs clientInputs);
}