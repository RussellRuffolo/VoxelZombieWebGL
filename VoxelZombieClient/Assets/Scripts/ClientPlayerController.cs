using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class ClientPlayerController : BasePlayerController
    {
        VoxelClient vClient;

        protected override void OnAwake()
        {
            vClient = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelClient>();
        }

        protected override void SendInputs()
        {
            //last received state tick is the tick number of the last state received from the server
            int index = lastReceivedStateTick % 1024;
            if (lastReceivedStateTick < tickNumber - 1)
            {
                int numInputs = (tickNumber - 1) - lastReceivedStateTick;

                RtcMessage inputMessage = new RtcMessage(Tags.INPUT_TAG);
                inputMessage.WriteInt(numInputs);
                inputMessage.WriteFloat(rotationY);

                for (int i = index; i < index + numInputs; i++)
                {
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.x);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.y);
                    inputMessage.WriteFloat(LoggedInputs[i % 1024].MoveVector.z);

                    inputMessage.WriteUShort(LoggedInputs[i % 1024].Jump ? (ushort) 1 : (ushort) 0);

                    inputMessage.WriteInt(LoggedInputs[i % 1024].TickNumber);
                }

                vClient.SendUnreliableMessage(inputMessage);
            }
            else
            {
                Debug.LogError("Error, received state in the future");
            }
        }
    }
}