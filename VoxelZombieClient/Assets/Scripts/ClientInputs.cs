using UnityEngine;

namespace Client
{
    public class ClientInputs
    {
        public Vector3 MoveVector;
        public bool Jump;
        public int TickNumber;

        public ClientInputs()
        {
            MoveVector = Vector3.zero;
            Jump = false;
            TickNumber = 0;
        }

        public ClientInputs(Vector3 moveVector, bool jump, int tickNumber)
        {
            MoveVector = moveVector;
            Jump = jump;
            TickNumber = tickNumber;
        }
    }
}