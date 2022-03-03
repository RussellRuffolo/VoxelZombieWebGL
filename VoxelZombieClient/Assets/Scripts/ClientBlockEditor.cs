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
        }

        protected override void OnBreakBlock(ushort x, ushort y, ushort z)
        {
            vClient.SendBlockEdit(x, y, z, 0);
        }

        protected override void OnPlaceBlock(ushort x, ushort y, ushort z, ushort blockTag)
        {
            vClient.SendBlockEdit(x, y, z, blockTag);
        }
    }
}