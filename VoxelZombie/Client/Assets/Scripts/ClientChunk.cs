using System;
using System.Collections.Generic;
using System.Linq;
using Client;
using UnityEngine;
using ZombieLib;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(MeshCollider))]
public class ClientChunk : Chunk
{



    public VoxelClient VoxelClient { get; set; }




    public override void SetActiveRendering()
    {
        if (!ActiveRendering)
        {
            ActiveRendering = true;

            RtcMessage chunkActiveMessage = new RtcMessage(Tags.CHUNK_ACTIVE_TAG);

            chunkActiveMessage.WriteInt(ID.X);
            chunkActiveMessage.WriteInt(ID.Y);
            chunkActiveMessage.WriteInt(ID.Z);

            VoxelClient.SendReliableMessage(chunkActiveMessage);
        }
    }

    public override void SetInactiveRendering()
    {
        RtcMessage chunkInactiveMessage = new RtcMessage(Tags.CHUNK_INACTIVE_TAG);

        chunkInactiveMessage.WriteInt(ID.X);
        chunkInactiveMessage.WriteInt(ID.Y);
        chunkInactiveMessage.WriteInt(ID.Z);

        VoxelClient.SendReliableMessage(chunkInactiveMessage);
    }

    private bool ActiveRendering { get; set; }

    public void init()
    {
        tag = "Ground";

        meshFilter = GetComponent<MeshFilter>();
        meshCollider = GetComponent<MeshCollider>();
        mesh = new Mesh();
        mesh.subMeshCount = 55;

        for (int i = 0; i < 55; i++)
        {
            TriangleLists[i] = new List<int>();
        }


        centerPosition = new Vector3(4 + ID.X * 8, 4 + ID.Y * 8, 4 + ID.Z * 8);
        
    }

    private void Update()
    {
        //get into update as dirty:

        // quick mesh in one frame and apply that mesh

        //kick off greedy meshing

        //when greedy meshing returns, apply that mesh

        //concerns: edits made after greedy  meshing has been kicked off. Cancel/ignore the returned greedy mesh?

        //thoughts: start timer after quick meshing and if no edits are made only then kick off greedy mesh

        if (dirty && ActiveRendering)
            RenderToMesh();
    }


    public void ProcessChunkChange(RtcMessageReader reader)
    { for (int i = 0; i < voxels.Length; i++)
        {
            voxels[i] = (Voxel)reader.ReadByte();
        }


        dirty = true;
    }
}