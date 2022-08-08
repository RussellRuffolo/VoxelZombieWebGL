using System;
using System.Collections;
using UnityEngine;

public class GrenadeController : MonoBehaviour
{
    public Rigidbody rb;

    public float throwForce;

    public float Delay;

    public float ExplosionRadius;

    private int throwId;

    public void Throw(Vector3 direction, IWorld world, VoxelServer vServer, ServerBlockEditor bEditor)
    {
        rb.velocity = direction.normalized * throwForce;
        StartCoroutine(ExplosionDelay(world, vServer, bEditor));

        throwId = GrenadeIdGenerator.Instance.GetId();

        vServer.SendGrenadeCreation(throwId, this);
    }

    IEnumerator ExplosionDelay(IWorld world, VoxelServer vServer, ServerBlockEditor bEditor)
    {
        yield return new WaitForSeconds(Delay);
        Explode(world, vServer, bEditor);
        gameObject.SetActive(false);
    }


    private void Explode(IWorld world, VoxelServer vServer, ServerBlockEditor bEditor)
    {
        Vector3 position = transform.position;
        
        vServer.SendGrenadeDestruction(throwId);

        for (float x = position.x - ExplosionRadius; x < position.x + ExplosionRadius; x += .5f)
        {
            for (float y = position.y - ExplosionRadius; y < position.y + ExplosionRadius; y += .5f)
            {
                for (float z = position.z - ExplosionRadius; z < position.z + ExplosionRadius; z += .5f)
                {
                    if (Vector3.Distance(position,
                            new Vector3(x, y, z)) <= ExplosionRadius)
                    {
                        if (PlayerUtils.IsBreakableBlock(world[x, y, z]))
                        {
                            ushort blockX = (ushort) (x * 2);
                            ushort blockY = (ushort) (y * 2);
                            ushort blockZ = (ushort) (z * 2);

                            if (bEditor.TryApplyEdit(blockX, blockY, blockZ, 0))
                            {
                                //vServer.SendBlockEdit(blockX, blockY, blockZ, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}