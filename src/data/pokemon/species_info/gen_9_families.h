#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen9[] =
{
#endif

#if P_FAMILY_SPRIGATITO
    [SPECIES_SPRIGATITO] =
    {
        .baseHP        = 40,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sprigatito"),
        .cryId = CRY_SPRIGATITO,
        .natDexNum = NATIONAL_DEX_SPRIGATITO,
        .categoryName = _("Grass Cat"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sprigatito, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sprigatito,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sprigatito, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Sprigatito),
        ICON(Sprigatito, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Sprigatito),
=======
        .palette = gMonPalette_Sprigatito,
        .shinyPalette = gMonShinyPalette_Sprigatito,
        .iconSprite = gMonIcon_Sprigatito,
        .iconPalIndex = 1,
        FOOTPRINT(Sprigatito)
        .levelUpLearnset = sSprigatitoLevelUpLearnset,
        .teachableLearnset = sSprigatitoTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLORAGATO}),
    },

    [SPECIES_FLORAGATO] =
    {
        .baseHP        = 61,
        .baseAttack    = 80,
        .baseDefense   = 63,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Floragato"),
        .cryId = CRY_FLORAGATO,
        .natDexNum = NATIONAL_DEX_FLORAGATO,
        .categoryName = _("Grass Cat"),
        .height = 9,
        .weight = 122,
        .description = COMPOUND_STRING(
            "Floragato deftly wields the vine\n"
            "hidden beneath its long fur, slamming\n"
            "the hard flower bud against its\n"
            "opponents."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Floragato, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Floragato,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Floragato, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Floragato),
        ICON(Floragato, 1),
        //.footprint = gMonFootprint_Floragato,
        LEARNSETS(Floragato),
=======
        .palette = gMonPalette_Floragato,
        .shinyPalette = gMonShinyPalette_Floragato,
        .iconSprite = gMonIcon_Floragato,
        .iconPalIndex = 1,
        FOOTPRINT(Floragato)
        .levelUpLearnset = sFloragatoLevelUpLearnset,
        .teachableLearnset = sFloragatoTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MEOWSCARADA}),
    },

    [SPECIES_MEOWSCARADA] =
    {
        .baseHP        = 76,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 123,
        .baseSpAttack  = 81,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Meowscarad", "Meowscarada"),
        .cryId = CRY_MEOWSCARADA,
        .natDexNum = NATIONAL_DEX_MEOWSCARADA,
        .categoryName = _("Magician"),
        .height = 15,
        .weight = 312,
        .description = COMPOUND_STRING(
            "This Pokémon uses the reflective\n"
            "fur lining its cape to camouflage the\n"
            "stem of its flower, creating the\n"
            "illusion that the flower is floating."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Meowscarada, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meowscarada,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Meowscarada, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Meowscarada),
        ICON(Meowscarada, 1),
        //.footprint = gMonFootprint_Meowscarada,
        LEARNSETS(Meowscarada),
=======
        .palette = gMonPalette_Meowscarada,
        .shinyPalette = gMonShinyPalette_Meowscarada,
        .iconSprite = gMonIcon_Meowscarada,
        .iconPalIndex = 1,
        FOOTPRINT(Meowscarada)
        .levelUpLearnset = sMeowscaradaLevelUpLearnset,
        .teachableLearnset = sMeowscaradaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
    [SPECIES_FUECOCO] =
    {
        .baseHP        = 67,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 36,
        .baseSpAttack  = 63,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fuecoco"),
        .cryId = CRY_FUECOCO,
        .natDexNum = NATIONAL_DEX_FUECOCO,
        .categoryName = _("Fire Croc"),
        .height = 4,
        .weight = 98,
        .description = COMPOUND_STRING(
            "Its flame sac is small, so energy is\n"
            "always leaking out. This energy is\n"
            "released from the dent atop\n"
            "Fuecoco's head and flickers to and fro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fuecoco, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Fuecoco,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Fuecoco, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Fuecoco),
        ICON(Fuecoco, 0),
        //.footprint = gMonFootprint_Fuecoco,
        LEARNSETS(Fuecoco),
=======
        .palette = gMonPalette_Fuecoco,
        .shinyPalette = gMonShinyPalette_Fuecoco,
        .iconSprite = gMonIcon_Fuecoco,
        .iconPalIndex = 2,
        FOOTPRINT(Fuecoco)
        .levelUpLearnset = sFuecocoLevelUpLearnset,
        .teachableLearnset = sFuecocoTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CROCALOR}),
    },

    [SPECIES_CROCALOR] =
    {
        .baseHP        = 81,
        .baseAttack    = 55,
        .baseDefense   = 78,
        .baseSpeed     = 49,
        .baseSpAttack  = 90,
        .baseSpDefense = 58,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 144,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crocalor"),
        .cryId = CRY_CROCALOR,
        .natDexNum = NATIONAL_DEX_CROCALOR,
        .categoryName = _("Fire Croc"),
        .height = 10,
        .weight = 307,
        .description = COMPOUND_STRING(
            "The combination of Crocalor's fire\n"
            "energy and overflowing vitality has\n"
            "caused an egg-shaped fireball to\n"
            "appear on the Pokémon's head."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Crocalor, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Crocalor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Crocalor, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Crocalor),
        ICON(Crocalor, 0),
        //.footprint = gMonFootprint_Crocalor,
        LEARNSETS(Crocalor),
=======
        .palette = gMonPalette_Crocalor,
        .shinyPalette = gMonShinyPalette_Crocalor,
        .iconSprite = gMonIcon_Crocalor,
        .iconPalIndex = 0,
        FOOTPRINT(Crocalor)
        .levelUpLearnset = sCrocalorLevelUpLearnset,
        .teachableLearnset = sCrocalorTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SKELEDIRGE}),
    },

    [SPECIES_SKELEDIRGE] =
    {
        .baseHP        = 104,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 66,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 265,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Skeledirge"),
        .cryId = CRY_SKELEDIRGE,
        .natDexNum = NATIONAL_DEX_SKELEDIRGE,
        .categoryName = _("Singer"),
        .height = 16,
        .weight = 3265,
        .description = COMPOUND_STRING(
            "Skeledirge's gentle singing\n"
            "soothes the souls of all that hear it. It\n"
            "burns its enemies to a crisp with\n"
            "flames of over 5,400 degrees Fahrenheit."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Skeledirge, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Skeledirge,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Skeledirge, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Skeledirge),
        ICON(Skeledirge, 0),
        //.footprint = gMonFootprint_Skeledirge,
        LEARNSETS(Skeledirge),
=======
        .palette = gMonPalette_Skeledirge,
        .shinyPalette = gMonShinyPalette_Skeledirge,
        .iconSprite = gMonIcon_Skeledirge,
        .iconPalIndex = 0,
        FOOTPRINT(Skeledirge)
        .levelUpLearnset = sSkeledirgeLevelUpLearnset,
        .teachableLearnset = sSkeledirgeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
    [SPECIES_QUAXLY] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield =  62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Quaxly"),
        .cryId = CRY_QUAXLY,
        .natDexNum = NATIONAL_DEX_QUAXLY,
        .categoryName = _("Duckling"),
        .height = 5,
        .weight = 61,
        .description = COMPOUND_STRING(
            "Its strong legs let it easily swim\n"
            "around in even fast-flowing rivers.\n"
            "It likes to keep things tidy and is\n"
            "prone to overthinking things."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quaxly, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Quaxly,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Quaxly, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Quaxly),
        ICON(Quaxly, 2),
        //.footprint = gMonFootprint_Quaxly,
        LEARNSETS(Quaxly),
=======
        .palette = gMonPalette_Quaxly,
        .shinyPalette = gMonShinyPalette_Quaxly,
        .iconSprite = gMonIcon_Quaxly,
        .iconPalIndex = 0,
        FOOTPRINT(Quaxly)
        .levelUpLearnset = sQuaxlyLevelUpLearnset,
        .teachableLearnset = sQuaxlyTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUAXWELL}),
    },

    [SPECIES_QUAXWELL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quaxwell"),
        .cryId = CRY_QUAXWELL,
        .natDexNum = NATIONAL_DEX_QUAXWELL,
        .categoryName = _("Practicing"),
        .height = 12,
        .weight = 215,
        .description = COMPOUND_STRING(
            "The hardworking Quaxwell observes\n"
            "people and Pokémon from various\n"
            "regions and incorporates their\n"
            "movements into its own dance routines."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quaxwell, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Quaxwell,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Quaxwell, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Quaxwell),
        ICON(Quaxwell, 0),
        //.footprint = gMonFootprint_Quaxwell,
        LEARNSETS(Quaxwell),
=======
        .palette = gMonPalette_Quaxwell,
        .shinyPalette = gMonShinyPalette_Quaxwell,
        .iconSprite = gMonIcon_Quaxwell,
        .iconPalIndex = 0,
        FOOTPRINT(Quaxwell)
        .levelUpLearnset = sQuaxwellLevelUpLearnset,
        .teachableLearnset = sQuaxwellTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_QUAQUAVAL}),
    },

    [SPECIES_QUAQUAVAL] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quaquaval"),
        .cryId = CRY_QUAQUAVAL,
        .natDexNum = NATIONAL_DEX_QUAQUAVAL,
        .categoryName = _("Dancer"),
        .height = 18,
        .weight = 619,
        .description = COMPOUND_STRING(
            "A single kick from a Quaquaval can\n"
            "send a truck rolling. This Pokémon\n"
            "uses its powerful legs to perform\n"
            "striking dances from far-off lands."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quaquaval, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Quaquaval,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Quaquaval, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Quaquaval),
        ICON(Quaquaval, 0),
        //.footprint = gMonFootprint_Quaquaval,
        LEARNSETS(Quaquaval),
=======
        .palette = gMonPalette_Quaquaval,
        .shinyPalette = gMonShinyPalette_Quaquaval,
        .iconSprite = gMonIcon_Quaquaval,
        .iconPalIndex = 0,
        FOOTPRINT(Quaquaval)
        .levelUpLearnset = sQuaquavalLevelUpLearnset,
        .teachableLearnset = sQuaquavalTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
    [SPECIES_LECHONK] =
    {
        .baseHP        = 54,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 51,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lechonk"),
        .cryId = CRY_LECHONK,
        .natDexNum = NATIONAL_DEX_LECHONK,
        .categoryName = _("Hog"),
        .height = 5,
        .weight = 102,
        .description = COMPOUND_STRING(
            "It searches for food all day. It\n"
            "possesses a keen sense of smell but\n"
            "doesn't use it for anything other\n"
            "than foraging."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lechonk, 64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Lechonk,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lechonk, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Lechonk),
        ICON(Lechonk, 1),
        //.footprint = gMonFootprint_Lechonk,
        LEARNSETS(Lechonk),
=======
        .palette = gMonPalette_Lechonk,
        .shinyPalette = gMonShinyPalette_Lechonk,
        .iconSprite = gMonIcon_Lechonk,
        .iconPalIndex = 1,
        FOOTPRINT(Lechonk)
        .levelUpLearnset = sLechonkLevelUpLearnset,
        .teachableLearnset = sLechonkTeachableLearnset,
        .eggMoveLearnset = sLechonkEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 18, SPECIES_OINKOLOGNE_MALE},
                                {EVO_LEVEL_FEMALE, 18, SPECIES_OINKOLOGNE_FEMALE}),
    },

#define OINKOLOGNE_MISC_INFO                                \
        .types = { TYPE_NORMAL, TYPE_NORMAL },              \
        .catchRate = 100,                                   \
        .expYield = 171,                                    \
        .evYield_HP = 2,                                    \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_GRAY,                       \
        .speciesName = _("Oinkologne"),                     \
        .natDexNum = NATIONAL_DEX_OINKOLOGNE,               \
        .categoryName = _("Hog"),                           \
        .height = 10,                                       \
        .weight = 1200,                                     \
        .pokemonScale = 356,                                \
        .pokemonOffset = 17,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .teachableLearnset = sOinkologneTeachableLearnset,  \
        .formSpeciesIdTable = sOinkologneFormSpeciesIdTable

    [SPECIES_OINKOLOGNE_MALE] =
    {
        OINKOLOGNE_MISC_INFO,
        .baseHP        = 110,
        .baseAttack    = 100,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 80,
        .genderRatio = PERCENT_FEMALE(0),
        .abilities = { ABILITY_LINGERING_AROMA, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .cryId = CRY_OINKOLOGNE_MALE,
        .description = COMPOUND_STRING(
            "Oinkologne is proud of its fine,\n"
            "glossy skin. It emits a concentrated\n"
            "scent from the tip of its tail."),
        FRONT_PIC(OinkologneMale, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Oinkologne,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(OinkologneMale, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(OinkologneMale),
        ICON(OinkologneMale, 1),
        //.footprint = gMonFootprint_Oinkologne,
=======
        .palette = gMonPalette_OinkologneMale,
        .shinyPalette = gMonShinyPalette_OinkologneMale,
        .iconSprite = gMonIcon_OinkologneMale,
        .iconPalIndex = 1,
        FOOTPRINT(Oinkologne)
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .levelUpLearnset = sOinkologneMaleLevelUpLearnset,
    },

    [SPECIES_OINKOLOGNE_FEMALE] =
    {
        OINKOLOGNE_MISC_INFO,
        .baseHP        = 115,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 90,
        .genderRatio = PERCENT_FEMALE(100),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .cryId = CRY_OINKOLOGNE_FEMALE,
        .description = COMPOUND_STRING(
            "This is a meticulous Pokémon that\n"
            "likes to keep things tidy. It\n"
            "shrouds itself in a floral aroma that\n"
            "soothes the Pokémon around it."),
        FRONT_PIC(OinkologneFemale, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Oinkologne,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(OinkologneFemale, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(OinkologneFemale),
        ICON(OinkologneFemale, 2),
        //.footprint = gMonFootprint_Oinkologne,
=======
        .palette = gMonPalette_OinkologneFemale,
        .shinyPalette = gMonShinyPalette_OinkologneFemale,
        .iconSprite = gMonIcon_OinkologneFemale,
        .iconPalIndex = 0,
        FOOTPRINT(Oinkologne)
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .levelUpLearnset = sOinkologneFemaleLevelUpLearnset,
    },
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
    [SPECIES_TAROUNTULA] =
    {
        .baseHP        = 35,
        .baseAttack    = 41,
        .baseDefense   = 45,
        .baseSpeed     = 20,
        .baseSpAttack  = 29,
        .baseSpDefense = 40,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 42,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tarountula"),
        .cryId = CRY_TAROUNTULA,
        .natDexNum = NATIONAL_DEX_TAROUNTULA,
        .categoryName = _("String Ball"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "The thread it secretes from its\n"
            "rear is as strong as wire. The secret\n"
            "behind the thread's strength is the\n"
            "topic of ongoing research."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tarountula, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Tarountula,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tarountula, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tarountula),
        ICON(Tarountula, 1),
        //.footprint = gMonFootprint_Tarountula,
        LEARNSETS(Tarountula),
=======
        .palette = gMonPalette_Tarountula,
        .shinyPalette = gMonShinyPalette_Tarountula,
        .iconSprite = gMonIcon_Tarountula,
        .iconPalIndex = 1,
        FOOTPRINT(Tarountula)
        .levelUpLearnset = sTarountulaLevelUpLearnset,
        .teachableLearnset = sTarountulaTeachableLearnset,
        .eggMoveLearnset = sTarountulaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_SPIDOPS}),
    },

    [SPECIES_SPIDOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 92,
        .baseSpeed     = 35,
        .baseSpAttack  = 52,
        .baseSpDefense = 86,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 141,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Spidops"),
        .cryId = CRY_SPIDOPS,
        .natDexNum = NATIONAL_DEX_SPIDOPS,
        .categoryName = _("Trap"),
        .height = 10,
        .weight = 165,
        .description = COMPOUND_STRING(
            "It clings to branches and ceilings\n"
            "using its threads and moves without\n"
            "a sound. It takes out its prey\n"
            "before the prey even notices it."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spidops, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Spidops,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Spidops, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Spidops),
        ICON(Spidops, 1),
        //.footprint = gMonFootprint_Spidops,
        LEARNSETS(Spidops),
=======
        .palette = gMonPalette_Spidops,
        .shinyPalette = gMonShinyPalette_Spidops,
        .iconSprite = gMonIcon_Spidops,
        .iconPalIndex = 1,
        FOOTPRINT(Spidops)
        .levelUpLearnset = sSpidopsLevelUpLearnset,
        .teachableLearnset = sSpidopsTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
    [SPECIES_NYMBLE] =
    {
        .baseHP        = 33,
        .baseAttack    = 46,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 21,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 190,
        .expYield = 42,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 20,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nymble"),
        .cryId = CRY_NYMBLE,
        .natDexNum = NATIONAL_DEX_NYMBLE,
        .categoryName = _("Grasshopper"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It has its third set of legs folded\n"
            "up. When it's in a tough spot, this\n"
            "Pokémon jumps over 30 feet using the\n"
            "strength of its legs."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nymble, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nymble,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nymble, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Nymble),
        ICON(Nymble, 0),
        //.footprint = gMonFootprint_Nymble,
        LEARNSETS(Nymble),
=======
        .palette = gMonPalette_Nymble,
        .shinyPalette = gMonShinyPalette_Nymble,
        .iconSprite = gMonIcon_Nymble,
        .iconPalIndex = 0,
        FOOTPRINT(Nymble)
        .levelUpLearnset = sNymbleLevelUpLearnset,
        .teachableLearnset = sNymbleTeachableLearnset,
        .eggMoveLearnset = sNymbleEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_LOKIX}),
    },

    [SPECIES_LOKIX] =
    {
        .baseHP        = 71,
        .baseAttack    = 102,
        .baseDefense   = 78,
        .baseSpeed     = 92,
        .baseSpAttack  = 52,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_DARK },
        .catchRate = 30,
        .expYield = 158,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lokix"),
        .cryId = CRY_LOKIX,
        .natDexNum = NATIONAL_DEX_LOKIX,
        .categoryName = _("Grasshopper"),
        .height = 10,
        .weight = 175,
        .description = COMPOUND_STRING(
            "When it decides to fight all out, it\n"
            "stands on its previously folded\n"
            "legs to enter Showdown Mode. It\n"
            "neutralizes its enemies in short order."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lokix, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Lokix,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lokix, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Lokix),
        ICON(Lokix, 0),
        //.footprint = gMonFootprint_Lokix,
        LEARNSETS(Lokix),
=======
        .palette = gMonPalette_Lokix,
        .shinyPalette = gMonShinyPalette_Lokix,
        .iconSprite = gMonIcon_Lokix,
        .iconPalIndex = 0,
        FOOTPRINT(Lokix)
        .levelUpLearnset = sLokixLevelUpLearnset,
        .teachableLearnset = sLokixTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
    [SPECIES_PAWMI] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 20,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 25,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 48,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STATIC, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmi"),
        .cryId = CRY_PAWMI,
        .natDexNum = NATIONAL_DEX_PAWMI,
        .categoryName = _("Mouse"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING(
            "The pads of its paws are\n"
            "electricity-discharging organs. Pawmi fires\n"
            "electricity from its forepaws while\n"
            "standing unsteadily on its hind legs."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pawmi, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pawmi,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(Pawmi, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pawmi),
        ICON(Pawmi, 3),
        //.footprint = gMonFootprint_Pawmi,
        LEARNSETS(Pawmi),
=======
        .backPic = gMonBackPic_Pawmi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pawmi,
        .shinyPalette = gMonShinyPalette_Pawmi,
        .iconSprite = gMonIcon_Pawmi,
        .iconPalIndex = 0,
        FOOTPRINT(Pawmi)
        .levelUpLearnset = sPawmiLevelUpLearnset,
        .teachableLearnset = sPawmiTeachableLearnset,
        .eggMoveLearnset = sPawmiEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PAWMO}),
    },

    [SPECIES_PAWMO] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 40,
        .baseSpeed     = 85,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_FIGHTING },
        .catchRate = 80,
        .expYield = 123,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmo"),
        .cryId = CRY_PAWMO,
        .natDexNum = NATIONAL_DEX_PAWMO,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "When its group is attacked, Pawmo\n"
            "is the first to leap into battle,\n"
            "defeating enemies with a fighting\n"
            "technique that utilizes electric shocks."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pawmo, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Pawmo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(Pawmo, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pawmo),
        ICON(Pawmo, 3),
        //.footprint = gMonFootprint_Pawmo,
        LEARNSETS(Pawmo),
        .evolutions = EVOLUTION({EVO_NONE, 0, SPECIES_PAWMOT}),
