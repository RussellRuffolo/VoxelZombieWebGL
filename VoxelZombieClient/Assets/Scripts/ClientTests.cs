using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClientTests : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        UInt64 test = 0;
        test.Pack(0, 1, 2, 3, 4, 5, 6, 7);
        Debug.Log("Test Value: " + test);

        Debug.Log("_000: " + test._000());

        Debug.Log("_001: " + test._001());

        Debug.Log("_101: " + test._101());

        Debug.Log("_100: " + test._100());

        Debug.Log("_010: " + test._010());

        Debug.Log("_011: " + test._011());

        Debug.Log("_111: " + test._111());

        Debug.Log("_110: " + test._110());
    }

    // Update is called once per frame
    void Update()
    {
    }
}