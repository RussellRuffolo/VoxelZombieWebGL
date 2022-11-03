

using UnityEngine;

public struct BlockSelectionInfo
{
    public bool FoundBlock;

    public ushort X, Y, Z;

    public Vector3 SelectionPosition, SelectionNormal;

    public static BlockSelectionInfo NoBlock => new BlockSelectionInfo(false, 0, 0, 0, Vector3.zero, Vector3.zero);

    public BlockSelectionInfo(bool foundBlock, ushort x, ushort y, ushort z, Vector3 selectionPosition,
        Vector3 selectionNormal)
    {
        FoundBlock = foundBlock;
        X = x;
        Y = y;
        Z = z;
        SelectionPosition = selectionPosition;
        SelectionNormal = selectionNormal;
    }
}