=======
        .backPic = gMonBackPic_Pawmo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pawmo,
        .shinyPalette = gMonShinyPalette_Pawmo,
        .iconSprite = gMonIcon_Pawmo,
        .iconPalIndex = 0,
        FOOTPRINT(Pawmo)
        .levelUpLearnset = sPawmoLevelUpLearnset,
        .teachableLearnset = sPawmoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_PAWMOT}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_PAWMOT] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 245,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmot"),
        .cryId = CRY_PAWMOT,
        .natDexNum = NATIONAL_DEX_PAWMOT,
        .categoryName = _("Hands-On"),
        .height = 9,
        .weight = 410,
        .description = COMPOUND_STRING(
            "This Pokémon normally is slow to\n"
            "react, but once it enters battle, it\n"
            "will strike down its enemies with\n"
            "lightning-fast movements."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pawmot, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pawmot,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pawmot, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Pawmot),
        ICON(Pawmot, 3),
        //.footprint = gMonFootprint_Pawmot,
        LEARNSETS(Pawmot),
=======
        .palette = gMonPalette_Pawmot,
        .shinyPalette = gMonShinyPalette_Pawmot,
        .iconSprite = gMonIcon_Pawmot,
        .iconPalIndex = 0,
        FOOTPRINT(Pawmot)
        .levelUpLearnset = sPawmotLevelUpLearnset,
        .teachableLearnset = sPawmotTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
    [SPECIES_TANDEMAUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 150,
        .expYield = 61,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tandemaus"),
        .cryId = CRY_TANDEMAUS,
        .natDexNum = NATIONAL_DEX_TANDEMAUS,
        .categoryName = _("Couple"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Exhibiting great teamwork, they\n"
            "use their incisors to cut pieces out\n"
            "of any material that might be useful\n"
            "for a nest, then make off with them."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tandemaus, 64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Tandemaus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tandemaus, 64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tandemaus),
        ICON(Tandemaus, 0),
        //.footprint = gMonFootprint_Tandemaus,
        LEARNSETS(Tandemaus),
=======
        .palette = gMonPalette_Tandemaus,
        .shinyPalette = gMonShinyPalette_Tandemaus,
        .iconSprite = gMonIcon_Tandemaus,
        .iconPalIndex = 1,
        FOOTPRINT(Tandemaus)
        .levelUpLearnset = sTandemausLevelUpLearnset,
        .teachableLearnset = sTandemausTeachableLearnset,
        .eggMoveLearnset = sTandemausEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL_FAMILY_OF_FOUR, 25, SPECIES_MAUSHOLD_FAMILY_OF_FOUR},
                                {EVO_LEVEL_FAMILY_OF_THREE, 25, SPECIES_MAUSHOLD_FAMILY_OF_THREE}),
    },

#define MAUSHOLD_SPECIES_INFO                                                           \
        .baseHP        = 74,                                                            \
        .baseAttack    = 75,                                                            \
        .baseDefense   = 70,                                                            \
        .baseSpeed     = 111,                                                           \
        .baseSpAttack  = 65,                                                            \
        .baseSpDefense = 75,                                                            \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                                          \
        .catchRate = 75,                                                                \
        .expYield = 165,                                                                \
        .evYield_Speed = 2,                                                             \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 10,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_FAST,                                                      \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },                              \
        .abilities = { ABILITY_FRIEND_GUARD, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN }, \
        .bodyColor = BODY_COLOR_WHITE,                                                  \
        .speciesName = _("Maushold"),                                                   \
        .natDexNum = NATIONAL_DEX_MAUSHOLD,                                             \
        .categoryName = _("Family"),                                                    \
        .height = 3,                                                                    \
        .pokemonScale = 356,                                                            \
        .pokemonOffset = 17,                                                            \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        .frontPicYOffset = 15,                                                          \
        .frontAnimFrames = sAnims_Maushold,                                             \
        .backPicYOffset = 15,                                                           \
        PALETTES(Maushold),                                                             \
        LEARNSETS(Maushold),                                                            \
        .formSpeciesIdTable = sMausholdFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Maushold,

    [SPECIES_MAUSHOLD_FAMILY_OF_THREE] =
    {
        MAUSHOLD_SPECIES_INFO,
        .cryId = CRY_MAUSHOLD_FAMILY_OF_THREE,
        .weight = 23,
        .description = COMPOUND_STRING(
            "The little one just appeared one\n"
            "day. They all live together like a\n"
            "family, but the relationship between\n"
            "the three is still unclear."),
<<<<<<< HEAD
        FRONT_PIC(MausholdFamilyOfThree, 64, 64),
        BACK_PIC(MausholdFamilyOfThree, 64, 64),
        ICON(MausholdFamilyOfThree, 0),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MausholdFamilyOfThree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Maushold,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdFamilyOfThree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdFamilyOfThree,
        .iconPalIndex = 1,
        FOOTPRINT(MausholdFamilyOfThree)
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .formSpeciesIdTable = sMausholdFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
    [SPECIES_MAUSHOLD_FAMILY_OF_FOUR] =
    {
        MAUSHOLD_SPECIES_INFO,
        .cryId = CRY_MAUSHOLD_FAMILY_OF_FOUR,
        .weight = 28,
        .description = COMPOUND_STRING(
            "The larger pair protects the little\n"
            "ones during battles. When facing\n"
            "strong opponents, the whole group\n"
            "will join the fight."),
<<<<<<< HEAD
        FRONT_PIC(MausholdFamilyOfFour, 64, 64),
        BACK_PIC(MausholdFamilyOfFour, 64, 64),
        ICON(MausholdFamilyOfFour, 0),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MausholdFamilyOfFour,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Maushold,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdFamilyOfFour,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdFamilyOfFour,
        .iconPalIndex = 1,
        FOOTPRINT(MausholdFamilyOfFour)
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .formSpeciesIdTable = sMausholdFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
    [SPECIES_FIDOUGH] =
    {
        .baseHP        = 37,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Fidough"),
        .cryId = CRY_FIDOUGH,
        .natDexNum = NATIONAL_DEX_FIDOUGH,
        .categoryName = _("Puppy"),
        .height = 3,
        .weight = 109,
        .description = COMPOUND_STRING(
            "This Pokémon is smooth and moist\n"
            "to the touch. Yeast in Fidough's\n"
            "breath induces fermentation in the\n"
            "Pokémon's vicinity."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fidough, 64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Fidough,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Fidough, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Fidough),
        ICON(Fidough, 1),
        //.footprint = gMonFootprint_Fidough,
        LEARNSETS(Fidough),
=======
        .palette = gMonPalette_Fidough,
        .shinyPalette = gMonShinyPalette_Fidough,
        .iconSprite = gMonIcon_Fidough,
        .iconPalIndex = 1,
        FOOTPRINT(Fidough)
        .levelUpLearnset = sFidoughLevelUpLearnset,
        .teachableLearnset = sFidoughTeachableLearnset,
        .eggMoveLearnset = sFidoughEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DACHSBUN}),
    },

    [SPECIES_DACHSBUN] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 115,
        .baseSpeed     = 95,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 90,
        .expYield = 167,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_WELL_BAKED_BODY, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dachsbun"),
        .cryId = CRY_DACHSBUN,
        .natDexNum = NATIONAL_DEX_DACHSBUN,
        .categoryName = _("Dog"),
        .height = 5,
        .weight = 149,
        .description = COMPOUND_STRING(
            "The pleasant aroma that emanates\n"
            "from this Pokémon's body helps\n"
            "wheat grow, so Dachsbun has been\n"
            "treasured by farming villages."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dachsbun, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Dachsbun,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dachsbun, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Dachsbun),
        ICON(Dachsbun, 0), // TODO
        //.footprint = gMonFootprint_Dachsbun,
        LEARNSETS(Dachsbun),
=======
        .palette = gMonPalette_Dachsbun,
        .shinyPalette = gMonShinyPalette_Dachsbun,
        .iconSprite = gMonIcon_Dachsbun,
        .iconPalIndex = 0,
        FOOTPRINT(Dachsbun)
        .levelUpLearnset = sDachsbunLevelUpLearnset,
        .teachableLearnset = sDachsbunTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
    [SPECIES_SMOLIV] =
    {
        .baseHP        = 41,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 30,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 52,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Smoliv"),
        .cryId = CRY_SMOLIV,
        .natDexNum = NATIONAL_DEX_SMOLIV,
        .categoryName = _("Olive"),
        .height = 3,
        .weight = 65,
        .description = COMPOUND_STRING(
            "This Pokémon converts nutrients\n"
            "into oil, which it stores in the fruit\n"
            "on its head. It can easily go a whole\n"
            "week without eating or drinking."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Smoliv, 64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Smoliv,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Smoliv, 64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Smoliv),
        ICON(Smoliv, 1),
        //.footprint = gMonFootprint_Smoliv,
        LEARNSETS(Smoliv),
=======
        .palette = gMonPalette_Smoliv,
        .shinyPalette = gMonShinyPalette_Smoliv,
        .iconSprite = gMonIcon_Smoliv,
        .iconPalIndex = 1,
        FOOTPRINT(Smoliv)
        .levelUpLearnset = sSmolivLevelUpLearnset,
        .teachableLearnset = sSmolivTeachableLearnset,
        .eggMoveLearnset = sSmolivEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DOLLIV}),
    },

    [SPECIES_DOLLIV] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 60,
        .baseSpeed     = 33,
        .baseSpAttack  = 78,
        .baseSpDefense = 78,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 124,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dolliv"),
        .cryId = CRY_DOLLIV,
        .natDexNum = NATIONAL_DEX_DOLLIV,
        .categoryName = _("Olive"),
        .height = 6,
        .weight = 119,
        .description = COMPOUND_STRING(
            "Dolliv shares its tasty, fresh-\n"
            "scented oil with others. This species\n"
            "has coexisted with humans since\n"
            "times long gone."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dolliv, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Dolliv,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dolliv, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Dolliv),
        ICON(Dolliv, 1),
        //.footprint = gMonFootprint_Dolliv,
        LEARNSETS(Dolliv),
=======
        .palette = gMonPalette_Dolliv,
        .shinyPalette = gMonShinyPalette_Dolliv,
        .iconSprite = gMonIcon_Dolliv,
        .iconPalIndex = 1,
        FOOTPRINT(Dolliv)
        .levelUpLearnset = sDollivLevelUpLearnset,
        .teachableLearnset = sDollivTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ARBOLIVA}),
    },

    [SPECIES_ARBOLIVA] =
    {
        .baseHP        = 78,
        .baseAttack    = 69,
        .baseDefense   = 90,
        .baseSpeed     = 39,
        .baseSpAttack  = 125,
        .baseSpDefense = 109,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_SEED_SOWER, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Arboliva"),
        .cryId = CRY_ARBOLIVA,
        .natDexNum = NATIONAL_DEX_ARBOLIVA,
        .categoryName = _("Olive"),
        .height = 14,
        .weight = 482,
        .description = COMPOUND_STRING(
            "This Pokémon drives back enemies\n"
            "by launching its rich, aromatic oil at\n"
            "them with enough force to smash a\n"
            "boulder."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Arboliva, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Arboliva,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arboliva, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Arboliva),
        ICON(Arboliva, 5),
        //.footprint = gMonFootprint_Arboliva,
        LEARNSETS(Arboliva),
=======
        .palette = gMonPalette_Arboliva,
        .shinyPalette = gMonShinyPalette_Arboliva,
        .iconSprite = gMonIcon_Arboliva,
        .iconPalIndex = 1,
        FOOTPRINT(Arboliva)
        .levelUpLearnset = sArbolivaLevelUpLearnset,
        .teachableLearnset = sArbolivaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
#define SQUAWKABILLY_MISC_INFO                                  \
        .baseHP        = 82,                                    \
        .baseAttack    = 96,                                    \
        .baseDefense   = 51,                                    \
        .baseSpeed     = 92,                                    \
        .baseSpAttack  = 45,                                    \
        .baseSpDefense = 51,                                    \
        .types = { TYPE_NORMAL, TYPE_FLYING },                  \
        .catchRate = 190,                                       \
        .expYield = 146,                                        \
        .evYield_Attack = 1,                                    \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 15,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_ERRATIC,                           \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },    \
        .speciesName = _("Sqawkabily"),                         \
        .cryId = CRY_SQUAWKABILLY,                              \
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,                 \
        .categoryName = _("Parrot"),                            \
        .height = 6,                                            \
        .weight = 24,                                           \
        .pokemonScale = 356,                                    \
        .pokemonOffset = 17,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FRONT_PIC(Squawkabilly, 64, 64),                        \
        .frontPicYOffset = 4,                                   \
        .frontAnimFrames = sAnims_Squawkabilly,                 \
        BACK_PIC(Squawkabilly, 64, 64),                         \
        .backPicYOffset = 4,                                    \
        LEARNSETS(Squawkabilly),                                \
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Squawkabilly,

    [SPECIES_SQUAWKABILLY_GREEN_PLUMAGE] =
    {
        SQUAWKABILLY_MISC_INFO,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_GREEN,
<<<<<<< HEAD
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Sqawkabily", "Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Parrot"),
        .height = 6,
        .weight = 24,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "Green-feathered flocks hold the\n"
            "most sway. When they're out\n"
            "searching for food in the mornings and\n"
            "evenings, it gets very noisy."),
<<<<<<< HEAD
        PALETTES(SquawkabillyGreenPlumage),
        ICON(SquawkabillyGreenPlumage, 1),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Squawkabilly,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyGreenPlumage,
        .shinyPalette = gMonShinyPalette_SquawkabillyGreenPlumage,
        .iconSprite = gMonIcon_SquawkabillyGreenPlumage,
        .iconPalIndex = 1,
        FOOTPRINT(Squawkabilly)
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_SQUAWKABILLY_BLUE_PLUMAGE] =
    {
        SQUAWKABILLY_MISC_INFO,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_BLUE,
<<<<<<< HEAD
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Sqawkabily", "Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Parrot"),
        .height = 6,
        .weight = 24,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "The largest of their flocks can\n"
            "contain more than 50 individuals. They\n"
            "fly around towns and forests,\n"
            "searching for food and making a racket."),
<<<<<<< HEAD
        PALETTES(SquawkabillyBluePlumage),
        ICON(SquawkabillyBluePlumage, 2),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Squawkabilly,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyBluePlumage,
        .shinyPalette = gMonShinyPalette_SquawkabillyBluePlumage,
        .iconSprite = gMonIcon_SquawkabillyBluePlumage,
        .iconPalIndex = 0,
        FOOTPRINT(Squawkabilly)
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_SQUAWKABILLY_YELLOW_PLUMAGE] =
    {
        SQUAWKABILLY_MISC_INFO,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_YELLOW,
<<<<<<< HEAD
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Sqawkabily", "Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Parrot"),
        .height = 6,
        .weight = 24,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "These Squawkabilly are hotheaded,\n"
            "and their fighting style is vicious.\n"
            "They'll leap within reach of their\n"
            "foes to engage in close combat."),
<<<<<<< HEAD
        PALETTES(SquawkabillyYellowPlumage),
        ICON(SquawkabillyYellowPlumage, 1),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Squawkabilly,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyYellowPlumage,
        .shinyPalette = gMonShinyPalette_SquawkabillyYellowPlumage,
        .iconSprite = gMonIcon_SquawkabillyYellowPlumage,
        .iconPalIndex = 1,
        FOOTPRINT(Squawkabilly)
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_SQUAWKABILLY_WHITE_PLUMAGE] =
    {
        SQUAWKABILLY_MISC_INFO,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
<<<<<<< HEAD
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Sqawkabily", "Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Parrot"),
        .height = 6,
        .weight = 24,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "Though these Squawkabilly are the\n"
            "fewest in number, they have no\n"
            "trouble living in towns since they blend\n"
            "in with the white buildings."),
<<<<<<< HEAD
        PALETTES(SquawkabillyWhitePlumage),
        ICON(SquawkabillyWhitePlumage, 1),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Squawkabilly,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyWhitePlumage,
        .shinyPalette = gMonShinyPalette_SquawkabillyWhitePlumage,
        .iconSprite = gMonIcon_SquawkabillyWhitePlumage,
        .iconPalIndex = 0,
        FOOTPRINT(Squawkabilly)
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
    [SPECIES_NACLI] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nacli"),
        .cryId = CRY_NACLI,
        .natDexNum = NATIONAL_DEX_NACLI,
        .categoryName = _("Rock Salt"),
        .height = 4,
        .weight = 160,
        .description = COMPOUND_STRING(
            "The ground scrapes its body as it\n"
            "travels, causing it to leave salt\n"
            "behind. Salt is constantly being created\n"
            "and replenished inside Nacli's body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nacli, 64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Nacli,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nacli, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Nacli),
        ICON(Nacli, 2),
        //.footprint = gMonFootprint_Nacli,
        LEARNSETS(Nacli),
=======
        .palette = gMonPalette_Nacli,
        .shinyPalette = gMonShinyPalette_Nacli,
        .iconSprite = gMonIcon_Nacli,
        .iconPalIndex = 2,
        FOOTPRINT(Nacli)
        .levelUpLearnset = sNacliLevelUpLearnset,
        .teachableLearnset = sNacliTeachableLearnset,
        .eggMoveLearnset = sNacliEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_NACLSTACK}),
    },

    [SPECIES_NACLSTACK] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 124,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Naclstack"),
        .cryId = CRY_NACLSTACK,
        .natDexNum = NATIONAL_DEX_NACLSTACK,
        .categoryName = _("Rock Salt"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "It compresses rock salt inside its\n"
            "body and shoots out hardened salt\n"
            "pellets with enough force to\n"
            "perforate an iron sheet."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Naclstack, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Naclstack,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Naclstack, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Naclstack),
        ICON(Naclstack, 2), // TODO: recolor
        //.footprint = gMonFootprint_Naclstack,
        LEARNSETS(Naclstack),
=======
        .palette = gMonPalette_Naclstack,
        .shinyPalette = gMonShinyPalette_Naclstack,
        .iconSprite = gMonIcon_Naclstack,
        .iconPalIndex = 2,
        FOOTPRINT(Naclstack)
        .levelUpLearnset = sNaclstackLevelUpLearnset,
        .teachableLearnset = sNaclstackTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_GARGANACL}),
    },

    [SPECIES_GARGANACL] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 130,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 45,
        .expYield = 250,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Garganacl"),
        .cryId = CRY_GARGANACL,
        .natDexNum = NATIONAL_DEX_GARGANACL,
        .categoryName = _("Rock Salt"),
        .height = 23,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Garganacl will rub its fingertips\n"
            "together and sprinkle injured\n"
            "Pokémon with salt. Even severe wounds will\n"
            "promptly heal afterward."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Garganacl, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Garganacl,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Garganacl, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Garganacl),
        ICON(Garganacl, 2),
        //.footprint = gMonFootprint_Garganacl,
        LEARNSETS(Garganacl),
=======
        .palette = gMonPalette_Garganacl,
        .shinyPalette = gMonShinyPalette_Garganacl,
        .iconSprite = gMonIcon_Garganacl,
        .iconPalIndex = 2,
        FOOTPRINT(Garganacl)
        .levelUpLearnset = sGarganaclLevelUpLearnset,
        .teachableLearnset = sGarganaclTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
    [SPECIES_CHARCADET] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 90,
        .expYield = 51,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("CHARCADET"),
        .cryId = CRY_CHARCADET,
        .natDexNum = NATIONAL_DEX_CHARCADET,
        .categoryName = _("FIRE CHILD"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "Burnt charcoal came to life and\n"
            "became a Pokémon. Possessing a fiery\n"
            "fighting spirit, CHARCADET will\n"
            "battle even tough opponents."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Charcadet, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Charcadet,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Charcadet, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Charcadet),
        ICON(Charcadet, 1),
        //.footprint = gMonFootprint_Charcadet,
        LEARNSETS(Charcadet),
