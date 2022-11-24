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

    [Test]
    public void TestCastVoxelsAsBytes()
    {
        byte[] bytes = { 0, 3, 7};
        Voxel[] voxels = { Voxel.Air, Voxel.Dirt, Voxel.Bedrock };
        Assert.That(Cast.VoxelsAsBytes(ref voxels), Is.EqualTo(bytes));
    }
}