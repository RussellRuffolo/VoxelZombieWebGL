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

        protected override void OnBreakBlock(float x, float y, float z)
        {
            vClient.SendBlockEdit((ushort)x, (ushort)y, (ushort)z, 0);
        }

        protected override void OnPlaceBlock(float x, float y, float z, UInt32 blockTag)
        {
            vClient.SendBlockEdit((ushort)x, (ushort)y, (ushort)z, blockTag);
        }
    }
}