=======
        .palette = gMonPalette_Charcadet,
        .shinyPalette = gMonShinyPalette_Charcadet,
        .iconSprite = gMonIcon_Charcadet,
        .iconPalIndex = 0,
        FOOTPRINT(Charcadet)
        .levelUpLearnset = sCharcadetLevelUpLearnset,
        .teachableLearnset = sCharcadetTeachableLearnset,
        .eggMoveLearnset = sCharcadetEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_AUSPICIOUS_ARMOR, SPECIES_ARMAROUGE},
                                {EVO_ITEM, ITEM_MALICIOUS_ARMOR, SPECIES_CERULEDGE}),
    },

    [SPECIES_ARMAROUGE] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_PSYCHIC },
        .catchRate = 25,
        .expYield = 263,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("ARMAROUGE"),
        .cryId = CRY_ARMAROUGE,
        .natDexNum = NATIONAL_DEX_ARMAROUGE,
        .categoryName = _("FIRE WARRIOR"),
        .height = 15,
        .weight = 850,
        .description = COMPOUND_STRING(
            "ARMAROUGE evolved through the use\n"
            "of a set of armor that belonged to\n"
            "a distinguished warrior. This\n"
            "Pokémon is incredibly loyal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Armarouge, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Armarouge,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Armarouge, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Armarouge),
        ICON(Armarouge, 0),
        //.footprint = gMonFootprint_Armarouge,
        LEARNSETS(Armarouge),
=======
        .palette = gMonPalette_Armarouge,
        .shinyPalette = gMonShinyPalette_Armarouge,
        .iconSprite = gMonIcon_Armarouge,
        .iconPalIndex = 0,
        FOOTPRINT(Armarouge)
        .levelUpLearnset = sArmarougeLevelUpLearnset,
        .teachableLearnset = sArmarougeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_CERULEDGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .catchRate = 25,
        .expYield = 263,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("CERULEDGE"),
        .cryId = CRY_CERULEDGE,
        .natDexNum = NATIONAL_DEX_CERULEDGE,
        .categoryName = _("FIRE BLADES"),
        .height = 16,
        .weight = 620,
        .description = COMPOUND_STRING(
            "The fiery blades on its arms burn\n"
            "fiercely with the lingering\n"
            "resentment of a sword wielder who fell\n"
            "before accomplishing their goal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ceruledge, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Ceruledge,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Ceruledge, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Ceruledge),
        ICON(Ceruledge, 2),
        //.footprint = gMonFootprint_Ceruledge,
        LEARNSETS(Ceruledge),
=======
        .palette = gMonPalette_Ceruledge,
        .shinyPalette = gMonShinyPalette_Ceruledge,
        .iconSprite = gMonIcon_Ceruledge,
        .iconPalIndex = 2,
        FOOTPRINT(Ceruledge)
        .levelUpLearnset = sCeruledgeLevelUpLearnset,
        .teachableLearnset = sCeruledgeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
    [SPECIES_TADBULB] =
    {
        .baseHP        = 61,
        .baseAttack    = 31,
        .baseDefense   = 41,
        .baseSpeed     = 45,
        .baseSpAttack  = 59,
        .baseSpDefense = 35,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 54,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_STATIC, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tadbulb"),
        .cryId = CRY_TADBULB,
        .natDexNum = NATIONAL_DEX_TADBULB,
        .categoryName = _("EleTadpole"),
        .height = 3,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Tadbulb shakes its tail to\n"
            "generate electricity. If it senses danger,\n"
            "it will make its head blink on and off\n"
            "to alert its allies."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tadbulb, 64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Tadbulb,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 12,
        BACK_PIC(Tadbulb, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tadbulb),
        ICON(Tadbulb, 5), // TODO: Redo to 0
        //.footprint = gMonFootprint_Tadbulb,
        LEARNSETS(Tadbulb),
=======
        .palette = gMonPalette_Tadbulb,
        .shinyPalette = gMonShinyPalette_Tadbulb,
        .iconSprite = gMonIcon_Tadbulb,
        .iconPalIndex = 0,
        FOOTPRINT(Tadbulb)
        .levelUpLearnset = sTadbulbLevelUpLearnset,
        .teachableLearnset = sTadbulbTeachableLearnset,
        .eggMoveLearnset = sTadbulbEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_BELLIBOLT}),
    },

    [SPECIES_BELLIBOLT] =
    {
        .baseHP        = 109,
        .baseAttack    = 64,
        .baseDefense   = 91,
        .baseSpeed     = 45,
        .baseSpAttack  = 103,
        .baseSpDefense = 83,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 50,
        .expYield = 173,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_ELECTROMORPHOSIS, ABILITY_STATIC, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellibolt"),
        .cryId = CRY_BELLIBOLT,
        .natDexNum = NATIONAL_DEX_BELLIBOLT,
        .categoryName = _("EleFrog"),
        .height = 12,
        .weight = 1130,
        .description = COMPOUND_STRING(
            "When this Pokémon expands and\n"
            "contracts its wobbly body, the belly-\n"
            "button dynamo in its stomach\n"
            "produces a huge amount of electricity."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellibolt, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Bellibolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Bellibolt, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Bellibolt),
        ICON(Bellibolt, 0),
        //.footprint = gMonFootprint_Bellibolt,
        LEARNSETS(Bellibolt),
=======
        .palette = gMonPalette_Bellibolt,
        .shinyPalette = gMonShinyPalette_Bellibolt,
        .iconSprite = gMonIcon_Bellibolt,
        .iconPalIndex = 0,
        FOOTPRINT(Bellibolt)
        .levelUpLearnset = sBelliboltLevelUpLearnset,
        .teachableLearnset = sBelliboltTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
    [SPECIES_WATTREL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING },
        .abilities = { ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Wattrel"),
        .cryId = CRY_WATTREL,
        .natDexNum = NATIONAL_DEX_WATTREL,
        .categoryName = _("Storm Petrel"),
        .height = 4,
        .weight = 36,
        .description = COMPOUND_STRING(
            "When its wings catch the wind, the\n"
            "bones within produce electricity.\n"
            "This Pokémon dives into the ocean,\n"
            "catching prey by electrocuting them."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wattrel, 64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Wattrel,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wattrel, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Wattrel),
        ICON(Wattrel, 3),
        //.footprint = gMonFootprint_Wattrel,
        LEARNSETS(Wattrel),
=======
        .palette = gMonPalette_Wattrel,
        .shinyPalette = gMonShinyPalette_Wattrel,
        .iconSprite = gMonIcon_Wattrel,
        .iconPalIndex = 0,
        FOOTPRINT(Wattrel)
        .levelUpLearnset = sWattrelLevelUpLearnset,
        .teachableLearnset = sWattrelTeachableLearnset,
        .eggMoveLearnset = sWattrelEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_KILOWATTREL}),
    },

    [SPECIES_KILOWATTREL] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING },
        .abilities = { ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Kilowatrel", "Kilowattrel"),
        .cryId = CRY_KILOWATTREL,
        .natDexNum = NATIONAL_DEX_KILOWATTREL,
        .categoryName = _("Frigatebird"),
        .height = 14,
        .weight = 386,
        .description = COMPOUND_STRING(
            "It uses its throat sac to store\n"
            "electricity generated by its wings.\n"
            "There's hardly any oil in its feathers,\n"
            "so it is a poor swimmer."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kilowattrel, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Kilowattrel,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kilowattrel, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Kilowattrel),
        ICON(Kilowattrel, 3),
        //.footprint = gMonFootprint_Kilowattrel,
        LEARNSETS(Kilowattrel),
=======
        .palette = gMonPalette_Kilowattrel,
        .shinyPalette = gMonShinyPalette_Kilowattrel,
        .iconSprite = gMonIcon_Kilowattrel,
        .iconPalIndex = 0,
        FOOTPRINT(Kilowattrel)
        .levelUpLearnset = sKilowattrelLevelUpLearnset,
        .teachableLearnset = sKilowattrelTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
    [SPECIES_MASCHIFF] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 60,
        .baseSpeed     = 51,
        .baseSpAttack  = 40,
        .baseSpDefense = 51,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 150,
        .expYield = 68,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Maschiff"),
        .cryId = CRY_MASCHIFF,
        .natDexNum = NATIONAL_DEX_MASCHIFF,
        .categoryName = _("Rascal"),
        .height = 5,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Its well-developed jaw and fangs\n"
            "are strong enough to crunch through\n"
            "boulders, and its thick fat makes\n"
            "for an excellent defense."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Maschiff, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Maschiff,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Maschiff, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Maschiff),
        ICON(Maschiff, 3),
        //.footprint = gMonFootprint_Maschiff,
        LEARNSETS(Maschiff),
=======
        .palette = gMonPalette_Maschiff,
        .shinyPalette = gMonShinyPalette_Maschiff,
        .iconSprite = gMonIcon_Maschiff,
        .iconPalIndex = 0,
        FOOTPRINT(Maschiff)
        .levelUpLearnset = sMaschiffLevelUpLearnset,
        .teachableLearnset = sMaschiffTeachableLearnset,
        .eggMoveLearnset = sMaschiffEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MABOSSTIFF}),
    },

    [SPECIES_MABOSSTIFF] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 75,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUARD_DOG, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mabosstiff"),
        .cryId = CRY_MABOSSTIFF,
        .natDexNum = NATIONAL_DEX_MABOSSTIFF,
        .categoryName = _("Boss"),
        .height = 11,
        .weight = 610,
        .description = COMPOUND_STRING(
            "Mabosstiff loves playing with\n"
            "children. Though usually gentle, it\n"
            "takes on an intimidating look when\n"
            "protecting its family."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mabosstiff, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Mabosstiff,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Mabosstiff, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Mabosstiff),
        ICON(Mabosstiff, 5),
        //.footprint = gMonFootprint_Mabosstiff,
        LEARNSETS(Mabosstiff),
=======
        .palette = gMonPalette_Mabosstiff,
        .shinyPalette = gMonShinyPalette_Mabosstiff,
        .iconSprite = gMonIcon_Mabosstiff,
        .iconPalIndex = 0,
        FOOTPRINT(Mabosstiff)
        .levelUpLearnset = sMabosstiffLevelUpLearnset,
        .teachableLearnset = sMabosstiffTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
    [SPECIES_SHROODLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 35,
        .types = { TYPE_POISON, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_UNBURDEN, ABILITY_PICKPOCKET, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Shroodle"),
        .cryId = CRY_SHROODLE,
        .natDexNum = NATIONAL_DEX_SHROODLE,
        .categoryName = _("Toxic Mouse"),
        .height = 2,
        .weight = 7,
        .description = COMPOUND_STRING(
            "To keep enemies away from its\n"
            "territory, it paints markings around its\n"
            "nest using a poisonous liquid that\n"
            "has an acrid odor."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shroodle, 64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Shroodle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Shroodle, 64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Shroodle),
        ICON(Shroodle, 0),
        //.footprint = gMonFootprint_Shroodle,
        LEARNSETS(Shroodle),
=======
        .palette = gMonPalette_Shroodle,
        .shinyPalette = gMonShinyPalette_Shroodle,
        .iconSprite = gMonIcon_Shroodle,
        .iconPalIndex = 0,
        FOOTPRINT(Shroodle)
        .levelUpLearnset = sShroodleLevelUpLearnset,
        .teachableLearnset = sShroodleTeachableLearnset,
        .eggMoveLearnset = sShroodleEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_GRAFAIAI}),
    },

    [SPECIES_GRAFAIAI] =
    {
        .baseHP        = 63,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 72,
        .types = { TYPE_POISON, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 170,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_UNBURDEN, ABILITY_POISON_TOUCH, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Grafaiai"),
        .cryId = CRY_GRAFAIAI,
        .natDexNum = NATIONAL_DEX_GRAFAIAI,
        .categoryName = _("Toxic Monkey"),
        .height = 7,
        .weight = 272,
        .description = COMPOUND_STRING(
            "Each Grafaiai paints its own\n"
            "individual pattern, and it will paint that\n"
            "same pattern over and over again\n"
            "throughout its life."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grafaiai, 64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Grafaiai,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Grafaiai, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Grafaiai),
        ICON(Grafaiai, 0),
        //.footprint = gMonFootprint_Grafaiai,
        LEARNSETS(Grafaiai),
=======
        .palette = gMonPalette_Grafaiai,
        .shinyPalette = gMonShinyPalette_Grafaiai,
        .iconSprite = gMonIcon_Grafaiai,
        .iconPalIndex = 0,
        FOOTPRINT(Grafaiai)
        .levelUpLearnset = sGrafaiaiLevelUpLearnset,
        .teachableLearnset = sGrafaiaiTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
    [SPECIES_BRAMBLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = { TYPE_GRASS, TYPE_GHOST },
        .catchRate = 190,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bramblin"),
        .cryId = CRY_BRAMBLIN,
        .natDexNum = NATIONAL_DEX_BRAMBLIN,
        .categoryName = _("Tumbleweed"),
        .height = 6,
        .weight = 6,
        .description = COMPOUND_STRING(
            "A soul unable to move on to the\n"
            "afterlife was blown around by the wind\n"
            "until it got tangled up with dried\n"
            "grass and became a Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bramblin, 64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Bramblin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Bramblin, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Bramblin),
        ICON(Bramblin, 3),
        //.footprint = gMonFootprint_Bramblin,
        LEARNSETS(Bramblin),
        .evolutions = EVOLUTION({EVO_NONE, 0, SPECIES_BRAMBLEGHAST}),
=======
        .palette = gMonPalette_Bramblin,
        .shinyPalette = gMonShinyPalette_Bramblin,
        .iconSprite = gMonIcon_Bramblin,
        .iconPalIndex = 1,
        FOOTPRINT(Bramblin)
        .levelUpLearnset = sBramblinLevelUpLearnset,
        .teachableLearnset = sBramblinTeachableLearnset,
        .eggMoveLearnset = sBramblinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_BRAMBLEGHAST}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_BRAMBLEGHAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Brmblghast", "Brambleghast"),
        .cryId = CRY_BRAMBLEGHAST,
        .natDexNum = NATIONAL_DEX_BRAMBLEGHAST,
        .categoryName = _("Tumbleweed"),
        .height = 12,
        .weight = 60,
        .description = COMPOUND_STRING(
            "It will open the branches of its\n"
            "head to envelop its prey. Once it\n"
            "absorbs all the life energy it needs, it\n"
            "expels the prey and discards it."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Brambleghast, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Brambleghast,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Brambleghast, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Brambleghast),
        ICON(Brambleghast, 5),
        //.footprint = gMonFootprint_Brambleghast,
        LEARNSETS(Brambleghast),
=======
        .palette = gMonPalette_Brambleghast,
        .shinyPalette = gMonShinyPalette_Brambleghast,
        .iconSprite = gMonIcon_Brambleghast,
        .iconPalIndex = 2,
        FOOTPRINT(Brambleghast)
        .levelUpLearnset = sBrambleghastLevelUpLearnset,
        .teachableLearnset = sBrambleghastTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
    [SPECIES_TOEDSCOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_GROUND, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_MYCELIUM_MIGHT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Toedscool"),
        .cryId = CRY_TOEDSCOOL,
        .natDexNum = NATIONAL_DEX_TOEDSCOOL,
        .categoryName = _("Woodear"),
        .height = 9,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Though it looks like Tentacool,\n"
            "Toedscool is a completely different\n"
            "species. Its legs may be thin, but it\n"
            "can run at a speed of 30 mph."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Toedscool, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Toedscool,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Toedscool, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Toedscool),
        ICON(Toedscool, 0),
        //.footprint = gMonFootprint_Toedscool,
        LEARNSETS(Toedscool),
=======
        .palette = gMonPalette_Toedscool,
        .shinyPalette = gMonShinyPalette_Toedscool,
        .iconSprite = gMonIcon_Toedscool,
        .iconPalIndex = 0,
        FOOTPRINT(Toedscool)
        .levelUpLearnset = sToedscoolLevelUpLearnset,
        .teachableLearnset = sToedscoolTeachableLearnset,
        .eggMoveLearnset = sToedscoolEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TOEDSCRUEL}),
    },

    [SPECIES_TOEDSCRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_GROUND, TYPE_GRASS },
        .catchRate = 90,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_MYCELIUM_MIGHT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Toedscruel"),
        .cryId = CRY_TOEDSCRUEL,
        .natDexNum = NATIONAL_DEX_TOEDSCRUEL,
        .categoryName = _("Woodear"),
        .height = 19,
        .weight = 580,
        .description = COMPOUND_STRING(
            "These Pokémon gather into groups\n"
            "and form colonies deep within\n"
            "forests. They absolutely hate it when\n"
            "strangers approach."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Toedscruel, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Toedscruel,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Toedscruel, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Toedscruel),
        ICON(Toedscruel, 0),
        //.footprint = gMonFootprint_Toedscruel,
        LEARNSETS(Toedscruel),
=======
        .palette = gMonPalette_Toedscruel,
        .shinyPalette = gMonShinyPalette_Toedscruel,
        .iconSprite = gMonIcon_Toedscruel,
        .iconPalIndex = 0,
        FOOTPRINT(Toedscruel)
        .levelUpLearnset = sToedscruelLevelUpLearnset,
        .teachableLearnset = sToedscruelTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
    [SPECIES_KLAWF] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 158,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_ANGER_SHELL, ABILITY_SHELL_ARMOR, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Klawf"),
        .cryId = CRY_KLAWF,
        .natDexNum = NATIONAL_DEX_KLAWF,
        .categoryName = _("Ambush"),
        .height = 13,
        .weight = 790,
        .description = COMPOUND_STRING(
            "Klawf hangs upside-down from\n"
            "cliffs, waiting for prey. But Klawf can't\n"
            "remain in this position for long\n"
            "because its blood rushes to its head."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Klawf, 64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Klawf,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Klawf, 64, 64),
        .backPicYOffset = 20,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Klawf),
        ICON(Klawf, 0),
        //.footprint = gMonFootprint_Klawf,
        LEARNSETS(Klawf),
=======
        .palette = gMonPalette_Klawf,
        .shinyPalette = gMonShinyPalette_Klawf,
        .iconSprite = gMonIcon_Klawf,
        .iconPalIndex = 0,
        FOOTPRINT(Klawf)
        .levelUpLearnset = sKlawfLevelUpLearnset,
        .teachableLearnset = sKlawfTeachableLearnset,
        .eggMoveLearnset = sKlawfEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
    [SPECIES_CAPSAKID] =
    {
        .baseHP        = 50,
        .baseAttack    = 62,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 62,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Capsakid"),
        .cryId = CRY_CAPSAKID,
        .natDexNum = NATIONAL_DEX_CAPSAKID,
        .categoryName = _("Spicy Pepper"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "The more sunlight this Pokémon\n"
            "bathes in, the more spicy chemicals are\n"
            "produced by its body, and thus the\n"
            "spicier its moves become."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Capsakid, 64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Capsakid,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Capsakid, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Capsakid),
        ICON(Capsakid, 1),
        //.footprint = gMonFootprint_Capsakid,
        LEARNSETS(Capsakid),
=======
        .palette = gMonPalette_Capsakid,
        .shinyPalette = gMonShinyPalette_Capsakid,
        .iconSprite = gMonIcon_Capsakid,
        .iconPalIndex = 1,
        FOOTPRINT(Capsakid)
        .levelUpLearnset = sCapsakidLevelUpLearnset,
        .teachableLearnset = sCapsakidTeachableLearnset,
        .eggMoveLearnset = sCapsakidEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SCOVILLAIN}),
    },

    [SPECIES_SCOVILLAIN] =
    {
        .baseHP        = 65,
        .baseAttack    = 108,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 108,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_FIRE },
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Scovillain"),
        .cryId = CRY_SCOVILLAIN,
        .natDexNum = NATIONAL_DEX_SCOVILLAIN,
        .categoryName = _("Spicy Pepper"),
        .height = 9,
        .weight = 150,
        .description = COMPOUND_STRING(
            "The green head has turned vicious\n"
            "due to the spicy chemicals\n"
            "stimulating its brain. Once it goes on a\n"
            "rampage, there is no stopping it."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Scovillain, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Scovillain,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Scovillain, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Scovillain),
        ICON(Scovillain, 1),
        //.footprint = gMonFootprint_Scovillain,
        LEARNSETS(Scovillain),
