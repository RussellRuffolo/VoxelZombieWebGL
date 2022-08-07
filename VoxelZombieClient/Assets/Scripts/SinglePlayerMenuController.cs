using System.Collections;
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
    public ParticleSystem BreakBlockParticleSystem;


    public Text InputText;
    public Image LogPanel;
    public Image InputPanel;
    public Text DisplayedLogs;

    public GameObject SingePlayerPrefab;
    public GameObject SinglerPlayerSimulator;

    public GameObject PlayerMenu;

    private SinglePlayerPlayerController singlePlayerPlayerController;

    // public Canvas ChatCanvas;

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
        string mapName = MapSelectionDropdown.options[MapSelectionDropdown.value].text;


        vEngine.LoadMap(mapName);

        Destroy(SinglePlayerCanvas.gameObject);

        Vector3 position = MapInfo.SpawnPositions[mapName];

        Vector3 eulerRotation = Vector3.zero;

        Instantiate(PlayerMenu);

        GameObject LocalPlayer = Instantiate(SingePlayerPrefab,
            position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));

        GameObject LocalPlayerSim = Instantiate(SinglerPlayerSimulator,
            position, Quaternion.Euler(eulerRotation.x, eulerRotation.y, eulerRotation.z));


        LocalPlayer.GetComponent<ClientCameraController>().LocalPlayerSim =
            LocalPlayerSim.transform;
        singlePlayerPlayerController = LocalPlayerSim.GetComponent<SinglePlayerPlayerController>();
        singlePlayerPlayerController.camController =
            LocalPlayer.GetComponent<ClientCameraController>();

        singlePlayerPlayerController.PlayerAnimator = LocalPlayer.GetComponentInChildren<Animator>();
        singlePlayerPlayerController.PlayerAnimator.SetBool("IsHuman", true);

        LocalPlayer.GetComponent<SinglePlayerBlockEditor>().blockBreakParticleSystem =
            Instantiate(BreakBlockParticleSystem, null);
        LocalPlayerSim.GetComponent<SinglePlayerPlayerController>().bEditor =
            LocalPlayer.GetComponent<SinglePlayerBlockEditor>();

        singlePlayerPlayerController.InputText = InputText;
        singlePlayerPlayerController.LogPanel = LogPanel;
        singlePlayerPlayerController.InputPanel = InputPanel;
        singlePlayerPlayerController.DisplayedLogs = DisplayedLogs;
    }
}