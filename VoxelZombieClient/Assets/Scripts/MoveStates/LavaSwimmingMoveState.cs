using System.Collections.Generic;
using Client;
using UnityEngine;

public class LavaSwimmingMoveState : IMoveState
{
    public Animator PlayerAnimator { get; set; }

    public Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition)
    {
        return Vector3.zero;
    }

    public void Enter()
    {
        PlayerAnimator.SetBool("InWater", true);
    }

    public void Exit()
    {
        PlayerAnimator.SetBool("InWater", false);
    }

    public MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity)
    {
        throw new System.NotImplementedException();
    }
}