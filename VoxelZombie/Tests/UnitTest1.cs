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

        byte[] casted = Cast.AsBytes(ref voxels);
        bytes.Zip(casted, (b, v) =>
        {
            Assert.That(b, Is.EqualTo(v));
            return true;  // Todo (Russell): Make idiomatic
        });
        // Assert.That(retyped, Is.EqualTo(bytes));
        // Assert.That(Unsafe.As<Voxel[], byte[]>(ref voxels), Is.EquivalentTo(bytes));
    }
}