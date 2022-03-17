using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ServerPlayerController : MonoBehaviour
{
    private List<ContactPoint> allCPs = new List<ContactPoint>();

    [SerializeField] public Rigidbody playerRb;

    [SerializeField] public BoxCollider standingCollider;

    [SerializeField] public BoxCollider slidingCollider;

    private IMoveState CurrentMoveState;
    private World world;

    public MoveState MoveState;


    private Dictionary<MoveState, IMoveState> MoveStates = new Dictionary<MoveState, IMoveState>()
    {
        {MoveState.basicGrounded, new BasicGroundedMoveState()},
        {MoveState.basicAir, new BasicAirMoveState()},
        {MoveState.basicJump, new BasicJumpMoveState()},
        {MoveState.waterSwimming, new WaterSwimmingMoveState()},
        {MoveState.lavaSwimming, new LavaSwimmingMoveState()},
        {MoveState.waterJump, new WaterJumpMoveState()},
        {MoveState.basicSliding, new BasicSlidingMoveState()},
        {MoveState.basicCrawling, new BasicCrawlingMoveState()},
        {MoveState.slideAir, new SlideAirMoveState()},
        {MoveState.wallJump, new WallJumpMoveState()},
        {MoveState.groundedHalfBlock, new GroundedHalfBlockMoveState()},
        {MoveState.crouchJump, new CrouchJumpMoveState()},
        {MoveState.aerialHalfBlock, new AerialHalfBlockMoveState()},
        {MoveState.wallHang, new WallHangMoveState()},
        {MoveState.postJump, new PostJumpMoveState()},
        {MoveState.postWallJump, new PostWallJumpMoveState()}
    };

    private void Awake()
    {
        world = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelEngine>().world;


        MoveState = MoveState.basicAir;
        CurrentMoveState = MoveStates[MoveState];

        foreach (IMoveState state in MoveStates.Values)
        {
            if (state is CrouchingMoveState crouchingMoveState)
            {
                crouchingMoveState.standingCollider = standingCollider;
                crouchingMoveState.slidingCollider = slidingCollider;
            }
        }
    }

    public void ApplyInputs(Rigidbody playerRB, PlayerInputs currentInputs)
    {
        MoveState state = MoveStates[MoveState].CheckMoveState(playerRB, currentInputs, allCPs, world);

        MoveState = state;
        if (CurrentMoveState != MoveStates[state])
        {
            CurrentMoveState.Exit();
            CurrentMoveState = MoveStates[state];
            CurrentMoveState.Enter();
        }

        CurrentMoveState.ApplyInput(playerRB, currentInputs, allCPs);
        allCPs.Clear();
    }

    private void OnCollisionEnter(Collision collision)
    {
        allCPs.AddRange(collision.contacts);
    }

    void OnCollisionStay(Collision col)
    {
        allCPs.AddRange(col.contacts);
    }
}