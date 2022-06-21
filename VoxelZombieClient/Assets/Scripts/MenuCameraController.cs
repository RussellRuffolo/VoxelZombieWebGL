using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuCameraController : MonoBehaviour
{

    public float startHeight;
    public float maxHeight;

    public float speed;

    private bool rising = true;

    private bool pause = false;
    // Start is called before the first frame update
    void Start()
    {
        startHeight = transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        if (!pause)
        {
            if (rising)
            {
                Rise();
            }
            else
            {
                Fall();
            }
        }

    }

    void Rise()
    {
        transform.position += Vector3.up * speed * Time.deltaTime;
        if (transform.position.y >= maxHeight)
        {
            transform.position = new Vector3(transform.position.x, maxHeight, transform.position.z);

            StartCoroutine(Pause());
        }
    }

    void Fall()
    {
        transform.position -= Vector3.up * speed * Time.deltaTime;
        if (transform.position.y <= startHeight)
        {
            transform.position = new Vector3(transform.position.x, startHeight, transform.position.z);

            StartCoroutine(Pause());
        }
    }

    IEnumerator Pause()
    {
        pause = true;
        yield return new WaitForSeconds(1);
        rising = !rising;
        pause = false;
    }
}
