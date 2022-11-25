using System.Runtime.CompilerServices;

namespace Tests;
using ZombieLib;

public class Tests
{
    [SetUp]
    public void Setup()
    {
    }

    [Test]
    public void TestVoxel()
    {
        Assert.That((byte)0, Is.EqualTo((byte)Voxel.Air));
    }

}