using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]

public class WaterEngine : MonoBehaviour
{

    public Material waterMaterial;
    Dictionary<VoxelCoordinate, ushort> LiquidDict = new Dictionary<VoxelCoordinate, ushort>();

    private MeshFilter meshFilter;
    private MeshCollider meshCollider;

    private List<int> TriangleList = new List<int>();
    private List<Vector3> uvList = new List<Vector3>();

    private static Vector3[] _faceNormals = new[]
    {
        Vector3.up,Vector3.up,Vector3.up,
        Vector3.up
    };

    private Vector3[] _frontVertices = new[]
    {
        new Vector3 (0, 0, 0),
        new Vector3 (1, 0, 0),
        new Vector3 (1, 1, 0),
        new Vector3 (0, 1, 0),
    };
    private int[] _frontTriangles = new[]
    {
       0, 2, 1,
       0, 3, 2
    };

    private Vector3[] _topVertices = new[]
   {
        new Vector3 (1, 1, 0),
        new Vector3 (0, 1, 0),
        new Vector3 (0, 1, 1),
        new Vector3 (1, 1, 1),
    };
    private int[] _topTriangles = new[]
  {
        0,1,2,
        0,2,3
    };

    private Vector3[] _rightVertices = new[]
    {
        new Vector3 (1, 0, 0),
        new Vector3 (1, 1, 0),
        new Vector3 (1, 1, 1),
        new Vector3 (1, 0, 1)
    };
    private int[] _rightTriangles = new[]
    {
        0,1,2,
        0,2,3
    };

    private Vector3[] _leftVertices = new[]
    {
      new Vector3 (0, 0, 0),
      new Vector3 (0, 1, 0),
      new Vector3 (0, 1, 1),
      new Vector3 (0, 0, 1)
    };
    private int[] _leftTriangles = new[]
   {
        0,3,2,
        0,2,1
    };

    private Vector3[] _backVertices = new[]
    {
        new Vector3 (0, 1, 1),
        new Vector3 (1, 1, 1),
        new Vector3 (1, 0, 1),
        new Vector3 (0, 0, 1),
    };
    private int[] _backTriangles = new[]
    {
        2, 1, 0,
       2, 0, 3

    };

    private Vector3[] _bottomVertices = new[]
    {
       new Vector3 (0, 0, 0),
       new Vector3 (1, 0, 0),
       new Vector3 (1, 0, 1),
       new Vector3 (0, 0, 1)

    };
    private int[] _bottomTriangles = new[]
   {
        0,2,3,
        0,1,2
    };


    private void Awake()
    {
        this.tag = "Water";
        meshFilter = GetComponent<MeshFilter>();
        meshCollider = GetComponent<MeshCollider>();
        //meshCollider.isTrigger = true;

        GetComponent<MeshRenderer>().material = waterMaterial;
    }


    public void AddWater(VoxelCoordinate newWater)
    {
        LiquidDict.Add(newWater, 9);
    }




    public void RenderWater()
    {
        var vertices = new List<Vector3>();
        TriangleList.Clear();
        uvList.Clear();
        var normals = new List<Vector3>();

        foreach (VoxelCoordinate waterCoord in LiquidDict.Keys)
        {
            Vector3 pos = waterCoord.WorldPosition();
            var verticesPos = vertices.Count;

            //RENDER FRONT 
            if (!IsWater(new VoxelCoordinate(waterCoord.x, waterCoord.y, waterCoord.z - 1)))
            {
                foreach (var vert in _frontVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _frontTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(1, 0));

                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(0, 1));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }

            //RENDER TOP
            if (!IsWater(new VoxelCoordinate(waterCoord.x, waterCoord.y + 1, waterCoord.z)))
            {
                foreach (var vert in _topVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _topTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(0, 1));
                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(1, 0));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }

            //RENDER RIGHT
            if (!IsWater(new VoxelCoordinate(waterCoord.x + 1, waterCoord.y, waterCoord.z)))
            {
                foreach (var vert in _rightVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _rightTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(0, 1));
                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(1, 0));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }

            //RENDER LEFT
            if (!IsWater(new VoxelCoordinate(waterCoord.x - 1, waterCoord.y, waterCoord.z)))
            {
                foreach (var vert in _leftVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _leftTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(0, 1));
                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(1, 0));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }

            //RENDER BACK
            if (!IsWater(new VoxelCoordinate(waterCoord.x, waterCoord.y, waterCoord.z + 1)))
            {
                foreach (var vert in _backVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _backTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(0, 1));
                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(1, 0));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }

            //RENDER BOTTOM
            if (!IsWater(new VoxelCoordinate(waterCoord.x, waterCoord.y - 1, waterCoord.z)))
            {
                foreach (var vert in _bottomVertices)
                    vertices.Add(pos + vert);
                foreach (var tri in _bottomTriangles)
                    TriangleList.Add(verticesPos + tri);

                uvList.Add(new Vector2(0, 0));
                uvList.Add(new Vector2(0, 1));
                uvList.Add(new Vector2(1, 1));
                uvList.Add(new Vector2(1, 0));

                foreach (var normal in _faceNormals)
                    normals.Add(normal);

                verticesPos = vertices.Count;
            }


        }

        var mesh = new Mesh();
        mesh.SetVertices(vertices);

        mesh.SetTriangles(TriangleList.ToArray(), 0);

        mesh.SetNormals(normals);
        mesh.SetUVs(0, uvList);
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;

    }

    private bool IsWater(VoxelCoordinate testCoord)
    {
        foreach (VoxelCoordinate key in LiquidDict.Keys)
        {
            if (testCoord.Equals(key))
            {
                return true;
            }
        }
        return false;
    }

}

