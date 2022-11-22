using UnityEngine;

namespace Client
{
    public struct ClientInputs
    {
        public Vector3 MoveVector;
        public Vector3 PlayerForward;
        public bool Jump;
        public bool Slide;
        public bool Menu;
        public bool Chat;

        public int TickNumber;

        public static ClientInputs Default = new ClientInputs(
            Vector3.zero,
            Vector3.zero);


        public ClientInputs(Vector3 moveVector, Vector3 playerForward, bool jump = false, bool slide = false,
            bool menu = false, bool chat = false,
            int tickNumber = 0)
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