using System;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public abstract class BaseBlockEditor : MonoBehaviour
    {
        protected Camera playerCam;
        public float editDistance;
        public float stepDistance;
        protected IWorld currentWorld;
        private IVoxelEngine vEngine;
        // Todo (Russell): Why does this have state? Can we just make this a local variable?
        private Voxel placeBlockTag = Voxel.Stone;

        public LineRenderer blockOutline;

        public ParticleSystem blockBreakParticleSystem;

        public GameObject GrenadeModel;



        private Vector3[] _frontVertices = new[]
        {
            new Vector3(0, 0, -.05f),
            new Vector3(.5f, 0, -.05f),
            new Vector3(.5f, .5f, -.05f),
            new Vector3(0, .5f, -.05f),
            new Vector3(0, 0, -.05f)
        };

        private Vector3[] _topVertices = new[]
        {
            new Vector3(.5f, .55f, 0),
            new Vector3(0, .55f, 0),
            new Vector3(0, .55f, .5f),
            new Vector3(.5f, .55f, .5f),
            new Vector3(.5f, .55f, 0)
        };


        private Vector3[] _topHalfVertices = new[]
        {
            new Vector3(.5f, .55f, 0),
            new Vector3(0, .55f, 0),
            new Vector3(0, .55f, .5f),
            new Vector3(.5f, .55f, .5f),
            new Vector3(.5f, .55f, 0)
        };

        private Vector3[] _rightVertices = new[]
        {
            new Vector3(.55f, 0, 0),
            new Vector3(.55f, .5f, 0),
            new Vector3(.55f, .5f, .5f),
            new Vector3(.55f, 0, .5f),
            new Vector3(.55f, 0, 0)
        };

        private Vector3[] _leftVertices = new[]
        {
            new Vector3(-.05f, 0, 0),
            new Vector3(-.05f, .5f, 0),
            new Vector3(-.05f, .5f, .5f),
            new Vector3(-.05f, 0, .5f),
            new Vector3(-.05f, 0, 0)
        };

        private Vector3[] _backVertices = new[]
        {
            new Vector3(0, .5f, .55f),
            new Vector3(.5f, .5f, .55f),
            new Vector3(.5f, 0, .55f),
            new Vector3(0, 0, .55f),
            new Vector3(0, .5f, .55f)
        };

        private Vector3[] _bottomVertices = new[]
        {
            new Vector3(0, -.05f, 0),
            new Vector3(.5f, -.05f, 0),
            new Vector3(.5f, -.05f, .5f),
            new Vector3(0, -.05f, .5f),
            new Vector3(0, -.05f, 0)
        };

        protected Dictionary<ActionState, IActionState> ActionStates = new Dictionary<ActionState, IActionState>()
        {
        };

        protected ActionState ActionState;

        protected IActionState CurrentActionState;

        private Vector3 selectionPosition;

        private ushort selectionX, selectionY, selectionZ;

        private Vector3 selectionNormal;

        public VoxelClient vClient;

        private Vector3 halfBlockNormal = new Vector3(0, .1f, 0);

        // Start is called before the first frame update
        void Start()
        {
            playerCam = GetComponentInChildren<Camera>();
            vEngine = GameObject.FindGameObjectWithTag("Network").GetComponent<IVoxelEngine>();
            currentWorld = vEngine.World;


            GrenadeModel.SetActive(false);

            ActionState = ActionState.BlockEdit;

            blockOutline.positionCount = 0;

            OnStart();
        }

        protected abstract void OnStart();

        public ActionInputs GetActionInputs(Rigidbody playerRb)
        {
            Vector3 playerPosition = playerRb.transform.position;
            Vector3 camForward = playerCam.transform.forward;
            return new ActionInputs(Input.GetKeyDown(KeyCode.Alpha1), Input.GetKeyDown(KeyCode.Alpha2),
                Input.GetKeyDown(KeyCode.Alpha3), Input.GetMouseButtonDown(0), Input.GetMouseButtonDown(1),
                Input.GetMouseButtonDown(2), playerPosition.x, playerPosition.y,
                playerPosition.z, camForward.x, camForward.y,
                camForward.z
            );
        }

        

        public void ProcessActionInputs(Rigidbody playerRb)
        {
            ActionInputs inputs = GetActionInputs(playerRb);

            ActionState newState = ActionStates[ActionState].CheckActionState(inputs);

            if (newState != ActionState)
            {
                ActionState = newState;
                CurrentActionState.Exit();
                CurrentActionState = ActionStates[newState];
                CurrentActionState.Enter();
            }

            CurrentActionState.ApplyInputs(inputs, playerRb);

            SendActionInputs(inputs);
        }

        protected abstract void SendActionInputs(ActionInputs inputs);


        public void ApplyInputsSinglePlayer(ActionInputs inputs)
        {
            ShowSelection();

            if (inputs.MouseZero)
            {
                BreakBlock();
            }

            if (inputs.MouseOne)
            {
                PlaceBlock();
            }

            if (inputs.MouseTwo)
            {
                SelectBlock();
            }
        }

        public void ApplyInputsClient(ActionInputs inputs)
        {
            ShowSelection();

            if (inputs.MouseZero)
            {
                BreakBlock();
            }

            if (inputs.MouseOne)
            {
                PlaceBlock();
            }

            if (inputs.MouseTwo)
            {
                SelectBlock();
            }
        }


        public void OnExit()
        {
            blockOutline.positionCount = 0;
        }

        void ShowSelection()
        {
            FindBlock(playerCam.transform.position, playerCam.transform.forward);


            Vector3 blockOffset = selectionPosition;
//            Debug.Log("Block offset is: " + blockOffset);
            blockOutline.positionCount = 5;
            if (selectionNormal == Vector3.up)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _topVertices[i]);
                }
            }
            else if (selectionNormal == Vector3.back)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _frontVertices[i]);
                }
            }
            else if (selectionNormal == Vector3.right)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _rightVertices[i]);
                }
            }
            else if (selectionNormal == Vector3.left)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _leftVertices[i]);
                }
            }
            else if (selectionNormal == Vector3.forward)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _backVertices[i]);
                }
            }
            else if (selectionNormal == Vector3.down)
            {
                for (int i = 0; i < 5; i++)
                {
                    blockOutline.SetPosition(i, blockOffset + _bottomVertices[i]);
                }
            }
        }

        void FindBlock(Vector3 startPosition, Vector3 direction)
        {
            var hits = Physics.RaycastAll(startPosition, direction, editDistance);
            foreach (var raycastHit in hits)
            {
                if (raycastHit.transform.CompareTag("Ground"))
                {
                    Vector3 testPosition = raycastHit.point + (raycastHit.point - startPosition).normalized * .01f;

                    selectionX = (ushort) (testPosition.x * 2);
                    selectionY = (ushort) (testPosition.y * 2);
                    selectionZ = (ushort) (testPosition.z * 2);
                    testPosition = new Vector3(selectionX / 2f, selectionY / 2f, selectionZ / 2f);
                    if (currentWorld.GetVoxel(testPosition.x, testPosition.y, testPosition.z).isSolid())
                    {
                        selectionPosition = testPosition;
                        selectionNormal = raycastHit.normal;
                        return;
                    }
                }
            }

            blockOutline.positionCount = 0;
            selectionPosition = Vector3.zero;
            selectionNormal = Vector3.zero;
        }

        void FindNormal(Vector3 hitPosition, Vector3 backDirection)
        {
            Vector3 currentPosition = hitPosition;
            float distanceStepped = 0;


            while (distanceStepped < .5f)
            {
                currentPosition += backDirection * .01f;
                distanceStepped += .01f;


                if (!CheckBlock(currentPosition))
                {
                    float x = (int) (currentPosition.x * 2) / 2f;
                    float y = (int) (currentPosition.y * 2) / 2f;
                    float z = (int) (currentPosition.z * 2) / 2f;

                    //  Debug.Log("Normal x: " + x + " Y: " + y + " Z: " + z);
                    if (x != selectionPosition.x)
                    {
                        if (x > selectionPosition.x)
                        {
                            selectionNormal = Vector3.right;
                            return;
                        }

                        selectionNormal = Vector3.left;
                        return;
                    }
                    else if (y != selectionPosition.y)
                    {
                        if (y > selectionPosition.y)
                        {
                            selectionNormal = Vector3.up;
                            return;
                        }

                        selectionNormal = Vector3.down;
                        return;
                    }
                    else
                    {
                        if (z > selectionPosition.z)
                        {
                            selectionNormal = Vector3.forward;
                            return;
                        }

                        selectionNormal = Vector3.back;
                        return;
                    }
                }
            }
        }

        bool CheckBlock(Vector3 checkPosition)
        // Check if a block is a block is targetable
        {
            Voxel voxel = currentWorld.GetVoxel(checkPosition.x, checkPosition.y, checkPosition.z);
            if (voxel.isNonbreakable() | voxel.isVegetation())
            {
                return false;
            }
            return true;
        }

        void BreakBlock()
        {
            if (selectionNormal == Vector3.zero) return;
            
            int x = (int) selectionPosition.x;
            int y = (int) selectionPosition.y;
            int z = (int) selectionPosition.z;

            Voxel voxel = currentWorld.GetVoxel(selectionPosition.x, selectionPosition.y, selectionPosition.z);
            if (voxel.isNonbreakable())
            {
                return;
            }

            blockBreakParticleSystem.GetComponent<Renderer>().material =
                vEngine.materialList[(int) (voxel - 1)];
            blockBreakParticleSystem.transform.position = selectionPosition;
            blockBreakParticleSystem.Play();
            //
            //
            OnBreakBlock(selectionX, selectionY, selectionZ);
        
        }

        protected abstract void OnBreakBlock(ushort x, ushort y, ushort z);

        void PlaceBlock()
        {
            if (selectionNormal != Vector3.zero)
            {
                ushort x = (ushort) (selectionX + selectionNormal.x);
                ushort y = (ushort) (selectionY + selectionNormal.y);
                ushort z = (ushort) (selectionZ + selectionNormal.z);

                Voxel placeSpotTag = currentWorld.GetVoxel(x, y, z);

                if (placeSpotTag.isNonsolid())
                {
                    OnPlaceBlock(x, y, z, placeBlockTag);
                }
            }
        }

        protected abstract void OnPlaceBlock(ushort x, ushort y, ushort z, Voxel blockTag);

        void SelectBlock()
        {
            if (selectionNormal != Vector3.zero)
            {
                int x = (int) selectionPosition.x;
                int y = (int) selectionPosition.y;
                int z = (int) selectionPosition.z;

                if (x < vEngine.Length && y < vEngine.Height && z < vEngine.Width)
                {
                    Voxel voxel = currentWorld.GetVoxel(selectionPosition.x, selectionPosition.y, selectionPosition.z);

                    if (!voxel.isNonplaceable())
                    {
                        placeBlockTag = voxel;
                    }
                }
            }
        }
    }
}