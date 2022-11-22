using System.Collections.Generic;
using UnityEngine;

public class GrenadeManager : MonoBehaviour
{
    private VoxelServer vServer;

    private void Awake()
    {
        vServer = GetComponent<VoxelServer>();
    }

    private Dictionary<int, GrenadeController> Grenades = new Dictionary<int, GrenadeController>();

    public void AddGrenade(int throwId, GrenadeController grenade)
    {
        Grenades.Add(throwId, grenade);
    }

    public void RemoveGrenade(int throwId)
    {
        Grenades.Remove(throwId);
    }

    private void Update()
    {
        if (Grenades.Count > 0)
        {
            int numGrenades = Grenades.Count;
            RtcMessage grenadePositionMessage = new RtcMessage(Tags.GRENADE_POSITION_TAG);
            grenadePositionMessage.WriteInt(numGrenades);
            foreach (int throwId in Grenades.Keys)
            {
                grenadePositionMessage.WriteInt(throwId);
                Vector3 grenadePosition = Grenades[throwId].transform.position;
                grenadePositionMessage.WriteFloat(grenadePosition.x);
                grenadePositionMessage.WriteFloat(grenadePosition.y);
                grenadePositionMessage.WriteFloat(grenadePosition.z);
            }

            vServer.BroadcastUnreliable(grenadePositionMessage);
        }
    }
}