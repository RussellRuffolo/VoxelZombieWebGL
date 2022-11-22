using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ChunkInfo
{
    public static Vector3[] _cubeVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 1, 0),
        new Vector3(0, 1, 0),
        new Vector3(0, 1, 1),
        new Vector3(1, 1, 1),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1),
    };

    public static Vector3[] _frontVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(.5f, 0, 0),
        new Vector3(.5f, .5f, 0),
        new Vector3(0, .5f, 0),
    };

    public static Vector3[] _frontHalfVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(1, 0, 0),
        new Vector3(1, 0.5f, 0),
        new Vector3(0, 0.5f, 0),
    };

    public static int[] _frontTriangles = new[]
    {
        0, 2, 1,
        0, 3, 2
    };

    public static Vector3[] _topVertices = new[]
    {
        new Vector3(.5f, .5f, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, .5f),
        new Vector3(.5f, .5f, .5f),
    };

    public static Vector3[] _topHalfVertices = new[]
    {
        new Vector3(1, .5f, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, 1),
        new Vector3(1, .5f, 1),
    };

    public static int[] _topTriangles = new[]
    {
        0, 1, 2,
        0, 2, 3
    };

    public static Vector3[] _rightVertices = new[]
    {
        new Vector3(.5f, 0, 0),
        new Vector3(.5f, .5f, 0),
        new Vector3(.5f, .5f, .5f),
        new Vector3(.5f, 0, .5f)
    };

    public static Vector3[] _rightHalfVertices = new[]
    {
        new Vector3(1, 0, 0),
        new Vector3(1, .5f, 0),
        new Vector3(1, .5f, 1),
        new Vector3(1, 0, 1)
    };

    public static int[] _rightTriangles = new[]
    {
        0, 1, 2,
        0, 2, 3
    };

    public static Vector3[] _leftVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, .5f),
        new Vector3(0, 0, .5f)
    };

    public static Vector3[] _leftHalfVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(0, .5f, 0),
        new Vector3(0, .5f, 1),
        new Vector3(0, 0, 1)
    };

    public static int[] _leftTriangles = new[]
    {
        0, 3, 2,
        0, 2, 1
    };

    public static Vector3[] _backVertices = new[]
    {
        new Vector3(0, .5f, .5f),
        new Vector3(.5f, .5f, .5f),
        new Vector3(.5f, 0, .5f),
        new Vector3(0, 0, .5f),
    };

    public static Vector3[] _backHalfVertices = new[]
    {
        new Vector3(0, .5f, 1),
        new Vector3(1, .5f, 1),
        new Vector3(1, 0, 1),
        new Vector3(0, 0, 1),
    };

    public static int[] _backTriangles = new[]
    {
        2, 1, 0,
        2, 0, 3
    };

    public static Vector3[] _bottomVertices = new[]
    {
        new Vector3(0, 0, 0),
        new Vector3(.5f, 0, 0),
        new Vector3(.5f, 0, .5f),
        new Vector3(0, 0, .5f)
    };

    public static int[] _bottomTriangles = new[]
    {
        0, 2, 3,
        0, 1, 2
    };

    public static int[] _cubeTriangles = new[]
    {
        // Front
        0, 2, 1,
        0, 3, 2,
        // Top
        2, 3, 4,
        2, 4, 5,
        // Right
        1, 2, 5,
        1, 5, 6,
        // Left
        0, 7, 4,
        0, 4, 3,
        // Back
        5, 4, 7,
        5, 7, 6,
        // Bottom
        0, 6, 7,
        0, 1, 6
    };

    public static List<int> _modeledBlockIDs = new List<int>
    {
        37, 38, 39, 40, 57, 61
    };

    public static HashSet<int> _transparentBlocks = new HashSet<int>()
    {
        0, 9, 11, 18,
        20, 37, 38, 39, 40, 44, 57, 61
    };

    // public static List<int> _transparentBlockIDs = new List<int>
    // {
    //     0, 9, 11, 18,
    //     20, 37, 38, 39, 40, 44, 57, 61
    // };

    public static HashSet<int> _transparentBlockSet = new HashSet<int>()
    {
        0, 9, 11, 18,
        20, 37, 38, 39, 40, 44, 57, 61
    };

    public static Vector3[] _cubeNormals = new[]
    {
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up, Vector3.up
    };

    public static Vector3[] _faceNormals = new[]
    {
        Vector3.up, Vector3.up, Vector3.up,
        Vector3.up
    };

    public static List<Vector3> frontUVs = new List<Vector3>()
    {
        new Vector2(0, 0),
        new Vector2(1, 0),

        new Vector2(1, 1),
        new Vector2(0, 1)
    };

    public static void AddFrontUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in frontUVs)
        {
            uvList.Add(vector3);
        }
    }

    public static List<Vector3> topUVs = new List<Vector3>()
    {
        new Vector2(0, 0),
        new Vector2(0, 1),

        new Vector2(1, 1),
        new Vector2(1, 0)
    };


    public static void AddTopUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in topUVs)
        {
            uvList.Add(vector3);
        }
    }


    public static List<Vector3> bottomUVs = new List<Vector3>()
    {
        new Vector2(0, 0),
        new Vector2(0, 1),

        new Vector2(1, 1),
        new Vector2(1, 0)
    };


    public static void AddBottomUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in bottomUVs)
        {
            uvList.Add(vector3);
        }
    }
    
    public static List<Vector3> backUVs = new List<Vector3>()
    {
        new Vector2(1, 1),
        new Vector2(0, 1),

        new Vector2(0, 0),
        new Vector2(1, 0)
    };


    public static void AddBackUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in backUVs)
        {
            uvList.Add(vector3);
        }
    }

        
    public static List<Vector3> leftUVs = new List<Vector3>()
    {
        new Vector2(0, 0),
        new Vector2(0, 1),

        new Vector2(1, 1),
        new Vector2(1, 0)
    };


    public static void AddLeftUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in leftUVs)
        {
            uvList.Add(vector3);
        }
    }
    public static List<Vector3> rightUVs = new List<Vector3>()
    {
        new Vector2(0, 0),
        new Vector2(0, 1),

        new Vector2(1, 1),
        new Vector2(1, 0)
    };


    public static void AddRightUVs(List<Vector3> uvList)
    {
        foreach (Vector3 vector3 in rightUVs)
        {
            uvList.Add(vector3);
        }
    }

}