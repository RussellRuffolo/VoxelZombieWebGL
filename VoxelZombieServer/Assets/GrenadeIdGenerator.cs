public class GrenadeIdGenerator
{
    private static GrenadeIdGenerator m_Instance;

    public static GrenadeIdGenerator Instance
    {
        get
        {
            if (m_Instance != null)
            {
                return m_Instance;
            }

            return m_Instance = new GrenadeIdGenerator();
        }
    }

    private int idCount = 0;

    public int GetId()
    {
        if (idCount >= int.MaxValue)
        {
            idCount = 0;
        }

        idCount++;
        return idCount;
    }
}