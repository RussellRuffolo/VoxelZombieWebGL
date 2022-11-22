using System.Collections.Generic;
using UnityEngine;

public class GrenadeManager : MonoBehaviour
{
    private Dictionary<int, GrenadeController> Grenades
        = new Dictionary<int, GrenadeController>();

    public void CreateGrenade(int throwId, Vector3 position)
    {
        GameObject grenade = ObjectPooler.Instance.GetPooledObject("Grenade");

        Grenades.Add(throwId, grenade.GetComponent<GrenadeController>());

        grenade.transform.position = position;
    }

    public void MoveGrenade(int throwId, Vector3 newPosition)
    {
        if (Grenades.ContainsKey(throwId))
        {
            Grenades[throwId].transform.position = newPosition;
        }
    }

    public void DestroyGrenade(int throwId)
    {
        if (Grenades.ContainsKey(throwId))
        {
            GameObject grenade = Grenades[throwId].gameObject;
            grenade.SetActive(false);

            Grenades.Remove(throwId);
        }
    }
}