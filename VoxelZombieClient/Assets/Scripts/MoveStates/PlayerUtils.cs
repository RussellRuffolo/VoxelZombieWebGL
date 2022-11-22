using System;
using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;

public static class PlayerUtils
{
    private static Vector3 FootOffset = new Vector3(0, -.08f - (1.76f / 2), 0);

    // Todo? (Russell): Standardize "Check" helper functions' signatures
    public static bool CheckGrounded(Rigidbody playerRb)
    {
        // foreach (ContactPoint contactPoint in contactPoints)
        // {
        //     if (contactPoint.normal.y.Equals(1))
        //     {
        //         return true;
        //     }
        // }
        var colliders =
            Physics.OverlapBox(playerRb.position + FootOffset, new Vector3(.175f, .1f, .175f), playerRb.rotation);

        foreach (var collider in colliders)
        {
            if (collider.CompareTag("Ground"))
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

                if (world.GetVoxel(x, y, z).isSolid() && world.GetVoxel(x, y + 1, z).isSolid())
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

        if (world.GetVoxel(x, y, z) == Voxel.StationaryWater)
        {
            return true;
        }


        return false;
    }


    public static bool CheckAerialHalfBlock(Rigidbody playerRb, ClientInputs playerInputs,
        List<ContactPoint> contactPoints,
        IWorld world)
    {
        Vector3 blockPosition = playerRb.transform.position + FootOffset - Vector3.up * .4f;
        ushort x = (ushort) Mathf.FloorToInt(blockPosition.x);
        ushort y = (ushort) Mathf.FloorToInt(blockPosition.y);
        ushort z = (ushort) Mathf.FloorToInt(blockPosition.z);

        if (world.GetVoxel(blockPosition.x, blockPosition.y, blockPosition.z).isSolid()) return false;
        return CheckHalfBlock(playerRb, playerInputs, contactPoints, world);
    }

    public static bool CheckHalfBlock(Rigidbody playerRb, ClientInputs playerInputs, List<ContactPoint> contactPoints,
        IWorld world)
    {
        foreach (ContactPoint contactPoint in contactPoints)
        {
            if (contactPoint.otherCollider.CompareTag("Ground") && contactPoint.normal.y == 0)
            {
                if (Vector3.Dot(playerInputs.MoveVector, -contactPoint.normal) > 0)
                {
                    // Vector3 testPosition = playerRb.transform.position + Vector3.up * .51f +
                    //                        playerInputs.MoveVector.normalized * .01f;
                    Vector3 testPosition = playerRb.transform.position + Vector3.up * .51f +
                                         -contactPoint.normal * .05f;

                    Collider[] colliders = Physics.OverlapBox(testPosition, PlayerStats.StandingHalfExtents,
                        Quaternion.LookRotation(playerInputs.PlayerForward),
                        Physics.AllLayers
                    );
                    bool hitGround = false;
                    foreach (Collider collider in colliders)
                    {
                        if (collider.CompareTag("Ground"))
                        {
                            hitGround = true;
                        }
                    }
                    if (!hitGround) return true;
                }
            }
        }
        return false;
    }

    // TODO (Snapper): Remove all references to these helper functions.

    public static bool IsBreakableBlock(Voxel blockTag)
    {
        return blockTag.isBreakable();
    }
}