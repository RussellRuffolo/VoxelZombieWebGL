namespace Tests;
using ZombieLib;

public class Tests
{
    [SetUp]
    public void Setup()
    {
    }

    [Test]
    public void As()
    {
        Assert.That((byte)0, Is.EqualTo((byte)Voxel.Air));
    }
}