using System.Collections;
using System.Collections.Generic;
using Client;
using UnityEngine;
using UnityEngine.UI;
using ZombieLib;

public class ChatInputState : BaseChatInputState
{
    public bool chatEnabled;

    private List<string> chatLog = new List<string>();


    private ushort playerState = 0;

    private int chatsDisplayed = 0;

    private string inputMessage = "";

    private float whMatch = 0f;

    public override void Enter()
    {
        chatEnabled = true;
        inputPanel.enabled = true;
        logPanel.enabled = true;
        DisplayChats();
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

    public override void Exit()
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

    public override InputState CheckInputState(ClientInputs clientInputs)
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            return InputState.Standard;
        }

        return InputState.Chat;
    }

    public override void ApplyInputs(ClientInputs clientInputs)
    {
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
                return;
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
}