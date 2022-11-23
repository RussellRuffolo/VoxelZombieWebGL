using System.Linq;
using System.Runtime.CompilerServices;

namespace ZombieLib
{
    public static class Cast
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static byte[] VoxelsAsBytes(ref Voxel[] voxels) =>
            // Todo (Russell): Figure out unsafe code (and why Unity doesn't like it)
            // Unsafe.As<Voxel[], byte[]>(ref voxels);
            (byte[])voxels.Cast<byte>();

    }
}