=======
        .palette = gMonPalette_Scovillain,
        .shinyPalette = gMonShinyPalette_Scovillain,
        .iconSprite = gMonIcon_Scovillain,
        .iconPalIndex = 1,
        FOOTPRINT(Scovillain)
        .levelUpLearnset = sScovillainLevelUpLearnset,
        .teachableLearnset = sScovillainTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
    [SPECIES_RELLOR] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 31,
        .baseSpDefense = 58,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 190,
        .expYield = 54,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_SHED_SKIN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rellor"),
        .cryId = CRY_RELLOR,
        .natDexNum = NATIONAL_DEX_RELLOR,
        .categoryName = _("Rolling"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "This Pokémon creates a mud ball by\n"
            "mixing sand and dirt with psychic\n"
            "energy. It treasures its mud ball more\n"
            "than its own life."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rellor, 64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Rellor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Rellor, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Rellor),
        ICON(Rellor, 5),
        //.footprint = gMonFootprint_Rellor,
        LEARNSETS(Rellor),
        .evolutions = EVOLUTION({EVO_NONE, 0, SPECIES_RABSCA}),
=======
        .palette = gMonPalette_Rellor,
        .shinyPalette = gMonShinyPalette_Rellor,
        .iconSprite = gMonIcon_Rellor,
        .iconPalIndex = 0,
        FOOTPRINT(Rellor)
        .levelUpLearnset = sRellorLevelUpLearnset,
        .teachableLearnset = sRellorTeachableLearnset,
        .eggMoveLearnset = sRellorEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_RABSCA}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_RABSCA] =
    {
        .baseHP        = 75,
        .baseAttack    = 50,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = { TYPE_BUG, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 165,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rabsca"),
        .cryId = CRY_RABSCA,
        .natDexNum = NATIONAL_DEX_RABSCA,
        .categoryName = _("Rolling"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "The body that supports the ball\n"
            "barely moves. Therefore, it is thought\n"
            "that the true body of this Pokémon\n"
            "is actually inside the ball."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rabsca, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rabsca,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Rabsca, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Rabsca),
        ICON(Rabsca, 0),
        //.footprint = gMonFootprint_Rabsca,
        LEARNSETS(Rabsca),
=======
        .palette = gMonPalette_Rabsca,
        .shinyPalette = gMonShinyPalette_Rabsca,
        .iconSprite = gMonIcon_Rabsca,
        .iconPalIndex = 0,
        FOOTPRINT(Rabsca)
        .levelUpLearnset = sRabscaLevelUpLearnset,
        .teachableLearnset = sRabscaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
    [SPECIES_FLITTLE] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 75,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 120,
        .expYield = 51,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_ANTICIPATION, ABILITY_FRISK, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Flittle"),
        .cryId = CRY_FLITTLE,
        .natDexNum = NATIONAL_DEX_FLITTLE,
        .categoryName = _("Frill"),
        .height = 2,
        .weight = 15,
        .description = COMPOUND_STRING(
            "Flittle's toes levitate about half\n"
            "an inch above the ground because of\n"
            "the psychic power emitted from the\n"
            "frills on the Pokémon's belly."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flittle, 64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Flittle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Flittle, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Flittle),
        ICON(Flittle, 3),
        //.footprint = gMonFootprint_Flittle,
        LEARNSETS(Flittle),
=======
        .palette = gMonPalette_Flittle,
        .shinyPalette = gMonShinyPalette_Flittle,
        .iconSprite = gMonIcon_Flittle,
        .iconPalIndex = 1,
        FOOTPRINT(Flittle)
        .levelUpLearnset = sFlittleLevelUpLearnset,
        .teachableLearnset = sFlittleTeachableLearnset,
        .eggMoveLearnset = sFlittleEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ESPATHRA}),
    },

    [SPECIES_ESPATHRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 101,
        .baseSpDefense = 60,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 168,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_OPPORTUNIST, ABILITY_FRISK, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Espathra"),
        .cryId = CRY_ESPATHRA,
        .natDexNum = NATIONAL_DEX_ESPATHRA,
        .categoryName = _("Ostrich"),
        .height = 19,
        .weight = 900,
        .description = COMPOUND_STRING(
            "It immobilizes opponents by\n"
            "bathing them in psychic power from its\n"
            "large eyes. Despite its appearance, it\n"
            "has a vicious temperament."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Espathra, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Espathra,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Espathra, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Espathra),
        ICON(Espathra, 5),
        //.footprint = gMonFootprint_Espathra,
        LEARNSETS(Espathra),
=======
        .palette = gMonPalette_Espathra,
        .shinyPalette = gMonShinyPalette_Espathra,
        .iconSprite = gMonIcon_Espathra,
        .iconPalIndex = 0,
        FOOTPRINT(Espathra)
        .levelUpLearnset = sEspathraLevelUpLearnset,
        .teachableLearnset = sEspathraTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
    [SPECIES_TINKATINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 190,
        .expYield = 59,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_DECOMMISSIONER},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("TINKATINK"),
        .cryId = CRY_TINKATINK,
        .natDexNum = NATIONAL_DEX_TINKATINK,
        .categoryName = _("METALSMITH"),
        .height = 4,
        .weight = 89,
        .description = COMPOUND_STRING(
            "TINKATINK pounds iron scraps together\n"
            "to make a hammer. It throws pebbles at\n"
            "nearby FLYING and STEEL POKéMON\n"
            "that try to snatch its loot."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tinkatink, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Tinkatink,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tinkatink, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tinkatink),
        ICON(Tinkatink, 1),
        //.footprint = gMonFootprint_Tinkatink,
        LEARNSETS(Tinkatink),
=======
        .palette = gMonPalette_Tinkatink,
        .shinyPalette = gMonShinyPalette_Tinkatink,
        .iconSprite = gMonIcon_Tinkatink,
        .iconPalIndex = 1,
        FOOTPRINT(Tinkatink)
        .levelUpLearnset = sTinkatinkLevelUpLearnset,
        .teachableLearnset = sTinkatinkTeachableLearnset,
        .eggMoveLearnset = sTinkatinkEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_TINKATUFF}),
    },

    [SPECIES_TINKATUFF] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 90,
        .expYield = 133,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_DECOMMISSIONER},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("TINKATUFF"),
        .cryId = CRY_TINKATUFF,
        .natDexNum = NATIONAL_DEX_TINKATUFF,
        .categoryName = _("HAMMER"),
        .height = 7,
        .weight = 591,
        .description = COMPOUND_STRING(
            "These POKéMON make their homes in\n"
            "piles of scrap metal. They test the\n"
            "strength of each other's hammers by\n"
            "smashing on sleeping STEEL POKéMON."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tinkatuff, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Tinkatuff,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tinkatuff, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tinkatuff),
        ICON(Tinkatuff, 4),
        //.footprint = gMonFootprint_Tinkatuff,
        LEARNSETS(Tinkatuff),
=======
        .palette = gMonPalette_Tinkatuff,
        .shinyPalette = gMonShinyPalette_Tinkatuff,
        .iconSprite = gMonIcon_Tinkatuff,
        .iconPalIndex = 1,
        FOOTPRINT(Tinkatuff)
        .levelUpLearnset = sTinkatuffLevelUpLearnset,
        .teachableLearnset = sTinkatuffTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_TINKATON}),
    },

    [SPECIES_TINKATON] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 253,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
           .abilities = {ABILITY_MOLD_BREAKER, ABILITY_DECOMMISSIONER},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("TINKATON"),
        .cryId = CRY_TINKATON,
        .natDexNum = NATIONAL_DEX_TINKATON,
        .categoryName = _("HAMMER"),
        .height = 7,
        .weight = 1128,
        .description = COMPOUND_STRING(
            "This intelligent Pokémon has a very\n"
            "daring disposition. With its 220-pounds\n"
            "hammer, it takes revenge on those that\n"
            "bullied it in its youth."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tinkaton, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Tinkaton,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tinkaton, 64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Tinkaton),
        ICON(Tinkaton, 4),
        //.footprint = gMonFootprint_Tinkaton,
        LEARNSETS(Tinkaton),
=======
        .palette = gMonPalette_Tinkaton,
        .shinyPalette = gMonShinyPalette_Tinkaton,
        .iconSprite = gMonIcon_Tinkaton,
        .iconPalIndex = 1,
        FOOTPRINT(Tinkaton)
        .levelUpLearnset = sTinkatonLevelUpLearnset,
        .teachableLearnset = sTinkatonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
    [SPECIES_WIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_GOOEY, ABILITY_RATTLED, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wiglett"),
        .cryId = CRY_WIGLETT,
        .natDexNum = NATIONAL_DEX_WIGLETT,
        .categoryName = _("Garden Eel"),
        .height = 12,
        .weight = 18,
        .description = COMPOUND_STRING(
            "This Pokémon can pick up the scent\n"
            "of a Veluza just over 65 feet away\n"
            "and will hide itself in the sand."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wiglett, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wiglett,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wiglett, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Wiglett),
        ICON(Wiglett, 0),
        //.footprint = gMonFootprint_Wiglett,
        LEARNSETS(Wiglett),
=======
        .palette = gMonPalette_Wiglett,
        .shinyPalette = gMonShinyPalette_Wiglett,
        .iconSprite = gMonIcon_Wiglett,
        .iconPalIndex = 0,
        FOOTPRINT(Wiglett)
        .levelUpLearnset = sWiglettLevelUpLearnset,
        .teachableLearnset = sWiglettTeachableLearnset,
        .eggMoveLearnset = sWiglettEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_WUGTRIO}),
    },

    [SPECIES_WUGTRIO] =
    {
        .baseHP        = 35,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_GOOEY, ABILITY_RATTLED, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wugtrio"),
        .cryId = CRY_WUGTRIO,
        .natDexNum = NATIONAL_DEX_WUGTRIO,
        .categoryName = _("Garden Eel"),
        .height = 12,
        .weight = 54,
        .description = COMPOUND_STRING(
            "A variety of fish Pokémon, Wugtrio\n"
            "was once considered to be a\n"
            "regional form of Dugtrio."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wugtrio, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Wugtrio,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wugtrio, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Wugtrio),
        ICON(Wugtrio, 0),
        //.footprint = gMonFootprint_Wugtrio,
        LEARNSETS(Wugtrio),
=======
        .palette = gMonPalette_Wugtrio,
        .shinyPalette = gMonShinyPalette_Wugtrio,
        .iconSprite = gMonIcon_Wugtrio,
        .iconPalIndex = 0,
        FOOTPRINT(Wugtrio)
        .levelUpLearnset = sWugtrioLevelUpLearnset,
        .teachableLearnset = sWugtrioTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
    [SPECIES_BOMBIRDIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 103,
        .baseDefense   = 85,
        .baseSpeed     = 82,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = { TYPE_FLYING, TYPE_DARK },
        .catchRate = 25,
        .expYield = 243,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_BIG_PECKS, ABILITY_KEEN_EYE, ABILITY_ROCKY_PAYLOAD },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bombirdier"),
        .cryId = CRY_BOMBIRDIER,
        .natDexNum = NATIONAL_DEX_BOMBIRDIER,
        .categoryName = _("Item Drop"),
        .height = 15,
        .weight = 429,
        .description = COMPOUND_STRING(
            "Bombirdier uses the apron on its\n"
            "chest to bundle up food, which it\n"
            "carries back to its nest. It enjoys\n"
            "dropping things that make loud noises."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bombirdier, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Bombirdier,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(Bombirdier, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Bombirdier),
        ICON(Bombirdier, 0),
        //.footprint = gMonFootprint_Bombirdier,
        LEARNSETS(Bombirdier),
=======
        .palette = gMonPalette_Bombirdier,
        .shinyPalette = gMonShinyPalette_Bombirdier,
        .iconSprite = gMonIcon_Bombirdier,
        .iconPalIndex = 0,
        FOOTPRINT(Bombirdier)
        .levelUpLearnset = sBombirdierLevelUpLearnset,
        .teachableLearnset = sBombirdierTeachableLearnset,
        .eggMoveLearnset = sBombirdierEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
    [SPECIES_FINIZEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 200,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_WATER_VEIL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Finizen"),
        .cryId = CRY_FINIZEN,
        .natDexNum = NATIONAL_DEX_FINIZEN,
        .categoryName = _("Dolphin"),
        .height = 13,
        .weight = 602,
        .description = COMPOUND_STRING(
            "Its water ring is made from\n"
            "seawater mixed with a sticky fluid that\n"
            "Finizen secretes from its blowhole."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Finizen, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Finizen,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Finizen, 64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Finizen),
        ICON(Finizen, 0),
        //.footprint = gMonFootprint_Finizen,
        LEARNSETS(Finizen),
=======
        .palette = gMonPalette_Finizen,
        .shinyPalette = gMonShinyPalette_Finizen,
        .iconSprite = gMonIcon_Finizen,
        .iconPalIndex = 0,
        FOOTPRINT(Finizen)
        .levelUpLearnset = sFinizenLevelUpLearnset,
        .teachableLearnset = sFinizenTeachableLearnset,
        .eggMoveLearnset = sFinizenEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_PALAFIN_ZERO}),
    },

#define PALAFIN_MISC_INFO                                       \
        .types = { TYPE_WATER, TYPE_WATER },                    \
        .catchRate = 45,                                        \
        .evYield_HP = 2,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 40,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2 },    \
        .abilities = { ABILITY_ZERO_TO_HERO, ABILITY_NONE },    \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("Palafin"),                            \
        .natDexNum = NATIONAL_DEX_PALAFIN,                      \
        .pokemonScale = 356,                                    \
        .pokemonOffset = 17,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .frontAnimFrames = sAnims_Palafin,                      \
        LEARNSETS(Palafin),                                     \
        .formSpeciesIdTable = sPalafinFormSpeciesIdTable,       \
        .formChangeTable = sPalafinZeroFormChangeTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.footprint = gMonFootprint_Palafin,

    [SPECIES_PALAFIN_ZERO] =
    {
        PALAFIN_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 72,
        .baseSpeed     = 100,
        .baseSpAttack  = 53,
        .baseSpDefense = 62,
        .expYield = 160,
        .cryId = CRY_PALAFIN_ZERO,
        .categoryName = _("Dolphin"),
        .height = 13,
        .weight = 602,
        .description = COMPOUND_STRING(
            "This Pokémon changes its\n"
            "appearance if it hears its allies calling for\n"
            "help. Palafin will never show\n"
            "anybody its moment of transformation."),
        FRONT_PIC(PalafinZero, 64, 64),
        .frontPicYOffset = 7,
        BACK_PIC(PalafinZero, 64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(PalafinZero),
        ICON(PalafinZero, 0),
=======
        .palette = gMonPalette_PalafinZero,
        .shinyPalette = gMonShinyPalette_PalafinZero,
        .iconSprite = gMonIcon_PalafinZero,
        .iconPalIndex = 0,
        FOOTPRINT(Palafin)
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
        .formSpeciesIdTable = sPalafinFormSpeciesIdTable,
        .formChangeTable = sPalafinZeroFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_PALAFIN_HERO] =
    {
        PALAFIN_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 160,
        .baseDefense   = 97,
        .baseSpeed     = 100,
        .baseSpAttack  = 106,
        .baseSpDefense = 87,
        .expYield = 228,
        .cryId = CRY_PALAFIN_HERO,
        .categoryName = _("Hero"),
        .height = 18,
        .weight = 974,
        .description = COMPOUND_STRING(
            "This Pokémon's ancient genes have\n"
            "awakened. It is now so\n"
            "extraordinarily strong that it can easily lift a\n"
            "cruise ship with one fin."),
        FRONT_PIC(PalafinHero, 64, 64),
        .frontPicYOffset = 0,
        BACK_PIC(PalafinHero, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(PalafinHero),
        ICON(PalafinHero, 0),
=======
        .palette = gMonPalette_PalafinHero,
        .shinyPalette = gMonShinyPalette_PalafinHero,
        .iconSprite = gMonIcon_PalafinHero,
        .iconPalIndex = 0,
        FOOTPRINT(Palafin)
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
        .formSpeciesIdTable = sPalafinFormSpeciesIdTable,
        .formChangeTable = sPalafinZeroFormChangeTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
    [SPECIES_VAROOM] =
    {
        .baseHP        = 45,
        .baseAttack    = 70,
        .baseDefense   = 63,
        .baseSpeed     = 47,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = { TYPE_STEEL, TYPE_POISON },
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_SLOW_START },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Varoom"),
        .cryId = CRY_VAROOM,
        .natDexNum = NATIONAL_DEX_VAROOM,
        .categoryName = _("Single-Cyl"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "The steel section is Varoom's\n"
            "actual body. This Pokémon clings to\n"
            "rocks and converts the minerals within\n"
            "into energy to fuel its activities."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Varoom, 64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Varoom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Varoom, 64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Varoom),
        ICON(Varoom, 5),
        //.footprint = gMonFootprint_Varoom,
        LEARNSETS(Varoom),
=======
        .palette = gMonPalette_Varoom,
        .shinyPalette = gMonShinyPalette_Varoom,
        .iconSprite = gMonIcon_Varoom,
        .iconPalIndex = 2,
        FOOTPRINT(Varoom)
        .levelUpLearnset = sVaroomLevelUpLearnset,
        .teachableLearnset = sVaroomTeachableLearnset,
        .eggMoveLearnset = sVaroomEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_REVAVROOM}),
    },

    [SPECIES_REVAVROOM] =
    {
        .baseHP        = 80,
        .baseAttack    = 119,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 54,
        .baseSpDefense = 67,
        .types = { TYPE_STEEL, TYPE_POISON },
        .catchRate = 75,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_FILTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Revavroom"),
        .cryId = CRY_REVAVROOM,
        .natDexNum = NATIONAL_DEX_REVAVROOM,
        .categoryName = _("Multi-Cyl"),
        .height = 18,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "It creates a gas out of poison and\n"
            "minerals from rocks. It then\n"
            "detonates the gas in its cylinders- now\n"
            "numbering eight-to generate energy."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Revavroom, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Revavroom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Revavroom, 64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Revavroom),
        ICON(Revavroom, 5),
        //.footprint = gMonFootprint_Revavroom,
        LEARNSETS(Revavroom),
=======
        .palette = gMonPalette_Revavroom,
        .shinyPalette = gMonShinyPalette_Revavroom,
        .iconSprite = gMonIcon_Revavroom,
        .iconPalIndex = 0,
        FOOTPRINT(Revavroom)
        .levelUpLearnset = sRevavroomLevelUpLearnset,
        .teachableLearnset = sRevavroomTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
    [SPECIES_CYCLIZAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 121,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_DRAGON, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 175,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cyclizar"),
        .cryId = CRY_CYCLIZAR,
        .natDexNum = NATIONAL_DEX_CYCLIZAR,
        .categoryName = _("Mount"),
        .height = 16,
        .weight = 630,
        .description = COMPOUND_STRING(
            "It can sprint at over 70 mph while\n"
            "carrying a human. The rider's body\n"
            "heat warms Cyclizar's back and lifts\n"
            "the Pokémon's spirit."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cyclizar, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cyclizar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cyclizar, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Cyclizar),
        ICON(Cyclizar, 1),
        //.footprint = gMonFootprint_Cyclizar,
        LEARNSETS(Cyclizar),
=======
        .palette = gMonPalette_Cyclizar,
        .shinyPalette = gMonShinyPalette_Cyclizar,
        .iconSprite = gMonIcon_Cyclizar,
        .iconPalIndex = 1,
        FOOTPRINT(Cyclizar)
        .levelUpLearnset = sCyclizarLevelUpLearnset,
        .teachableLearnset = sCyclizarTeachableLearnset,
        .eggMoveLearnset = sCyclizarEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
    [SPECIES_ORTHWORM] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 145,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 55,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 25,
        .expYield = 240,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_EARTH_EATER, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Orthworm"),
        .cryId = CRY_ORTHWORM,
        .natDexNum = NATIONAL_DEX_ORTHWORM,
        .categoryName = _("Earthworm"),
        .height = 25,
        .weight = 3100,
        .description = COMPOUND_STRING(
            "When attacked, this Pokémon will\n"
            "wield the tendrils on its body like\n"
            "fists and pelt the opponent with a\n"
            "storm of punches."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Orthworm, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Orthworm,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Orthworm, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Orthworm),
        ICON(Orthworm, 4),
        //.footprint = gMonFootprint_Orthworm,
        LEARNSETS(Orthworm),
=======
        .palette = gMonPalette_Orthworm,
        .shinyPalette = gMonShinyPalette_Orthworm,
        .iconSprite = gMonIcon_Orthworm,
        .iconPalIndex = 0,
        FOOTPRINT(Orthworm)
        .levelUpLearnset = sOrthwormLevelUpLearnset,
        .teachableLearnset = sOrthwormTeachableLearnset,
        .eggMoveLearnset = sOrthwormEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
    [SPECIES_GLIMMET] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_ROCK, TYPE_POISON },
        .catchRate = 70,
        .expYield = 70,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TOXIC_DEBRIS, ABILITY_CORROSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("GLIMMET"),
        .cryId = CRY_GLIMMET,
        .natDexNum = NATIONAL_DEX_GLIMMET,
        .categoryName = _("ORE"),
        .height = 7,
        .weight = 80,
        .description = COMPOUND_STRING(
            "GLIMMET's toxic mineral crystals\n"
            "look just like flower petals. This\n"
            "Pokémon scatters poisonous powder like\n"
            "pollen to protect itself."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Glimmet, 64, 64),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Glimmet,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 11,
        BACK_PIC(Glimmet, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Glimmet),
        ICON(Glimmet, 0),
        //.footprint = gMonFootprint_Glimmet,
        LEARNSETS(Glimmet),
