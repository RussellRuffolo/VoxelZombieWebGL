using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Security.Cryptography;
using System;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
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

        public GameObject nameEntry;
        public GameObject loginButton;

        private ClientChatManager cManager;

        [DllImport("__Internal")]
        private static extern string Connect(string baseUrl);

        [DllImport("__Internal")]
        private static extern void GetToken();


        [DllImport("__Internal")]
        private static extern void Foo();

        [DllImport("__Internal")]
        private static extern void Boo();


        private const string baseUrl = "https://rtc.crashblox.net";

        public string username;

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


            if (Application.platform == RuntimePlatform.WebGLPlayer)
            {
                Connect(baseUrl + "/get-offer/");

                //get token


                //send token to game server

                //
            }
            else if (Application.platform == RuntimePlatform.Android)
            {
            }
        }


        public void ReceiveToken(string token)
        {
            m_token = token;
            Debug.LogError("Received Token: " + token);
            RtcMessage tokenMessage = new RtcMessage(Tags.TOKEN_TAG);

            tokenMessage.WriteStr(token);

            VoxelClient.SendReliableMessage(tokenMessage);
        }

        public void ReceiveDiscordToken(string token)
        {
            Debug.LogError("Received Discord Token: " + token);
        }

        private string m_token;


        public void ReliableChannelOpen()
        {
            Debug.LogError("Reliable Channel Open");
            GetToken();
        }

        public void HandleUsername(string username)
        {
            if (String.IsNullOrEmpty(username))
            {
                ReceiveNoUsername();
            }
            else
            {
                ReceiveUsername(username);
            }
        }

        public void ReceiveNoUsername()
        {
            nameEntry.SetActive(true);
        }

        public void ReceiveUsername(string returnName)
        {
            if (string.IsNullOrEmpty(returnName))
            {
                //show the input field and a submit button. on successful patch show play button
                nameEntry.SetActive(true);
            }
            else
            {
                username = returnName;
                //display play button
                loginButton.SetActive(true);
                nameEntry.SetActive(false);
            }

            Debug.LogError("username is: " + returnName);
            Debug.LogError(returnName);
        }

        public void OnSubmitUsername()
        {
            if (nameText.text != "")
            {
                Debug.LogError("NameText is: " + nameText.text);
                RtcMessage patchUsernameMessage = new RtcMessage(Tags.PATCH_USERNAME_TAG);
                patchUsernameMessage.WriteStr(nameText.text);
                patchUsernameMessage.WriteStr(m_token);
                VoxelClient.SendReliableMessage(patchUsernameMessage);
                // Debug.LogError(returnName);
                //
                // if (string.IsNullOrEmpty(returnName))
                // {
                //     Debug.LogError("Error: Improper Name or Server Down");
                // }
                // else
                // {
                //     nameEntry.SetActive(false);
                //     username = returnName;
                //     loginButton.SetActive(true);
                // }
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
            if (username != "")
            {
                RtcMessage loginMessage = new RtcMessage(Tags.LOGIN_ATTEMPT_TAG);
                loginMessage.WriteStr(username);
                VoxelClient.SendReliableMessage(loginMessage);
            }
            else
            {
                Debug.Log("No Name Entered");
            }
        }
    }
}