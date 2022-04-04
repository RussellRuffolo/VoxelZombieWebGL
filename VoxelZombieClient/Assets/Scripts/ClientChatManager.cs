using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Client
{
    public class ClientChatManager : MonoBehaviour
    {
       
        public Text inputText;


        public Image logPanel;
        public Image inputPanel;

        public bool chatEnabled;

        private List<string> chatLog = new List<string>();

        public Text DisplayedLogs;

        public float chatFadeTime;


        private int chatsDisplayed = 0;

        private string inputMessage = "";
        
        private float whMatch = 0f;

        void Awake()
        {
            logPanel.enabled = false;
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


            inputText.color = messageColor;
        }
    }
}