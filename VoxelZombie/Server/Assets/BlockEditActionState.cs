using UnityEngine;
using ZombieLib;

public class BlockEditActionState : IActionState
{
    public void Enter()
    {
    }

    public void Exit()
    {
    }


    public IWorld world;
    public ServerBlockEditor bEditor;

    public VoxelServer vServer;

    public ActionState CheckActionState(ActionInputs inputs)
    {
        if (inputs.Two)
        {
            return ActionState.Grenade;
        }

        return ActionState.BlockEdit;
    }

    private Vector3 camOffest = Vector3.up * .698f;
    private float editDistance = 7;

    private Voxel blockTag = Voxel.Stone;

    public void ApplyInputs(ActionInputs inputs, Rigidbody playerRb)
    {
        // if (inputs.MouseZero)
        // {
        //     BlockSelectionInfo selectionInfo = FindBlock(playerRb.transform.position + camOffest,
        //         new Vector3(inputs.ForwardX, inputs.ForwardY, inputs.ForwardZ));
        //     BreakBlock(selectionInfo);
        // }
        //
        // if (inputs.MouseOne)
        // {
        //     BlockSelectionInfo selectionInfo = FindBlock(playerRb.transform.position + camOffest,
        //         new Vector3(inputs.ForwardX, inputs.ForwardY, inputs.ForwardZ));
        //     PlaceBlock(selectionInfo);
        // }
        //
        // if (inputs.MouseTwo)
        // {
        //     BlockSelectionInfo selectionInfo = FindBlock(playerRb.transform.position + camOffest,
        //         new Vector3(inputs.ForwardX, inputs.ForwardY, inputs.ForwardZ));
        //     SelectBlock(selectionInfo);
        // }
    }

    void SelectBlock(BlockSelectionInfo selectionInfo)
    {
        if (selectionInfo.SelectionNormal != Vector3.zero)
        {
            int x = (int) selectionInfo.SelectionPosition.x;
            int y = (int) selectionInfo.SelectionPosition.y;
            int z = (int) selectionInfo.SelectionPosition.z;


            Voxel selectTag = world.GetVoxel(selectionInfo.SelectionPosition.x, selectionInfo.SelectionPosition.y, selectionInfo.SelectionPosition.z);

            if (selectTag != Voxel.Bedrock && selectTag != Voxel.Air && selectTag != Voxel.StationaryWater && selectTag != Voxel.StationaryLava)
            {
                blockTag = selectTag;
            }
        }
    }

    void PlaceBlock(BlockSelectionInfo selectionInfo)
    {
        Debug.Log("Place Block");
        if (selectionInfo.SelectionNormal != Vector3.zero)
        {
            ushort x = (ushort) (selectionInfo.X + selectionInfo.SelectionNormal.x);
            ushort y = (ushort) (selectionInfo.Y + selectionInfo.SelectionNormal.y);
            ushort z = (ushort) (selectionInfo.Z + selectionInfo.SelectionNormal.z);

            Voxel placeSpotTag = world.GetVoxel(x, y, z);

            //can only place on air water and lava
            if (placeSpotTag == Voxel.Air || placeSpotTag == Voxel.StationaryWater || placeSpotTag == Voxel.StationaryLava)
            {
                if (bEditor.TryApplyEdit(x, y, z, blockTag))
                {
                    IChunk chunk =
                        world.Chunks[ChunkID.FromWorldPos(selectionInfo.X, selectionInfo.Y, selectionInfo.Z)];

                    vServer.SendBlockEdit(chunk.ActiveIds, selectionInfo.X, selectionInfo.Y, selectionInfo.Z, blockTag);
                }
            }
        }
    }

    void BreakBlock(BlockSelectionInfo selectionInfo)
    {
        if (selectionInfo.FoundBlock)
        {
            if (selectionInfo.SelectionNormal != Vector3.zero)
            {
                //    ulong breakSpotTag = currentWorld[x, y, z];
                Voxel breakSpotTag = world.GetVoxel(selectionInfo.SelectionPosition.x, selectionInfo.SelectionPosition.y, selectionInfo.SelectionPosition.z);
                if (breakSpotTag == 0)
                {
                    return;
                }

                //bedrock, water, and lava can not be broken
                if (breakSpotTag == Voxel.Bedrock || breakSpotTag == Voxel.StationaryWater || breakSpotTag == Voxel.StationaryLava)
                {
                    return;
                }


                if (bEditor.TryApplyEdit(selectionInfo.X, selectionInfo.Y, selectionInfo.Z, 0))
                {
                    IChunk chunk =
                        world.Chunks[ChunkID.FromWorldPos(selectionInfo.X, selectionInfo.Y, selectionInfo.Z)];

                    vServer.SendBlockEdit(chunk.ActiveIds, selectionInfo.X, selectionInfo.Y, selectionInfo.Z, 0);
                }

                return;
            }
        }
    }

    BlockSelectionInfo FindBlock(Vector3 startPosition, Vector3 direction)
    {
        Vector3 selectionPosition;
        Vector3 selectionNormal;
        var hits = Physics.RaycastAll(startPosition, direction, editDistance);
        foreach (var raycastHit in hits)
        {
            if (raycastHit.transform.CompareTag("Ground"))
            {
                Vector3 testPosition = raycastHit.point + (raycastHit.point - startPosition).normalized * .01f;

                ushort selectionX = (ushort) (testPosition.x * 2);
                ushort selectionY = (ushort) (testPosition.y * 2);
                ushort selectionZ = (ushort) (testPosition.z * 2);
                testPosition = new Vector3(selectionX / 2f, selectionY / 2f, selectionZ / 2f);
                if (PlayerUtils.IsSolidBlock(world.GetVoxel(testPosition.x, testPosition.y, testPosition.z)))
                {
                    selectionPosition = testPosition;
                    selectionNormal = raycastHit.normal;
                    return new BlockSelectionInfo(true, selectionX, selectionY, selectionZ, selectionPosition,
                        selectionNormal);
                }
            }
        }


        return BlockSelectionInfo.NoBlock;
    }
}