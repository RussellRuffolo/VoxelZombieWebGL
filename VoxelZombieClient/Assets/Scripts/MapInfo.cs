using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class MapInfo
{
    public static Dictionary<string, Vector3> SpawnPositions = new Dictionary<string, Vector3>()
    {
        {"one_chunk", new Vector3(8, 18, 8)},
        {"gurka", new Vector3(55, 42.5f, 28)},
        {"prison", new Vector3(62, 1.5f, 62)},
        {"stadium", new Vector3(112, 65.5f, 65)},
        {
            "sewers", new Vector3(20, 57.5f, 51)
        },
        {
            "excitebike", new Vector3(24, 35.5f, 36)
        },
        {
            "dwarves", new Vector3(122, 2.5f, 7)
        },
        {"diametric", new Vector3(46, 19.5f, 26)},
        {"asylum", new Vector3(25, 129.5f, 30)},
        {
            "domti", new Vector3(126, 35, 64)
        },
        {
            "excavation", new Vector3(25, 129.5f, 30)
        },
        {
            "fortress", new Vector3(60, 132, 32)
        },
        {
            "a_reverie", new Vector3(123, 3, 125)
        },
        {
            "pandoras_box", new Vector3(25, 129.5f, 30)
        },
        {
            "tsunami", new Vector3(25, 129.5f, 30)
        },
        {
            "carson", new Vector3(10, 35.5f, 120)
        },
        {
            "Sunspots", new Vector3(60, 112.5f, 108)
        },
        {
            "hawaiiMod", new Vector3(1, 67.5f, 43)
        },
        {
            "clockwork", new Vector3(20, 238, 3)
        },
        {
            "colony", new Vector3(56, 67.5f, 8)
        },
        {"italy", new Vector3(53, 89.5f, 63)},
        {"swiss", new Vector3(29, 50.5f, 12)},
        {"swordbase", new Vector3(56, 20, 4)}
    };
}