using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public abstract class BasePlayerController : MonoBehaviour
    {
        public GameObject rotationTracker;


        protected Dictionary<MoveState, IMoveState> MoveStates = new Dictionary<MoveState, IMoveState>()
        {
            {MoveState.basicGrounded, new BasicGroundedMoveState()},
            {MoveState.basicAir, new BasicAirMoveState()},
            {MoveState.basicJump, new BasicJumpMoveState()},
            {MoveState.waterSwimming, new WaterSwimmingMoveState()},
            {MoveState.waterFalling, new WaterFallingMoveState()},
            {MoveState.lavaSwimming, new LavaSwimmingMoveState()},
            {MoveState.waterJump, new WaterJumpMoveState()},
            {MoveState.basicSliding, new BasicSlidingMoveState()},
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


        protected float rotationY = 0f;
        private float rotationX = 0f;

        public ushort moveState = 0;

        public MoveState MoveState;

        ClientChatManager chatClient;
        public ClientCameraController camController;

        protected ClientInputs[] LoggedInputs = new ClientInputs[1024];
        private PlayerState[] LoggedStates = new PlayerState[1024];

        protected int lastReceivedStateTick = 0;

        private float timer = 0.0f;
        protected int tickNumber = 0;

        public Rigidbody playerRB;

        private void Awake()
        {
            playerRB = GetComponent<Rigidbody>();
            chatClient = GameObject.FindGameObjectWithTag("Network").GetComponent<ClientChatManager>();
            playerRB = GetComponent<Rigidbody>();

            OnAwake();
        }

        protected abstract void OnAwake();


        // Update is called once per frame
        void Update()
        {
            GetMouseRotation();

            //current inputs are the player inputs for this frame
            ClientInputs currentInputs = GetInputs();

            //run the physics for as many ticks fit since last frame
            timer += Time.deltaTime;

            while (timer >= Time.fixedDeltaTime)
            {
                timer -= Time.fixedDeltaTime;

                int bufferIndex = tickNumber % 1024;

                //store the state and inputs in circular buffers
                LoggedStates[bufferIndex] = new PlayerState(transform.position, playerRB.velocity, tickNumber);

                LoggedInputs[bufferIndex] = new ClientInputs(currentInputs.MoveVector, currentInputs.PlayerForward,
                    currentInputs.Jump,
                    currentInputs.Slide, tickNumber);

                
                //Apply the inputs to change player velocity
                ApplyInputs(playerRB, currentInputs);

                //Simulate one tick and increment the tick number
                Physics.Simulate(Time.fixedDeltaTime);
                tickNumber++;
            }

            //Send all unconfirmed inputs to the server
            SendInputs();
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

            //can't move or jump if chatting
            if (chatClient.chatEnabled)
            {
                speedVector = Vector3.zero;
                jump = false;
            }

            int inputTickNumber = tickNumber;

            ClientInputs currentInputs = new ClientInputs(speedVector, playerForward, jump, slide, inputTickNumber);
            return currentInputs;
        }

        public abstract void ApplyInputs(Rigidbody playerRB, ClientInputs currentInputs);
        public abstract bool CheckGrounded();

        //This is called when a server state packet arrives
        //The server state is compared to the saved client state and if it doesn't match
        //The client current client state is redetermined using the server state
        public void ClientPrediction(Vector3 serverPosition, int ClientTickNumber, Vector3 serverVelocity)
        {
            lastReceivedStateTick = ClientTickNumber;

            int bufferIndex = (ClientTickNumber) % 1024;

            if (LoggedStates[bufferIndex] == null)
            {
                LoggedStates[bufferIndex] = new PlayerState(serverPosition, serverVelocity, ClientTickNumber);
            }

            //check error between position/velocity at the tick supplied
            Vector3 positionError = LoggedStates[bufferIndex].position - serverPosition;
            if (positionError.sqrMagnitude > 0.001f)
            {
                //rewind to the given tick and replay to current tick
                transform.position = serverPosition;
                playerRB.velocity = serverVelocity;

                ushort simulMoveState = moveState;

                int rewindTickNumber = ClientTickNumber;
                //Simulate each tick until the current tick is reached
                while (rewindTickNumber < this.tickNumber)
                {
                    bufferIndex = rewindTickNumber % 1024;
                    ClientInputs currentInputs = LoggedInputs[bufferIndex];

                    ApplyInputs(playerRB, currentInputs);

                    LoggedStates[rewindTickNumber % 1024] =
                        new PlayerState(transform.position, playerRB.velocity, rewindTickNumber);

                    Physics.Simulate(Time.fixedDeltaTime);

                    rewindTickNumber++;
                }
            }
        }
    }
}