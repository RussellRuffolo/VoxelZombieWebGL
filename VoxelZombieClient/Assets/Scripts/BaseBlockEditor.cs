using UnityEngine;

namespace Client
{
    public abstract class BaseBlockEditor : MonoBehaviour
    {
        private Camera playerCam;
        public float editDistance;
        public float stepDistance;
        private World currentWorld;
        private ClientVoxelEngine vEngine;

        private ushort placeBlockTag = 1;

        public LineRenderer blockOutline;

        private Vector3[] _frontVertices = new[]
        {
            new Vector3(0, 0, -.05f),
            new Vector3(1, 0, -.05f),
            new Vector3(1, 1, -.05f),
            new Vector3(0, 1, -.05f),
            new Vector3(0, 0, -.05f)
        };

        private Vector3[] _topVertices = new[]
        {
            new Vector3(1, 1.05f, 0),
            new Vector3(0, 1.05f, 0),
            new Vector3(0, 1.05f, 1),
            new Vector3(1, 1.05f, 1),
            new Vector3(1, 1.05f, 0)
        };


        private Vector3[] _topHalfVertices = new[]
        {
            new Vector3(1, .55f, 0),
            new Vector3(0, .55f, 0),
            new Vector3(0, .55f, 1),
            new Vector3(1, .55f, 1),
            new Vector3(1, .55f, 0)
        };

        private Vector3[] _rightVertices = new[]
        {
            new Vector3(1.05f, 0, 0),
            new Vector3(1.05f, 1, 0),
            new Vector3(1.05f, 1, 1),
            new Vector3(1.05f, 0, 1),
            new Vector3(1.05f, 0, 0)
        };

        private Vector3[] _leftVertices = new[]
        {
            new Vector3(-.05f, 0, 0),
            new Vector3(-.05f, 1, 0),
            new Vector3(-.05f, 1, 1),
            new Vector3(-.05f, 0, 1),
            new Vector3(-.05f, 0, 0)
        };

        private Vector3[] _backVertices = new[]
        {
            new Vector3(0, 1, 1.05f),
            new Vector3(1, 1, 1.05f),
            new Vector3(1, 0, 1.05f),
            new Vector3(0, 0, 1.05f),
            new Vector3(0, 1, 1.05f)
        };

        private Vector3[] _bottomVertices = new[]
        {
            new Vector3(0, -.05f, 0),
            new Vector3(1, -.05f, 0),
            new Vector3(1, -.05f, 1),
            new Vector3(0, -.05f, 1),
            new Vector3(0, -.05f, 0)
        };

        private Vector3 selectionPosition;
        private Vector3 selectionNormal;

        private Vector3 halfBlockNormal = new Vector3(0, .1f, 0);

        // Start is called before the first frame update
        void Start()
        {
            playerCam = GetComponentInChildren<Camera>();
            vEngine = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientVoxelEngine>();
            currentWorld = vEngine.world;

            blockOutline.positionCount = 0;

            OnStart();
        }

        protected abstract void OnStart();

        // Update is called once per frame
        void Update()
        {
            ShowSelection();

            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                BreakBlock();
            }

            if (Input.GetKeyDown(KeyCode.Mouse1))
            {
                PlaceBlock();
            }

            if (Input.GetKeyDown(KeyCode.Mouse2))
            {
                SelectBlock();
            }
        }

        void ShowSelection()
        {
            FindBlock(playerCam.transform.position, playerCam.transform.forward);

            int x = (int) selectionPosition.x;
            int y = (int) selectionPosition.y;
            int z = (int) selectionPosition.z;

            Vector3 blockOffset = new Vector3(selectionPosition.x, selectionPosition.y, selectionPosition.z);
            blockOutline.positionCount = 5;
            if (selectionNormal == Vector3.up)
            {
                if (currentWorld[x, y, z] == 44)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        blockOutline.SetPosition(i, blockOffset + _topHalfVertices[i]);
                    }


                    selectionPosition = new Vector3(x, y, z);
                    selectionNormal = halfBlockNormal;

                    return;
                }
                else
                {
                    for (int i = 0; i < 5; i++)
                    {
                        blockOutline.SetPosition(i, blockOffset + _topVertices[i]);
                    }
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
            Vector3 currentPosition = startPosition;

            float distanceStepped = 0;

            int currentBlock;
            Vector3 lastRaycastedTarget = new Vector3(-1, 0, 0);


            while (distanceStepped < editDistance)
            {
                currentPosition += direction * stepDistance;
                distanceStepped += stepDistance;


                currentBlock = CheckBlock(currentPosition);

                int x = Mathf.FloorToInt(currentPosition.x);
                int y = Mathf.FloorToInt(currentPosition.y);
                int z = Mathf.FloorToInt(currentPosition.z);


                if (currentBlock == 1)
                {
                    selectionPosition = new Vector3(x, y, z);

                    FindNormal(currentPosition, -direction);

                    return;
                }
                else if (currentBlock == 2 && lastRaycastedTarget != new Vector3(x, y, z))
                {
                    RaycastHit[] hitData = Physics.RaycastAll(
                        playerCam.transform.position - playerCam.transform.forward, playerCam.transform.forward,
                        editDistance);

                    foreach (RaycastHit hit in hitData)
                    {
                        if (hit.collider.CompareTag("Model"))
                        {
                            selectionPosition = new Vector3(x, y, z);
                            FindNormal(currentPosition, -direction);
                            return;
                        }
                    }

                    lastRaycastedTarget = new Vector3(x, y, z);
                }
            }

            //If no block found
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

                int block = CheckBlock(currentPosition);
                if (block == 0)
                {
                    int x = Mathf.FloorToInt(currentPosition.x);
                    int y = Mathf.FloorToInt(currentPosition.y);
                    int z = Mathf.FloorToInt(currentPosition.z);

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
                else if (block == 3)
                {
                    selectionNormal = Vector3.up;
                }
            }
        }

