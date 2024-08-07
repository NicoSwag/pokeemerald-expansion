#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen3[] =
{
#endif

#if P_FAMILY_TREECKO
    [SPECIES_TREECKO] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Treecko"),
        .cryId = CRY_TREECKO,
        .natDexNum = NATIONAL_DEX_TREECKO,
        .categoryName = _("Wood Gecko"),
        .height = 5,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It makes its nest in a giant tree in the\n"
            "forest. It ferociously guards against\n"
            "anything nearing its territory. It is said\n"
            "to be the protector of the forest's trees."),
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Treecko, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Treecko,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Treecko, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Treecko),
        ICON(Treecko, 1),
        .footprint = gMonFootprint_Treecko,
        LEARNSETS(Treecko),
=======
        .palette = gMonPalette_Treecko,
        .shinyPalette = gMonShinyPalette_Treecko,
        .iconSprite = gMonIcon_Treecko,
        .iconPalIndex = 1,
        FOOTPRINT(Treecko)
        OVERWORLD(
            sPicTable_Treecko,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Treecko,
            gShinyOverworldPalette_Treecko
        )
        .levelUpLearnset = sTreeckoLevelUpLearnset,
        .teachableLearnset = sTreeckoTeachableLearnset,
        .eggMoveLearnset = sTreeckoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GROVYLE}),
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grovyle"),
        .cryId = CRY_GROVYLE,
        .natDexNum = NATIONAL_DEX_GROVYLE,
        .categoryName = _("Wood Gecko"),
        .height = 9,
        .weight = 216,
        .description = COMPOUND_STRING(
            "Leaves grow out of this Pokémon's body.\n"
            "They help obscure a Grovyle from the eyes\n"
            "of its enemies while it is in a thickly\n"
            "overgrown forest."),
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grovyle, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Grovyle,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Grovyle, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Grovyle),
        ICON(Grovyle, 1),
        .footprint = gMonFootprint_Grovyle,
        LEARNSETS(Grovyle),
=======
        .palette = gMonPalette_Grovyle,
        .shinyPalette = gMonShinyPalette_Grovyle,
        .iconSprite = gMonIcon_Grovyle,
        .iconPalIndex = 1,
        FOOTPRINT(Grovyle)
        OVERWORLD(
            sPicTable_Grovyle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grovyle,
            gShinyOverworldPalette_Grovyle
        )
        .levelUpLearnset = sGrovyleLevelUpLearnset,
        .teachableLearnset = sGrovyleTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SCEPTILE}),
    },

#define SCEPTILE_MISC_INFO                                  \
        .catchRate = 45,                                    \
        .evYield_Speed = 3,                                 \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },\
        .bodyColor = BODY_COLOR_GREEN,                      \
        .speciesName = _("Sceptile"),                       \
        .natDexNum = NATIONAL_DEX_SCEPTILE,                 \
        .categoryName = _("Forest"),                        \
        .footprint = gMonFootprint_Sceptile,                \
        LEARNSETS(Sceptile),                                \
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,  \
        .formChangeTable = sSceptileFormChangeTable

    [SPECIES_SCEPTILE] =
    {
        SCEPTILE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .expYield = 239,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .cryId = CRY_SCEPTILE,
        .height = 17,
        .weight = 522,
        .description = COMPOUND_STRING(
            "In the jungle, its power is without equal.\n"
            "This Pokémon carefully grows trees and\n"
            "plants. It regulates its body temperature\n"
            "by basking in sunlight."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        FRONT_PIC(Sceptile, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sceptile,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Sceptile, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Sceptile),
        ICON(Sceptile, 1),
=======
        .palette = gMonPalette_Sceptile,
        .shinyPalette = gMonShinyPalette_Sceptile,
        .iconSprite = gMonIcon_Sceptile,
        .iconPalIndex = 1,
        FOOTPRINT(Sceptile)
        OVERWORLD(
            sPicTable_Sceptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sceptile,
            gShinyOverworldPalette_Sceptile
        )
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,
        .formChangeTable = sSceptileFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCEPTILE_MEGA] =
    {
        SCEPTILE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .expYield = 284,
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .cryId = CRY_SCEPTILE_MEGA,
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Thanks to the power in its quick legs,\n"
            "Mega Sceptile can be on its opponent in a\n"
            "flash. It can cut off a portion of its tail\n"
            "to fire it like a missile at an opponent."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        FRONT_PIC(SceptileMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SceptileMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SceptileMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(SceptileMega),
        ICON(SceptileMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
    [SPECIES_TORCHIC] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Torchic"),
        .cryId = CRY_TORCHIC,
        .natDexNum = NATIONAL_DEX_TORCHIC,
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING(
            "If attacked, it strikes back by spitting\n"
            "balls of fire it forms in its stomach.\n"
            "A Torchic dislikes darkness because it\n"
            "can't see its surroundings."),
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Torchic, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Torchic,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Torchic, 40, 48),
        BACK_PIC_FEMALE(Torchic, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Torchic),
        ICON(Torchic, 0),
        .footprint = gMonFootprint_Torchic,
        LEARNSETS(Torchic),
=======
        .palette = gMonPalette_Torchic,
        .shinyPalette = gMonShinyPalette_Torchic,
        .iconSprite = gMonIcon_Torchic,
        .iconPalIndex = 0,
        FOOTPRINT(Torchic)
        OVERWORLD(
            sPicTable_Torchic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Torchic,
            gShinyOverworldPalette_Torchic
        )
        .levelUpLearnset = sTorchicLevelUpLearnset,
        .teachableLearnset = sTorchicTeachableLearnset,
        .eggMoveLearnset = sTorchicEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_COMBUSKEN}),
    },

    [SPECIES_COMBUSKEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = { TYPE_FIRE, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Combusken"),
        .cryId = CRY_COMBUSKEN,
        .natDexNum = NATIONAL_DEX_COMBUSKEN,
        .categoryName = _("Young Fowl"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It lashes out with 10 kicks per second.\n"
            "Its strong fighting instinct compels it\n"
            "to keep up its offensive until the\n"
            "opponent gives up."),
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Combusken, 48, 64),
        FRONT_PIC_FEMALE(Combusken, 48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Combusken,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Combusken, 64, 64),
        BACK_PIC_FEMALE(Combusken, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Combusken),
        ICON(Combusken, 0),
        .footprint = gMonFootprint_Combusken,
        LEARNSETS(Combusken),
=======
        .palette = gMonPalette_Combusken,
        .shinyPalette = gMonShinyPalette_Combusken,
        .iconSprite = gMonIcon_Combusken,
        .iconPalIndex = 0,
        FOOTPRINT(Combusken)
        OVERWORLD(
            sPicTable_Combusken,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Combusken,
            gShinyOverworldPalette_Combusken
        )
        .levelUpLearnset = sCombuskenLevelUpLearnset,
        .teachableLearnset = sCombuskenTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLAZIKEN}),
    },

#define BLAZIKEN_MISC_INFO                                  \
        .types = { TYPE_FIRE, TYPE_FIGHTING },              \
        .catchRate = 45,                                    \
        .evYield_Attack = 3,                                \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_RED,                        \
        .speciesName = _("Blaziken"),                       \
        .natDexNum = NATIONAL_DEX_BLAZIKEN,                 \
        .categoryName = _("Blaze"),                         \
        .height = 19,                                       \
        .weight = 520,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 301,                                \
        .trainerOffset = 4,                                 \
        .footprint = gMonFootprint_Blaziken,                \
        LEARNSETS(Blaziken),                                \
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,  \
        .formChangeTable = sBlazikenFormChangeTable

    [SPECIES_BLAZIKEN] =
    {
        BLAZIKEN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .expYield = 239,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .cryId = CRY_BLAZIKEN,
        .description = COMPOUND_STRING(
            "It learns martial arts that use punches\n"
            "and kicks. Every several years, its old\n"
            "feathers burn off, and new, supple\n"
            "feathers grow back in their place."),
        FRONT_PIC(Blaziken, 56, 64),
        FRONT_PIC_FEMALE(Blaziken, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Blaziken,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Blaziken, 64, 64),
        BACK_PIC_FEMALE(Blaziken, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
<<<<<<< HEAD
        PALETTES(Blaziken),
        ICON(Blaziken, 0),
=======
        .palette = gMonPalette_Blaziken,
        .shinyPalette = gMonShinyPalette_Blaziken,
        .iconSprite = gMonIcon_Blaziken,
        .iconPalIndex = 0,
        FOOTPRINT(Blaziken)
        OVERWORLD(
            sPicTable_Blaziken,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blaziken,
            gShinyOverworldPalette_Blaziken
        )
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,
        .formChangeTable = sBlazikenFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLAZIKEN_MEGA] =
    {
        BLAZIKEN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .expYield = 284,
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST },
        .cryId = CRY_BLAZIKEN_MEGA,
        .description = COMPOUND_STRING(
            "As it unleashes a flurry of savage kicks,\n"
            "its legs can begin to burn from the\n"
            "friction of the surrounding atmosphere.\n"
            "They're always a source of pride to it."),
        FRONT_PIC(BlazikenMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlazikenMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlazikenMega, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(BlazikenMega),
        ICON(BlazikenMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
    [SPECIES_MUDKIP] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mudkip"),
        .cryId = CRY_MUDKIP,
        .natDexNum = NATIONAL_DEX_MUDKIP,
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = COMPOUND_STRING(
            "On land, it can powerfully lift large\n"
            "boulders by planting its four feet and\n"
            "heaving. It sleeps by burying itself in soil\n"
            "at the water's edge."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mudkip, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Mudkip,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Mudkip, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Mudkip),
        ICON(Mudkip, 0),
        .footprint = gMonFootprint_Mudkip,
        LEARNSETS(Mudkip),
=======
        .palette = gMonPalette_Mudkip,
        .shinyPalette = gMonShinyPalette_Mudkip,
        .iconSprite = gMonIcon_Mudkip,
        .iconPalIndex = 0,
        FOOTPRINT(Mudkip)
        OVERWORLD(
            sPicTable_Mudkip,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mudkip,
            gShinyOverworldPalette_Mudkip
        )
        .levelUpLearnset = sMudkipLevelUpLearnset,
        .teachableLearnset = sMudkipTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MARSHTOMP}),
    },

    [SPECIES_MARSHTOMP] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Marshtomp"),
        .cryId = CRY_MARSHTOMP,
        .natDexNum = NATIONAL_DEX_MARSHTOMP,
        .categoryName = _("Mud Fish"),
        .height = 7,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Its toughened hind legs enable it to stand\n"
            "upright. Because it weakens if its skin\n"
            "dries out, it replenishes fluids by playing\n"
            "in mud."),
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Marshtomp, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Marshtomp,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Marshtomp, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Marshtomp),
        ICON(Marshtomp, 0),
        .footprint = gMonFootprint_Marshtomp,
        LEARNSETS(Marshtomp),
=======
        .palette = gMonPalette_Marshtomp,
        .shinyPalette = gMonShinyPalette_Marshtomp,
        .iconSprite = gMonIcon_Marshtomp,
        .iconPalIndex = 0,
        FOOTPRINT(Marshtomp)
        OVERWORLD(
            sPicTable_Marshtomp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marshtomp,
            gShinyOverworldPalette_Marshtomp
        )
        .levelUpLearnset = sMarshtompLevelUpLearnset,
        .teachableLearnset = sMarshtompTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SWAMPERT}),
    },

#define SWAMPERT_MISC_INFO                                      \
        .types = { TYPE_WATER, TYPE_GROUND },                   \
        .catchRate = 45,                                        \
        .evYield_Attack = 3,                                    \
        .genderRatio = PERCENT_FEMALE(12.5),                    \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("Swampert"),                           \
        .natDexNum = NATIONAL_DEX_SWAMPERT,                     \
        .categoryName = _("Mud Fish"),                          \
        .footprint = gMonFootprint_Swampert,                    \
        LEARNSETS(Swampert),                                    \
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,      \
        .formChangeTable = sSwampertFormChangeTable

    [SPECIES_SWAMPERT] =
    {
        SWAMPERT_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .expYield = 241,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .cryId = CRY_SWAMPERT,
        .height = 15,
        .weight = 819,
        .description = COMPOUND_STRING(
            "If it senses the approach of a storm and\n"
            "a tidal wave, it protects its seaside nest\n"
            "by piling up boulders. It swims as fast as\n"
            "a jet ski."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swampert, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Swampert,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Swampert, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
<<<<<<< HEAD
        PALETTES(Swampert),
        ICON(Swampert, 0),
=======
        .palette = gMonPalette_Swampert,
        .shinyPalette = gMonShinyPalette_Swampert,
        .iconSprite = gMonIcon_Swampert,
        .iconPalIndex = 0,
        FOOTPRINT(Swampert)
        OVERWORLD(
            sPicTable_Swampert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swampert,
            gShinyOverworldPalette_Swampert
        )
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,
        .formChangeTable = sSwampertFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SWAMPERT_MEGA] =
    {
        SWAMPERT_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .expYield = 286,
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM },
        .cryId = CRY_SWAMPERT_MEGA,
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "When it Mega Evolves, the strength that it\n"
            "needs to act in the water is increased.\n"
            "It can use its tenacious power\n"
            "both on land and in the water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SwampertMega, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SwampertMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SwampertMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(SwampertMega),
        ICON(SwampertMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Attack    = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_RATTLED, ABILITY_FOUL_RUSH},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_RATTLED },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("POOCHYENA"),
        .cryId = CRY_POOCHYENA,
        .natDexNum = NATIONAL_DEX_POOCHYENA,
        .categoryName = _("BITE"),
        .height = 5,
        .weight = 136,
        .description = COMPOUND_STRING(
            "It savagely threatens foes with mighty\n"
            "fangs. It chases after fleeing targets\n"
            "tenaciously. It turns tail and runs,\n"
            "however, if the foe strikes back."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poochyena, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Poochyena,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Poochyena, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Poochyena),
        ICON(Poochyena, 2),
        .footprint = gMonFootprint_Poochyena,
        LEARNSETS(Poochyena),
=======
        .palette = gMonPalette_Poochyena,
        .shinyPalette = gMonShinyPalette_Poochyena,
        .iconSprite = gMonIcon_Poochyena,
        .iconPalIndex = 2,
        FOOTPRINT(Poochyena)
        OVERWORLD(
            sPicTable_Poochyena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poochyena,
            gShinyOverworldPalette_Poochyena
        )
        .levelUpLearnset = sPoochyenaLevelUpLearnset,
        .teachableLearnset = sPoochyenaTeachableLearnset,
        .eggMoveLearnset = sPoochyenaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_MIGHTYENA}),
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 127,
        .expYield = 147,
        .evYield_Attack    = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_MOXIE, ABILITY_FOUL_RUSH},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_MOXIE },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("MIGHTYENA"),
        .cryId = CRY_MIGHTYENA,
        .natDexNum = NATIONAL_DEX_MIGHTYENA,
        .categoryName = _("BITE"),
        .height = 10,
        .weight = 370,
        .description = COMPOUND_STRING(
            "Once they bite a foe, MIGHTYENA\n"
            "never let go of their grip.\n"
            "Despite their savagery, they\n"
            "mostly feed on carrion."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mightyena, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Mightyena,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Mightyena, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Mightyena),
        ICON(Mightyena, 2),
        .footprint = gMonFootprint_Mightyena,
        LEARNSETS(Mightyena),
=======
        .palette = gMonPalette_Mightyena,
        .shinyPalette = gMonShinyPalette_Mightyena,
        .iconSprite = gMonIcon_Mightyena,
        .iconPalIndex = 2,
        FOOTPRINT(Mightyena)
        OVERWORLD(
            sPicTable_Mightyena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mightyena,
            gShinyOverworldPalette_Mightyena
        )
        .levelUpLearnset = sMightyenaLevelUpLearnset,
        .teachableLearnset = sMightyenaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_POOCHYENA

                                              


#define LINOONE_MISC_INFO                                                       \
        .baseHP        = 78,                                                    \
        .baseAttack    = 70,                                                    \
        .baseDefense   = 61,                                                    \
        .baseSpeed     = 100,                                                   \
        .baseSpAttack  = 50,                                                    \
        .baseSpDefense = 61,                                                    \
        .catchRate = 90,                                                        \
        .expYield = 147,                                                        \
        .evYield_Speed = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                      \
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Linoone"),                                            \
        .cryId = CRY_LINOONE,                                                   \
        .natDexNum = NATIONAL_DEX_LINOONE,                                      \
        .categoryName = _("Rushing"),                                           \
        .height = 5,                                                            \
        .weight = 325,                                                          \
        .pokemonScale = 321,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .footprint = gMonFootprint_Linoone,                                     \
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable

    [SPECIES_ZIGZAGOON] =
    {
        .baseHP        = 38,                                                    
        .baseAttack    = 30,                                                    
        .baseDefense   = 41,                                                    
        .baseSpeed     = 60,                                                    
        .baseSpAttack  = 30,                                                    
        .baseSpDefense = 41,                                                    
        .catchRate = 255,                                                       
        .expYield = 56,                                                         
        .evYield_Speed = 1,                                                     
        .genderRatio = PERCENT_FEMALE(50),                                      
        .eggCycles = 15,                                                       
        .friendship = STANDARD_FRIENDSHIP,                                      
        .growthRate = GROWTH_MEDIUM_FAST,                                       
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                      
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },  
        .speciesName = _("Zigzagoon"),                                          
        .cryId = CRY_ZIGZAGOON,                                                                           
        .categoryName = _("Tiny Raccoon"),                                      
        .height = 4,                                                            
        .weight = 175,                                                          
        .pokemonScale = 560,                                                   
        .pokemonOffset = 22,                                                    
        .trainerScale = 256,                                                    
        .trainerOffset = 0,                                                     
        .footprint = gMonFootprint_Zigzagoon,                                   
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
<<<<<<< HEAD
=======
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_BROWN,
        .description = COMPOUND_STRING(
            "Rubbing its nose against the ground, it\n"
            "always wanders about back and forth in\n"
            "search of something. It is distinguished\n"
            "by the zigzag footprints it leaves."),
        FRONT_PIC(Zigzagoon, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Zigzagoon,
        .frontAnimId = ANIM_H_SLIDE,
        BACK_PIC(Zigzagoon, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        .natDexNum = NATIONAL_DEX_ZIGZAGOON, 
        PALETTES(Zigzagoon),
        ICON(Zigzagoon, 2),
        LEARNSETS(Zigzagoon),
=======
        .palette = gMonPalette_Zigzagoon,
        .shinyPalette = gMonShinyPalette_Zigzagoon,
        .iconSprite = gMonIcon_Zigzagoon,
        .iconPalIndex = 2,
        FOOTPRINT(Zigzagoon)
        OVERWORLD(
            sPicTable_Zigzagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zigzagoon,
            gShinyOverworldPalette_Zigzagoon
        )
        .levelUpLearnset = sZigzagoonLevelUpLearnset,
        .teachableLearnset = sZigzagoonTeachableLearnset,
        .eggMoveLearnset = sZigzagoonEggMoveLearnset,
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE}),
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
    },

    [SPECIES_LINOONE] =
    {
        LINOONE_MISC_INFO,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
<<<<<<< HEAD
=======
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Linoone"),
        .cryId = CRY_LINOONE,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Rushing"),
        .height = 5,
        .weight = 325,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "It is exceedingly fast if it only has to run\n"
            "in a straight line. When it spots pond-\n"
            "dwelling prey underwater, it quickly leaps\n"
            "in and catches it with its sharp claws."),
        FRONT_PIC(Linoone, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Linoone,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Linoone, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Linoone),
        ICON(Linoone, 2),
        LEARNSETS(Linoone),
=======
        .palette = gMonPalette_Linoone,
        .shinyPalette = gMonShinyPalette_Linoone,
        .iconSprite = gMonIcon_Linoone,
        .iconPalIndex = 2,
        FOOTPRINT(Linoone)
        OVERWORLD(
            sPicTable_Linoone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Linoone,
            gShinyOverworldPalette_Linoone
        )
        .levelUpLearnset = sLinooneLevelUpLearnset,
        .teachableLearnset = sLinooneTeachableLearnset,
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,                                                 
        .catchRate = 255,                                                       
        .expYield = 56,                                                                                        
        .eggCycles = 15,                                                       
        .friendship = STANDARD_FRIENDSHIP,                                      
        .growthRate = GROWTH_MEDIUM_FAST,                                       
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                      
        .abilities = {ABILITY_QUICK_FEET, ABILITY_GLUTTONY, ABILITY_NONE},
        .speciesName = _("ZIGZAGOON"),                                          
        .cryId = CRY_ZIGZAGOON,                                                                           
        .categoryName = _("ZIGZAG"),                                      
        .height = 4,                                                            
        .weight = 175,                                                          
        .pokemonScale = 560,                                                   
        .pokemonOffset = 22,                                                    
        .trainerScale = 256,                                                    
        .trainerOffset = 0,                                                     
        .footprint = gMonFootprint_Zigzagoon,                                   
        .types = { TYPE_DARK, TYPE_NORMAL },
        .bodyColor = BODY_COLOR_WHITE,
        .description = COMPOUND_STRING(
            "Its metabolism is incredibly fast, and the\n"
            "only time it stops running around is when\n"
            "it eats or sleeps. It once existed in a\n"
            "different coloration."),
        FRONT_PIC(ZigzagoonGalarian, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_ZigzagoonGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZigzagoonGalarian, 56, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(ZigzagoonGalarian),
        ICON(ZigzagoonGalarian, 0),
        .natDexNum = NATIONAL_DEX_ZIGZAGOON_GALARIAN, 
        LEARNSETS(ZigzagoonGalarian),
        .isGalarianForm = TRUE,
=======
        .palette = gMonPalette_ZigzagoonGalarian,
        .shinyPalette = gMonShinyPalette_ZigzagoonGalarian,
        .iconSprite = gMonIcon_ZigzagoonGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Zigzagoon)
        OVERWORLD(
            sPicTable_ZigzagoonGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZigzagoonGalarian,
            gShinyOverworldPalette_ZigzagoonGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sZigzagoonGalarianLevelUpLearnset,
        .teachableLearnset = sZigzagoonGalarianTeachableLearnset,
        .eggMoveLearnset = sZigzagoonGalarianEggMoveLearnset,
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE_GALARIAN}),
        .formSpeciesIdTable = sZigzagoonGalarianFormSpeciesIdTable,
    },

    [SPECIES_LINOONE_GALARIAN] =
    {
         .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,                                               
        .catchRate = 90,                                                        
        .expYield = 147,                                                                                                          
        .genderRatio = PERCENT_FEMALE(50),                                      
        .eggCycles = 15,                                                        
        .friendship = STANDARD_FRIENDSHIP,                                      
        .growthRate = GROWTH_MEDIUM_FAST,                                       
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                      
        .abilities = {ABILITY_QUICK_FEET, ABILITY_GLUTTONY, ABILITY_NONE}, 
        .bodyColor = BODY_COLOR_WHITE,                                          
        .speciesName = _("LINOONE"),                                            
        .cryId = CRY_LINOONE,                                                   
        .natDexNum = NATIONAL_DEX_LINOONE,                                      
        .categoryName = _("LINE"),                                           
        .height = 5,                                                           
        .weight = 325,                                                          
        .pokemonScale = 321,                                                    
        .pokemonOffset = 7,                                                     
        .trainerScale = 256,                                                    
        .trainerOffset = 0,                                                     
        .footprint = gMonFootprint_Linoone,                                     
        .formSpeciesIdTable = sLinooneGalarianFormSpeciesIdTable,
        .types = { TYPE_DARK, TYPE_NORMAL },
        .description = COMPOUND_STRING(
            "This very aggressive Pokémon will\n"
            "recklessly challenge opponents stronger\n"
            "than itself. It uses its long tongue to\n"
            "taunt them to then tackle forcefully."),
        FRONT_PIC(LinooneGalarian, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_LinooneGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(LinooneGalarian, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(LinooneGalarian),
        ICON(LinooneGalarian, 0),
        LEARNSETS(LinooneGalarian),
=======
        .palette = gMonPalette_LinooneGalarian,
        .shinyPalette = gMonShinyPalette_LinooneGalarian,
        .iconSprite = gMonIcon_LinooneGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Linoone)
        OVERWORLD(
            sPicTable_LinooneGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_LinooneGalarian,
            gShinyOverworldPalette_LinooneGalarian
        )
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 35, SPECIES_OBSTAGOON}),
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 95,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 260,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_DEFIANT, ABILITY_GUTS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("OBSTAGOON"),
        .cryId = CRY_OBSTAGOON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("BLOCKING"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "If an OBSTAGOON decides to stand in\n"
            "the middle of a road and block the passage,\n"
            "nothing can be done. The only possibility\n"
            "is waiting or fighting it."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Obstagoon, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Obstagoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Obstagoon, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Obstagoon),
        ICON(Obstagoon, 0),
        .footprint = gMonFootprint_Obstagoon,
        LEARNSETS(Obstagoon),
