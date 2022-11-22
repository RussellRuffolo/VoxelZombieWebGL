using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkMotionSmoother : MonoBehaviour
{
    private Vector3 targetPosition;
    public Transform modelTransform;
    public Animator playerAnim;

    private void Awake()
    {
        targetPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position != targetPosition)
        {
            if(Vector3.Distance(transform.position, targetPosition) > .01)
            {
                transform.position = Vector3.Lerp(transform.position, targetPosition, .4f);
           }
            else
            {
                transform.position = targetPosition;
            }                 
        }        
    }

    public void SetValues(Vector3 newTarget, float yRotation, bool inWater, bool moving)
    {
        targetPosition = newTarget;
        modelTransform.rotation = Quaternion.Euler(0, yRotation, 0);
        playerAnim.SetBool("InWater", inWater);
        playerAnim.SetBool("Moving", moving);
    }
}
