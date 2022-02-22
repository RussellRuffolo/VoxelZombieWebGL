using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Client
{
    public class ClientChatManager : MonoBehaviour
    {
        public GameObject chatCanvas;
        public Text inputText;


        public Image logPanel;
        public Image inputPanel;

        public bool chatEnabled;

        private List<string> chatLog = new List<string>();

        public Text DisplayedLogs;

        public float chatFadeTime;

        private VoxelClient vClient;

        private ushort playerState = 0;

        private int chatsDisplayed = 0;

        private string inputMessage = "";

        private Vector2 referenceResolution = new Vector2(1024, 768);
        private float whMatch = 0f;

        void Awake()
        {
            vClient = GetComponent<VoxelClient>();

            logPanel.enabled = false;
            inputPanel.enabled = false;
            chatEnabled = false;

            DisplayChats();

            // Debug.Log("Input text size delta is: " + inputText.rectTransform.sizeDelta.x);
            //  Debug.Log("Scale factor is: " + GetScale(Screen.width, Screen.height, referenceResolution, whMatch));
            //  Debug.Log("Message line length is: " + GetScale(Screen.width, Screen.height, referenceResolution, whMatch) * inputText.rectTransform.sizeDelta.x);
            //  Debug.Log("Message line length is: " + GetScale(Screen.width, Screen.height, referenceResolution, whMatch) * inputText.rectTransform.sizeDelta.x);
        }

        // Update is called once per frame
        void Update()
        {
            if (chatEnabled)
            {
                string newInput = Input.inputString;

                foreach (char c in Input.inputString)
                {
                    //If char is backspace character remove one character.
                    if (c == '\b')
                    {
                        if (inputMessage.Length != 0)
                        {
                            inputMessage = inputMessage.Substring(0, inputMessage.Length - 1);
                        }
                    }
                    else if ((c == '\n') || (c == '\r')) // enter/return
                    {
                        string newMessage = inputMessage;
                        inputMessage = "";
                        inputText.text = "";
                        Debug.Log("New message is: " + newMessage);
                        if (newMessage != "")
                        {
                            //send message to server here
                            vClient.SendChatMessage(newMessage, playerState);
                        }

                        inputPanel.enabled = false;
                        chatEnabled = false;
                        DisplayChats();
                    }
                    else
                    {
                        inputMessage += c;
                    }
                }

                inputText.text = inputMessage;


                while (CalculateLengthOfMessage(inputText.text, inputText) > (inputText.rectTransform.sizeDelta.x))
                {
                    inputText.text = inputText.text.Remove(0, 1);
                }
            }
            else
            {
                if (Input.GetKeyDown(KeyCode.T) || Input.GetKeyDown(KeyCode.Return))
                {
                    chatEnabled = true;
                    inputPanel.enabled = true;
                    logPanel.enabled = true;
                    DisplayChats();
                }
            }
        }

        public void CloseChat()
        {
            inputText.text = "";
            inputMessage = "";

            inputPanel.enabled = false;
            chatEnabled = false;
            DisplayChats();
        }

        public void DisplayMessage(string newMessage, ushort colorTag)
        {
            string message = "";
            string colorString = "";


            switch (colorTag)
            {
                case 0: //human messages
                    colorString = "white";
                    break;
                case 1: //zombie messages
                    colorString = "red";
                    break;
                case 2: //system messages;
                    colorString = "yellow";
                    break;
                default: //default to system
                    colorString = "yellow";
                    break;
            }

            message = "<color=" + colorString + ">" + newMessage + "</color>\n";

            chatLog.Add(message);

            chatsDisplayed++;

            DisplayChats();

            StartCoroutine(ChatDelay());
        }

        float CalculateLengthOfMessage(string message, Text chatText)
        {
            float totalLength = 0;

            Font myFont = chatText.font;
            CharacterInfo characterInfo = new CharacterInfo();

            char[] arr = message.ToCharArray();

            foreach (char c in arr)
            {
                myFont.GetCharacterInfo(c, out characterInfo, chatText.fontSize);

                totalLength += characterInfo.advance;
            }

            return totalLength;
        }


        public void DisplayChats()
        {
            logPanel.enabled = true;
            DisplayedLogs.enabled = true;
            DisplayedLogs.text = "";
            if (chatEnabled)
            {
                for (int i = 0; i < chatLog.Count; i++)
                {
                    DisplayedLogs.text += chatLog[i];
                }
            }
            else
            {
                int startIndex = chatLog.Count - chatsDisplayed;
                if (startIndex != chatLog.Count)
                {
                    for (int i = startIndex; i < chatLog.Count; i++)
                    {
                        DisplayedLogs.text += chatLog[i];
                    }
                }
                else
                {
                    logPanel.enabled = false;
                    DisplayedLogs.enabled = false;
                }
            }

            logPanel.rectTransform.sizeDelta =
                new Vector2(logPanel.rectTransform.sizeDelta.x, DisplayedLogs.preferredHeight);
        }


        private float GetScale(int width, int height, Vector2 scalerReferenceResolution, float scalerMatchWidthOrHeight)
        {
            return Mathf.Pow(width / scalerReferenceResolution.x, 1f - scalerMatchWidthOrHeight) *
                   Mathf.Pow(height / scalerReferenceResolution.y, scalerMatchWidthOrHeight);
        }

        IEnumerator ChatDelay()
        {
            yield return new WaitForSeconds(chatFadeTime);
            if (chatsDisplayed > 0)
            {
                chatsDisplayed--;
                DisplayChats();
            }
        }

        public void SetInputColor(ushort colorTag)
        {
            Color messageColor;

            switch (colorTag)
            {
                case 0: //system messages
                    messageColor = Color.white;
                    break;
                case 1: //human messages
                    messageColor = Color.red;
                    break;
                default: //default to system
                    messageColor = Color.yellow;
                    break;
            }

            playerState = colorTag;

            inputText.color = messageColor;
        }
    }
}