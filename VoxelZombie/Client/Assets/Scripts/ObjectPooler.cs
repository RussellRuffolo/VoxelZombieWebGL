using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    public static ObjectPooler Instance;

    public List<GameObject> PrefabsToPool;

    private Dictionary<string, List<GameObject>> ObjectPools = new();


    public int initialPoolSize;

    private void Awake()
    {
        Instance = this;

        foreach (GameObject prefab in PrefabsToPool)
        {
            string objectName = prefab.name;
            ObjectPools[objectName] = new List<GameObject>();

            for (int i = 0; i < initialPoolSize; i++)
            {
                GameObject newObject = Instantiate(prefab);
                newObject.SetActive(false);
                ObjectPools[objectName].Add(newObject);
            }
        }
    }

    public GameObject GetPooledObject(string objectName)
    {
        foreach (GameObject pooledObject in ObjectPools[objectName])
        {
            if (!pooledObject.activeInHierarchy)
            {
                pooledObject.SetActive(true);
                return pooledObject;
            }
        }

        GameObject newObject = Instantiate(ObjectPools[objectName].First());

        newObject.SetActive(true);
        ObjectPools[objectName].Add(newObject);

        return newObject;
    }
}