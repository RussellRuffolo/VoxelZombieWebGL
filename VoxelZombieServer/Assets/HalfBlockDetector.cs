// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
//
// [RequireComponent(typeof(Rigidbody))]
// //Also requires some sort of collider, made with an AABB in mind
// /// The class that takes care of all the player related physics
// /// Many configurable parameters with defaults set as the recommended values in BBR
// public class HalfBlockDetector : MonoBehaviour
// {
//     //Remember 1 unit is 1 meter (the physics engine was made with this ratio in mind)
//
//     [Header("Steps")] public float maxStepHeight = 0.55f;
//
//     ///< The maximum a player can set upwards in units when they hit a wall that's potentially a step
//     public float stepSearchOvershoot = 0.01f;
//
//     ///< How much to overshoot into the direction a potential step in units when testing. High values prevent player from walking up small steps but may cause problems.
//     private List<ContactPoint> allCPs = new List<ContactPoint>();
//
//     private Vector3 lastVelocity;
//
//     bool steppingUp = false;
//     Vector3 halfStepOffset;
//
//     public bool grounded = false;
//
//     private World world;
//
//     private List<int> _SteppableBlockIds = new List<int>
//     {
//         0, 9, 11
//     };
//
//     private void Awake()
//     {
//         world = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelEngine>().world;
//     }
//
//     void FixedUpdate()
//     {
//         /*
//         Vector3 velocity = this.GetComponent<Rigidbody>().velocity;
//
//         if (!steppingUp)
//         {
//             //Filter through the ContactPoints to see if we're grounded and to see if we can step up
//             ContactPoint groundCP = default(ContactPoint);
//             grounded = FindGround(out groundCP, allCPs);
//
//             Vector3 stepUpOffset = default(Vector3);
//             bool stepUp = false;
//             if (grounded)
//                 stepUp = FindStep(out stepUpOffset, allCPs, groundCP, velocity);
//
//             //Steps
//             if (stepUp)
//             {
//                 stepUpOffset += Vector3.up * .1f;
//                 Debug.Log("Step up:" + stepUpOffset);
//                 steppingUp = true;
//                 halfStepOffset = .5f * stepUpOffset;
//                 //this.GetComponent<Rigidbody>().position += stepUpOffset;
//                 this.GetComponent<Rigidbody>().position += halfStepOffset;
//                 this.GetComponent<Rigidbody>().velocity = lastVelocity;
//             }
//
//             
//         }        
//         else
//         {
//             grounded = false;
//             this.GetComponent<Rigidbody>().position += halfStepOffset;
//             this.GetComponent<Rigidbody>().velocity = lastVelocity;
//
//             steppingUp = false;
//
//         }
//        
//         allCPs.Clear();
//         lastVelocity = velocity;
//         */
//     }
//
//     public void CheckSteps()
//     {
//         Vector3 velocity = this.GetComponent<Rigidbody>().velocity;
//
//         if (!steppingUp)
//         {
//             //Filter through the ContactPoints to see if we're grounded and to see if we can step up
//             ContactPoint groundCP = default(ContactPoint);
//             grounded = FindGround(out groundCP, allCPs);
//
//             Vector3 stepUpOffset = default(Vector3);
//             bool stepUp = false;
//             if (grounded)
//                 stepUp = FindStep(out stepUpOffset, allCPs, groundCP, velocity);
//
//             //Steps
//             if (stepUp)
//             {
//                 stepUpOffset += Vector3.up * .1f;
//                 steppingUp = true;
//                 halfStepOffset = .5f * stepUpOffset;
//                 //this.GetComponent<Rigidbody>().position += stepUpOffset;
//                 this.GetComponent<Rigidbody>().position += halfStepOffset;
//                 this.GetComponent<Rigidbody>().velocity = lastVelocity;
//             }
//         }
//         else
//         {
//             grounded = false;
//             this.GetComponent<Rigidbody>().position += halfStepOffset;
//             this.GetComponent<Rigidbody>().velocity = lastVelocity;
//
//             steppingUp = false;
//         }
//
//         allCPs.Clear();
//         lastVelocity = velocity;
//     }
//
//     public bool CheckGrounded()
//     {
//         bool found = false;
//         foreach (ContactPoint cp in allCPs)
//         {
//             //Pointing with some up direction
//             if (cp.normal.y == 1)
//             {
//                 found = true;
//             }
//         }
//
//         return found;
//     }
//
//     private void OnCollisionEnter(Collision collision)
//     {
//         allCPs.AddRange(collision.contacts);
//     }
//
//     void OnCollisionStay(Collision col)
//     {
//         allCPs.AddRange(col.contacts);
//     }
//
//     /// Finds the MOST grounded (flattest y component) ContactPoint
//     /// \param allCPs List to search
//     /// \param groundCP The contact point with the ground
//     /// \return If grounded
//     bool FindGround(out ContactPoint groundCP, List<ContactPoint> allCPs)
//     {
//         groundCP = default(ContactPoint);
//         bool found = false;
//         foreach (ContactPoint cp in allCPs)
//         {
//             //Pointing with some up direction
//             if (cp.normal.y == 1 && (found == false || cp.normal.y > groundCP.normal.y))
//             {
//                 groundCP = cp;
//                 found = true;
//             }
//         }
//
//         return found;
//     }
//
//     /// Find the first step up point if we hit a step
//     /// \param allCPs List to search
//     /// \param stepUpOffset A Vector3 of the offset of the player to step up the step
//     /// \return If we found a step
//     bool FindStep(out Vector3 stepUpOffset, List<ContactPoint> allCPs, ContactPoint groundCP, Vector3 currVelocity)
//     {
//         stepUpOffset = default(Vector3);
//
//         //No chance to step if the player is not moving
//         Vector2 velocityXZ = new Vector2(currVelocity.x, currVelocity.z);
//         if (velocityXZ.sqrMagnitude < 0.0001f)
//             return false;
//
//         foreach (ContactPoint cp in allCPs)
//         {
//             bool test = ResolveStepUp(out stepUpOffset, cp, groundCP, currVelocity);
//             if (test)
//                 return test;
//         }
//
//         return false;
//     }
//
//     /// Takes a contact point that looks as though it's the side face of a step and sees if we can climb it
//     /// \param stepTestCP ContactPoint to check.
//     /// \param groundCP ContactPoint on the ground.
//     /// \param stepUpOffset The offset from the stepTestCP.point to the stepUpPoint (to add to the player's position so they're now on the step)
//     /// \return If the passed ContactPoint was a step
//     bool ResolveStepUp(out Vector3 stepUpOffset, ContactPoint stepTestCP, ContactPoint groundCP, Vector3 velocity)
//     {
//         stepUpOffset = default(Vector3);
//         Collider stepCol = stepTestCP.otherCollider;
//
//
//         //( 1 ) Check if the contact point normal matches that of a step (y close to 0)
//         if (Mathf.Abs(stepTestCP.normal.y) >= 0.01f)
//         {
//             return false;
//         }
//
//         //( 2 ) Make sure the contact point is low enough to be a step
//         if (!(stepTestCP.point.y - groundCP.point.y < maxStepHeight))
//         {
//             return false;
//         }
//
//         //( 3 ) Check to see if there's actually a place to step in front of us
//         //Fires one Raycast
//         RaycastHit hitInfo;
//         float stepHeight = groundCP.point.y + maxStepHeight + 0.0001f;
//         Vector3 stepTestInvDir = new Vector3(-stepTestCP.normal.x, 0, -stepTestCP.normal.z).normalized;
//         Vector3 origin = new Vector3(stepTestCP.point.x, stepHeight, stepTestCP.point.z) +
//                          (stepTestInvDir * stepSearchOvershoot);
//         Vector3 direction = Vector3.down;
//         if (!(Physics.Raycast(new Ray(origin, direction), out hitInfo, maxStepHeight)))
//         {
//             return false;
//         }
//
//
//         RaycastHit newHit;
//         //( 4 ) Make sure nothing is in the way of that step
//         if (Physics.Raycast(new Ray(origin, Vector3.up), out newHit, 1.5f))
//         {
//             if (!newHit.collider.CompareTag("Player"))
//             {
//                 return false;
//             }
//         }
//
//         //We have enough info to calculate the points
//         Vector3 stepUpPoint = new Vector3(stepTestCP.point.x, hitInfo.point.y + 0.0001f, stepTestCP.point.z) +
//                               (stepTestInvDir * stepSearchOvershoot);
//
//         if (!(world[Mathf.FloorToInt(stepUpPoint.x), Mathf.FloorToInt(stepUpPoint.y),
//                 Mathf.FloorToInt(stepUpPoint.z)] == 44))
//         {
//             if (!(world[Mathf.FloorToInt(transform.position.x), Mathf.FloorToInt(transform.position.y - 1),
//                     Mathf.FloorToInt(transform.position.z)] == 44))
//             {
//                 //  Debug.Log("Block id is: " + world[Mathf.FloorToInt(stepUpPoint.x), Mathf.FloorToInt(stepUpPoint.y), Mathf.FloorToInt(stepUpPoint.z)]);
//                 return false;
//             }
//         }
//
//         if (!(_SteppableBlockIds.Contains(world[Mathf.FloorToInt(stepUpPoint.x), Mathf.FloorToInt(stepUpPoint.y + 1),
//                 Mathf.FloorToInt(stepUpPoint.z)]) && _SteppableBlockIds.Contains(world[Mathf.FloorToInt(stepUpPoint.x),
//                 Mathf.FloorToInt(stepUpPoint.y + 1.4f), Mathf.FloorToInt(stepUpPoint.z)])))
//         {
//             //Debug.Log("Not air");
//             return false;
//         }
//
//         Vector3 stepUpPointOffset = stepUpPoint - new Vector3(stepTestCP.point.x, groundCP.point.y, stepTestCP.point.z);
//
//         //We passed all the checks! Calculate and return the point!
//         stepUpOffset = stepUpPointOffset;
//         return true;
//     }
// }