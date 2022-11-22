using UnityEngine;

namespace Client
{
    public class PlayerState
    {
        public Vector3 position;
        public Vector3 velocity;
        public int Tick;

        public PlayerState()
        {
            position = Vector3.zero;
            velocity = Vector3.zero;
            Tick = 0;
        }

        public PlayerState(Vector3 pos, Vector3 vel, int tick)
        {
            position = pos;
            velocity = vel;
            Tick = tick;
        }
    }
}