=======
        .palette = gMonPalette_Glimmet,
        .shinyPalette = gMonShinyPalette_Glimmet,
        .iconSprite = gMonIcon_Glimmet,
        .iconPalIndex = 0,
        FOOTPRINT(Glimmet)
        .levelUpLearnset = sGlimmetLevelUpLearnset,
        .teachableLearnset = sGlimmetTeachableLearnset,
        .eggMoveLearnset = sGlimmetEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_GLIMMORA}),
    },

    [SPECIES_GLIMMORA] =
    {
        .baseHP        = 85,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = { TYPE_ROCK, TYPE_POISON },
        .catchRate = 25,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TOXIC_DEBRIS, ABILITY_CORROSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("GLIMMORA"),
        .cryId = CRY_GLIMMORA,
        .natDexNum = NATIONAL_DEX_GLIMMORA,
        .categoryName = _("ORE"),
        .height = 15,
        .weight = 450,
        .description = COMPOUND_STRING(
            "GLIMMORA's petals are made of\n"
            "crystallized poison energy. When\n"
            "hit, they break and release toxic\n"
            "waste everywhere."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Glimmora, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Glimmora,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(Glimmora, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Glimmora),
        ICON(Glimmora, 0),
        //.footprint = gMonFootprint_Glimmora,
        LEARNSETS(Glimmora),
=======
        .palette = gMonPalette_Glimmora,
        .shinyPalette = gMonShinyPalette_Glimmora,
        .iconSprite = gMonIcon_Glimmora,
        .iconPalIndex = 0,
        FOOTPRINT(Glimmora)
        .levelUpLearnset = sGlimmoraLevelUpLearnset,
        .teachableLearnset = sGlimmoraTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
    [SPECIES_GREAVARD] =
    {
        .baseHP        = 50,
        .baseAttack    = 61,
        .baseDefense   = 60,
        .baseSpeed     = 34,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 120,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_FLUFFY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Greavard"),
        .cryId = CRY_GREAVARD,
        .natDexNum = NATIONAL_DEX_GREAVARD,
        .categoryName = _("Ghost Dog"),
        .height = 6,
        .weight = 350,
        .description = COMPOUND_STRING(
            "This friendly Pokémon doesn't like\n"
            "being alone. Pay it even the\n"
            "slightest bit of attention, and it will\n"
            "follow you forever."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(Greavard, 64, 64),
        .frontPicYOffset = 6,
=======
        .frontPic = gMonFrontPic_Greavard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .frontAnimFrames = sAnims_Greavard,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Greavard, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Greavard),
        ICON(Greavard, 2),
        //.footprint = gMonFootprint_Greavard,
        LEARNSETS(Greavard),
=======
        .palette = gMonPalette_Greavard,
        .shinyPalette = gMonShinyPalette_Greavard,
        .iconSprite = gMonIcon_Greavard,
        .iconPalIndex = 0,
        FOOTPRINT(Greavard)
        .levelUpLearnset = sGreavardLevelUpLearnset,
        .teachableLearnset = sGreavardTeachableLearnset,
        .eggMoveLearnset = sGreavardEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 30, SPECIES_HOUNDSTONE}),
    },

    [SPECIES_HOUNDSTONE] =
    {
        .baseHP        = 72,
        .baseAttack    = 101,
        .baseDefense   = 100,
        .baseSpeed     = 68,
        .baseSpAttack  = 50,
        .baseSpDefense = 97,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 60,
        .expYield = 171,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SAND_RUSH, ABILITY_NONE, ABILITY_FLUFFY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Houndstone"),
        .cryId = CRY_HOUNDSTONE,
        .natDexNum = NATIONAL_DEX_HOUNDSTONE,
        .categoryName = _("Ghost Dog"),
        .height = 20,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Houndstone spends most of its\n"
            "time sleeping in graveyards. Among all\n"
            "the dog Pokémon, this one is most\n"
            "loyal to its master."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(Houndstone, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Houndstone,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Houndstone, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Houndstone),
        ICON(Houndstone, 5),
        //.footprint = gMonFootprint_Houndstone,
        LEARNSETS(Houndstone),
=======
        .frontPic = gMonFrontPic_Houndstone,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Houndstone,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Houndstone,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Houndstone,
        .shinyPalette = gMonShinyPalette_Houndstone,
        .iconSprite = gMonIcon_Houndstone,
        .iconPalIndex = 2,
        FOOTPRINT(Houndstone)
        .levelUpLearnset = sHoundstoneLevelUpLearnset,
        .teachableLearnset = sHoundstoneTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
    [SPECIES_FLAMIGO] =
    {
        .baseHP        = 82,
        .baseAttack    = 115,
        .baseDefense   = 74,
        .baseSpeed     = 90,
        .baseSpAttack  = 75,
        .baseSpDefense = 64,
        .types = { TYPE_FLYING, TYPE_FIGHTING },
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_SCRAPPY, ABILITY_TANGLED_FEET, ABILITY_COSTAR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Flamigo"),
        .cryId = CRY_FLAMIGO,
        .natDexNum = NATIONAL_DEX_FLAMIGO,
        .categoryName = _("Synchronize"),
        .height = 16,
        .weight = 370,
        .description = COMPOUND_STRING(
            "Thanks to a behavior of theirs\n"
            "known as “synchronizing,” an entire\n"
            "flock of these Pokémon can attack\n"
            "simultaneously in perfect harmony."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flamigo, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Flamigo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Flamigo, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Flamigo),
        ICON(Flamigo, 4),
        //.footprint = gMonFootprint_Flamigo,
        LEARNSETS(Flamigo),
=======
        .palette = gMonPalette_Flamigo,
        .shinyPalette = gMonShinyPalette_Flamigo,
        .iconSprite = gMonIcon_Flamigo,
        .iconPalIndex = 1,
        FOOTPRINT(Flamigo)
        .levelUpLearnset = sFlamigoLevelUpLearnset,
        .teachableLearnset = sFlamigoTeachableLearnset,
        .eggMoveLearnset = sFlamigoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
    [SPECIES_CETODDLE] =
    {
        .baseHP        = 108,
        .baseAttack    = 68,
        .baseDefense   = 45,
        .baseSpeed     = 43,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 150,
        .expYield = 67,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cetoddle"),
        .cryId = CRY_CETODDLE,
        .natDexNum = NATIONAL_DEX_CETODDLE,
        .categoryName = _("Terra Whale"),
        .height = 12,
        .weight = 450,
        .description = COMPOUND_STRING(
            "This species left the ocean and\n"
            "began living on land a very long time\n"
            "ago. It seems to be closely related\n"
            "to Wailmer."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cetoddle, 64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Cetoddle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cetoddle, 64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Cetoddle),
        ICON(Cetoddle, 0),
        //.footprint = gMonFootprint_Cetoddle,
        LEARNSETS(Cetoddle),
=======
        .palette = gMonPalette_Cetoddle,
        .shinyPalette = gMonShinyPalette_Cetoddle,
        .iconSprite = gMonIcon_Cetoddle,
        .iconPalIndex = 0,
        FOOTPRINT(Cetoddle)
        .levelUpLearnset = sCetoddleLevelUpLearnset,
        .teachableLearnset = sCetoddleTeachableLearnset,
        .eggMoveLearnset = sCetoddleEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_CETITAN}),
    },

    [SPECIES_CETITAN] =
    {
        .baseHP        = 170,
        .baseAttack    = 113,
        .baseDefense   = 65,
        .baseSpeed     = 73,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 50,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_SLUSH_RUSH, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cetitan"),
        .cryId = CRY_CETITAN,
        .natDexNum = NATIONAL_DEX_CETITAN,
        .categoryName = _("Terra Whale"),
        .height = 45,
        .weight = 7000,
        .description = COMPOUND_STRING(
            "Ice energy builds up in the horn on\n"
            "its upper jaw, causing the horn to\n"
            "reach cryogenic temperatures that\n"
            "freeze its surroundings."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cetitan, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cetitan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cetitan, 64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Cetitan),
        ICON(Cetitan, 0),
        //.footprint = gMonFootprint_Cetitan,
        LEARNSETS(Cetitan),
=======
        .palette = gMonPalette_Cetitan,
        .shinyPalette = gMonShinyPalette_Cetitan,
        .iconSprite = gMonIcon_Cetitan,
        .iconPalIndex = 0,
        FOOTPRINT(Cetitan)
        .levelUpLearnset = sCetitanLevelUpLearnset,
        .teachableLearnset = sCetitanTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
    [SPECIES_VELUZA] =
    {
        .baseHP        = 90,
        .baseAttack    = 102,
        .baseDefense   = 73,
        .baseSpeed     = 70,
        .baseSpAttack  = 78,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 100,
        .expYield = 167,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Veluza"),
        .cryId = CRY_VELUZA,
        .natDexNum = NATIONAL_DEX_VELUZA,
        .categoryName = _("Jettison"),
        .height = 25,
        .weight = 900,
        .description = COMPOUND_STRING(
            "Veluza has excellent regenerative\n"
            "capabilities. It sheds spare flesh\n"
            "from its body to boost its agility,\n"
            "then charges at its prey."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Veluza, 64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Veluza,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(Veluza, 64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Veluza),
        ICON(Veluza, 4),
        //.footprint = gMonFootprint_Veluza,
        LEARNSETS(Veluza),
=======
        .palette = gMonPalette_Veluza,
        .shinyPalette = gMonShinyPalette_Veluza,
        .iconSprite = gMonIcon_Veluza,
        .iconPalIndex = 1,
        FOOTPRINT(Veluza)
        .levelUpLearnset = sVeluzaLevelUpLearnset,
        .teachableLearnset = sVeluzaTeachableLearnset,
        .eggMoveLearnset = sVeluzaEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
    [SPECIES_DONDOZO] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 25,
        .expYield = 265,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_UNAWARE, ABILITY_OBLIVIOUS, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dondozo"),
        .cryId = CRY_DONDOZO,
        .natDexNum = NATIONAL_DEX_DONDOZO,
        .categoryName = _("Big Catfish"),
        .height = 120,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "It treats Tatsugiri like its boss\n"
            "and follows it loyally. Though\n"
            "powerful, Dondozo is apparently not very\n"
            "smart."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dondozo, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Dondozo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        BACK_PIC(Dondozo, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Dondozo),
        ICON(Dondozo, 0),
        //.footprint = gMonFootprint_Dondozo,
        LEARNSETS(Dondozo),
=======
        .palette = gMonPalette_Dondozo,
        .shinyPalette = gMonShinyPalette_Dondozo,
        .iconSprite = gMonIcon_Dondozo,
        .iconPalIndex = 0,
        FOOTPRINT(Dondozo)
        .levelUpLearnset = sDondozoLevelUpLearnset,
        .teachableLearnset = sDondozoTeachableLearnset,
        .eggMoveLearnset = sDondozoEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
#define TATSUGIRI_MISC_INFO                                                     \
        .baseHP        = 68,                                                    \
        .baseAttack    = 50,                                                    \
        .baseDefense   = 60,                                                    \
        .baseSpeed     = 82,                                                    \
        .baseSpAttack  = 120,                                                   \
        .baseSpDefense = 95,                                                    \
        .types = { TYPE_DRAGON, TYPE_WATER },                                   \
        .catchRate = 100,                                                       \
        .expYield = 166,                                                        \
        .evYield_SpAttack = 2,                                                  \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 35,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                                       \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },                  \
        .abilities = { ABILITY_COMMANDER, ABILITY_NONE, ABILITY_STORM_DRAIN },  \
        .speciesName = _("Tatsugiri"),                                          \
        .natDexNum = NATIONAL_DEX_TATSUGIRI,                                    \
        .categoryName = _("Mimicry"),                                           \
        .height = 3,                                                            \
        .weight = 80,                                                           \
        .pokemonScale = 356,                                                    \
        .pokemonOffset = 17,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPicYOffset = 14,                                                  \
        .frontAnimFrames = sAnims_Tatsugiri,                                    \
        .backPicYOffset = 17,                                                   \
        LEARNSETS(Tatsugiri),                                                   \
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Tatsugiri,

    [SPECIES_TATSUGIRI_CURLY] =
    {
        TATSUGIRI_MISC_INFO,
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_TATSUGIRI_CURLY,
        .description = COMPOUND_STRING(
            "This is a small dragon Pokémon. It\n"
            "lives inside the mouth of Dondozo to\n"
            "protect itself from enemies on the\n"
            "outside."),
<<<<<<< HEAD
        FRONT_PIC(TatsugiriCurly, 64, 64),
        BACK_PIC(TatsugiriCurly, 64, 64),
        PALETTES(TatsugiriCurly),
        ICON(TatsugiriCurly, 0),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriCurly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Tatsugiri,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriCurly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriCurly,
        .shinyPalette = gMonShinyPalette_TatsugiriCurly,
        .iconSprite = gMonIcon_TatsugiriCurly,
        .iconPalIndex = 0,
        FOOTPRINT(Tatsugiri)
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_TATSUGIRI_DROOPY] =
    {
        TATSUGIRI_MISC_INFO,
        .bodyColor = BODY_COLOR_PINK,
        .cryId = CRY_TATSUGIRI_DROOPY,
        .description = COMPOUND_STRING(
            "This Pokémon tricks its opponents\n"
            "by playing dead. It is small and\n"
            "weak, but it uses its smarts to survive."),
<<<<<<< HEAD
        FRONT_PIC(TatsugiriDroopy, 64, 64),
        BACK_PIC(TatsugiriDroopy, 64, 64),
        PALETTES(TatsugiriDroopy),
        ICON(TatsugiriDroopy, 0),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriDroopy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Tatsugiri,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriDroopy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriDroopy,
        .shinyPalette = gMonShinyPalette_TatsugiriDroopy,
        .iconSprite = gMonIcon_TatsugiriDroopy,
        .iconPalIndex = 0,
        FOOTPRINT(Tatsugiri)
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_TATSUGIRI_STRETCHY] =
    {
        TATSUGIRI_MISC_INFO,
        .bodyColor = BODY_COLOR_YELLOW,
        .cryId = CRY_TATSUGIRI_STRETCHY,
        .description = COMPOUND_STRING(
            "It's one of the most intelligent\n"
            "dragon Pokémon. It camouflages itself\n"
            "by inflating its throat sac."),
<<<<<<< HEAD
        FRONT_PIC(TatsugiriStretchy, 64, 64),
        BACK_PIC(TatsugiriStretchy, 64, 64),
        PALETTES(TatsugiriStretchy),
        ICON(TatsugiriStretchy, 0),
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriStretchy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Tatsugiri,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriStretchy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriStretchy,
        .shinyPalette = gMonShinyPalette_TatsugiriStretchy,
        .iconSprite = gMonIcon_TatsugiriStretchy,
        .iconPalIndex = 0,
        FOOTPRINT(Tatsugiri)
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_GREAT_TUSK
    [SPECIES_GREAT_TUSK] =
    {
        .baseHP        = 115,
        .baseAttack    = 131,
        .baseDefense   = 131,
        .baseSpeed     = 87,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = { TYPE_GROUND, TYPE_FIGHTING },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .isParadoxForm = TRUE,
        .speciesName = _("Great Tusk"),
        .cryId = CRY_GREAT_TUSK,
        .natDexNum = NATIONAL_DEX_GREAT_TUSK,
        .categoryName = _("Paradox"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Sightings of this Pokémon have\n"
            "occurred in recent years. The name\n"
            "Great Tusk was taken from a creature\n"
            "listed in a certain book."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GreatTusk, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_GreatTusk,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GreatTusk, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(GreatTusk),
        ICON(GreatTusk, 0),
        //.footprint = gMonFootprint_GreatTusk,
        LEARNSETS(GreatTusk),
=======
        .palette = gMonPalette_GreatTusk,
        .shinyPalette = gMonShinyPalette_GreatTusk,
        .iconSprite = gMonIcon_GreatTusk,
        .iconPalIndex = 0,
        FOOTPRINT(GreatTusk)
        .isParadox = TRUE,
        .levelUpLearnset = sGreatTuskLevelUpLearnset,
        .teachableLearnset = sGreatTuskTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
    [SPECIES_SCREAM_TAIL] =
    {
        .baseHP        = 115,
        .baseAttack    = 65,
        .baseDefense   = 99,
        .baseSpeed     = 111,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_PSYCHIC },
        .catchRate = 50,
        .expYield = 285,
        .evYield_HP = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("ScreamTail"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("ScreamTail", "Scream Tail"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_SCREAM_TAIL,
        .natDexNum = NATIONAL_DEX_SCREAM_TAIL,
        .categoryName = _("Paradox"),
        .height = 12,
        .weight = 80,
        .description = COMPOUND_STRING(
            "There has been only one reported\n"
            "sighting of this Pokémon. It\n"
            "resembles a mysterious creature depicted\n"
            "in an old expedition journal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ScreamTail, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ScreamTail,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ScreamTail, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(ScreamTail),
        ICON(ScreamTail, 0),
        //.footprint = gMonFootprint_ScreamTail,
        LEARNSETS(ScreamTail),
=======
        .palette = gMonPalette_ScreamTail,
        .shinyPalette = gMonShinyPalette_ScreamTail,
        .iconSprite = gMonIcon_ScreamTail,
        .iconPalIndex = 0,
        FOOTPRINT(ScreamTail)
        .isParadox = TRUE,
        .levelUpLearnset = sScreamTailLevelUpLearnset,
        .teachableLearnset = sScreamTailTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_BRUTE_BONNET
    [SPECIES_BRUTE_BONNET] =
    {
        .baseHP        = 111,
        .baseAttack    = 127,
        .baseDefense   = 99,
        .baseSpeed     = 55,
        .baseSpAttack  = 79,
        .baseSpDefense = 99,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("BruteBonet"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("BruteBonet", "Brute Bonnet"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_BRUTE_BONNET,
        .natDexNum = NATIONAL_DEX_BRUTE_BONNET,
        .categoryName = _("Paradox"),
        .height = 12,
        .weight = 210,
        .description = COMPOUND_STRING(
            "It bears a slight resemblance to a\n"
            "Pokémon described in a dubious\n"
            "magazine as a cross between a dinosaur\n"
            "and a mushroom."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BruteBonnet, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BruteBonnet,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BruteBonnet, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(BruteBonnet),
        ICON(BruteBonnet, 1),
        //.footprint = gMonFootprint_BruteBonnet,
        LEARNSETS(BruteBonnet),
=======
        .palette = gMonPalette_BruteBonnet,
        .shinyPalette = gMonShinyPalette_BruteBonnet,
        .iconSprite = gMonIcon_BruteBonnet,
        .iconPalIndex = 1,
        FOOTPRINT(BruteBonnet)
        .isParadox = TRUE,
        .levelUpLearnset = sBruteBonnetLevelUpLearnset,
        .teachableLearnset = sBruteBonnetTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_BRUTE_BONNET

#if P_FAMILY_FLUTTER_MANE
    [SPECIES_FLUTTER_MANE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 135,
        .types = { TYPE_GHOST, TYPE_FAIRY },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("FluttrMane"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("FluttrMane", "Flutter Mane"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_FLUTTER_MANE,
        .natDexNum = NATIONAL_DEX_FLUTTER_MANE,
        .categoryName = _("Paradox"),
        .height = 14,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It has similar features to a\n"
            "ghostly pterosaur that was covered in a\n"
            "paranormal magazine, but the two\n"
            "have little else in common."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(FlutterMane, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_FlutterMane,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(FlutterMane, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(FlutterMane),
        ICON(FlutterMane, 4),
        //.footprint = gMonFootprint_FlutterMane,
        LEARNSETS(FlutterMane),
=======
        .palette = gMonPalette_FlutterMane,
        .shinyPalette = gMonShinyPalette_FlutterMane,
        .iconSprite = gMonIcon_FlutterMane,
        .iconPalIndex = 2,
        FOOTPRINT(FlutterMane)
        .isParadox = TRUE,
        .levelUpLearnset = sFlutterManeLevelUpLearnset,
        .teachableLearnset = sFlutterManeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FLUTTER_MANE

#if P_FAMILY_SLITHER_WING
    [SPECIES_SLITHER_WING] =
    {
        .baseHP        = 80,
        .baseAttack    = 140,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 110,
        .types = { TYPE_BUG, TYPE_FIGHTING },
        .catchRate = 30,
        .expYield = 285,
<<<<<<< HEAD
=======
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GUTS, ABILITY_SHIELD_DUST, ABILITY_PROTOSYNTHESIS },
        .bodyColor = BODY_COLOR_WHITE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("VOLCARONA"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("SlithrWing", "Slither Wing"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_SLITHER_WING,
        .natDexNum = NATIONAL_DEX_SLITHER_WING,
        .categoryName = _("PARADOX"),
        .height = 32,
        .weight = 920,
        .description = COMPOUND_STRING(
            "This creature was known in the ancient\n"
            "past as SLITHER WING. Eventually, due to\n"
            "the difficulties that it had moving, it\n"
            "evolved a pair of wings."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SlitherWing, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlitherWing,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlitherWing, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(SlitherWing),
        ICON(SlitherWing, 3),
        //.footprint = gMonFootprint_SlitherWing,
        LEARNSETS(SlitherWing),
=======
        .palette = gMonPalette_SlitherWing,
        .shinyPalette = gMonShinyPalette_SlitherWing,
        .iconSprite = gMonIcon_SlitherWing,
        .iconPalIndex = 1,
        FOOTPRINT(SlitherWing)
        .isParadox = TRUE,
        .levelUpLearnset = sSlitherWingLevelUpLearnset,
        .teachableLearnset = sSlitherWingTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
    [SPECIES_SANDY_SHOCKS] =
    {
        .baseHP        = 85,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 101,
        .baseSpAttack  = 121,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_GROUND },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("SndyShocks"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("SndyShocks", "Sandy Shocks"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_SANDY_SHOCKS,
        .natDexNum = NATIONAL_DEX_SANDY_SHOCKS,
        .categoryName = _("Paradox"),
        .height = 23,
        .weight = 600,
        .description = COMPOUND_STRING(
            "It slightly resembles a Magneton\n"
            "that lived for 10,000 years and was\n"
            "featured in an article in a\n"
            "paranormal magazine."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandyShocks, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandyShocks,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandyShocks, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(SandyShocks),
        ICON(SandyShocks, 0),
        //.footprint = gMonFootprint_SandyShocks,
        LEARNSETS(SandyShocks),
=======
        .palette = gMonPalette_SandyShocks,
        .shinyPalette = gMonShinyPalette_SandyShocks,
        .iconSprite = gMonIcon_SandyShocks,
        .iconPalIndex = 0,
        FOOTPRINT(SandyShocks)
        .isParadox = TRUE,
        .levelUpLearnset = sSandyShocksLevelUpLearnset,
        .teachableLearnset = sSandyShocksTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_TREADS
    [SPECIES_IRON_TREADS] =
    {
        .baseHP        = 90,
        .baseAttack    = 112,
        .baseDefense   = 120,
        .baseSpeed     = 106,
        .baseSpAttack  = 72,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Defense = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronTreads"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronTreads", "Iron Treads"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_TREADS,
        .natDexNum = NATIONAL_DEX_IRON_TREADS,
        .categoryName = _("Paradox"),
        .height = 9,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Sightings of this Pokémon have\n"
            "occurred in recent years. It resembles\n"
            "a mysterious object described in an\n"
            "old expedition journal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(IronTreads, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_IronTreads,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronTreads, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronTreads),
        ICON(IronTreads, 0),
        //.footprint = gMonFootprint_IronTreads,
        LEARNSETS(IronTreads),
=======
        .frontPic = gMonFrontPic_IronTreads,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_IronTreads,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronTreads,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronTreads,
        .shinyPalette = gMonShinyPalette_IronTreads,
        .iconSprite = gMonIcon_IronTreads,
        .iconPalIndex = 1,
        FOOTPRINT(IronTreads)
        .isParadox = TRUE,
        .levelUpLearnset = sIronTreadsLevelUpLearnset,
        .teachableLearnset = sIronTreadsTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_BUNDLE
    [SPECIES_IRON_BUNDLE] =
    {
        .baseHP        = 56,
        .baseAttack    = 80,
        .baseDefense   = 114,
        .baseSpeed     = 136,
        .baseSpAttack  = 124,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Speed = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronBundle"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronBundle", "Iron Bundle"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_BUNDLE,
        .natDexNum = NATIONAL_DEX_IRON_BUNDLE,
        .categoryName = _("Paradox"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Its shape is similar to a robot\n"
            "featured in a paranormal magazine\n"
            "article. The robot was said to have been\n"
            "created by an ancient civilization."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronBundle, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_IronBundle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronBundle, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(IronBundle),
        ICON(IronBundle, 0),
        //.footprint = gMonFootprint_IronBundle,
        LEARNSETS(IronBundle),
=======
        .palette = gMonPalette_IronBundle,
        .shinyPalette = gMonShinyPalette_IronBundle,
        .iconSprite = gMonIcon_IronBundle,
        .iconPalIndex = 0,
        FOOTPRINT(IronBundle)
        .isParadox = TRUE,
        .levelUpLearnset = sIronBundleLevelUpLearnset,
        .teachableLearnset = sIronBundleTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_BUNDLE

#if P_FAMILY_IRON_HANDS
    [SPECIES_IRON_HANDS] =
    {
        .baseHP        = 154,
        .baseAttack    = 140,
        .baseDefense   = 108,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 68,
        .types = { TYPE_FIGHTING, TYPE_ELECTRIC },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .isParadoxForm = TRUE,
        .speciesName = _("Iron Hands"),
        .cryId = CRY_IRON_HANDS,
        .natDexNum = NATIONAL_DEX_IRON_HANDS,
        .categoryName = _("Paradox"),
        .height = 18,
        .weight = 3807,
        .description = COMPOUND_STRING(
            "It is very similar to a cyborg\n"
            "covered exclusively by a paranormal\n"
            "magazine. The cyborg was said to be the\n"
            "modified form of a certain athlete."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronHands, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_IronHands,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(IronHands, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronHands),
        ICON(IronHands, 0),
        //.footprint = gMonFootprint_IronHands,
        LEARNSETS(IronHands),
=======
        .backPic = gMonBackPic_IronHands,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronHands,
        .shinyPalette = gMonShinyPalette_IronHands,
        .iconSprite = gMonIcon_IronHands,
        .iconPalIndex = 0,
        FOOTPRINT(IronHands)
        .isParadox = TRUE,
        .levelUpLearnset = sIronHandsLevelUpLearnset,
        .teachableLearnset = sIronHandsTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_HANDS

#if P_FAMILY_IRON_JUGULIS
    [SPECIES_IRON_JUGULIS] =
    {
        .baseHP        = 94,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 108,
        .baseSpAttack  = 122,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronJuguls"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronJuguls", "Iron Jugulis"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_JUGULIS,
        .natDexNum = NATIONAL_DEX_IRON_JUGULIS,
        .categoryName = _("Paradox"),
        .height = 13,
        .weight = 1110,
        .description = COMPOUND_STRING(
            "It resembles a certain Pokémon\n"
            "introduced in a paranormal magazine,\n"
            "described as the offspring of a\n"
            "Hydreigon that fell in love with a robot."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(IronJugulis, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_IronJugulis,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(IronJugulis, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronJugulis),
        ICON(IronJugulis, 2),
        //.footprint = gMonFootprint_IronJugulis,
        LEARNSETS(IronJugulis),
=======
        .frontPic = gMonFrontPic_IronJugulis,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_IronJugulis,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_IronJugulis,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronJugulis,
        .shinyPalette = gMonShinyPalette_IronJugulis,
        .iconSprite = gMonIcon_IronJugulis,
        .iconPalIndex = 0,
        FOOTPRINT(IronJugulis)
        .isParadox = TRUE,
        .levelUpLearnset = sIronJugulisLevelUpLearnset,
        .teachableLearnset = sIronJugulisTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_JUGULIS

#if P_FAMILY_IRON_MOTH
    [SPECIES_IRON_MOTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 110,
        .types = { TYPE_FIRE, TYPE_POISON },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .isParadoxForm = TRUE,
        .speciesName = _("Iron Moth"),
        .cryId = CRY_IRON_MOTH,
        .natDexNum = NATIONAL_DEX_IRON_MOTH,
        .categoryName = _("Paradox"),
        .height = 12,
        .weight = 360,
        .description = COMPOUND_STRING(
            "No records exist of this species\n"
            "being caught. Data is lacking, but\n"
            "the Pokémon's traits match up with an\n"
            "object described in an old book."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(IronMoth, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_IronMoth,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(IronMoth, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronMoth),
        ICON(IronMoth, 3),
        //.footprint = gMonFootprint_IronMoth,
        LEARNSETS(IronMoth),
=======
        .frontPic = gMonFrontPic_IronMoth,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_IronMoth,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_IronMoth,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronMoth,
        .shinyPalette = gMonShinyPalette_IronMoth,
        .iconSprite = gMonIcon_IronMoth,
        .iconPalIndex = 3,
        FOOTPRINT(IronMoth)
        .isParadox = TRUE,
        .levelUpLearnset = sIronMothLevelUpLearnset,
        .teachableLearnset = sIronMothTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
    [SPECIES_IRON_THORNS] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 72,
        .baseSpAttack  = 70,
        .baseSpDefense = 84,
        .types = { TYPE_ROCK, TYPE_ELECTRIC },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronThorns"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronThorns", "Iron Thorns"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_THORNS,
        .natDexNum = NATIONAL_DEX_IRON_THORNS,
        .categoryName = _("Paradox"),
        .height = 16,
        .weight = 3030,
        .description = COMPOUND_STRING(
            "It has some similarities to a\n"
            "Pokémon introduced in a dubious magazine\n"
            "as a Tyranitar from one billion\n"
            "years into the future."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronThorns, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_IronThorns,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(IronThorns, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronThorns),
        ICON(IronThorns, 1),
        //.footprint = gMonFootprint_IronThorns,
        LEARNSETS(IronThorns),
=======
        .backPic = gMonBackPic_IronThorns,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronThorns,
        .shinyPalette = gMonShinyPalette_IronThorns,
        .iconSprite = gMonIcon_IronThorns,
        .iconPalIndex = 1,
        FOOTPRINT(IronThorns)
        .isParadox = TRUE,
        .levelUpLearnset = sIronThornsLevelUpLearnset,
        .teachableLearnset = sIronThornsTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_FRIGIBAX
    [SPECIES_FRIGIBAX] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Frigibax"),
        .cryId = CRY_FRIGIBAX,
        .natDexNum = NATIONAL_DEX_FRIGIBAX,
        .categoryName = _("Ice Fin"),
        .height = 5,
        .weight = 170,
        .description = COMPOUND_STRING(
            "This Pokémon lives in forests and\n"
            "craggy areas. Using the power of its\n"
            "dorsal fin, it cools the inside of its\n"
            "nest like a refrigerator."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Frigibax, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Frigibax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Frigibax, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Frigibax),
        ICON(Frigibax, 3),
        //.footprint = gMonFootprint_Frigibax,
        LEARNSETS(Frigibax),
=======
        .palette = gMonPalette_Frigibax,
        .shinyPalette = gMonShinyPalette_Frigibax,
        .iconSprite = gMonIcon_Frigibax,
        .iconPalIndex = 0,
        FOOTPRINT(Frigibax)
        .levelUpLearnset = sFrigibaxLevelUpLearnset,
        .teachableLearnset = sFrigibaxTeachableLearnset,
        .eggMoveLearnset = sFrigibaxEggMoveLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ARCTIBAX}),
    },

    [SPECIES_ARCTIBAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 66,
        .baseSpeed     = 62,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 25,
        .expYield = 148,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctibax"),
        .cryId = CRY_ARCTIBAX,
        .natDexNum = NATIONAL_DEX_ARCTIBAX,
        .categoryName = _("Ice Fin"),
        .height = 8,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Arctibax freezes the air around it,\n"
            "protecting its face with an ice\n"
            "mask and turning its dorsal fin into a\n"
            "blade of ice."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(Arctibax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Arctibax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arctibax, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Arctibax),
        ICON(Arctibax, 0),
        //.footprint = gMonFootprint_Arctibax,
        LEARNSETS(Arctibax),
=======
        .frontPic = gMonFrontPic_Arctibax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Arctibax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctibax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arctibax,
        .shinyPalette = gMonShinyPalette_Arctibax,
        .iconSprite = gMonIcon_Arctibax,
        .iconPalIndex = 0,
        FOOTPRINT(Arctibax)
        .levelUpLearnset = sArctibaxLevelUpLearnset,
        .teachableLearnset = sArctibaxTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_LEVEL, 54, SPECIES_BAXCALIBUR}),
    },

    [SPECIES_BAXCALIBUR] =
    {
        .baseHP        = 115,
        .baseAttack    = 145,
        .baseDefense   = 92,
        .baseSpeed     = 87,
        .baseSpAttack  = 75,
        .baseSpDefense = 86,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 10,
        .expYield = 300,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Baxcalibur"),
        .cryId = CRY_BAXCALIBUR,
        .natDexNum = NATIONAL_DEX_BAXCALIBUR,
        .categoryName = _("Ice Dragon"),
        .height = 21,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "It launches itself into battle by\n"
            "flipping upside down and spewing\n"
            "frigid air from its mouth. It finishes\n"
            "opponents off with its dorsal blade."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Baxcalibur, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Baxcalibur,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Baxcalibur, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Baxcalibur),
        ICON(Baxcalibur, 0),
        //.footprint = gMonFootprint_Baxcalibur,
        LEARNSETS(Baxcalibur),
=======
        .palette = gMonPalette_Baxcalibur,
        .shinyPalette = gMonShinyPalette_Baxcalibur,
        .iconSprite = gMonIcon_Baxcalibur,
        .iconPalIndex = 0,
        FOOTPRINT(Baxcalibur)
        .levelUpLearnset = sBaxcaliburLevelUpLearnset,
        .teachableLearnset = sBaxcaliburTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_GIMMIGHOUL
#define GIMMIGHOUL_MISC_INFO                                                            \
        .types = { TYPE_GHOST, TYPE_GHOST },                                            \
        .catchRate = 45,                                                                \
        .expYield = 60,                                                                 \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 50,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .speciesName = _("GIMMIGHOUL"),                                                 \
        .cryId = CRY_GIMMIGHOUL,                                                        \
        .natDexNum = NATIONAL_DEX_GIMMIGHOUL,                                           \
        .frontAnimFrames = sAnims_Gimmighoul,                                           \
        LEARNSETS(Gimmighoul),                                                          \
        .formSpeciesIdTable = sGimmighoulFormSpeciesIdTable,                            \
        .evolutions = EVOLUTION({EVO_MONEY, 0, SPECIES_GHOLDENGO})
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Gimmighoul,

    [SPECIES_GIMMIGHOUL_CHEST] =
    {
        GIMMIGHOUL_MISC_INFO,
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 70,
        .baseSpeed     = 10,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .abilities = { ABILITY_RATTLED, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .categoryName = _("COIN CHEST"),
        .height = 3,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It lives inside an old treasure\n"
            "chest. It's always on the lookout\n"
            "for more gold to add to its precious\n"
            "reserve."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(GimmighoulChest, 64, 64),
        .frontPicYOffset = 2,
        BACK_PIC(GimmighoulChest, 64, 64),
        .backPicYOffset = 0,
        PALETTES(GimmighoulChest),
        ICON(GimmighoulChest, 0),
=======
        .frontPic = gMonFrontPic_GimmighoulChest,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gimmighoul,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulChest,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GimmighoulChest,
        .shinyPalette = gMonShinyPalette_GimmighoulChest,
        .iconSprite = gMonIcon_GimmighoulChest,
        .iconPalIndex = 0,
        FOOTPRINT(GimmighoulChest)
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .formSpeciesIdTable = sGimmighoulFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM_COUNT_999, ITEM_GIMMIGHOUL_COIN, SPECIES_GHOLDENGO}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_GIMMIGHOUL_ROAMING] =
    {
        GIMMIGHOUL_MISC_INFO,
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 25,
        .baseSpeed     = 80,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .categoryName = _("Coin Hunter"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "It wanders around, carrying an old\n"
            "coin on its back. It survives by\n"
            "draining the life-force from humans who\n"
            "try to pick up its coin."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(GimmighoulRoaming, 64, 64),
        .frontPicYOffset = 11,
        BACK_PIC(GimmighoulRoaming, 64, 64),
        .backPicYOffset = 3,
        PALETTES(GimmighoulRoaming),
        ICON(GimmighoulRoaming, 0),
=======
        .frontPic = gMonFrontPic_GimmighoulRoaming,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Gimmighoul,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulRoaming,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GimmighoulRoaming,
        .shinyPalette = gMonShinyPalette_GimmighoulRoaming,
        .iconSprite = gMonIcon_GimmighoulRoaming,
        .iconPalIndex = 0,
        FOOTPRINT(GimmighoulRoaming)
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .formSpeciesIdTable = sGimmighoulFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM_COUNT_999, ITEM_GIMMIGHOUL_COIN, SPECIES_GHOLDENGO}),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },

    [SPECIES_GHOLDENGO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_STEEL, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 275,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GOOD_AS_GOLD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("GHOLDENGO"),
        .cryId = CRY_GHOLDENGO,
        .natDexNum = NATIONAL_DEX_GHOLDENGO,
        .categoryName = _("COIN ENTITY"),
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING(
            "It has a sturdy body made up of\n"
            "stacked coins. GHOLDENGO overwhelms\n"
            "its enemies by firing coin after coin\n"
            "at them in quick succession."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(Gholdengo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gholdengo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gholdengo, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Gholdengo),
        ICON(Gholdengo, 0),
        //.footprint = gMonFootprint_Gholdengo,
        LEARNSETS(Gholdengo),
=======
        .frontPic = gMonFrontPic_Gholdengo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Gholdengo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gholdengo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gholdengo,
        .shinyPalette = gMonShinyPalette_Gholdengo,
        .iconSprite = gMonIcon_Gholdengo,
        .iconPalIndex = 0,
        FOOTPRINT(Gholdengo)
        .levelUpLearnset = sGholdengoLevelUpLearnset,
        .teachableLearnset = sGholdengoTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_GIMMIGHOUL


 [SPECIES_GOROCHU] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_FIGHTING },
        .catchRate = 75,                                  
        .expYield = 218,    
        .genderRatio = PERCENT_FEMALE(50), 
        .eggCycles = 10, 
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_FLARE_BOOST, ABILITY_TERAVOLT, ABILITY_OVERCHARGE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("GOROCHU"),
        .cryId = CRY_GOROCHU,
        .natDexNum = NATIONAL_DEX_GOROCHU,
        .categoryName = _("MOUSE"),
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING(
            "An exceedingly rare POKéMON, GOROCHU\n"
            "is constantly itching for a fight.\n"
            "It's recommended that only expert\n"
            "TRAINERs attempt to raise this POKéMON"),
       .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gorochu, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gorochu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gorochu, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Gorochu),
        ICON(Gorochu, 0),
        .footprint = gMonFootprint_Gorochu,
        LEARNSETS(Gorochu),
    },






#if P_FAMILY_WO_CHIEN
    [SPECIES_WO_CHIEN] =
    {
        .baseHP        = 85,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = { TYPE_DARK, TYPE_GRASS },
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_TABLETS_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .isLegendary = TRUE,
        .speciesName = _("Wo-Chien"),
        .cryId = CRY_WO_CHIEN,
        .natDexNum = NATIONAL_DEX_WO_CHIEN,
        .categoryName = _("Ruinous"),
        .height = 15,
        .weight = 742,
        .description = COMPOUND_STRING(
            "The grudge of a person punished\n"
            "for writing the king's evil deeds upon\n"
            "wooden tablets has clad itself in\n"
            "dead leaves to become a Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(WoChien, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WoChien,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(WoChien, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(WoChien),
        ICON(WoChien, 5),
        //.footprint = gMonFootprint_WoChien,
        LEARNSETS(WoChien),
=======
        .frontPic = gMonFrontPic_WoChien,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_WoChien,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WoChien,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WoChien,
        .shinyPalette = gMonShinyPalette_WoChien,
        .iconSprite = gMonIcon_WoChien,
        .iconPalIndex = 1,
        FOOTPRINT(WoChien)
        .isLegendary = TRUE,
        .levelUpLearnset = sWoChienLevelUpLearnset,
        .teachableLearnset = sWoChienTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
    [SPECIES_CHIEN_PAO] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_ICE },
        .catchRate = 6,
        .expYield = 285,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SWORD_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .isLegendary = TRUE,
        .speciesName = _("Chien-Pao"),
        .cryId = CRY_CHIEN_PAO,
        .natDexNum = NATIONAL_DEX_CHIEN_PAO,
        .categoryName = _("Ruinous"),
        .height = 19,
        .weight = 1522,
        .description = COMPOUND_STRING(
            "This Pokémon can control 100 tons\n"
            "of fallen snow. It plays around\n"
            "innocently by leaping in and out of\n"
            "avalanches it has caused."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ChienPao, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ChienPao,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ChienPao, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(ChienPao),
        ICON(ChienPao, 0),
        //.footprint = gMonFootprint_ChienPao,
        LEARNSETS(ChienPao),
=======
        .palette = gMonPalette_ChienPao,
        .shinyPalette = gMonShinyPalette_ChienPao,
        .iconSprite = gMonIcon_ChienPao,
        .iconPalIndex = 0,
        FOOTPRINT(ChienPao)
        .isLegendary = TRUE,
        .levelUpLearnset = sChienPaoLevelUpLearnset,
        .teachableLearnset = sChienPaoTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_TING_LU
    [SPECIES_TING_LU] =
    {
        .baseHP        = 155,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_GROUND },
        .catchRate = 6,
        .expYield = 285,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_VESSEL_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .isLegendary = TRUE,
        .speciesName = _("Ting-Lu"),
        .cryId = CRY_TING_LU,
        .natDexNum = NATIONAL_DEX_TING_LU,
        .categoryName = _("Ruinous"),
        .height = 27,
        .weight = 6997,
        .description = COMPOUND_STRING(
            "It slowly brings its exceedingly\n"
            "heavy head down upon the ground,\n"
            "splitting the earth open with huge\n"
            "fissures that run over 160 feet deep."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(TingLu, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_TingLu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(TingLu, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(TingLu),
        ICON(TingLu, 0),
        //.footprint = gMonFootprint_TingLu,
        LEARNSETS(TingLu),
=======
        .frontPic = gMonFrontPic_TingLu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TingLu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TingLu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TingLu,
        .shinyPalette = gMonShinyPalette_TingLu,
        .iconSprite = gMonIcon_TingLu,
        .iconPalIndex = 0,
        FOOTPRINT(TingLu)
        .isLegendary = TRUE,
        .levelUpLearnset = sTingLuLevelUpLearnset,
        .teachableLearnset = sTingLuTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_TING_LU

#if P_FAMILY_CHI_YU
    [SPECIES_CHI_YU] =
    {
        .baseHP        = 55,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 120,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_BEADS_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .isLegendary = TRUE,
        .speciesName = _("Chi-Yu"),
        .cryId = CRY_CHI_YU,
        .natDexNum = NATIONAL_DEX_CHI_YU,
        .categoryName = _("Ruinous"),
        .height = 4,
        .weight = 49,
        .description = COMPOUND_STRING(
            "It controls flames burning at over\n"
            "5,400 degrees Fahrenheit. It\n"
            "casually swims through the sea of lava it\n"
            "creates by melting rock and sand."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ChiYu, 64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_ChiYu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(ChiYu, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(ChiYu),
        ICON(ChiYu, 0),
        //.footprint = gMonFootprint_ChiYu,
        LEARNSETS(ChiYu),
=======
        .palette = gMonPalette_ChiYu,
        .shinyPalette = gMonShinyPalette_ChiYu,
        .iconSprite = gMonIcon_ChiYu,
        .iconPalIndex = 0,
        FOOTPRINT(ChiYu)
        .isLegendary = TRUE,
        .levelUpLearnset = sChiYuLevelUpLearnset,
        .teachableLearnset = sChiYuTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_CHI_YU

#if P_FAMILY_ROARING_MOON
    [SPECIES_ROARING_MOON] =
    {
        .baseHP        = 105,
        .baseAttack    = 139,
        .baseDefense   = 71,
        .baseSpeed     = 119,
        .baseSpAttack  = 55,
        .baseSpDefense = 101,
        .types = { TYPE_DRAGON, TYPE_DARK },
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("RoarngMoon"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("RoarngMoon", "Roaring Moon"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_ROARING_MOON,
        .natDexNum = NATIONAL_DEX_ROARING_MOON,
        .categoryName = _("Paradox"),
        .height = 20,
        .weight = 3800,
        .description = COMPOUND_STRING(
            "According to an article in a\n"
            "dubious magazine, this Pokémon has some\n"
            "connection to Mega Evolution that\n"
            "occurs in Hoenn."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RoaringMoon, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RoaringMoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        .enemyMonElevation = 6,
        BACK_PIC(RoaringMoon, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RoaringMoon),
        ICON(RoaringMoon, 3),
        //.footprint = gMonFootprint_RoaringMoon,
        LEARNSETS(RoaringMoon),
=======
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_RoaringMoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RoaringMoon,
        .shinyPalette = gMonShinyPalette_RoaringMoon,
        .iconSprite = gMonIcon_RoaringMoon,
        .iconPalIndex = 0,
        FOOTPRINT(RoaringMoon)
        .isParadox = TRUE,
        .levelUpLearnset = sRoaringMoonLevelUpLearnset,
        .teachableLearnset = sRoaringMoonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_VALIANT
    [SPECIES_IRON_VALIANT] =
    {
        .baseHP        = 74,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 116,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = { TYPE_FAIRY, TYPE_FIGHTING },
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronVliant"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronVliant", "Iron Valiant"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_VALIANT,
        .natDexNum = NATIONAL_DEX_IRON_VALIANT,
        .categoryName = _("Paradox"),
        .height = 14,
        .weight = 350,
        .description = COMPOUND_STRING(
            "It has some similarities to a mad\n"
            "scientist's invention covered in a\n"
            "paranormal magazine."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronValiant, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_IronValiant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronValiant, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(IronValiant),
        ICON(IronValiant, 4),
        //.footprint = gMonFootprint_IronValiant,
        LEARNSETS(IronValiant),
=======
        .palette = gMonPalette_IronValiant,
        .shinyPalette = gMonShinyPalette_IronValiant,
        .iconSprite = gMonIcon_IronValiant,
        .iconPalIndex = 1,
        FOOTPRINT(IronValiant)
        .isParadox = TRUE,
        .levelUpLearnset = sIronValiantLevelUpLearnset,
        .teachableLearnset = sIronValiantTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
    [SPECIES_KORAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,
        .baseDefense   = 115,
        .baseSpeed     = 135,
        .baseSpAttack  = 85,
        .baseSpDefense = 100,
        .types = { TYPE_FIGHTING, TYPE_DRAGON },
        .catchRate = 3,
        .expYield = 335,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_ORICHALCUM_PULSE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .isLegendary = TRUE,
        .isParadoxForm = TRUE,
        .speciesName = _("Koraidon"),
        .cryId = CRY_KORAIDON,
        .natDexNum = NATIONAL_DEX_KORAIDON,
        .categoryName = _("Paradox"),
        .height = 25,
        .weight = 3030,
        .description = COMPOUND_STRING(
            "This Pokémon resembles Cyclizar,\n"
            "but it is far burlier and more\n"
            "ferocious. Nothing is known about its\n"
            "ecology or other features."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Koraidon, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Koraidon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Koraidon, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Koraidon),
        ICON(Koraidon, 0),
        //.footprint = gMonFootprint_Koraidon,
        LEARNSETS(Koraidon),
=======
        .palette = gMonPalette_Koraidon,
        .shinyPalette = gMonShinyPalette_Koraidon,
        .iconSprite = gMonIcon_Koraidon,
        .iconPalIndex = 0,
        FOOTPRINT(Koraidon)
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sKoraidonLevelUpLearnset,
        .teachableLearnset = sKoraidonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
    [SPECIES_MIRAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON },
        .catchRate = 3,
        .expYield = 335,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_HADRON_ENGINE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .isLegendary = TRUE,
        .isParadoxForm = TRUE,
        .speciesName = _("Miraidon"),
        .cryId = CRY_MIRAIDON,
        .natDexNum = NATIONAL_DEX_MIRAIDON,
        .categoryName = _("Paradox"),
        .height = 35,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "This seems to be the Iron Serpent\n"
            "mentioned in an Violet Book. The\n"
            "Iron Serpent is said to have turned the\n"
            "land to ash with its lightning."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Miraidon, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Miraidon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Miraidon, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Miraidon),
        ICON(Miraidon, 2),
        //.footprint = gMonFootprint_Miraidon,
        LEARNSETS(Miraidon),
=======
        .palette = gMonPalette_Miraidon,
        .shinyPalette = gMonShinyPalette_Miraidon,
        .iconSprite = gMonIcon_Miraidon,
        .iconPalIndex = 2,
        FOOTPRINT(Miraidon)
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sMiraidonLevelUpLearnset,
        .teachableLearnset = sMiraidonTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
    [SPECIES_WALKING_WAKE] =
    {
        .baseHP        = 99,
        .baseAttack    = 83,
        .baseDefense   = 91,
        .baseSpeed     = 109,
        .baseSpAttack  = 125,
        .baseSpDefense = 83,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 5,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("WalkngWake"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("WalkngWake", "Walking Wake"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_WALKING_WAKE,
        .natDexNum = NATIONAL_DEX_WALKING_WAKE,
        .categoryName = _("Paradox"),
        .height = 35,
        .weight = 2800,
        .description = COMPOUND_STRING(
            "Ecology under research."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(WalkingWake, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WalkingWake,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(WalkingWake, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(WalkingWake),
        ICON(WalkingWake, 2),
        //.footprint = gMonFootprint_WalkingWake,
        LEARNSETS(WalkingWake),
=======
        .backPic = gMonBackPic_WalkingWake,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WalkingWake,
        .shinyPalette = gMonShinyPalette_WalkingWake,
        .iconSprite = gMonIcon_WalkingWake,
        .iconPalIndex = 2,
        FOOTPRINT(WalkingWake)
        .isParadox = TRUE,
        .levelUpLearnset = sWalkingWakeLevelUpLearnset,
        .teachableLearnset = sWalkingWakeTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
    [SPECIES_IRON_LEAVES] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 88,
        .baseSpeed     = 104,
        .baseSpAttack  = 70,
        .baseSpDefense = 108,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 5,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
<<<<<<< HEAD
        .isParadoxForm = TRUE,
        .speciesName = _("IronLeaves"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronLeaves", "Iron Leaves"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_IRON_LEAVES,
        .natDexNum = NATIONAL_DEX_IRON_LEAVES,
        .categoryName = _("Paradox"),
        .height = 15,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "Ecology under analysis."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(IronLeaves, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_IronLeaves,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronLeaves, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronLeaves),
        ICON(IronLeaves, 1),
        //.footprint = gMonFootprint_IronLeaves,
        LEARNSETS(IronLeaves),
=======
        .frontPic = gMonFrontPic_IronLeaves,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_IronLeaves,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronLeaves,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronLeaves,
        .shinyPalette = gMonShinyPalette_IronLeaves,
        .iconSprite = gMonIcon_IronLeaves,
        .iconPalIndex = 1,
        FOOTPRINT(IronLeaves)
        .isParadox = TRUE,
        .levelUpLearnset = sIronLeavesLevelUpLearnset,
        .teachableLearnset = sIronLeavesTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_POLTCHAGEIST
#define POLTCHAGEIST_MISC_INFO                                                  \
        .baseHP        = 40,                                                    \
        .baseAttack    = 45,                                                    \
        .baseDefense   = 45,                                                    \
        .baseSpeed     = 50,                                                    \
        .baseSpAttack  = 74,                                                    \
        .baseSpDefense = 54,                                                    \
        .types = { TYPE_GRASS, TYPE_GHOST },                                    \
        .catchRate = 120,                                                       \
        .expYield = 62,                                                         \
        .evYield_SpAttack = 1,                                                  \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS },                \
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },  \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .speciesName = _("Ptchageist"),                                         \
        .cryId = CRY_POLTCHAGEIST,                                              \
        .natDexNum = NATIONAL_DEX_POLTCHAGEIST,                                 \
        .categoryName = _("Matcha"),                                            \
        .height = 1,                                                            \
        .weight = 11,                                                           \
        .pokemonScale = 356,                                                    \
        .pokemonOffset = 17,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FRONT_PIC(Poltchageist, 64, 64),                                        \
        .frontPicYOffset = 7,                                                   \
        .frontAnimFrames = sAnims_Poltchageist,                                 \
        .enemyMonElevation = 10,                                                \
        BACK_PIC(Poltchageist, 64, 64),                                         \
        .backPicYOffset = 5,                                                    \
        PALETTES(Poltchageist),                                                 \
        ICON(Poltchageist, 4),                                                  \
        LEARNSETS(Poltchageist)
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Poltchageist,

    [SPECIES_POLTCHAGEIST_COUNTERFEIT] =
    {
<<<<<<< HEAD
        POLTCHAGEIST_MISC_INFO,
=======
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 74,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 120,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Ptchageist", "Poltchageist"),
        .cryId = CRY_POLTCHAGEIST,
        .natDexNum = NATIONAL_DEX_POLTCHAGEIST,
        .categoryName = _("Matcha"),
        .height = 1,
        .weight = 11,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "Supposedly, the regrets of a tea\n"
            "ceremony master who died before\n"
            "perfecting his craft lingered in some\n"
            "matcha and became a Pokémon."),
<<<<<<< HEAD
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Poltchageist,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        FOOTPRINT(Poltchageist)
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_UNREMARKABLE_TEACUP, SPECIES_SINISTCHA_UNREMARKABLE}),
    },
    [SPECIES_POLTCHAGEIST_ARTISAN] =
    {
<<<<<<< HEAD
        POLTCHAGEIST_MISC_INFO,
=======
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 74,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 120,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Ptchageist", "Poltchageist"),
        .cryId = CRY_POLTCHAGEIST,
        .natDexNum = NATIONAL_DEX_POLTCHAGEIST,
        .categoryName = _("Matcha"),
        .height = 1,
        .weight = 11,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .description = COMPOUND_STRING(
            "It has taken up residence in a very\n"
            "expensive tea caddy. It takes an\n"
            "expert to distinguish the expensive\n"
            "tea caddies from the cheap ones."),
<<<<<<< HEAD
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Poltchageist,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        FOOTPRINT(Poltchageist)
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MASTERPIECE_TEACUP, SPECIES_SINISTCHA_MASTERPIECE}),
    },

#define SINISTCHA_MISC_INFO                                                     \
        .baseHP        = 71,                                                    \
        .baseAttack    = 60,                                                    \
        .baseDefense   = 106,                                                   \
        .baseSpeed     = 70,                                                    \
        .baseSpAttack  = 121,                                                   \
        .baseSpDefense = 80,                                                    \
        .types = { TYPE_GRASS, TYPE_GHOST },                                    \
        .catchRate = 60,                                                        \
        .expYield = 178,                                                        \
        .evYield_SpAttack = 2,                                                  \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS },                \
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },  \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .speciesName = _("Sinistcha"),                                          \
        .cryId = CRY_SINISTCHA,                                                 \
        .natDexNum = NATIONAL_DEX_SINISTCHA,                                    \
        .categoryName = _("Matcha"),                                            \
        .height = 2,                                                            \
        .weight = 22,                                                           \
        .pokemonScale = 356,                                                    \
        .pokemonOffset = 17,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FRONT_PIC(Sinistcha, 64, 64),                                           \
        .frontPicYOffset = 10,                                                  \
        .frontAnimFrames = sAnims_Sinistcha,                                    \
        .enemyMonElevation = 10,                                                \
        BACK_PIC(Sinistcha, 64, 64),                                            \
        .backPicYOffset = 13,                                                   \
        PALETTES(Sinistcha),                                                    \
        ICON(Sinistcha, 1),                                                     \
        LEARNSETS(Sinistcha)
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Sinistcha,

    [SPECIES_SINISTCHA_UNREMARKABLE] =
    {
        SINISTCHA_MISC_INFO,
        .description = COMPOUND_STRING(
            "It pretends to be tea, trying to fool\n"
            "people into drinking it so it can\n"
            "drain their life-force. Its ruse is\n"
            "generally unsuccessful."),
<<<<<<< HEAD
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sinistcha,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        FOOTPRINT(Sinistcha)
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
    [SPECIES_SINISTCHA_MASTERPIECE] =
    {
        SINISTCHA_MISC_INFO,
        .description = COMPOUND_STRING(
            "The more stirring it does with the\n"
            "tea whisk on its head, the more\n"
            "energy it builds up. It does this to\n"
            "prepare for battle."),
<<<<<<< HEAD
=======
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sinistcha,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        FOOTPRINT(Sinistcha)
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_POLTCHAGEIST

#if P_FAMILY_OKIDOGI
    [SPECIES_OKIDOGI] =
    {
        .baseHP        = 88,
        .baseAttack    = 128,
        .baseDefense   = 115,
        .baseSpeed     = 80,
        .baseSpAttack  = 58,
        .baseSpDefense = 86,
        .types = { TYPE_POISON, TYPE_FIGHTING },
        .catchRate = 3,
        .expYield = 278,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_GUARD_DOG },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Okidogi"),
        .cryId = CRY_OKIDOGI,
        .natDexNum = NATIONAL_DEX_OKIDOGI,
        .categoryName = _("Retainer"),
        .height = 18,
        .weight = 920,
        .description = COMPOUND_STRING(
            "After all its muscles were stimulated\n"
            "by the toxic chain around its neck,\n"
            "Okidogi transformed and gained\n"
            "a powerful physique."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
<<<<<<< HEAD
        FRONT_PIC(Okidogi, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Okidogi,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Okidogi, 64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Okidogi),
        ICON(Okidogi, 1),
        //.footprint = gMonFootprint_Okidogi,
        LEARNSETS(Okidogi),
=======
        .frontPic = gMonFrontPic_Okidogi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Okidogi,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Okidogi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Okidogi,
        .shinyPalette = gMonShinyPalette_Okidogi,
        .iconSprite = gMonIcon_Okidogi,
        .iconPalIndex = 1,
        FOOTPRINT(Okidogi)
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .isLegendary = TRUE,
    },
#endif //P_FAMILY_OKIDOGI

#if P_FAMILY_MUNKIDORI
    [SPECIES_MUNKIDORI] =
    {
        .baseHP        = 88,
        .baseAttack    = 75,
        .baseDefense   = 66,
        .baseSpeed     = 106,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_POISON, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 278,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_BLACK,
        .isLegendary = TRUE,
        .speciesName = _("Munkidori"),
        .cryId = CRY_MUNKIDORI,
        .natDexNum = NATIONAL_DEX_MUNKIDORI,
        .categoryName = _("Retainer"),
        .height = 10,
        .weight = 122,
        .description = COMPOUND_STRING(
            "The chain is made from toxins that\n"
            "enhance capabilities. It stimulated\n"
            "Munkidori's brain and caused the\n"
            "Pokémon's psychic powers to bloom."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Munkidori, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Munkidori,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
<<<<<<< HEAD
        BACK_PIC(Munkidori, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Munkidori),
        ICON(Munkidori, 0),
        //.footprint = gMonFootprint_Munkidori,
        LEARNSETS(Munkidori),
=======
        .backPic = gMonBackPic_Munkidori,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Munkidori,
        .shinyPalette = gMonShinyPalette_Munkidori,
        .iconSprite = gMonIcon_Munkidori,
        .iconPalIndex = 0,
        FOOTPRINT(Munkidori)
        .isLegendary = TRUE,
        .levelUpLearnset = sMunkidoriLevelUpLearnset,
        .teachableLearnset = sMunkidoriTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_MUNKIDORI

#if P_FAMILY_FEZANDIPITI
    [SPECIES_FEZANDIPITI] =
    {
        .baseHP        = 88,
        .baseAttack    = 91,
        .baseDefense   = 82,
        .baseSpeed     = 99,
        .baseSpAttack  = 70,
        .baseSpDefense = 125,
        .types = { TYPE_POISON, TYPE_FAIRY },
        .catchRate = 3,
        .expYield = 278,
        .evYield_SpDefense = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BLACK,
<<<<<<< HEAD
        .isLegendary = TRUE,
        .speciesName = _("Fezndipiti"),
=======
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Fezndipiti", "Fezandipiti"),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
        .cryId = CRY_FEZANDIPITI,
        .natDexNum = NATIONAL_DEX_FEZANDIPITI,
        .categoryName = _("Retainer"),
        .height = 14,
        .weight = 301,
        .description = COMPOUND_STRING(
            "Fezandipiti owes its beautiful looks and\n"
            "lovely voice to the toxic stimulants\n"
            "emanating from the chain wrapped around\n"
            "its body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fezandipiti, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Fezandipiti,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Fezandipiti, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
<<<<<<< HEAD
        PALETTES(Fezandipiti),
        ICON(Fezandipiti, 0),
        //.footprint = gMonFootprint_Fezandipiti,
        LEARNSETS(Fezandipiti),
=======
        .palette = gMonPalette_Fezandipiti,
        .shinyPalette = gMonShinyPalette_Fezandipiti,
        .iconSprite = gMonIcon_Fezandipiti,
        .iconPalIndex = 0,
        FOOTPRINT(Fezandipiti)
        .isLegendary = TRUE,
        .levelUpLearnset = sFezandipitiLevelUpLearnset,
        .teachableLearnset = sFezandipitiTeachableLearnset,
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
    },
#endif //P_FAMILY_FEZANDIPITI

#if P_FAMILY_OGERPON
<<<<<<< HEAD
#define OGERPON_SPECIES_INFO(Form, type, ability, color)                                \
    {                                                                                   \
        .baseHP        = 80,                                                            \
        .baseAttack    = 120,                                                           \
        .baseDefense   = 84,                                                            \
        .baseSpeed     = 110,                                                           \
        .baseSpAttack  = 60,                                                            \
        .baseSpDefense = 96,                                                            \
        .types = { TYPE_GRASS, type },                                                  \
        .catchRate = 5,                                                                 \
        .expYield = 275,                                                                \
        .evYield_Attack = 3,                                                            \
        .genderRatio = MON_FEMALE,                                                      \
        .eggCycles = 10,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ability, ABILITY_NONE },                                         \
        .bodyColor = color,                                                             \
        .speciesName = _("Ogerpon"),                                                    \
        .cryId = CRY_OGERPON,                                                           \
        .natDexNum = NATIONAL_DEX_OGERPON,                                              \
        .categoryName = _("Mask"),                                                      \
        .height = 12,                                                                   \
        .weight = 398,                                                                  \
        .description = gOgerpon##Form##PokedexText,                                     \
        .pokemonScale = 356,                                                            \
        .pokemonOffset = 17,                                                            \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        FRONT_PIC(Ogerpon##Form, 64, 64),                                               \
        .frontPicYOffset = 0,                                                           \
        .frontAnimFrames = sAnims_Ogerpon,                                              \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                    \
        BACK_PIC(Ogerpon##Form, 64, 64),                                                \
        .backPicYOffset = 16,                                                           \
        /*.backAnimId = BACK_ANIM_NONE,*/                                               \
        .palette = gMonPalette_Ogerpon##Form,                                           \
        .shinyPalette = gMonShinyPalette_Ogerpon##Form,                                 \
        ICON(OgerponTealMask, 1), /* Each form should have its own icon */              \
        /*.footprint = gMonFootprint_Ogerpon,*/                                         \
        LEARNSETS(Ogerpon),                                                             \
        .formSpeciesIdTable = sOgerponFormSpeciesIdTable,                               \
        .formChangeTable = sOgerponFormChangeTable,                                     \
        .isLegendary = TRUE,                                                            \
    }

    [SPECIES_OGERPON_TEAL_MASK]             = OGERPON_SPECIES_INFO(TealMask,        TYPE_GRASS, ABILITY_DEFIANT,                   BODY_COLOR_GREEN),
    [SPECIES_OGERPON_WELLSPRING_MASK]       = OGERPON_SPECIES_INFO(WellspringMask,  TYPE_WATER, ABILITY_WATER_ABSORB,              BODY_COLOR_BLUE),
    [SPECIES_OGERPON_HEARTHFLAME_MASK]      = OGERPON_SPECIES_INFO(HearthflameMask, TYPE_FIRE,  ABILITY_MOLD_BREAKER,              BODY_COLOR_RED),
    [SPECIES_OGERPON_CORNERSTONE_MASK]      = OGERPON_SPECIES_INFO(CornerstoneMask, TYPE_ROCK,  ABILITY_STURDY,                    BODY_COLOR_GRAY),
#if P_TERA_FORMS
    [SPECIES_OGERPON_TEAL_MASK_TERA]        = OGERPON_SPECIES_INFO(TealMask,        TYPE_GRASS, ABILITY_EMBODY_ASPECT_TEAL,        BODY_COLOR_GREEN),
    [SPECIES_OGERPON_WELLSPRING_MASK_TERA]  = OGERPON_SPECIES_INFO(WellspringMask,  TYPE_WATER, ABILITY_EMBODY_ASPECT_WELLSPRING,  BODY_COLOR_BLUE),
    [SPECIES_OGERPON_HEARTHFLAME_MASK_TERA] = OGERPON_SPECIES_INFO(HearthflameMask, TYPE_FIRE,  ABILITY_EMBODY_ASPECT_HEARTHFLAME, BODY_COLOR_RED),
    [SPECIES_OGERPON_CORNERSTONE_MASK_TERA] = OGERPON_SPECIES_INFO(CornerstoneMask, TYPE_ROCK,  ABILITY_EMBODY_ASPECT_CORNERSTONE, BODY_COLOR_GRAY),
=======
#define OGERPON_SPECIES_INFO(Form1, Form2, type, ability, color, iconpalette, isTeraform)   \
    {                                                                                       \
        .baseHP        = 80,                                                                \
        .baseAttack    = 120,                                                               \
        .baseDefense   = 84,                                                                \
        .baseSpeed     = 110,                                                               \
        .baseSpAttack  = 60,                                                                \
        .baseSpDefense = 96,                                                                \
        .types = MON_TYPES(TYPE_GRASS, type),                                               \
        .forceTeraType = type,                                                              \
        .catchRate = 5,                                                                     \
        .expYield = 275,                                                                    \
        .evYield_Attack = 3,                                                                \
        .genderRatio = MON_FEMALE,                                                          \
        .eggCycles = 10,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_SLOW,                                                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                          \
        .abilities = { ability, ABILITY_NONE },                                             \
        .bodyColor = color,                                                                 \
        .speciesName = _("Ogerpon"),                                                        \
        .cryId = CRY_OGERPON,                                                               \
        .natDexNum = NATIONAL_DEX_OGERPON,                                                  \
        .categoryName = _("Mask"),                                                          \
        .height = 12,                                                                       \
        .weight = 398,                                                                      \
        .description = gOgerpon##Form1##MaskPokedexText,                                    \
        .pokemonScale = 356,                                                                \
        .pokemonOffset = 17,                                                                \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Ogerpon##Form1##Form2,                                     \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                            \
        .frontPicYOffset = 0,                                                               \
        .frontAnimFrames = sAnims_Ogerpon,                                                  \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                        \
        .backPic = gMonBackPic_Ogerpon##Form1##Form2,                                       \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                             \
        .backPicYOffset = 0,                                                                \
        /*.backAnimId = BACK_ANIM_NONE,*/                                                   \
        .palette = gMonPalette_Ogerpon##Form1##Form2,                                       \
        .shinyPalette = gMonShinyPalette_Ogerpon##Form1##Form2,                             \
        .iconSprite = gMonIcon_Ogerpon##Form1##Mask,                                        \
        .iconPalIndex = iconpalette,                                                        \
        FOOTPRINT(Ogerpon)                                                                  \
        .levelUpLearnset = sOgerponLevelUpLearnset,                                         \
        .teachableLearnset = sOgerponTeachableLearnset,                                     \
        .formSpeciesIdTable = sOgerponFormSpeciesIdTable,                                   \
        .formChangeTable = sOgerponFormChangeTable,                                         \
        .isLegendary = TRUE,                                                                \
        .isTeraForm = isTeraform,                                                           \
    }

    [SPECIES_OGERPON_TEAL_MASK]             = OGERPON_SPECIES_INFO(Teal,        Mask,     TYPE_GRASS, ABILITY_DEFIANT,                        BODY_COLOR_GREEN, 1, FALSE),
    [SPECIES_OGERPON_WELLSPRING_MASK]       = OGERPON_SPECIES_INFO(Wellspring,  Mask,     TYPE_WATER, ABILITY_WATER_ABSORB,                   BODY_COLOR_BLUE,  0, FALSE),
    [SPECIES_OGERPON_HEARTHFLAME_MASK]      = OGERPON_SPECIES_INFO(Hearthflame, Mask,     TYPE_FIRE,  ABILITY_MOLD_BREAKER,                   BODY_COLOR_RED,   0, FALSE),
    [SPECIES_OGERPON_CORNERSTONE_MASK]      = OGERPON_SPECIES_INFO(Cornerstone, Mask,     TYPE_ROCK,  ABILITY_STURDY,                         BODY_COLOR_GRAY,  0, FALSE),
#if P_TERA_FORMS
    [SPECIES_OGERPON_TEAL_MASK_TERA]        = OGERPON_SPECIES_INFO(Teal,        MaskTera, TYPE_GRASS, ABILITY_EMBODY_ASPECT_TEAL_MASK,        BODY_COLOR_GREEN, 1, TRUE),
    [SPECIES_OGERPON_WELLSPRING_MASK_TERA]  = OGERPON_SPECIES_INFO(Wellspring,  MaskTera, TYPE_WATER, ABILITY_EMBODY_ASPECT_WELLSPRING_MASK,  BODY_COLOR_BLUE,  0, TRUE),
    [SPECIES_OGERPON_HEARTHFLAME_MASK_TERA] = OGERPON_SPECIES_INFO(Hearthflame, MaskTera, TYPE_FIRE,  ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK, BODY_COLOR_RED,   0, TRUE),
    [SPECIES_OGERPON_CORNERSTONE_MASK_TERA] = OGERPON_SPECIES_INFO(Cornerstone, MaskTera, TYPE_ROCK,  ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK, BODY_COLOR_GRAY,  0, TRUE),
>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
#endif //P_TERA_FORMS

#endif //P_FAMILY_OGERPON

<<<<<<< HEAD
=======
#if P_FAMILY_GOUGING_FIRE
    [SPECIES_GOUGING_FIRE] =
    {
        .baseHP        = 105,
        .baseAttack    = 115,
        .baseDefense   = 121,
        .baseSpeed     = 91,
        .baseSpAttack  = 65,
        .baseSpDefense = 93,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Defense = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("GouginFire", "Gouging Fire"),
        .cryId = CRY_GOUGING_FIRE,
        .natDexNum = NATIONAL_DEX_GOUGING_FIRE,
        .categoryName = _("Paradox"),
        .height = 35,
        .weight = 5900,
        .description = COMPOUND_STRING(
            "There are scant few reports of\n"
            "this creature being sighted.\n"
            "One short video shows it rampaging,\n"
            "and spouting pillars of flame."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_GougingFire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_GougingFire,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GougingFire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GougingFire,
        .shinyPalette = gMonShinyPalette_GougingFire,
        .iconSprite = gMonIcon_GougingFire,
        .iconPalIndex = 5,
        FOOTPRINT(GougingFire)
        .isParadox = TRUE,
        .levelUpLearnset = sGougingFireLevelUpLearnset,
        .teachableLearnset = sGougingFireTeachableLearnset,
    },
#endif //P_FAMILY_GOUGING_FIRE

#if P_FAMILY_RAGING_BOLT
    [SPECIES_RAGING_BOLT] =
    {
        .baseHP        = 125,
        .baseAttack    = 73,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 137,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("RagingBolt", "Raging Bolt"),
        .cryId = CRY_RAGING_BOLT,
        .natDexNum = NATIONAL_DEX_RAGING_BOLT,
        .categoryName = _("Paradox"),
        .height = 52,
        .weight = 4800,
        .description = COMPOUND_STRING(
            "It bears resemblance to a Pokémon\n"
            "that became a hot topic for a short\n"
            "while after a paranomal magazine\n"
            "touted it as Raikou's ancestor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_RagingBolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RagingBolt,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RagingBolt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RagingBolt,
        .shinyPalette = gMonShinyPalette_RagingBolt,
        .iconSprite = gMonIcon_RagingBolt,
        .iconPalIndex = 2,
        FOOTPRINT(RagingBolt)
        .isParadox = TRUE,
        .levelUpLearnset = sRagingBoltLevelUpLearnset,
        .teachableLearnset = sRagingBoltTeachableLearnset,
    },
#endif //P_FAMILY_RAGING_BOLT

#if P_FAMILY_IRON_BOULDER
    [SPECIES_IRON_BOULDER] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 124,
        .baseSpAttack  = 68,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_ROCK, TYPE_PSYCHIC),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Speed = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("IronBouldr", "Iron Boulder"),
        .cryId = CRY_IRON_BOULDER,
        .natDexNum = NATIONAL_DEX_IRON_BOULDER,
        .categoryName = _("Paradox"),
        .height = 15,
        .weight = 1625,
        .description = COMPOUND_STRING(
            "It was named after a mysterious\n"
            "object recorded in an old book.\n"
            "Its body seems to be metallic."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 336,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_IronBoulder,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_IronBoulder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronBoulder,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronBoulder,
        .shinyPalette = gMonShinyPalette_IronBoulder,
        .iconSprite = gMonIcon_IronBoulder,
        .iconPalIndex = 5,
        FOOTPRINT(IronBoulder)
        .isParadox = TRUE,
        .levelUpLearnset = sIronBoulderLevelUpLearnset,
        .teachableLearnset = sIronBoulderTeachableLearnset,
    },
#endif //P_FAMILY_IRON_BOULDER

#if P_FAMILY_IRON_CROWN
    [SPECIES_IRON_CROWN] =
    {
        .baseHP        = 90,
        .baseAttack    = 72,
        .baseDefense   = 100,
        .baseSpeed     = 98,
        .baseSpAttack  = 122,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 10,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Iron Crown"),
        .cryId = CRY_IRON_CROWN,
        .natDexNum = NATIONAL_DEX_IRON_CROWN,
        .categoryName = _("Paradox"),
        .height = 16,
        .weight = 1560,
        .description = COMPOUND_STRING(
            "It resembles a mysterious object\n"
            "introduced in a paranormal magazine\n"
            "as a cutting-edge weapon\n"
            "shaped like Cobalion."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_IronCrown,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_IronCrown,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronCrown,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronCrown,
        .shinyPalette = gMonShinyPalette_IronCrown,
        .iconSprite = gMonIcon_IronCrown,
        .iconPalIndex = 3,
        FOOTPRINT(IronCrown)
        .isParadox = TRUE,
        .levelUpLearnset = sIronCrownLevelUpLearnset,
        .teachableLearnset = sIronCrownTeachableLearnset,
    },
#endif //P_FAMILY_IRON_CROWN

#if P_FAMILY_TERAPAGOS
    [SPECIES_TERAPAGOS_NORMAL] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 60,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 90,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERA_SHIFT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Tera"),
        .height = 2,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Terapagos protects itself using its\n"
            "power to transform energy into hard\n"
            "crystals. This Pokémon is the source\n"
            "of the Terastal phenomenon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosNormal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TerapagosNormal,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_TerapagosNormal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosNormal,
        .shinyPalette = gMonShinyPalette_TerapagosNormal,
        .iconSprite = gMonIcon_TerapagosNormal,
        .iconPalIndex = 0,
        FOOTPRINT(TerapagosNormal)
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },

    [SPECIES_TERAPAGOS_TERASTAL] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 110,
        .baseSpeed     = 85,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 120,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERA_SHELL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Tera"),
        .height = 3,
        .weight = 160,
        .description = COMPOUND_STRING(
            "The shell is made of crystallized\n"
            "Terastal energy. When struck by a move,\n"
            "this shell absorbs the move's energy\n"
            "and transfers it to Terapagos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosTerastal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_TerapagosTerastal,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_TerapagosTerastal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosTerastal,
        .shinyPalette = gMonShinyPalette_TerapagosTerastal,
        .iconSprite = gMonIcon_TerapagosTerastal,
        .iconPalIndex = 0,
        FOOTPRINT(TerapagosTerastal)
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },

    [SPECIES_TERAPAGOS_STELLAR] =
    {
        .baseHP        = 160,
        .baseAttack    = 105,
        .baseDefense   = 110,
        .baseSpeed     = 85,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 140,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERAFORM_ZERO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Tera"),
        .height = 17,
        .weight = 770,
        .description = COMPOUND_STRING(
            "An old expedition journal describes the\n"
            "sight of this Pokémon buried in the,\n"
            "depths of the earth as resembling a\n"
            "planet floating in space."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosStellar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TerapagosStellar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TerapagosStellar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosStellar,
        .shinyPalette = gMonShinyPalette_TerapagosStellar,
        .iconSprite = gMonIcon_TerapagosStellar,
        .iconPalIndex = 0,
        FOOTPRINT(TerapagosStellar)
        .isLegendary = TRUE,
        .isTeraForm = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },
#endif //P_FAMILY_TERAPAGOS

#if P_FAMILY_PECHARUNT
    [SPECIES_PECHARUNT] =
    {
        .baseHP        = 88,
        .baseAttack    = 88,
        .baseDefense   = 160,
        .baseSpeed     = 88,
        .baseSpAttack  = 88,
        .baseSpDefense = 88,
        .types = MON_TYPES(TYPE_POISON, TYPE_GHOST),
        .catchRate = 3,
        .expYield = 300,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POISON_PUPPETEER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pecharunt"),
        .cryId = CRY_PECHARUNT,
        .natDexNum = NATIONAL_DEX_PECHARUNT,
        .categoryName = _("Subjugation"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It feeds others toxic mochi that\n"
            "draw out desires and capabilities.\n"
            "Those who eat the mochi fall under\n"
            "Pecharunt's control, chained to its will."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Pecharunt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Pecharunt,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pecharunt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pecharunt,
        .shinyPalette = gMonShinyPalette_Pecharunt,
        .iconSprite = gMonIcon_Pecharunt,
        .iconPalIndex = 0,
        FOOTPRINT(Pecharunt)
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sPecharuntLevelUpLearnset,
        .teachableLearnset = sPecharuntTeachableLearnset,
    },
#endif //P_FAMILY_PECHARUNT

>>>>>>> a2685d0d087acd9e90fd9195b4bc398627dd4371
#ifdef __INTELLISENSE__
};
#endif