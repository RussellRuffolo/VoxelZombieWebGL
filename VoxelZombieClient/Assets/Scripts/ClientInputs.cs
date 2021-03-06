using UnityEngine;

namespace Client
{
    public class ClientInputs
    {
        public Vector3 MoveVector;
        public Vector3 PlayerForward;
        public bool Jump;
        public bool Slide;
        public bool Menu;
        public bool Chat;
        public int TickNumber;

        public ClientInputs()
        {
            MoveVector = Vector3.zero;
            PlayerForward = Vector3.zero;
            Jump = false;
            Slide = false;
            TickNumber = 0;
        }

        public ClientInputs(Vector3 moveVector, Vector3 playerForward, bool jump, bool slide, bool menu, bool chat,
            int tickNumber)
        {
            MoveVector = moveVector;
            PlayerForward = playerForward;
            Jump = jump;
            Slide = slide;
            Menu = menu;
            Chat = chat;
            TickNumber = tickNumber;
        }
    }
}