﻿using System.Collections.Generic;
using Client;
using UnityEngine;
using ZombieLib;
using ZombieLib.Interfaces;

public interface IMoveState : IState
{
    Animator PlayerAnimator { get; set; }
    Vector3 GetVelocity(Rigidbody player, ClientInputs currentInputs, List<ContactPoint> contactPoints,
        Vector3 lastVelocity, Vector3 lastPosition);
    MoveState CheckMoveState(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world, Vector3 lastVelocity);
}

