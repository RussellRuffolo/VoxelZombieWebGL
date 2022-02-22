using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundaryController : MonoBehaviour
{
    public Transform floor;
    public Transform ceiling;
    public Transform plusXWall;
    public Transform minusXWall;
    public Transform plusZWall;
    public Transform minusZWall;

    //width is z, length is x
    public void SetMapBoundaries(int length, int width, int height)
    {
        float w = width;
        float l = length;
        float h = height;

        Debug.Log("Width: " + w + " Length: " + l + " Height: " + h);

        Vector3 ceilingPosition = new Vector3(l / 2, h + 3.5f, w / 2);
        ceiling.position = ceilingPosition;
        ceiling.localScale = new Vector3(l + 1, 1, w + 1);

        Vector3 floorPosition = new Vector3(l / 2, -.5f, w / 2);
        floor.position = floorPosition;
        floor.localScale = new Vector3(l + 1, 1, w + 1);

        Vector3 plusXPostion = new Vector3(l + .5f, h / 2, w / 2);
        plusXWall.position = plusXPostion;
        plusXWall.localScale = new Vector3(1, h + 7, w + 1);

        Vector3 minusXPosition = new Vector3(-.5f, h / 2, w / 2);
        minusXWall.position = minusXPosition;
        minusXWall.localScale = new Vector3(1, h + 7, w + 1);

        Vector3 plusZPosition = new Vector3(l / 2, h / 2, w + .5f);
        plusZWall.position = plusZPosition;
        plusZWall.localScale = new Vector3(l + 1, h + 7, 1);

        Vector3 minusZPosition = new Vector3(l / 2, h / 2, -.5f);
        minusZWall.position = minusZPosition;
        minusZWall.localScale = new Vector3(l + 1, h + 7, 1);
    }
}
