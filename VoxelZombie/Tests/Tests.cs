namespace Tests;
using ZombieLib;

public class Tests
{
    [SetUp]
    public void Setup()
    {
    }

    [Test]
    public void Test1()
    {
        Assert.That((byte)Voxel.Air, Is.EqualTo((byte)0));
    }
}