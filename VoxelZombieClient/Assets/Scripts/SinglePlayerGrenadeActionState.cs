using Client;
using UnityEngine;

public class SinglePlayerGrenadeActionState : IActionState
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

    public IWorld world;

    //add action inputs like client inputs 
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
        if (inputs.MouseZero)
        {
            GameObject grenade = ObjectPooler.Instance.GetPooledObject("Grenade");
            grenade.transform.position = playerRb.transform.position;
            grenade.GetComponent<GrenadeController>().Throw(cameraDirection.forward, world);
        }
    }
}