=======
        .palette = gMonPalette_Obstagoon,
        .shinyPalette = gMonShinyPalette_Obstagoon,
        .iconSprite = gMonIcon_Obstagoon,
        .iconPalIndex = 0,
        FOOTPRINT(Obstagoon)
        OVERWORLD(
            sPicTable_Obstagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Obstagoon,
            gShinyOverworldPalette_Obstagoon
        )
        .levelUpLearnset = sObstagoonLevelUpLearnset,
        .teachableLearnset = sObstagoonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GALARIAN_FORMS

#if P_FAMILY_WURMPLE
    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_RUN_AWAY, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("WURMPLE"),
        .cryId = CRY_WURMPLE,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It sticks to tree branches and eats\n"
            "leaves. The thread it spits from its mouth,\n"
            "which becomes gooey when it touches\n"
            "air, slows the movement of its foes."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wurmple, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wurmple,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wurmple, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Wurmple),
        ICON(Wurmple, 0),
        .footprint = gMonFootprint_Wurmple,
        LEARNSETS(Wurmple),
=======
        .palette = gMonPalette_Wurmple,
        .shinyPalette = gMonShinyPalette_Wurmple,
        .iconSprite = gMonIcon_Wurmple,
        .iconPalIndex = 0,
        FOOTPRINT(Wurmple)
        OVERWORLD(
            sPicTable_Wurmple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Wurmple,
            gShinyOverworldPalette_Wurmple
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWurmpleLevelUpLearnset,
        .teachableLearnset = sWurmpleTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                                {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}),
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_SHED_SKIN, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("SILCOON"),
        .cryId = CRY_SILCOON,
        .natDexNum = NATIONAL_DEX_SILCOON,
        .categoryName = _("COCOON"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It prepares for evolution using the\n"
            "energy it stored while it was a WURMPLE.\n"
            "It keeps watch over the surroundings with\n"
            "its two eyes."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Silcoon, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Silcoon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Silcoon, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Silcoon),
        ICON(Silcoon, 2),
        .footprint = gMonFootprint_Silcoon,
        LEARNSETS(Silcoon),
=======
        .palette = gMonPalette_Silcoon,
        .shinyPalette = gMonShinyPalette_Silcoon,
        .iconSprite = gMonIcon_Silcoon,
        .iconPalIndex = 2,
        FOOTPRINT(Silcoon)
        OVERWORLD(
            sPicTable_Silcoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Silcoon,
            gShinyOverworldPalette_Silcoon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sSilcoonLevelUpLearnset,
        .teachableLearnset = sSilcoonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEAUTIFLY}),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpDefense = 70,
        .baseSpAttack  = 100,
        .types = { TYPE_BUG, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_MESMERIZE, ABILITY_TENACITY, ABILITY_TRICKSTER},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("BEAUTIFLY"),
        .cryId = CRY_BEAUTIFLY,
        .natDexNum = NATIONAL_DEX_BEAUTIFLY,
        .categoryName = _("BUTTERFLY"),
        .height = 10,
        .weight = 284,
        .description = COMPOUND_STRING(
            "Its appearence is so gracious that it\n"
            "makes its foes lose their guards, but\n"
            "make no mistake: BEAUTIFLY can be\n"
            "ferocious opponents."),
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beautifly, 64, 56),
        FRONT_PIC_FEMALE(Beautifly, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Beautifly,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 10,
        BACK_PIC(Beautifly, 64, 64),
        BACK_PIC_FEMALE(Beautifly, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Beautifly),
        ICON(Beautifly, 0),
        .footprint = gMonFootprint_Beautifly,
        LEARNSETS(Beautifly),
=======
        .palette = gMonPalette_Beautifly,
        .shinyPalette = gMonShinyPalette_Beautifly,
        .iconSprite = gMonIcon_Beautifly,
        .iconPalIndex = 0,
        FOOTPRINT(Beautifly)
        OVERWORLD(
            sPicTable_Beautifly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Beautifly,
            gShinyOverworldPalette_Beautifly
        )
        .levelUpLearnset = sBeautiflyLevelUpLearnset,
        .teachableLearnset = sBeautiflyTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_SHED_SKIN, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("CASCOON"),
        .cryId = CRY_CASCOON,
        .natDexNum = NATIONAL_DEX_CASCOON,
        .categoryName = _("COCOON"),
        .height = 7,
        .weight = 115,
        .description = COMPOUND_STRING(
            "To avoid detection by its enemies, it hides\n"
            "motionlessly beneath large leaves and in\n"
            "the gaps of branches. It also attaches\n"
            "dead leaves to its body for camouflage."),
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cascoon, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Cascoon,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Cascoon, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Cascoon),
        ICON(Cascoon, 2),
        .footprint = gMonFootprint_Cascoon,
        LEARNSETS(Cascoon),
=======
        .palette = gMonPalette_Cascoon,
        .shinyPalette = gMonShinyPalette_Cascoon,
        .iconSprite = gMonIcon_Cascoon,
        .iconPalIndex = 2,
        FOOTPRINT(Cascoon)
        OVERWORLD(
            sPicTable_Cascoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Cascoon,
            gShinyOverworldPalette_Cascoon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCascoonLevelUpLearnset,
        .teachableLearnset = sCascoonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DUSTOX}),
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_FLUFFY, ABILITY_MULTISCALE, ABILITY_DEBRIS_SHIELD},
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("DUSTOX"),
        .cryId = CRY_DUSTOX,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        .categoryName = _("POISON MOTH"),
        .height = 12,
        .weight = 316,
        .description = COMPOUND_STRING(
            "The silk is produced is renowned\n"
            "worldwide, but must be ridden of\n"
            "toxins before it can be safely\n"
            "utilized."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dustox, 64, 48),
        FRONT_PIC_FEMALE(Dustox, 64, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Dustox,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 12,
        BACK_PIC(Dustox, 64, 64),
        BACK_PIC_FEMALE(Dustox, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Dustox),
        ICON(Dustox, 5),
        .footprint = gMonFootprint_Dustox,
        LEARNSETS(Dustox),
=======
        .palette = gMonPalette_Dustox,
        .shinyPalette = gMonShinyPalette_Dustox,
        .iconSprite = gMonIcon_Dustox,
        .iconPalIndex = 5,
        FOOTPRINT(Dustox)
        OVERWORLD(
            sPicTable_Dustox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dustox,
            gShinyOverworldPalette_Dustox
        )
        .levelUpLearnset = sDustoxLevelUpLearnset,
        .teachableLearnset = sDustoxTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
    [SPECIES_LOTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 44,
        .evYield_SpDefense = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_INNER_FOCUS, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("LOTAD"),
        .cryId = CRY_LOTAD,
        .natDexNum = NATIONAL_DEX_LOTAD,
        .categoryName = _("WATER WEED"),
        .height = 5,
        .weight = 26,
        .description = COMPOUND_STRING(
            "LOTAD spends all of its days lazily\n"
            "floating around in lakes or puddles.\n"
            "Sometimes, other POKéMON hitch a ride\n"
            "on its big leaf."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lotad, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Lotad,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lotad, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Lotad),
        ICON(Lotad, 4),
        .footprint = gMonFootprint_Lotad,
        LEARNSETS(Lotad),
=======
        .palette = gMonPalette_Lotad,
        .shinyPalette = gMonShinyPalette_Lotad,
        .iconSprite = gMonIcon_Lotad,
        .iconPalIndex = 4,
        FOOTPRINT(Lotad)
        OVERWORLD(
            sPicTable_Lotad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lotad,
            gShinyOverworldPalette_Lotad
        )
        .levelUpLearnset = sLotadLevelUpLearnset,
        .teachableLearnset = sLotadTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_LOMBRE}),
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 120,
        .expYield = 119,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_INNER_FOCUS, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("LOMBRE"),
        .cryId = CRY_LOMBRE,
        .natDexNum = NATIONAL_DEX_LOMBRE,
        .categoryName = _("UNINSPIRED"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "LOMBRE can be frequently found wandering\n"
            "around, not doing anything in particular.\n"
            "Once in a while it appears to hum a tune or\n"
            "perform a little dance, but for a short time."),
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lombre, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Lombre,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lombre, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Lombre),
        ICON(Lombre, 1),
        .footprint = gMonFootprint_Lombre,
        LEARNSETS(Lombre),
=======
        .palette = gMonPalette_Lombre,
        .shinyPalette = gMonShinyPalette_Lombre,
        .iconSprite = gMonIcon_Lombre,
        .iconPalIndex = 1,
        FOOTPRINT(Lombre)
        OVERWORLD(
            sPicTable_Lombre,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lombre,
            gShinyOverworldPalette_Lombre
        )
        .levelUpLearnset = sLombreLevelUpLearnset,
        .teachableLearnset = sLombreTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}),
    },

    [SPECIES_LUDICOLO] =
    {
                .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 216,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SINGER, ABILITY_DANCER, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("LUDICOLO"),
        .cryId = CRY_LUDICOLO,
        .natDexNum = NATIONAL_DEX_LUDICOLO,
        .categoryName = _("CAREFREE"),
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING(
            "After an early life spent moping around,\n"
            "LUDICOLO is now dedicated to performance\n"
            "arts. Its singing, dancing, and charming hat\n"
            "make it very popular at parties."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
        FRONT_PIC(Ludicolo, 56, 64),
        FRONT_PIC_FEMALE(Ludicolo, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Ludicolo,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Ludicolo, 64, 56),
        BACK_PIC_FEMALE(Ludicolo, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Ludicolo),
        ICON(Ludicolo, 1),
        .footprint = gMonFootprint_Ludicolo,
        LEARNSETS(Ludicolo),
=======
        .palette = gMonPalette_Ludicolo,
        .shinyPalette = gMonShinyPalette_Ludicolo,
        .iconSprite = gMonIcon_Ludicolo,
        .iconPalIndex = 1,
        FOOTPRINT(Ludicolo)
        OVERWORLD(
            sPicTable_Ludicolo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ludicolo,
            gShinyOverworldPalette_Ludicolo
        )
        .levelUpLearnset = sLudicoloLevelUpLearnset,
        .teachableLearnset = sLudicoloTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 44,
        .evYield_Defense = 1,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Seedot"),
        .cryId = CRY_SEEDOT,
        .natDexNum = NATIONAL_DEX_SEEDOT,
        .categoryName = _("Acorn"),
        .height = 5,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It hangs off branches and absorbs\n"
            "nutrients. When it finishes eating, its\n"
            "body becomes so heavy that it drops to\n"
            "the ground with a thump."),
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seedot, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Seedot,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Seedot, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Seedot),
        ICON(Seedot, 2),
        .footprint = gMonFootprint_Seedot,
        LEARNSETS(Seedot),
=======
        .palette = gMonPalette_Seedot,
        .shinyPalette = gMonShinyPalette_Seedot,
        .iconSprite = gMonIcon_Seedot,
        .iconPalIndex = 2,
        FOOTPRINT(Seedot)
        OVERWORLD(
            sPicTable_Seedot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Seedot,
            gShinyOverworldPalette_Seedot
        )
        .levelUpLearnset = sSeedotLevelUpLearnset,
        .teachableLearnset = sSeedotTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_NUZLEAF}),
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nuzleaf"),
        .cryId = CRY_NUZLEAF,
        .natDexNum = NATIONAL_DEX_NUZLEAF,
        .categoryName = _("Wily"),
        .height = 10,
        .weight = 280,
        .description = COMPOUND_STRING(
            "A forest-dwelling Pokémon that is skilled\n"
            "at climbing trees. Its long and pointed\n"
            "nose is its weak point. It loses power if\n"
            "the nose is gripped."),
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nuzleaf, 40, 56),
        FRONT_PIC_FEMALE(Nuzleaf, 40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Nuzleaf,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nuzleaf, 56, 48),
        BACK_PIC_FEMALE(Nuzleaf, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Nuzleaf),
        ICON(Nuzleaf, 1),
        .footprint = gMonFootprint_Nuzleaf,
        LEARNSETS(Nuzleaf),
=======
        .palette = gMonPalette_Nuzleaf,
        .shinyPalette = gMonShinyPalette_Nuzleaf,
        .iconSprite = gMonIcon_Nuzleaf,
        .iconPalIndex = 1,
        FOOTPRINT(Nuzleaf)
        OVERWORLD(
            sPicTable_Nuzleaf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nuzleaf,
            gShinyOverworldPalette_Nuzleaf
        )
        .levelUpLearnset = sNuzleafLevelUpLearnset,
        .teachableLearnset = sNuzleafTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}),
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 45,
        .expYield = 216,
        .evYield_Attack = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = { ABILITY_CHLOROPHYLL, ABILITY_WIND_RIDER, ABILITY_PICKPOCKET },
        #else
            .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shiftry"),
        .cryId = CRY_SHIFTRY,
        .natDexNum = NATIONAL_DEX_SHIFTRY,
        .categoryName = _("Wicked"),
        .height = 13,
        .weight = 596,
        .description = COMPOUND_STRING(
            "It is said to arrive on chilly, wintry winds.\n"
            "Feared from long ago as the guardian of\n"
            "forests, this Pokémon lives in a deep\n"
            "forest where people do not venture."),
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shiftry, 64, 56),
        FRONT_PIC_FEMALE(Shiftry, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Shiftry,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Shiftry, 64, 56),
        BACK_PIC_FEMALE(Shiftry, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Shiftry),
        ICON(Shiftry, 5),
        .footprint = gMonFootprint_Shiftry,
        LEARNSETS(Shiftry),
=======
        .palette = gMonPalette_Shiftry,
        .shinyPalette = gMonShinyPalette_Shiftry,
        .iconSprite = gMonIcon_Shiftry,
        .iconPalIndex = 5,
        FOOTPRINT(Shiftry)
        OVERWORLD(
            sPicTable_Shiftry,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shiftry,
            gShinyOverworldPalette_Shiftry
        )
        .levelUpLearnset = sShiftryLevelUpLearnset,
        .teachableLearnset = sShiftryTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_GUTS, ABILITY_GALE_WINGS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("TAILLOW"),
        .cryId = CRY_TAILLOW,
        .natDexNum = NATIONAL_DEX_TAILLOW,
        .categoryName = _("TINY SWALLOW"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "Although it is small, it is very courageous.\n"
            "It will take on a larger SKARMORY on an\n"
            "equal footing. However, its will weakens if\n"
            "it becomes hungry."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Taillow, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Taillow,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Taillow, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Taillow),
        ICON(Taillow, 2),
        .footprint = gMonFootprint_Taillow,
        LEARNSETS(Taillow),
=======
        .palette = gMonPalette_Taillow,
        .shinyPalette = gMonShinyPalette_Taillow,
        .iconSprite = gMonIcon_Taillow,
        .iconPalIndex = 2,
        FOOTPRINT(Taillow)
        OVERWORLD(
            sPicTable_Taillow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Taillow,
            gShinyOverworldPalette_Taillow
        )
        .levelUpLearnset = sTaillowLevelUpLearnset,
        .teachableLearnset = sTaillowTeachableLearnset,
        .eggMoveLearnset = sTaillowEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SWELLOW}),
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpDefense = 50,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpAttack  = 75,
        #else
            .baseSpAttack  = 50,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 159,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_GUTS, ABILITY_GALE_WINGS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("SWELLW"),
        .cryId = CRY_SWELLOW,
        .natDexNum = NATIONAL_DEX_SWELLOW,
        .categoryName = _("SWALLOW"),
        .height = 7,
        .weight = 198,
        .description = COMPOUND_STRING(
            "A SWELLOW dives upon prey from far above.\n"
            "It never misses its targets. It's swift\n"
            "and precise even in the most dire of\n"
            "situations."),
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swellow, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Swellow,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Swellow, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Swellow),
        ICON(Swellow, 2),
        .footprint = gMonFootprint_Swellow,
        LEARNSETS(Swellow),
=======
        .palette = gMonPalette_Swellow,
        .shinyPalette = gMonShinyPalette_Swellow,
        .iconSprite = gMonIcon_Swellow,
        .iconPalIndex = 2,
        FOOTPRINT(Swellow)
        OVERWORLD(
            sPicTable_Swellow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Swellow,
            gShinyOverworldPalette_Swellow
        )
        .levelUpLearnset = sSwellowLevelUpLearnset,
        .teachableLearnset = sSwellowTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_FLYING },
        .catchRate = 190,
        .expYield = 54,
        .evYield_Speed = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_7
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_KEEN_EYE, ABILITY_HYDRATION, ABILITY_RAIN_DISH },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RAIN_DISH },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wingull"),
        .cryId = CRY_WINGULL,
        .natDexNum = NATIONAL_DEX_WINGULL,
        .categoryName = _("Seagull"),
        .height = 6,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It makes its nest on a sheer cliff at the\n"
            "edge of the sea. It has trouble keeping\n"
            "its wings flapping in flight. Instead, it\n"
            "soars on updrafts."),
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wingull, 64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Wingull,
        .frontAnimId = ANIM_H_PIVOT,
        .enemyMonElevation = 15,
        BACK_PIC(Wingull, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Wingull),
        ICON(Wingull, 0),
        .footprint = gMonFootprint_Wingull,
        LEARNSETS(Wingull),
=======
        .palette = gMonPalette_Wingull,
        .shinyPalette = gMonShinyPalette_Wingull,
        .iconSprite = gMonIcon_Wingull,
        .iconPalIndex = 0,
        FOOTPRINT(Wingull)
        OVERWORLD(
            sPicTable_Wingull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Wingull,
            gShinyOverworldPalette_Wingull
        )
        .levelUpLearnset = sWingullLevelUpLearnset,
        .teachableLearnset = sWingullTeachableLearnset,
        .eggMoveLearnset = sWingullEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PELIPPER}),
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 154,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_7
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_KEEN_EYE, ABILITY_DRIZZLE, ABILITY_RAIN_DISH },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RAIN_DISH },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pelipper"),
        .cryId = CRY_PELIPPER,
        .natDexNum = NATIONAL_DEX_PELIPPER,
        .categoryName = _("Water Bird"),
        .height = 12,
        .weight = 280,
        .description = COMPOUND_STRING(
            "It skims the tops of waves as it flies.\n"
            "When it spots prey, it uses its large beak\n"
            "to scoop up the victim with water.\n"
            "It protects its eggs in its beak."),
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pelipper, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pelipper,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Pelipper, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Pelipper),
        ICON(Pelipper, 2),
        .footprint = gMonFootprint_Pelipper,
        LEARNSETS(Pelipper),
=======
        .palette = gMonPalette_Pelipper,
        .shinyPalette = gMonShinyPalette_Pelipper,
        .iconSprite = gMonIcon_Pelipper,
        .iconPalIndex = 2,
        FOOTPRINT(Pelipper)
        OVERWORLD(
            sPicTable_Pelipper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Pelipper,
            gShinyOverworldPalette_Pelipper
        )
        .levelUpLearnset = sPelipperLevelUpLearnset,
        .teachableLearnset = sPelipperTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
#define RALTS_FAMILY_TYPE2 (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_PSYCHIC)

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define RALTS_FAMILY_EGG_GROUPS { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS }
#else
    #define RALTS_FAMILY_EGG_GROUPS { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }
#endif

    [SPECIES_RALTS] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 235,
        .expYield = 40,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("RALTS"),
        .cryId = CRY_RALTS,
        .natDexNum = NATIONAL_DEX_RALTS,
        .categoryName = _("FEELING"),
        .height = 4,
        .weight = 66,
        .description = COMPOUND_STRING(
            "A Ralts has the power to sense the\n"
            "emotions of people and POKéMON with the\n"
            "horns on its head. It takes cover if it\n"
            "senses any hostility."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ralts, 24, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Ralts,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Ralts, 32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Ralts),
        ICON(Ralts, 1),
        .footprint = gMonFootprint_Ralts,
        LEARNSETS(Ralts),
=======
        .palette = gMonPalette_Ralts,
        .shinyPalette = gMonShinyPalette_Ralts,
        .iconSprite = gMonIcon_Ralts,
        .iconPalIndex = 1,
        FOOTPRINT(Ralts)
        OVERWORLD(
            sPicTable_Ralts,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ralts,
            gShinyOverworldPalette_Ralts
        )
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_KIRLIA}),
    },

    [SPECIES_KIRLIA] =
    {
         .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 120,
        .expYield = 97,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("KIRLIA"),
        .cryId = CRY_KIRLIA,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        .categoryName = _("EMOTION"),
        .height = 8,
        .weight = 202,
        .description = COMPOUND_STRING(
            "A KIRLIA has the psychic power to create \n"
            "a rip in the dimensions and see into the\n"
            "future. It is said to dance with pleasure\n"
            "on sunny mornings."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kirlia, 32, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Kirlia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kirlia, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Kirlia),
        ICON(Kirlia, 1),
        .footprint = gMonFootprint_Kirlia,
        LEARNSETS(Kirlia),
=======
        .palette = gMonPalette_Kirlia,
        .shinyPalette = gMonShinyPalette_Kirlia,
        .iconSprite = gMonIcon_Kirlia,
        .iconPalIndex = 1,
        FOOTPRINT(Kirlia)
        OVERWORLD(
            sPicTable_Kirlia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kirlia,
            gShinyOverworldPalette_Kirlia
        )
        .levelUpLearnset = sKirliaLevelUpLearnset,
        .teachableLearnset = sKirliaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GARDEVOIR},
                                {EVO_ITEM, ITEM_DAWN_STONE, SPECIES_GALLADE}),
    },

#define GARDEVOIR_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,               \
        .types = { TYPE_PSYCHIC, RALTS_FAMILY_TYPE2 },      \
        .bodyColor = BODY_COLOR_WHITE,                      \
        .speciesName = _("GARDEVOIR"),                      \
        .natDexNum = NATIONAL_DEX_GARDEVOIR,                \
        .categoryName = _("EMBRACE"),                       \
        .height = 16,                                       \
        .weight = 484,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Gardevoir,               \
        LEARNSETS(Gardevoir),                               \
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable, \
        .formChangeTable = sGardevoirFormChangeTable

    [SPECIES_GARDEVOIR] =
    {
        GARDEVOIR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
        .expYield = 233,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_BLACK_HOLE},
        .cryId = CRY_GARDEVOIR,
        .description = COMPOUND_STRING(
            "It apparently does not feel the pull of\n"
            "gravity because it supports itself with\n"
            "psychic powers. It will give its life to\n"
            "protect its TRAINER."),
        FRONT_PIC(Gardevoir, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gardevoir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Gardevoir, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Gardevoir),
        ICON(Gardevoir, 1),
=======
        .palette = gMonPalette_Gardevoir,
        .shinyPalette = gMonShinyPalette_Gardevoir,
        .iconSprite = gMonIcon_Gardevoir,
        .iconPalIndex = 1,
        FOOTPRINT(Gardevoir)
        OVERWORLD(
            sPicTable_Gardevoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gardevoir,
            gShinyOverworldPalette_Gardevoir
        )
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable,
        .formChangeTable = sGardevoirFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARDEVOIR_MEGA] =
    {
        GARDEVOIR_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .expYield = 278,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .cryId = CRY_GARDEVOIR_MEGA,
        .description = COMPOUND_STRING(
            "By opening its heart, Mega Gardevoir\n"
            "becomes able to use tremendous psychic\n"
            "power. The red plate in its chest is said to\n"
            "be a physical manifestation of its heart."),
        FRONT_PIC(GardevoirMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GardevoirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GardevoirMega, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(GardevoirMega),
        ICON(GardevoirMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
#define GALLADE_MISC_INFO                                   \
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING },           \
        .catchRate = 45,                                    \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,               \
        .bodyColor = BODY_COLOR_WHITE,                      \
        .speciesName = _("GALLADE"),                        \
        .natDexNum = NATIONAL_DEX_GALLADE,                  \
        .categoryName = _("BLADE"),                         \
        .height = 16,                                       \
        .pokemonScale = 259,                                \
        .pokemonOffset = 1,                                 \
        .trainerScale = 296,                                \
        .trainerOffset = 1,                                 \
        .footprint = gMonFootprint_Gallade,                 \
        LEARNSETS(Gallade),                                 \
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,   \
        .formChangeTable = sGalladeFormChangeTable

    [SPECIES_GALLADE] =
    {
        GALLADE_MISC_INFO,
          .baseHP        = 70,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .expYield = 233,
        #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = {ABILITY_LIMBER, ABILITY_SHARPNESS, ABILITY_BLACK_HOLE},
        #else
            .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED },
        #endif
        .cryId = CRY_GALLADE,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Despite having taken up the sword,\n"
            "GALLADE is still a master of\n"
            "psychic abilities. It can sense what\n"
            "its foe is thinking."),
        FRONT_PIC(Gallade, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Gallade,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Gallade, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Gallade),
        ICON(Gallade, 1),
=======
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gallade,
            gShinyOverworldPalette_Gallade
        )
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        GALLADE_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .expYield = 278,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS },
        .cryId = CRY_GALLADE_MEGA,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        FRONT_PIC(GalladeMega, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GalladeMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GalladeMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(GalladeMega),
        ICON(GalladeMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = { TYPE_BUG, TYPE_WATER},
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_UNNERVE, ABILITY_WATER_BUBBLE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("SURSKIT"),
        .cryId = CRY_SURSKIT,
        .natDexNum = NATIONAL_DEX_SURSKIT,
        .categoryName = _("POND SKATER"),
        .height = 5,
        .weight = 17,
        .description = COMPOUND_STRING(
            "They gather on puddles after evening\n"
            "downpours, gliding across the surface\n"
            "of water as if sliding. It likes to keep\n"
            "its body moist all the time."),
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Surskit, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Surskit,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Surskit, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SPRING,
<<<<<<< HEAD
        PALETTES(Surskit),
        ICON(Surskit, 0),
        .footprint = gMonFootprint_Surskit,
        LEARNSETS(Surskit),
=======
        .palette = gMonPalette_Surskit,
        .shinyPalette = gMonShinyPalette_Surskit,
        .iconSprite = gMonIcon_Surskit,
        .iconPalIndex = 0,
        FOOTPRINT(Surskit)
        OVERWORLD(
            sPicTable_Surskit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Surskit,
            gShinyOverworldPalette_Surskit
        )
        .levelUpLearnset = sSurskitLevelUpLearnset,
        .teachableLearnset = sSurskitTeachableLearnset,
        .eggMoveLearnset = sSurskitEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_MASQUERAIN}),
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpDefense = 85,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 90,
            .baseSpAttack  = 100,
        #else
            .baseSpeed     = 60,
            .baseSpAttack  = 80,
        #endif
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 75,
        .expYield = 159,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_WATER_BUBBLE, ABILITY_DRIZZLE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Masquerain"),
        .cryId = CRY_MASQUERAIN,
        .natDexNum = NATIONAL_DEX_MASQUERAIN,
        .categoryName = _("Eyeball"),
        .height = 8,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It likes to spray water in the air, and then\n"
            "flutter in it as it falls down. Its large\n"
            "patterns on its antennae are very reflective,\n"
            "often startling unsuspecting foes."),
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Masquerain, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Masquerain,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(Masquerain, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Masquerain),
        ICON(Masquerain, 0),
        .footprint = gMonFootprint_Masquerain,
        LEARNSETS(Masquerain),
