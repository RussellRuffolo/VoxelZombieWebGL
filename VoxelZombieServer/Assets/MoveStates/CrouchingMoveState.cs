using System.Collections.Generic;
using UnityEngine;

public abstract class CrouchingMoveState : IMoveState
{
    public BoxCollider slidingCollider;
    public BoxCollider standingCollider;

    public abstract void ApplyInput(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints);

    public virtual void Enter()
    {
        slidingCollider.enabled = true;
        standingCollider.enabled = false;
    }

    public virtual void Exit()
    {
        slidingCollider.enabled = false;
        standingCollider.enabled = true;
    }

    public abstract MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints, World world);
}