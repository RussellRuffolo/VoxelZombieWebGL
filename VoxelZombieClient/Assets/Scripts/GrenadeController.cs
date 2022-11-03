using System.Collections;
using UnityEngine;

public class GrenadeController : MonoBehaviour
{
    public Rigidbody rb;

    public float throwForce;

    public float Delay;

    public float ExplosionRadius;

    public ParticleSystem ExplosionSystem;

    public MeshRenderer GrenadeRenderer;

    public void Throw(Vector3 direction, IWorld world)
    {
        rb.velocity = direction.normalized * throwForce;
        StartCoroutine(ExplosionDelay(world));
    }

    IEnumerator ExplosionDelay(IWorld world)
    {
        yield return new WaitForSeconds(Delay);
        Explode(world);
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
        ExplosionSystem.Play();
        GrenadeRenderer.enabled = false;
        yield return new WaitForSeconds(1);
        GrenadeRenderer.enabled = true;
        gameObject.SetActive(false);
    }


    private void Explode(IWorld world)
    {
        Vector3 position = transform.position;


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
                            world[x, y, z] = 0;
                            world.CheckChunks(x, y, z);
                        }
                    }
                }
            }
        }
    }
}