=======
        .palette = gMonPalette_Masquerain,
        .shinyPalette = gMonShinyPalette_Masquerain,
        .iconSprite = gMonIcon_Masquerain,
        .iconPalIndex = 0,
        FOOTPRINT(Masquerain)
        OVERWORLD(
            sPicTable_Masquerain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Masquerain,
            gShinyOverworldPalette_Masquerain
        )
        .levelUpLearnset = sMasquerainLevelUpLearnset,
        .teachableLearnset = sMasquerainTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 59,
        .evYield_HP        = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_POISON_HEAL, ABILITY_TECHNICIAN},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("SHROOMISH"),
        .cryId = CRY_SHROOMISH,
        .natDexNum = NATIONAL_DEX_SHROOMISH,
        .categoryName = _("MUSHROOM"),
        .height = 4,
        .weight = 45,
        .description = COMPOUND_STRING(
            "It loves to eat damp, composted soil in\n"
            "forests. If you enter a forest after a\n"
            "long rain, you can see many SHROOMISH\n"
            "feasting on composted soil."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shroomish, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shroomish,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Shroomish, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Shroomish),
        ICON(Shroomish, 1),
        .footprint = gMonFootprint_Shroomish,
        LEARNSETS(Shroomish),
=======
        .palette = gMonPalette_Shroomish,
        .shinyPalette = gMonShinyPalette_Shroomish,
        .iconSprite = gMonIcon_Shroomish,
        .iconPalIndex = 1,
        FOOTPRINT(Shroomish)
        OVERWORLD(
            sPicTable_Shroomish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shroomish,
            gShinyOverworldPalette_Shroomish
        )
        .levelUpLearnset = sShroomishLevelUpLearnset,
        .teachableLearnset = sShroomishTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BRELOOM}),
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_FIGHTING },
        .catchRate = 90,
        .expYield = 161,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_POISON_HEAL, ABILITY_TECHNICIAN},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_TECHNICIAN },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_TECHNICIAN },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("BRELOOM"),
        .cryId = CRY_BRELOOM,
        .natDexNum = NATIONAL_DEX_BRELOOM,
        .categoryName = _("MUSHROOM"),
        .height = 12,
        .weight = 392,
        .description = COMPOUND_STRING(
            "After gaining hands upon evolution,\n"
            "it seems eager to put them to good use.\n"
            "Unsuspecting TRAINERs getting too close are\n"
            "in risk of getting punched."),
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Breloom, 48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Breloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Breloom, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Breloom),
        ICON(Breloom, 1),
        .footprint = gMonFootprint_Breloom,
        LEARNSETS(Breloom),
=======
        .palette = gMonPalette_Breloom,
        .shinyPalette = gMonShinyPalette_Breloom,
        .iconSprite = gMonIcon_Breloom,
        .iconPalIndex = 1,
        FOOTPRINT(Breloom)
        OVERWORLD(
            sPicTable_Breloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Breloom,
            gShinyOverworldPalette_Breloom
        )
        .levelUpLearnset = sBreloomLevelUpLearnset,
        .teachableLearnset = sBreloomTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TRUANT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slakoth"),
        .cryId = CRY_SLAKOTH,
        .natDexNum = NATIONAL_DEX_SLAKOTH,
        .categoryName = _("Slacker"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "It sleeps virtually all day and night long.\n"
            "It doesn't change its nest its entire life,\n"
            "but it sometimes travels great distances\n"
            "by swimming in rivers."),
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Slakoth, 56, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Slakoth,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slakoth, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Slakoth),
        ICON(Slakoth, 2),
        .footprint = gMonFootprint_Slakoth,
        LEARNSETS(Slakoth),
=======
        .palette = gMonPalette_Slakoth,
        .shinyPalette = gMonShinyPalette_Slakoth,
        .iconSprite = gMonIcon_Slakoth,
        .iconPalIndex = 2,
        FOOTPRINT(Slakoth)
        OVERWORLD(
            sPicTable_Slakoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slakoth,
            gShinyOverworldPalette_Slakoth
        )
        .levelUpLearnset = sSlakothLevelUpLearnset,
        .teachableLearnset = sSlakothTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_VIGOROTH}),
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 154,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vigoroth"),
        .cryId = CRY_VIGOROTH,
        .natDexNum = NATIONAL_DEX_VIGOROTH,
        .categoryName = _("Wild Monkey"),
        .height = 14,
        .weight = 465,
        .description = COMPOUND_STRING(
            "It can't keep still because its blood boils\n"
            "with energy. It runs through the fields\n"
            "and mountains all day to calm itself. If it\n"
            "doesn't, it can't sleep at night."),
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vigoroth, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vigoroth,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Vigoroth, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Vigoroth),
        ICON(Vigoroth, 2),
        .footprint = gMonFootprint_Vigoroth,
        LEARNSETS(Vigoroth),
=======
        .palette = gMonPalette_Vigoroth,
        .shinyPalette = gMonShinyPalette_Vigoroth,
        .iconSprite = gMonIcon_Vigoroth,
        .iconPalIndex = 2,
        FOOTPRINT(Vigoroth)
        OVERWORLD(
            sPicTable_Vigoroth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vigoroth,
            gShinyOverworldPalette_Vigoroth
        )
        .levelUpLearnset = sVigorothLevelUpLearnset,
        .teachableLearnset = sVigorothTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SLAKING}),
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 252,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TRUANT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slaking"),
        .cryId = CRY_SLAKING,
        .natDexNum = NATIONAL_DEX_SLAKING,
        .categoryName = _("Lazy"),
        .height = 20,
        .weight = 1305,
        .description = COMPOUND_STRING(
            "Hordes of Slaking gather around trees\n"
            "when fruits come into season. They wait\n"
            "around patiently for ripened fruits to fall\n"
            "out of the trees."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
        FRONT_PIC(Slaking, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Slaking,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slaking, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Slaking),
        ICON(Slaking, 2),
        .footprint = gMonFootprint_Slaking,
        LEARNSETS(Slaking),
=======
        .palette = gMonPalette_Slaking,
        .shinyPalette = gMonShinyPalette_Slaking,
        .iconSprite = gMonIcon_Slaking,
        .iconPalIndex = 2,
        FOOTPRINT(Slaking)
        OVERWORLD(
            sPicTable_Slaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slaking,
            gShinyOverworldPalette_Slaking
        )
        .levelUpLearnset = sSlakingLevelUpLearnset,
        .teachableLearnset = sSlakingTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
    [SPECIES_NINCADA] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 53,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_SAP_SIPPER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("NINCADA"),
        .cryId = CRY_NINCADA,
        .natDexNum = NATIONAL_DEX_NINCADA,
        .categoryName = _("TRAINEE"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "It makes its nest at the roots of a mighty\n"
            "tree, sucking on its roots for nourishment.\n"
            "It's nearly blind, and uses its antennaes\n"
            "to probe its surroundings."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nincada, 56, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Nincada,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nincada, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Nincada),
        ICON(Nincada, 1),
        .footprint = gMonFootprint_Nincada,
        LEARNSETS(Nincada),
=======
        .palette = gMonPalette_Nincada,
        .shinyPalette = gMonShinyPalette_Nincada,
        .iconSprite = gMonIcon_Nincada,
        .iconPalIndex = 1,
        FOOTPRINT(Nincada)
        OVERWORLD(
            sPicTable_Nincada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Nincada,
            gShinyOverworldPalette_Nincada
        )
        .levelUpLearnset = sNincadaLevelUpLearnset,
        .teachableLearnset = sNincadaTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                                {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}),
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 160,

        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
            .abilities = { ABILITY_SPEED_BOOST, ABILITY_SAP_SIPPER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("NINJASK"),
        .cryId = CRY_NINJASK,
        .natDexNum = NATIONAL_DEX_NINJASK,
        .categoryName = _("NINJA"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "It moves so fast that, for a time, it was\n"
            "believed to have the ability to turn\n"
            "invisible. It is known to congregate around\n"
            "tree sap."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ninjask, 64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Ninjask,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        BACK_PIC(Ninjask, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Ninjask),
        ICON(Ninjask, 1),
        .footprint = gMonFootprint_Ninjask,
        LEARNSETS(Ninjask),
=======
        .palette = gMonPalette_Ninjask,
        .shinyPalette = gMonShinyPalette_Ninjask,
        .iconSprite = gMonIcon_Ninjask,
        .iconPalIndex = 1,
        FOOTPRINT(Ninjask)
        OVERWORLD(
            sPicTable_Ninjask,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Ninjask,
            gShinyOverworldPalette_Ninjask
        )
        .levelUpLearnset = sNinjaskLevelUpLearnset,
        .teachableLearnset = sNinjaskTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 120,
        .baseDefense   = 45,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 83,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_WONDER_GUARD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("SHEDINJA"),
        .cryId = CRY_SHEDINJA,
        .natDexNum = NATIONAL_DEX_SHEDINJA,
        .categoryName = _("SHED"),
        .height = 8,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Looking into its back hole for too long\n"
            "causes the insurgence of a strong feeling\n"
            "of dread. Some believe it might be a gate\n"
            "to the afterlife."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shedinja, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Shedinja,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Shedinja, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Shedinja),
        ICON(Shedinja, 1),
        .footprint = gMonFootprint_Shedinja,
        LEARNSETS(Shedinja),
=======
        .palette = gMonPalette_Shedinja,
        .shinyPalette = gMonShinyPalette_Shedinja,
        .iconSprite = gMonIcon_Shedinja,
        .iconPalIndex = 1,
        FOOTPRINT(Shedinja)
        OVERWORLD(
            sPicTable_Shedinja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Shedinja,
            gShinyOverworldPalette_Shedinja
        )
        .levelUpLearnset = sShedinjaLevelUpLearnset,
        .teachableLearnset = sShedinjaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
    [SPECIES_WHISMUR] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 48,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SCRAPPY, ABILITY_PUNK_ROCK},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("WHISMUR"),
        .cryId = CRY_WHISMUR,
        .natDexNum = NATIONAL_DEX_WHISMUR,
        .categoryName = _("WHISPER"),
        .height = 6,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Its cries equal a jet plane in volume.\n"
            "It inhales through its ear canals. Because\n"
            "of this system, it can cry continually\n"
            "without having to catch its breath."),
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Whismur, 48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Whismur,
        .frontAnimId = ANIM_H_SLIDE,
        BACK_PIC(Whismur, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Whismur),
        ICON(Whismur, 1),
        .footprint = gMonFootprint_Whismur,
        LEARNSETS(Whismur),
=======
        .palette = gMonPalette_Whismur,
        .shinyPalette = gMonShinyPalette_Whismur,
        .iconSprite = gMonIcon_Whismur,
        .iconPalIndex = 1,
        FOOTPRINT(Whismur)
        OVERWORLD(
            sPicTable_Whismur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whismur,
            gShinyOverworldPalette_Whismur
        )
        .levelUpLearnset = sWhismurLevelUpLearnset,
        .teachableLearnset = sWhismurTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LOUDRED}),
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 126,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .abilities = { ABILITY_SCRAPPY, ABILITY_PUNK_ROCK},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("LOUDRED"),
        .cryId = CRY_LOUDRED,
        .natDexNum = NATIONAL_DEX_LOUDRED,
        .categoryName = _("BIG VOICE"),
        .height = 10,
        .weight = 405,
        .description = COMPOUND_STRING(
            "It positions the round speakers on its\n"
            "head to assail foes with ultrasonic waves\n"
            "at massive volume. It builds power by\n"
            "stomping the ground."),
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Loudred, 56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Loudred,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Loudred, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Loudred),
        ICON(Loudred, 2),
        .footprint = gMonFootprint_Loudred,
        LEARNSETS(Loudred),
=======
        .palette = gMonPalette_Loudred,
        .shinyPalette = gMonShinyPalette_Loudred,
        .iconSprite = gMonIcon_Loudred,
        .iconPalIndex = 2,
        FOOTPRINT(Loudred)
        OVERWORLD(
            sPicTable_Loudred,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Loudred,
            gShinyOverworldPalette_Loudred
        )
        .levelUpLearnset = sLoudredLevelUpLearnset,
        .teachableLearnset = sLoudredTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_EXPLOUD}),
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 105,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 73 : 63,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 221,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SCRAPPY, ABILITY_PUNK_ROCK},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("EXPLOUD"),
        .cryId = CRY_EXPLOUD,
        .natDexNum = NATIONAL_DEX_EXPLOUD,
        .categoryName = _("LOUD NOISE"),
        .height = 15,
        .weight = 840,
        .description = COMPOUND_STRING(
            "It has sound-generating organs all over\n"
            "its body. It communicates with others by\n"
            "adjusting the tone and volume of the cries\n"
            "it emits."),
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Exploud, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exploud,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Exploud, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
<<<<<<< HEAD
        PALETTES(Exploud),
        ICON(Exploud, 2),
        .footprint = gMonFootprint_Exploud,
        LEARNSETS(Exploud),
=======
        .palette = gMonPalette_Exploud,
        .shinyPalette = gMonShinyPalette_Exploud,
        .iconSprite = gMonIcon_Exploud,
        .iconPalIndex = 2,
        FOOTPRINT(Exploud)
        OVERWORLD(
            sPicTable_Exploud,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Exploud,
            gShinyOverworldPalette_Exploud
        )
        .levelUpLearnset = sExploudLevelUpLearnset,
        .teachableLearnset = sExploudTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 180,
        .expYield = 47,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("MAKUHITA"),
        .cryId = CRY_MAKUHITA,
        .natDexNum = NATIONAL_DEX_MAKUHITA,
        .categoryName = _("SUMO"),
        .height = 10,
        .weight = 864,
        .description = COMPOUND_STRING(
            "It practices its slap by hitting tree\n"
            "trunks repeatedly. Occasionally, it\n"
            "mistakes EXEGGUTOR for trees, and"
            "gets pelted with eggs."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Makuhita, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Makuhita,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Makuhita, 56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Makuhita),
        ICON(Makuhita, 1),
        .footprint = gMonFootprint_Makuhita,
        LEARNSETS(Makuhita),
=======
        .palette = gMonPalette_Makuhita,
        .shinyPalette = gMonShinyPalette_Makuhita,
        .iconSprite = gMonIcon_Makuhita,
        .iconPalIndex = 1,
        FOOTPRINT(Makuhita)
        OVERWORLD(
            sPicTable_Makuhita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Makuhita,
            gShinyOverworldPalette_Makuhita
        )
        .levelUpLearnset = sMakuhitaLevelUpLearnset,
        .teachableLearnset = sMakuhitaTeachableLearnset,
        .eggMoveLearnset = sMakuhitaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HARIYAMA}),
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 145,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 200,
        .expYield = 166,
        .evYield_HP = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("HARIYAMA"),
        .cryId = CRY_HARIYAMA,
        .natDexNum = NATIONAL_DEX_HARIYAMA,
        .categoryName = _("SUMO"),
        .height = 23,
        .weight = 2538,
        .description = COMPOUND_STRING(
            "Before fighting, it has the habit of\n"
            "throwing salt on the ground as a ritual.\n"
            "It may look fat, but its body is actually\n"
            "fully composed of solid muscle."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
        FRONT_PIC(Hariyama, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hariyama,
        .frontAnimId = ANIM_ROTATE_UP_TO_SIDES,
        BACK_PIC(Hariyama, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Hariyama),
        ICON(Hariyama, 2),
        .footprint = gMonFootprint_Hariyama,
        LEARNSETS(Hariyama),
=======
        .palette = gMonPalette_Hariyama,
        .shinyPalette = gMonShinyPalette_Hariyama,
        .iconSprite = gMonIcon_Hariyama,
        .iconPalIndex = 2,
        FOOTPRINT(Hariyama)
        OVERWORLD(
            sPicTable_Hariyama,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hariyama,
            gShinyOverworldPalette_Hariyama
        )
        .levelUpLearnset = sHariyamaLevelUpLearnset,
        .teachableLearnset = sHariyamaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 255,
        .expYield = 75,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TRANSISTOR, ABILITY_MAGNET_PULL, ABILITY_STATIC},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("NOSEPASS"),
        .cryId = CRY_NOSEPASS,
        .natDexNum = NATIONAL_DEX_NOSEPASS,
        .categoryName = _("COMPASS"),
        .height = 10,
        .weight = 970,
        .description = COMPOUND_STRING(
            "Its nose tends to drift towards the\n"
            "magnetic north. When it falls asleep,\n"
            "it slowly rotates towardws its\n"
            "direction."),
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
        FRONT_PIC(Nosepass, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Nosepass,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Nosepass, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Nosepass),
        ICON(Nosepass, 0),
        .footprint = gMonFootprint_Nosepass,
        LEARNSETS(Nosepass),
=======
        .palette = gMonPalette_Nosepass,
        .shinyPalette = gMonShinyPalette_Nosepass,
        .iconSprite = gMonIcon_Nosepass,
        .iconPalIndex = 0,
        FOOTPRINT(Nosepass)
        OVERWORLD(
            sPicTable_Nosepass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nosepass,
            gShinyOverworldPalette_Nosepass
        )
        .levelUpLearnset = sNosepassLevelUpLearnset,
        .teachableLearnset = sNosepassTeachableLearnset,
        .eggMoveLearnset = sNosepassEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_PROBOPASS},
                                {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_PROBOPASS}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 95,
        .baseSpDefense = 150,
        .types = { TYPE_ROCK, TYPE_STEEL},
        .catchRate = 60,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TRANSISTOR, ABILITY_MAGNET_PULL, ABILITY_ELECTRIC_SURGE},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("PROBOPASS"),
        .cryId = CRY_PROBOPASS,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("COMPASS"),
        .height = 14,
        .weight = 3400,
        .description = COMPOUND_STRING(
            "It freely controls three units called\n"
            "Mini-Noses using magnetic force.\n"
            "With them, it can attack its foes from\n"
            "three directions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        FRONT_PIC(Probopass, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Probopass,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 6,
        BACK_PIC(Probopass, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Probopass),
        ICON(Probopass, 0),
        .footprint = gMonFootprint_Probopass,
        LEARNSETS(Probopass),
=======
        .palette = gMonPalette_Probopass,
        .shinyPalette = gMonShinyPalette_Probopass,
        .iconSprite = gMonIcon_Probopass,
        .iconPalIndex = 0,
        FOOTPRINT(Probopass)
        OVERWORLD(
            sPicTable_Probopass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Probopass,
            gShinyOverworldPalette_Probopass
        )
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 52,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_NORMALIZE, ABILITY_PRANKSTER},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("SKITTY"),
        .cryId = CRY_SKITTY,
        .natDexNum = NATIONAL_DEX_SKITTY,
        .categoryName = _("KITTEN"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "A SKITTY's adorably cute behavior makes it\n"
            "highly popular. It's often underestimated\n"
            "in battle, but it can turn its cuteness to\n"
            "its strenght by surprising its opponents."),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Skitty, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Skitty,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Skitty, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Skitty),
        ICON(Skitty, 0),
        .footprint = gMonFootprint_Skitty,
        LEARNSETS(Skitty),
=======
        .palette = gMonPalette_Skitty,
        .shinyPalette = gMonShinyPalette_Skitty,
        .iconSprite = gMonIcon_Skitty,
        .iconPalIndex = 0,
        FOOTPRINT(Skitty)
        OVERWORLD(
            sPicTable_Skitty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skitty,
            gShinyOverworldPalette_Skitty
        )
        .levelUpLearnset = sSkittyLevelUpLearnset,
        .teachableLearnset = sSkittyTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}),
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 90,
        #else
            .baseSpeed     = 70,
        #endif
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 60,
        .expYield = 140,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_NORMALIZE, ABILITY_PRANKSTER},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("DELCATTY"),
        .cryId = CRY_DELCATTY,
        .natDexNum = NATIONAL_DEX_DELCATTY,
        .categoryName = _("PRIM"),
        .height = 11,
        .weight = 326,
        .description = COMPOUND_STRING(
            "It's obsessed with cleanliness, grooming,\n"
            "itself several times a day. Its fur is soft\n"
            "and shiny, making this POKéMON very popular\n"
            "with cat enthusiasts."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Delcatty, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Delcatty,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Delcatty, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Delcatty),
        ICON(Delcatty, 2),
        .footprint = gMonFootprint_Delcatty,
        LEARNSETS(Delcatty),
=======
        .palette = gMonPalette_Delcatty,
        .shinyPalette = gMonShinyPalette_Delcatty,
        .iconSprite = gMonIcon_Delcatty,
        .iconPalIndex = 2,
        FOOTPRINT(Delcatty)
        OVERWORLD(
            sPicTable_Delcatty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Delcatty,
            gShinyOverworldPalette_Delcatty
        )
        .levelUpLearnset = sDelcattyLevelUpLearnset,
        .teachableLearnset = sDelcattyTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
#define SABLEYE_MISC_INFO                                           \
        .types = { TYPE_DARK, TYPE_GHOST },                         \
        .catchRate = 45,                                            \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = 35,                                           \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .bodyColor = BODY_COLOR_PURPLE,                             \
        .speciesName = _("SABLEYE"),                                \
        .natDexNum = NATIONAL_DEX_SABLEYE,                          \
        .categoryName = _("DARKNESS"),                              \
        .height = 5,                                                \
        .footprint = gMonFootprint_Sableye,                         \
        LEARNSETS(Sableye),                                         \
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,           \
        .formChangeTable = sSableyeFormChangeTable

    [SPECIES_SABLEYE] =
    {
        SABLEYE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .expYield = 133,
        .itemRare = ITEM_WIDE_LENS,
<<<<<<< HEAD
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER },
=======
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sableye"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_SABLEYE,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It digs branching holes in caves using its\n"
            "sharp claws in search of gems and rocks to.\n"
            "eat. Thanks to the minerals present in its\n"
            "food, its body is shiny."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sableye, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sableye,
        .frontAnimId = ANIM_GLOW_BLACK,
        BACK_PIC(Sableye, 48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Sableye),
        ICON(Sableye, 2),
=======
        .palette = gMonPalette_Sableye,
        .shinyPalette = gMonShinyPalette_Sableye,
        .iconSprite = gMonIcon_Sableye,
        .iconPalIndex = 2,
        FOOTPRINT(Sableye)
        OVERWORLD(
            sPicTable_Sableye,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sableye,
            gShinyOverworldPalette_Sableye
        )
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SABLEYE_MEGA] =
    {
        SABLEYE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .expYield = 168,
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .cryId = CRY_SABLEYE_MEGA,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Bathed in the energy of Mega Evolution,\n"
            "the gemstone on its chest expands, rips\n"
            "through its skin, and falls out."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SableyeMega, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SableyeMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SableyeMega, 64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(SableyeMega),
        ICON(SableyeMega, 2),
        .isMegaEvolution = TRUE,
<<<<<<< HEAD
=======
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_FAIRY }
#else
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

#define MAWILE_MISC_INFO                                    \
        .types = MAWILE_TYPES,                              \
        .catchRate = 45,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_FAST,                          \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },  \
        .bodyColor = BODY_COLOR_BLACK,                      \
        .speciesName = _("MAWILE"),                         \
        .natDexNum = NATIONAL_DEX_MAWILE,                   \
        .categoryName = _("DECEIVER"),                      \
        .footprint = gMonFootprint_Mawile,                  \
        LEARNSETS(Mawile),                                  \
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,    \
        .formChangeTable = sMawileFormChangeTable

    [SPECIES_MAWILE] =
    {
        MAWILE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 115,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 133,
        .itemRare = ITEM_IRON_BALL,
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE },
        .cryId = CRY_MAWILE,
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its giant jaws are actually steel horns\n"
            "that transformed. It fools foes into\n"
            "complacency with its adorable gestures,\n"
            "then chomps them with its huge jaws."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mawile, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Mawile,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Mawile, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Mawile),
        ICON(Mawile, 2),
