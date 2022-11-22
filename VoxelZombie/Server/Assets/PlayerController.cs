using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]

public class PlayerController : MonoBehaviour
{
    Rigidbody rb;
    public float speed;
    public float jumpSpeed;

    Camera playerCam;

    public float minimumX = -60f;
    public float maximumX = 60f;

    public float minimumY = -360f;
    public float maximumY = 360f;

    public float sensitivityX = 5f;
    public float sensitivityY = 5f;

    private float rotationY = 0f;
    private float rotationX = 0f;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        playerCam = GetComponentInChildren<Camera>();

        Cursor.lockState = CursorLockMode.Locked;
    }

    // Update is called once per frame
    void Update()
    {
        CameraLook();
        MovementInput();
    }

    void CameraLook()
    {
        rotationY += Input.GetAxis("Mouse X") * sensitivityX;
        rotationX += Input.GetAxis("Mouse Y") * sensitivityY;

        rotationX = Mathf.Clamp(rotationX, minimumX, maximumX);


        playerCam.transform.localEulerAngles = new Vector3(-rotationX, 0, 0);
        transform.eulerAngles = new Vector3(0, rotationY, 0);

    }

    void MovementInput()
    {
        float yVel = rb.velocity.y;

        Vector3 playerForward = new Vector3(transform.forward.x, 0, transform.forward.z);
        Vector3 playerRight = Quaternion.AngleAxis(90, Vector3.up) * playerForward;
        Vector3 speedVector = Vector3.zero;
        if (Input.GetKey(KeyCode.W))
        {
            speedVector += new Vector3(playerForward.x, 0, playerForward.z);
        }
        if (Input.GetKey(KeyCode.D))
        {
            speedVector += new Vector3(playerRight.x, 0, playerRight.z);
        }
        if (Input.GetKey(KeyCode.A))
        {
            speedVector -= new Vector3(playerRight.x, 0, playerRight.z);
        }
        if (Input.GetKey(KeyCode.S))
        {
            speedVector -= new Vector3(playerForward.x, 0, playerForward.z);
        }

        rb.velocity = speedVector * speed;
        rb.velocity += yVel * Vector3.up;
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (Physics.Raycast(transform.position, Vector3.down, 1.05f))
                rb.AddForce(Vector3.up * jumpSpeed, ForceMode.Impulse);
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Cursor.lockState = CursorLockMode.None;
        }
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            Cursor.lockState = CursorLockMode.Locked;
        }





    }
}
