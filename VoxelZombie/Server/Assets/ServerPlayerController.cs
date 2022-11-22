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
    private IWorld world;
    private VoxelServer vServer;
    private ServerBlockEditor bEditor;
    public MoveState MoveState;


    private Dictionary<MoveState, IMoveState> MoveStates = new Dictionary<MoveState, IMoveState>()
    {
        {MoveState.basicGrounded, new BasicGroundedMoveState()},
        {MoveState.idle, new IdleMoveState()},
        {MoveState.slideJump, new SlideJumpMoveState()},
        {MoveState.basicAir, new BasicAirMoveState()},
        {MoveState.basicJump, new BasicJumpMoveState()},
        {MoveState.waterSwimming, new WaterSwimmingMoveState()},
        {MoveState.waterFalling, new WaterFallingMoveState()},
        {MoveState.lavaSwimming, new LavaSwimmingMoveState()},
        {MoveState.waterJump, new WaterJumpMoveState()},
        {MoveState.basicSliding, new BasicSlidingMoveState()},
        {MoveState.basicCrawling, new BasicCrawlingMoveState()},
        {MoveState.slideAir, new SlideAirMoveState()},
        {MoveState.slideLand, new SlideLandMoveState()},
        {MoveState.wallJump, new WallJumpMoveState()},
        {MoveState.groundedHalfBlock, new GroundedHalfBlockMoveState()},
        {MoveState.crouchJump, new CrouchJumpMoveState()},
        {MoveState.aerialHalfBlock, new AerialHalfBlockMoveState()},
        {MoveState.wallHang, new WallHangMoveState()},
        {MoveState.postJump, new PostJumpMoveState()},
        {MoveState.postWallJump, new PostWallJumpMoveState()},
        {MoveState.postWallJumpSlideAir, new PostWallJumpSlideAirMoveState()}
    };

    private void Awake()
    {
        GameObject network = GameObject.FindGameObjectWithTag("Network");
        world = network.GetComponent<VoxelEngine>().world;
        vServer = network.GetComponent<VoxelServer>();
        bEditor = network.GetComponent<ServerBlockEditor>();

        GrenadeActionState grenadeState = (GrenadeActionState) ActionStates[ActionState.Grenade];
        grenadeState.world = world;
        grenadeState.vServer = vServer;
        grenadeState.bEditor = bEditor;

        BlockEditActionState bEditState = (BlockEditActionState) ActionStates[ActionState.BlockEdit];
        bEditState.world = world;
        bEditState.bEditor = bEditor;
        bEditState.vServer = vServer;

        ActionState = ActionState.BlockEdit;
        CurrentActionState = ActionStates[ActionState];

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

    //  public Vector3 lastVelocity = Vector3.zero;
    public Vector3 currentVelocity = Vector3.zero;

    public Vector3 lastPosition = Vector3.zero;

    private ActionState ActionState;

    protected Dictionary<ActionState, IActionState> ActionStates = new Dictionary<ActionState, IActionState>()
    {
        {
            ActionState.Grenade, new GrenadeActionState()
        },
        {
            ActionState.BlockEdit, new BlockEditActionState()
        }
    };

    private IActionState CurrentActionState;

    public void ApplyActions(ActionInputs inputs, Rigidbody playerRb)
    {
        ActionState newState = ActionStates[ActionState].CheckActionState(inputs);

        if (newState != ActionState)
        {
            ActionState = newState;
            CurrentActionState.Exit();
            CurrentActionState = ActionStates[newState];
            CurrentActionState.Enter();
        }

        CurrentActionState.ApplyInputs(inputs, playerRb);
    }

    public Vector3 ApplyInputs(Rigidbody playerRB, ClientInputs currentInputs, Vector3 lastVelocity)
    {
        MoveState state = MoveStates[MoveState].CheckMoveState(playerRB, currentInputs, allCPs, world, lastVelocity);

        MoveState = state;
        if (CurrentMoveState != MoveStates[state])
        {
            CurrentMoveState.Exit();
            CurrentMoveState = MoveStates[state];
            CurrentMoveState.Enter();
        }

        currentVelocity = CurrentMoveState.GetVelocity(playerRB, currentInputs, allCPs, lastVelocity, lastPosition);
        allCPs.Clear();

        lastPosition = playerRB.transform.position;
        playerRb.MovePosition(playerRb.transform.position +
                              (currentVelocity) * Time.fixedDeltaTime);

        return currentVelocity;
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