=======
        .palette = gMonPalette_Mawile,
        .shinyPalette = gMonShinyPalette_Mawile,
        .iconSprite = gMonIcon_Mawile,
        .iconPalIndex = 2,
        FOOTPRINT(Mawile)
        OVERWORLD(
            sPicTable_Mawile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mawile,
            gShinyOverworldPalette_Mawile
        )
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MAWILE_MEGA] =
    {
        MAWILE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 168,
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_HUGE_POWER },
        .cryId = CRY_MAWILE_MEGA,
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its two sets of jaws thrash about\n"
            "violently as if they each had a will of\n"
            "their own. One gnash from them can turn a\n"
            "boulder to dust."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MawileMega, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_MawileMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MawileMega, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(MawileMega),
        ICON(MawileMega, 0),
        .isMegaEvolution = TRUE,
<<<<<<< HEAD
=======
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
    [SPECIES_ARON] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .catchRate = 180,
        .expYield = 66,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_EARTH_EATER, ABILITY_SUPERALLOY, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("ARON"),
        .cryId = CRY_ARON,
        .natDexNum = NATIONAL_DEX_ARON,
        .categoryName = _("IRON ARMOR"),
        .height = 4,
        .weight = 600,
        .description = COMPOUND_STRING(
            "In order to mantain its iron body, it\n"
            "frequently eats rocks, iron ore and,\n"
            "occasionally, manmade steel items\n"
            "such as railroad tracks."),
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Aron, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Aron,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Aron, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Aron),
        ICON(Aron, 2),
        .footprint = gMonFootprint_Aron,
        LEARNSETS(Aron),
=======
        .palette = gMonPalette_Aron,
        .shinyPalette = gMonShinyPalette_Aron,
        .iconSprite = gMonIcon_Aron,
        .iconPalIndex = 2,
        FOOTPRINT(Aron)
        OVERWORLD(
            sPicTable_Aron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aron,
            gShinyOverworldPalette_Aron
        )
        .levelUpLearnset = sAronLevelUpLearnset,
        .teachableLearnset = sAronTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_LAIRON}),
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .catchRate = 90,
        .expYield = 151,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_EARTH_EATER, ABILITY_SUPERALLOY, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("LAIRON"),
        .cryId = CRY_LAIRON,
        .natDexNum = NATIONAL_DEX_LAIRON,
        .categoryName = _("IRON ARMOR"),
        .height = 9,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Lairon live in mountains brimming with\n"
            "spring water and iron ore. As a result,\n"
            "these POKéMON often come into conflict\n"
            "with humans."),
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lairon, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Lairon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lairon, 64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Lairon),
        ICON(Lairon, 2),
        .footprint = gMonFootprint_Lairon,
        LEARNSETS(Lairon),
=======
        .palette = gMonPalette_Lairon,
        .shinyPalette = gMonShinyPalette_Lairon,
        .iconSprite = gMonIcon_Lairon,
        .iconPalIndex = 2,
        FOOTPRINT(Lairon)
        OVERWORLD(
            sPicTable_Lairon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lairon,
            gShinyOverworldPalette_Lairon
        )
        .levelUpLearnset = sLaironLevelUpLearnset,
        .teachableLearnset = sLaironTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_AGGRON}),
    },

#define AGGRON_MISC_INFO                                        \
        .catchRate = 45,                                        \
        .itemRare = ITEM_HARD_STONE,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 35,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .bodyColor = BODY_COLOR_GRAY,                           \
        .speciesName = _("AGGRON"),                             \
        .natDexNum = NATIONAL_DEX_AGGRON,                       \
        .categoryName = _("IRON ARMOR"),                        \
        .footprint = gMonFootprint_Aggron,                      \
        LEARNSETS(Aggron),                                      \
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,        \
        .formChangeTable = sAggronFormChangeTable

    [SPECIES_AGGRON] =
    {
        AGGRON_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .expYield = 239,
        .abilities = {ABILITY_EARTH_EATER, ABILITY_SUPERALLOY, ABILITY_SAND_FORCE},
        .cryId = CRY_AGGRON,
        .height = 21,
        .weight = 3600,
        .description = COMPOUND_STRING(
            "It claims mountains as its territory,\n"
            "and fiercely protects them from invaders.\n"
            "After natural disasters it's common to see\n"
            "AGGRON beautifully restoring the land."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        FRONT_PIC(Aggron, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Aggron,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Aggron, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Aggron),
        ICON(Aggron, 2),
=======
        .palette = gMonPalette_Aggron,
        .shinyPalette = gMonShinyPalette_Aggron,
        .iconSprite = gMonIcon_Aggron,
        .iconPalIndex = 2,
        FOOTPRINT(Aggron)
        OVERWORLD(
            sPicTable_Aggron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aggron,
            gShinyOverworldPalette_Aggron
        )
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGGRON_MEGA] =
    {
        AGGRON_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .expYield = 284,
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .cryId = CRY_AGGRON_MEGA,
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Aggron Mega Evolves into\n"
            "Mega Aggron, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        FRONT_PIC(AggronMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AggronMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AggronMega, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(AggronMega),
        ICON(AggronMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_FIGHTING, TYPE_PSYCHIC },
        .catchRate = 180,
        .expYield = 56,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("MEDITITE"),
        .cryId = CRY_MEDITITE,
        .natDexNum = NATIONAL_DEX_MEDITITE,
        .categoryName = _("MEDITATE"),
        .height = 6,
        .weight = 112,
        .description = COMPOUND_STRING(
            "It continually meditates for hours every\n"
            "day. As a result of rigorous and dedicated\n"
            "yoga training, it has tempered its\n"
            "spiritual power so much it can fly."),
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Meditite, 48, 48),
        FRONT_PIC_FEMALE(Meditite, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Meditite,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Meditite, 48, 48),
        BACK_PIC_FEMALE(Meditite, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Meditite),
        ICON(Meditite, 0),
        .footprint = gMonFootprint_Meditite,
        LEARNSETS(Meditite),
=======
        .palette = gMonPalette_Meditite,
        .shinyPalette = gMonShinyPalette_Meditite,
        .iconSprite = gMonIcon_Meditite,
        .iconPalIndex = 0,
        FOOTPRINT(Meditite)
        OVERWORLD(
            sPicTable_Meditite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meditite,
            gShinyOverworldPalette_Meditite
        )
        .levelUpLearnset = sMedititeLevelUpLearnset,
        .teachableLearnset = sMedititeTeachableLearnset,
        .eggMoveLearnset = sMedititeEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_MEDICHAM}),
    },

#define MEDICHAM_MISC_INFO                                          \
        .types = { TYPE_FIGHTING, TYPE_PSYCHIC },                   \
        .catchRate = 90,                                            \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .bodyColor = BODY_COLOR_RED,                                \
        .speciesName = _("MEDICHAM"),                               \
        .natDexNum = NATIONAL_DEX_MEDICHAM,                         \
        .categoryName = _("MEDITATE"),                              \
        .height = 13,                                               \
        .weight = 315,                                              \
        .pokemonScale = 298,                                        \
        .pokemonOffset = 5,                                         \
        .trainerScale = 256,                                        \
        .trainerOffset = 0,                                         \
        .footprint = gMonFootprint_Medicham,                        \
        LEARNSETS(Medicham),                                        \
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,          \
        .formChangeTable = sMedichamFormChangeTable

    [SPECIES_MEDICHAM] =
    {
        MEDICHAM_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = 144,
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE},
        .cryId = CRY_MEDICHAM,
        .description = COMPOUND_STRING(
            "Through crushingly harsh yoga training, it\n"
            "heightened the psychic energy in its body.\n"
            "It battles with elegant, dance-like\n"
            "movement."),
        FRONT_PIC(Medicham, 40, 64),
        FRONT_PIC_FEMALE(Medicham, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Medicham,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Medicham, 56, 64),
        BACK_PIC_FEMALE(Medicham, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Medicham),
        ICON(Medicham, 0),
=======
        .palette = gMonPalette_Medicham,
        .shinyPalette = gMonShinyPalette_Medicham,
        .iconSprite = gMonIcon_Medicham,
        .iconPalIndex = 0,
        FOOTPRINT(Medicham)
        OVERWORLD(
            sPicTable_Medicham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Medicham,
            gShinyOverworldPalette_Medicham
        )
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,
        .formChangeTable = sMedichamFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEDICHAM_MEGA] =
    {
        MEDICHAM_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .expYield = 179,
        .abilities = { ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER },
        .cryId = CRY_MEDICHAM_MEGA,
        .description = COMPOUND_STRING(
            "It uses its amped-up willpower to create\n"
            "additional arms for itself. The more it has\n"
            "trained its spirit, the more realistic and\n"
            "dexterous these self-created arms become."),
        FRONT_PIC(MedichamMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MedichamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MedichamMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(MedichamMega),
        ICON(MedichamMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 120,
        .expYield = 59,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Electrike"),
        .cryId = CRY_ELECTRIKE,
        .natDexNum = NATIONAL_DEX_ELECTRIKE,
        .categoryName = _("Lightning"),
        .height = 6,
        .weight = 152,
        .description = COMPOUND_STRING(
            "It generates electricity using friction\n"
            "from the atmosphere. In seasons with\n"
            "especially arid air, its entire body blazes\n"
            "with violent showers of sparks."),
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Electrike, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Electrike,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Electrike, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Electrike),
        ICON(Electrike, 1),
        .footprint = gMonFootprint_Electrike,
        LEARNSETS(Electrike),
=======
        .palette = gMonPalette_Electrike,
        .shinyPalette = gMonShinyPalette_Electrike,
        .iconSprite = gMonIcon_Electrike,
        .iconPalIndex = 1,
        FOOTPRINT(Electrike)
        OVERWORLD(
            sPicTable_Electrike,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electrike,
            gShinyOverworldPalette_Electrike
        )
        .levelUpLearnset = sElectrikeLevelUpLearnset,
        .teachableLearnset = sElectrikeTeachableLearnset,
        .eggMoveLearnset = sElectrikeEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_MANECTRIC}),
    },

#define MANECTRIC_MISC_INFO                                 \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },          \
        .catchRate = 45,                                    \
        .evYield_Speed = 2,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .speciesName = _("Manectric"),                      \
        .natDexNum = NATIONAL_DEX_MANECTRIC,                \
        .categoryName = _("Discharge"),                     \
        .footprint = gMonFootprint_Manectric,               \
        LEARNSETS(Manectric),                               \
        .formSpeciesIdTable = sManectricFormSpeciesIdTable, \
        .formChangeTable = sManectricFormChangeTable

    [SPECIES_MANECTRIC] =
    {
        MANECTRIC_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .expYield = 166,
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .cryId = CRY_MANECTRIC,
        .height = 15,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Because lightning falls in their vicinities,\n"
            "Manectric were thought to have been born\n"
            "from lightning. In battle, they create\n"
            "thunderclouds."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Manectric, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Manectric,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Manectric, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Manectric),
        ICON(Manectric, 0),
=======
        .palette = gMonPalette_Manectric,
        .shinyPalette = gMonShinyPalette_Manectric,
        .iconSprite = gMonIcon_Manectric,
        .iconPalIndex = 0,
        FOOTPRINT(Manectric)
        OVERWORLD(
            sPicTable_Manectric,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Manectric,
            gShinyOverworldPalette_Manectric
        )
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .formSpeciesIdTable = sManectricFormSpeciesIdTable,
        .formChangeTable = sManectricFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MANECTRIC_MEGA] =
    {
        MANECTRIC_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = 201,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .cryId = CRY_MANECTRIC_MEGA,
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Manectric. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(ManectricMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ManectricMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ManectricMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(ManectricMega),
        ICON(ManectricMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
    [SPECIES_PLUSLE] =
    {
       .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = { TYPE_ELECTRIC, TYPE_FIRE},
        .catchRate = 200,
        .expYield = 142,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_PLUS, ABILITY_NONE},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
    #else
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("PLUSLE"),
        .cryId = CRY_PLUSLE,
        .natDexNum = NATIONAL_DEX_PLUSLE,
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Its positively charged energy manifests\n"
            "as a scalding heat. A PLUSLE and a MINUN\n"
            "joining together is sure to unleash a\n"
            "great deal of power."),
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Plusle, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Plusle,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Plusle, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Plusle),
        ICON(Plusle, 0),
        .footprint = gMonFootprint_Plusle,
        LEARNSETS(Plusle),
=======
        .palette = gMonPalette_Plusle,
        .shinyPalette = gMonShinyPalette_Plusle,
        .iconSprite = gMonIcon_Plusle,
        .iconPalIndex = 0,
        FOOTPRINT(Plusle)
        OVERWORLD(
            sPicTable_Plusle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Plusle,
            gShinyOverworldPalette_Plusle
        )
        .levelUpLearnset = sPlusleLevelUpLearnset,
        .teachableLearnset = sPlusleTeachableLearnset,
        .eggMoveLearnset = sPlusleEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
    [SPECIES_MINUN] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_ICE},
        .catchRate = 200,
        .expYield = 142,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MINUS, ABILITY_NONE},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_VOLT_ABSORB },
    #else
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("MINUN"),
        .cryId = CRY_MINUN,
        .natDexNum = NATIONAL_DEX_MINUN,
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Its negatively charged energy manifests\n"
            "as a freezing cold. A MINUN and a PLUSLE\n"
            "joining together is sure to unleash a\n"
            "great deal of power."),
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Minun, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Minun,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Minun, 48, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Minun),
        ICON(Minun, 0),
        .footprint = gMonFootprint_Minun,
        LEARNSETS(Minun),
=======
        .palette = gMonPalette_Minun,
        .shinyPalette = gMonShinyPalette_Minun,
        .iconSprite = gMonIcon_Minun,
        .iconPalIndex = 0,
        FOOTPRINT(Minun)
        OVERWORLD(
            sPicTable_Minun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Minun,
            gShinyOverworldPalette_Minun
        )
        .levelUpLearnset = sMinunLevelUpLearnset,
        .teachableLearnset = sMinunTeachableLearnset,
        .eggMoveLearnset = sMinunEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseSpeed     = 85,
        .baseSpAttack  = 47,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_ILLUMINATE, ABILITY_SWARM, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Volbeat"),
        .cryId = CRY_VOLBEAT,
        .natDexNum = NATIONAL_DEX_VOLBEAT,
        .categoryName = _("Firefly"),
        .height = 7,
        .weight = 177,
        .description = COMPOUND_STRING(
            "With their taillights lit, Volbeat fly in\n"
            "a swarm, drawing geometric designs in the\n"
            "night sky. They move their nests if their\n"
            "pond water becomes dirty."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Volbeat, 48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Volbeat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Volbeat, 48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Volbeat),
        ICON(Volbeat, 0),
        .footprint = gMonFootprint_Volbeat,
        LEARNSETS(Volbeat),
=======
        .palette = gMonPalette_Volbeat,
        .shinyPalette = gMonShinyPalette_Volbeat,
        .iconSprite = gMonIcon_Volbeat,
        .iconPalIndex = 0,
        FOOTPRINT(Volbeat)
        OVERWORLD(
            sPicTable_Volbeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Volbeat,
            gShinyOverworldPalette_Volbeat
        )
        .levelUpLearnset = sVolbeatLevelUpLearnset,
        .teachableLearnset = sVolbeatTeachableLearnset,
        .eggMoveLearnset = sVolbeatEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 65,
        .baseAttack    = 47,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Illumise"),
        .cryId = CRY_ILLUMISE,
        .natDexNum = NATIONAL_DEX_ILLUMISE,
        .categoryName = _("Firefly"),
        .height = 6,
        .weight = 177,
        .description = COMPOUND_STRING(
            "A nocturnal Pokémon that becomes active\n"
            "upon nightfall. It leads a Volbeat swarm\n"
            "to draw patterns in the night sky. Over 200\n"
            "different patterns have been confirmed."),
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Illumise, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Illumise,
        .frontAnimId = ANIM_RISING_WOBBLE,
        BACK_PIC(Illumise, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Illumise),
        ICON(Illumise, 2),
        .footprint = gMonFootprint_Illumise,
        LEARNSETS(Illumise),
=======
        .palette = gMonPalette_Illumise,
        .shinyPalette = gMonShinyPalette_Illumise,
        .iconSprite = gMonIcon_Illumise,
        .iconPalIndex = 2,
        FOOTPRINT(Illumise)
        OVERWORLD(
            sPicTable_Illumise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Illumise,
            gShinyOverworldPalette_Illumise
        )
        .levelUpLearnset = sIllumiseLevelUpLearnset,
        .teachableLearnset = sIllumiseTeachableLearnset,
        .eggMoveLearnset = sIllumiseEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 255,
        .expYield = 56,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_FLOWER_VEIL, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("BUDEW"),
        .cryId = CRY_BUDEW,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("BUD"),
        .height = 2,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Over the winter, it closes its bud and\n"
            "endures the cold. Sensitive to changing\n"
            "temperature, the bud is said to bloom\n"
            "when it feels the sun's warm touch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Budew, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Budew,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Budew, 40, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Budew),
        ICON(Budew, 1),
        .footprint = gMonFootprint_Budew,
        LEARNSETS(Budew),
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_ROSELIA}),
=======
        .palette = gMonPalette_Budew,
        .shinyPalette = gMonShinyPalette_Budew,
        .iconSprite = gMonIcon_Budew,
        .iconPalIndex = 1,
        FOOTPRINT(Budew)
        OVERWORLD(
            sPicTable_Budew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Budew,
            gShinyOverworldPalette_Budew
        )
        .levelUpLearnset = sBudewLevelUpLearnset,
        .teachableLearnset = sBudewTeachableLearnset,
        .eggMoveLearnset = sBudewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_ROSELIA}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 65,
        #else
            .baseDefense   = 55,
        #endif
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 75,
        .expYield = 232,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_FLOWER_VEIL, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("ROSELIA"),
        .cryId = CRY_ROSELIA,
        .natDexNum = NATIONAL_DEX_ROSELIA,
        .categoryName = _("THORN"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "A ROSELIA that drinks nutritionally rich\n"
            "springwater blooms with lovely flowers.\n"
            "The fragrance of its flowers has the\n"
            "effect of making its foes careless."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Roselia, 56, 48),
        FRONT_PIC_FEMALE(Roselia, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Roselia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Roselia, 64, 56),
        BACK_PIC_FEMALE(Roselia, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
<<<<<<< HEAD
        PALETTES(Roselia),
        ICON(Roselia, 4),
        .footprint = gMonFootprint_Roselia,
        LEARNSETS(Roselia),
=======
        .palette = gMonPalette_Roselia,
        .shinyPalette = gMonShinyPalette_Roselia,
        .iconSprite = gMonIcon_Roselia,
        .iconPalIndex = 4,
        FOOTPRINT(Roselia)
        OVERWORLD(
            sPicTable_Roselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Roselia,
            gShinyOverworldPalette_Roselia
        )
        .levelUpLearnset = sRoseliaLevelUpLearnset,
        .teachableLearnset = sRoseliaTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 65,
        #else
            .baseDefense   = 55,
        #endif
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 75,
        .expYield = 232,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_FLOWER_VEIL, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("ROSERADE"),
        .cryId = CRY_ROSERADE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("BOUQUET"),
        .height = 9,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Roserade, 48, 56),
        FRONT_PIC_FEMALE(Roserade, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Roserade,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Roserade, 64, 56),
        BACK_PIC_FEMALE(Roserade, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Roserade),
        ICON(Roserade, 0),
        .footprint = gMonFootprint_Roserade,
        LEARNSETS(Roserade),
=======
        .palette = gMonPalette_Roserade,
        .shinyPalette = gMonShinyPalette_Roserade,
        .iconSprite = gMonIcon_Roserade,
        .iconPalIndex = 0,
        FOOTPRINT(Roserade)
        OVERWORLD(
            sPicTable_Roserade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Roserade,
            gShinyOverworldPalette_Roserade
        )
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 225,
        .expYield = 60,
        .evYield_HP = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gulpin"),
        .cryId = CRY_GULPIN,
        .natDexNum = NATIONAL_DEX_GULPIN,
        .categoryName = _("Stomach"),
        .height = 4,
        .weight = 103,
        .description = COMPOUND_STRING(
            "This Pokémon's stomach fluid can even\n"
            "digest scrap iron. In one gulp, it can\n"
            "swallow something that is as large as\n"
            "itself."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gulpin, 40, 48),
        FRONT_PIC_FEMALE(Gulpin, 40, 48),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Gulpin,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gulpin, 56, 48),
        BACK_PIC_FEMALE(Gulpin, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Gulpin),
        ICON(Gulpin, 1),
        .footprint = gMonFootprint_Gulpin,
        LEARNSETS(Gulpin),
=======
        .palette = gMonPalette_Gulpin,
        .shinyPalette = gMonShinyPalette_Gulpin,
        .iconSprite = gMonIcon_Gulpin,
        .iconPalIndex = 1,
        FOOTPRINT(Gulpin)
        OVERWORLD(
            sPicTable_Gulpin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Gulpin,
            gShinyOverworldPalette_Gulpin
        )
        .levelUpLearnset = sGulpinLevelUpLearnset,
        .teachableLearnset = sGulpinTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_SWALOT}),
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,
        .baseAttack    = 73,
        .baseDefense   = 83,
        .baseSpeed     = 55,
        .baseSpAttack  = 73,
        .baseSpDefense = 83,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 75,
        .expYield = 163,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Swalot"),
        .cryId = CRY_SWALOT,
        .natDexNum = NATIONAL_DEX_SWALOT,
        .categoryName = _("Poison Bag"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Its powerful stomach acid is capable of\n"
            "digesting almost anything. The one thing\n"
            "in the whole world a Swalot can't digest is\n"
            "its own stomach."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
        FRONT_PIC(Swalot, 56, 56),
        FRONT_PIC_FEMALE(Swalot, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Swalot,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Swalot, 64, 64),
        BACK_PIC_FEMALE(Swalot, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Swalot),
        ICON(Swalot, 2),
        .footprint = gMonFootprint_Swalot,
        LEARNSETS(Swalot),
=======
        .palette = gMonPalette_Swalot,
        .shinyPalette = gMonShinyPalette_Swalot,
        .iconSprite = gMonIcon_Swalot,
        .iconPalIndex = 2,
        FOOTPRINT(Swalot)
        OVERWORLD(
            sPicTable_Swalot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Swalot,
            gShinyOverworldPalette_Swalot
        )
        .levelUpLearnset = sSwalotLevelUpLearnset,
        .teachableLearnset = sSwalotTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
    [SPECIES_CARVANHA] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,
        .baseDefense   = 30,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 225,
        .expYield = 61,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_GANGSTER},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("CARVANHA"),
        .cryId = CRY_CARVANHA,
        .natDexNum = NATIONAL_DEX_CARVANHA,
        .categoryName = _("SAVAGE"),
        .height = 8,
        .weight = 208,
        .description = COMPOUND_STRING(
            "CARVANHA attack ships in swarms, making\n"
            "them sink. Although it is said to be a very\n"
            "vicious Pokémon, it timidly flees as soon\n"
            "as it finds itself alone."),
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Carvanha, 48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Carvanha,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Carvanha, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
<<<<<<< HEAD
        PALETTES(Carvanha),
        ICON(Carvanha, 0),
        .footprint = gMonFootprint_Carvanha,
        LEARNSETS(Carvanha),
=======
        .palette = gMonPalette_Carvanha,
        .shinyPalette = gMonShinyPalette_Carvanha,
        .iconSprite = gMonIcon_Carvanha,
        .iconPalIndex = 0,
        FOOTPRINT(Carvanha)
        OVERWORLD(
            sPicTable_Carvanha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Carvanha,
            gShinyOverworldPalette_Carvanha
        )
        .levelUpLearnset = sCarvanhaLevelUpLearnset,
        .teachableLearnset = sCarvanhaTeachableLearnset,
        .eggMoveLearnset = sCarvanhaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHARPEDO}),
    },

