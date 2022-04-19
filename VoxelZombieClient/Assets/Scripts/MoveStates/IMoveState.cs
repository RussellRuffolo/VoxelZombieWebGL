using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEditor;
using UnityEngine;

public interface IMoveState
{
    Animator PlayerAnimator { get; set; }

    Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition);

    void Enter();

    void Exit();

    MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity);
}