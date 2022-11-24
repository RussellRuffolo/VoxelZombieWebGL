using System.Collections.Generic;
using Client;
using UnityEngine;
using ZombieLib;

public abstract class CrouchingMoveState : IMoveState
{
    public BoxCollider slidingCollider;
    public BoxCollider standingCollider;

    public Animator PlayerAnimator { get; set; }

    public abstract Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition);

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
        List<ContactPoint> contactPoints, IWorld world, Vector3 lastVelocity);
}