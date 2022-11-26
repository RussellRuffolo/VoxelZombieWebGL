using UnityEngine;

namespace ZombieLib
{
    public struct ClientInputs
    {
        public Vector3 MoveVector;
        public Vector3 PlayerForward;
        public int TickNumber;
        public bool Jump;
        public bool Slide;
        public bool Menu;
        public bool Chat;
        
        public ClientInputs(Vector3 moveVector, Vector3 playerForward,
            int tickNumber = 0, bool jump = false, bool slide = false,
            bool menu = false, bool chat = false)
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