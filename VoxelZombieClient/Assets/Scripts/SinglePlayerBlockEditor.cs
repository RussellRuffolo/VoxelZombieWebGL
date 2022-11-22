using System;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    public class SinglePlayerBlockEditor : BaseBlockEditor
    {
 



        protected override void OnStart()
        {
  
            
            ActionStates.Add(ActionState.Grenade, new SinglePlayerGrenadeActionState());
            ActionStates.Add(ActionState.BlockEdit, new SinglePlayerBlockEditActionState());

            
            SinglePlayerGrenadeActionState grenadeState = (SinglePlayerGrenadeActionState) ActionStates[ActionState.Grenade];

            grenadeState.GrenadeModel = GrenadeModel;

            grenadeState.cameraDirection = playerCam.transform;

            grenadeState.world = currentWorld;
            
            SinglePlayerBlockEditActionState bEditState =
                (SinglePlayerBlockEditActionState) ActionStates[ActionState.BlockEdit];

            bEditState.bEditor = this;
            
            CurrentActionState = ActionStates[ActionState];

        }

        protected override void SendActionInputs(ActionInputs inputs)
        {
            
        }

        protected override void OnBreakBlock(ushort x, ushort y, ushort z)
        {
            currentWorld.SetVoxel(x, y, z, 0);
            currentWorld.CheckChunks(x , y , z);
        }

        protected override void OnPlaceBlock(ushort x, ushort y, ushort z, Voxel blockTag)
        {
            currentWorld.SetVoxel(x, y, z, blockTag);
            currentWorld.CheckChunks(x , y , z);
        }

   
    }
}