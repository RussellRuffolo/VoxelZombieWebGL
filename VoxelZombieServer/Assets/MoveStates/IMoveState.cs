using System.Collections;
using System.Collections.Generic;

using UnityEditor;
using UnityEngine;

public interface IMoveState
{
    void ApplyInput(Rigidbody player, PlayerInputs currentInputs, List<ContactPoint> contactPoints);

    void Enter();

    void Exit();

    MoveState CheckMoveState(Rigidbody playerRb, PlayerInputs playerInputs, List<ContactPoint> contactPoints, World world);
}

public enum MoveState
{
    basicGrounded,
    basicAir,
    postJump,
    waterSwimming,
    lavaSwimming,
    basicJump,
    waterJump,
    basicSliding,
    basicCrawling,
    slideAir,
    wallJump,
    groundedHalfBlock,
    aerialHalfBlock,
    crouchJump, 
    wallHang,
    postWallJump
}

public static class PlayerStats
{
    public static float playerSpeed = 4.25f;

    public static float crawlSpeed = 1f;
    public static float slideFriction = .008f;
    
    public static float AirAcceleration = 8.5f;
    public static float jumpSpeed = 8;
    public static float gravAcceleration = 25;

    public static float verticalWaterMaxSpeed = 1.5f;
    public static float verticalWaterAcceleration = 35f;
    public static float horizontalWaterSpeed = 1.5f;

    public static float verticalLavaMaxSpeed = 0.75f;
    public static float verticalLavaAcceleration = 17.5f;
    public static float horizontalLavaSpeed = 0.75f;

    public static float waterExitSpeed = 5;
}



public static class PlayerUtils
{
    private static Vector3 FootOffset = new Vector3(0, -.08f - (1.76f / 2), 0);


    public static bool CheckGrounded(List<ContactPoint> contactPoints)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y.Equals(1))
            {
                return true;
            }
        }

        return false;
    }

 

    public static bool CheckWall(Rigidbody playerRb, PlayerInputs playerInputs,
        List<ContactPoint> contactPoints,
        World world)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y.Equals(0))
            {
                Vector3 testPoint = contactPoint.point +
                                    (contactPoint.point - playerRb.transform.position).normalized * .05f;

                ushort x = (ushort) Mathf.FloorToInt(testPoint.x);
                ushort y = (ushort) Mathf.FloorToInt(testPoint.y);
                ushort z = (ushort) Mathf.FloorToInt(testPoint.z);

                if (IsSolidBlock(world[x, y, z]) && IsSolidBlock(world[x, y + 1, z]))
                {
                    return true;
                }
            }
        }

        return false;
    }


    public static bool CheckAerialHalfBlock(Rigidbody playerRb, PlayerInputs playerInputs,
        List<ContactPoint> contactPoints,
        World world)
    {
        Vector3 blockPosition = playerRb.transform.position + FootOffset - Vector3.up;
        ushort x = (ushort) Mathf.FloorToInt(blockPosition.x);
        ushort y = (ushort) Mathf.FloorToInt(blockPosition.y);
        ushort z = (ushort) Mathf.FloorToInt(blockPosition.z);

        if (!IsSolidBlock(world[x, y, z]))
        {
            return false;
        }

        return CheckHalfBlock(playerRb, playerInputs, contactPoints, world);
    }

    public static bool CheckHalfBlock(Rigidbody playerRb, PlayerInputs playerInputs, List<ContactPoint> contactPoints,
        World world)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y == 0)
            {
                if (Vector3.Dot(playerInputs.MoveVector, -contactPoint.normal) > 0)
                {
                    Vector3 footPosition = playerRb.transform.position + FootOffset;
                    Vector3 blockPosition = new Vector3(contactPoint.point.x, footPosition.y, contactPoint.point.z) +
                                            playerInputs.MoveVector.normalized * .1f;

                    Vector3 floorPosition = footPosition - .5f * Vector3.up;

                    ushort floorX = (ushort) Mathf.FloorToInt(floorPosition.x);
                    ushort floorY = (ushort) Mathf.FloorToInt(floorPosition.y);
                    ushort floorZ = (ushort) Mathf.FloorToInt(floorPosition.z);


                    ushort x = (ushort) Mathf.FloorToInt(blockPosition.x);
                    ushort y = (ushort) Mathf.FloorToInt(blockPosition.y);
                    ushort z = (ushort) Mathf.FloorToInt(blockPosition.z);

                    if (world[x, y, z] == 44)
                    {
                        if (world[x, y + 1, z] == 0 && world[x, y + 2, z] == 0)
                        {
                            return true;
                        }
                    }

                    if (world[floorX, floorY, floorZ] == 44)
                    {
                        if (IsSolidBlock(world[x, y, z]) && world[x, y + 1, z] == 0 && world[x, y + 2, z] == 0)
                        {
                            return true;
                        }
                    }
                }
            }
        }

        return false;
    }

    public static bool IsSolidBlock(ushort blockTag)
    {
        return blockTag != 0 && blockTag != 9 && blockTag != 11;
    }
}