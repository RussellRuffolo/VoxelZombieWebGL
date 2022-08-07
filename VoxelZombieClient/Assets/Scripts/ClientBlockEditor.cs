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