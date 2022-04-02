using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraWaterTracker : MonoBehaviour
{
    
    private IWorld world;

    private Image waterEffect;
    private Image lavaEffect;
    // Start is called before the first frame update
    void Start()
    {
        world = GameObject.FindGameObjectWithTag("Network").GetComponent<IVoxelEngine>().World;
        GameObject waterCanvas = Instantiate(Resources.Load<GameObject>("WaterCanvas"));
        waterEffect = waterCanvas.GetComponentInChildren<Image>();

        GameObject lavaCanvas = Instantiate(Resources.Load<GameObject>("LavaCanvas"));
        lavaEffect = lavaCanvas.GetComponentInChildren<Image>();

        waterEffect.enabled = false;
        lavaEffect.enabled = false;

    }

    // Update is called once per frame
    void Update()
    {
        int x = Mathf.FloorToInt(transform.position.x);
        int y = Mathf.FloorToInt(transform.position.y);
        int z = Mathf.FloorToInt(transform.position.z);

        ushort blockTag = (ushort)world[x, y, z];

        if(blockTag == 9)
        {
            waterEffect.enabled = true;
        }
        else
        {
            waterEffect.enabled = false;

        }

        if(blockTag == 11)
        {
            lavaEffect.enabled = true;
        }
        else
        {
            lavaEffect.enabled = false;
        }
    }
    
}
