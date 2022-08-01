using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerStats
{
    public static float playerSpeed = 4.0f;

    public static float crawlSpeed = 1.5f;
    public static float slideFriction = .05f;
    public static float slideBoost = 1f;
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
    
    public static Vector3 StandingHalfExtents = new Vector3(.708f / 2, 1.76f / 2, .708f / 2);
    public static Vector3 SmallerHalfExtents = new Vector3(.6f / 2, 1.76f / 2, .6f / 2);

    public static Vector3 StandableHalfExtents = new Vector3(.708f / 2, 1.75f / 2, .708f / 2);
}