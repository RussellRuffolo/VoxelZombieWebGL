using System;
using System.Linq;
using System.Runtime.CompilerServices;

namespace ZombieLib
{
    public static class Cast
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static byte[] AsBytes(ref Voxel[] voxels) =>
            // Todo (Russell): Figure out unsafe code (and why Unity doesn't like it)
            // Unsafe.As<Voxel[], byte[]>(ref voxels);
            (byte[])voxels.Cast<byte>();
            // Array.ConvertAll<Voxel, byte>(voxels, Converter);

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private static byte Converter(Voxel voxel)
        {
            return (byte)voxel;
        }
    }
}