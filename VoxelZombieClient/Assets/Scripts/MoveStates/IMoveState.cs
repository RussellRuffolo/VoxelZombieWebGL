using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEditor;
using UnityEngine;

public interface IMoveState
{
    void ApplyInput(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints);

    void Enter();

    void Exit();

    MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints, IWorld world);
}