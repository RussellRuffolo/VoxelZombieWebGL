using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Client
{
    public abstract class BasePlayerController : MonoBehaviour
    {
        public GameObject rotationTracker;

        public Animator PlayerAnimator;

        protected Dictionary<MoveState, IMoveState> MoveStates = new Dictionary<MoveState, IMoveState>()
        {
            {MoveState.basicGrounded, new BasicGroundedMoveState()},
            {MoveState.idle, new IdleMoveState()},
            {MoveState.basicAir, new BasicAirMoveState()},
            {MoveState.basicJump, new BasicJumpMoveState()},
            {MoveState.waterSwimming, new WaterSwimmingMoveState()},
            {MoveState.waterFalling, new WaterFallingMoveState()},
            {MoveState.lavaSwimming, new LavaSwimmingMoveState()},
            {MoveState.waterJump, new WaterJumpMoveState()},
            {MoveState.basicSliding, new BasicSlidingMoveState()},
            {MoveState.slideJump, new SlideJumpMoveState()},
            {MoveState.basicCrawling, new BasicCrawlingMoveState()},
            {MoveState.slideAir, new SlideAirMoveState()},
            {MoveState.slideLand, new SlideLandMoveState()},
            {MoveState.wallJump, new WallJumpMoveState()},
            {MoveState.groundedHalfBlock, new GroundedHalfBlockMoveState()},
            {MoveState.crouchJump, new CrouchJumpMoveState()},
            {MoveState.aerialHalfBlock, new AerialHalfBlockMoveState()},
            {MoveState.wallHang, new WallHangMoveState()},
            {MoveState.postJump, new PostJumpMoveState()},
            {MoveState.postWallJump, new PostWallJumpMoveState()}
        };

        protected Dictionary<InputState, IInputState> InputStates = new Dictionary<InputState, IInputState>()
        {
            {InputState.Standard, new StandardInputState()},
            {InputState.Menu, new MenuInputState()}
        };

        protected float rotationY = 0f;
        private float rotationX = 0f;

        public Text InputText;
        public Image LogPanel;
        public Image InputPanel;
        public Text DisplayedLogs;


        [SerializeField] public BoxCollider standingCollider;

        [SerializeField] public BoxCollider slidingCollider;

        public MoveState MoveState;
        public InputState InputState;

        private IInputState CurrentInputState;
        ClientChatManager chatClient;
        public ClientCameraController camController;

        protected ClientInputs[] LoggedInputs = new ClientInputs[1024];
        private PlayerState[] LoggedStates = new PlayerState[1024];

        protected int lastReceivedStateTick = 0;

        private float timer = 0.0f;
        protected int tickNumber = 0;

        public Rigidbody playerRB;

        private ClientInputs EmptyInputs = new ClientInputs();


        private void Awake()
        {
            playerRB = GetComponent<Rigidbody>();
            chatClient = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientChatManager>();
            playerRB = GetComponent<Rigidbody>();

     

            for (int i = 0; i < 1024; i++)
            {
                LoggedInputs[i] = new ClientInputs();
                LoggedStates[i] = new PlayerState();
            }

            ((MenuInputState) InputStates[InputState.Menu]).MenuCanvas =
                GameObject.FindGameObjectWithTag("MenuCanvas").GetComponent<Canvas>();

            InputState = InputState.Standard;
            CurrentInputState = InputStates[InputState];

            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;

            OnAwake();
        }

        private void Start()
        {
            BaseChatInputState chatInputState = (BaseChatInputState) InputStates[InputState.Chat];

            chatInputState.inputPanel = InputPanel;
            chatInputState.inputText = InputText;
            chatInputState.logPanel = LogPanel;
            chatInputState.DisplayedLogs = DisplayedLogs;

            chatInputState.vClient = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelClient>();
            
            foreach (IMoveState moveState in MoveStates.Values)
            {
                moveState.PlayerAnimator = PlayerAnimator;
            }
        }

        protected abstract void OnAwake();

        private int currentBufferIndex;

        // Update is called once per frame
        void Update()
        {
            GetMouseRotation();

            //current inputs are the player inputs for this frame
            ClientInputs clientInputs = GetInputs();

            InputState newState = InputStates[InputState].CheckInputState(clientInputs);


            // if (CurrentMoveState != MoveStates[state])
            // {
            //     CurrentMoveState.Exit();
            //     CurrentMoveState = MoveStates[state];
            //     CurrentMoveState.Enter();
            // }
            //
            // currentVelocity = CurrentMoveState.GetVelocity(playerRB, currentInputs, allCPs, lastVelocity, lastPosition);

            if (newState != InputState)
            {
                InputState = newState;
                CurrentInputState.Exit();
                CurrentInputState = InputStates[newState];
                CurrentInputState.Enter();
            }

            CurrentInputState.ApplyInputs(clientInputs);

            if (InputState == InputState.Standard)
            {
                Simulate(clientInputs);
            }
            else
            {
                Simulate(EmptyInputs);
            }


            //Send all unconfirmed inputs to the server
            SendInputs();
        }

        private void Simulate(ClientInputs clientInputs)
        {
            //run the physics for as many ticks fit since last frame
            timer += Time.deltaTime;

            while (timer >= Time.fixedDeltaTime)
            {
                timer -= Time.fixedDeltaTime;

                currentBufferIndex = tickNumber % 1024;

                //store the state and inputs in circular buffers
                LoggedStates[currentBufferIndex].position = transform.position;
                LoggedStates[currentBufferIndex].velocity = lastVelocity;
                LoggedStates[currentBufferIndex].Tick = tickNumber;

                LoggedInputs[currentBufferIndex] = clientInputs;
                LoggedInputs[currentBufferIndex].TickNumber = tickNumber;

                //Apply the inputs to change player velocity
                ApplyInputs(playerRB, clientInputs);

                //Simulate one tick and increment the tick number
                Physics.Simulate(Time.fixedDeltaTime);
                tickNumber++;
            }
        }

        //sends all inputs to the server that the server hasn't yet confirmed it has run
        protected abstract void SendInputs();


        void GetMouseRotation()
        {
            rotationY = camController.rotationY;
            rotationTracker.transform.eulerAngles = new Vector3(0, rotationY, 0);
        }

        //samples user input to creat the ClientInputs object for this tick
        ClientInputs GetInputs()
        {
            Vector3 playerForward =
                new Vector3(rotationTracker.transform.forward.x, 0, rotationTracker.transform.forward.z);
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


            bool jump = Input.GetKey(KeyCode.Space);

            bool slide = Input.GetKey(KeyCode.LeftShift);

            bool chat = Input.GetKeyDown(KeyCode.T) || Input.GetKeyDown(KeyCode.Return);

            bool menu = Input.GetKeyDown(KeyCode.M);

            //can't move or jump if chatting
            if (chatClient.chatEnabled)
            {
                speedVector = Vector3.zero;
                jump = false;
            }

            int inputTickNumber = tickNumber;

            ClientInputs currentInputs =
                new ClientInputs(speedVector, playerForward, jump, slide, menu, chat, inputTickNumber);
            return currentInputs;
        }

        public abstract void ApplyInputs(Rigidbody playerRB, ClientInputs currentInputs);
        public abstract bool CheckGrounded();
        public Vector3 lastVelocity = Vector3.zero;

        private int bufferIndex;
        private int rewindTickNumber;
        private Vector3 predictionError;

        private ClientInputs currentInputs;

        //This is called when a server state packet arrives
        //The server state is compared to the saved client state and if it doesn't match
        //The client current client state is redetermined using the server state
        public void ClientPrediction(Vector3 serverPosition, int ClientTickNumber, Vector3 serverVelocity)
        {
            lastReceivedStateTick = ClientTickNumber;

            bufferIndex = (ClientTickNumber) % 1024;

            if (LoggedStates[bufferIndex] == null)
            {
                LoggedStates[bufferIndex] = new PlayerState(serverPosition, serverVelocity, ClientTickNumber);
            }


            //check error between position/velocity at the tick supplied
            predictionError = LoggedStates[bufferIndex].position - serverPosition;
            if (predictionError.sqrMagnitude > 0.001f)
            {
                //rewind to the given tick and replay to current tick
                transform.position = serverPosition;
                lastVelocity = serverVelocity;

                rewindTickNumber = ClientTickNumber;
                //Simulate each tick until the current tick is reached
                while (rewindTickNumber < tickNumber)
                {
                    bufferIndex = rewindTickNumber % 1024;
                    currentInputs = LoggedInputs[bufferIndex];

                    ApplyInputs(playerRB, currentInputs);

                    LoggedStates[rewindTickNumber % 1024] =
                        new PlayerState(transform.position, lastVelocity, rewindTickNumber);

                    Physics.Simulate(Time.fixedDeltaTime);

                    rewindTickNumber++;
                }
            }
        }
    }
}