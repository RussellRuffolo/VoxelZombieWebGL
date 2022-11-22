using System;
using System.Linq;

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
    // Todo (Snapper): Ensure arrays are actually faster than Hashmaps in this usecase (or go back to Hashmaps)
    public static Voxel[] gasBlocks = { Voxel.Air };
    public static Voxel[] liquidBlocks = { Voxel.StationaryWater, Voxel.StationaryLava };
    public static Voxel[] nonsolidBlocks = { Voxel.Air, Voxel.StationaryWater, Voxel.StationaryLava };

    public static Voxel[] nonbreakableBlocks =
        { Voxel.Air, Voxel.StationaryWater, Voxel.StationaryLava, Voxel.Bedrock };
    // Adding a new vegetation block? Don't forget to make it transparent! (If applicable)
    // Todo (Russell): We have the names transparent and nonsolid. I don't like that. Neither are perfect names
    //  Nonsolid means that they are liquid, gas, plasma, etc.
    //  Transparent means that we need to render things on the other side.
    public static Voxel[] vegetationBlocks =
        { Voxel.Dandelion, Voxel.Rose, Voxel.BrownMushroom, Voxel.RedMushroom };
    public static Voxel[] transparentBlocks =
    {
        Voxel.Air, Voxel.StationaryWater, Voxel.StationaryLava, Voxel.Leaves, Voxel.Glass, Voxel.Dandelion, Voxel.Rose,
        Voxel.BrownMushroom, Voxel.RedMushroom, Voxel.Slab,
        // Todo: What are these two about?
        (Voxel) 57, (Voxel) 61
    };
    // Todo: If a block is placeable is game dependant and not an inherent property of the block. Refactor to elsewhere.
    // Actually, most (if not all) of these belong elsewhere
    public static Voxel[] nonplaceableBlocks = { Voxel.Air, Voxel.Bedrock, Voxel.StationaryWater, Voxel.StationaryLava };
    public static bool isNonsolid(this Voxel v) => nonsolidBlocks.Contains(v);
    public static bool isNonbreakable(this Voxel v) => nonbreakableBlocks.Contains(v);
    public static bool isNonplaceable(this Voxel v) => nonplaceableBlocks.Contains(v);
    public static bool isVegetation(this Voxel v) => vegetationBlocks.Contains(v);
    public static bool isTransparent(this Voxel v) => transparentBlocks.Contains(v);
    public static bool isLiquid(this Voxel v) => liquidBlocks.Contains(v);
    public static bool isGas(this Voxel v) => gasBlocks.Contains(v);
    public static bool isSolid(this Voxel v) => !isNonsolid(v);
    public static bool isBreakable(this Voxel v) => !isNonbreakable(v);
}