#define SHARPEDO_MISC_INFO                                      \
        .types = { TYPE_WATER, TYPE_DARK },                     \
        .catchRate = 60,                                        \
        .evYield_Attack = 2,                                    \
        .itemRare = ITEM_DEEP_SEA_TOOTH,                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },  \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("Sharpedo"),                           \
        .natDexNum = NATIONAL_DEX_SHARPEDO,                     \
        .categoryName = _("Brutal"),                            \
        .footprint = gMonFootprint_Sharpedo,                    \
        LEARNSETS(Sharpedo),                                    \
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,      \
        .formChangeTable = sSharpedoFormChangeTable

    [SPECIES_SHARPEDO] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 50,
        .baseSpeed     = 125,
        .baseSpAttack  = 95,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 60,
        .expYield = 161,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_GANGSTER},
        .bodyColor = BODY_COLOR_BLUE,
        .natDexNum = NATIONAL_DEX_SHARPEDO,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
        LEARNSETS(Sharpedo),
        .speciesName = _("SHARPEDO"),
        .categoryName = _("BRUTAL"),
        .footprint = gMonFootprint_Sharpedo,  
        .description = COMPOUND_STRING(
            "The vicious and sly gangster of the sea.\n"
            "Its skin is specially textured to minimize\n"
            "drag in water. Its speed tops out at over\n"
            "75 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        FRONT_PIC(Sharpedo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sharpedo,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        BACK_PIC(Sharpedo, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Sharpedo),
        ICON(Sharpedo, 0),
=======
        .palette = gMonPalette_Sharpedo,
        .shinyPalette = gMonShinyPalette_Sharpedo,
        .iconSprite = gMonIcon_Sharpedo,
        .iconPalIndex = 0,
        FOOTPRINT(Sharpedo)
        OVERWORLD(
            sPicTable_Sharpedo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Sharpedo,
            gShinyOverworldPalette_Sharpedo
        )
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SHARPEDO_MEGA] =
    {
        SHARPEDO_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .expYield = 196,
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .cryId = CRY_SHARPEDO_MEGA,
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "The yellow patterns it bears are old scars.\n"
            "The energy from Mega Evolution runs\n"
            "through them, causing it sharp pain and\n"
            "suffering."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        FRONT_PIC(SharpedoMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SharpedoMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        BACK_PIC(SharpedoMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(SharpedoMega),
        ICON(SharpedoMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
    [SPECIES_WAILMER] =
    {
        .baseHP        = 130,
        .baseAttack    = 70,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 125,
        .expYield = 80,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailmer"),
        .cryId = CRY_WAILMER,
        .natDexNum = NATIONAL_DEX_WAILMER,
        .categoryName = _("Ball Whale"),
        .height = 20,
        .weight = 1300,
        .description = COMPOUND_STRING(
            "While this Pokémon usually lives in the sea,\n"
            "it can survive on land, although not too\n"
            "long. It loses vitality if its body becomes\n"
            "dried out."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
        FRONT_PIC(Wailmer, 64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wailmer,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Wailmer, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
<<<<<<< HEAD
        PALETTES(Wailmer),
        ICON(Wailmer, 2),
        .footprint = gMonFootprint_Wailmer,
        LEARNSETS(Wailmer),
=======
        .palette = gMonPalette_Wailmer,
        .shinyPalette = gMonShinyPalette_Wailmer,
        .iconSprite = gMonIcon_Wailmer,
        .iconPalIndex = 2,
        FOOTPRINT(Wailmer)
        OVERWORLD(
            sPicTable_Wailmer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Wailmer,
            gShinyOverworldPalette_Wailmer
        )
        .levelUpLearnset = sWailmerLevelUpLearnset,
        .teachableLearnset = sWailmerTeachableLearnset,
        .eggMoveLearnset = sWailmerEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_WAILORD}),
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 60,
        .expYield = 175,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailord"),
        .cryId = CRY_WAILORD,
        .natDexNum = NATIONAL_DEX_WAILORD,
        .categoryName = _("Float Whale"),
        .height = 145,
        .weight = 3980,
        .description = COMPOUND_STRING(
            "It breathes through nostrils that it\n"
            "raises above the sea. By inhaling to its\n"
            "maximum capacity, a Wailord can dive close\n"
            "to 10,000 feet beneath the waves."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
        FRONT_PIC(Wailord, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Wailord,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        BACK_PIC(Wailord, 64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
<<<<<<< HEAD
        PALETTES(Wailord),
        ICON(Wailord, 0),
        .footprint = gMonFootprint_Wailord,
        LEARNSETS(Wailord),
=======
        .palette = gMonPalette_Wailord,
        .shinyPalette = gMonShinyPalette_Wailord,
        .iconSprite = gMonIcon_Wailord,
        .iconPalIndex = 0,
        FOOTPRINT(Wailord)
        OVERWORLD(
            sPicTable_Wailord,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Wailord,
            gShinyOverworldPalette_Wailord
        )
        .levelUpLearnset = sWailordLevelUpLearnset,
        .teachableLearnset = sWailordTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_FIRE, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_OWN_TEMPO },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_OWN_TEMPO },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Numel"),
        .cryId = CRY_NUMEL,
        .natDexNum = NATIONAL_DEX_NUMEL,
        .categoryName = _("Numb"),
        .height = 7,
        .weight = 240,
        .description = COMPOUND_STRING(
            "A Numel stores boiling magma in the hump\n"
            "on its back. It is a hardy Pokémon that can\n"
            "transport a 220-pound load. It has served\n"
            "humans at work since long ago."),
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Numel, 40, 48),
        FRONT_PIC_FEMALE(Numel, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Numel,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Numel, 56, 56),
        BACK_PIC_FEMALE(Numel, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Numel),
        ICON(Numel, 1),
        .footprint = gMonFootprint_Numel,
        LEARNSETS(Numel),
=======
        .palette = gMonPalette_Numel,
        .shinyPalette = gMonShinyPalette_Numel,
        .iconSprite = gMonIcon_Numel,
        .iconPalIndex = 1,
        FOOTPRINT(Numel)
        OVERWORLD(
            sPicTable_Numel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Numel,
            gShinyOverworldPalette_Numel
        )
        .levelUpLearnset = sNumelLevelUpLearnset,
        .teachableLearnset = sNumelTeachableLearnset,
        .eggMoveLearnset = sNumelEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_CAMERUPT}),
    },

#define CAMERUPT_MISC_INFO                                  \
        .types = { TYPE_FIRE, TYPE_GROUND },                \
        .catchRate = 150,                                   \
        .evYield_Attack = 1,                                \
        .evYield_SpAttack = 1,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_RED,                        \
        .speciesName = _("Camerupt"),                       \
        .natDexNum = NATIONAL_DEX_CAMERUPT,                 \
        .categoryName = _("Eruption"),                      \
        .footprint = gMonFootprint_Camerupt,                \
        LEARNSETS(Camerupt),                                \
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,  \
        .formChangeTable = sCameruptFormChangeTable

    [SPECIES_CAMERUPT] =
    {
        CAMERUPT_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
<<<<<<< HEAD
        .expYield = 161,
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_SOLID_ROCK, ABILITY_ANGER_POINT },
=======
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 175,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_SOLID_ROCK, ABILITY_ANGER_POINT },
    #else
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_NONE, ABILITY_ANGER_POINT },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Camerupt"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_CAMERUPT,
        .height = 19,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "A Pokémon that lives in the crater of\n"
            "a volcano. Every 10 years, the volcanoes\n"
            "on its back erupt violently. Research is\n"
            "under way on the cause of eruption."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        FRONT_PIC(Camerupt, 64, 56),
        FRONT_PIC_FEMALE(Camerupt, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Camerupt,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Camerupt, 64, 40),
        BACK_PIC_FEMALE(Camerupt, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
<<<<<<< HEAD
        PALETTES(Camerupt),
        ICON(Camerupt, 0),
=======
        .palette = gMonPalette_Camerupt,
        .shinyPalette = gMonShinyPalette_Camerupt,
        .iconSprite = gMonIcon_Camerupt,
        .iconPalIndex = 0,
        FOOTPRINT(Camerupt)
        OVERWORLD(
            sPicTable_Camerupt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Camerupt,
            gShinyOverworldPalette_Camerupt
        )
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,
        .formChangeTable = sCameruptFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CAMERUPT_MEGA] =
    {
        CAMERUPT_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .expYield = 196,
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE },
        .cryId = CRY_CAMERUPT_MEGA,
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "The humps on its back have transformed\n"
            "into one large and very active volcano. It\n"
            "has a deep hatred of water or any moisture\n"
            "and has an explosive personality."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        FRONT_PIC(CameruptMega, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CameruptMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CameruptMega, 64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CameruptMega),
        ICON(CameruptMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 140,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 90,
        .expYield = 165,
        .evYield_Defense = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_7
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_DROUGHT, ABILITY_SHELL_ARMOR },
    #else
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_NONE, ABILITY_SHELL_ARMOR },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Torkoal"),
        .cryId = CRY_TORKOAL,
        .natDexNum = NATIONAL_DEX_TORKOAL,
        .categoryName = _("Coal"),
        .height = 5,
        .weight = 804,
        .description = COMPOUND_STRING(
            "It battles using energy it gets from\n"
            "burning coal. When loosing smoke from its\n"
            "nostrils, it lets off a sound that is\n"
            "similar to a locomotive's horn."),
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Torkoal, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Torkoal,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Torkoal, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
<<<<<<< HEAD
        PALETTES(Torkoal),
        ICON(Torkoal, 2),
        .footprint = gMonFootprint_Torkoal,
        LEARNSETS(Torkoal),
=======
        .palette = gMonPalette_Torkoal,
        .shinyPalette = gMonShinyPalette_Torkoal,
        .iconSprite = gMonIcon_Torkoal,
        .iconPalIndex = 2,
        FOOTPRINT(Torkoal)
        OVERWORLD(
            sPicTable_Torkoal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Torkoal,
            gShinyOverworldPalette_Torkoal
        )
        .levelUpLearnset = sTorkoalLevelUpLearnset,
        .teachableLearnset = sTorkoalTeachableLearnset,
        .eggMoveLearnset = sTorkoalEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 255,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Spoink"),
        .cryId = CRY_SPOINK,
        .natDexNum = NATIONAL_DEX_SPOINK,
        .categoryName = _("Bounce"),
        .height = 7,
        .weight = 306,
        .description = COMPOUND_STRING(
            "A Pokémon that manipulates psychic power\n"
            "at will. It doesn't stop bouncing even when\n"
            "it is asleep. It loves eating mushrooms\n"
            "that grow underground."),
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spoink, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Spoink,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        BACK_PIC(Spoink, 40, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
<<<<<<< HEAD
        PALETTES(Spoink),
        ICON(Spoink, 0),
        .footprint = gMonFootprint_Spoink,
        LEARNSETS(Spoink),
=======
        .palette = gMonPalette_Spoink,
        .shinyPalette = gMonShinyPalette_Spoink,
        .iconSprite = gMonIcon_Spoink,
        .iconPalIndex = 0,
        FOOTPRINT(Spoink)
        OVERWORLD(
            sPicTable_Spoink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Spoink,
            gShinyOverworldPalette_Spoink
        )
        .levelUpLearnset = sSpoinkLevelUpLearnset,
        .teachableLearnset = sSpoinkTeachableLearnset,
        .eggMoveLearnset = sSpoinkEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GRUMPIG}),
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grumpig"),
        .cryId = CRY_GRUMPIG,
        .natDexNum = NATIONAL_DEX_GRUMPIG,
        .categoryName = _("Manipulate"),
        .height = 9,
        .weight = 715,
        .description = COMPOUND_STRING(
            "It stores power in the black pearls on its\n"
            "forehead. When it uses psychic power, it\n"
            "performs an odd dance step. Its style of\n"
            "dancing became hugely popular overseas."),
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grumpig, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Grumpig,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        BACK_PIC(Grumpig, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Grumpig),
        ICON(Grumpig, 2),
        .footprint = gMonFootprint_Grumpig,
        LEARNSETS(Grumpig),
=======
        .palette = gMonPalette_Grumpig,
        .shinyPalette = gMonShinyPalette_Grumpig,
        .iconSprite = gMonIcon_Grumpig,
        .iconPalIndex = 2,
        FOOTPRINT(Grumpig)
        OVERWORLD(
            sPicTable_Grumpig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grumpig,
            gShinyOverworldPalette_Grumpig
        )
        .levelUpLearnset = sGrumpigLevelUpLearnset,
        .teachableLearnset = sGrumpigTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 126,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TANGLED_FEET, ABILITY_CONTRARY },
    #else
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_CONTRARY },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Spinda"),
        .cryId = CRY_SPINDA,
        .natDexNum = NATIONAL_DEX_SPINDA,
        .categoryName = _("Spot Panda"),
        .height = 11,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It is distinguished by a pattern of\n"
            "spots that is always different. Its\n"
            "unsteady, tottering walk has the\n"
            "effect of fouling its foe's aim."),
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spinda, 48, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Spinda,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        BACK_PIC(Spinda, 56, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
<<<<<<< HEAD
        PALETTES(Spinda),
        ICON(Spinda, 1),
        .footprint = gMonFootprint_Spinda,
        LEARNSETS(Spinda),
=======
        .palette = gMonPalette_Spinda,
        .shinyPalette = gMonShinyPalette_Spinda,
        .iconSprite = gMonIcon_Spinda,
        .iconPalIndex = 1,
        FOOTPRINT(Spinda)
        OVERWORLD(
            sPicTable_Spinda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spinda,
            gShinyOverworldPalette_Spinda
        )
        .levelUpLearnset = sSpindaLevelUpLearnset,
        .teachableLearnset = sSpindaTeachableLearnset,
        .eggMoveLearnset = sSpindaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON },
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        #endif
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trapinch"),
        .cryId = CRY_TRAPINCH,
        .natDexNum = NATIONAL_DEX_TRAPINCH,
        .categoryName = _("Ant Pit"),
        .height = 7,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Its big jaws crunch through boulders.\n"
            "Because its head is so big, it has a hard\n"
            "time getting back upright if it tips over\n"
            "onto its back."),
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Trapinch, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Trapinch,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Trapinch, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Trapinch),
        ICON(Trapinch, 0),
        .footprint = gMonFootprint_Trapinch,
        LEARNSETS(Trapinch),
=======
        .palette = gMonPalette_Trapinch,
        .shinyPalette = gMonShinyPalette_Trapinch,
        .iconSprite = gMonIcon_Trapinch,
        .iconPalIndex = 0,
        FOOTPRINT(Trapinch)
        OVERWORLD(
            sPicTable_Trapinch,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Trapinch,
            gShinyOverworldPalette_Trapinch
        )
        .levelUpLearnset = sTrapinchLevelUpLearnset,
        .teachableLearnset = sTrapinchTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_VIBRAVA}),
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_DRAGON },
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON },
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Vibrava"),
        .cryId = CRY_VIBRAVA,
        .natDexNum = NATIONAL_DEX_VIBRAVA,
        .categoryName = _("Vibration"),
        .height = 11,
        .weight = 153,
        .description = COMPOUND_STRING(
            "It looses ultrasonic waves by rubbing its\n"
            "wings together. Since a Vibrava's wings\n"
            "are still in the process of growing, it can\n"
            "only fly short distances."),
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vibrava, 64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Vibrava,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Vibrava, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Vibrava),
        ICON(Vibrava, 1),
        .footprint = gMonFootprint_Vibrava,
        LEARNSETS(Vibrava),
=======
        .palette = gMonPalette_Vibrava,
        .shinyPalette = gMonShinyPalette_Vibrava,
        .iconSprite = gMonIcon_Vibrava,
        .iconPalIndex = 1,
        FOOTPRINT(Vibrava)
        OVERWORLD(
            sPicTable_Vibrava,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vibrava,
            gShinyOverworldPalette_Vibrava
        )
        .levelUpLearnset = sVibravaLevelUpLearnset,
        .teachableLearnset = sVibravaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_FLYGON}),
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON },
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flygon"),
        .cryId = CRY_FLYGON,
        .natDexNum = NATIONAL_DEX_FLYGON,
        .categoryName = _("Mystic"),
        .height = 20,
        .weight = 820,
        .description = COMPOUND_STRING(
            "The flapping of its wings sounds like\n"
            "singing. To prevent detection by enemies,\n"
            "it hides itself by flapping up a cloud of\n"
            "desert sand."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        FRONT_PIC(Flygon, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Flygon,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 7,
        BACK_PIC(Flygon, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Flygon),
        ICON(Flygon, 1),
        .footprint = gMonFootprint_Flygon,
        LEARNSETS(Flygon),
=======
        .palette = gMonPalette_Flygon,
        .shinyPalette = gMonShinyPalette_Flygon,
        .iconSprite = gMonIcon_Flygon,
        .iconPalIndex = 1,
        FOOTPRINT(Flygon)
        OVERWORLD(
            sPicTable_Flygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Flygon,
            gShinyOverworldPalette_Flygon
        )
        .levelUpLearnset = sFlygonLevelUpLearnset,
        .teachableLearnset = sFlygonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacnea"),
        .cryId = CRY_CACNEA,
        .natDexNum = NATIONAL_DEX_CACNEA,
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = COMPOUND_STRING(
            "Cacnea live in deserts with virtually no\n"
            "rainfall. It battles by swinging its thick,\n"
            "spiked arms. Once a year, a yellow flower\n"
            "blooms."),
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cacnea, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cacnea,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Cacnea, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Cacnea),
        ICON(Cacnea, 1),
        .footprint = gMonFootprint_Cacnea,
        LEARNSETS(Cacnea),
=======
        .palette = gMonPalette_Cacnea,
        .shinyPalette = gMonShinyPalette_Cacnea,
        .iconSprite = gMonIcon_Cacnea,
        .iconPalIndex = 1,
        FOOTPRINT(Cacnea)
        OVERWORLD(
            sPicTable_Cacnea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cacnea,
            gShinyOverworldPalette_Cacnea
        )
        .levelUpLearnset = sCacneaLevelUpLearnset,
        .teachableLearnset = sCacneaTeachableLearnset,
        .eggMoveLearnset = sCacneaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_CACTURNE}),
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacturne"),
        .cryId = CRY_CACTURNE,
        .natDexNum = NATIONAL_DEX_CACTURNE,
        .categoryName = _("Scarecrow"),
        .height = 13,
        .weight = 774,
        .description = COMPOUND_STRING(
            "After spending thousands of years in\n"
            "harsh deserts, its blood transformed into\n"
            "the same substances as sand. It is\n"
            "nocturnal, so it hunts at night."),
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cacturne, 64, 64),
        FRONT_PIC_FEMALE(Cacturne, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cacturne,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Cacturne, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Cacturne),
        ICON(Cacturne, 1),
        .footprint = gMonFootprint_Cacturne,
        LEARNSETS(Cacturne),
=======
        .palette = gMonPalette_Cacturne,
        .shinyPalette = gMonShinyPalette_Cacturne,
        .iconSprite = gMonIcon_Cacturne,
        .iconPalIndex = 1,
        FOOTPRINT(Cacturne)
        OVERWORLD(
            sPicTable_Cacturne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cacturne,
            gShinyOverworldPalette_Cacturne
        )
        .levelUpLearnset = sCacturneLevelUpLearnset,
        .teachableLearnset = sCacturneTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
    [SPECIES_SWABLU] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 75,
        .types = { TYPE_FAIRY, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 62,
        .evYield_SpDefense = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_FLUFFY, ABILITY_PIXILATE, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("SWABLU"),
        .cryId = CRY_SWABLU,
        .natDexNum = NATIONAL_DEX_SWABLU,
        .categoryName = _("COTTON BIRD"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A Pokémon that has wings like cottony\n"
            "clouds. It uses them to scrub its\n"
            "surroundings of any dirt, otherwise it\n"
            "cannot relax."),
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swablu, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Swablu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Swablu, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Swablu),
        ICON(Swablu, 0),
        .footprint = gMonFootprint_Swablu,
        LEARNSETS(Swablu),
=======
        .palette = gMonPalette_Swablu,
        .shinyPalette = gMonShinyPalette_Swablu,
        .iconSprite = gMonIcon_Swablu,
        .iconPalIndex = 0,
        FOOTPRINT(Swablu)
        OVERWORLD(
            sPicTable_Swablu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Swablu,
            gShinyOverworldPalette_Swablu
        )
        .levelUpLearnset = sSwabluLevelUpLearnset,
        .teachableLearnset = sSwabluTeachableLearnset,
        .eggMoveLearnset = sSwabluEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ALTARIA}),
    },

#define ALTARIA_MISC_INFO                                   \
        .catchRate = 45,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_ERRATIC,                       \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON },\
        .bodyColor = BODY_COLOR_BLUE,                       \
        .speciesName = _("ALTARIA"),                        \
        .natDexNum = NATIONAL_DEX_ALTARIA,                  \
        .categoryName = _("HUMMING"),                       \
        .footprint = gMonFootprint_Altaria,                 \
        LEARNSETS(Altaria),                                 \
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,   \
        .formChangeTable = sAltariaFormChangeTable

    [SPECIES_ALTARIA] =
    {
        ALTARIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 105,
        .types = { TYPE_FAIRY, TYPE_DRAGON},
        .expYield = 172,
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE},
        .cryId = CRY_ALTARIA,
        .height = 11,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It hums in a beautiful soprano voice.\n"
            "Its song is said to be able to stop\n"
            "any adverse weather, and charm the heart\n"
            "of the listeners."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Altaria, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Altaria,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Altaria, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Altaria),
        ICON(Altaria, 0),
=======
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,
        .formChangeTable = sAltariaFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALTARIA_MEGA] =
    {
        ALTARIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = { TYPE_DRAGON, TYPE_FAIRY },
        .expYield = 207,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .cryId = CRY_ALTARIA_MEGA,
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It sings with a voice that is even more\n"
            "beautiful than before it Mega Evolved.\n"
            "Its feathers became larger for protection\n"
            "and glimmer with an iridescent sheen."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AltariaMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AltariaMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(AltariaMega, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(AltariaMega),
        ICON(AltariaMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 73,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_TOXIC_BOOST },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Zangoose"),
        .cryId = CRY_ZANGOOSE,
        .natDexNum = NATIONAL_DEX_ZANGOOSE,
        .categoryName = _("Cat Ferret"),
        .height = 13,
        .weight = 403,
        .description = COMPOUND_STRING(
            "When it battles, it stands on its hind legs\n"
            "and attacks with its sharply clawed\n"
            "forelegs. Its fur bristles if it encounters\n"
            "any Seviper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Zangoose, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Zangoose,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Zangoose, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Zangoose),
        ICON(Zangoose, 0),
        .footprint = gMonFootprint_Zangoose,
        LEARNSETS(Zangoose),
=======
        .palette = gMonPalette_Zangoose,
        .shinyPalette = gMonShinyPalette_Zangoose,
        .iconSprite = gMonIcon_Zangoose,
        .iconPalIndex = 0,
        FOOTPRINT(Zangoose)
        OVERWORLD(
            sPicTable_Zangoose,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zangoose,
            gShinyOverworldPalette_Zangoose
        )
        .levelUpLearnset = sZangooseLevelUpLearnset,
        .teachableLearnset = sZangooseTeachableLearnset,
        .eggMoveLearnset = sZangooseEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
    [SPECIES_SEVIPER] =
    {
        .baseHP        = 73,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Seviper"),
        .cryId = CRY_SEVIPER,
        .natDexNum = NATIONAL_DEX_SEVIPER,
        .categoryName = _("Fang Snake"),
        .height = 27,
        .weight = 525,
        .description = COMPOUND_STRING(
            "Seviper and Zangoose are eternal rivals.\n"
            "It counters a Zangoose's dazzling agility\n"
            "with its swordlike tail, which also oozes\n"
            "a horrible poison."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seviper, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Seviper,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Seviper, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Seviper),
        ICON(Seviper, 2),
        .footprint = gMonFootprint_Seviper,
        LEARNSETS(Seviper),
=======
        .palette = gMonPalette_Seviper,
        .shinyPalette = gMonShinyPalette_Seviper,
        .iconSprite = gMonIcon_Seviper,
        .iconPalIndex = 2,
        FOOTPRINT(Seviper)
        OVERWORLD(
            sPicTable_Seviper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BIKE_TIRE,
            gOverworldPalette_Seviper,
            gShinyOverworldPalette_Seviper
        )
        .levelUpLearnset = sSeviperLevelUpLearnset,
        .teachableLearnset = sSeviperTeachableLearnset,
        .eggMoveLearnset = sSeviperEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
    [SPECIES_LUNATONE] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ROCK, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Lunatone"),
        .cryId = CRY_LUNATONE,
        .natDexNum = NATIONAL_DEX_LUNATONE,
        .categoryName = _("Meteorite"),
        .height = 10,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "It becomes very active on the night of\n"
            "a full moon. This Pokémon was first\n"
            "discovered 40 years ago at the site of\n"
            "a meteor strike."),
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lunatone, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Lunatone,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 13,
        BACK_PIC(Lunatone, 48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Lunatone),
        ICON(Lunatone, 1),
        .footprint = gMonFootprint_Lunatone,
        LEARNSETS(Lunatone),
=======
        .palette = gMonPalette_Lunatone,
        .shinyPalette = gMonShinyPalette_Lunatone,
        .iconSprite = gMonIcon_Lunatone,
        .iconPalIndex = 1,
        FOOTPRINT(Lunatone)
        OVERWORLD(
            sPicTable_Lunatone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Lunatone,
            gShinyOverworldPalette_Lunatone
        )
        .levelUpLearnset = sLunatoneLevelUpLearnset,
        .teachableLearnset = sLunatoneTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
    [SPECIES_SOLROCK] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 161,
        .evYield_Attack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Solrock"),
        .cryId = CRY_SOLROCK,
        .natDexNum = NATIONAL_DEX_SOLROCK,
        .categoryName = _("Meteorite"),
        .height = 12,
        .weight = 1540,
        .description = COMPOUND_STRING(
            "Solar energy is the source of this \n"
            "Pokémon's power. On sunny days, groups of\n"
            "Solrock line up facing the sun and absorb\n"
            "its light."),
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Solrock, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Solrock,
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 4,
        BACK_PIC(Solrock, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Solrock),
        ICON(Solrock, 0),
        .footprint = gMonFootprint_Solrock,
        LEARNSETS(Solrock),
=======
        .palette = gMonPalette_Solrock,
        .shinyPalette = gMonShinyPalette_Solrock,
        .iconSprite = gMonIcon_Solrock,
        .iconPalIndex = 0,
        FOOTPRINT(Solrock)
        OVERWORLD(
            sPicTable_Solrock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Solrock,
            gShinyOverworldPalette_Solrock
        )
        .levelUpLearnset = sSolrockLevelUpLearnset,
        .teachableLearnset = sSolrockTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 60,
        .baseSpAttack  = 46,
        .baseSpDefense = 41,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_HYDRATION },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Barboach"),
        .cryId = CRY_BARBOACH,
        .natDexNum = NATIONAL_DEX_BARBOACH,
        .categoryName = _("Whiskers"),
        .height = 4,
        .weight = 19,
        .description = COMPOUND_STRING(
            "Its body is covered with a slimy film.\n"
            "The film acts as a barrier to prevent germs\n"
            "in muddy water from entering the\n"
            "Barboach's body."),
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Barboach, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Barboach,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .enemyMonElevation = 7,
        BACK_PIC(Barboach, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Barboach),
        ICON(Barboach, 0),
        .footprint = gMonFootprint_Barboach,
        LEARNSETS(Barboach),
=======
        .palette = gMonPalette_Barboach,
        .shinyPalette = gMonShinyPalette_Barboach,
        .iconSprite = gMonIcon_Barboach,
        .iconPalIndex = 0,
        FOOTPRINT(Barboach)
        OVERWORLD(
            sPicTable_Barboach,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Barboach,
            gShinyOverworldPalette_Barboach
        )
        .levelUpLearnset = sBarboachLevelUpLearnset,
        .teachableLearnset = sBarboachTeachableLearnset,
        .eggMoveLearnset = sBarboachEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_WHISCASH}),
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 110,
        .baseAttack    = 78,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = 76,
        .baseSpDefense = 71,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 75,
        .expYield = 164,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_HYDRATION },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Whiscash"),
        .cryId = CRY_WHISCASH,
        .natDexNum = NATIONAL_DEX_WHISCASH,
        .categoryName = _("Whiskers"),
        .height = 9,
        .weight = 236,
        .description = COMPOUND_STRING(
            "Mysteriously, it can foretell earthquakes.\n"
            "In the daytime, it sleeps in mud at the\n"
            "bottom of a pond. When it awakens, it\n"
            "continually feeds throughout the night."),
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Whiscash, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Whiscash,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Whiscash, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Whiscash),
        ICON(Whiscash, 0),
        .footprint = gMonFootprint_Whiscash,
        LEARNSETS(Whiscash),
