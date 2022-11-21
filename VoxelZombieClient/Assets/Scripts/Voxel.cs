using System;

public enum Voxel: byte
{
    Air = 0,
    Stone = 1,
    Grass = 2,
    Dirt = 3,
    Cobblestone = 4,
    Planks = 5,
    Sapling = 6,
    Bedrock = 7,
    FlowingWater = 8,
    StationaryWater = 9,
    FlowingLava = 10,
    StationaryLava = 11,
    Sand = 12,
    Gravel = 13,
    GoldOre = 14,
    IronOre = 15,
    CoalOre = 16,
    Wood = 17,
    Leaves = 18,
    Sponge = 19,
    Glass = 20,
    RedCloth = 21,
    OrangeCloth = 22,
    YellowCloth = 23,
    ChartreuseCloth = 24,
    GreenCloth = 25,
    SpringGreenCloth = 26,
    CyanCloth = 27,
    CapriCloth = 28,
    UltramarineCloth = 29,
    VioletCloth = 30,
    PurpleCloth = 31,
    MagentaCloth = 32,
    RoseCloth = 33,
    DarkGrayCloth = 34,
    LightGrayCloth = 35,
    WhiteCloth = 36,
    Dandelion = 37,
    Rose = 38,
    BrownMushroom = 39,
    RedMushroom = 40,
    BlockOfGold = 41,
    BlockOfIron = 42,
    DoubleSlab = 43,
    Slab = 44,
    Bricks = 45,
    TNT = 46,
    Bookshelf = 47,
    MossyCobblestone = 48,
    Obsidian = 49
}

public static class VoxelExtensions
{
    public static Voxel[] nonsolidBlocks = { Voxel.Air, Voxel.StationaryWater, Voxel.StationaryLava };

    public static Voxel[] nonbreakableBlocks =
        { Voxel.Air, Voxel.StationaryWater, Voxel.StationaryLava, Voxel.Bedrock };
    public static bool isNonsolid(this Voxel v)
    {
        return Array.Exists(nonsolidBlocks, elem => elem == v);
    }

    public static bool isNonbreakable(this Voxel v)
    {
        return Array.Exists(nonbreakableBlocks, elem => elem == v);
    }

    public static bool isSolid(this Voxel v)
    {
        return !isNonsolid(v);
    }

    public static bool isBreakable(this Voxel v)
    {
        return !isNonbreakable(v);
    }
}