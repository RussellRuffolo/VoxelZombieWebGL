﻿using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SinglePlayerMenuController : MonoBehaviour
{
    [SerializeField] private Canvas SinglePlayerCanvas;

    [SerializeField] private Dropdown MapSelectionDropdown;

    [SerializeField] private SinglePlayerVoxelEngine vEngine;


    public GameObject SingePlayerPrefab;
    public GameObject SinglerPlayerSimulator;

    public GameObject PlayerMenu;


    // Start is called before the first frame update
    void Start()
    {
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("one_chunk"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("a_reverie"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("asylum"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("carson"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("domti"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("excitebike"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("fortress"));

        MapSelectionDropdown.options.Add(new Dropdown.OptionData("gurka"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("hawaiiMod"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("pandoras_box"));

        MapSelectionDropdown.options.Add(new Dropdown.OptionData("prison"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("stadium"));

        MapSelectionDropdown.options.Add(new Dropdown.OptionData("sunspots"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("swiss"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("swordbase"));
        MapSelectionDropdown.options.Add(new Dropdown.OptionData("tsunami"));
    }

    public void OnLoadMap()
    {
        Debug.Log("On Load Map");
        string mapName = MapSelectionDropdown.options[MapSelectionDropdown.value].text;

        

        vEngine.LoadMap(mapName);

        Destroy(SinglePlayerCanvas.gameObject);

        Vector3 position = MapInfo.SpawnPositions[mapName];

        Vector3 eulerRotation = Vector3.zero;


        GameObject LocalPlayer = GameObject.Instantiate(SingePlayerPrefab,
            position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

        GameObject LocalPlayerSim = GameObject.Instantiate(SinglerPlayerSimulator,
            position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

        GameObject Menu = GameObject.Instantiate(PlayerMenu);

        LocalPlayer.GetComponent<ClientCameraController>().LocalPlayerSim =
            LocalPlayerSim.transform;
        LocalPlayerSim.GetComponent<SinglePlayerPlayerController>().camController =
            LocalPlayer.GetComponent<ClientCameraController>();
        //
        // vEngine.MapLoadedDelegate += spawnPosition =>
        // {
        //     LocalPlayerSim.transform.position = spawnPosition;
        //     LocalPlayer.transform.position = spawnPosition;
        // };


        // localPlayerTransform = LocalPlayer.transform;
        //     localSimTransform = LocalPlayerSim.transform;
        // VoxelClient.LoadSinglePlayerMap(mapName);
    }
}