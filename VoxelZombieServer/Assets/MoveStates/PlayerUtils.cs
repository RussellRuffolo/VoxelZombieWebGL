using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;

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

    public static bool CheckStandable(Rigidbody playerRb)
    {
        Collider[] colliders = Physics.OverlapBox(playerRb.transform.position, PlayerStats.StandingHalfExtents,
            playerRb.transform.rotation,
            Physics.AllLayers
        );


        foreach (Collider collider in colliders)
        {
            if (collider.CompareTag("Ground"))
            {
                return false;
            }
        }

        return true;
    }

    public static bool CheckWall(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints,
        IWorld world)
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

    public static bool CheckWater(Rigidbody playerRb, List<ContactPoint> contactPoints, IWorld world)
    {
        Collider[] colliders = Physics.OverlapBox(playerRb.transform.position, PlayerStats.StandingHalfExtents,
            playerRb.transform.rotation,
            Physics.AllLayers
        );


        foreach (Collider collider in colliders)
        {
            if (collider.CompareTag("Water"))
            {
                return true;
            }
        }

        Vector3 playerPosition = playerRb.transform.position;
        ushort x = (ushort) Mathf.FloorToInt(playerPosition.x);
        ushort y = (ushort) Mathf.FloorToInt(playerPosition.y);
        ushort z = (ushort) Mathf.FloorToInt(playerPosition.z);

        if (world[x, y, z] == 9)
        {
            return true;
        }


        return false;
    }


    public static bool CheckAerialHalfBlock(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints,
        IWorld world)
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

    public static bool CheckHalfBlock(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.normal.y == 0)
            {
                if (Vector3.Dot(playerInputs.MoveVector, -contactPoint.normal) > 0)
                {
                    // Vector3 testPosition = playerRb.transform.position + Vector3.up * .51f +
                    //                        playerInputs.MoveVector.normalized * .01f;
                    //
                    // Collider[] colliders = Physics.OverlapBox(testPosition, PlayerStats.StandingHalfExtents,
                    //     playerRb.transform.rotation,
                    //     Physics.AllLayers
                    // );
                    //
                    // foreach (Collider collider in colliders)
                    // {
                    //     if (collider.CompareTag("Ground"))
                    //     {
                    //         return false;
                    //     }
                    // }
                    //
                    // return true;
                    
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

    public static bool IsSolidBlock(ulong blockTag)
    {
        return blockTag != 0 && blockTag != 9 && blockTag != 11;
    }
}