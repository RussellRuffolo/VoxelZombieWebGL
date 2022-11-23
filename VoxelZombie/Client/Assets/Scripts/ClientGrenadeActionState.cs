using Client;
using UnityEngine;
using ZombieLib;

public class ClientGrenadeActionState : IActionState
{
    public void Enter()
    {
        GrenadeModel.SetActive(true);
    }

    public void Exit()
    {
        GrenadeModel.SetActive(false);
    }

    public GameObject GrenadeModel;

    public Transform cameraDirection;

    public VoxelClient vClient;

    public IWorld world;

    public ActionState CheckActionState(ActionInputs inputs)
    {
        if (inputs.One)
        {
            return ActionState.BlockEdit;
        }

        return ActionState.Grenade;
    }

    public void ApplyInputs(ActionInputs inputs, Rigidbody playerRb)
    {
    }
}