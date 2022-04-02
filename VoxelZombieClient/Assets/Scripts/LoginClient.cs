using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Security.Cryptography;
using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Client
{
    public class LoginClient : MonoBehaviour
    {
        private VoxelClient VoxelClient;

        public Text nameText;


        public Canvas loginCanvas;
        public Canvas chatCanvas;
        public Canvas targeterCanvas;

        private ClientChatManager cManager;

        [DllImport("__Internal")]
        private static extern void Connect(string baseUrl);


        private const string baseUrl = "https://rtc.crashbloxserver.net";

        // Start is called before the first frame update
        void Start()
        {
            VoxelClient = GetComponent<VoxelClient>();
            cManager = GetComponent<ClientChatManager>();


            targeterCanvas.enabled = false;
            bool editor = false;

#if UNITY_EDITOR
            editor = true;
#endif

            if (!editor)
            {
                Debug.LogError("Connecting");
                Connect(baseUrl + "/get-offer/");
            }
        }

        public void OnLoginResponse(int loginStatus)
        {
            if (loginStatus == 0) //succesful login
            {
                cManager.enabled = true;
                chatCanvas.enabled = true;
                targeterCanvas.enabled = true;
                Destroy(loginCanvas
                    .gameObject); //login Canvas generated errors after being disabled                
            }
            else if (loginStatus == 1) //Username is not in database
            {
            }
            else if (loginStatus == 2) //Supplied password does not match password of corresponding name in db
            {
            }
            else //error logging in
            {
                Debug.Log("Login status is: " + loginStatus);
            }
        }

        public void OnSinglePlayer()
        {
            cManager.enabled = true;
            chatCanvas.enabled = true;
            targeterCanvas.enabled = true;

            Destroy(loginCanvas
                .gameObject); 
        }


        public void OnLogin()
        {
            if (nameText.text != "")
            {
                RtcMessage loginMessage = new RtcMessage(Tags.LOGIN_ATTEMPT_TAG);
                loginMessage.WriteStr(nameText.text);
                VoxelClient.SendReliableMessage(loginMessage);
            }
            else
            {
                Debug.Log("No Name Entered");
            }
        }
    }
}