using System;
using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    public bool MenuOpen;

    public float xSensitivity;

    public float ySensitivity;

    [SerializeField] public Slider xSlider;

    [SerializeField] public Slider ySlider;

    [SerializeField] private Canvas MenuCanvas;


    ClientChatManager chatManager;


    // Start is called before the first frame update
    void Start()
    {
        chatManager = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientChatManager>();
        MenuCanvas.enabled = false;

        xSlider.onValueChanged.AddListener(XChanged);

        ySlider.onValueChanged.AddListener(YChanged);

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    void XChanged(float value)
    {
        xSensitivity = value;
    }

    void YChanged(float value)
    {
        ySensitivity = value;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.M))
        {
            if (MenuOpen)
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;
                MenuCanvas.enabled = false;
                MenuOpen = false;
            }
            else
            {
                if (!chatManager.chatEnabled) //if chat is open m closes chat. Otherwise it frees cursor
                {
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                    MenuCanvas.enabled = true;
                    MenuOpen = true;
                }
            }
        }
    }
}