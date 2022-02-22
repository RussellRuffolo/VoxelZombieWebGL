using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class ClientCameraController : MonoBehaviour
    {
        public Transform LocalPlayerSim;
        public float minimumX = -60f;
        public float maximumX = 60f;

        public float minimumY = -360f;
        public float maximumY = 360f;

        public float sensitivityX = 5f;
        public float sensitivityY = 5f;

        public float rotationY = 0f;
        private float rotationX = 0f;


        Camera playerCam;

        public bool MenuOpen;

        ClientChatManager chatManager;

        // Start is called before the first frame update
        void Start()
        {
            playerCam = GetComponentInChildren<Camera>();
            chatManager = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientChatManager>();
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
            MenuOpen = false;
        }

        // Update is called once per frame
        void Update()
        {
            if (!MenuOpen)
                CameraLook();

            if (Input.GetKeyDown(KeyCode.Escape))
            {
                if(chatManager.chatEnabled)//if chat is open escape closes chat. Otherwise it frees cursor
                {
                    chatManager.CloseChat();
                }
                else
                {
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                    MenuOpen = true;
                }
              
            }
            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;
                MenuOpen = false;
            }
        }

        private void LateUpdate()
        {
            float clientError = Vector3.Distance(transform.position, LocalPlayerSim.position);
            if (clientError > 2 || clientError < 0.2f)
            {

                transform.position = LocalPlayerSim.position;

            }
            else
            {
                transform.position = Vector3.Lerp(transform.position, LocalPlayerSim.position, .5f);
            }

        }

        void CameraLook()
        {
            rotationY += Input.GetAxis("Mouse X") * sensitivityX;
            rotationX += Input.GetAxis("Mouse Y") * sensitivityY;

            rotationX = Mathf.Clamp(rotationX, minimumX, maximumX);


            playerCam.transform.localEulerAngles = new Vector3(-rotationX, rotationY, 0);

        }
    }
}