=======
        .palette = gMonPalette_Whiscash,
        .shinyPalette = gMonShinyPalette_Whiscash,
        .iconSprite = gMonIcon_Whiscash,
        .iconPalIndex = 0,
        FOOTPRINT(Whiscash)
        OVERWORLD(
            sPicTable_Whiscash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whiscash,
            gShinyOverworldPalette_Whiscash
        )
        .levelUpLearnset = sWhiscashLevelUpLearnset,
        .teachableLearnset = sWhiscashTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
    [SPECIES_CORPHISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 205,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("CORPHISH"),
        .cryId = CRY_CORPHISH,
        .natDexNum = NATIONAL_DEX_CORPHISH,
        .categoryName = _("RUFFIAN"),
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "CORPHISH were originally imported from\n"
            "a foreign region, but they rapidly spread\n"
            "in the wild. There is no environment in\n"
            "which it won't thrive."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Corphish, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Corphish,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Corphish, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Corphish),
        ICON(Corphish, 0),
        .footprint = gMonFootprint_Corphish,
        LEARNSETS(Corphish),
=======
        .palette = gMonPalette_Corphish,
        .shinyPalette = gMonShinyPalette_Corphish,
        .iconSprite = gMonIcon_Corphish,
        .iconPalIndex = 0,
        FOOTPRINT(Corphish)
        OVERWORLD(
            sPicTable_Corphish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Corphish,
            gShinyOverworldPalette_Corphish
        )
        .levelUpLearnset = sCorphishLevelUpLearnset,
        .teachableLearnset = sCorphishTeachableLearnset,
        .eggMoveLearnset = sCorphishEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CRAWDAUNT}),
    },

    [SPECIES_CRAWDAUNT] =
        {
        .baseHP        = 65,
        .baseAttack    = 120,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 155,
        .expYield = 164,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("CRAWDAUNT"),
        .cryId = CRY_CRAWDAUNT,
        .natDexNum = NATIONAL_DEX_CRAWDAUNT,
        .categoryName = _("ROGUE"),
        .height = 11,
        .weight = 328,
        .description = COMPOUND_STRING(
            "A brutish Pokémon that loves to battle.\n"
            "A veteran Crawdaunt that has prevailed in\n"
            "hundreds of battles has giant pincers\n"
            "marked with countless scars."),
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Crawdaunt, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Crawdaunt,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Crawdaunt, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Crawdaunt),
        ICON(Crawdaunt, 0),
        .footprint = gMonFootprint_Crawdaunt,
        LEARNSETS(Crawdaunt),
=======
        .palette = gMonPalette_Crawdaunt,
        .shinyPalette = gMonShinyPalette_Crawdaunt,
        .iconSprite = gMonIcon_Crawdaunt,
        .iconPalIndex = 0,
        FOOTPRINT(Crawdaunt)
        OVERWORLD(
            sPicTable_Crawdaunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crawdaunt,
            gShinyOverworldPalette_Crawdaunt
        )
        .levelUpLearnset = sCrawdauntLevelUpLearnset,
        .teachableLearnset = sCrawdauntTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
    [SPECIES_BALTOY] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 60,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_WELL_BAKED_BODY, ABILITY_PSYCHIC_SHIELD},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("BALTOY"),
        .cryId = CRY_BALTOY,
        .natDexNum = NATIONAL_DEX_BALTOY,
        .categoryName = _("CLAY DOLL"),
        .height = 5,
        .weight = 215,
        .description = COMPOUND_STRING(
            "A clay figurine brought to life by\n"
            "an ancient civilization. In its absence,\n"
            "it seemingly gained the ability to reproduce\n"
            "and spread itself."),
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Baltoy, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Baltoy,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Baltoy, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Baltoy),
        ICON(Baltoy, 2),
        .footprint = gMonFootprint_Baltoy,
        LEARNSETS(Baltoy),
=======
        .palette = gMonPalette_Baltoy,
        .shinyPalette = gMonShinyPalette_Baltoy,
        .iconSprite = gMonIcon_Baltoy,
        .iconPalIndex = 2,
        FOOTPRINT(Baltoy)
        OVERWORLD(
            sPicTable_Baltoy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Baltoy,
            gShinyOverworldPalette_Baltoy
        )
        .levelUpLearnset = sBaltoyLevelUpLearnset,
        .teachableLearnset = sBaltoyTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CLAYDOL}),
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 120,
        .types = { TYPE_GROUND, TYPE_PSYCHIC },
        .catchRate = 90,
        .expYield = 175,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_WELL_BAKED_BODY, ABILITY_PSYCHIC_SHIELD},
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("CLAYDOL"),
        .cryId = CRY_CLAYDOL,
        .natDexNum = NATIONAL_DEX_CLAYDOL,
        .categoryName = _("CLAY DOLL"),
        .height = 15,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A doll embedded by psychic powers.\n"
            "Thanks to the, it's able to control\n"
            "its detached arms, float freely in\n"
            "the air and even defend itself."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
        FRONT_PIC(Claydol, 56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Claydol,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 10,
        BACK_PIC(Claydol, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Claydol),
        ICON(Claydol, 0),
        .footprint = gMonFootprint_Claydol,
        LEARNSETS(Claydol),
=======
        .palette = gMonPalette_Claydol,
        .shinyPalette = gMonShinyPalette_Claydol,
        .iconSprite = gMonIcon_Claydol,
        .iconPalIndex = 0,
        FOOTPRINT(Claydol)
        OVERWORLD(
            sPicTable_Claydol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Claydol,
            gShinyOverworldPalette_Claydol
        )
        .levelUpLearnset = sClaydolLevelUpLearnset,
        .teachableLearnset = sClaydolTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
    [SPECIES_LILEEP] =
    {
        .baseHP        = 66,
        .baseAttack    = 41,
        .baseDefense   = 77,
        .baseSpeed     = 23,
        .baseSpAttack  = 61,
        .baseSpDefense = 87,
        .types = { TYPE_ROCK, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 71,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Lileep"),
        .cryId = CRY_LILEEP,
        .natDexNum = NATIONAL_DEX_LILEEP,
        .categoryName = _("Sea Lily"),
        .height = 10,
        .weight = 238,
        .description = COMPOUND_STRING(
            "It disguises itself as seaweed by making\n"
            "its tentacles sway. Unsuspecting prey\n"
            "that come too close are swallowed whole.\n"
            "It became extinct 100 million years ago."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lileep, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lileep,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lileep, 48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
<<<<<<< HEAD
        PALETTES(Lileep),
        ICON(Lileep, 2),
        .footprint = gMonFootprint_Lileep,
        LEARNSETS(Lileep),
=======
        .palette = gMonPalette_Lileep,
        .shinyPalette = gMonShinyPalette_Lileep,
        .iconSprite = gMonIcon_Lileep,
        .iconPalIndex = 2,
        FOOTPRINT(Lileep)
        OVERWORLD(
            sPicTable_Lileep,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Lileep,
            gShinyOverworldPalette_Lileep
        )
        .levelUpLearnset = sLileepLevelUpLearnset,
        .teachableLearnset = sLileepTeachableLearnset,
        .eggMoveLearnset = sLileepEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_CRADILY}),
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 86,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 43,
        .baseSpAttack  = 81,
        .baseSpDefense = 107,
        .types = { TYPE_ROCK, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cradily"),
        .cryId = CRY_CRADILY,
        .natDexNum = NATIONAL_DEX_CRADILY,
        .categoryName = _("Barnacle"),
        .height = 15,
        .weight = 604,
        .description = COMPOUND_STRING(
            "It drags its heavy body along the\n"
            "seafloor. It makes its nest in the shallows\n"
            "of warm seas. Cradily can be seen on\n"
            "beaches when the tide goes out."),
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cradily, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cradily,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Cradily, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
<<<<<<< HEAD
        PALETTES(Cradily),
        ICON(Cradily, 1),
        .footprint = gMonFootprint_Cradily,
        LEARNSETS(Cradily),
=======
        .palette = gMonPalette_Cradily,
        .shinyPalette = gMonShinyPalette_Cradily,
        .iconSprite = gMonIcon_Cradily,
        .iconPalIndex = 1,
        FOOTPRINT(Cradily)
        OVERWORLD(
            sPicTable_Cradily,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Cradily,
            gShinyOverworldPalette_Cradily
        )
        .levelUpLearnset = sCradilyLevelUpLearnset,
        .teachableLearnset = sCradilyTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_BUG },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Anorith"),
        .cryId = CRY_ANORITH,
        .natDexNum = NATIONAL_DEX_ANORITH,
        .categoryName = _("Old Shrimp"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "It was resurrected from a fossil using the\n"
            "power of science. It swims by undulating\n"
            "the eight wings at its sides. They were\n"
            "feet that adapted to life in the sea."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Anorith, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Anorith,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Anorith, 56, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Anorith),
        ICON(Anorith, 0),
        .footprint = gMonFootprint_Anorith,
        LEARNSETS(Anorith),
=======
        .palette = gMonPalette_Anorith,
        .shinyPalette = gMonShinyPalette_Anorith,
        .iconSprite = gMonIcon_Anorith,
        .iconPalIndex = 0,
        FOOTPRINT(Anorith)
        OVERWORLD(
            sPicTable_Anorith,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Anorith,
            gShinyOverworldPalette_Anorith
        )
        .levelUpLearnset = sAnorithLevelUpLearnset,
        .teachableLearnset = sAnorithTeachableLearnset,
        .eggMoveLearnset = sAnorithEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_ARMALDO}),
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_ROCK, TYPE_BUG },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Armaldo"),
        .cryId = CRY_ARMALDO,
        .natDexNum = NATIONAL_DEX_ARMALDO,
        .categoryName = _("Plate"),
        .height = 15,
        .weight = 682,
        .description = COMPOUND_STRING(
            "Armaldo usually lives on land. However,\n"
            "when it hunts for prey, it dives beneath\n"
            "the ocean. It swims around using its two\n"
            "large wings."),
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(Armaldo, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Armaldo,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Armaldo, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Armaldo),
        ICON(Armaldo, 2),
        .footprint = gMonFootprint_Armaldo,
        LEARNSETS(Armaldo),