        int CheckBlock(Vector3 checkPosition)
        {
            int x = Mathf.FloorToInt(checkPosition.x);
            int y = Mathf.FloorToInt(checkPosition.y);
            int z = Mathf.FloorToInt(checkPosition.z);

            ushort blockTag = currentWorld[x, y, z];


            //untargetable blocks: air, water, lava, outside of map
            if (blockTag == 0 || blockTag == 9 || blockTag == 11 || blockTag == 100)
            {
                return 0;
            }

            //looking down on a halfblock
            if (blockTag == 44)
            {
                if (checkPosition.y - Mathf.Floor(checkPosition.y) > .5f)
                    return 3;
            }

            //modeled blocks: flowers, mushorooms
            if (blockTag == 37 || blockTag == 38 || blockTag == 39 || blockTag == 40)
            {
                return 2;
            }

            //any targetable block
            return 1;
        }

        void BreakBlock()
        {
            if (selectionNormal != Vector3.zero)
            {
                int x = (int) selectionPosition.x;
                int y = (int) selectionPosition.y;
                int z = (int) selectionPosition.z;

                ushort breakSpotTag = currentWorld[x, y, z];

                if (breakSpotTag == 0)
                {
                    Debug.Log("Error, no block there");
                    return;
                }

                //bedrock, water, and lava can not be broken
                if (breakSpotTag == 7 || breakSpotTag == 9 || breakSpotTag == 11)
                {
                    Debug.Log("Can't break water lava or bedrock");
                    return;
                }

                OnBreakBlock((ushort) x, (ushort) y, (ushort) z);


                return;
            }
        }

        protected abstract void OnBreakBlock(ushort x, ushort y, ushort z);

        void PlaceBlock()
        {
            if (selectionNormal == halfBlockNormal)
            {
                int x = (int) (selectionPosition.x);
                int y = (int) (selectionPosition.y);
                int z = (int) (selectionPosition.z);

                if (placeBlockTag == 44)
                {
                    OnPlaceBlock((ushort) x, (ushort) y, (ushort) z, 43);
                }
                else
                {
                    y++;
                    ushort placeSpotTag = currentWorld[x, y, z];

                    if (placeSpotTag == 0 || placeSpotTag == 9 || placeSpotTag == 11)
                    {
                        OnPlaceBlock((ushort) x, (ushort) y, (ushort) z, placeBlockTag);
                    }
                }
            }
            else if (selectionNormal != Vector3.zero)
            {
                int x = (int) (selectionPosition.x + selectionNormal.x);
                int y = (int) (selectionPosition.y + selectionNormal.y);
                int z = (int) (selectionPosition.z + selectionNormal.z);

                ushort placeSpotTag = currentWorld[x, y, z];

                if (placeSpotTag == 0 || placeSpotTag == 9 || placeSpotTag == 11)
                {
                    OnPlaceBlock((ushort) x, (ushort) y, (ushort) z, placeBlockTag);
                }
            }
        }

        protected abstract void OnPlaceBlock(ushort x, ushort y, ushort z, ushort blockTag);

        void SelectBlock()
        {
            if (selectionNormal != Vector3.zero)
            {
                int x = (int) selectionPosition.x;
                int y = (int) selectionPosition.y;
                int z = (int) selectionPosition.z;

                if (x < vEngine.Length && y < vEngine.Height && z < vEngine.Width)
                {
                    ushort selectTag = currentWorld[x, y, z];

                    if (selectTag != 7 && selectTag != 0 && selectTag != 9 && selectTag != 11)
                    {
                        placeBlockTag = selectTag;
                    }
                }
            }
        }
    }
}