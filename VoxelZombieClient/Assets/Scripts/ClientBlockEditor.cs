using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace Client
{
    public class ClientBlockEditor : BaseBlockEditor
    {
        private VoxelClient vClient { get; set; }

        protected override void OnStart()
        {
            vClient = GameObject.FindGameObjectWithTag("Network").GetComponent<VoxelClient>();
            ActionStates.Add(ActionState.Grenade, new ClientGrenadeActionState());

            ActionStates.Add(ActionState.BlockEdit, new ClientBlockEditActionState());

            ClientGrenadeActionState grenadeState = (ClientGrenadeActionState) ActionStates[ActionState.Grenade];

            grenadeState.GrenadeModel = GrenadeModel;

            grenadeState.cameraDirection = playerCam.transform;

            grenadeState.world = currentWorld;

            ClientBlockEditActionState bEditState =
                (ClientBlockEditActionState) ActionStates[ActionState.BlockEdit];

            bEditState.bEditor = this;

            CurrentActionState = ActionStates[ActionState];
        }

        protected override void SendActionInputs(ActionInputs inputs)
        {
            if (inputs.One || inputs.Two || inputs.Three || inputs.MouseZero || inputs.MouseOne || inputs.MouseTwo)
            {
                RtcMessage actionMessage = new RtcMessage(Tags.ACTION_TAG);
                actionMessage.WriteUShort(inputs.One ? (ushort) 1 : (ushort) 0);

                actionMessage.WriteUShort(inputs.Two ? (ushort) 1 : (ushort) 0);

                actionMessage.WriteUShort(inputs.Three ? (ushort) 1 : (ushort) 0);

                actionMessage.WriteUShort(inputs.MouseZero ? (ushort) 1 : (ushort) 0);
                actionMessage.WriteUShort(inputs.MouseOne ? (ushort) 1 : (ushort) 0);
                actionMessage.WriteUShort(inputs.MouseTwo ? (ushort) 1 : (ushort) 0);
                actionMessage.WriteFloat(inputs.PosX);
                actionMessage.WriteFloat(inputs.PosY);
                actionMessage.WriteFloat(inputs.PosZ);
                Vector3 camForward = playerCam.transform.forward;
                actionMessage.WriteFloat(camForward.x);
                actionMessage.WriteFloat(camForward.y);
                actionMessage.WriteFloat(camForward.z);

                vClient.SendReliableMessage(actionMessage);
            }
        }

        protected override void OnBreakBlock(ushort x, ushort y, ushort z)
        {
            vClient.SendBlockEdit(x, y, z, 0);
        }

        protected override void OnPlaceBlock(ushort x, ushort y, ushort z, byte blockTag)
        {
            vClient.SendBlockEdit(x, y, z, blockTag);
        }
    }
}