=======
        .palette = gMonPalette_Armaldo,
        .shinyPalette = gMonShinyPalette_Armaldo,
        .iconSprite = gMonIcon_Armaldo,
        .iconPalIndex = 2,
        FOOTPRINT(Armaldo)
        OVERWORLD(
            sPicTable_Armaldo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Armaldo,
            gShinyOverworldPalette_Armaldo
        )
        .levelUpLearnset = sArmaldoLevelUpLearnset,
        .teachableLearnset = sArmaldoTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_SWIFT_SWIM},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY },
    #else
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_ADAPTABILITY },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("FEEBAS"),
        .cryId = CRY_FEEBAS,
        .natDexNum = NATIONAL_DEX_FEEBAS,
        .categoryName = _("FISH"),
        .height = 6,
        .weight = 74,
        .description = COMPOUND_STRING(
            "Feebas live in ponds that are heavily\n"
            "infested with weeds. Because of its\n"
            "hopelessly shabby appearance, it\n"
            "seems as if few Trainers raise it."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Feebas, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Feebas,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Feebas, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SPRING,
<<<<<<< HEAD
        PALETTES(Feebas),
        ICON(Feebas, 2),
        .footprint = gMonFootprint_Feebas,
        LEARNSETS(Feebas),
=======
        .palette = gMonPalette_Feebas,
        .shinyPalette = gMonShinyPalette_Feebas,
        .iconSprite = gMonIcon_Feebas,
        .iconPalIndex = 2,
        FOOTPRINT(Feebas)
        OVERWORLD(
            sPicTable_Feebas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Feebas,
            gShinyOverworldPalette_Feebas
        )
        .levelUpLearnset = sFeebasLevelUpLearnset,
        .teachableLearnset = sFeebasTeachableLearnset,
        .eggMoveLearnset = sFeebasEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_BEAUTY, 170, SPECIES_MILOTIC},
                                {EVO_TRADE_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC},
                                {EVO_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC}),
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = { TYPE_WATER, TYPE_FAIRY},
        .catchRate = 60,
        .expYield = 189,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_HYDRATION},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_COMPETITIVE, ABILITY_CUTE_CHARM },
    #else
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_CUTE_CHARM },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("MILOTIC"),
        .cryId = CRY_MILOTIC,
        .natDexNum = NATIONAL_DEX_MILOTIC,
        .categoryName = _("TENDER"),
        .height = 62,
        .weight = 1620,
        .description = COMPOUND_STRING(
            "It is said to live at the bottom of\n"
            "large lakes. Considered to be the most\n"
            "beautiful of all POKéMON, it has been\n"
            "depicted in paintings and statues."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        FRONT_PIC(Milotic, 64, 64),
        FRONT_PIC_FEMALE(Milotic, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Milotic,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        BACK_PIC(Milotic, 64, 64),
        BACK_PIC_FEMALE(Milotic, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
<<<<<<< HEAD
        PALETTES(Milotic),
        ICON(Milotic, 2),
        .footprint = gMonFootprint_Milotic,
        LEARNSETS(Milotic),
=======
        .palette = gMonPalette_Milotic,
        .shinyPalette = gMonShinyPalette_Milotic,
        .iconSprite = gMonIcon_Milotic,
        .iconPalIndex = 2,
        FOOTPRINT(Milotic)
        OVERWORLD(
            sPicTable_Milotic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Milotic,
            gShinyOverworldPalette_Milotic
        )
        .levelUpLearnset = sMiloticLevelUpLearnset,
        .teachableLearnset = sMiloticTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
#define CASTFORM_MISC_INFO                                      \
        .baseHP        = 70,                                    \
        .baseAttack    = 70,                                    \
        .baseDefense   = 70,                                    \
        .baseSpeed     = 70,                                    \
        .baseSpAttack  = 70,                                    \
        .baseSpDefense = 70,                                    \
        .catchRate = 45,                                        \
        .expYield = 147,                                        \
        .evYield_HP = 1,                                        \
        .itemCommon = ITEM_MYSTIC_WATER,                        \
        .itemRare = ITEM_MYSTIC_WATER,                          \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS },  \
        .abilities = { ABILITY_FORECAST, ABILITY_NONE },        \
        .speciesName = _("Castform"),                           \
        .cryId = CRY_CASTFORM,                                  \
        .natDexNum = NATIONAL_DEX_CASTFORM,                     \
        .categoryName = _("Weather"),                           \
        .height = 3,                                            \
        .weight = 8,                                            \
        .pokemonScale = 435,                                    \
        .pokemonOffset = -5,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Castform,                    \
        LEARNSETS(Castform),                                    \
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,      \
        .formChangeTable = sCastformFormChangeTable

    [SPECIES_CASTFORM_NORMAL] =
    {
        CASTFORM_MISC_INFO,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .bodyColor = BODY_COLOR_GRAY,
        .description = COMPOUND_STRING(
            "It alters its form depending on the\n"
            "weather. Changes in the climate such as\n"
            "the temperature and humidity appear to\n"
            "affect its cellular structure."),
        FRONT_PIC(CastformNormal, 24, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_CastformNormal,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        BACK_PIC(CastformNormal, 32, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(CastformNormal),
        ICON(CastformNormal, 0),
=======
        .palette = gMonPalette_CastformNormal,
        .shinyPalette = gMonShinyPalette_CastformNormal,
        .iconSprite = gMonIcon_CastformNormal,
        .iconPalIndex = 0,
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformNormal,
            gShinyOverworldPalette_CastformNormal
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        CASTFORM_MISC_INFO,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .bodyColor = BODY_COLOR_RED,
        .description = COMPOUND_STRING(
            "Castform takes this form on bright days.\n"
            "In an experiment where is was placed in\n"
            "front of a heater, it didn't change to this\n"
            "form. Its body is warm and toasty."),
        FRONT_PIC(CastformSunny, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_CastformSunny,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        BACK_PIC(CastformSunny, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
<<<<<<< HEAD
        PALETTES(CastformSunny),
        ICON(CastformSunny, 0),
=======
        .palette = gMonPalette_CastformSunny,
        .shinyPalette = gMonShinyPalette_CastformSunny,
        .iconSprite = gMonIcon_CastformSunny,
        .iconPalIndex = 0,
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformSunny,
            gShinyOverworldPalette_CastformSunny
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        CASTFORM_MISC_INFO,
        .types = { TYPE_WATER, TYPE_WATER },
        .bodyColor = BODY_COLOR_BLUE,
        .description = COMPOUND_STRING(
            "This is Castform's form while it's raining.\n"
            "In an experiment where it was placed in a\n"
            "shower, it didn't change to this form. Its\n"
            "body is soft, slightly swollen with water."),
        FRONT_PIC(CastformRainy, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_CastformRainy,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 5,
        BACK_PIC(CastformRainy, 40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(CastformRainy),
        ICON(CastformRainy, 0),
=======
        .palette = gMonPalette_CastformRainy,
        .shinyPalette = gMonShinyPalette_CastformRainy,
        .iconSprite = gMonIcon_CastformRainy,
        .iconPalIndex = 0,
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformRainy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformRainy,
            gShinyOverworldPalette_CastformRainy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        CASTFORM_MISC_INFO,
        .types = { TYPE_ICE, TYPE_ICE },
        .bodyColor = BODY_COLOR_WHITE,
        .description = COMPOUND_STRING(
            "This is Castform's form in a hailstorm.\n"
            "In an experiment where it was placed\n"
            "in a freezer, it didn't change to this form.\n"
            "Its cold skin is as smooth as ice."),
        FRONT_PIC(CastformSnowy, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_CastformSnowy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 5,
        BACK_PIC(CastformSnowy, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(CastformSnowy),
        ICON(CastformSnowy, 0),
=======
        .palette = gMonPalette_CastformSnowy,
        .shinyPalette = gMonShinyPalette_CastformSnowy,
        .iconSprite = gMonIcon_CastformSnowy,
        .iconPalIndex = 0,
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSnowy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformSnowy,
            gShinyOverworldPalette_CastformSnowy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
    [SPECIES_KECLEON] =
    {
        .baseHP        = 60,
        .baseAttack    =60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 90,
        .baseSpDefense = 120,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 200,
        .expYield = 154,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_COLOR_CHANGE, ABILITY_PROTEAN},
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN },
    #else
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_NONE },
    #endif
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("KECLEON"),
        .cryId = CRY_KECLEON,
        .natDexNum = NATIONAL_DEX_KECLEON,
        .categoryName = _("COLOR SWAP"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "A POKéMON that has the ability not only\n"
            "alter its colors, but also to change\n"
            "the composition of its cells. It may be\n"
            "closely related to MEW."),
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kecleon, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kecleon,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 30,
        BACK_PIC(Kecleon, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Kecleon),
        ICON(Kecleon, 1),
        .footprint = gMonFootprint_Kecleon,
        LEARNSETS(Kecleon),
=======
        .palette = gMonPalette_Kecleon,
        .shinyPalette = gMonShinyPalette_Kecleon,
        .iconSprite = gMonIcon_Kecleon,
        .iconPalIndex = 1,
        FOOTPRINT(Kecleon)
        OVERWORLD(
            sPicTable_Kecleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kecleon,
            gShinyOverworldPalette_Kecleon
        )
        .levelUpLearnset = sKecleonLevelUpLearnset,
        .teachableLearnset = sKecleonTeachableLearnset,
        .eggMoveLearnset = sKecleonEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
    [SPECIES_SHUPPET] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 225,
        .expYield = 59,
        .evYield_Attack = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_CURSED_BODY },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Shuppet"),
        .cryId = CRY_SHUPPET,
        .natDexNum = NATIONAL_DEX_SHUPPET,
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = COMPOUND_STRING(
            "This Pokémon roams about deep in the\n"
            "night seeking such negative emotions as\n"
            "grudges and envy. It retreats to its nest\n"
            "when the sun begins to rise."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shuppet, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shuppet,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        BACK_PIC(Shuppet, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Shuppet),
        ICON(Shuppet, 0),
        .footprint = gMonFootprint_Shuppet,
        LEARNSETS(Shuppet),
=======
        .palette = gMonPalette_Shuppet,
        .shinyPalette = gMonShinyPalette_Shuppet,
        .iconSprite = gMonIcon_Shuppet,
        .iconPalIndex = 0,
        FOOTPRINT(Shuppet)
        OVERWORLD(
            sPicTable_Shuppet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Shuppet,
            gShinyOverworldPalette_Shuppet
        )
        .levelUpLearnset = sShuppetLevelUpLearnset,
        .teachableLearnset = sShuppetTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BANETTE}),
    },

#define BANETTE_MISC_INFO                                           \
        .types = { TYPE_GHOST, TYPE_GHOST },                        \
        .catchRate = 45,                                            \
        .evYield_Attack = 2,                                        \
        .itemRare = ITEM_SPELL_TAG,                                 \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = 35,                                           \
        .growthRate = GROWTH_FAST,                                  \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },  \
        .bodyColor = BODY_COLOR_BLACK,                              \
        .speciesName = _("Banette"),                                \
        .natDexNum = NATIONAL_DEX_BANETTE,                          \
        .categoryName = _("Marionette"),                            \
        .footprint = gMonFootprint_Banette,                         \
        LEARNSETS(Banette),                                         \
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,           \
        .formChangeTable = sBanetteFormChangeTable

    [SPECIES_BANETTE] =
    {
        BANETTE_MISC_INFO,
        .baseHP        = 64,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 83,
        .baseSpDefense = 63,
<<<<<<< HEAD
        .expYield = 159,
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
=======
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 179,
        .evYield_Attack = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_CURSED_BODY },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Banette"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_BANETTE,
        .height = 11,
        .weight = 125,
        .description = COMPOUND_STRING(
            "An abandoned plush doll became this\n"
            "Pokémon. They are said to live in garbage\n"
            "dumps and wander about in search of the\n"
            "children that threw them away."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Banette, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Banette,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Banette, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Banette),
        ICON(Banette, 0),
=======
        .palette = gMonPalette_Banette,
        .shinyPalette = gMonShinyPalette_Banette,
        .iconSprite = gMonIcon_Banette,
        .iconPalIndex = 0,
        FOOTPRINT(Banette)
        OVERWORLD(
            sPicTable_Banette,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Banette,
            gShinyOverworldPalette_Banette
        )
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,
        .formChangeTable = sBanetteFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BANETTE_MEGA] =
    {
        BANETTE_MISC_INFO,
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .expYield = 194,
        .abilities = { ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER },
        .cryId = CRY_BANETTE_MEGA,
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Extraordinary energy amplifies its\n"
            "cursing power to such an extent that it\n"
            "can't help but curse its own Trainer."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BanetteMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BanetteMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(BanetteMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(BanetteMega),
        ICON(BanetteMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Duskull"),
        .cryId = CRY_DUSKULL,
        .natDexNum = NATIONAL_DEX_DUSKULL,
        .categoryName = _("Requiem"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "A glare from its single scarlet eye makes\n"
            "even burly grown-ups freeze in utter fear.\n"
            "It is a nocturnal Pokémon that roams\n"
            "about under the cloak of darkness."),
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Duskull, 40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Duskull,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 13,
        BACK_PIC(Duskull, 56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Duskull),
        ICON(Duskull, 0),
        .footprint = gMonFootprint_Duskull,
        LEARNSETS(Duskull),
=======
        .palette = gMonPalette_Duskull,
        .shinyPalette = gMonShinyPalette_Duskull,
        .iconSprite = gMonIcon_Duskull,
        .iconPalIndex = 0,
        FOOTPRINT(Duskull)
        OVERWORLD(
            sPicTable_Duskull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Duskull,
            gShinyOverworldPalette_Duskull
        )
        .levelUpLearnset = sDuskullLevelUpLearnset,
        .teachableLearnset = sDuskullTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DUSCLOPS}),
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 90,
        .expYield = 159,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusclops"),
        .cryId = CRY_DUSCLOPS,
        .natDexNum = NATIONAL_DEX_DUSCLOPS,
        .categoryName = _("Beckon"),
        .height = 16,
        .weight = 306,
        .description = COMPOUND_STRING(
            "It is thought that its body is hollow with\n"
            "only a spectral ball of fire burning inside.\n"
            "However, no one has been able to\n"
            "confirm this theory as fact."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
        FRONT_PIC(Dusclops, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Dusclops,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 30,
        BACK_PIC(Dusclops, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Dusclops),
        ICON(Dusclops, 0),
        .footprint = gMonFootprint_Dusclops,
        LEARNSETS(Dusclops),
=======
        .palette = gMonPalette_Dusclops,
        .shinyPalette = gMonShinyPalette_Dusclops,
        .iconSprite = gMonIcon_Dusclops,
        .iconPalIndex = 0,
        FOOTPRINT(Dusclops)
        OVERWORLD(
            sPicTable_Dusclops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dusclops,
            gShinyOverworldPalette_Dusclops
        )
        .levelUpLearnset = sDusclopsLevelUpLearnset,
        .teachableLearnset = sDusclopsTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR},
                                {EVO_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_DUSKNOIR,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(Dusknoir, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Dusknoir,
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        BACK_PIC(Dusknoir, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Dusknoir),
        ICON(Dusknoir, 2),
        .footprint = gMonFootprint_Dusknoir,
        LEARNSETS(Dusknoir),
=======
        .palette = gMonPalette_Dusknoir,
        .shinyPalette = gMonShinyPalette_Dusknoir,
        .iconSprite = gMonIcon_Dusknoir,
        .iconPalIndex = 2,
        FOOTPRINT(Dusknoir)
        OVERWORLD(
            sPicTable_Dusknoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dusknoir,
            gShinyOverworldPalette_Dusknoir
        )
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
    [SPECIES_TROPIUS] =
    {
        .baseHP        = 99,
        .baseAttack    = 68,
        .baseDefense   = 83,
        .baseSpeed     = 51,
        .baseSpAttack  = 72,
        .baseSpDefense = 87,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 200,
        .expYield = 161,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_HARVEST },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tropius"),
        .cryId = CRY_TROPIUS,
        .natDexNum = NATIONAL_DEX_TROPIUS,
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It flies by flapping its broad leaves.\n"
            "The bunch of fruit that grows around its\n"
            "neck is deliciously sweet. In the spring,\n"
            "it scatters pollen from its neck."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
        FRONT_PIC(Tropius, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tropius,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Tropius, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
<<<<<<< HEAD
        PALETTES(Tropius),
        ICON(Tropius, 1),
        .footprint = gMonFootprint_Tropius,
        LEARNSETS(Tropius),
=======
        .palette = gMonPalette_Tropius,
        .shinyPalette = gMonShinyPalette_Tropius,
        .iconSprite = gMonIcon_Tropius,
        .iconPalIndex = 1,
        FOOTPRINT(Tropius)
        OVERWORLD(
            sPicTable_Tropius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tropius,
            gShinyOverworldPalette_Tropius
        )
        .levelUpLearnset = sTropiusLevelUpLearnset,
        .teachableLearnset = sTropiusTeachableLearnset,
        .eggMoveLearnset = sTropiusEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 120,
        .expYield = 57,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chingling"),
        .cryId = CRY_CHINGLING,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        .categoryName = _("Bell"),
        .height = 2,
        .weight = 6,
        .description = COMPOUND_STRING(
            "There is an orb inside its mouth.\n"
            "When it hops, the orb bounces all\n"
            "over and makes a ringing sound.\n"
            "It can cry for an awfully long time."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chingling, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Chingling,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Chingling, 48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
<<<<<<< HEAD
        PALETTES(Chingling),
        ICON(Chingling, 1),
        .footprint = gMonFootprint_Chingling,
        LEARNSETS(Chingling),
=======
        .palette = gMonPalette_Chingling,
        .shinyPalette = gMonShinyPalette_Chingling,
        .iconSprite = gMonIcon_Chingling,
        .iconPalIndex = 1,
        FOOTPRINT(Chingling)
        OVERWORLD(
            sPicTable_Chingling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chingling,
            gShinyOverworldPalette_Chingling
        )
        .levelUpLearnset = sChinglingLevelUpLearnset,
        .teachableLearnset = sChinglingTeachableLearnset,
        .eggMoveLearnset = sChinglingEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHIMECHO] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 75,
            .baseDefense   = 80,
            .baseSpDefense = 90,
        #else
            .baseHP        = 65,
            .baseDefense   = 70,
            .baseSpDefense = 80,
        #endif
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chimecho"),
        .cryId = CRY_CHIMECHO,
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        .categoryName = _("Wind Chime"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "They fly about very actively when the hot\n"
            "season arrives. They communicate among\n"
            "themselves using seven different and\n"
            "distinguishing cries."),
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chimecho, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Chimecho,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        BACK_PIC(Chimecho, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Chimecho),
        ICON(Chimecho, 0),
        .footprint = gMonFootprint_Chimecho,
        LEARNSETS(Chimecho),
=======
        .palette = gMonPalette_Chimecho,
        .shinyPalette = gMonShinyPalette_Chimecho,
        .iconSprite = gMonIcon_Chimecho,
        .iconPalIndex = 0,
        FOOTPRINT(Chimecho)
        OVERWORLD(
            sPicTable_Chimecho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Chimecho,
            gShinyOverworldPalette_Chimecho
        )
        .levelUpLearnset = sChimechoLevelUpLearnset,
        .teachableLearnset = sChimechoTeachableLearnset,
        .eggMoveLearnset = sChimechoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
#define ABSOL_MISC_INFO                                     \
        .types = { TYPE_DARK, TYPE_DARK },                  \
        .catchRate = 30,                                    \
        .evYield_Attack = 2,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 25,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_WHITE,                      \
        .noFlip = TRUE,                                     \
        .speciesName = _("Absol"),                          \
        .natDexNum = NATIONAL_DEX_ABSOL,                    \
        .categoryName = _("Disaster"),                      \
        .height = 12,                                       \
        .pokemonScale = 301,                                \
        .pokemonOffset = 3,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Absol,                   \
        LEARNSETS(Absol),                                   \
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,     \
        .formChangeTable = sAbsolFormChangeTable

    [SPECIES_ABSOL] =
    {
        ABSOL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
<<<<<<< HEAD
        .expYield = 163,
        .abilities = { ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED },
=======
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 174,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_JUSTIFIED },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Absol"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_ABSOL,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It sharply senses even subtle changes in\n"
            "the sky and the land to predict natural\n"
            "disasters. It is a long-lived Pokémon that\n"
            "has a life-span of 100 years."),
        FRONT_PIC(Absol, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Absol,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .frontAnimDelay = 45,
        BACK_PIC(Absol, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(Absol),
        ICON(Absol, 0),
=======
        .palette = gMonPalette_Absol,
        .shinyPalette = gMonShinyPalette_Absol,
        .iconSprite = gMonIcon_Absol,
        .iconPalIndex = 0,
        FOOTPRINT(Absol)
        OVERWORLD(
            sPicTable_Absol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Absol,
            gShinyOverworldPalette_Absol
        )
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA] =
    {
        ABSOL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .expYield = 198,
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .cryId = CRY_ABSOL_MEGA,
        .weight = 490,
        .description = COMPOUND_STRING(
            "As the energy of Mega Evolution fills it,\n"
            "its fur bristles. What you see on its back\n"
            "are not true wings, and this Pokémon isn't\n"
            "able to fly."),
        FRONT_PIC(AbsolMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AbsolMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AbsolMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(AbsolMega),
        ICON(AbsolMega, 0),
        .isMegaEvolution = TRUE,
<<<<<<< HEAD
=======
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 190,
        .expYield = 60,
        .evYield_HP = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Snorunt"),
        .cryId = CRY_SNORUNT,
        .natDexNum = NATIONAL_DEX_SNORUNT,
        .categoryName = _("Snow Hat"),
        .height = 7,
        .weight = 168,
        .description = COMPOUND_STRING(
            "They tend to move about in groups of\n"
            "around five Snorunt. In snowy regions,\n"
            "it is said that when they are seen late at\n"
            "night, snowfall will arrive by morning."),
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Snorunt, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Snorunt,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .frontAnimDelay = 20,
        BACK_PIC(Snorunt, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Snorunt),
        ICON(Snorunt, 2),
        .footprint = gMonFootprint_Snorunt,
        LEARNSETS(Snorunt),
=======
        .palette = gMonPalette_Snorunt,
        .shinyPalette = gMonShinyPalette_Snorunt,
        .iconSprite = gMonIcon_Snorunt,
        .iconPalIndex = 2,
        FOOTPRINT(Snorunt)
        OVERWORLD(
            sPicTable_Snorunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snorunt,
            gShinyOverworldPalette_Snorunt
        )
        .levelUpLearnset = sSnoruntLevelUpLearnset,
        .teachableLearnset = sSnoruntTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GLALIE},
                                {EVO_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS}),
    },

#define GLALIE_MISC_INFO                                    \
        .types = { TYPE_ICE, TYPE_ICE },                    \
        .catchRate = 75,                                    \
        .evYield_HP = 2,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL },\
        .bodyColor = BODY_COLOR_GRAY,                       \
        .speciesName = _("Glalie"),                         \
        .natDexNum = NATIONAL_DEX_GLALIE,                   \
        .categoryName = _("Face"),                          \
        .footprint = gMonFootprint_Glalie,                  \
        LEARNSETS(Glalie),                                  \
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,    \
        .formChangeTable = sGlalieFormChangeTable

    [SPECIES_GLALIE] =
    {
        GLALIE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
<<<<<<< HEAD
        .expYield = 168,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
=======
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glalie"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_GLALIE,
        .height = 15,
        .weight = 2565,
        .description = COMPOUND_STRING(
            "A Glalie has the power to instantaneously\n"
            "freeze moisture in the atmosphere.\n"
            "A dazzling cloud of diamondlike ice\n"
            "crystals forms around its body."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        FRONT_PIC(Glalie, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Glalie,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 12,
        BACK_PIC(Glalie, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Glalie),
        ICON(Glalie, 0),
=======
        .palette = gMonPalette_Glalie,
        .shinyPalette = gMonShinyPalette_Glalie,
        .iconSprite = gMonIcon_Glalie,
        .iconPalIndex = 0,
        FOOTPRINT(Glalie)
        OVERWORLD(
            sPicTable_Glalie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glalie,
            gShinyOverworldPalette_Glalie
        )
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,
        .formChangeTable = sGlalieFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GLALIE_MEGA] =
    {
        GLALIE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .expYield = 203,
        .abilities = { ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE },
        .cryId = CRY_GLALIE_MEGA,
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution was so strong\n"
            "that it smashed Glalie's jaw. Its inability\n"
            "to eat very well leaves Glalie irritated."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        FRONT_PIC(GlalieMega, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GlalieMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(GlalieMega, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(GlalieMega),
        ICON(GlalieMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_ICE, TYPE_GHOST },
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
        .cryId = CRY_FROSLASS,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .description = COMPOUND_STRING(
            "When it finds people or Pokémon it likes,\n"
            "it freezes them and takes them to its\n"
            "chilly den, where they become its\n"
            "decorations."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Froslass, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Froslass,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        BACK_PIC(Froslass, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Froslass),
        ICON(Froslass, 0),
        .footprint = gMonFootprint_Froslass,
        LEARNSETS(Froslass),
=======
        .palette = gMonPalette_Froslass,
        .shinyPalette = gMonShinyPalette_Froslass,
        .iconSprite = gMonIcon_Froslass,
        .iconPalIndex = 0,
        FOOTPRINT(Froslass)
        OVERWORLD(
            sPicTable_Froslass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Froslass,
            gShinyOverworldPalette_Froslass
        )
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 255,
        .expYield = 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Spheal"),
        .cryId = CRY_SPHEAL,
        .natDexNum = NATIONAL_DEX_SPHEAL,
        .categoryName = _("Clap"),
        .height = 8,
        .weight = 395,
        .description = COMPOUND_STRING(
            "It is completely covered with plushy fur.\n"
            "As a result, it never feels the cold even\n"
            "when it is rolling about on ice floes or\n"
            "diving in the sea."),
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spheal, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Spheal,
        .frontAnimId = ANIM_SPIN_LONG,
        .frontAnimDelay = 15,
        BACK_PIC(Spheal, 48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Spheal),
        ICON(Spheal, 2),
        .footprint = gMonFootprint_Spheal,
        LEARNSETS(Spheal),
=======
        .palette = gMonPalette_Spheal,
        .shinyPalette = gMonShinyPalette_Spheal,
        .iconSprite = gMonIcon_Spheal,
        .iconPalIndex = 2,
        FOOTPRINT(Spheal)
        OVERWORLD(
            sPicTable_Spheal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spheal,
            gShinyOverworldPalette_Spheal
        )
        .levelUpLearnset = sSphealLevelUpLearnset,
        .teachableLearnset = sSphealTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEALEO}),
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 120,
        .expYield = 144,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sealeo"),
        .cryId = CRY_SEALEO,
        .natDexNum = NATIONAL_DEX_SEALEO,
        .categoryName = _("Ball Roll"),
        .height = 11,
        .weight = 876,
        .description = COMPOUND_STRING(
            "Sealeo live in herds on ice floes. Using its\n"
            "powerful flippers, it shatters ice.\n"
            "It dives into the sea to hunt prey five\n"
            "times a day."),
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sealeo, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sealeo,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Sealeo, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Sealeo),
        ICON(Sealeo, 2),
        .footprint = gMonFootprint_Sealeo,
        LEARNSETS(Sealeo),
=======
        .palette = gMonPalette_Sealeo,
        .shinyPalette = gMonShinyPalette_Sealeo,
        .iconSprite = gMonIcon_Sealeo,
        .iconPalIndex = 2,
        FOOTPRINT(Sealeo)
        OVERWORLD(
            sPicTable_Sealeo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sealeo,
            gShinyOverworldPalette_Sealeo
        )
        .levelUpLearnset = sSealeoLevelUpLearnset,
        .teachableLearnset = sSealeoTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_WALREIN}),
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 45,
        .expYield = 239,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
<<<<<<< HEAD
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
=======
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Walrein"),
        .cryId = CRY_WALREIN,
        .natDexNum = NATIONAL_DEX_WALREIN,
        .categoryName = _("Ice Break"),
        .height = 14,
        .weight = 1506,
        .description = COMPOUND_STRING(
            "To protect its herd, the leader battles\n"
            "anything that invades its territory, even\n"
            "at the cost of its life. Its tusks may snap\n"
            "off in battle."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Walrein, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Walrein,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Walrein, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Walrein),
        ICON(Walrein, 0),
        .footprint = gMonFootprint_Walrein,
        LEARNSETS(Walrein),
=======
        .palette = gMonPalette_Walrein,
        .shinyPalette = gMonShinyPalette_Walrein,
        .iconSprite = gMonIcon_Walrein,
        .iconPalIndex = 0,
        FOOTPRINT(Walrein)
        OVERWORLD(
            sPicTable_Walrein,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Walrein,
            gShinyOverworldPalette_Walrein
        )
        .levelUpLearnset = sWalreinLevelUpLearnset,
        .teachableLearnset = sWalreinTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 69,
        .evYield_Defense   = 0,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("CLAMPERL"),
        .cryId = CRY_CLAMPERL,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        .categoryName = _("BIVALVE"),
        .height = 4,
        .weight = 525,
        .description = COMPOUND_STRING(
            "A CLAMPERL slams its shell closed on prey\n"
            "to prevent escape. The pearl inside it\n"
            "is said to be infused with a mysterious\n"
            "energy."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clamperl, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Clamperl,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Clamperl, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
<<<<<<< HEAD
        PALETTES(Clamperl),
        ICON(Clamperl, 0),
        .footprint = gMonFootprint_Clamperl,
        LEARNSETS(Clamperl),
=======
        .palette = gMonPalette_Clamperl,
        .shinyPalette = gMonShinyPalette_Clamperl,
        .iconSprite = gMonIcon_Clamperl,
        .iconPalIndex = 0,
        FOOTPRINT(Clamperl)
        OVERWORLD(
            sPicTable_Clamperl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Clamperl,
            gShinyOverworldPalette_Clamperl
        )
        .levelUpLearnset = sClamperlLevelUpLearnset,
        .teachableLearnset = sClamperlTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS},
                                {EVO_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                {EVO_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}),
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 55,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 170,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_PROPELLER_TAIL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("HUNTAIL"),
        .cryId = CRY_HUNTAIL,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        .categoryName = _("DEEP SEA"),
        .height = 17,
        .weight = 270,
        .description = COMPOUND_STRING(
            "To withstand the crushing pressure of\n"
            "water deep under the sea, its spine is very\n"
            "thick and sturdy. Its tail can rapidly\n"
            "contract and expand to propel it."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Huntail, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Huntail,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Huntail, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Huntail),
        ICON(Huntail, 0),
        .footprint = gMonFootprint_Huntail,
        LEARNSETS(Huntail),
=======
        .palette = gMonPalette_Huntail,
        .shinyPalette = gMonShinyPalette_Huntail,
        .iconSprite = gMonIcon_Huntail,
        .iconPalIndex = 0,
        FOOTPRINT(Huntail)
        OVERWORLD(
            sPicTable_Huntail,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Huntail,
            gShinyOverworldPalette_Huntail
        )
        .levelUpLearnset = sHuntailLevelUpLearnset,
        .teachableLearnset = sHuntailTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 115,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 170,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_CRUELTY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("GOREBYSS"),
        .cryId = CRY_GOREBYSS,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        .categoryName = _("CRUEL BEAUTY"),
        .height = 18,
        .weight = 226,
        .description = COMPOUND_STRING(
            "A GOREBYSS siphons the body fluids of prey\n"
            "through its thin, tubular mouth. Its light\n"
            "pink body color turns vivid when it\n"
            "finishes feeding."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gorebyss, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Gorebyss,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Gorebyss, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Gorebyss),
        ICON(Gorebyss, 0),
        .footprint = gMonFootprint_Gorebyss,
        LEARNSETS(Gorebyss),
=======
        .palette = gMonPalette_Gorebyss,
        .shinyPalette = gMonShinyPalette_Gorebyss,
        .iconSprite = gMonIcon_Gorebyss,
        .iconPalIndex = 0,
        FOOTPRINT(Gorebyss)
        OVERWORLD(
            sPicTable_Gorebyss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Gorebyss,
            gShinyOverworldPalette_Gorebyss
        )
        .levelUpLearnset = sGorebyssLevelUpLearnset,
        .teachableLearnset = sGorebyssTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_ROCK },
        .catchRate = 25,
        .expYield = 170,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Relicanth"),
        .cryId = CRY_RELICANTH,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        .categoryName = _("Longevity"),
        .height = 10,
        .weight = 234,
        .description = COMPOUND_STRING(
            "A Pokémon that was once believed to have\n"
            "been extinct. The species has not changed\n"
            "its form for 100 million years. It walks on\n"
            "the seafloor using its pectoral fins."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Relicanth, 56, 56),
        FRONT_PIC_FEMALE(Relicanth, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Relicanth,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        BACK_PIC(Relicanth, 64, 40),
        BACK_PIC_FEMALE(Relicanth, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
<<<<<<< HEAD
        PALETTES(Relicanth),
        ICON(Relicanth, 2),
        .footprint = gMonFootprint_Relicanth,
        LEARNSETS(Relicanth),
=======
        .palette = gMonPalette_Relicanth,
        .shinyPalette = gMonShinyPalette_Relicanth,
        .iconSprite = gMonIcon_Relicanth,
        .iconPalIndex = 2,
        FOOTPRINT(Relicanth)
        OVERWORLD(
            sPicTable_Relicanth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Relicanth,
            gShinyOverworldPalette_Relicanth
        )
        .levelUpLearnset = sRelicanthLevelUpLearnset,
        .teachableLearnset = sRelicanthTeachableLearnset,
        .eggMoveLearnset = sRelicanthEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
    [SPECIES_LUVDISC] =
    {
        .baseHP        = 43,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 97,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 116,
        .evYield_Speed = 1,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Luvdisc"),
        .cryId = CRY_LUVDISC,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = COMPOUND_STRING(
            "Luvdisc make the branches of Corsola\n"
            "their nests. There is a custom from long\n"
            "ago of giving a Luvdisc as a gift to\n"
            "express one's feelings of love."),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Luvdisc, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Luvdisc,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Luvdisc, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
<<<<<<< HEAD
        PALETTES(Luvdisc),
        ICON(Luvdisc, 0),
        .footprint = gMonFootprint_Luvdisc,
        LEARNSETS(Luvdisc),
=======
        .palette = gMonPalette_Luvdisc,
        .shinyPalette = gMonShinyPalette_Luvdisc,
        .iconSprite = gMonIcon_Luvdisc,
        .iconPalIndex = 0,
        FOOTPRINT(Luvdisc)
        OVERWORLD(
            sPicTable_Luvdisc,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Luvdisc,
            gShinyOverworldPalette_Luvdisc
        )
        .levelUpLearnset = sLuvdiscLevelUpLearnset,
        .teachableLearnset = sLuvdiscTeachableLearnset,
        .eggMoveLearnset = sLuvdiscEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 60,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("BAGON"),
        .cryId = CRY_BAGON,
        .natDexNum = NATIONAL_DEX_BAGON,
        .categoryName = _("ROCK HEAD"),
        .height = 6,
        .weight = 421,
        .description = COMPOUND_STRING(
            "BAGON dreams of flying. It will launch\n"
            "itself over and over from cliffs, but\n"
            "thanks to its thick skull it never gets\n"
            "hurt."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bagon, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Bagon,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Bagon, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Bagon),
        ICON(Bagon, 0),
        .footprint = gMonFootprint_Bagon,
        LEARNSETS(Bagon),
=======
        .palette = gMonPalette_Bagon,
        .shinyPalette = gMonShinyPalette_Bagon,
        .iconSprite = gMonIcon_Bagon,
        .iconPalIndex = 0,
        FOOTPRINT(Bagon)
        OVERWORLD(
            sPicTable_Bagon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bagon,
            gShinyOverworldPalette_Bagon
        )
        .levelUpLearnset = sBagonLevelUpLearnset,
        .teachableLearnset = sBagonTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHELGON}),
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 147,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("SHELGON"),
        .cryId = CRY_SHELGON,
        .natDexNum = NATIONAL_DEX_SHELGON,
        .categoryName = _("ENDURANCE"),
        .height = 11,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "SHELGON can often be found rolling down.\n"
            "slopes. This process seems to hasten its.\n"
            "evolution, which is already underway isnide\n"
            "its impenetrable shell."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shelgon, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Shelgon,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Shelgon, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Shelgon),
        ICON(Shelgon, 2),
        .footprint = gMonFootprint_Shelgon,
        LEARNSETS(Shelgon),
=======
        .palette = gMonPalette_Shelgon,
        .shinyPalette = gMonShinyPalette_Shelgon,
        .iconSprite = gMonIcon_Shelgon,
        .iconPalIndex = 2,
        FOOTPRINT(Shelgon)
        OVERWORLD(
            sPicTable_Shelgon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shelgon,
            gShinyOverworldPalette_Shelgon
        )
        .levelUpLearnset = sShelgonLevelUpLearnset,
        .teachableLearnset = sShelgonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_SALAMENCE}),
    },

#define SALAMENCE_MISC_INFO                                 \
        .types = { TYPE_DRAGON, TYPE_FLYING },              \
        .catchRate = 45,                                    \
        .itemRare = ITEM_DRAGON_FANG,                       \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 40,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON },\
        .bodyColor = BODY_COLOR_BLUE,                       \
        .speciesName = _("SALAMENCE"),                      \
        .natDexNum = NATIONAL_DEX_SALAMENCE,                \
        .categoryName = _("DRAGON"),                        \
        .footprint = gMonFootprint_Salamence,               \
        LEARNSETS(Salamence),                               \
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable, \
        .formChangeTable = sSalamenceFormChangeTable

    [SPECIES_SALAMENCE] =
    {
        SALAMENCE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .expYield = 270,
        .abilities = {ABILITY_AERILATE, ABILITY_MOXIE},
        .cryId = CRY_SALAMENCE,
        .height = 15,
        .weight = 1026,
        .description = COMPOUND_STRING(
            "SALAMENCE spends most of its time in the\n"
            "air, having realizes its dream of taking\n"
            "flight. It's very excitable, and prone\n"
            "to fits of uncontrollable emotions."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Salamence, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Salamence,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 70,
        BACK_PIC(Salamence, 56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SHAKE,
<<<<<<< HEAD
        PALETTES(Salamence),
        ICON(Salamence, 0),
=======
        .palette = gMonPalette_Salamence,
        .shinyPalette = gMonShinyPalette_Salamence,
        .iconSprite = gMonIcon_Salamence,
        .iconPalIndex = 0,
        FOOTPRINT(Salamence)
        OVERWORLD(
            sPicTable_Salamence,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salamence,
            gShinyOverworldPalette_Salamence
        )
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable,
        .formChangeTable = sSalamenceFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SALAMENCE_MEGA] =
    {
        SALAMENCE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .expYield = 315,
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .cryId = CRY_SALAMENCE_MEGA,
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "Mega Evolution fuels its brutality, and it\n"
            "may even turn on the Trainer who raised it.\n"
            "It's been dubbed the blood-soaked.\n"
            "crescent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SalamenceMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SalamenceMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SalamenceMega, 56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(SalamenceMega),
        ICON(SalamenceMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 60,
        .evYield_Defense   = 0,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MIRROR_ARMOR, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("BELDUM"),
        .cryId = CRY_BELDUM,
        .natDexNum = NATIONAL_DEX_BELDUM,
        .categoryName = _("IRON BALL"),
        .height = 6,
        .weight = 952,
        .description = COMPOUND_STRING(
            "BELDUM single mindedly attacks everything\n"
            "that comes close to it with a simple body\n"
            "tackle. Several analyses have however confirmed\n"
            "an abnormally high brain activity."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beldum, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Beldum,
        .frontAnimId = ANIM_H_SHAKE,
        .enemyMonElevation = 8,
        BACK_PIC(Beldum, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(Beldum),
        ICON(Beldum, 0),
        .footprint = gMonFootprint_Beldum,
        LEARNSETS(Beldum),
=======
        .palette = gMonPalette_Beldum,
        .shinyPalette = gMonShinyPalette_Beldum,
        .iconSprite = gMonIcon_Beldum,
        .iconPalIndex = 0,
        FOOTPRINT(Beldum)
        OVERWORLD(
            sPicTable_Beldum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Beldum,
            gShinyOverworldPalette_Beldum
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBeldumLevelUpLearnset,
        .teachableLearnset = sBeldumTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_METANG}),
    },

    [SPECIES_METANG] =
    {
               .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 147,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MIRROR_ARMOR, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("METANG"),
        .cryId = CRY_METANG,
        .natDexNum = NATIONAL_DEX_METANG,
        .categoryName = _("IRON CLAW"),
        .height = 12,
        .weight = 2025,
        .description = COMPOUND_STRING(
            "METANG is believed to have a brain\n"
            "mostly made out of silicon. Thanks to its\n"
            "intelligence, it's able to perform a large\n"
            "amount of calculations in an instant."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Metang, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Metang,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Metang, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
<<<<<<< HEAD
        PALETTES(Metang),
        ICON(Metang, 0),
        .footprint = gMonFootprint_Metang,
        LEARNSETS(Metang),
=======
        .palette = gMonPalette_Metang,
        .shinyPalette = gMonShinyPalette_Metang,
        .iconSprite = gMonIcon_Metang,
        .iconPalIndex = 0,
        FOOTPRINT(Metang)
        OVERWORLD(
            sPicTable_Metang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Metang,
            gShinyOverworldPalette_Metang
        )
        .levelUpLearnset = sMetangLevelUpLearnset,
        .teachableLearnset = sMetangTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_METAGROSS}),
    },

#define METAGROSS_MISC_INFO                                     \
        .types = { TYPE_STEEL, TYPE_PSYCHIC },                  \
        .catchRate = 3,                                         \
        .itemRare = ITEM_METAL_COAT,                            \
        .genderRatio = MON_GENDERLESS,                          \
        .eggCycles = 40,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },  \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("METAGROSS"),                          \
        .natDexNum = NATIONAL_DEX_METAGROSS,                    \
        .categoryName = _("IRON LEG"),                          \
        .footprint = gMonFootprint_Metagross,                   \
        LEARNSETS(Metagross),                                   \
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,     \
        .formChangeTable = sMetagrossFormChangeTable

    [SPECIES_METAGROSS] =
    {
        METAGROSS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .expYield = 270,
        .abilities = {ABILITY_MIRROR_ARMOR, ABILITY_TOUGH_CLAWS},
        .cryId = CRY_METAGROSS,
        .height = 16,
        .weight = 5500,
        .description = COMPOUND_STRING(
            "METAGROSS has four brains that are joined\n"
            "by a complex neural network. As a result of\n"
            "integration, this POKéMON is smarter than\n"
            "a supercomputer."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        FRONT_PIC(Metagross, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Metagross,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Metagross, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Metagross),
        ICON(Metagross, 0),
=======
        .palette = gMonPalette_Metagross,
        .shinyPalette = gMonShinyPalette_Metagross,
        .iconSprite = gMonIcon_Metagross,
        .iconPalIndex = 0,
        FOOTPRINT(Metagross)
        OVERWORLD(
            sPicTable_Metagross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Metagross,
            gShinyOverworldPalette_Metagross
        )
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,
        .formChangeTable = sMetagrossFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_METAGROSS_MEGA] =
    {
        METAGROSS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .expYield = 315,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .cryId = CRY_METAGROSS_MEGA,
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "When it knows it can't win, it digs the\n"
            "claws on its legs into its opponent and\n"
            "starts the countdown to a big explosion."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        FRONT_PIC(MetagrossMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MetagrossMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(MetagrossMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(MetagrossMega),
        ICON(MetagrossMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .isLegendary = TRUE,
        .speciesName = _("Regirock"),
        .cryId = CRY_REGIROCK,
        .natDexNum = NATIONAL_DEX_REGIROCK,
        .categoryName = _("Rock Peak"),
        .height = 17,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "A Pokémon that is made entirely of rocks\n"
            "and boulders. If parts of its body chip off\n"
            "in battle, Regirock repairs itself by\n"
            "adding new rocks."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
        FRONT_PIC(Regirock, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Regirock,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Regirock, 64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Regirock),
        ICON(Regirock, 2),
        .footprint = gMonFootprint_Regirock,
        LEARNSETS(Regirock),
=======
        .palette = gMonPalette_Regirock,
        .shinyPalette = gMonShinyPalette_Regirock,
        .iconSprite = gMonIcon_Regirock,
        .iconPalIndex = 2,
        FOOTPRINT(Regirock)
        OVERWORLD(
            sPicTable_Regirock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regirock,
            gShinyOverworldPalette_Regirock
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sRegirockLevelUpLearnset,
        .teachableLearnset = sRegirockTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .isLegendary = TRUE,
        .speciesName = _("Regice"),
        .cryId = CRY_REGICE,
        .natDexNum = NATIONAL_DEX_REGICE,
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = COMPOUND_STRING(
            "Its entire body is made of Antarctic ice.\n"
            "After extensive studies, researchers\n"
            "believe the ice was formed during an\n"
            "ice age."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        FRONT_PIC(Regice, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Regice,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Regice, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Regice),
        ICON(Regice, 0),
        .footprint = gMonFootprint_Regice,
        LEARNSETS(Regice),
=======
        .palette = gMonPalette_Regice,
        .shinyPalette = gMonShinyPalette_Regice,
        .iconSprite = gMonIcon_Regice,
        .iconPalIndex = 0,
        FOOTPRINT(Regice)
        OVERWORLD(
            sPicTable_Regice,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regice,
            gShinyOverworldPalette_Regice
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sRegiceLevelUpLearnset,
        .teachableLearnset = sRegiceTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .bodyColor = BODY_COLOR_GRAY,
        .isLegendary = TRUE,
        .speciesName = _("Registeel"),
        .cryId = CRY_REGISTEEL,
        .natDexNum = NATIONAL_DEX_REGISTEEL,
        .categoryName = _("Iron"),
        .height = 19,
        .weight = 2050,
        .description = COMPOUND_STRING(
            "Its body is harder than any other kind of\n"
            "metal. The body metal is composed of a\n"
            "mysterious substance. Not only is it hard,\n"
            "it shrinks and stretches flexibly."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
        FRONT_PIC(Registeel, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Registeel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Registeel, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
<<<<<<< HEAD
        PALETTES(Registeel),
        ICON(Registeel, 2),
        .footprint = gMonFootprint_Registeel,
        LEARNSETS(Registeel),
=======
        .palette = gMonPalette_Registeel,
        .shinyPalette = gMonShinyPalette_Registeel,
        .iconSprite = gMonIcon_Registeel,
        .iconPalIndex = 2,
        FOOTPRINT(Registeel)
        OVERWORLD(
            sPicTable_Registeel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Registeel,
            gShinyOverworldPalette_Registeel
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sRegisteelLevelUpLearnset,
        .teachableLearnset = sRegisteelTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
#define LATIAS_MISC_INFO                                                \
        .types = { TYPE_DRAGON, TYPE_PSYCHIC },                         \
        .catchRate = 3,                                                 \
        .evYield_SpDefense = 3,                                         \
        .genderRatio = MON_FEMALE,                                      \
        .eggCycles = 120,                                               \
        .friendship = 90,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .speciesName = _("Latias"),                                     \
        .natDexNum = NATIONAL_DEX_LATIAS,                               \
        .categoryName = _("Eon"),                                       \
        .footprint = gMonFootprint_Latias,                              \
        LEARNSETS(Latias),                                              \
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,                \
        .formChangeTable = sLatiasFormChangeTable,                      \
        .isLegendary = TRUE

    [SPECIES_LATIAS] =
    {
        LATIAS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .expYield = 270,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_LATIAS,
        .height = 14,
        .weight = 400,
        .description = COMPOUND_STRING(
            "They make a small herd of only several\n"
            "members. They rarely make contact with\n"
            "people or other Pokémon. They disappear\n"
            "if they sense enemies."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Latias, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Latias,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 12,
        BACK_PIC(Latias, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Latias),
        ICON(Latias, 0),
=======
        .palette = gMonPalette_Latias,
        .shinyPalette = gMonShinyPalette_Latias,
        .iconSprite = gMonIcon_Latias,
        .iconPalIndex = 0,
        FOOTPRINT(Latias)
        OVERWORLD(
            sPicTable_Latias,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Latias,
            gShinyOverworldPalette_Latias
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIAS_MEGA] =
    {
        LATIAS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .expYield = 315,
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .cryId = CRY_LATIAS_MEGA,
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Its body is smaller than Mega Latios's\n"
            "body. It is more agile and can make very\n"
            "sharp turns. When it Mega Evolves, its\n"
            "defensive strength grows substantially."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(LatiasMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LatiasMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(LatiasMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(LatiasMega),
        ICON(LatiasMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
#define LATIOS_MISC_INFO                                                \
        .types = { TYPE_DRAGON, TYPE_PSYCHIC },                         \
        .catchRate = 3,                                                 \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_MALE,                                        \
        .eggCycles = 120,                                               \
        .friendship = 90,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .isLegendary = TRUE,                                            \
        .speciesName = _("Latios"),                                     \
        .natDexNum = NATIONAL_DEX_LATIOS,                               \
        .categoryName = _("Eon"),                                       \
        .footprint = gMonFootprint_Latios,                              \
        LEARNSETS(Latios),                                              \
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,                \
        .formChangeTable = sLatiosFormChangeTable

    [SPECIES_LATIOS] =
    {
        LATIOS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .expYield = 270,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .cryId = CRY_LATIOS,
        .height = 20,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Even in hiding, it can detect the locations\n"
            "of others and sense their emotions since\n"
            "it has telepathy. Its intelligence allows\n"
            "it to understand human languages."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        FRONT_PIC(Latios, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Latios,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 6,
        BACK_PIC(Latios, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
<<<<<<< HEAD
        PALETTES(Latios),
        ICON(Latios, 0),
=======
        .palette = gMonPalette_Latios,
        .shinyPalette = gMonShinyPalette_Latios,
        .iconSprite = gMonIcon_Latios,
        .iconPalIndex = 0,
        FOOTPRINT(Latios)
        OVERWORLD(
            sPicTable_Latios,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Latios,
            gShinyOverworldPalette_Latios
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIOS_MEGA] =
    {
        LATIOS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .expYield = 315,
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .cryId = CRY_LATIOS_MEGA,
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It's larger than Mega Latias, and can\n"
            "achieve higher speeds in flight.\n"
            "This Pokémon can use its speed in battle\n"
            "to unleash a flurry of attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        FRONT_PIC(LatiosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LatiosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(LatiosMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(LatiosMega),
        ICON(LatiosMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
#define KYOGRE_MISC_INFO                                                \
        .types = { TYPE_WATER, TYPE_WATER },                            \
        .catchRate = 3,                                                 \
        .expYield = 302,                                                \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .isLegendary = TRUE,                                            \
        .speciesName = _("Kyogre"),                                     \
        .natDexNum = NATIONAL_DEX_KYOGRE,                               \
        .categoryName = _("Sea Basin"),                                 \
        .footprint = gMonFootprint_Kyogre,                              \
        LEARNSETS(Kyogre),                                              \
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,                \
        .formChangeTable = sKyogreFormChangeTable

    [SPECIES_KYOGRE] =
    {
        KYOGRE_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .abilities = { ABILITY_DRIZZLE, ABILITY_NONE },
        .cryId = CRY_KYOGRE,
        .height = 45,
        .weight = 3520,
        .description = COMPOUND_STRING(
            "Kyogre has appeared in mythology as the\n"
            "creator of the sea. After long years of\n"
            "feuding with Groudon, it took to sleep at\n"
            "the bottom of the sea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        FRONT_PIC(Kyogre, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kyogre,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .frontAnimDelay = 60,
        BACK_PIC(Kyogre, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
<<<<<<< HEAD
        PALETTES(Kyogre),
        ICON(Kyogre, 2),
=======
        .palette = gMonPalette_Kyogre,
        .shinyPalette = gMonShinyPalette_Kyogre,
        .iconSprite = gMonIcon_Kyogre,
        .iconPalIndex = 2,
        FOOTPRINT(Kyogre)
        OVERWORLD(
            sPicTable_Kyogre,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kyogre,
            gShinyOverworldPalette_Kyogre
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#if P_PRIMAL_REVERSIONS
    [SPECIES_KYOGRE_PRIMAL] =
    {
        KYOGRE_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .abilities = { ABILITY_PRIMORDIAL_SEA, ABILITY_PRIMORDIAL_SEA },
        .cryId = CRY_KYOGRE_PRIMAL,
        .height = 98,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "When Kyogre roared, water poured forth\n"
            "and the seas spread outward.\n"
            "Dark clouds enshrouded the world,\n"
            "and the deluge fell upon all…"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(KyogrePrimal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KyogrePrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KyogrePrimal, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(KyogrePrimal),
        ICON(KyogrePrimal, 0),
        .isPrimalReversion = TRUE,
<<<<<<< HEAD
=======
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
#define GROUDON_MISC_INFO                                               \
        .catchRate = 3,                                                 \
        .expYield = 302,                                                \
        .evYield_Attack = 3,                                            \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_RED,                                    \
        .isLegendary = TRUE,                                            \
        .speciesName = _("Groudon"),                                    \
        .cryId = CRY_GROUDON,                                           \
        .natDexNum = NATIONAL_DEX_GROUDON,                              \
        .categoryName = _("Continent"),                                 \
        .footprint = gMonFootprint_Groudon,                             \
        LEARNSETS(Groudon),                                             \
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,               \
        .formChangeTable = sGroudonFormChangeTable

    [SPECIES_GROUDON] =
    {
        GROUDON_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_DROUGHT, ABILITY_NONE },
        .height = 35,
        .weight = 9500,
        .description = COMPOUND_STRING(
            "Groudon has appeared in mythology as the\n"
            "creator of the land. It sleeps in magma\n"
            "underground and is said to make volcanoes\n"
            "erupt on awakening."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(Groudon, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Groudon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Groudon, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
<<<<<<< HEAD
        PALETTES(Groudon),
        ICON(Groudon, 0),
=======
        .palette = gMonPalette_Groudon,
        .shinyPalette = gMonShinyPalette_Groudon,
        .iconSprite = gMonIcon_Groudon,
        .iconPalIndex = 0,
        FOOTPRINT(Groudon)
        OVERWORLD(
            sPicTable_Groudon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Groudon,
            gShinyOverworldPalette_Groudon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_PRIMAL_REVERSIONS
    [SPECIES_GROUDON_PRIMAL] =
    {
        GROUDON_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = { TYPE_GROUND, TYPE_FIRE },
        .abilities = { ABILITY_DESOLATE_LAND, ABILITY_DESOLATE_LAND },
        .height = 50,
        .weight = 9997,
        .description = COMPOUND_STRING(
            "When Groudon howled, the earth swelled and\n"
            "the land grew wide. The sun blazed atop\n"
            "and all the world around the creature\n"
            "was enveloped in incandescent heat."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(GroudonPrimal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GroudonPrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GroudonPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(GroudonPrimal),
        ICON(GroudonPrimal, 0),
        .isPrimalReversion = TRUE,
<<<<<<< HEAD
=======
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
#define RAYQUAZA_MISC_INFO                                              \
        .types = { TYPE_DRAGON, TYPE_FLYING },                          \
        .catchRate = 45,                                                \
        .expYield = 306,                                                \
        .evYield_Attack = 2,                                            \
        .evYield_SpAttack = 1,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_GREEN,                                  \
        .speciesName = _("Rayquaza"),                                   \
        .cryId = CRY_RAYQUAZA,                                          \
        .natDexNum = NATIONAL_DEX_RAYQUAZA,                             \
        .categoryName = _("Sky High"),                                  \
        .footprint = gMonFootprint_Rayquaza,                            \
        LEARNSETS(Rayquaza),                                            \
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,              \
        .formChangeTable = sRayquazaFormChangeTable,                    \
        .isLegendary = TRUE

    [SPECIES_RAYQUAZA] =
    {
        RAYQUAZA_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .abilities = { ABILITY_AIR_LOCK, ABILITY_NONE },
        .height = 70,
        .weight = 2065,
        .description = COMPOUND_STRING(
            "A Pokémon that flies endlessly in the\n"
            "ozone layer. It is said it would descend\n"
            "to the ground if Kyogre and Groudon\n"
            "were to fight."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        FRONT_PIC(Rayquaza, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rayquaza,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 60,
        .enemyMonElevation = 6,
        BACK_PIC(Rayquaza, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
<<<<<<< HEAD
        PALETTES(Rayquaza),
        ICON(Rayquaza, 1),
=======
        .palette = gMonPalette_Rayquaza,
        .shinyPalette = gMonShinyPalette_Rayquaza,
        .iconSprite = gMonIcon_Rayquaza,
        .iconPalIndex = 1,
        FOOTPRINT(Rayquaza)
        OVERWORLD(
            sPicTable_Rayquaza,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Rayquaza,
            gShinyOverworldPalette_Rayquaza
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_RAYQUAZA_MEGA] =
    {
        RAYQUAZA_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .abilities = { ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM },
        .height = 108,
        .weight = 3920,
        .description = COMPOUND_STRING(
            "Particles stream from the filaments that\n"
            "extend from its jaw. They can control the\n"
            "density and humidity of the air, allowing\n"
            "Rayquaza to manipulate the weather."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        FRONT_PIC(RayquazaMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RayquazaMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(RayquazaMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(RayquazaMega),
        ICON(RayquazaMega, 1),
        .isMegaEvolution = TRUE,
<<<<<<< HEAD
=======
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP = 3,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .isMythical = TRUE,
        .speciesName = _("Jirachi"),
        .cryId = CRY_JIRACHI,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Jirachi is said to make wishes come true.\n"
            "While it sleeps, a tough crystalline shell\n"
            "envelops the body to protect it from\n"
            "enemies."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jirachi, 56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Jirachi,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 14,
        BACK_PIC(Jirachi, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
<<<<<<< HEAD
        PALETTES(Jirachi),
        ICON(Jirachi, 0),
        .footprint = gMonFootprint_Jirachi,
        LEARNSETS(Jirachi),
=======
        .palette = gMonPalette_Jirachi,
        .shinyPalette = gMonShinyPalette_Jirachi,
        .iconSprite = gMonIcon_Jirachi,
        .iconPalIndex = 0,
        FOOTPRINT(Jirachi)
        OVERWORLD(
            sPicTable_Jirachi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Jirachi,
            gShinyOverworldPalette_Jirachi
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sJirachiLevelUpLearnset,
        .teachableLearnset = sJirachiTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
#define DEOXYS_MISC_INFO                                                \
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },                        \
        .catchRate = 3,                                                 \
        .expYield = 270,                                                \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE },                \
        .bodyColor = BODY_COLOR_RED,                                    \
        .isMythical = TRUE,                                             \
        .speciesName = _("Deoxys"),                                     \
        .cryId = CRY_DEOXYS,                                            \
        .natDexNum = NATIONAL_DEX_DEOXYS,                               \
        .categoryName = _("DNA"),                                       \
        .height = 17,                                                   \
        .weight = 608,                                                  \
        .description = gDeoxysNormalPokedexText,                        \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 290,                                            \
        .trainerOffset = 2,                                             \
        .footprint = gMonFootprint_Deoxys,                              \
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable

    [SPECIES_DEOXYS_NORMAL] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        FRONT_PIC(DeoxysNormal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysNormal,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysNormal, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
<<<<<<< HEAD
        PALETTES(DeoxysNormal),
        ICON(DeoxysNormal, 0),
        LEARNSETS(DeoxysNormal),
=======
        .palette = gMonPalette_DeoxysNormal,
        .shinyPalette = gMonShinyPalette_DeoxysNormal,
        .iconSprite = gMonIcon_DeoxysNormal,
        .iconPalIndex = 0,
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysNormal,
            gShinyOverworldPalette_DeoxysNormal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sDeoxysNormalLevelUpLearnset,
        .teachableLearnset = sDeoxysNormalTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysNormalFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        FRONT_PIC(DeoxysAttack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysAttack,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysAttack, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(DeoxysAttack),
        ICON(DeoxysAttack, 0),
        LEARNSETS(DeoxysAttack),
=======
        .palette = gMonPalette_DeoxysAttack,
        .shinyPalette = gMonShinyPalette_DeoxysAttack,
        .iconSprite = gMonIcon_DeoxysAttack,
        .iconPalIndex = 0,
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysAttack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysAttack,
            gShinyOverworldPalette_DeoxysAttack
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sDeoxysAttackLevelUpLearnset,
        .teachableLearnset = sDeoxysAttackTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysAttackFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        FRONT_PIC(DeoxysDefense, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysDefense,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysDefense, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(DeoxysDefense),
        ICON(DeoxysDefense, 0),
        LEARNSETS(DeoxysDefense),
=======
        .palette = gMonPalette_DeoxysDefense,
        .shinyPalette = gMonShinyPalette_DeoxysDefense,
        .iconSprite = gMonIcon_DeoxysDefense,
        .iconPalIndex = 0,
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysDefense,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysDefense,
            gShinyOverworldPalette_DeoxysDefense
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sDeoxysDefenseLevelUpLearnset,
        .teachableLearnset = sDeoxysDefenseTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysDefenseFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .evYield_Speed = 3,
        .noFlip = TRUE,
        FRONT_PIC(DeoxysSpeed, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_DeoxysSpeed,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysSpeed, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
<<<<<<< HEAD
        PALETTES(DeoxysSpeed),
        ICON(DeoxysSpeed, 0),
        LEARNSETS(DeoxysSpeed),
=======
        .palette = gMonPalette_DeoxysSpeed,
        .shinyPalette = gMonShinyPalette_DeoxysSpeed,
        .iconSprite = gMonIcon_DeoxysSpeed,
        .iconPalIndex = 0,
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysSpeed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysSpeed,
            gShinyOverworldPalette_DeoxysSpeed
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sDeoxysSpeedLevelUpLearnset,
        .teachableLearnset = sDeoxysSpeedTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysSpeedFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_DEOXYS

#ifdef __INTELLISENSE__
};
#endif
