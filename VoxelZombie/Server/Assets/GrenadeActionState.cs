using UnityEngine;

public class GrenadeActionState : IActionState
{
    public void Enter()
    {
    }

    public void Exit()
    {
    }


    public ActionState CheckActionState(ActionInputs inputs)
    {
        if (inputs.One)
        {
            return ActionState.BlockEdit;
        }

        return ActionState.Grenade;
    }

    public IWorld world;
    public VoxelServer vServer;
    public ServerBlockEditor bEditor;

    public void ApplyInputs(ActionInputs inputs, Rigidbody playerRb)
    {
        if (inputs.MouseZero)
        {
            GameObject grenade = ObjectPooler.Instance.GetPooledObject("Grenade");
            grenade.transform.position = playerRb.transform.position;
            grenade.GetComponent<GrenadeController>().Throw(new Vector3(inputs.ForwardX, inputs.ForwardY, inputs.ForwardZ),
                world, vServer, bEditor);


        }
    }
}