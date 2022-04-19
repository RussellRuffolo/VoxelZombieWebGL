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


        public float sensitivityX = 5f;
        public float sensitivityY = 5f;

        public float rotationY = 0f;
        private float rotationX = 0f;


        Camera playerCam;

        private MenuController menuController;

        private BasePlayerController PlayerController;

        public GameObject playerModel;

        // Start is called before the first frame update
        void Start()
        {
            playerCam = GetComponentInChildren<Camera>();

            menuController = GameObject.FindGameObjectWithTag("MenuCanvas").GetComponent<MenuController>();

            PlayerController = LocalPlayerSim.GetComponent<BasePlayerController>();
        }

        // Update is called once per frame
        void Update()
        {
            if (PlayerController.InputState == InputState.Standard)
                CameraLook();
        }

        private void LateUpdate()
        {
            Vector3 targetPosition = LocalPlayerSim.position;

            if (PlayerController.MoveState == MoveState.basicSliding ||
                PlayerController.MoveState == MoveState.basicCrawling ||
                PlayerController.MoveState == MoveState.slideAir)
            {
                targetPosition = LocalPlayerSim.position - Vector3.up;
            }

            // float clientError = Vector3.Distance(transform.position, LocalPlayerSim.position);
            // if (clientError > 2 || clientError < 0.2f)
            // {
            //     transform.position = LocalPlayerSim.position;
            // }
            // else
            //{
            transform.position = Vector3.Lerp(transform.position, targetPosition, .5f);
            //  }
        }

        void CameraLook()
        {
            rotationY += Input.GetAxis("Mouse X") * sensitivityX * menuController.xSensitivity;
            rotationX += Input.GetAxis("Mouse Y") * sensitivityY * menuController.ySensitivity;

            rotationX = Mathf.Clamp(rotationX, minimumX, maximumX);


            playerCam.transform.localEulerAngles = new Vector3(-rotationX, rotationY, 0);
            playerModel.transform.rotation = Quaternion.Euler(0, rotationY, 0);
        }
    }
}