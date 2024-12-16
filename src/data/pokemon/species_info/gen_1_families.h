#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_BULBASAUR
    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PYROMANIAC },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bulbasaur"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BULBASAUR,
        .categoryName = _("Seed"),
        .height = 7,
        .weight = 69,
        .description = COMPOUND_STRING(
            "Bulbasaur can be seen napping in bright\n"
            "sunlight. There is a seed on its back.\n"
            "By soaking up the sun's rays, the seed\n"
            "grows progressively larger."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bulbasaur, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Bulbasaur,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Bulbasaur, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Bulbasaur),
        ICON(Bulbasaur, 4),
        .footprint = gMonFootprint_Bulbasaur,
        LEARNSETS(Bulbasaur),
        OVERWORLD(
            sPicTable_Bulbasaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bulbasaur,
            gShinyOverworldPalette_Bulbasaur
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_IVYSAUR}),  
        
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 63,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ivysaur"),
        .cryId = CRY_IVYSAUR,
        .natDexNum = NATIONAL_DEX_IVYSAUR,
        .categoryName = _("Seed"),
        .height = 10,
        .weight = 130,
        .description = COMPOUND_STRING(
            "To support its bulb, Ivysaur's legs\n"
            "grow sturdy. If it spends more time lying in\n"
            "the sunlight, the bud will soon bloom into\n"
            "a large flower."),
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ivysaur, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Ivysaur,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Ivysaur, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Ivysaur),
        ICON(Ivysaur, 4),
        .footprint = gMonFootprint_Ivysaur,
        LEARNSETS(Ivysaur),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_VENUSAUR}),
              OVERWORLD(
            sPicTable_Ivysaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ivysaur,
            gShinyOverworldPalette_Ivysaur
        )
    },

#define VENUSAUR_MISC_INFO                                                  \
        .types = { TYPE_GRASS, TYPE_POISON },                               \
        .catchRate = 45,                                                    \
        .evYield_SpAttack = 2,                                              \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },                \
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .speciesName = _("Venusaur"),                                       \
        .natDexNum = NATIONAL_DEX_VENUSAUR,                                 \
        .categoryName = _("Seed"),                                          \
        .footprint = gMonFootprint_Venusaur,                                \
        LEARNSETS(Venusaur),                                                \
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,                  \
        .formChangeTable = sVenusaurFormChangeTable

    [SPECIES_VENUSAUR] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .cryId = CRY_VENUSAUR,
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Venusaur's flower is said to take on vivid\n"
            "colors if it gets plenty of nutrition and\n"
            "sunlight. The flower's aroma soothes the\n"
            "emotions of people."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(Venusaur, 64, 64),
        FRONT_PIC_FEMALE(Venusaur, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Venusaur,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Venusaur, 64, 48),
        BACK_PIC_FEMALE(Venusaur, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Venusaur),
        ICON(Venusaur, 4),
                OVERWORLD(
            sPicTable_Venusaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venusaur,
            gShinyOverworldPalette_Venusaur
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_VENUSAUR_MEGA] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .expYield = 281,
        .abilities = { ABILITY_THICK_FAT, ABILITY_THICK_FAT, ABILITY_THICK_FAT },
        .cryId = CRY_VENUSAUR_MEGA,
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING(
            "In order to support its flower, which\n"
            "has grown larger due to Mega Evolution,\n"
            "its back and legs have become stronger."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_VenusaurMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(VenusaurMega),
        ICON(VenusaurMega, 4),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_VENUSAUR_GIGANTAMAX] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .cryId = CRY_VENUSAUR,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Spits big amounts of pollen like a volcano.\n"
            "Breathing too much of it causes fainting.\n"
            "In battle, it swings around two thick vines\n"
            "that can easily topple 10-story buildings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_VenusaurGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurGigantamax, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VenusaurGigantamax),
        ICON(VenusaurGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charmander"),
        .cryId = CRY_CHARMANDER,
        .natDexNum = NATIONAL_DEX_CHARMANDER,
        .categoryName = _("Lizard"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The flame that burns at the tip of its\n"
            "tail is an indication of its emotions.\n"
            "The flame wavers when Charmander is\n"
            "happy, and blazes when it is enraged."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Charmander, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Charmander,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Charmander, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Charmander),
        ICON(Charmander, 0),
        .footprint = gMonFootprint_Charmander,
        LEARNSETS(Charmander),
               OVERWORLD(
            sPicTable_Charmander,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmander,
            gShinyOverworldPalette_Charmander
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CHARMELEON}),
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charmeleon"),
        .cryId = CRY_CHARMELEON,
        .natDexNum = NATIONAL_DEX_CHARMELEON,
        .categoryName = _("Flame"),
        .height = 11,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Without pity, its sharp claws destroy foes.\n"
            "If it encounters a strong enemy, it\n"
            "becomes agitated, and the flame on its\n"
            "tail flares with a bluish white color."),
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Charmeleon, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Charmeleon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Charmeleon, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Charmeleon),
        ICON(Charmeleon, 0),
        .footprint = gMonFootprint_Charmeleon,
        LEARNSETS(Charmeleon),
                OVERWORLD(
            sPicTable_Charmeleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmeleon,
            gShinyOverworldPalette_Charmeleon
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHARIZARD}),
    },

#define CHARIZARD_MISC_INFO                                             \
        .catchRate = 45,                                                \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },           \
        .speciesName = _("Charizard"),                                  \
        .natDexNum = NATIONAL_DEX_CHARIZARD,                            \
        .categoryName = _("Flame"),                                     \
        .footprint = gMonFootprint_Charizard,                           \
        LEARNSETS(Charizard),                                           \
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,             \
        .formChangeTable = sCharizardFormChangeTable

    [SPECIES_CHARIZARD] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 240,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD,
        .height = 17,
        .weight = 905,
        .description = COMPOUND_STRING(
            "A Charizard flies about in search of\n"
            "strong opponents. It breathes intense\n"
            "flames that can melt any material. However,\n"
            "it will never torch a weaker foe."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(Charizard, 64, 64),
                OVERWORLD(
            sPicTable_Charizard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charizard,
            gShinyOverworldPalette_Charizard
        )
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Charizard,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Charizard, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Charizard),
        ICON(Charizard, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_DRAGON },
        .expYield = 285,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .cryId = CRY_CHARIZARD_MEGA_X,
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "The overwhelming power that fills its\n"
            "entire body causes it to turn black\n"
            "and creates intense blue flames."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaX, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaX, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(CharizardMegaX),
        ICON(CharizardMegaX, 0),
        .isMegaEvolution = TRUE,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 285,
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD_MEGA_Y,
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "Its bond with its Trainer is the source\n"
            "of its power. It boasts speed and\n"
            "maneuverability greater than that of a\n"
            "jet fighter."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaY, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaY, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CharizardMegaY),
        ICON(CharizardMegaY, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GIGANTAMAX] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 240,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD,
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flame inside its body burns\n"
            "hotter than 3,600 degrees Fahrenheit.\n"
            "When Charizard roars, that\n"
            "temperature climbs even higher."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CharizardGigantamax),
        ICON(CharizardGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 44,
        .baseAttack    = 48,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Squirtle"),
        .cryId = CRY_SQUIRTLE,
        .natDexNum = NATIONAL_DEX_SQUIRTLE,
        .categoryName = _("Tiny Turtle"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "Its shell is not just for protection.\n"
            "Its rounded shape and the grooves on its\n"
            "surface minimize resistance in water,\n"
            "enabling Squirtle to swim at high speeds."),
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Squirtle, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Squirtle,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Squirtle, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Squirtle),
        ICON(Squirtle, 0),
        .footprint = gMonFootprint_Squirtle,
        LEARNSETS(Squirtle),
                OVERWORLD(
            sPicTable_Squirtle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Squirtle,
            gShinyOverworldPalette_Squirtle
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_WARTORTLE}),
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 59,
        .baseAttack    = 63,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wartortle"),
        .cryId = CRY_WARTORTLE,
        .natDexNum = NATIONAL_DEX_WARTORTLE,
        .categoryName = _("Turtle"),
        .height = 10,
        .weight = 225,
        .description = COMPOUND_STRING(
            "Its large tail is covered with rich, thick\n"
            "fur that deepens in color with age.\n"
            "The scratches on its shell are evidence\n"
            "of this Pokémon's toughness in battle."),
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wartortle, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Wartortle,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Wartortle, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Wartortle),
        ICON(Wartortle, 2),
        .footprint = gMonFootprint_Wartortle,
        LEARNSETS(Wartortle),
        OVERWORLD(
            sPicTable_Wartortle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wartortle,
            gShinyOverworldPalette_Wartortle
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLASTOISE}),
    },

#define BLASTOISE_MISC_INFO                                             \
        .types = { TYPE_WATER, TYPE_WATER },                            \
        .catchRate = 45,                                                \
        .evYield_SpDefense = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },          \
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .speciesName = _("Blastoise"),                                  \
        .natDexNum = NATIONAL_DEX_BLASTOISE,                            \
        .categoryName = _("Shellfish"),                                 \
        .footprint = gMonFootprint_Blastoise,                           \
        LEARNSETS(Blastoise),                                           \
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,             \
        .formChangeTable = sBlastoiseFormChangeTable

    [SPECIES_BLASTOISE] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .cryId = CRY_BLASTOISE,
        .height = 16,
        .weight = 855,
        .description = COMPOUND_STRING(
            "The waterspouts that protrude from its\n"
            "shell are highly accurate. Their bullets of\n"
            "water can precisely nail tin cans from\n"
            "a distance of over 160 feet."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Blastoise, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Blastoise,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 20,
        BACK_PIC(Blastoise, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Blastoise),
           OVERWORLD(
            sPicTable_Blastoise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blastoise,
            gShinyOverworldPalette_Blastoise
        )
        ICON(Blastoise, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLASTOISE_MEGA] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .expYield = 284,
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .cryId = CRY_BLASTOISE_MEGA,
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING(
            "The cannon on its back is as powerful\n"
            "as a tank gun. Its tough legs and back\n"
            "enable it to withstand the recoil from\n"
            "firing the cannon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlastoiseMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(BlastoiseMega),
        ICON(BlastoiseMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GIGANTAMAX] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .cryId = CRY_BLASTOISE,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "It's not very good at precision\n"
            "shooting. When attacking, it just fires\n"
            "its 31 cannons over and over and\n"
            "over."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlastoiseGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(BlastoiseGigantamax),
        ICON(BlastoiseGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 39,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Caterpie"),
        .cryId = CRY_CATERPIE,
        .natDexNum = NATIONAL_DEX_CATERPIE,
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 29,
        .description = COMPOUND_STRING(
            "Its voracious appetite compels it to\n"
            "devour leaves bigger than itself without\n"
            "hesitation. It releases a terribly strong\n"
            "odor from its antennae."),
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Caterpie, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Caterpie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Caterpie, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Caterpie),
        ICON(Caterpie, 1),
        .footprint = gMonFootprint_Caterpie,
        LEARNSETS(Caterpie),
                OVERWORLD(
            sPicTable_Caterpie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Caterpie,
            gShinyOverworldPalette_Caterpie
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_METAPOD}),
    },

    [SPECIES_METAPOD] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Metapod"),
        .cryId = CRY_METAPOD,
        .natDexNum = NATIONAL_DEX_METAPOD,
        .categoryName = _("Cocoon"),
        .height = 7,
        .weight = 99,
        .description = COMPOUND_STRING(
            "Its shell is as hard as an iron slab.\n"
            "A Metapod does not move very much\n"
            "because it is preparing its soft innards\n"
            "for evolution inside the shell."),
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Metapod, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Metapod,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Metapod, 40, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Metapod),
        ICON(Metapod, 1),
        .footprint = gMonFootprint_Metapod,
        LEARNSETS(Metapod),
                OVERWORLD(
            sPicTable_Metapod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Metapod,
            gShinyOverworldPalette_Metapod
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BUTTERFREE}),
    },

#define BUTTERFREE_MISC_INFO                                                        \
        .baseHP        = 60,                                                        \
        .baseAttack    = 45,                                                        \
        .baseDefense   = 50,                                                        \
        .baseSpeed     = 70,                                                        \
        .baseSpDefense = 80,                                                        \
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,                        \
        .types = { TYPE_BUG, TYPE_FLYING },                                         \
        .catchRate = 45,                                                            \
        .expYield = 178,                                                            \
        .evYield_SpAttack = 2,                                                      \
        .evYield_SpDefense = 1,                                                     \
        .itemRare = ITEM_SILVER_POWDER,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 15,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },                              \
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .speciesName = _("Butterfree"),                                             \
        .cryId = CRY_BUTTERFREE,                                                    \
        .natDexNum = NATIONAL_DEX_BUTTERFREE,                                       \
        .categoryName = _("Butterfly"),                                             \
        .footprint = gMonFootprint_Butterfree,                                      \
        LEARNSETS(Butterfree),                                                      \
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,                        \
        .formChangeTable = sButterfreeFormChangeTable

    [SPECIES_BUTTERFREE] =
    {
        BUTTERFREE_MISC_INFO,
        .height = 11,
        .weight = 320,
        .description = COMPOUND_STRING(
            "It has a superior ability to search for\n"
            "delicious honey from flowers. It can seek,\n"
            "extract, and carry honey from flowers\n"
            "blooming over six miles away."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Butterfree, 64, 56),
        FRONT_PIC_FEMALE(Butterfree, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Butterfree,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 12,
        BACK_PIC(Butterfree, 64, 56),
        BACK_PIC_FEMALE(Butterfree, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Butterfree),
        ICON(Butterfree, 0),
             OVERWORLD(
            sPicTable_Butterfree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Butterfree,
            gShinyOverworldPalette_Butterfree
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GIGANTAMAX] =
    {
        BUTTERFREE_MISC_INFO,
        .height = 170,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Once it has opponents trapped in a\n"
            "tornado that could blow away a 10-\n"
            "ton truck, it finishes them off with\n"
            "its poisonous scales."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ButterfreeGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ButterfreeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(ButterfreeGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ButterfreeGigantamax),
        ICON(ButterfreeGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 255,
        .expYield = 39,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Weedle"),
        .cryId = CRY_WEEDLE,
        .natDexNum = NATIONAL_DEX_WEEDLE,
        .categoryName = _("Hairy Bug"),
        .height = 3,
        .weight = 32,
        .description = COMPOUND_STRING(
            "A Weedle has an extremely acute sense\n"
            "of smell. It distinguishes its favorite\n"
            "kinds of leaves from those it dislikes by\n"
            "sniffing with its big red nose."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weedle, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Weedle,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        BACK_PIC(Weedle, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Weedle),
        ICON(Weedle, 2),
        .footprint = gMonFootprint_Weedle,
        LEARNSETS(Weedle),
                OVERWORLD(
            sPicTable_Weedle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weedle,
            gShinyOverworldPalette_Weedle
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_KAKUNA}),
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kakuna"),
        .cryId = CRY_KAKUNA,
        .natDexNum = NATIONAL_DEX_KAKUNA,
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It remains virtually immobile while it\n"
            "clings to a tree. However, on the inside,\n"
            "it busily prepares for evolution. This is\n"
            "evident from how hot its shell becomes."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kakuna, 24, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kakuna,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .frontAnimDelay = 20,
        BACK_PIC(Kakuna, 32, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Kakuna),
        ICON(Kakuna, 2),
        .footprint = gMonFootprint_Kakuna,
        LEARNSETS(Kakuna),
      OVERWORLD(
            sPicTable_Kakuna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kakuna,
            gShinyOverworldPalette_Kakuna
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEEDRILL}),
    },

#define BEEDRILL_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

#define BEEDRILL_MISC_INFO                                  \
        .types = { TYPE_BUG, TYPE_POISON },                 \
        .catchRate = 45,                                    \
        .evYield_Attack = 2,                                \
        .evYield_SpDefense = 1,                             \
        .itemRare = ITEM_POISON_BARB,                       \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },      \
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .speciesName = _("Beedrill"),                       \
        .natDexNum = NATIONAL_DEX_BEEDRILL,                 \
        .categoryName = _("Poison Bee"),                    \
        .footprint = gMonFootprint_Beedrill,                \
        LEARNSETS(Beedrill),                                \
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,  \
        .formChangeTable = sBeedrillFormChangeTable

    [SPECIES_BEEDRILL] =
    {
        BEEDRILL_MISC_INFO,
        .baseHP        = 65,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .baseAttack    = BEEDRILL_ATTACK,
        .expYield = 178,
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_SNIPER },
        .cryId = CRY_BEEDRILL,
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "A Beedrill is extremely territorial.\n"
            "For safety reasons, no one should ever\n"
            "approach its nest. If angered, they will\n"
            "attack in a swarm."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beedrill, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Beedrill,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Beedrill, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Beedrill),
        ICON(Beedrill, 2),
              OVERWORLD(
            sPicTable_Beedrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beedrill,
            gShinyOverworldPalette_Beedrill
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BEEDRILL_MEGA] =
    {
        BEEDRILL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = BEEDRILL_ATTACK + 60,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .expYield = 223,
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .cryId = CRY_BEEDRILL_MEGA,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Its legs have become poison stingers.\n"
            "It stabs its prey repeatedly with the\n"
            "stingers on its limbs, dealing the final\n"
            "blow with the stinger on its rear."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BeedrillMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_BeedrillMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(BeedrillMega, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(BeedrillMega),
        ICON(BeedrillMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
    [SPECIES_PIDGEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 56,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "It has an extremely sharp sense of\n"
            "direction. It can unerringly return home to\n"
            "its nest, however far it may be removed\n"
            "from its familiar surroundings."),
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgey, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pidgey,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Pidgey, 56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Pidgey),
        ICON(Pidgey, 0),
        .footprint = gMonFootprint_Pidgey,
        LEARNSETS(Pidgey),
              OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PIDGEOTTO}),
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgeotto"),
        .cryId = CRY_PIDGEOTTO,
        .natDexNum = NATIONAL_DEX_PIDGEOTTO,
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING(
            "This Pokémon flies around, patrolling its\n"
            "large territory. If its living space is\n"
            "violated, it shows no mercy in thoroughly\n"
            "punishing the foe with its sharp claws."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeotto, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Pidgeotto,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        BACK_PIC(Pidgeotto, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Pidgeotto),
        ICON(Pidgeotto, 0),
        .footprint = gMonFootprint_Pidgeotto,
        LEARNSETS(Pidgeotto),
                OVERWORLD(
            sPicTable_Pidgeotto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeotto,
            gShinyOverworldPalette_Pidgeotto
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PIDGEOT}),
    },

#define PIDGEOT_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

#define PIDGEOT_MISC_INFO                                   \
        .types = { TYPE_NORMAL, TYPE_FLYING },              \
        .catchRate = 45,                                    \
        .evYield_Speed = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },\
        .bodyColor = BODY_COLOR_BROWN,                      \
        .speciesName = _("Pidgeot"),                        \
        .natDexNum = NATIONAL_DEX_PIDGEOT,                  \
        .categoryName = _("Bird"),                          \
        .footprint = gMonFootprint_Pidgeot,                 \
        LEARNSETS(Pidgeot),                                 \
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,   \
        .formChangeTable = sPidgeotFormChangeTable

    [SPECIES_PIDGEOT] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .baseSpeed     = PIDGEOT_SPEED,
        .expYield = 216,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .cryId = CRY_PIDGEOT,
        .height = 15,
        .weight = 395,
        .description = COMPOUND_STRING(
            "This Pokémon has gorgeous, glossy\n"
            "feathers. Many Trainers are so captivated\n"
            "by the beautiful feathers on its head that\n"
            "they choose Pidgeot as their Pokémon."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeot, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pidgeot,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        BACK_PIC(Pidgeot, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Pidgeot),
        ICON(Pidgeot, 0),
                OVERWORLD(
            sPicTable_Pidgeot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeot,
            gShinyOverworldPalette_Pidgeot
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PIDGEOT_MEGA] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = PIDGEOT_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = 261,
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .cryId = CRY_PIDGEOT_MEGA,
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING(
            "With its muscular strength now greatly\n"
            "increased, it can fly continuously\n"
            "for two weeks without resting."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PidgeotMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PidgeotMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(PidgeotMega, 64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(PidgeotMega),
        ICON(PidgeotMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
#define RATTATA_FAMILY_MISC_INFO                            \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define RATTATA_MISC_INFO                                   \
        .baseHP        = 30,                                \
        .baseAttack    = 56,                                \
        .baseDefense   = 35,                                \
        .baseSpeed     = 72,                                \
        .baseSpAttack  = 25,                                \
        .baseSpDefense = 35,                                \
        .catchRate = 255,                                   \
        .expYield = 51,                                     \
        .evYield_Speed = 1,                                 \
        .speciesName = _("Rattata"),                        \
        .cryId = CRY_RATTATA,                               \
        .natDexNum = NATIONAL_DEX_RATTATA,                  \
        .categoryName = _("Mouse"),                         \
        .footprint = gMonFootprint_Rattata,                 \
        .formSpeciesIdTable = sRattataFormSpeciesIdTable

#define RATICATE_MISC_INFO                  \
        .catchRate = 127,                   \
        .expYield = 145,                    \
        .evYield_Speed = 2,                 \
        .speciesName = _("Raticate"),       \
        .cryId = CRY_RATICATE,              \
        .natDexNum = NATIONAL_DEX_RATICATE, \
        .categoryName = _("Mouse"),         \
        .height = 7,                        \
        .footprint = gMonFootprint_Raticate,\
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable

    [SPECIES_RATTATA] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATTATA_MISC_INFO,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PURPLE,
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "A Rattata is cautious in the extreme.\n"
            "Even while it is asleep, it constantly\n"
            "moves its ears and listens for danger.\n"
            "It will make its nest anywhere."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rattata, 40, 40),
        FRONT_PIC_FEMALE(Rattata, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Rattata,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Rattata, 64, 56),
        BACK_PIC_FEMALE(Rattata, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Rattata),
        ICON(Rattata, 2),
        LEARNSETS(Rattata),
               OVERWORLD(
            sPicTable_Rattata,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rattata,
            gShinyOverworldPalette_Rattata
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_RATICATE}),
    },

    [SPECIES_RATICATE] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATICATE_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 185,
        .description = COMPOUND_STRING(
            "A Raticate's sturdy fangs grow steadily.\n"
            "To keep them ground down, it gnaws on\n"
            "rocks and logs. It may even chew on the\n"
            "walls of houses."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raticate, 64, 56),
        FRONT_PIC_FEMALE(Raticate, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Raticate,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Raticate, 64, 48),
        BACK_PIC_FEMALE(Raticate, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Raticate),
        ICON(Raticate, 2),
        LEARNSETS(Raticate),
                OVERWORLD(
            sPicTable_Raticate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raticate,
            gShinyOverworldPalette_Raticate
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_RATTATA_ALOLAN] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATTATA_MISC_INFO,
        .types = { TYPE_DARK, TYPE_NORMAL },
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING(
            "With its incisors, it gnaws through doors\n"
            "and infiltrates people's homes.\n"
            "Then, with a twitch of its whiskers,\n"
            "it steals whatever food it finds."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RattataAlolan, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_RattataAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RattataAlolan, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RattataAlolan),
        ICON(RattataAlolan, 2),
        LEARNSETS(RattataAlolan),       
        OVERWORLD(
            sPicTable_RattataAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RattataAlolan,
            gShinyOverworldPalette_RattataAlolan
        )
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 20, SPECIES_RATICATE_ALOLAN}),
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATICATE_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_NORMAL },
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It forms a group of Rattata, which it \n"
            "assumes command of. Each group\n"
            "has its own territory, and disputes\n"
            "over food happen often."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RaticateAlolan, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RaticateAlolan, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RaticateAlolan),
        ICON(RaticateAlolan, 2),
        LEARNSETS(RaticateAlolan),
            OVERWORLD(
            sPicTable_RaticateAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaticateAlolan,
            gShinyOverworldPalette_RaticateAlolan
        )
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
    [SPECIES_SPEAROW] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Spearow"),
        .cryId = CRY_SPEAROW,
        .natDexNum = NATIONAL_DEX_SPEAROW,
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Its loud cry can be heard over half a mile\n"
            "away. If its high, keening cry is heard\n"
            "echoing all around, it is a sign that they\n"
            "are warning each other of danger."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spearow, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Spearow,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Spearow, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Spearow),
        ICON(Spearow, 0),
        .footprint = gMonFootprint_Spearow,
        LEARNSETS(Spearow),
                OVERWORLD(
            sPicTable_Spearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spearow,
            gShinyOverworldPalette_Spearow
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_FEAROW}),
    },

    [SPECIES_FEAROW] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Fearow"),
        .cryId = CRY_FEAROW,
        .natDexNum = NATIONAL_DEX_FEAROW,
        .categoryName = _("Beak"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "Its long neck and elongated beak are\n"
            "ideal for catching prey in soil or water.\n"
            "It deftly moves this extended and skinny\n"
            "beak to pluck prey."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fearow, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Fearow,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        BACK_PIC(Fearow, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Fearow),
        ICON(Fearow, 0),
        .footprint = gMonFootprint_Fearow,
        LEARNSETS(Fearow),
               OVERWORLD(
            sPicTable_Fearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Fearow,
            gShinyOverworldPalette_Fearow
        )
    },
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ekans"),
        .cryId = CRY_EKANS,
        .natDexNum = NATIONAL_DEX_EKANS,
        .categoryName = _("Snake"),
        .height = 20,
        .weight = 69,
        .description = COMPOUND_STRING(
            "An Ekans curls itself up in a spiral while\n"
            "it rests. This position allows it to quickly\n"
            "respond to an enemy from any direction\n"
            "with a threat from its upraised head."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ekans, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ekans,
        .frontAnimId = ANIM_V_STRETCH,
                OVERWORLD(
            sPicTable_Ekans,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ekans,
            gShinyOverworldPalette_Ekans
        )
        .frontAnimDelay = 30,
        BACK_PIC(Ekans, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Ekans),
        ICON(Ekans, 2),
        .footprint = gMonFootprint_Ekans,
        LEARNSETS(Ekans),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARBOK}),
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 79,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Arbok"),
        .cryId = CRY_ARBOK,
        .natDexNum = NATIONAL_DEX_ARBOK,
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = COMPOUND_STRING(
            "This Pokémon has a terrifically strong\n"
            "constricting power. It can even flatten\n"
            "steel oil drums. Once it wraps its body\n"
            "around its foe, escaping is impossible."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Arbok, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arbok,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Arbok, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Arbok),
        ICON(Arbok, 2),
        .footprint = gMonFootprint_Arbok,
        LEARNSETS(Arbok),
                OVERWORLD(
            sPicTable_Arbok,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Arbok,
            gShinyOverworldPalette_Arbok
        )
    },
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
#define PICHU_MISC_INFO                                                                 \
        .baseHP        = 20,                                                            \
        .baseAttack    = 40,                                                            \
        .baseDefense   = 15,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 35,                                                            \
        .baseSpDefense = 35,                                                            \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },                                      \
        .catchRate = 190,                                                               \
        .expYield = 41,                                                                                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 10,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_OVERCHARGE},           \
        .bodyColor = BODY_COLOR_YELLOW,                                                 \
        .speciesName = _("Pichu"),                                                      \
        .cryId = CRY_PICHU,                                                             \
        .natDexNum = NATIONAL_DEX_PICHU,                                                \
        .categoryName = _("Tiny Mouse"),                                                \
        .height = 3,                                                                    \
        .weight = 20,                                                                   \
        .description = gPichuPokedexText,                                               \
        .pokemonScale = 508,                                                            \
        .pokemonOffset = 20,                                                            \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        .footprint = gMonFootprint_Pichu,                                               \
        LEARNSETS(Pichu),                                                               \
        .formSpeciesIdTable = sPichuFormSpeciesIdTable

    [SPECIES_PICHU] =
    {
        PICHU_MISC_INFO,
        FRONT_PIC(Pichu, 32, 40),
        .frontPicYOffset = 14,
        .evYield_Speed = 1,
        .frontAnimFrames = sAnims_Pichu,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Pichu, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Pichu),
        ICON(Pichu, 1),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}),
                               OVERWORLD(
            sPicTable_Pichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Pichu,
            gShinyOverworldPalette_Pichu,
        )
        
    },

    [SPECIES_PICHU_SPIKY_EARED] =
    {
        PICHU_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PichuSpikyEared, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PichuSpikyEared,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PichuSpikyEared, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PichuSpikyEared),
        ICON(PichuSpikyEared, 1),
                OVERWORLD(
            sPicTable_PichuSpikyEared,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PichuSpikyEared,
            gShinyOverworldPalette_PichuSpikyEared
        )
    },
#endif //P_GEN_2_CROSS_EVOS

#define PIKACHU_MISC_INFO                                                       \
        .baseHP        = 35,                                                    \
        .baseAttack    = 65,                                                    \
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,                    \
        .baseSpeed     = 90,                                                    \
        .baseSpAttack  = 50,                                                    \
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,                    \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },                              \
        .catchRate = 190,                                                       \
        .expYield = 112,                                                        \
        .itemRare = ITEM_LIGHT_BALL,                                            \
        .eggCycles = 10,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_OVERCHARGE},   \
        .bodyColor = BODY_COLOR_YELLOW,                                         \
        .speciesName = _("Pikachu"),                                            \
        .cryId = CRY_PIKACHU,                                                   \
        .natDexNum = NATIONAL_DEX_PIKACHU,                                      \
        .categoryName = _("Mouse"),                                             \
        .footprint = gMonFootprint_Pikachu,                                     \
        LEARNSETS(Pikachu),                                                     \
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable

#define PIKACHU_REGULAR_SIZE_INFO   \
        .height = 4,                \
        .weight = 60,               \
        .pokemonScale = 479,        \
        .pokemonOffset = 19,        \
        .trainerScale = 256,        \
        .trainerOffset = 0

    [SPECIES_PIKACHU] =
    {
        PIKACHU_MISC_INFO,
        PIKACHU_REGULAR_SIZE_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .description = gPikachuPokedexText,
        FRONT_PIC(Pikachu, 48, 48),
        .evYield_Speed = 2,
        FRONT_PIC_FEMALE(Pikachu, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Pikachu,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        BACK_PIC(Pikachu, 64, 56),
        BACK_PIC_FEMALE(Pikachu, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Pikachu),
        ICON(Pikachu, 2),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        ICON_FEMALE(Pikachu, 2),
    #endif
        .formChangeTable = sPikachuFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                            {EVO_ITEM, ITEM_STRANGE_SOUVENIR, SPECIES_GOROCHU}),
                                                   OVERWORLD(
            sPicTable_Pikachu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Pikachu,
            gShinyOverworldPalette_Pikachu,
        )
    },

#if P_COSPLAY_PIKACHU_FORMS
#define PIKACHU_COSPLAY_MISC_INFO                                   \
    PIKACHU_MISC_INFO,                                              \
    PIKACHU_REGULAR_SIZE_INFO,                                      \
    .genderRatio = MON_FEMALE,                                      \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
    .description = gPikachuPokedexText

    [SPECIES_PIKACHU_COSPLAY]   =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuCosplay, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuCosplay, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuCosplay),
        ICON(PikachuCosplay, 2),
    },

    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuRockStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuRockStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuRockStar),
        ICON(PikachuRockStar, 1),
    },

    [SPECIES_PIKACHU_BELLE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuBelle, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuBelle, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuBelle),
        ICON(PikachuBelle, 0),
    },

    [SPECIES_PIKACHU_POP_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuPopStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPopStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPopStar),
        ICON(PikachuPopStar, 0),
    },

    [SPECIES_PIKACHU_PH_D] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuPhD, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPhD, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPhD),
        ICON(PikachuPhD, 1),
    },

    [SPECIES_PIKACHU_LIBRE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuLibre, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuLibre, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuLibre),
        ICON(PikachuLibre, 0),
    },

#endif //P_COSPLAY_PIKACHU_FORMS

#if P_CAP_PIKACHU_FORMS

#define PIKACHU_CAP_MISC_INFO                                       \
    PIKACHU_MISC_INFO,                                              \
    PIKACHU_REGULAR_SIZE_INFO,                                      \
    .genderRatio = MON_MALE,                                        \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }

    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across many different regions."),
        FRONT_PIC(PikachuOriginalCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuOriginalCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuOriginalCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuOriginalCap),
        ICON(PikachuOriginalCap, 0),
    },

    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Hoenn region together."),
        FRONT_PIC(PikachuHoennCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuHoennCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuHoennCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuHoennCap),
        ICON(PikachuHoennCap, 0),
    },

    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Sinnoh region together."),
        FRONT_PIC(PikachuSinnohCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuSinnohCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuSinnohCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuSinnohCap),
        ICON(PikachuSinnohCap, 0),
    },

    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Unova region together."),
        FRONT_PIC(PikachuUnovaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuUnovaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuUnovaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuUnovaCap),
        ICON(PikachuUnovaCap, 0),
    },

    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Kalos region together."),
        FRONT_PIC(PikachuKalosCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuKalosCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuKalosCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuKalosCap),
        ICON(PikachuKalosCap, 0),
    },

    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Alola region together."),
        FRONT_PIC(PikachuAlolaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuAlolaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuAlolaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuAlolaCap),
        ICON(PikachuAlolaCap, 0),
    },

    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed as the two overcame\n"
            "many hardships together."),
        FRONT_PIC(PikachuPartnerCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPartnerCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPartnerCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPartnerCap),
        ICON(PikachuPartnerCap, 0),
    },

    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the world together."),
        FRONT_PIC(PikachuWorldCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuWorldCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuWorldCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuWorldCap),
        ICON(PikachuWorldCap, 0),
    },

#endif //P_CAP_PIKACHU_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GIGANTAMAX] =
    {
        PIKACHU_MISC_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .height = 210,
        .weight = 0,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .description = COMPOUND_STRING(
            "When it smashes its opponents with\n"
            "its bolt-shaped tail, it delivers a\n"
            "surge of electricity equivalent to a\n"
            "lightning strike."),
        FRONT_PIC(PikachuGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PikachuGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuGigantamax),
        ICON(PikachuGigantamax, 2),
        .formChangeTable = sPikachuFormChangeTable,
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

#define RAICHU_SPEED (P_UPDATED_STATS >= GEN_6 ? 110 : 100)

#define RAICHU_MISC_INFO                                    \
        .catchRate = 75,                                    \
        .expYield = 218,                                                                  \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 10,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },  \
        .speciesName = _("Raichu"),                         \
        .cryId = CRY_RAICHU,                                \
        .natDexNum = NATIONAL_DEX_RAICHU,                   \
        .categoryName = _("Mouse"),                         \
        .footprint = gMonFootprint_Raichu,                  \
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable

    [SPECIES_RAICHU] =
    {
        RAICHU_MISC_INFO,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .baseSpeed = 110,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_OVERCHARGE},
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 8,
        .weight = 300,
        .description = COMPOUND_STRING(
            "If it stores too much electricity, its\n"
            "behavior turns aggressive. To avoid this,\n"
            "it occasionally discharges excess energy\n"
            "and calms itself down."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .evYield_Speed = 3,
        FRONT_PIC(Raichu, 64, 64),
        FRONT_PIC_FEMALE(Raichu, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Raichu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Raichu, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Raichu),
        ICON(Raichu, 0),
        LEARNSETS(Raichu),
                               OVERWORLD(
            sPicTable_Raichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Raichu,
            gShinyOverworldPalette_Raichu,
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_RAICHU_ALOLAN] =
    {
        RAICHU_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_PSYCHIC },
        .abilities = { ABILITY_SURGE_SURFER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .isAlolanForm = TRUE,
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "It uses psychokinesis to control\n"
            "electricity. It focuses psychic energy\n"
            "into its tail and rides it like it's surfing.\n"
            "Another name for this Pokémon is 'hodad'."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RaichuAlolan, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RaichuAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(RaichuAlolan, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RaichuAlolan),
        ICON(RaichuAlolan, 2),
        LEARNSETS(RaichuAlolan),
             OVERWORLD(
            sPicTable_RaichuAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaichuAlolan,
            gShinyOverworldPalette_RaichuAlolan
        )
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
#define SANDSHREW_FAMILY_MISC_INFO                          \
        .itemRare = ITEM_GRIP_CLAW,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define SANDSHREW_MISC_INFO                                 \
        .catchRate = 255,                                   \
        .expYield = 60,                                     \
        .evYield_Defense = 1,                               \
        .speciesName = _("Sandshrew"),                      \
        .cryId = CRY_SANDSHREW,                             \
        .natDexNum = NATIONAL_DEX_SANDSHREW,                \
        .categoryName = _("Mouse"),                         \
        .footprint = gMonFootprint_Sandshrew,               \
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable, \
        SANDSHREW_FAMILY_MISC_INFO

#define SANDSLASH_MISC_INFO                                 \
        .catchRate = 90,                                    \
        .expYield = 158,                                    \
        .evYield_Defense = 2,                               \
        .speciesName = _("Sandslash"),                      \
        .cryId = CRY_SANDSLASH,                             \
        .natDexNum = NATIONAL_DEX_SANDSLASH,                \
        .categoryName = _("Mouse"),                         \
        .footprint = gMonFootprint_Sandslash,               \
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable, \
        SANDSHREW_FAMILY_MISC_INFO

    [SPECIES_SANDSHREW] =
    {
        SANDSHREW_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "When it curls up in a ball, it can make any\n"
            "attack bounce off harmlessly. Its hide has\n"
            "turned tough and solid as a result of\n"
            "living in the desert."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandshrew, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        BACK_PIC(Sandshrew, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Sandshrew),
        ICON(Sandshrew, 2),
        LEARNSETS(Sandshrew),
            OVERWORLD(
            sPicTable_Sandshrew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandshrew,
            gShinyOverworldPalette_Sandshrew
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SANDSLASH}),
    },

    [SPECIES_SANDSLASH] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It curls up in a ball to protect itself from\n"
            "enemy attacks. It also curls up to prevent\n"
            "heatstroke during the daytime when\n"
            "temperatures rise sharply."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandslash, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Sandslash, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Sandslash),
        ICON(Sandslash, 2),
        LEARNSETS(Sandslash),
              OVERWORLD(
            sPicTable_Sandslash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandslash,
            gShinyOverworldPalette_Sandslash
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        SANDSHREW_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = { TYPE_ICE, TYPE_STEEL },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Life on mountains covered with deep snow\n"
            "has granted this Pokémon a body of ice\n"
            "that's as hard as steel.\n"
            "Predators go after its soft belly."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandshrewAlolan, 40, 40),
        .frontPicYOffset = 13,
                OVERWORLD(
            sPicTable_SandshrewAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandshrewAlolan,
            gShinyOverworldPalette_SandshrewAlolan
        )        .frontAnimFrames = sAnims_SandshrewAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandshrewAlolan, 56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandshrewAlolan),
        ICON(SandshrewAlolan, 0),
        LEARNSETS(SandshrewAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_SANDSLASH_ALOLAN}),
    },

    [SPECIES_SANDSLASH_ALOLAN] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_STEEL },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It uses large, hooked claws to cut a path\n"
            "through deep snow as it runs.\n"
            "On snowy mountains, this Sandslash\n"
            "is faster than any other Pokémon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandslashAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandslashAlolan,
                OVERWORLD(
            sPicTable_SandslashAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandslashAlolan,
            gShinyOverworldPalette_SandslashAlolan
        )
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandslashAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandslashAlolan),
        ICON(SandslashAlolan, 0),
        LEARNSETS(SandslashAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("NIDORAN♀"),
        .cryId = CRY_NIDORAN_F,
        .natDexNum = NATIONAL_DEX_NIDORAN_F,
        .categoryName = _("POISON PIN"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "A female NIDORAN is the only fertile\n"
            "member of its evolutionary stage.\n"
            "As such, in the wild, they're respected\n"
            "and protected even by NIDOKING."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranF, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_NidoranF,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        BACK_PIC(NidoranF, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranF),
        ICON(NidoranF, 0),
        .footprint = gMonFootprint_NidoranF,
        LEARNSETS(NidoranF),
          OVERWORLD(
            sPicTable_NidoranF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranF,
            gShinyOverworldPalette_NidoranF
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINA}),
    },

    [SPECIES_NIDORINA] =
       { .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED},
        .abilities = {ABILITY_POISON_POINT, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("NIDORINA"),
        .cryId = CRY_NIDORINA,
        .natDexNum = NATIONAL_DEX_NIDORINA,
        .categoryName = _("POISON PIN"),
        .height = 8,
        .weight = 200,
        .description = COMPOUND_STRING(
            "NIDORINA has a gentle disposition,\n"
            "but it is perfectly capable of fighting\n"
            "back if threatened. It is very protective\n"
            "towards its clan."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidorina, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorina,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Nidorina, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Nidorina),
        ICON(Nidorina, 0),
        .footprint = gMonFootprint_Nidorina,
        LEARNSETS(Nidorina),
               OVERWORLD(
            sPicTable_Nidorina,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorina,
            gShinyOverworldPalette_Nidorina
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}),
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 90,
        #else
            .baseAttack    = 82,
        #endif
        .types = { TYPE_POISON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 227,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED},
        .abilities = {ABILITY_TOXIC_SECRETIONS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("NIDOQUEEN"),
        .cryId = CRY_NIDOQUEEN,
        .natDexNum = NATIONAL_DEX_NIDOQUEEN,
        .categoryName = _("DRILL"),
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Wild NIDOQUEEN are a true rarity, and are\n"
            "mostly evolved by TRAINERs.\n"
            "They're highly territorial, and will defend\n"
            "their perceived turf fiercely."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidoqueen, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoqueen,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Nidoqueen, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nidoqueen),
        ICON(Nidoqueen, 2),
        .footprint = gMonFootprint_Nidoqueen,
        LEARNSETS(Nidoqueen),
            OVERWORLD(
            sPicTable_Nidoqueen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoqueen,
            gShinyOverworldPalette_Nidoqueen
        )
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack    = 0,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("NIDORAN♂"),
        .cryId = CRY_NIDORAN_M,
        .natDexNum = NATIONAL_DEX_NIDORAN_M,
        .categoryName = _("POISON PIN"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "There are other species as sexually\n"
            "dimorphic as NIDORAN, but various\n"
            "factors have led scientists to catalogue\n"
            "males separately from females."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranM, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_NidoranM,
        OVERWORLD(
            sPicTable_NidoranM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranM,
            gShinyOverworldPalette_NidoranM
        )
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(NidoranM, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranM),
        ICON(NidoranM, 2),
        .footprint = gMonFootprint_NidoranM,
        LEARNSETS(NidoranM),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINO}),
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("NIDORINO"),
        .cryId = CRY_NIDORINO,
        .natDexNum = NATIONAL_DEX_NIDORINO,
        .categoryName = _("POISON PIN"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Traditionally, spotting a NIDORINO when\n"
            "pregnant is a sign that the baby will be a\n"
            "boy. The accuracy of this method is disputed,\n"
            "but the belief is still widely accepted."),
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidorino, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorino,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Nidorino, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Nidorino),
        ICON(Nidorino, 2),
        .footprint = gMonFootprint_Nidorino,
        LEARNSETS(Nidorino),
        OVERWORLD(
            sPicTable_Nidorino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorino,
            gShinyOverworldPalette_Nidorino
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}),
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 80,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 100,
        #else
            .baseAttack    = 92,
        #endif
        .types = { TYPE_POISON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 227,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TOXIC_SECRETIONS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("NIDOKING"),
        .cryId = CRY_NIDOKING,
        .natDexNum = NATIONAL_DEX_NIDOKING,
        .categoryName = _("DRILL"),
        .height = 14,
        .weight = 620,
        .description = COMPOUND_STRING(
            "NIDOKING is a fearsome POKéMON,\n"
            "capable of razing an entire village if\n"
            "angered. Fortunately, it generally steers\n"
            "clear from human settlements."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidoking, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoking,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 25,
        BACK_PIC(Nidoking, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nidoking),
        ICON(Nidoking, 2),
        .footprint = gMonFootprint_Nidoking,
        LEARNSETS(Nidoking),
         OVERWORLD(
            sPicTable_Nidoking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoking,
            gShinyOverworldPalette_Nidoking
        )
    },
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_UPDATED_TYPES >= GEN_6
    #define CLEFAIRY_FAMILY_TYPES { TYPE_FAIRY, TYPE_FAIRY }
#else
    #define CLEFAIRY_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Cleffa"),
        .cryId = CRY_CLEFFA,
        .natDexNum = NATIONAL_DEX_CLEFFA,
        .categoryName = _("Star Shape"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "On nights with many shooting stars,\n"
            "Cleffa can be seen dancing in a ring.\n"
            "They dance until daybreak, when they\n"
            "quench their thirst with the morning dew."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cleffa, 32, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Cleffa,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Cleffa, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Cleffa),
        ICON(Cleffa, 0),
        .footprint = gMonFootprint_Cleffa,
        LEARNSETS(Cleffa),
        OVERWORLD(
            sPicTable_Cleffa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cleffa,
            gShinyOverworldPalette_Cleffa
        )
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = 113,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Clefairy"),
        .cryId = CRY_CLEFAIRY,
        .natDexNum = NATIONAL_DEX_CLEFAIRY,
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 75,
        .description = COMPOUND_STRING(
            "On every night of a full moon, they come\n"
            "out to play. When dawn arrives, the tired\n"
            "Clefairy go to sleep nestled up against\n"
            "each other in deep and quiet mountains."),
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clefairy, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Clefairy,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clefairy, 56, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Clefairy),
        ICON(Clefairy, 0),
        .footprint = gMonFootprint_Clefairy,
        LEARNSETS(Clefairy),
        OVERWORLD(
            sPicTable_Clefairy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefairy,
            gShinyOverworldPalette_Clefairy
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}),
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpDefense = 90,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 25,
        .expYield = 217,
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Clefable"),
        .cryId = CRY_CLEFABLE,
        .natDexNum = NATIONAL_DEX_CLEFABLE,
        .categoryName = _("Fairy"),
        .height = 13,
        .weight = 400,
        .description = COMPOUND_STRING(
            "A Clefable uses its wings to skip lightly \n"
            "as if it were flying. Its bouncy step\n"
            "lets it even walk on water. On quiet,\n"
            "moonlit nights, it strolls on lakes."),
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clefable, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Clefable,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clefable, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Clefable),
        ICON(Clefable, 0),
        .footprint = gMonFootprint_Clefable,
        LEARNSETS(Clefable),
        OVERWORLD(
            sPicTable_Clefable,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefable,
            gShinyOverworldPalette_Clefable
        )
    },
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
#define VULPIX_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(75),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define VULPIX_MISC_INFO                                \
        .baseHP        = 38,                            \
        .baseAttack    = 41,                            \
        .baseDefense   = 40,                            \
        .baseSpeed     = 65,                            \
        .baseSpAttack  = 50,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 190,                               \
        .expYield = 60,                                 \
        .evYield_Speed = 1,                             \
        .speciesName = _("Vulpix"),                     \
        .cryId = CRY_VULPIX,                            \
        .natDexNum = NATIONAL_DEX_VULPIX,               \
        .categoryName = _("Fox"),                       \
        .height = 6,                                    \
        .weight = 99,                                   \
        .pokemonScale = 542,                            \
        .pokemonOffset = 19,                            \
        .trainerScale = 256,                            \
        .trainerOffset = 0,                             \
        .footprint = gMonFootprint_Vulpix,              \
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,\
        VULPIX_FAMILY_MISC_INFO

#define NINETALES_MISC_INFO                                 \
        .catchRate = 75,                                    \
        .expYield = 177,                                    \
        .evYield_Speed = 1,                                 \
        .evYield_SpDefense = 1,                             \
        .speciesName = _("Ninetales"),                      \
        .cryId = CRY_NINETALES,                             \
        .natDexNum = NATIONAL_DEX_NINETALES,                \
        .categoryName = _("Fox"),                           \
        .height = 11,                                       \
        .weight = 199,                                      \
        .pokemonScale = 339,                                \
        .pokemonOffset = 10,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Ninetales,               \
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable, \
        VULPIX_FAMILY_MISC_INFO

    [SPECIES_VULPIX] =
    {
        VULPIX_MISC_INFO,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .itemRare = ITEM_CHARCOAL,
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_BROWN,
        .description = COMPOUND_STRING(
            "It can freely control fire, making fiery\n"
            "orbs fly like will-o'-the-wisps. Just\n"
            "before evolution, its six tails grow hot \n"
            "as if on fire."),
        FRONT_PIC(Vulpix, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Vulpix,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Vulpix, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Vulpix),
        ICON(Vulpix, 5),
        LEARNSETS(Vulpix),
         OVERWORLD(
            sPicTable_Vulpix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vulpix,
            gShinyOverworldPalette_Vulpix
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}),
    },

    [SPECIES_NINETALES] =
    {
        NINETALES_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .itemRare = ITEM_CHARCOAL,
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_YELLOW,
        .description = COMPOUND_STRING(
            "It has long been said that each of the\n"
            "nine tails embody an enchanted power.\n"
            "A long-lived Ninetales will have fur that\n"
            "shines like gold."),
        FRONT_PIC(Ninetales, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Ninetales,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Ninetales, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Ninetales),
        ICON(Ninetales, 3),
        LEARNSETS(Ninetales),
         OVERWORLD(
            sPicTable_Ninetales,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ninetales,
            gShinyOverworldPalette_Ninetales
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_VULPIX_ALOLAN] =
    {
        VULPIX_MISC_INFO,
        .types = { TYPE_ICE, TYPE_ICE },
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .description = COMPOUND_STRING(
            "They live together in a skulk, helping\n"
            "one another. In hot weather, this Pokémon\n"
            "makes ice shards with its six tails and\n"
            "sprays them around to cool itself off."),
        FRONT_PIC(VulpixAlolan, 48, 48),
        .frontPicYOffset = 10,
        OVERWORLD(
            sPicTable_VulpixAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VulpixAlolan,
            gShinyOverworldPalette_VulpixAlolan
        )
        .frontAnimFrames = sAnims_VulpixAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VulpixAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VulpixAlolan),
        ICON(VulpixAlolan, 2),
        LEARNSETS(VulpixAlolan),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLAN}),
        .isAlolanForm = TRUE,
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        NINETALES_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_FAIRY },
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .description = COMPOUND_STRING(
            "While it will guide travelers who get lost\n"
            "on a snowy mountain down to the\n"
            "mountain's base, it won't forgive anyone\n"
            "who harms nature."),
        FRONT_PIC(NinetalesAlolan, 64, 64),
        OVERWORLD(
            sPicTable_NinetalesAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NinetalesAlolan,
            gShinyOverworldPalette_NinetalesAlolan
        )
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(NinetalesAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(NinetalesAlolan),
        ICON(NinetalesAlolan, 2),
        LEARNSETS(NinetalesAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_UPDATED_TYPES >= GEN_6
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_FAIRY}
#else
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = 42,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Igglybuff"),
        .cryId = CRY_IGGLYBUFF,
        .natDexNum = NATIONAL_DEX_IGGLYBUFF,
        .categoryName = _("Balloon"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Its soft and pliable body is very bouncy.\n"
            "When it sings continuously with all its\n"
            "might, its body steadily turns a deepening\n"
            "pink color."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Igglybuff, 32, 32),
        .frontPicYOffset = 17,
        OVERWORLD(
            sPicTable_Igglybuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Igglybuff,
            gShinyOverworldPalette_Igglybuff
        )
        .frontAnimFrames = sAnims_Igglybuff,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        BACK_PIC(Igglybuff, 40, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Igglybuff),
        ICON(Igglybuff, 1),
        .footprint = gMonFootprint_Igglybuff,
        LEARNSETS(Igglybuff),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 115,
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = 95,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Jigglypuff"),
        .cryId = CRY_JIGGLYPUFF,
        .natDexNum = NATIONAL_DEX_JIGGLYPUFF,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "Nothing can avoid falling asleep hearing a\n"
            "Jigglypuff's song. The sound waves of its\n"
            "singing voice match the brain waves of\n"
            "someone in a deep sleep."),
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jigglypuff, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Jigglypuff,

        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
         OVERWORLD(
            sPicTable_Jigglypuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jigglypuff,
            gShinyOverworldPalette_Jigglypuff
        )
        BACK_PIC(Jigglypuff, 56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Jigglypuff),
        ICON(Jigglypuff, 0),
        .footprint = gMonFootprint_Jigglypuff,
        LEARNSETS(Jigglypuff),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}),
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 140,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 85 : 75,
        .baseSpDefense = 50,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 50,
        .expYield = 196,
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Wigglytuff"),
        .cryId = CRY_WIGGLYTUFF,
        .natDexNum = NATIONAL_DEX_WIGGLYTUFF,
        .categoryName = _("Balloon"),
        .height = 10,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Its fur is the ultimate in luxuriousness.\n"
            "Sleeping alongside a Wigglytuff is simply\n"
            "divine. Its body expands seemingly without\n"
            "end when it inhales."),
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wigglytuff, 48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Wigglytuff,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Wigglytuff, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Wigglytuff),
        ICON(Wigglytuff, 0),
        .footprint = gMonFootprint_Wigglytuff,
        OVERWORLD(
            sPicTable_Wigglytuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wigglytuff,
            gShinyOverworldPalette_Wigglytuff
        )
        LEARNSETS(Wigglytuff),
    },
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
    [SPECIES_ZUBAT] =
    {
.baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 49,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .evYield_Speed = 1,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Zubat"),
        .cryId = CRY_ZUBAT,
        .natDexNum = NATIONAL_DEX_ZUBAT,
        .categoryName = _("Bat"),
        .height = 8,
        .weight = 75,
        .description = COMPOUND_STRING(
            "This pesky critter can be commonly\n"
            "found in caves, harrasing visitors.\n"
            "Luckily their teeth aren't very sharp,\n"
            "and their bites are rarely dangerous."),
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Zubat, 56, 48),
        FRONT_PIC_FEMALE(Zubat, 56, 48),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Zubat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        OVERWORLD(
            sPicTable_Zubat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zubat,
            gShinyOverworldPalette_Zubat
        )
        BACK_PIC(Zubat, 56, 56),
        BACK_PIC_FEMALE(Zubat, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Zubat),
        ICON(Zubat, 2),
        .footprint = gMonFootprint_Zubat,
        LEARNSETS(Zubat),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_GOLBAT}),
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 159,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Golbat"),
        .cryId = CRY_GOLBAT,
        .natDexNum = NATIONAL_DEX_GOLBAT,
        .categoryName = _("Bat"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Its fangs are now thicker, and can\n"
            "puncture skin. It loves to feast on\n"
            "the blood of people and POKéMON. It\n"
            "thrives in the dark."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
          OVERWORLD(
            sPicTable_Golbat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golbat,
            gShinyOverworldPalette_Golbat
        )
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Golbat, 64, 56),
        FRONT_PIC_FEMALE(Golbat, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Golbat,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        BACK_PIC(Golbat, 56, 40),
        BACK_PIC_FEMALE(Golbat, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Golbat),
        ICON(Golbat, 2),
        .footprint = gMonFootprint_Golbat,
        LEARNSETS(Golbat),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CROBAT}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CROBAT] =
    {
                .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 241,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
         .abilities = {ABILITY_SHARPNESS,  ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Crobat"),
        .cryId = CRY_CROBAT,
        .natDexNum = NATIONAL_DEX_CROBAT,
        .categoryName = _("Bat"),
         OVERWORLD(
            sPicTable_Crobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Crobat,
            gShinyOverworldPalette_Crobat
        )
        .height = 18,
        .weight = 750,
        .description = COMPOUND_STRING(
            "Over the course of evolution, its hind legs\n"
            "turned into wings. By alternately resting\n"
            "its front and rear wings, it can fly all day\n"
            "without having to stop."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        FRONT_PIC(Crobat, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Crobat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Crobat, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Crobat),
        ICON(Crobat, 2),
        .footprint = gMonFootprint_Crobat,
        LEARNSETS(Crobat),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Oddish"),
        .cryId = CRY_ODDISH,
           OVERWORLD(
            sPicTable_Oddish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Oddish,
            gShinyOverworldPalette_Oddish
        )
        .natDexNum = NATIONAL_DEX_ODDISH,
        .categoryName = _("Weed"),
        .height = 5,
        .weight = 54,
        .description = COMPOUND_STRING(
            "This Pokémon grows by absorbing moonlight.\n"
            "During the daytime, it buries itself in the\n"
            "ground, leaving only its leaves exposed to\n"
            "avoid detection by its enemies."),
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Oddish, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Oddish,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Oddish, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Oddish),
        ICON(Oddish, 4),
        .footprint = gMonFootprint_Oddish,
        LEARNSETS(Oddish),
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_GLOOM}),
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_STENCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gloom"),
        .cryId = CRY_GLOOM,
        .natDexNum = NATIONAL_DEX_GLOOM,
        .categoryName = _("Weed"),
        .height = 8,
        .weight = 86,
        .description = COMPOUND_STRING(
            "A horribly noxious honey drools from its\n"
            "mouth. One whiff of the honey can result\n"
            "in memory loss. Some fans are said to\n"
            "enjoy this overwhelming stink, however."),
        .pokemonScale = 329,
        OVERWORLD(
            sPicTable_Gloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gloom,
            gShinyOverworldPalette_Gloom
        )
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gloom, 56, 48),
        FRONT_PIC_FEMALE(Gloom, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Gloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Gloom, 64, 48),
        BACK_PIC_FEMALE(Gloom, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Gloom),
        ICON(Gloom, 0),
        .footprint = gMonFootprint_Gloom,
        LEARNSETS(Gloom),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}),
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 110 : 100,
        .baseSpDefense = 90,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Vileplume"),
        .cryId = CRY_VILEPLUME,
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        .categoryName = _("Flower"),
        .height = 12,
        .weight = 186,
        .description = COMPOUND_STRING(
            "In seasons when it produces more pollen,\n"
            "the air around a Vileplume turns yellow\n"
            "with the powder as it walks. The pollen is\n"
            "highly toxic and causes paralysis."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vileplume, 56, 56),
        FRONT_PIC_FEMALE(Vileplume, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vileplume,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
         OVERWORLD(
            sPicTable_Vileplume,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vileplume,
            gShinyOverworldPalette_Vileplume
        )
        BACK_PIC(Vileplume, 64, 56),
        BACK_PIC_FEMALE(Vileplume, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Vileplume),
        ICON(Vileplume, 0),
        .footprint = gMonFootprint_Vileplume,
        LEARNSETS(Vileplume),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellossom"),
        .cryId = CRY_BELLOSSOM,
        .natDexNum = NATIONAL_DEX_BELLOSSOM,
        .categoryName = _("Flower"),
        .height = 4,
        .weight = 58,
        .description = COMPOUND_STRING(
            "Its flower petals deepen in color through\n"
            "exposure to sunlight. When cloudy weather\n"
            "persists, it does a dance that is thought\n"
            "to be a ritual for summoning the sun."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellossom, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellossom,
        OVERWORLD(
            sPicTable_Bellossom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellossom,
            gShinyOverworldPalette_Bellossom
        )
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Bellossom, 48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Bellossom),
        ICON(Bellossom, 1),
        .footprint = gMonFootprint_Bellossom,
        LEARNSETS(Bellossom),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS},
        .abilities = {ABILITY_PLAGUE_SPREADER, ABILITY_VAMPIRIC, ABILITY_ACID_BATH},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Paras"),
        .cryId = CRY_PARAS,
        .natDexNum = NATIONAL_DEX_PARAS,
        .categoryName = _("Zombie"),
        .height = 3,
        .weight = 54,
        .description = COMPOUND_STRING(
            "The mushrooms on its back are\n"
            "actually a separate, independent\n"
            "creature. They grow by leeching on\n"
            "their host's nutrients."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Paras, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Paras,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
         OVERWORLD(
            sPicTable_Paras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Paras,
            gShinyOverworldPalette_Paras
        )
        .frontAnimDelay = 10,
        BACK_PIC(Paras, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Paras),
        ICON(Paras, 0),
        .footprint = gMonFootprint_Paras,
        LEARNSETS(Paras),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_INFESTATION, SPECIES_PARASECT}),
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_GRASS },
        .catchRate = 75,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS},
         .abilities = {ABILITY_PLAGUE_SPREADER, ABILITY_VAMPIRIC, ABILITY_ACID_BATH},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Parasect"),
        .cryId = CRY_PARASECT,
        .natDexNum = NATIONAL_DEX_PARASECT,
        .categoryName = _("Zombie"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "The nervous system of the mushroom\n"
            "parasite has fused with the one of its\n"
            "host. The main body is left to wither,\n"
            "while the parasite grows large."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Parasect, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Parasect,
        .frontAnimId = ANIM_H_SHAKE,
         OVERWORLD(
            sPicTable_Parasect,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Parasect,
            gShinyOverworldPalette_Parasect
        )
        .frontAnimDelay = 45,
        BACK_PIC(Parasect, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Parasect),
        ICON(Parasect, 0),
        .footprint = gMonFootprint_Parasect,
        LEARNSETS(Parasect),
    },
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 190,
        .expYield = 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venonat"),
        .cryId = CRY_VENONAT,
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Its coat of thin, stiff hair that covers\n"
            "its entire body is said to have evolved\n"
            "for protection. Its large eyes never fail\n"
            "to spot even miniscule prey."),
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        FRONT_PIC(Venonat, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Venonat,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
         OVERWORLD(
            sPicTable_Venonat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venonat,
            gShinyOverworldPalette_Venonat
        )
        .frontAnimDelay = 20,
        BACK_PIC(Venonat, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Venonat),
        ICON(Venonat, 2),
        .footprint = gMonFootprint_Venonat,
        LEARNSETS(Venonat),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_VENOMOTH}),
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venomoth"),
        .cryId = CRY_VENOMOTH,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Venomoth are nocturnal--they are only\n"
            "active at night. Their favorite prey are\n"
            "insects that gather around streetlights,\n"
            "attracted by the light in the darkness."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        FRONT_PIC(Venomoth, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 16,
        BACK_PIC(Venomoth, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Venomoth),
        ICON(Venomoth, 2),
        .footprint = gMonFootprint_Venomoth,
        LEARNSETS(Venomoth),
        OVERWORLD(
            sPicTable_Venomoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venomoth,
            gShinyOverworldPalette_Venomoth
        )
    },
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
#define DIGLETT_FAMILY_MISC_INFO                            \
        .itemRare = ITEM_SOFT_SAND,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_BROWN

#define DIGLETT_MISC_INFO                                   \
        .catchRate = 255,                                   \
        .expYield = 53,                                     \
        .evYield_Speed = 1,                                 \
        .speciesName = _("Diglett"),                        \
        .cryId = CRY_DIGLETT,                               \
        .natDexNum = NATIONAL_DEX_DIGLETT,                  \
        .categoryName = _("Mole"),                          \
        .height = 2,                                        \
        .pokemonScale = 833,                                \
        .pokemonOffset = 25,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Diglett,                 \
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,   \
        DIGLETT_FAMILY_MISC_INFO

#define DUGTRIO_MISC_INFO                                   \
        .catchRate = 50,                                    \
        .expYield = 149,                                    \
        .evYield_Speed = 2,                                 \
        .speciesName = _("Dugtrio"),                        \
        .cryId = CRY_DUGTRIO,                               \
        .natDexNum = NATIONAL_DEX_DUGTRIO,                  \
        .categoryName = _("Mole"),                          \
        .height = 7,                                        \
        .pokemonScale = 406,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Dugtrio,                 \
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,   \
        DIGLETT_FAMILY_MISC_INFO

#define DUGTRIO_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

    [SPECIES_DIGLETT] =
    {
        DIGLETT_MISC_INFO,
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .weight = 8,
        .description = COMPOUND_STRING(
            "Diglett are raised in most farms.\n"
            "The reason is simple--wherever they\n"
            "burrow, the soil is left perfectly tilled\n"
            "for growing delicious crops."),
        FRONT_PIC(Diglett, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Diglett,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        BACK_PIC(Diglett, 40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Diglett),
        ICON(Diglett, 2),
        LEARNSETS(Diglett),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO}),
                OVERWORLD(
            sPicTable_Diglett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Diglett,
            gShinyOverworldPalette_Diglett
        )
    },

    [SPECIES_DUGTRIO] =
    {
        DUGTRIO_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .weight = 333,
        .description = COMPOUND_STRING(
            "Because the triplets originally split from\n"
            "one body, they think exactly alike.\n"
            "They work cooperatively to burrow\n"
            "endlessly through the ground."),
        FRONT_PIC(Dugtrio, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Dugtrio,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        BACK_PIC(Dugtrio, 48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Dugtrio),
        ICON(Dugtrio, 2),
        LEARNSETS(Dugtrio),
                OVERWORLD(
            sPicTable_Dugtrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dugtrio,
            gShinyOverworldPalette_Dugtrio
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLAN] =
    {
        DIGLETT_MISC_INFO,
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .weight = 10,
        .description = COMPOUND_STRING(
            "The metal-rich geology of its habitat\n"
            "caused it to develop steel whiskers on its\n"
            "head that change shape depending on its\n"
            "mood and when communicating with others."),
        FRONT_PIC(DiglettAlolan, 32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_DiglettAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DiglettAlolan, 40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DiglettAlolan),
        ICON(DiglettAlolan, 2),
        LEARNSETS(DiglettAlolan),
        OVERWORLD(
            sPicTable_DiglettAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DiglettAlolan,
            gShinyOverworldPalette_DiglettAlolan
        )
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO_ALOLAN}),
    },

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        DUGTRIO_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .noFlip = TRUE,
        .weight = 666,
        .description = COMPOUND_STRING(
            "Their beautiful, metallic whiskers create\n"
            "a sort of protective helmet on\n"
            "heir heads, and they also function\n"
            "as highly precise sensors."),
        FRONT_PIC(DugtrioAlolan, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_DugtrioAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DugtrioAlolan, 64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DugtrioAlolan),
        ICON(DugtrioAlolan, 2),
        LEARNSETS(DugtrioAlolan),
           OVERWORLD(
            sPicTable_DugtrioAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DugtrioAlolan,
            gShinyOverworldPalette_DugtrioAlolan
        )
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
#define MEOWTH_MISC_INFO                                                    \
        .catchRate = 255,                                                   \
        .expYield = 58,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                  \
        .speciesName = _("Meowth"),                                         \
        .cryId = CRY_MEOWTH,                                                \
        .natDexNum = NATIONAL_DEX_MEOWTH,                                   \
        .categoryName = _("Scratch Cat"),                                   \
        .footprint = gMonFootprint_Meowth,                                  \
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable

#define PERSIAN_MISC_INFO                                   \
        .catchRate = 90,                                    \
        .expYield = 154,                                    \
        .evYield_Speed = 2,                                 \
        .itemRare = ITEM_QUICK_CLAW,                        \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .speciesName = _("Persian"),                        \
        .cryId = CRY_PERSIAN,                               \
        .natDexNum = NATIONAL_DEX_PERSIAN,                  \
        .categoryName = _("Classy Cat"),                    \
        .footprint = gMonFootprint_Persian,                 \
        .formSpeciesIdTable = sPersianFormSpeciesIdTable

    [SPECIES_MEOWTH] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Meowth withdraw their sharp claws into\n"
            "their paws to silently sneak about.\n"
            "For some reason, this Pokémon loves\n"
            "shiny coins that glitter with light."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Meowth, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Meowth,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        BACK_PIC(Meowth, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Meowth),
        ICON(Meowth, 1),
        LEARNSETS(Meowth),
         OVERWORLD(
            sPicTable_Meowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meowth,
            gShinyOverworldPalette_Meowth
        )
        .formChangeTable = sMeowthFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERSIAN}),
    },

    [SPECIES_PERSIAN] =
    {
        PERSIAN_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_LIMBER, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING(
            "A Persian's six bold whiskers sense air\n"
            "movements to determine what is in its\n"
            "vicinity. It becomes docile if grabbed\n"
            "by the whiskers."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Persian, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Persian,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        BACK_PIC(Persian, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Persian),
        ICON(Persian, 1),
        LEARNSETS(Persian),
        OVERWORLD(
            sPicTable_Persian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Persian,
            gShinyOverworldPalette_Persian
        )
    },

#if P_ALOLAN_FORMS
    [SPECIES_MEOWTH_ALOLAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_DARK, TYPE_DARK },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It's accustomed to luxury because it used\n"
            "to live with Alolan royalty. Highly smart\n"
            "and proud, it's famously difficult to\n"
            "handle, but that also makes it popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthAlolan, 48, 48),
        .frontPicYOffset = 8,
        OVERWORLD(
            sPicTable_MeowthAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthAlolan,
            gShinyOverworldPalette_MeowthAlolan
        )
        .frontAnimFrames = sAnims_MeowthAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthAlolan, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthAlolan),
        ICON(MeowthAlolan, 2),
        LEARNSETS(MeowthAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PERSIAN_ALOLAN}),
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        PERSIAN_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_DARK },
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING(
            "It looks down on everyone other than\n"
            "itself. In contrast to its lovely face, it\n"
            "is so brutal that it tortures its weakened\n"
            "prey rather than finishing them off."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PersianAlolan, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_PersianAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PersianAlolan, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PersianAlolan),
        ICON(PersianAlolan, 2),
        LEARNSETS(PersianAlolan),
        OVERWORLD(
            sPicTable_PersianAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PersianAlolan,
            gShinyOverworldPalette_PersianAlolan
        )
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALARIAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Attack = 1,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Living with a savage, seafaring people has\n"
            "hardened its body so much that parts of it\n"
            "turned to iron. Darker coins are harder\n"
            "and garner more respect among Meowth."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGalarian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeowthGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGalarian, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGalarian),
        ICON(MeowthGalarian, 0),
        LEARNSETS(MeowthGalarian),
        OVERWORLD(
            sPicTable_MeowthGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthGalarian,
            gShinyOverworldPalette_MeowthGalarian
        )
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Perrserker"),
        .cryId = CRY_PERRSERKER,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = COMPOUND_STRING(
            "What appears to be an iron helmet is\n"
            "actually hardened hair. This Pokémon\n"
            "lives for the thrill of battle."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Perrserker, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Perrserker,
        OVERWORLD(
            sPicTable_Perrserker,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Perrserker,
            gShinyOverworldPalette_Perrserker
        )
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Perrserker, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Perrserker),
        ICON(Perrserker, 2),
        .footprint = gMonFootprint_Perrserker,
        LEARNSETS(Perrserker),
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GIGANTAMAX] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The pattern that has appeared on\n"
            "its giant coin is thought to be the\n"
            "key to unlocking the secrets of the\n"
            "Dynamax phenomenon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MeowthGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGigantamax),
        ICON(MeowthGigantamax, 1),
        LEARNSETS(Meowth),
        .isGigantamax = TRUE,
        .formChangeTable = sMeowthFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 50,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Psyduck"),
        .cryId = CRY_PSYDUCK,
        .natDexNum = NATIONAL_DEX_PSYDUCK,
        .categoryName = _("Duck"),
        .height = 8,
        .weight = 196,
        .description = COMPOUND_STRING(
            "When its headache intensifies, it starts\n"
            "using strange powers. However, it has no\n"
            "recollection of its powers, so it always\n"
            "looks befuddled and bewildered."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Psyduck, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Psyduck,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Psyduck, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Psyduck),
        ICON(Psyduck, 1),
        .footprint = gMonFootprint_Psyduck,
        LEARNSETS(Psyduck),
         OVERWORLD(
            sPicTable_Psyduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Psyduck,
            gShinyOverworldPalette_Psyduck
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_GOLDUCK}),
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 78,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 175,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Golduck"),
        .cryId = CRY_GOLDUCK,
        .natDexNum = NATIONAL_DEX_GOLDUCK,
        .categoryName = _("Duck"),
        .height = 17,
        .weight = 766,
        .description = COMPOUND_STRING(
            "A Golduck is an adept swimmer.\n"
            "It sometimes joins competitive swimmers\n"
            "in training. It uses psychic powers when\n"
            "its forehead shimmers with light."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        FRONT_PIC(Golduck, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Golduck,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        BACK_PIC(Golduck, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Golduck),
        ICON(Golduck, 0),
        .footprint = gMonFootprint_Golduck,
        LEARNSETS(Golduck),
        OVERWORLD(
            sPicTable_Golduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golduck,
            gShinyOverworldPalette_Golduck
        )
    },
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_ANGER_POINT, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mankey"),
        .cryId = CRY_MANKEY,
        .natDexNum = NATIONAL_DEX_MANKEY,
        .categoryName = _("Pig Monkey"),
        .height = 5,
        .weight = 280,
        .description = COMPOUND_STRING(
            "When it starts shaking and its nasal\n"
            "breathing turns rough, it's a sure sign\n"
            "of anger. However, since this happens\n"
            "instantly, there is no time to flee."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mankey, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Mankey,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        OVERWORLD(
            sPicTable_Mankey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mankey,
            gShinyOverworldPalette_Mankey
        )
        .frontAnimDelay = 20,
        BACK_PIC(Mankey, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Mankey),
        ICON(Mankey, 1),
        .footprint = gMonFootprint_Mankey,
        LEARNSETS(Mankey),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PRIMEAPE}),
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 65,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 159,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_ANGER_POINT, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Primeape"),
        .cryId = CRY_PRIMEAPE,
        .natDexNum = NATIONAL_DEX_PRIMEAPE,
        .categoryName = _("Pig Monkey"),
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING(
            "When it becomes furious, its blood\n"
            "circulation becomes more robust, and\n"
            "its muscles are made stronger. But it\n"
            "also becomes much less intelligent."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Primeape, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Primeape,
        OVERWORLD(
            sPicTable_Primeape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Primeape,
            gShinyOverworldPalette_Primeape
        )
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Primeape, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Primeape),
        ICON(Primeape, 2),
        .footprint = gMonFootprint_Primeape,
        LEARNSETS(Primeape),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_RAGE_FIST, SPECIES_ANNIHILAPE}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = { TYPE_FIGHTING, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Annihilape"),
        .cryId = CRY_ANNIHILAPE,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Rage Monkey"),
        .height = 12,
        .weight = 560,
        .description = COMPOUND_STRING(
            "When its anger rose beyond a\n"
            "critical point, this Pokémon gained power\n"
            "that is unfettered by the limits of\n"
            "its physical body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Annihilape, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Annihilape, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Annihilape),
        ICON(Annihilape, 0),
        //.footprint = gMonFootprint_Annihilape,
        LEARNSETS(Annihilape),
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
#define GROWLITHE_FAMILY_MISC_INFO                                                  \
        .genderRatio = PERCENT_FEMALE(25),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                          \
        .bodyColor = BODY_COLOR_BROWN

#define GROWLITHE_MISC_INFO                                 \
        .catchRate = 190,                                   \
        .expYield = 70,                                     \
        .evYield_Attack = 1,                                \
        .speciesName = _("Growlithe"),                      \
        .cryId = CRY_GROWLITHE,                             \
        .natDexNum = NATIONAL_DEX_GROWLITHE,                \
        .footprint = gMonFootprint_Growlithe,               \
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable, \
        GROWLITHE_FAMILY_MISC_INFO

#define ARCANINE_MISC_INFO                                  \
        .catchRate = 75,                                    \
        .expYield = 194,                                    \
        .evYield_Attack = 2,                                \
        .speciesName = _("Arcanine"),                       \
        .cryId = CRY_ARCANINE,                              \
        .natDexNum = NATIONAL_DEX_ARCANINE,                 \
        .categoryName = _("Legendary"),                     \
        .footprint = gMonFootprint_Arcanine,                \
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,  \
        GROWLITHE_FAMILY_MISC_INFO

    [SPECIES_GROWLITHE] =
    {
        GROWLITHE_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .categoryName = _("Puppy"),
        .height = 7,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Its superb sense of smell ensures that\n"
            "this Pokémon won't forget any scent,\n"
            "no matter what. It uses its sense of smell\n"
            "to detect the emotions of others."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Growlithe, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Growlithe,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        BACK_PIC(Growlithe, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Growlithe),
        ICON(Growlithe, 3),
        LEARNSETS(Growlithe),
        OVERWORLD(
            sPicTable_Growlithe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Growlithe,
            gShinyOverworldPalette_Growlithe
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}),
    },

    [SPECIES_ARCANINE] =
    {
        ARCANINE_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .height = 19,
        .weight = 1550,
        .description = COMPOUND_STRING(
            "This fleet-footed Pokémon is said to run\n"
            "over 6,200 miles in a single day and night.\n"
            "The fire that blazes wildly within its body\n"
            "is its source of power."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(Arcanine, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Arcanine,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 8,
        BACK_PIC(Arcanine, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Arcanine),
        ICON(Arcanine, 3),
        LEARNSETS(Arcanine),
        OVERWORLD(
            sPicTable_Arcanine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arcanine,
            gShinyOverworldPalette_Arcanine
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUIAN] =
    {
        GROWLITHE_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_ROCK },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING(
            "They patrol their territory in pairs.\n"
            "It's believed the igneous rock components\n"
            "in the fur of this species are the result\n"
            "of volcanic activity in its habitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrowlitheHisuian, 48, 48),
        .frontPicYOffset = 11,
        OVERWORLD(
            sPicTable_GrowlitheHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrowlitheHisuian,
            gShinyOverworldPalette_GrowlitheHisuian
        )
        .frontAnimFrames = sAnims_GrowlitheHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrowlitheHisuian, 56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrowlitheHisuian),
        ICON(GrowlitheHisuian, 0),
        LEARNSETS(GrowlitheHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE_HISUIAN}),
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        ARCANINE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_ROCK },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "Snaps at its foes with fangs cloaked in\n"
            "blazing flame. Despite its bulk, it deftly\n"
            "feints every which way, leading opponents\n"
            "on a deceptively merry chase."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(ArcanineHisuian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArcanineHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ArcanineHisuian, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArcanineHisuian),
        ICON(ArcanineHisuian, 0),
        LEARNSETS(ArcanineHisuian),
        OVERWORLD(
            sPicTable_ArcanineHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArcanineHisuian,
            gShinyOverworldPalette_ArcanineHisuian
        )
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
    [SPECIES_POLIWAG] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwag"),
        .cryId = CRY_POLIWAG,
        .natDexNum = NATIONAL_DEX_POLIWAG,
        .categoryName = _("Tadpole"),
        .height = 6,
        .weight = 124,
        .description = COMPOUND_STRING(
            "It is possible to see this Pokémon's spiral\n"
            "innards right through its thin skin.\n"
            "However, the skin is also very flexible.\n"
            "Even sharp fangs bounce right off it."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwag, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Poliwag,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Poliwag, 48, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Poliwag),
        ICON(Poliwag, 0),
        .footprint = gMonFootprint_Poliwag,
        LEARNSETS(Poliwag),
        OVERWORLD(
            sPicTable_Poliwag,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwag,
            gShinyOverworldPalette_Poliwag
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_POLIWHIRL}),
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 120,
        .expYield = 135,
        .evYield_Speed = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwhirl"),
        .cryId = CRY_POLIWHIRL,
        .natDexNum = NATIONAL_DEX_POLIWHIRL,
        .categoryName = _("Tadpole"),
        .height = 10,
        .weight = 200,
        .description = COMPOUND_STRING(
            "Its body surface is always wet and slick\n"
            "with an oily fluid. Because of this greasy\n"
            "covering, it can easily slip and slide out\n"
            "of the clutches of any enemy in battle."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwhirl, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Poliwhirl,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        OVERWORLD(
            sPicTable_Poliwhirl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwhirl,
            gShinyOverworldPalette_Poliwhirl
        )
        .frontAnimDelay = 5,
        BACK_PIC(Poliwhirl, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Poliwhirl),
        ICON(Poliwhirl, 0),
        .footprint = gMonFootprint_Poliwhirl,
        LEARNSETS(Poliwhirl),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}),
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 230,
        .evYield_Defense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwrath"),
        .cryId = CRY_POLIWRATH,
        .natDexNum = NATIONAL_DEX_POLIWRATH,
        .categoryName = _("Tadpole"),
        .height = 13,
        .weight = 540,
        .description = COMPOUND_STRING(
            "Its highly developed muscles never grow\n"
            "fatigued, however much it exercises.\n"
            "This Pokémon can swim back and forth\n"
            "across the Pacific Ocean without effort."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwrath, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Poliwrath,
         OVERWORLD(
            sPicTable_Poliwrath,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwrath,
            gShinyOverworldPalette_Poliwrath
        )        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Poliwrath, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Poliwrath),
        ICON(Poliwrath, 0),
        .footprint = gMonFootprint_Poliwrath,
        LEARNSETS(Poliwrath),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Politoed"),
        .cryId = CRY_POLITOED,
        .natDexNum = NATIONAL_DEX_POLITOED,
        .categoryName = _("Frog"),
        .height = 11,
        .weight = 339,
        .description = COMPOUND_STRING(
            "The curled hair on its head proves its\n"
            "status as a king. It is said that the\n"
            "longer and curlier the hair, the more\n"
            "respect it earns from its peers."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Politoed, 48, 56),
        FRONT_PIC_FEMALE(Politoed, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Politoed,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        BACK_PIC(Politoed, 56, 56),
        BACK_PIC_FEMALE(Politoed, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Politoed),
        ICON(Politoed, 1),
        .footprint = gMonFootprint_Politoed,
        LEARNSETS(Politoed),
        OVERWORLD(
            sPicTable_Politoed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Politoed,
            gShinyOverworldPalette_Politoed
        )
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
    [SPECIES_ABRA] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 200,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SHADOW_BOXING, ABILITY_NO_GUARD, ABILITY_PSYCHIC_SHIELD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Abra"),
        .cryId = CRY_ABRA,
        .natDexNum = NATIONAL_DEX_ABRA,
        .categoryName = _("Psi"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It's able to create psychic barriers,\n"
            "which it uses to sleep without being\n"
            "bothered. If startled, it will teleport\n"
            "away quickly."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Abra, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Abra,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Abra, 56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Abra),
        ICON(Abra, 2),
        .footprint = gMonFootprint_Abra,
        LEARNSETS(Abra),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_KADABRA}),
                OVERWORLD(
            sPicTable_Abra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Abra,
            gShinyOverworldPalette_Abra
        )
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 100,
        .expYield = 140,
        .eggCycles = 20,
        .evYield_SpAttack = 2,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SHADOW_BOXING, ABILITY_NO_GUARD, ABILITY_PSYCHIC_SHIELD },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Kadabra"),
        .cryId = CRY_KADABRA,
        .natDexNum = NATIONAL_DEX_KADABRA,
        .categoryName = _("Psi"),
        .height = 13,
        .weight = 565,
        .description = COMPOUND_STRING(
            "Its powers have grown to the point\n"
            "where it's able to manipulate physical\n"
            "matter with a mere thought. It likes to\n"
            "steal spoons and bend them."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kadabra, 64, 56),
        FRONT_PIC_FEMALE(Kadabra, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kadabra,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Kadabra, 64, 48),
        BACK_PIC_FEMALE(Kadabra, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Kadabra),
        ICON(Kadabra, 2),
        .footprint = gMonFootprint_Kadabra,
        LEARNSETS(Kadabra),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_ALAKAZAM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ALAKAZAM}),
                                        OVERWORLD(
            sPicTable_Kadabra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kadabra,
            gShinyOverworldPalette_Kadabra
        )
    },

#define ALAKAZAM_SP_DEF (P_UPDATED_STATS >= GEN_6 ? 95 : 85)

#define ALAKAZAM_MISC_INFO                                          \
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },                    \
        .catchRate = 50,                                            \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .bodyColor = BODY_COLOR_BROWN,                              \
        .speciesName = _("Alakazam"),                               \
        .natDexNum = NATIONAL_DEX_ALAKAZAM,                         \
        .categoryName = _("Psi"),                                   \
        .footprint = gMonFootprint_Alakazam,                        \
        LEARNSETS(Alakazam)                                        \

    [SPECIES_ALAKAZAM] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        .baseSpDefense = ALAKAZAM_SP_DEF,
        .expYield = 225,
        .abilities = { ABILITY_SHADOW_BOXING, ABILITY_NO_GUARD, ABILITY_PSYCHIC_SHIELD },
        .cryId = CRY_ALAKAZAM,
        .height = 15,
        .evYield_SpAttack = 3,
        .weight = 480,
        .description = COMPOUND_STRING(
            "It has complete control over its brain, but\n"
            "as a result it has to consciously manage all\n"
            "of its bodily functions. It uses psychic power\n"
            "to move its body."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Alakazam, 64, 64),
        FRONT_PIC_FEMALE(Alakazam, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Alakazam,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Alakazam, 64, 56),
        BACK_PIC_FEMALE(Alakazam, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Alakazam),
        ICON(Alakazam, 2),
                OVERWORLD(
            sPicTable_Alakazam,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Alakazam,
            gShinyOverworldPalette_Alakazam
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALAKAZAM_MEGA] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = ALAKAZAM_SP_DEF + 10,
        .expYield = 270,
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .cryId = CRY_ALAKAZAM_MEGA,
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Having traded away its muscles, Alakazam's\n"
            "true power has been unleashed. With its\n"
            "psychic powers, it can foresee all things."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AlakazamMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AlakazamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AlakazamMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(AlakazamMega),
        ICON(AlakazamMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Machop"),
        .cryId = CRY_MACHOP,
        .natDexNum = NATIONAL_DEX_MACHOP,
        .categoryName = _("Superpower"),
        .height = 8,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It continually undertakes strenuous\n"
            "training to master all forms of martial\n"
            "arts. Its strength lets it easily hoist\n"
            "a sumo wrestler onto its shoulders."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Machop, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Machop,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Machop, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Machop),
        ICON(Machop, 0),
        .footprint = gMonFootprint_Machop,
        LEARNSETS(Machop),
        OVERWORLD(
            sPicTable_Machop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machop,
            gShinyOverworldPalette_Machop
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MACHOKE}),
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Machoke"),
        .cryId = CRY_MACHOKE,
        .natDexNum = NATIONAL_DEX_MACHOKE,
        .categoryName = _("Superpower"),
        .height = 15,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A belt is worn by a Machoke to keep its\n"
            "overwhelming power under control.\n"
            "Because it is so dangerous, no one has\n"
            "ever removed the belt."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Machoke, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Machoke,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Machoke, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machoke),
        ICON(Machoke, 2),
        .footprint = gMonFootprint_Machoke,
        LEARNSETS(Machoke),
         OVERWORLD(
            sPicTable_Machoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machoke,
            gShinyOverworldPalette_Machoke
        )
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MACHAMP},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MACHAMP}),
    },

#define MACHAMP_MISC_INFO                                                   \
        .baseHP        = 90,                                                \
        .baseAttack    = 130,                                               \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 55,                                                \
        .baseSpAttack  = 65,                                                \
        .baseSpDefense = 85,                                                \
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },                          \
        .catchRate = 45,                                                    \
        .expYield = 227,                                                    \
        .evYield_Attack = 3,                                                \
        .itemRare = ITEM_FOCUS_BAND,                                        \
        .genderRatio = PERCENT_FEMALE(25),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },        \
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST }, \
        .bodyColor = BODY_COLOR_GRAY,                                       \
        .speciesName = _("Machamp"),                                        \
        .cryId = CRY_MACHAMP,                                               \
        .natDexNum = NATIONAL_DEX_MACHAMP,                                  \
        .categoryName = _("Superpower"),                                    \
        .footprint = gMonFootprint_Machamp,                                 \
        LEARNSETS(Machamp),                                                 \
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,                   \
        .formChangeTable = sMachampFormChangeTable

    [SPECIES_MACHAMP] =
    {
        MACHAMP_MISC_INFO,
        .height = 16,
        .weight = 1300,
        .description = COMPOUND_STRING(
            "It is impossible to defend against punches\n"
            "and chops doled out by its four arms.\n"
            "Its fighting spirit flares up when it faces\n"
            "a tough opponent."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(Machamp, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Machamp,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Machamp, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machamp),
        ICON(Machamp, 0),
        OVERWORLD(
            sPicTable_Machamp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machamp,
            gShinyOverworldPalette_Machamp
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GIGANTAMAX] =
    {
        MACHAMP_MISC_INFO,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "One of these Pokémon once used\n"
            "its immeasurable strength to lift a\n"
            "large ship that was in trouble. It\n"
            "then carried the ship to port."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(MachampGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MachampGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MachampGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MachampGigantamax),
        ICON(MachampGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellsprout"),
        .cryId = CRY_BELLSPROUT,
        .natDexNum = NATIONAL_DEX_BELLSPROUT,
        .categoryName = _("Flower"),
        .height = 7,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Bellsprout's thin and flexible body lets\n"
            "it bend and sway to avoid any attack,\n"
            "however strong it may be. From its mouth,\n"
            "it leaks a fluid that melts even iron."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellsprout, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellsprout,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Bellsprout, 40, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Bellsprout),
        ICON(Bellsprout, 1),
        .footprint = gMonFootprint_Bellsprout,
        LEARNSETS(Bellsprout),
         OVERWORLD(
            sPicTable_Bellsprout,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellsprout,
            gShinyOverworldPalette_Bellsprout
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_WEEPINBELL}),
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Weepinbell"),
        .cryId = CRY_WEEPINBELL,
        .natDexNum = NATIONAL_DEX_WEEPINBELL,
        .categoryName = _("Flycatcher"),
        .height = 10,
        .weight = 64,
        .description = COMPOUND_STRING(
            "At night, a Weepinbell hangs on to a tree\n"
            "branch with its hooked rear and sleeps.\n"
            "If it moves around in its sleep, it may\n"
            "wake up to find itself on the ground."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weepinbell, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Weepinbell,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        BACK_PIC(Weepinbell, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Weepinbell),
        ICON(Weepinbell, 1),
        .footprint = gMonFootprint_Weepinbell,
        LEARNSETS(Weepinbell),
        OVERWORLD(
            sPicTable_Weepinbell,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weepinbell,
            gShinyOverworldPalette_Weepinbell
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}),
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 70 : 60,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 221,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Victreebel"),
        .cryId = CRY_VICTREEBEL,
        .natDexNum = NATIONAL_DEX_VICTREEBEL,
        .categoryName = _("Flycatcher"),
        .height = 17,
        .weight = 155,
        .description = COMPOUND_STRING(
            "The long vine extending from its head is\n"
            "waved about as if it were a living thing to\n"
            "attract prey. When an unsuspecting victim\n"
            "approaches, it is swallowed whole."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        FRONT_PIC(Victreebel, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Victreebel,
        OVERWORLD(
            sPicTable_Victreebel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Victreebel,
            gShinyOverworldPalette_Victreebel
        )
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Victreebel, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Victreebel),
        ICON(Victreebel, 1),
        .footprint = gMonFootprint_Victreebel,
        LEARNSETS(Victreebel),
    },
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tentacool"),
        .cryId = CRY_TENTACOOL,
        .natDexNum = NATIONAL_DEX_TENTACOOL,
        .categoryName = _("Jellyfish"),
        .height = 9,
        .weight = 455,
        .description = COMPOUND_STRING(
            "Its body is almost entirely composed of\n"
            "water. It ensnares its foe with its two\n"
            "long tentacles, then stabs with the poison\n"
            "stingers at their tips."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tentacool, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tentacool,
        OVERWORLD(
            sPicTable_Tentacool,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Tentacool,
            gShinyOverworldPalette_Tentacool
        )
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tentacool, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacool),
        ICON(Tentacool, 0),
        .footprint = gMonFootprint_Tentacool,
        LEARNSETS(Tentacool),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TENTACRUEL}),
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 60,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tentacruel"),
        .cryId = CRY_TENTACRUEL,
        .natDexNum = NATIONAL_DEX_TENTACRUEL,
        .categoryName = _("Jellyfish"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It lives in complex rock formations on\n"
            "the ocean floor and traps prey using its\n"
            "80 tentacles. Its red orbs glow when it\n"
            "grows excited or agitated."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        FRONT_PIC(Tentacruel, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Tentacruel,
        OVERWORLD(
            sPicTable_Tentacruel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Tentacruel,
            gShinyOverworldPalette_Tentacruel
        )
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Tentacruel, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacruel),
        ICON(Tentacruel, 0),
        .footprint = gMonFootprint_Tentacruel,
        LEARNSETS(Tentacruel),
    },
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
#define KANTONIAN_GEODUDE_FAMILY_INFO                                       \
        .types = { TYPE_ROCK, TYPE_GROUND },                                \
        .itemRare = ITEM_EVERSTONE,                                         \
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL }

#define GEODUDE_FAMILY_MISC_INFO                                \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 15,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },  \
        .bodyColor = BODY_COLOR_BROWN

#define GEODUDE_MISC_INFO                                   \
        .baseHP        = 40,                                \
        .baseAttack    = 80,                                \
        .baseDefense   = 100,                               \
        .baseSpeed     = 20,                                \
        .baseSpAttack  = 30,                                \
        .baseSpDefense = 30,                                \
        .catchRate = 255,                                   \
        .expYield = 60,                                     \
        .speciesName = _("Geodude"),                        \
        .cryId = CRY_GEODUDE,                               \
        .natDexNum = NATIONAL_DEX_GEODUDE,                  \
        .categoryName = _("Rock"),                          \
        .height = 4,                                        \
        .pokemonScale = 347,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Geodude,                 \
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,   \
        GEODUDE_FAMILY_MISC_INFO

#define GRAVELER_MISC_INFO                                  \
        .baseHP        = 55,                                \
        .baseAttack    = 95,                                \
        .baseDefense   = 115,                               \
        .baseSpeed     = 55,                                \
        .baseSpAttack  = 45,                                \
        .baseSpDefense = 45,                                \
        .catchRate = 120,                                   \
        .expYield = 137,                                    \
        .speciesName = _("Graveler"),                       \
        .cryId = CRY_GRAVELER,                              \
        .natDexNum = NATIONAL_DEX_GRAVELER,                 \
        .categoryName = _("Rock"),                          \
        .height = 10,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 2,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Graveler,                \
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,  \
        GEODUDE_FAMILY_MISC_INFO

#define GOLEM_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#define GOLEM_MISC_INFO                                 \
        .baseHP        = 80,                            \
        .baseAttack    = 120,                  \
        .baseDefense   = 130,                           \
        .baseSpeed     = 75,                            \
        .baseSpAttack  = 45,                            \
        .baseSpDefense = 75,                            \
        .catchRate = 45,                                \
        .expYield = 223,                                \
        .evYield_Defense = 3,                           \
        .speciesName = _("Golem"),                      \
        .cryId = CRY_GOLEM,                             \
        .natDexNum = NATIONAL_DEX_GOLEM,                \
        .categoryName = _("Megaton"),                   \
        .footprint = gMonFootprint_Golem,               \
        .formSpeciesIdTable = sGolemFormSpeciesIdTable, \
        GEODUDE_FAMILY_MISC_INFO

    [SPECIES_GEODUDE] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .weight = 200,
        .description = COMPOUND_STRING(
            "It climbs mountain paths using only the\n"
            "power of its arms. Because they look just\n"
            "like boulders lining paths, hikers may step\n"
            "on them without noticing."),
        FRONT_PIC(Geodude, 64, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_Geodude,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        BACK_PIC(Geodude, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Geodude),
        ICON(Geodude, 1),
        LEARNSETS(Geodude),
        OVERWORLD(
            sPicTable_Geodude,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Geodude,
            gShinyOverworldPalette_Geodude
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER}),
    },

    [SPECIES_GRAVELER] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "They descend from mountains by tumbling\n"
            "down steep slopes. They are so brutal,\n"
            "they smash aside obstructing trees and\n"
            "massive boulders with thunderous tackles."),
        FRONT_PIC(Graveler, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Graveler,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Graveler, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Graveler),
        ICON(Graveler, 1),
        LEARNSETS(Graveler),
        OVERWORLD(
            sPicTable_Graveler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Graveler,
            gShinyOverworldPalette_Graveler
        )
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM}),
    },

    [SPECIES_GOLEM] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .height = 14,
        .weight = 3000,
        .description = COMPOUND_STRING(
            "It is said to live in volcanic craters\n"
            "on mountain peaks. Once a year, it sheds\n"
            "its hide and grows larger. The shed hide\n"
            "crumbles and returns to the soil."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Golem, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Golem,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Golem, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Golem),
        ICON(Golem, 2),
        LEARNSETS(Golem),
        OVERWORLD(
            sPicTable_Golem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golem,
            gShinyOverworldPalette_Golem
        )
    },

#if P_ALOLAN_FORMS
#define ALOLAN_GEODUDE_FAMILY_INFO                                              \
        .types = { TYPE_ROCK, TYPE_ELECTRIC },                                  \
        .isAlolanForm = TRUE

    [SPECIES_GEODUDE_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .weight = 203,
        .description = COMPOUND_STRING(
            "Its body is a magnetic stone. Iron sand\n"
            "attach to parts of its body with stronger\n"
            "magnetism. If you carelessly step on one,\n"
            "it will headbutt and shock you in anger."),
        FRONT_PIC(GeodudeAlolan, 48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_GeodudeAlolan,
        .evYield_Defense = 1,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        OVERWORLD(
            sPicTable_GeodudeAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GeodudeAlolan,
            gShinyOverworldPalette_GeodudeAlolan
        )
        .enemyMonElevation = 16,
        BACK_PIC(GeodudeAlolan, 64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
            .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        PALETTES(GeodudeAlolan),
        ICON(GeodudeAlolan, 2),
        LEARNSETS(GeodudeAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER_ALOLAN}),
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "When two GRAVELER smash each other over\n"
            "dravite, their favorite food, they cause\n"
            "flashes of light and booming noises.\n"
            "People call them “fireworks of the earth.”"),
        FRONT_PIC(GravelerAlolan, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_GravelerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GravelerAlolan, 64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
            .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        PALETTES(GravelerAlolan),
        ICON(GravelerAlolan, 2),
        .evYield_Defense = 2,
        LEARNSETS(GravelerAlolan),
        OVERWORLD(
            sPicTable_GravelerAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GravelerAlolan,
            gShinyOverworldPalette_GravelerAlolan
        )
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLAN},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLAN}),
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .height = 17,
        .weight = 3160,
        .description = COMPOUND_STRING(
            "It fires rocks charged with electricity.\n"
            "Even if the rock isn't fired that\n"
            "accurately, just grazing an opponent\n"
            "will cause numbness and fainting."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(GolemAlolan, 56, 64),
        .frontPicYOffset = 1,
            .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_DEMOLITIONIST },
        .frontAnimFrames = sAnims_GolemAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GolemAlolan, 64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GolemAlolan),
        ICON(GolemAlolan, 2),
        LEARNSETS(GolemAlolan),
        OVERWORLD(
            sPicTable_GolemAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GolemAlolan,
            gShinyOverworldPalette_GolemAlolan
        )
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
#define KANTONIAN_PONYTA_FAMILY_INFO                                                \
        .types = { TYPE_FIRE, TYPE_FIRE },                                          \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY },  \
        .bodyColor = BODY_COLOR_YELLOW

#define PONYTA_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define PONYTA_MISC_INFO                                \
        .baseHP        = 50,                            \
        .baseAttack    = 85,                            \
        .baseDefense   = 55,                            \
        .baseSpeed     = 90,                            \
        .baseSpAttack  = 65,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 190,                               \
        .expYield = 82,                                 \
        .evYield_Speed = 1,                             \
        .speciesName = _("Ponyta"),                     \
        .cryId = CRY_PONYTA,                            \
        .natDexNum = NATIONAL_DEX_PONYTA,               \
        .footprint = gMonFootprint_Ponyta,              \
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,\
        PONYTA_FAMILY_MISC_INFO

#define RAPIDASH_MISC_INFO                                  \
        .baseHP        = 65,                                \
        .baseAttack    = 100,                               \
        .baseDefense   = 70,                                \
        .baseSpeed     = 105,                               \
        .baseSpAttack  = 80,                                \
        .baseSpDefense = 80,                                \
        .catchRate = 60,                                    \
        .expYield = 175,                                    \
        .evYield_Speed = 2,                                 \
        .speciesName = _("Rapidash"),                       \
        .cryId = CRY_RAPIDASH,                              \
        .natDexNum = NATIONAL_DEX_RAPIDASH,                 \
        .height = 17,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 289,                                \
        .trainerOffset = 1,                                 \
        .footprint = gMonFootprint_Rapidash,                \
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,  \
        PONYTA_FAMILY_MISC_INFO

    [SPECIES_PONYTA] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .categoryName = _("Fire Horse"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING(
            "A Ponyta is very weak at birth. It can\n"
            "barely stand up. Its legs become stronger\n"
            "as it stumbles and falls while trying to\n"
            "keep up with its parent."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ponyta, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ponyta,
        .frontAnimId = ANIM_V_SHAKE,
        OVERWORLD(
            sPicTable_Ponyta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ponyta,
            gShinyOverworldPalette_Ponyta
        )
        .frontAnimDelay = 10,
        BACK_PIC(Ponyta, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Ponyta),
        ICON(Ponyta, 3),
        LEARNSETS(Ponyta),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH}),
    },

    [SPECIES_RAPIDASH] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .categoryName = _("Fire Horse"),
        .weight = 950,
        .description = COMPOUND_STRING(
            "It usually canters casually in the fields\n"
            "and plains. But once a Rapidash turns\n"
            "serious, its fiery manes flare and blaze\n"
            "as it gallops its way up to 150 mph."),
        FRONT_PIC(Rapidash, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rapidash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Rapidash, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Rapidash),
        OVERWORLD(
            sPicTable_Rapidash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rapidash,
            gShinyOverworldPalette_Rapidash
        )
        ICON(Rapidash, 3),
        LEARNSETS(Rapidash),
    },

#define GALARIAN_PONYTA_FAMILY_INFO                                                 \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },\
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .isGalarianForm = TRUE

#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .categoryName = _("Unique Horn"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Its small horn hides a healing power.\n"
            "This Pokémon will look into your eyes and\n"
            "read the contents of your heart. If it\n"
            "finds evil there, it promptly hides away."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PonytaGalarian, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_PonytaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PonytaGalarian, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PonytaGalarian),
        ICON(PonytaGalarian, 2),
        OVERWORLD(
            sPicTable_PonytaGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PonytaGalarian,
            gShinyOverworldPalette_PonytaGalarian
        )
        LEARNSETS(PonytaGalarian),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH_GALARIAN}),
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        .categoryName = _("Unique Horn"),
        .weight = 800,
        .description = COMPOUND_STRING(
            "Little can stand up to its psycho cut.\n"
            "Unleashed from this Pokémon's horn,\n"
            "the move will punch a hole right\n"
            "through a thick metal sheet."),
        FRONT_PIC(RapidashGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RapidashGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RapidashGalarian, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RapidashGalarian),
        ICON(RapidashGalarian, 2),
        LEARNSETS(RapidashGalarian),
        OVERWORLD(
            sPicTable_RapidashGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RapidashGalarian,
            gShinyOverworldPalette_RapidashGalarian
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
#define SLOWPOKE_MISC_INFO                                      \
        .baseHP        = 90,                                    \
        .baseAttack    = 65,                                    \
        .baseDefense   = 65,                                    \
        .baseSpeed     = 15,                                    \
        .baseSpAttack  = 40,                                    \
        .baseSpDefense = 40,                                    \
        .catchRate = 190,                                       \
        .expYield = 63,                                         \
        .evYield_HP = 1,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("Slowpoke"),                           \
        .natDexNum = NATIONAL_DEX_SLOWPOKE,                     \
        .categoryName = _("Dopey"),                             \
        .height = 12,                                           \
        .weight = 360,                                          \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 10,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Slowpoke,                    \
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable

#define SLOWBRO_MISC_INFO                                       \
        .catchRate = 75,                                        \
        .itemRare = ITEM_KINGS_ROCK,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("Slowbro"),                            \
        .cryId = CRY_SLOWBRO,                                   \
        .natDexNum = NATIONAL_DEX_SLOWBRO,                      \
        .categoryName = _("Hermit Crab"),                       \
        .footprint = gMonFootprint_Slowbro,                     \
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable

#define SLOWKING_MISC_INFO                                      \
        .catchRate = 70,                                        \
        .expYield = 172,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("Slowking"),                           \
        .cryId = CRY_SLOWKING,                                  \
        .natDexNum = NATIONAL_DEX_SLOWKING,                     \
        .weight = 795,                                          \
        .footprint = gMonFootprint_Slowking,                    \
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable

    [SPECIES_SLOWPOKE] =
    {
        SLOWPOKE_MISC_INFO,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .itemRare = ITEM_LAGGING_TAIL,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_SLOWPOKE,
        .description = COMPOUND_STRING(
            "It catches prey by dipping its tail in\n"
            "water at the side of a river. But it often\n"
            "forgets what it is doing and spends entire\n"
            "days just loafing at water's edge."),
        FRONT_PIC(Slowpoke, 64, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Slowpoke,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slowpoke, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Slowpoke),
        ICON(Slowpoke, 0),
        LEARNSETS(Slowpoke),
        OVERWORLD(
            sPicTable_Slowpoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowpoke,
            gShinyOverworldPalette_Slowpoke
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_SLOWBRO},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}),
    },

    [SPECIES_SLOWBRO] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .expYield = 172,
        .evYield_Defense = 2,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .height = 16,
        .weight = 785,
        .description = COMPOUND_STRING(
            "Its tail has a Shellder firmly attached\n"
            "with a bite. As a result, the tail can't be\n"
            "used for fishing anymore. This forces it\n"
            "to reluctantly swim and catch prey."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Slowbro, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Slowbro,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Slowbro, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Slowbro),
        ICON(Slowbro, 0),
        LEARNSETS(Slowbro),
        OVERWORLD(
            sPicTable_Slowbro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowbro,
            gShinyOverworldPalette_Slowbro
        )
        .formChangeTable = sSlowbroFormChangeTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("Royal"),
        .height = 20,
        .description = COMPOUND_STRING(
            "It undertakes research every day to\n"
            "solve the mysteries of the world.\n"
            "However, it apparently forgets everything\n"
            "if the Shellder on its head comes off."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Slowking, 48, 64),
        .frontPicYOffset = 1,
         OVERWORLD(
            sPicTable_Slowking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowking,
            gShinyOverworldPalette_Slowking
        )
        .frontAnimFrames = sAnims_Slowking,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Slowking, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Slowking),
        ICON(Slowking, 0),
        LEARNSETS(Slowking),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_SLOWBRO_MEGA] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .expYield = 207,
        .evYield_Defense = 2,
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When bathed in the energy of Mega\n"
            "Evolution, Shellder converts into\n"
            "impregnable armor. There is virtually no\n"
            "change in Slowpoke."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroMega, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowbroMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroMega, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(SlowbroMega),
        ICON(SlowbroMega, 0),
        LEARNSETS(Slowbro),
        .formChangeTable = sSlowbroFormChangeTable,
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        SLOWPOKE_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_SLOWPOKE_GALARIAN,
        .description = COMPOUND_STRING(
            "Although it is normally zoned out, its\n"
            "expression abruptly sharpens on occasion.\n"
            "The cause seems to lie in Slowpoke's diet,\n"
            "which also give their tails a spicy flavor."),
        FRONT_PIC(SlowpokeGalarian, 56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SlowpokeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowpokeGalarian, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowpokeGalarian),
        ICON(SlowpokeGalarian, 1),
        LEARNSETS(SlowpokeGalarian),
        OVERWORLD(
            sPicTable_SlowpokeGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowpokeGalarian,
            gShinyOverworldPalette_SlowpokeGalarian
        )
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_SLOWBRO_GALARIAN},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_SLOWKING_GALARIAN}),
    },

    [SPECIES_SLOWBRO_GALARIAN] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = { TYPE_POISON, TYPE_PSYCHIC },
        .expYield = 172,
        .evYield_Attack = 2,
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A Shellder bite set off a chemical reaction\n"
            "with the spices inside Slowbro's body,\n"
            "causing Slowbro to become a\n"
            "Poison-type Pokémon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroGalarian, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SlowbroGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroGalarian, 64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowbroGalarian),
        ICON(SlowbroGalarian, 0),
        LEARNSETS(SlowbroGalarian),
         OVERWORLD(
            sPicTable_SlowbroGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowbroGalarian,
            gShinyOverworldPalette_SlowbroGalarian
        )
        .isGalarianForm = TRUE,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALARIAN] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = { TYPE_POISON, TYPE_PSYCHIC },
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("Hexpert"),
        .height = 18,
        .description = COMPOUND_STRING(
            "A combination of toxins and the shock of\n"
            "evolving has increased Shellder's\n"
            "intelligence to the point that Shellder\n"
            "now controls Slowking."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(SlowkingGalarian, 48, 64),
        .frontPicYOffset = 0,
        OVERWORLD(
            sPicTable_SlowkingGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowkingGalarian,
            gShinyOverworldPalette_SlowkingGalarian
        )
        .frontAnimFrames = sAnims_SlowkingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowkingGalarian, 56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowkingGalarian),
        ICON(SlowkingGalarian, 2),
        LEARNSETS(SlowkingGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 190,
        .evYield_SpAttack = 1,
        .expYield = 65,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_STATIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnemite"),
        .cryId = CRY_MAGNEMITE,
        .natDexNum = NATIONAL_DEX_MAGNEMITE,
        .categoryName = _("Magnet"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "The units at its sides are extremely\n"
            "powerful magnets. They generate enough\n"
            "magnetism to draw in iron objects from\n"
            "over 300 meters away."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magnemite, 48, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_Magnemite,
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        OVERWORLD(
            sPicTable_Magnemite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magnemite,
            gShinyOverworldPalette_Magnemite
        )
        .enemyMonElevation = 17,
        BACK_PIC(Magnemite, 48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magnemite),
        ICON(Magnemite, 0),
        .footprint = gMonFootprint_Magnemite,
        LEARNSETS(Magnemite),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGNETON}),
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 60,
        .expYield = 163,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ELECTRIC_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magneton"),
        .cryId = CRY_MAGNETON,
        .natDexNum = NATIONAL_DEX_MAGNETON,
        .categoryName = _("Magnet"),
        .height = 10,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Many mysteriously appear when more sunspots\n"
            "dot the Sun. It normally fries any nearby\n"
            "electronic, but tame MAGNETONs can be taught\n"
            "to control this power."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magneton, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Magneton,
        .frontAnimId = ANIM_FLASH_YELLOW,
         OVERWORLD(
            sPicTable_Magneton,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magneton,
            gShinyOverworldPalette_Magneton
        )
        .enemyMonElevation = 9,
        BACK_PIC(Magneton, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magneton),
        ICON(Magneton, 0),
        .footprint = gMonFootprint_Magneton,
        LEARNSETS(Magneton),
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 30,
        .evYield_SpAttack = 3,
        .expYield = 241,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_ANALYTIC, ABILITY_LEVITATE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnezone"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("UFO"),
        .height = 12,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "It is constantly sending and receiving\n"
            "unintelligible signals. It seems to use\n"
            "a combination of magnetism and solar\n"
            "power in order to float."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magnezone, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magnezone,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        BACK_PIC(Magnezone, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magnezone),
        ICON(Magnezone, 0),
        .footprint = gMonFootprint_Magnezone,
        LEARNSETS(Magnezone),
        OVERWORLD(
            sPicTable_Magnezone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magnezone,
            gShinyOverworldPalette_Magnezone
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
#define FARFETCHD_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#define FARFETCHD_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .expYield = 132,                                                                  \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD }, \
        .bodyColor = BODY_COLOR_BROWN,                      \
        .speciesName = _("Farfetch'd"),                     \
        .cryId = CRY_FARFETCHD,                             \
        .natDexNum = NATIONAL_DEX_FARFETCHD,                \
        .categoryName = _("Wild Duck"),                     \
        .footprint = gMonFootprint_Farfetchd,               \
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable

    [SPECIES_FARFETCHD] =
    {
        FARFETCHD_MISC_INFO,
        .baseHP        = 52,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .baseAttack    = FARFETCHD_ATTACK,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .itemRare = ITEM_LEEK,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It is always seen with a stick from a plant.\n"
            "Apparently, there are good sticks and bad\n"
            "sticks. This Pokémon occasionally fights\n"
            "with others over choice sticks."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Farfetchd, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Farfetchd,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Farfetchd, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Farfetchd),
        ICON(Farfetchd, 1),
        LEARNSETS(Farfetchd),
         OVERWORLD(
            sPicTable_Farfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Farfetchd,
            gShinyOverworldPalette_Farfetchd
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        FARFETCHD_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_NORMAL},
        .abilities = {ABILITY_SCRAPPY, ABILITY_STAMINA},
        .height = 8,
        .weight = 420,
        .evYield_Attack = 1,
        .description = COMPOUND_STRING(
            "It is always seen with a stick from a plant.\n"
            "Apparently, there are good sticks and bad\n"
            "sticks. This Pokémon occasionally fights\n"
            "with others over choice sticks."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(FarfetchdGalarian, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_FarfetchdGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(FarfetchdGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(FarfetchdGalarian),
        ICON(FarfetchdGalarian, 1),
        LEARNSETS(FarfetchdGalarian),
        OVERWORLD(
            sPicTable_FarfetchdGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_FarfetchdGalarian,
            gShinyOverworldPalette_FarfetchdGalarian
        )
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SIRFETCHD},
                                {EVO_ITEM, ITEM_STRANGE_SOUVENIR, SPECIES_LUXWAN}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sirfetch'd"),
        .cryId = CRY_SIRFETCHD,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1170,
        .description = COMPOUND_STRING(
            "Only Farfetch'd that have survived many\n"
            "battles can attain this evolution. When\n"
            "this Pokémon's leek withers, it will\n"
            "retire from combat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sirfetchd, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sirfetchd, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sirfetchd),
        ICON(Sirfetchd, 1),
        .footprint = gMonFootprint_Sirfetchd,
         OVERWORLD(
            sPicTable_Sirfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sirfetchd,
            gShinyOverworldPalette_Sirfetchd
        )
        LEARNSETS(Sirfetchd),
       
    },



    [SPECIES_LUXWAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 110,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SNIPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Luxwan"),
        .cryId = CRY_LUXWAN,
        .natDexNum = NATIONAL_DEX_LUXWAN,
        .categoryName = _("Fancy Duck"),
        .height = 8,
        .weight = 1170,
        .description = COMPOUND_STRING(
            "An exceedingly rare POKéMON, seeing one\n"
            "is a sign of good luck. In a fight, it\n"
            "prefers to fight dirty and end the\n"
            "confrontation swiftly."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Luxwan, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Luxwan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Luxwan, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Luxwan),
        ICON(Luxwan, 1),
        .footprint = gMonFootprint_Luxwan,
        LEARNSETS(Luxwan),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 190,
        .expYield = 62,
        .evYield_Attack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Doduo"),
        .cryId = CRY_DODUO,
        .natDexNum = NATIONAL_DEX_DODUO,
        .categoryName = _("Twin Bird"),
        .height = 14,
        .weight = 392,
        .description = COMPOUND_STRING(
            "Even while eating or sleeping, one of the\n"
            "heads remains always vigilant for any sign\n"
            "of danger. When threatened, it flees at\n"
            "over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        FRONT_PIC(Doduo, 64, 56),
        FRONT_PIC_FEMALE(Doduo, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Doduo,

    OVERWORLD(
            sPicTable_Doduo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Doduo,
            gShinyOverworldPalette_Doduo
        )
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        BACK_PIC(Doduo, 64, 56),
        BACK_PIC_FEMALE(Doduo, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Doduo),
        ICON(Doduo, 2),
        .footprint = gMonFootprint_Doduo,
        LEARNSETS(Doduo),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_DODRIO}),
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 110 : 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dodrio"),
        .cryId = CRY_DODRIO,
        .natDexNum = NATIONAL_DEX_DODRIO,
        .categoryName = _("Triple Bird"),
        .height = 18,
        .weight = 852,
        .description = COMPOUND_STRING(
            "A peculiar Pokémon species with three\n"
            "heads. It vigorously races across grassy\n"
            "plains even in arid seasons with little\n"
            "rainfall."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        FRONT_PIC(Dodrio, 64, 64),
        FRONT_PIC_FEMALE(Dodrio, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dodrio,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Dodrio, 64, 64),
        OVERWORLD(
            sPicTable_Dodrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dodrio,
            gShinyOverworldPalette_Dodrio
        )
        BACK_PIC_FEMALE(Dodrio, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Dodrio),
        ICON(Dodrio, 2),
        .footprint = gMonFootprint_Dodrio,
        LEARNSETS(Dodrio),
    },
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Seel"),
        .cryId = CRY_SEEL,
        .natDexNum = NATIONAL_DEX_SEEL,
        .categoryName = _("Sea Lion"),
        .height = 11,
        .weight = 900,
        .description = COMPOUND_STRING(
            "Seel hunt for prey in frigid, ice-covered\n"
            "seas. When it needs to breathe, it punches\n"
            "a hole through the ice with the sharply\n"
            "protruding section of its head."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seel, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Seel,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        OVERWORLD(
            sPicTable_Seel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Seel,
            gShinyOverworldPalette_Seel
        )
        BACK_PIC(Seel, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Seel),
        ICON(Seel, 0),
        .footprint = gMonFootprint_Seel,
        LEARNSETS(Seel),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEWGONG}),
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dewgong"),
        .cryId = CRY_DEWGONG,
        .natDexNum = NATIONAL_DEX_DEWGONG,
        .categoryName = _("Sea Lion"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "It loves to snooze on bitterly cold ice.\n"
            "The sight of this Pokémon sleeping on\n"
            "a glacier was mistakenly thought to be\n"
            "a mermaid by a mariner long ago."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        FRONT_PIC(Dewgong, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dewgong,
        OVERWORLD(
            sPicTable_Dewgong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dewgong,
            gShinyOverworldPalette_Dewgong
        )
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Dewgong, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dewgong),
        ICON(Dewgong, 2),
        .footprint = gMonFootprint_Dewgong,
        LEARNSETS(Dewgong),
    },
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
#define GRIMER_FAMILY_MISC_INFO                                     \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }

#define GRIMER_MISC_INFO                                \
        .baseHP        = 80,                            \
        .baseAttack    = 80,                            \
        .baseDefense   = 50,                            \
        .baseSpeed     = 25,                            \
        .baseSpAttack  = 40,                            \
        .baseSpDefense = 50,                            \
        .catchRate = 190,                               \
        .expYield = 65,                                 \
        .speciesName = _("Grimer"),                     \
        .cryId = CRY_GRIMER,                            \
        .natDexNum = NATIONAL_DEX_GRIMER,               \
        .categoryName = _("Sludge"),                    \
        .footprint = gMonFootprint_Grimer,              \
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,\
        GRIMER_FAMILY_MISC_INFO

#define MUK_MISC_INFO                                   \
        .baseHP        = 105,                           \
        .baseAttack    = 105,                           \
        .baseDefense   = 95,                            \
        .baseSpeed     = 50,                            \
        .baseSpAttack  = 65,                            \
        .baseSpDefense = 100,                           \
        .catchRate = 75,                                \
        .expYield = 175,                                \
        .speciesName = _("Muk"),                        \
        .cryId = CRY_MUK,                               \
        .natDexNum = NATIONAL_DEX_MUK,                  \
        .categoryName = _("Sludge"),                    \
        .footprint = gMonFootprint_Muk,                 \
        .formSpeciesIdTable = sMukFormSpeciesIdTable,   \
        GRIMER_FAMILY_MISC_INFO

#define KANTONIAN_GRIMER_FAMILY_INFO                                                \
        .types = { TYPE_POISON, TYPE_POISON },                                      \
         .bodyColor = BODY_COLOR_PURPLE

    [SPECIES_GRIMER] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 9,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Born from extreme pollution, Grimer's\n"
            "favorite food is anything filthy.\n"
            "They feed on wastewater pumped out from\n"
            "factories."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .evYield_HP = 1,
        FRONT_PIC(Grimer, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Grimer,
         OVERWORLD(
            sPicTable_Grimer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Grimer,
            gShinyOverworldPalette_Grimer
        )
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Grimer, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_STICKY_HOLD, ABILITY_POISON_POINT},
        PALETTES(Grimer),
        ICON(Grimer, 2),
        LEARNSETS(Grimer),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK}),
    },

    [SPECIES_MUK] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        MUK_MISC_INFO,
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING(
            "MUK can regenerate its body by absorbing\n"
            "garbage. Its mere presence makes all\n"
            "plants around itself wither. Lately,\n"
            "their numbers have been increasing."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Muk, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Muk,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        OVERWORLD(
            sPicTable_Muk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Muk,
            gShinyOverworldPalette_Muk
        )
        .frontAnimDelay = 45,
        BACK_PIC(Muk, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_STICKY_HOLD, ABILITY_NOXIOUS_FUMES},
        PALETTES(Muk),
        ICON(Muk, 2),
        LEARNSETS(Muk),
    },

#if P_ALOLAN_FORMS
#define ALOLAN_GRIMER_FAMILY_INFO                                                           \
        .types = { TYPE_POISON, TYPE_DARK },                                                \
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },  \
        .bodyColor = BODY_COLOR_GREEN,                                                      \
        .isAlolanForm = TRUE

    [SPECIES_GRIMER_ALOLAN] =
    {
        ALOLAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING(
            "There are a hundred or so of them living\n"
            "in Alola's waste-disposal site. They're all\n"
            "hard workers who eat a lot of trash. Grimer\n"
            "seems to relish any and all kinds of trash."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrimerAlolan, 56, 48),
        .frontPicYOffset = 11,
         OVERWORLD(
            sPicTable_GrimerAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrimerAlolan,
            gShinyOverworldPalette_GrimerAlolan
        )
        .frontAnimFrames = sAnims_GrimerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrimerAlolan, 64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrimerAlolan),
        ICON(GrimerAlolan, 1),
        LEARNSETS(GrimerAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK_ALOLAN}),
    },

    [SPECIES_MUK_ALOLAN] =
    {
        MUK_MISC_INFO,
        ALOLAN_GRIMER_FAMILY_INFO,
        .noFlip = TRUE,
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING(
            "While it's unexpectedly quiet and friendly,\n"
            "if it's not fed any trash for a while,,\n"
            "it will smash its Trainer's furnishings,\n"
            "and eat up the fragments."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MukAlolan, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MukAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MukAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MukAlolan),
        ICON(MukAlolan, 0),
        LEARNSETS(MukAlolan),
        OVERWORLD(
            sPicTable_MukAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MukAlolan,
            gShinyOverworldPalette_MukAlolan
        )
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 61,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_SNOW_CLOAK},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shellder"),
        .cryId = CRY_SHELLDER,
        .natDexNum = NATIONAL_DEX_SHELLDER,
        .categoryName = _("Bivalve"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "At night, it burrows a hole in the seafloor\n"
            "with its tongue hanging out. It likes to\n"
            "bite on fishing lines and especially\n"
            "on SLOWPOKE tails."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shellder, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellder,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        BACK_PIC(Shellder, 48, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Shellder),
        ICON(Shellder, 2),
        .footprint = gMonFootprint_Shellder,
        LEARNSETS(Shellder),
        OVERWORLD(
            sPicTable_Shellder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Shellder,
            gShinyOverworldPalette_Shellder
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}),
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 60,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_SNOW_CLOAK},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cloyster"),
        .cryId = CRY_CLOYSTER,
        .natDexNum = NATIONAL_DEX_CLOYSTER,
        .categoryName = _("Bivalve"),
        .height = 15,
        .weight = 1325,
        .description = COMPOUND_STRING(
            "It swims in the sea by swallowing water,\n"
            "then jetting it out toward the rear.\n"
            "Cloyster shoots spikes from its\n"
            "shell using the same system."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        FRONT_PIC(Cloyster, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cloyster,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Cloyster, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Cloyster),
        ICON(Cloyster, 2),
        .footprint = gMonFootprint_Cloyster,
        LEARNSETS(Cloyster),
        OVERWORLD(
            sPicTable_Cloyster,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Cloyster,
            gShinyOverworldPalette_Cloyster
        )
    },
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 190,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_MIASMA_FORCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gastly"),
        .cryId = CRY_GASTLY,
        .natDexNum = NATIONAL_DEX_GASTLY,
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
        .description = COMPOUND_STRING(
            "When exposed to a strong wind, a Gastly's\n"
            "gaseous body quickly dwindles away.\n"
            "They cluster under the eaves of houses\n"
            "to escape the ravages of wind."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gastly, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Gastly,
        .frontAnimId = ANIM_SHRINK_GROW,
        OVERWORLD(
            sPicTable_Gastly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Gastly,
            gShinyOverworldPalette_Gastly
        )
        .enemyMonElevation = 13,
        BACK_PIC(Gastly, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Gastly),
        ICON(Gastly, 2),
        .footprint = gMonFootprint_Gastly,
        LEARNSETS(Gastly),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_HAUNTER}),
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 90,
        .expYield = 142,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_MIASMA_FORCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Haunter"),
        .cryId = CRY_HAUNTER,
        .natDexNum = NATIONAL_DEX_HAUNTER,
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
        .description = COMPOUND_STRING(
            "If a Haunter beckons you while it is\n"
            "floating in darkness, don't approach it.\n"
            "This Pokémon will try to lick you with its\n"
            "tongue and steal your life away."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        OVERWORLD(
            sPicTable_Haunter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Haunter,
            gShinyOverworldPalette_Haunter
        )
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Haunter, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Haunter,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = 14,
        BACK_PIC(Haunter, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Haunter),
        ICON(Haunter, 2),
        .footprint = gMonFootprint_Haunter,
        LEARNSETS(Haunter),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GENGAR},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GENGAR}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define GENGAR_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_MIASMA_FORCE}
#else
#define GENGAR_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE}
#endif

#define GENGAR_MISC_INFO                                            \
        .types = { TYPE_GHOST, TYPE_POISON },                       \
        .catchRate = 45,                                            \
        .evYield_SpAttack = 3,                                      \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },  \
        .bodyColor = BODY_COLOR_PURPLE,                             \
        .speciesName = _("Gengar"),                                 \
        .natDexNum = NATIONAL_DEX_GENGAR,                           \
        .categoryName = _("Shadow"),                                \
        .footprint = gMonFootprint_Gengar,                          \
        LEARNSETS(Gengar),                                          \
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,            \
        .formChangeTable = sGengarFormChangeTable

    [SPECIES_GENGAR] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
        .abilities = GENGAR_ABILITIES,
        .height = 15,
        .weight = 405,
        OVERWORLD(
            sPicTable_Gengar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gengar,
            gShinyOverworldPalette_Gengar
        )
        .description = COMPOUND_STRING(
            "Deep in the night, your shadow cast by\n"
            "a streetlight may suddenly overtake you.\n"
            "It is actually a Gengar running past\n"
            "you, pretending to be your shadow."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(Gengar, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gengar,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        BACK_PIC(Gengar, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Gengar),
        ICON(Gengar, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GENGAR_MEGA] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .expYield = 270,
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .isMegaEvolution = TRUE,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Gengar's relationships are warped. It\n"
            "tries to take the lives of anyone and\n"
            "everyone. It will even try to curse the\n"
            "Trainer who is its master!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarMega, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(GengarMega),
        ICON(GengarMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GIGANTAMAX] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
        .abilities = GENGAR_ABILITIES,
        .isGigantamax = TRUE,
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rumor has it that its gigantic\n"
            "mouth leads not into its body, filled\n"
            "with cursed energy, but instead\n"
            "directly to the afterlife."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarGigantamax, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarGigantamax, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GengarGigantamax),
        ICON(GengarGigantamax, 2),
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
    [SPECIES_ONIX] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 77,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_ROCK_HEAD, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Onix"),
        .cryId = CRY_ONIX,
        .natDexNum = NATIONAL_DEX_ONIX,
        .categoryName = _("Rock Snake"),
        .height = 88,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "It rapidly burrows to the ground, causing\n"
            "tremors and feeding on large boulder. As it\n"
            "grows older, its body becomes steadily\n"
            "rounder and smoother."),
        .pokemonScale = 256,
        OVERWORLD(
            sPicTable_Onix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Onix,
            gShinyOverworldPalette_Onix
        )
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(Onix, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Onix,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Onix, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Onix),
        ICON(Onix, 2),
        .footprint = gMonFootprint_Onix,
        LEARNSETS(Onix),
        .evolutions = EVOLUTION(
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}),
    },

#if P_GEN_2_CROSS_EVOS
#define STEELIX_MISC_INFO                                       \
        .types = { TYPE_STEEL, TYPE_GROUND },                   \
        .catchRate = 25,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },  \
        .bodyColor = BODY_COLOR_GRAY,                           \
        .speciesName = _("Steelix"),                            \
        .natDexNum = NATIONAL_DEX_STEELIX,                      \
        .categoryName = _("Iron Snake"),                        \
        .footprint = gMonFootprint_Steelix,                     \
        LEARNSETS(Steelix),                                     \
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,       \
        .formChangeTable = sSteelixFormChangeTable

    [SPECIES_STEELIX] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .expYield = 179,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_SAND_SPIT, ABILITY_SAND_VEIL},
        .cryId = CRY_STEELIX,
        .height = 92,
        .evYield_Defense = 2,
        .weight = 4000,
        .description = COMPOUND_STRING(
            "STEELIX live even further underground\n"
            "than ONIX. This Pokémon is known to dig\n"
            "toward the earth's core, reaching a depth\n"
            "of over six-tenths of a mile underground."),
        .pokemonScale = 256,
        OVERWORLD(
            sPicTable_Steelix,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Steelix,
            gShinyOverworldPalette_Steelix
        )
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(Steelix, 64, 64),
        FRONT_PIC_FEMALE(Steelix, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Steelix,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        BACK_PIC(Steelix, 64, 64),
        BACK_PIC_FEMALE(Steelix, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Steelix),
        ICON(Steelix, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_STEELIX_MEGA] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 214,
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .cryId = CRY_STEELIX_MEGA,
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING(
            "The cells within its body, crystallized by\n"
            "the energy produced from Mega Evolution,\n"
            "are stronger than any mineral and able\n"
            "to withstand any temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(SteelixMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SteelixMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SteelixMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(SteelixMega),
        ICON(SteelixMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 190,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Drowzee"),
        .cryId = CRY_DROWZEE,
        .natDexNum = NATIONAL_DEX_DROWZEE,
        .categoryName = _("Hypnosis"),
        .height = 10,
        .weight = 324,
        .description = COMPOUND_STRING(
            "If your nose becomes itchy while you are\n"
            "sleeping, it's a sure sign that a Drowzee is\n"
            "standing above your pillow and trying to\n"
            "eat your dream through your nostrils."),
        .pokemonScale = 274,
        OVERWORLD(
            sPicTable_Drowzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drowzee,
            gShinyOverworldPalette_Drowzee
        )
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Drowzee, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drowzee,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        BACK_PIC(Drowzee, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Drowzee),
        ICON(Drowzee, 2),
        .footprint = gMonFootprint_Drowzee,
        LEARNSETS(Drowzee),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_HYPNO}),
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 75,
        .expYield = 169,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Hypno"),
        .cryId = CRY_HYPNO,
        .natDexNum = NATIONAL_DEX_HYPNO,
        .categoryName = _("Hypnosis"),
        .height = 16,
        .weight = 756,
        .description = COMPOUND_STRING(
            "The arcing movement and glitter of the\n"
            "pendulum in a Hypno's hand lull the foe\n"
            "into deep hypnosis. While searching for\n"
            "prey, it polishes the pendulum."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        OVERWORLD(
            sPicTable_Hypno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hypno,
            gShinyOverworldPalette_Hypno
        )
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hypno, 64, 64),
        FRONT_PIC_FEMALE(Hypno, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Hypno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Hypno, 64, 56),
        BACK_PIC_FEMALE(Hypno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Hypno),
        ICON(Hypno, 2),
        .footprint = gMonFootprint_Hypno,
        LEARNSETS(Hypno),
    },
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Krabby"),
        .cryId = CRY_KRABBY,
        .natDexNum = NATIONAL_DEX_KRABBY,
        OVERWORLD(
            sPicTable_Krabby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Krabby,
            gShinyOverworldPalette_Krabby
        )
        .categoryName = _("River Crab"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Krabby live in holes dug into beaches.\n"
            "On sandy shores with little in the way\n"
            "of food, they can be seen squabbling with\n"
            "each other over territory."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Krabby, 64, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Krabby,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Krabby, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Krabby),
        ICON(Krabby, 0),
        .footprint = gMonFootprint_Krabby,
        LEARNSETS(Krabby),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KINGLER}),
    },

#define KINGLER_MISC_INFO                                                               \
        .baseHP        = 55,                                                            \
        .baseAttack    = 130,                                                           \
        .baseDefense   = 115,                                                           \
        .baseSpeed     = 75,                                                            \
        .baseSpAttack  = 50,                                                            \
        .baseSpDefense = 50,                                                            \
        .types = { TYPE_WATER, TYPE_WATER },                                            \
        .catchRate = 60,                                                                \
        .expYield = 166,                                                                \
        .evYield_Attack = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },                          \
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },\
        .bodyColor = BODY_COLOR_RED,                                                    \
        .noFlip = TRUE,                                                                 \
        .speciesName = _("Kingler"),                                                    \
        .cryId = CRY_KINGLER,                                                           \
        .natDexNum = NATIONAL_DEX_KINGLER,                                              \
        .categoryName = _("Pincer"),                                                    \
        .footprint = gMonFootprint_Kingler,                                             \
        LEARNSETS(Kingler),                                                             \
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,                               \
        .formChangeTable = sKinglerFormChangeTable

    [SPECIES_KINGLER] =
    {
        KINGLER_MISC_INFO,
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING(
            "It waves its huge, oversized claw in the\n"
            "air to communicate with others.\n"
            "But since the claw is so heavy, this\n"
            "Pokémon quickly tires."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        OVERWORLD(
            sPicTable_Kingler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kingler,
            gShinyOverworldPalette_Kingler
        )
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kingler, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kingler,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 4,
        BACK_PIC(Kingler, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Kingler),
        ICON(Kingler, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GIGANTAMAX] =
    {
        KINGLER_MISC_INFO,
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flow of Gigantamax energy has\n"
            "spurred this Pokémon's left pincer\n"
            "to grow to an enormous size. That\n"
            "claw can pulverize anything."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(KinglerGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KinglerGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KinglerGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(KinglerGigantamax),
        ICON(KinglerGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
#define VOLTORB_FAMILY_MISC_INFO                                                \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },                  \
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH }, \
        .bodyColor = BODY_COLOR_RED

#define VOLTORB_MISC_INFO                                   \
        .baseHP        = 40,                                \
        .baseAttack    = 30,                                \
        .baseDefense   = 50,                                \
        .baseSpeed     = 100,                               \
        .baseSpAttack  = 55,                                \
        .baseSpDefense = 55,                                \
        .catchRate = 190,                                   \
        .expYield = 66,                                     \
        .evYield_Speed = 1,                                 \
        .cryId = CRY_VOLTORB,                               \
        .natDexNum = NATIONAL_DEX_VOLTORB,                  \
        .height = 5,                                        \
        .pokemonScale = 364,                                \
        .pokemonOffset = -8,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Voltorb,                 \
        VOLTORB_FAMILY_MISC_INFO

#define ELECTRODE_MISC_INFO                                     \
        .baseHP        = 60,                                    \
        .baseAttack    = 50,                                    \
        .baseDefense   = 90,                                    \
        .baseSpAttack  = 85,                                    \
        .baseSpDefense = 80,                                    \
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,  \
        .catchRate = 60,                                        \
        .expYield = 172,                                        \
        .speciesName = _("Electrode"),                          \
        .cryId = CRY_ELECTRODE,                                 \
        .evYield_Speed = 3,                                 \
        .natDexNum = NATIONAL_DEX_ELECTRODE,                    \
        .height = 12,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Electrode,                   \
        VOLTORB_FAMILY_MISC_INFO

    [SPECIES_VOLTORB] =
    {
        VOLTORB_MISC_INFO,
        .speciesName = _("Voltorb"),
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .categoryName = _("Ball"),
        .weight = 104,
        .description = COMPOUND_STRING(
            "It bears an uncanny and unexplained\n"
            "resemblance to a Poké Ball. Because it\n"
            "explodes at the slightest shock, even\n"
            "veteran Trainers treat it with caution."),
        FRONT_PIC(Voltorb, 32, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Voltorb,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Voltorb, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Voltorb),
        ICON(Voltorb, 0),
         OVERWORLD(
            sPicTable_Voltorb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Voltorb,
            gShinyOverworldPalette_Voltorb
        )
        LEARNSETS(Voltorb),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTRODE}),
    },

    [SPECIES_ELECTRODE] =
    {
        ELECTRODE_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .categoryName = _("Ball"),
        .weight = 666,
        .description = COMPOUND_STRING(
            "They appear in great numbers at electric\n"
            "power plants. Because they feed on\n"
            "electricity, they cause massive and\n"
            "chaotic blackouts in nearby cities."),
        FRONT_PIC(Electrode, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Electrode,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        BACK_PIC(Electrode, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Electrode),
        OVERWORLD(
            sPicTable_Electrode,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Electrode,
            gShinyOverworldPalette_Electrode
        )
        ICON(Electrode, 0),
        LEARNSETS(Electrode),
    },

#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUIAN] =
    {
        VOLTORB_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_GRASS },
        .categoryName = _("Sphere"),
        .weight = 130,
        .description = COMPOUND_STRING(
            "It resembles a wooden POKé BALL.\n"
            "It rolls around covering itself in\n"
            "grass, using it to build up static\n"
            "electricity to unleash later."),
        FRONT_PIC(VoltorbHisuian, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_VoltorbHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VoltorbHisuian, 48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VoltorbHisuian),
        OVERWORLD(
            sPicTable_VoltorbHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VoltorbHisuian,
            gShinyOverworldPalette_VoltorbHisuian
        )
        ICON(VoltorbHisuian, 0),
        LEARNSETS(VoltorbHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ELECTRODE_HISUIAN}),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        ELECTRODE_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_GRASS },
        .categoryName = _("Sphere"),
        .weight = 710,
        .description = COMPOUND_STRING(
            "The surface of its body is very conductive,\n"
            "and charges at the slight touch.\n"
            "When irritated, it lets loose an electric\n"
            "current equal to 20 lightning bolts."),
        FRONT_PIC(ElectrodeHisuian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_ElectrodeHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ElectrodeHisuian, 64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ElectrodeHisuian),
        ICON(ElectrodeHisuian, 1),
        OVERWORLD(
            sPicTable_ElectrodeHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ElectrodeHisuian,
            gShinyOverworldPalette_ElectrodeHisuian
        )
        LEARNSETS(ElectrodeHisuian),
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 90,
        .expYield = 65,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_HARVEST, ABILITY_TELEPATHY, ABILITY_SEED_SOWER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Exeggcute"),
        .cryId = CRY_EXEGGCUTE,
        .natDexNum = NATIONAL_DEX_EXEGGCUTE,
        .categoryName = _("Egg"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING(
            "Even if it looks like eggs, it's actually\n"
            "closer to a kind of plant seed. They\n"
            "appear to share a single mind thanks to\n"
            "their telepathy."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Exeggcute, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Exeggcute,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Exeggcute, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Exeggcute),
        ICON(Exeggcute, 0),
        OVERWORLD(
            sPicTable_Exeggcute,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Exeggcute,
            gShinyOverworldPalette_Exeggcute
        )
        .footprint = gMonFootprint_Exeggcute,
        LEARNSETS(Exeggcute),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR},
                                {EVO_NONE, 0, SPECIES_EXEGGUTOR_ALOLAN}),
    },

#define EXEGGUTOR_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .expYield = 186,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },  \
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .speciesName = _("Exeggutor"),                      \
        .cryId = CRY_EXEGGUTOR,                             \
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,                \
        .categoryName = _("Coconut"),                       \
        .footprint = gMonFootprint_Exeggutor,               \
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable

#define EXEGGUTOR_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

    [SPECIES_EXEGGUTOR] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .abilities = { ABILITY_HARVEST, ABILITY_TELEPATHY, ABILITY_SEED_SOWER },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Unlike its pre-evolution, its head are\n"
            "able to think indipendently. They argue\n"
            "a lot, and because of this EXEGGUTOR can\n"
            "often be found in a cranky mood."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .evYield_SpAttack = 2,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Exeggutor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exeggutor,
        OVERWORLD(
            sPicTable_Exeggutor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Exeggutor,
            gShinyOverworldPalette_Exeggutor
        )
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Exeggutor, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Exeggutor),
        ICON(Exeggutor, 1),
        LEARNSETS(Exeggutor),
    },

#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .height = 109,
        .weight = 4156,

        .description = COMPOUND_STRING(
            "Alola is the best environment for\n"
            "this Pokémon. Local people take pride\n"
            "in its appearance, saying this is how\n"
            "Exeggutor ought to look."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(ExeggutorAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ExeggutorAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ExeggutorAlolan, 64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ExeggutorAlolan),
        ICON(ExeggutorAlolan, 1),
        LEARNSETS(ExeggutorAlolan),
        OVERWORLD(
            sPicTable_ExeggutorAlolan,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ExeggutorAlolan,
            gShinyOverworldPalette_ExeggutorAlolan
        )
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 190,
        .expYield = 64,
        .evYield_Defense = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Cubone"),
        .cryId = CRY_CUBONE,
        .natDexNum = NATIONAL_DEX_CUBONE,
        .categoryName = _("Lonely"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "It pines for the mother it will never see\n"
            "again. Seeing a likeness of its mother in\n"
            "the full moon, it cries. The stains on the\n"
            "skull it wears are from its tears."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cubone, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cubone,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 30,
        BACK_PIC(Cubone, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Cubone),
        ICON(Cubone, 2),
        .footprint = gMonFootprint_Cubone,
        LEARNSETS(Cubone),
        OVERWORLD(
            sPicTable_Cubone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cubone,
            gShinyOverworldPalette_Cubone
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MAROWAK},
                                {EVO_NONE, 0, SPECIES_MAROWAK_ALOLAN}),
    },

#define MAROWAK_MISC_INFO                                       \
        .baseHP        = 60,                                    \
        .baseAttack    = 80,                                    \
        .baseDefense   = 110,                                   \
        .baseSpeed     = 45,                                    \
        .baseSpAttack  = 50,                                    \
        .baseSpDefense = 80,                                    \
        .catchRate = 75,                                        \
        .expYield = 149,                                        \
        .evYield_Defense = 2,                                   \
        .itemRare = ITEM_THICK_CLUB,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .speciesName = _("Marowak"),                            \
        .cryId = CRY_MAROWAK,                                   \
        .natDexNum = NATIONAL_DEX_MAROWAK,                      \
        .categoryName = _("Bone Keeper"),                       \
        .height = 10,                                           \
        .pokemonScale = 293,                                    \
        .pokemonOffset = 12,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Marowak,                     \
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable

    [SPECIES_MAROWAK] =
    {
        MAROWAK_MISC_INFO,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 450,
        .description = COMPOUND_STRING(
            "A Marowak is the evolved form of a Cubone\n"
            "that has grown tough by overcoming the\n"
            "grief of losing its mother. Its tempered\n"
            "and hardened spirit is not easily broken."),
        FRONT_PIC(Marowak, 56, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Marowak,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Marowak, 48, 56),
        OVERWORLD(
            sPicTable_Marowak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marowak,
            gShinyOverworldPalette_Marowak
        )
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Marowak),
        ICON(Marowak, 2),
        LEARNSETS(Marowak),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLAN] =
    {
        MAROWAK_MISC_INFO,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_PURPLE,
        .weight = 340,
        .description = COMPOUND_STRING(
            "The cursed flames that light up the bone\n"
            "carried by this Pokémon are said\n"
            "to cause both mental and physical\n"
            "pain that will never fade."),
        FRONT_PIC(MarowakAlolan, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlolan,
        OVERWORLD(
            sPicTable_MarowakAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MarowakAlolan,
            gShinyOverworldPalette_MarowakAlolan
        )
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,

        BACK_PIC(MarowakAlolan, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MarowakAlolan),
        ICON(MarowakAlolan, 1),
        LEARNSETS(MarowakAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 42,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tyrogue"),
        .cryId = CRY_TYROGUE,
        .natDexNum = NATIONAL_DEX_TYROGUE,
        .categoryName = _("Scuffle"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Tyrogue become stressed out if they do\n"
            "not get to train every day. When raising\n"
            "this Pokémon, the Trainer must establish\n"
            "a regular training schedule."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tyrogue, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Tyrogue,
        OVERWORLD(
            sPicTable_Tyrogue,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tyrogue,
            gShinyOverworldPalette_Tyrogue
        )
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Tyrogue, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Tyrogue),
        ICON(Tyrogue, 2),
        .footprint = gMonFootprint_Tyrogue,
        LEARNSETS(Tyrogue),
        .evolutions = EVOLUTION({EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                                {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                                {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_LIMBER, ABILITY_RECKLESS, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmonlee"),
        .cryId = CRY_HITMONLEE,
        .natDexNum = NATIONAL_DEX_HITMONLEE,
        .categoryName = _("Kicking"),
        .height = 15,
        .weight = 498,
        .description = COMPOUND_STRING(
            "Its legs freely stretch and contract.\n"
            "Using these springlike limbs, it bowls over\n"
            "foes with devastating kicks. After battle,\n"
            "it rubs down its tired legs."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        FRONT_PIC(Hitmonlee, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Hitmonlee,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        OVERWORLD(
            sPicTable_Hitmonlee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonlee,
            gShinyOverworldPalette_Hitmonlee
        )
        BACK_PIC(Hitmonlee, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Hitmonlee),
        ICON(Hitmonlee, 2),
        .footprint = gMonFootprint_Hitmonlee,
        LEARNSETS(Hitmonlee),
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmonchan"),
        .cryId = CRY_HITMONCHAN,
        .natDexNum = NATIONAL_DEX_HITMONCHAN,
        .categoryName = _("Punching"),
        .height = 14,
        .weight = 502,
        .description = COMPOUND_STRING(
            "A Hitmonchan is said to possess the\n"
            "spirit of a boxer who aimed to become the\n"
            "world champion. Having an indomitable\n"
            "spirit means that it will never give up."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        FRONT_PIC(Hitmonchan, 48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Hitmonchan,
        OVERWORLD(
            sPicTable_Hitmonchan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonchan,
            gShinyOverworldPalette_Hitmonchan
        )
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Hitmonchan, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Hitmonchan),
        ICON(Hitmonchan, 2),
        .footprint = gMonFootprint_Hitmonchan,
        LEARNSETS(Hitmonchan),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmontop"),
        .cryId = CRY_HITMONTOP,
        .natDexNum = NATIONAL_DEX_HITMONTOP,
        .categoryName = _("Handstand"),
        .height = 14,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Its technique of kicking while spinning is\n"
            "a remarkable mix of both offense and\n"
            "defense. Hitmontop travel faster\n"
            "spinning than they do walking."),
        .pokemonScale = 256,
        OVERWORLD(
            sPicTable_Hitmontop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmontop,
            gShinyOverworldPalette_Hitmontop
        )
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hitmontop, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Hitmontop,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Hitmontop, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        PALETTES(Hitmontop),
        ICON(Hitmontop, 2),
        .footprint = gMonFootprint_Hitmontop,
        LEARNSETS(Hitmontop),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 77,
        .evYield_HP = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickitung"),
        .cryId = CRY_LICKITUNG,
        .natDexNum = NATIONAL_DEX_LICKITUNG,
        .categoryName = _("Licking"),
        .height = 12,
        .weight = 655,
        .description = COMPOUND_STRING(
            "Whenever it sees something unfamiliar,\n"
            "it always licks the object because it\n"
            "memorizes things by texture and taste.\n"
            "It is somewhat put off by sour things."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lickitung, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lickitung,
        OVERWORLD(
            sPicTable_Lickitung,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickitung,
            gShinyOverworldPalette_Lickitung
        )
        BACK_PIC(Lickitung, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Lickitung),
        ICON(Lickitung, 0),
        .footprint = gMonFootprint_Lickitung,
        LEARNSETS(Lickitung),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 180,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickilicky"),
        .cryId = CRY_LICKILICKY,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .description = COMPOUND_STRING(
            "The long tongue is always soggy with\n"
            "slobber. The saliva contains a solvent\n"
            "that causes numbness. Getting too close\n"
            "to it will leave you soaked with drool."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        FRONT_PIC(Lickilicky, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lickilicky, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Lickilicky),
        ICON(Lickilicky, 1),
        .footprint = gMonFootprint_Lickilicky,
        LEARNSETS(Lickilicky),
        OVERWORLD(
            sPicTable_Lickilicky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickilicky,
            gShinyOverworldPalette_Lickilicky
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 190,
        .expYield = 68,
        .evYield_Defense = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Koffing"),
        .cryId = CRY_KOFFING,
        .natDexNum = NATIONAL_DEX_KOFFING,
        .categoryName = _("Poison Gas"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Getting up close to a Koffing will give\n"
            "you a chance to observe, through its thin\n"
            "skin, the toxic gases swirling inside. It\n"
            "blows up at the slightest stimulation."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Koffing, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Koffing,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        OVERWORLD(
            sPicTable_Koffing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Koffing,
            gShinyOverworldPalette_Koffing
        )
        .enemyMonElevation = 14,
        BACK_PIC(Koffing, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Koffing),
        ICON(Koffing, 2),
        .footprint = gMonFootprint_Koffing,
        LEARNSETS(Koffing),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_WEEZING},
                                {EVO_NONE, 0, SPECIES_WEEZING_GALARIAN}),
    },

#define WEEZING_MISC_INFO                                           \
        .baseHP        = 65,                                        \
        .baseAttack    = 90,                                        \
        .baseDefense   = 120,                                       \
        .baseSpeed     = 60,                                        \
        .baseSpAttack  = 85,                                        \
        .baseSpDefense = 70,                                        \
        .catchRate = 60,                                            \
        .expYield = 172,                                            \
        .evYield_Defense = 2,                                       \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },  \
        .noFlip = TRUE,                                             \
        .speciesName = _("Weezing"),                                \
        .cryId = CRY_WEEZING,                                       \
        .natDexNum = NATIONAL_DEX_WEEZING,                          \
        .categoryName = _("Poison Gas"),                            \
        .footprint = gMonFootprint_Weezing,                         \
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable

    [SPECIES_WEEZING] =
    {
        WEEZING_MISC_INFO,
        .types = { TYPE_POISON, TYPE_POISON },
        .itemRare = ITEM_SMOKE_BALL,
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .height = 12,
        .weight = 95,
        .description = COMPOUND_STRING(
            "By diluting its toxic gases with a special\n"
            "process, the highest grade of perfume can\n"
            "be extracted. To Weezing, gases emanating\n"
            "from garbage are the ultimate feast."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weezing, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Weezing,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 3,
        BACK_PIC(Weezing, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Weezing),
        ICON(Weezing, 2),
        LEARNSETS(Weezing),
        OVERWORLD(
            sPicTable_Weezing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Weezing,
            gShinyOverworldPalette_Weezing
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALARIAN] =
    {
        WEEZING_MISC_INFO,
        .types = { TYPE_POISON, TYPE_FAIRY },
        .itemRare = ITEM_MISTY_SEED,
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .isGalarianForm = TRUE,
        .height = 30,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Long ago, when droves of factories fouled\n"
            "the air with pollution, it changed into this\n"
            "form for some reason. It consumes air\n"
            "pollutant particles, expelling clean air."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(WeezingGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WeezingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(WeezingGalarian, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(WeezingGalarian),
        ICON(WeezingGalarian, 1),
        LEARNSETS(WeezingGalarian),
         OVERWORLD(
            sPicTable_WeezingGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WeezingGalarian,
            gShinyOverworldPalette_WeezingGalarian
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 69,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyhorn"),
        .cryId = CRY_RHYHORN,
        .natDexNum = NATIONAL_DEX_RHYHORN,
        .categoryName = _("Spikes"),
        .height = 10,
        .weight = 1150,
        .description = COMPOUND_STRING(
            "Once it starts running, it doesn't stop.\n"
            "Its tiny brain makes it so stupid that it\n"
            "can't remember why it started running in\n"
            "the first place."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rhyhorn, 56, 40),
        FRONT_PIC_FEMALE(Rhyhorn, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Rhyhorn,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Rhyhorn, 64, 48),
        BACK_PIC_FEMALE(Rhyhorn, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhyhorn),
        ICON(Rhyhorn, 1),
        .footprint = gMonFootprint_Rhyhorn,
        LEARNSETS(Rhyhorn),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_RHYDON}),
                OVERWORLD(
            sPicTable_Rhyhorn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyhorn,
            gShinyOverworldPalette_Rhyhorn
        )
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhydon"),
        .cryId = CRY_RHYDON,
        .natDexNum = NATIONAL_DEX_RHYDON,
        .categoryName = _("Drill"),
        .height = 19,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Its horn, which rotates like a drill,\n"
            "destroys tall buildings with one strike.\n"
            "It stands on its hind legs, and its brain\n"
            "is well developed."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        FRONT_PIC(Rhydon, 64, 56),
        FRONT_PIC_FEMALE(Rhydon, 64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rhydon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Rhydon, 64, 56),
        BACK_PIC_FEMALE(Rhydon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhydon),
        ICON(Rhydon, 1),
        .footprint = gMonFootprint_Rhydon,
        LEARNSETS(Rhydon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR},
                                {EVO_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}),
                                        OVERWORLD(
            sPicTable_Rhydon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhydon,
            gShinyOverworldPalette_Rhydon
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 30,
        .expYield = 241,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyperior"),
        .cryId = CRY_RHYPERIOR,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .description = COMPOUND_STRING(
            "It can launch a rock held in its hand\n"
            "like a missile by tightening and then\n"
            "expanding its muscles instantaneously.\n"
            "Geodude are shot at rare times."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        FRONT_PIC(Rhyperior, 64, 64),
        FRONT_PIC_FEMALE(Rhyperior, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Rhyperior,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Rhyperior, 64, 64),
        BACK_PIC_FEMALE(Rhyperior, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Rhyperior),
        ICON(Rhyperior, 0),
        .footprint = gMonFootprint_Rhyperior,
        LEARNSETS(Rhyperior),
                OVERWORLD(
            sPicTable_Rhyperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyperior,
            gShinyOverworldPalette_Rhyperior
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 130,
        .expYield = 110,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Happiny"),
        .cryId = CRY_HAPPINY,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("Playhouse"),
        .height = 6,
        .weight = 244,
        .description = COMPOUND_STRING(
            "It carries a round white rock in its\n"
            "belly pouch. If it gets along well with\n"
            "someone, it will sometimes give that\n"
            "person the rock."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Happiny, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Happiny, 48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Happiny),
        ICON(Happiny, 0),
        .footprint = gMonFootprint_Happiny,
        LEARNSETS(Happiny),
        OVERWORLD(
            sPicTable_Happiny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Happiny,
            gShinyOverworldPalette_Happiny
        )
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Chansey"),
        .cryId = CRY_CHANSEY,
        .natDexNum = NATIONAL_DEX_CHANSEY,
        .categoryName = _("Egg"),
        .height = 11,
        .weight = 346,
        .description = COMPOUND_STRING(
            "Chansey lay nutritionally excellent eggs\n"
            "every day. The eggs are so delicious, they\n"
            "are eagerly devoured by even those people\n"
            "who have lost their appetite."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chansey, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Chansey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chansey, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Chansey),
        ICON(Chansey, 0),
        .footprint = gMonFootprint_Chansey,
        LEARNSETS(Chansey),
        OVERWORLD(
            sPicTable_Chansey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chansey,
            gShinyOverworldPalette_Chansey
        )
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 608,
        .evYield_HP = 3,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Blissey"),
        .cryId = CRY_BLISSEY,
        .natDexNum = NATIONAL_DEX_BLISSEY,
        .categoryName = _("Happiness"),
        .height = 15,
        .weight = 468,
        .description = COMPOUND_STRING(
            "If it senses sadness with its fluffy fur,\n"
            "a Blissey will rush over to the sad person,\n"
            "however far away, to share an egg of\n"
            "happiness that brings a smile to any face."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        FRONT_PIC(Blissey, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Blissey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Blissey, 64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Blissey),
        ICON(Blissey, 0),
        .footprint = gMonFootprint_Blissey,
        LEARNSETS(Blissey),
        OVERWORLD(
            sPicTable_Blissey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blissey,
            gShinyOverworldPalette_Blissey
        )
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 87,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangela"),
        .cryId = CRY_TANGELA,
        .natDexNum = NATIONAL_DEX_TANGELA,
        .categoryName = _("Vine"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Its vines snap off easily and painlessly\n"
            "if they are grabbed, allowing it to make a\n"
            "quick getaway. The lost vines are replaced\n"
            "by new growth the very next day."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tangela, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Tangela,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Tangela, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Tangela),
        ICON(Tangela, 0),
        .footprint = gMonFootprint_Tangela,
        LEARNSETS(Tangela),
          OVERWORLD(
            sPicTable_Tangela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangela,
            gShinyOverworldPalette_Tangela
        )
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 30,
        .expYield = 187,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangrowth"),
        .cryId = CRY_TANGROWTH,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = COMPOUND_STRING(
            "It ensnares prey by extending arms made\n"
            "of vines. Even if one of its arms is eaten,\n"
            "it's fine. The Pokémon regenerates quickly\n"
            "and will go right back to normal."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Tangrowth, 64, 64),
        FRONT_PIC_FEMALE(Tangrowth, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Tangrowth,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Tangrowth, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Tangrowth),
        ICON(Tangrowth, 0),
        .footprint = gMonFootprint_Tangrowth,
        LEARNSETS(Tangrowth),
          OVERWORLD(
            sPicTable_Tangrowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangrowth,
            gShinyOverworldPalette_Tangrowth
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
#define KANGASKHAN_MISC_INFO                                    \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                  \
        .catchRate = 45,                                        \
        .evYield_HP = 2,                                        \
        .genderRatio = MON_FEMALE,                              \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .bodyColor = BODY_COLOR_BROWN,                          \
        .speciesName = _("Kangaskhan"),                         \
        .natDexNum = NATIONAL_DEX_KANGASKHAN,                   \
        .categoryName = _("Parent"),                            \
        .height = 22,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 387,                                    \
        .trainerOffset = 8,                                     \
        .footprint = gMonFootprint_Kangaskhan,                  \
        LEARNSETS(Kangaskhan),                                  \
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,    \
        .formChangeTable = sKangaskhanFormChangeTable

    [SPECIES_KANGASKHAN] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .expYield = 172,
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS },
        .cryId = CRY_KANGASKHAN,
        .weight = 800,
        .description = COMPOUND_STRING(
            "If you come across a young Kangaskhan\n"
            "playing by itself, never try to catch it.\n"
            "The baby's parent is sure to be in the area,\n"
            "and it will become violently enraged."),
        FRONT_PIC(Kangaskhan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kangaskhan,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Kangaskhan, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Kangaskhan),
        ICON(Kangaskhan, 2),
            OVERWORLD(
            sPicTable_Kangaskhan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kangaskhan,
            gShinyOverworldPalette_Kangaskhan
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KANGASKHAN_MEGA] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .expYield = 207,
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .isMegaEvolution = TRUE,
        .cryId = CRY_KANGASKHAN_MEGA,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When the mother sees the back of her\n"
            "Mega-Evolved child, it makes her think\n"
            "of the day when her child will inevitably\n"
            "leave her."),
        FRONT_PIC(KangaskhanMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KangaskhanMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KangaskhanMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(KangaskhanMega),
        ICON(KangaskhanMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 59,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Horsea"),
        .cryId = CRY_HORSEA,
        .natDexNum = NATIONAL_DEX_HORSEA,
        .categoryName = _("Dragon"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING(
            "By cleverly flicking the fins on its back\n"
            "side to side, it moves in any direction\n"
            "while facing forward. It spits ink to\n"
            "escape if it senses danger."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Horsea, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Horsea,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Horsea, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Horsea),
        ICON(Horsea, 0),
        .footprint = gMonFootprint_Horsea,
        LEARNSETS(Horsea),
         OVERWORLD(
            sPicTable_Horsea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Horsea,
            gShinyOverworldPalette_Horsea
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEADRA}),
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 154,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_POISON_POINT, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Seadra"),
        .cryId = CRY_SEADRA,
        .natDexNum = NATIONAL_DEX_SEADRA,
        .categoryName = _("Dragon"),
        .height = 12,
        .weight = 250,
        .description = COMPOUND_STRING(
            "The poisonous barbs all over its body are\n"
            "highly valued as ingredients for making\n"
            "traditional herbal medicine. It shows no\n"
            "mercy to anything approaching its nest."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seadra, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Seadra,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Seadra, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Seadra),
        ICON(Seadra, 0),
        .footprint = gMonFootprint_Seadra,
        LEARNSETS(Seadra),
         OVERWORLD(
            sPicTable_Seadra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seadra,
            gShinyOverworldPalette_Seadra
        )
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA},
                                {EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kingdra"),
        .cryId = CRY_KINGDRA,
        .natDexNum = NATIONAL_DEX_KINGDRA,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1520,
        .description = COMPOUND_STRING(
            "It sleeps quietly, deep on the seafloor.\n"
            "When it comes up to the surface, it\n"
            "creates a huge whirlpool that can swallow\n"
            "even ships."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        FRONT_PIC(Kingdra, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kingdra,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        BACK_PIC(Kingdra, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Kingdra),
        ICON(Kingdra, 0),
        .footprint = gMonFootprint_Kingdra,
        LEARNSETS(Kingdra),
        OVERWORLD(
            sPicTable_Kingdra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kingdra,
            gShinyOverworldPalette_Kingdra
        )
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 67,
        .baseDefense   = 60,
        .baseSpeed     = 63,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 64,
        .evYield_Attack = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Goldeen"),
        .cryId = CRY_GOLDEEN,
        .natDexNum = NATIONAL_DEX_GOLDEEN,
        .categoryName = _("Goldfish"),
        .height = 6,
        .weight = 150,
        .description = COMPOUND_STRING(
            "In the springtime, schools of Goldeen\n"
            "can be seen swimming up falls and rivers.\n"
            "It metes out staggering damage with its\n"
            "single horn."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Goldeen, 64, 40),
        FRONT_PIC_FEMALE(Goldeen, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Goldeen,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Goldeen, 64, 48),
        BACK_PIC_FEMALE(Goldeen, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Goldeen),
        ICON(Goldeen, 0),
        .footprint = gMonFootprint_Goldeen,
        LEARNSETS(Goldeen),
        OVERWORLD(
            sPicTable_Goldeen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Goldeen,
            gShinyOverworldPalette_Goldeen
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_SEAKING}),
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 60,
        .expYield = 158,
        .evYield_Attack = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Seaking"),
        .cryId = CRY_SEAKING,
        .natDexNum = NATIONAL_DEX_SEAKING,
        .categoryName = _("Goldfish"),
        .height = 13,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It punches holes in boulders on stream-\n"
            "beds. This is a clever innovation that\n"
            "prevents its eggs from being attacked or\n"
            "washed away by the current."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seaking, 64, 56),
        FRONT_PIC_FEMALE(Seaking, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Seaking,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Seaking, 64, 56),
        BACK_PIC_FEMALE(Seaking, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Seaking),
        ICON(Seaking, 0),
        .footprint = gMonFootprint_Seaking,
        LEARNSETS(Seaking),
        OVERWORLD(
            sPicTable_Seaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seaking,
            gShinyOverworldPalette_Seaking
        )
    },
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
    [SPECIES_STARYU] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 68,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_VICTORY_STAR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Staryu"),
        .cryId = CRY_STARYU,
        .natDexNum = NATIONAL_DEX_STARYU,
        .categoryName = _("Star Shape"),
        .height = 8,
        .weight = 345,
        .description = COMPOUND_STRING(
            "It gathers with others in the night and\n"
            "makes its red core glow on and off with\n"
            "the twinkling stars. It can regenerate\n"
            "limbs if they are severed from its body."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Staryu, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Staryu,
        .frontAnimId = ANIM_TWIST_TWICE,
        BACK_PIC(Staryu, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Staryu),
        ICON(Staryu, 2),
        .footprint = gMonFootprint_Staryu,
        LEARNSETS(Staryu),
        OVERWORLD(
            sPicTable_Staryu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Staryu,
            gShinyOverworldPalette_Staryu
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}),
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 125,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 182,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_VICTORY_STAR},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Starmie"),
        .cryId = CRY_STARMIE,
        .natDexNum = NATIONAL_DEX_STARMIE,
        .categoryName = _("Mysterious"),
        .height = 11,
        .weight = 800,
        .description = COMPOUND_STRING(
            "People in ancient times imagined that\n"
            "Starmie were transformed from the\n"
            "reflections of stars that twinkled on\n"
            "gentle waves at night."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Starmie, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Starmie,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Starmie, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Starmie),
        ICON(Starmie, 2),
        .footprint = gMonFootprint_Starmie,
        LEARNSETS(Starmie),
          OVERWORLD(
            sPicTable_Starmie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Starmie,
            gShinyOverworldPalette_Starmie
        )
    },
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        #endif
        .catchRate = 145,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mime Jr."),
        .cryId = CRY_MIME_JR,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "In an attempt to confuse its enemy,\n"
            "it mimics the enemy's movements.\n"
            "Once mimicked, the foe cannot take\n"
            "its eyes off this Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MimeJr, 32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MimeJr, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(MimeJr),
        ICON(MimeJr, 0),
        .footprint = gMonFootprint_MimeJr,
        LEARNSETS(MimeJr),
        OVERWORLD(
            sPicTable_MimeJr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimeJr,
            gShinyOverworldPalette_MimeJr
        )
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME},
                                {EVO_NONE, 0, SPECIES_MR_MIME_GALARIAN}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define MR_MIME_MISC_INFO                                           \
        .catchRate = 45,                                            \
        .expYield = 161,                                            \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .speciesName = _("Mr. Mime"),                               \
        .cryId = CRY_MR_MIME,                                       \
        .natDexNum = NATIONAL_DEX_MR_MIME,                          \
        .footprint = gMonFootprint_MrMime,                          \
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable

    [SPECIES_MR_MIME] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        #endif
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PINK,
        .categoryName = _("Barrier"),
        .height = 13,
        .weight = 545,
        .description = COMPOUND_STRING(
            "A Mr. Mime is a master of pantomime. It can\n"
            "convince others that something unseeable\n"
            "actually exists. Once believed, the\n"
            "imaginary object does become real."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMime, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_MrMime,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MrMime, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(MrMime),
        ICON(MrMime, 0),
        LEARNSETS(MrMime),
         OVERWORLD(
            sPicTable_MrMime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMime,
            gShinyOverworldPalette_MrMime
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALARIAN] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .evYield_Speed = 2,
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .categoryName = _("Dancing"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING(
            "Its talent is tap-dancing. It can radiate\n"
            "chilliness from the bottoms of its feet to\n"
            "to create a floor of ice, which this\n"
            "Pokémon can kick up to use as a barrier."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMimeGalarian, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_MrMimeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrMimeGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrMimeGalarian),
        ICON(MrMimeGalarian, 0),
        LEARNSETS(MrMimeGalarian),
        OVERWORLD(
            sPicTable_MrMimeGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMimeGalarian,
            gShinyOverworldPalette_MrMimeGalarian
        )
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mr. Rime"),
        .cryId = CRY_MR_RIME,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "It's highly skilled at tap-dancing. It\n"
            "waves its cane of ice in time with its\n"
            "graceful movements."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(MrRime, 56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrRime, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrRime),
        ICON(MrRime, 0),
        .footprint = gMonFootprint_MrRime,
        LEARNSETS(MrRime),
        OVERWORLD(
            sPicTable_MrRime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrRime,
            gShinyOverworldPalette_MrRime
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 100,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Scyther"),
        .cryId = CRY_SCYTHER,
        .natDexNum = NATIONAL_DEX_SCYTHER,
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
        .description = COMPOUND_STRING(
            "Its blindingly fast speed adds to the\n"
            "sharpness of its twin forearm scythes.\n"
            "The scythes can slice through thick logs\n"
            "in one wicked stroke."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Scyther, 56, 64),
        FRONT_PIC_FEMALE(Scyther, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Scyther,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        BACK_PIC(Scyther, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Scyther),
        ICON(Scyther, 1),
        .footprint = gMonFootprint_Scyther,
        LEARNSETS(Scyther),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR},
                                {EVO_ITEM, ITEM_BLACK_AUGURITE, SPECIES_KLEAVOR},
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}),
                                        OVERWORLD(
            sPicTable_Scyther,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scyther,
            gShinyOverworldPalette_Scyther
        )
    },

#if P_GEN_2_CROSS_EVOS
#define SCIZOR_MISC_INFO                                \
        .types = { TYPE_BUG, TYPE_STEEL },              \
        .catchRate = 25,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_MEDIUM_FAST,               \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },  \
        .bodyColor = BODY_COLOR_RED,                    \
        .speciesName = _("Scizor"),                     \
        .natDexNum = NATIONAL_DEX_SCIZOR,               \
        .categoryName = _("Pincer"),                    \
        .footprint = gMonFootprint_Scizor,              \
        LEARNSETS(Scizor),                              \
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,\
        .formChangeTable = sScizorFormChangeTable

    [SPECIES_SCIZOR] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .expYield = 175,
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL },
        .cryId = CRY_SCIZOR,
        .height = 18,
        .weight = 1180,
        .description = COMPOUND_STRING(
            "A Scizor has a body with the hardness of\n"
            "steel. It is not easily fazed by ordinary\n"
            "sorts of attacks. It flaps its wings to\n"
            "regulate its body temperature."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Scizor, 64, 64),
        FRONT_PIC_FEMALE(Scizor, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Scizor,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        BACK_PIC(Scizor, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Scizor),
        ICON(Scizor, 0),
                OVERWORLD(
            sPicTable_Scizor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scizor,
            gShinyOverworldPalette_Scizor
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCIZOR_MEGA] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .expYield = 210,
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .isMegaEvolution = TRUE,
        .cryId = CRY_SCIZOR_MEGA,
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "The excess energy that bathes this\n"
            "Pokémon keeps it in constant danger of\n"
            "overflow. It can't sustain a battle over\n"
            "long periods of time."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ScizorMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ScizorMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ScizorMega, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(ScizorMega),
        ICON(ScizorMega, 0),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_ROCK },
        .catchRate = 15,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kleavor"),
        .cryId = CRY_KLEAVOR,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Axe"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING(
            "A violent creature that fells trees with\n"
            "its crude axes and shields itself with hard\n"
            "stone. Should one encounter this Pokémon\n"
            "in the wild, one's only recourse is to flee."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Kleavor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kleavor, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Kleavor),
        ICON(Kleavor, 2),
        //.footprint = gMonFootprint_Kleavor,
        LEARNSETS(Kleavor),
        OVERWORLD(
            sPicTable_Kleavor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kleavor,
            gShinyOverworldPalette_Kleavor
        )
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Smoochum"),
        .cryId = CRY_SMOOCHUM,
        .natDexNum = NATIONAL_DEX_SMOOCHUM,
        .categoryName = _("Kiss"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "It actively runs about, but also falls\n"
            "often. Whenever it falls, it will check its\n"
            "reflection on a lake's surface to make\n"
            "sure its face hasn't become dirty."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Smoochum, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Smoochum,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Smoochum, 40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Smoochum),
        ICON(Smoochum, 1),
        .footprint = gMonFootprint_Smoochum,
        OVERWORLD(
            sPicTable_Smoochum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Smoochum,
            gShinyOverworldPalette_Smoochum
        )
        LEARNSETS(Smoochum),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_JYNX}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Jynx"),
        .cryId = CRY_JYNX,
        .natDexNum = NATIONAL_DEX_JYNX,
        .categoryName = _("Human Shape"),
        .height = 14,
        .weight = 406,
        .description = COMPOUND_STRING(
            "A Jynx sashays rhythmically as if it were\n"
            "dancing. Its motions are so bouncingly\n"
            "alluring, people seeing it are compelled to\n"
            "shake their hips without noticing."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        FRONT_PIC(Jynx, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jynx,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Jynx, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Jynx),
        ICON(Jynx, 2),
        .footprint = gMonFootprint_Jynx,
        LEARNSETS(Jynx),
        OVERWORLD(
            sPicTable_Jynx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jynx,
            gShinyOverworldPalette_Jynx
        )
    },
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Elekid"),
        .cryId = CRY_ELEKID,
        .natDexNum = NATIONAL_DEX_ELEKID,
        .categoryName = _("Electric"),
        .height = 6,
        .weight = 235,
        .description = COMPOUND_STRING(
            "If it touches metal and discharges the\n"
            "electricity it has stored in its body, an\n"
            "Elekid begins swinging its arms in circles\n"
            "to recharge itself."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Elekid, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Elekid,
        .frontAnimId = ANIM_FLASH_YELLOW,
        BACK_PIC(Elekid, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Elekid),
        ICON(Elekid, 1),
        .footprint = gMonFootprint_Elekid,
        LEARNSETS(Elekid),
        OVERWORLD(
            sPicTable_Elekid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Elekid,
            gShinyOverworldPalette_Elekid
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTABUZZ}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Electabuzz"),
        .cryId = CRY_ELECTABUZZ,
        .natDexNum = NATIONAL_DEX_ELECTABUZZ,
        .categoryName = _("Electric"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING(
            "When a storm approaches, it competes with\n"
            "others to scale heights that are likely to\n"
            "be stricken by lightning. Some towns use\n"
            "Electabuzz in place of lightning rods."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Electabuzz, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Electabuzz,
        OVERWORLD(
            sPicTable_Electabuzz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electabuzz,
            gShinyOverworldPalette_Electabuzz
        )
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        BACK_PIC(Electabuzz, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electabuzz),
        ICON(Electabuzz, 1),
        .footprint = gMonFootprint_Electabuzz,
        LEARNSETS(Electabuzz),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE},
                                {EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 30,
        .expYield = 243,
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Electivire"),
        .cryId = CRY_ELECTIVIRE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .description = COMPOUND_STRING(
            "When it gets excited, it thumps its chest.\n"
            "With every thud, thunder roars, electric\n"
            "sparks shower all around and blue sparks\n"
            "begin to crackle between its horns."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Electivire, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Electivire,
        OVERWORLD(
            sPicTable_Electivire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electivire,
            gShinyOverworldPalette_Electivire
        )
        .frontAnimId = ANIM_GLOW_YELLOW,
        BACK_PIC(Electivire, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electivire),
        ICON(Electivire, 1),
        .footprint = gMonFootprint_Electivire,
        LEARNSETS(Electivire),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 73,
        .evYield_Speed = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magby"),
        .cryId = CRY_MAGBY,
        .natDexNum = NATIONAL_DEX_MAGBY,
        .categoryName = _("Live Coal"),
        .height = 7,
        .weight = 214,
        .description = COMPOUND_STRING(
            "If a Magby is spouting yellow flames from\n"
            "its mouth, it is in good health. When it is\n"
            "fatigued, black smoke will be mixed in with\n"
            "the flames."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magby, 32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Magby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Magby, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magby),
        ICON(Magby, 0),
        .footprint = gMonFootprint_Magby,
        LEARNSETS(Magby),
         OVERWORLD(
            sPicTable_Magby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magby,
            gShinyOverworldPalette_Magby
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGMAR}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magmar"),
        .cryId = CRY_MAGMAR,
        .natDexNum = NATIONAL_DEX_MAGMAR,
        .categoryName = _("Spitfire"),
        .height = 13,
        .weight = 445,
        .description = COMPOUND_STRING(
            "In battle, it blows out intense flames from\n"
            "all over its body to intimidate its foe.\n"
            "These fiery bursts create heat waves that\n"
            "ignite grass and trees in the area."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magmar, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magmar,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Magmar, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmar),
        ICON(Magmar, 0),
        .footprint = gMonFootprint_Magmar,
        LEARNSETS(Magmar),
        OVERWORLD(
            sPicTable_Magmar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmar,
            gShinyOverworldPalette_Magmar
        )
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 30,
        .expYield = 243,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magmortar"),
        .cryId = CRY_MAGMORTAR,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("Blast"),
        .height = 16,
        .weight = 680,
        .description = COMPOUND_STRING(
            "According to what is known, a single pair\n"
            "of male and female Magmortar lives in\n"
            "one volcano. From its arm, it launches\n"
            "fireballs hotter than 3,600ºF."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Magmortar, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magmortar,
         OVERWORLD(
            sPicTable_Magmortar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmortar,
            gShinyOverworldPalette_Magmortar
        )
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Magmortar, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmortar),
        ICON(Magmortar, 0),
        .footprint = gMonFootprint_Magmortar,
        LEARNSETS(Magmortar),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
#define PINSIR_MISC_INFO                                \
        .catchRate = 45,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },  \
        .bodyColor = BODY_COLOR_BROWN,                  \
        .speciesName = _("Pinsir"),                     \
        .natDexNum = NATIONAL_DEX_PINSIR,               \
        .categoryName = _("Stag Beetle"),               \
        .footprint = gMonFootprint_Pinsir,              \
        LEARNSETS(Pinsir),                              \
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,\
        .formChangeTable = sPinsirFormChangeTable

    [SPECIES_PINSIR] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_BUG },
        .expYield = 175,
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER, ABILITY_MOXIE },
        .cryId = CRY_PINSIR,
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Their pincers are strong enough to\n"
            "shatter thick logs. Because they dislike\n"
            "cold, Pinsir burrow and sleep under\n"
            "the ground on chilly nights."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Pinsir, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Pinsir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pinsir, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Pinsir),
        ICON(Pinsir, 2),
        OVERWORLD(
            sPicTable_Pinsir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pinsir,
            gShinyOverworldPalette_Pinsir
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PINSIR_MEGA] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_FLYING },
        .expYield = 210,
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .cryId = CRY_PINSIR_MEGA,
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING(
            "The influence of Mega Evolution leaves it\n"
            "in a state of constant excitement.\n"
            "It pierces enemies with its two large\n"
            "horns before shredding them."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(PinsirMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_PinsirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(PinsirMega, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(PinsirMega),
        ICON(PinsirMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
#define TAUROS_MISC_INFO                                    \
        .catchRate = 45,                                    \
        .expYield = 172,                                    \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .speciesName = _("Tauros"),                         \
        .cryId = CRY_TAUROS,                                \
        .natDexNum = NATIONAL_DEX_TAUROS,                   \
        .categoryName = _("Wild Bull"),                     \
        .height = 14,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .evYield_Attack = 1,    \
        .evYield_Speed = 1, \
        .footprint = gMonFootprint_Tauros,                  \
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable

    [SPECIES_TAUROS] =
    {
        TAUROS_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 884,
        .description = COMPOUND_STRING(
            "It is not satisfied unless it is rampaging\n"
            "at all times. If there is no opponent for\n"
            "Tauros to battle, it will charge at thick\n"
            "trees and knock them down to calm itself."),
        FRONT_PIC(Tauros, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Tauros,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        BACK_PIC(Tauros, 64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Tauros),
        ICON(Tauros, 2),
        LEARNSETS(Tauros),
        OVERWORLD(
            sPicTable_Tauros,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tauros,
            gShinyOverworldPalette_Tauros
        )
    },

#if P_PALDEAN_FORMS
#define TAUROS_PALDEAN_MISC_INFO                                                    \
        .baseHP        = 75,                                                        \
        .baseAttack    = 110,                                                       \
        .baseDefense   = 105,                                                       \
        .baseSpeed     = 120,                                                       \
        .baseSpAttack  = 30,                                                        \
        .baseSpDefense = 80,                                                        \
        .abilities = { ABILITY_CUD_CHEW, ABILITY_INTIMIDATE}, \
        .bodyColor = BODY_COLOR_BLACK,                                              \
        .frontAnimFrames = sAnims_TaurosPaldean,                                    \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                \
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,                                        \
        .isPaldeanForm = TRUE

    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .weight = 1150,
        .description = COMPOUND_STRING(
            "This Pokémon has a muscular body\n"
            "and excels at close-quarters combat.\n"
            "It uses its short horns to strike\n"
            "the opponent’s weak spots."),
        FRONT_PIC(TaurosPaldeanCombatBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanCombatBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanCombatBreed),
        ICON(TaurosPaldeanCombatBreed, 2),
        LEARNSETS(TaurosPaldeanCombatBreed),
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_FIRE },
        .weight = 850,
        .description = COMPOUND_STRING(
            "When heated by fire energy, its horns can\n"
            "get hotter than 1,800 degrees Fahrenheit.\n"
            "Those gored by them will suffer\n"
            "both wounds and burns."),
        FRONT_PIC(TaurosPaldeanBlazeBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanBlazeBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanBlazeBreed),
        ICON(TaurosPaldeanBlazeBreed, 0),
        LEARNSETS(TaurosPaldeanBlazeBreed),
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_WATER },
        .weight = 1100,
        .description = COMPOUND_STRING(
            "This Pokémon blasts water from holes on\n"
            "the tips of its horns--the high-pressure\n"
            "jets pierce right through\n"
            "Tauros’s enemies."),
        FRONT_PIC(TaurosPaldeanAquaBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanAquaBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanAquaBreed),
        ICON(TaurosPaldeanAquaBreed, 0),
        LEARNSETS(TaurosPaldeanAquaBreed),
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS



    [SPECIES_CALFLING] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 100,
        .evYield_HP = 1,
        .expYield = 150,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_CUD_CHEW, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Calfling"),
        .cryId = CRY_MILTANK,
        .categoryName = _("Calf"),
        .height = 9,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Under research."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Calfling, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Calfling,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Calfling, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Calfling),
        ICON(Calfling, 2),
        .footprint = gMonFootprint_Calfling,
        LEARNSETS(Calfling),
    },



    [SPECIES_CALFLING_RED] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 100,
        .expYield = 150,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .evYield_HP = 1,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_CUD_CHEW, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Calfling"),
        .cryId = CRY_MILTANK,
        .categoryName = _("Calf"),
        .height = 9,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Under research."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Calfling, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Calfling,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Calfling, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(CalflingRed),
        ICON(CalflingRed, 2),
        .footprint = gMonFootprint_Calfling,
        LEARNSETS(Calfling),
    },


    [SPECIES_CALFLING_BLUE] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 100,
        .expYield = 150,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .evYield_HP = 1,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_CUD_CHEW, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Calfling"),
        .cryId = CRY_MILTANK,
        .categoryName = _("Calf"),
        .height = 9,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Under research."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Calfling, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Calfling,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Calfling, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(CalflingBlue),
        ICON(CalflingBlue, 2),
        .footprint = gMonFootprint_Calfling,
        LEARNSETS(Calfling),
    },





#if P_FAMILY_MAGIKARP
        [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 40,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_UNNERVE, ABILITY_RATTLED, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magikarp"),
        .cryId = CRY_MAGIKARP,
        .natDexNum = NATIONAL_DEX_MAGIKARP,
        .categoryName = _("Splashing"),
        .height = 12,
        .evYield_Speed = 1,
        .weight = 200,
        .description = COMPOUND_STRING(
            "Once upon a time, it is said that a Magikarp\n"
            "jumped so high that it landed above a\n"
            "mountain, and transformed into a fearsome\n"
            "dragon."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magikarp, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magikarp,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Magikarp, 64, 56),
        BACK_PIC_FEMALE(Magikarp, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Magikarp),
        ICON(Magikarp, 0),
        .footprint = gMonFootprint_Magikarp,
        LEARNSETS(Magikarp),
        OVERWORLD(
            sPicTable_Magikarp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Magikarp,
            gShinyOverworldPalette_Magikarp
        )
    },

#define GYARADOS_MISC_INFO                                  \
        .catchRate = 45,                                    \
        .evYield_Attack = 2,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 5,                                     \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON },\
        .bodyColor = BODY_COLOR_BLUE,                       \
        .speciesName = _("Gyarados"),                       \
        .natDexNum = NATIONAL_DEX_GYARADOS,                 \
        .categoryName = _("Atrocious"),                     \
        .height = 65,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 6,                                 \
        .trainerScale = 481,                                \
        .trainerOffset = 13,                                \
        .footprint = gMonFootprint_Gyarados,                \
        LEARNSETS(Gyarados),                                \
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,  \
        .formChangeTable = sGyaradosFormChangeTable

    [SPECIES_GYARADOS] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_DRAGON},
        .expYield = 189,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_SWIFT_SWIM},
        .cryId = CRY_GYARADOS,
        .weight = 2350,
        .description = COMPOUND_STRING(
            "It is an extremely vicious and violent\n"
            "Pokémon, prone to tantrums. Despite its\n"
            "massive size, it often resides in small\n"
            "lakes, and is revered by the locals."),
        FRONT_PIC(Gyarados, 64, 64),
        FRONT_PIC_FEMALE(Gyarados, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gyarados,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Gyarados, 64, 64),
        BACK_PIC_FEMALE(Gyarados, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Gyarados),
        ICON(Gyarados, 0),
        OVERWORLD(
            sPicTable_Gyarados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Gyarados,
            gShinyOverworldPalette_Gyarados
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GYARADOS_MEGA] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = { TYPE_WATER, TYPE_DARK },
        .expYield = 224,
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .cryId = CRY_GYARADOS_MEGA,
        .weight = 3050,
        .description = COMPOUND_STRING(
            "Although it obeys its instinctive drive to\n"
            "destroy everything within its reach, it\n"
            "will respond to orders from a Trainer it\n"
            "truly trusts."),
        FRONT_PIC(GyaradosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GyaradosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(GyaradosMega, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(GyaradosMega),
        ICON(GyaradosMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
#define LAPRAS_MISC_INFO                                                                \
        .baseHP        = 130,                                                           \
        .baseAttack    = 85,                                                            \
        .baseDefense   = 90,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 85,                                                            \
        .baseSpDefense = 105,                                                            \
        .types = { TYPE_WATER, TYPE_ICE },                                              \
        .catchRate = 45,                                                                \
        .expYield = 187,                                                                \
        .evYield_HP = 2,                                                                \
        .itemCommon = ITEM_MYSTIC_WATER,                                                \
        .itemRare = ITEM_MYSTIC_WATER,                                                  \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 40,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },                          \
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_REGENERATOR, ABILITY_SNOW_FORCE },  \
        .bodyColor = BODY_COLOR_BLUE,                                                   \
        .speciesName = _("lapras"),                                                     \
        .cryId = CRY_LAPRAS,                                                            \
        .natDexNum = NATIONAL_DEX_LAPRAS,                                               \
        .categoryName = _("Transport"),                                                 \
        .footprint = gMonFootprint_Lapras,                                              \
        LEARNSETS(Lapras),                                                              \
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,                                \
        .formChangeTable = sLaprasFormChangeTable

    [SPECIES_LAPRAS] =
    {
        LAPRAS_MISC_INFO,
        .height = 25,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "They have gentle hearts and can understand\n"
            "human intentions. Because they rarely fight\n"
            "back, they often get caught by poachers.\n"
            "Their numbers are dwindling."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Lapras, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lapras,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lapras, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Lapras),
        ICON(Lapras, 2),
        OVERWORLD(
            sPicTable_Lapras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Lapras,
            gShinyOverworldPalette_Lapras
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GIGANTAMAX] =
    {
        LAPRAS_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Over 5,000 people can ride on its\n"
            "shell at once. And it's a very\n"
            "comfortable ride, without the slightest\n"
            "shaking or swaying."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(LaprasGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LaprasGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(LaprasGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(LaprasGigantamax),
        ICON(LaprasGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
    [SPECIES_DITTO] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 35,
        .expYield = 101,
        .evYield_HP = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_DITTO, EGG_GROUP_DITTO },
        .abilities = { ABILITY_IMPOSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ditto"),
        .cryId = CRY_DITTO,
        .natDexNum = NATIONAL_DEX_DITTO,
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Ditto rearranges its cell structure to\n"
            "transform itself. However, if it tries to\n"
            "change based on its memory, it will get\n"
            "details wrong."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ditto, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Ditto,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Ditto, 48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        PALETTES(Ditto),
        ICON(Ditto, 2),
        .footprint = gMonFootprint_Ditto,
        LEARNSETS(Ditto),
        OVERWORLD(
            sPicTable_Ditto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ditto,
            gShinyOverworldPalette_Ditto
        )
    },
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
#define EEVEE_MISC_INFO                                                                 \
        .baseHP        = 55,                                                            \
        .baseAttack    = 55,                                                            \
        .baseDefense   = 50,                                                            \
        .baseSpeed     = 55,                                                            \
        .baseSpAttack  = 45,                                                            \
        .baseSpDefense = 65,                                                            \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                                          \
        .catchRate = 45,                                                                \
        .expYield = 65,                                                                 \
        .evYield_SpDefense = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                            \
        .eggCycles = 35,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                              \
        .abilities = {ABILITY_SIMPLE, ABILITY_ADAPTABILITY},  \
        .bodyColor = BODY_COLOR_BROWN,                                                  \
        .speciesName = _("Eevee"),                                                      \
        .cryId = CRY_EEVEE,                                                             \
        .natDexNum = NATIONAL_DEX_EEVEE,                                                \
        .categoryName = _("Evolution"),                                                 \
        .footprint = gMonFootprint_Eevee,                                               \
        LEARNSETS(Eevee),                                                               \
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,                                 \
        .formChangeTable = sEeveeFormChangeTable

    [SPECIES_EEVEE] =
    {
        EEVEE_MISC_INFO,
        .height = 3,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Eevee has an unstable genetic makeup\n"
            "that suddenly mutates due to its\n"
            "environment. Radiation from various\n"
            "STONES causes this Pokémon to evolve."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Eevee, 40, 48),
        FRONT_PIC_FEMALE(Eevee, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Eevee, 56, 48),
        BACK_PIC_FEMALE(Eevee, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Eevee),
        ICON(Eevee, 2),
        OVERWORLD(
            sPicTable_Eevee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eevee,
            gShinyOverworldPalette_Eevee
        )
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                                {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                                {EVO_ITEM, ITEM_DAWN_STONE, SPECIES_ESPEON},
                                {EVO_ITEM, ITEM_DUSK_STONE, SPECIES_UMBREON},
                                {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GIGANTAMAX] =
    {
        EEVEE_MISC_INFO,
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Having gotten even friendlier and\n"
            "more innocent, Eevee tries to play\n"
            "with anyone around, only to end up\n"
            "crushing them with its immense body."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(EeveeGigantamax, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_EeveeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EeveeGigantamax, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EeveeGigantamax),
        ICON(EeveeGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_STAMINA},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vaporeon"),
        .cryId = CRY_VAPOREON,
        .natDexNum = NATIONAL_DEX_VAPOREON,
        .categoryName = _("Bubble Jet"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "In terms of companionship, Vaporeon\n"
            "is among the most compatible for humans.\n"
            "It can live comfortably in every climate\n"
            "and requires very little maintenance."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .evYield_HP = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vaporeon, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Vaporeon,
        .frontAnimId = ANIM_GLOW_BLUE,
        BACK_PIC(Vaporeon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Vaporeon),
        ICON(Vaporeon, 0),
        .footprint = gMonFootprint_Vaporeon,
        LEARNSETS(Vaporeon),
        OVERWORLD(
            sPicTable_Vaporeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vaporeon,
            gShinyOverworldPalette_Vaporeon
        )
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Jolteon"),
        .cryId = CRY_JOLTEON,
        .natDexNum = NATIONAL_DEX_JOLTEON,
        .categoryName = _("Lightning"),
        .height = 8,
        .evYield_Speed = 2,
        .weight = 245,
        .description = COMPOUND_STRING(
            "Its cells generate weak power that is\n"
            "amplified by its fur's static electricity\n"
            "to drop thunderbolts. The bristling fur is\n"
            "made of electrically charged needles."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jolteon, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Jolteon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Jolteon, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Jolteon),
        ICON(Jolteon, 2),
        .footprint = gMonFootprint_Jolteon,
        LEARNSETS(Jolteon),
        OVERWORLD(
            sPicTable_Jolteon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jolteon,
            gShinyOverworldPalette_Jolteon
        )
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 65,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 110,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .evYield_Attack = 2,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flareon"),
        .cryId = CRY_FLAREON,
        .natDexNum = NATIONAL_DEX_FLAREON,
        .categoryName = _("Flame"),
        .height = 9,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Flareon's fluffy fur is able to regulate\n"
            "its body temperature to an impressive\n"
            "degree. To keep healthy, it has to drink\n"
            "lots of water."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flareon, 56, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Flareon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Flareon, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Flareon),
        ICON(Flareon, 3),
        .footprint = gMonFootprint_Flareon,
        LEARNSETS(Flareon),
        OVERWORLD(
            sPicTable_Flareon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flareon,
            gShinyOverworldPalette_Flareon
        )
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Espeon"),
        .cryId = CRY_ESPEON,
        .evYield_SpAttack = 2,
        .natDexNum = NATIONAL_DEX_ESPEON,
        .categoryName = _("Dawn"),
        .height = 9,
        .weight = 265,
        .description = COMPOUND_STRING(
            "Espeon can detect its TRAINER's feelings,\n"
            "only listening to those it deems worthy.\n"
            "An Espeon is tireless during the day, but\n"
            "gets very grumpy at night."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Espeon, 48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Espeon,
         OVERWORLD(
            sPicTable_Espeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Espeon,
            gShinyOverworldPalette_Espeon
        )
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Espeon, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Espeon),
        ICON(Espeon, 2),
        .footprint = gMonFootprint_Espeon,
        LEARNSETS(Espeon),
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 184,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Umbreon"),
        .cryId = CRY_UMBREON,
        .natDexNum = NATIONAL_DEX_UMBREON,
        .categoryName = _("Moonlight"),
        .height = 10,
        .weight = 270,
        .evYield_SpDefense = 2,
        .description = COMPOUND_STRING(
            "Umbreon is primarily nocturnal, but can be\n"
            "trained to be awake during the day, albeit\n"
            "not easily. The rings on its body secrete\n"
            "poison."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Umbreon, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Umbreon,
        OVERWORLD(
            sPicTable_Umbreon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Umbreon,
            gShinyOverworldPalette_Umbreon
        )
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Umbreon, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Umbreon),
        ICON(Umbreon, 0),
        .footprint = gMonFootprint_Umbreon,
        LEARNSETS(Umbreon),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense = 2,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_CHLOROPHYLL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafon"),
        .cryId = CRY_LEAFEON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "Its cellular composition is closer to\n"
            "that of a plant than an animal. It uses\n"
            "photosynthesis to produce its energy\n"
            "supply without eating food."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Leafeon, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Leafeon,
        OVERWORLD(
            sPicTable_Leafeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Leafeon,
            gShinyOverworldPalette_Leafeon
        )
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Leafeon, 48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Leafeon),
        ICON(Leafeon, 1),
        .footprint = gMonFootprint_Leafeon,
        LEARNSETS(Leafeon),
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 65,
        .evYield_SpAttack = 2,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 45,
        .expYield = 184,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glaceon"),
        .cryId = CRY_GLACEON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = COMPOUND_STRING(
            "It can freeze the moisture in the air\n"
            "around it, turning it into sharp, shiny\n"
            "ice which it then shoots at its\n"
            "fopponents."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Glaceon, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Glaceon, 56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Glaceon),
        ICON(Glaceon, 0),
        .footprint = gMonFootprint_Glaceon,
        LEARNSETS(Glaceon),
        OVERWORLD(
            sPicTable_Glaceon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glaceon,
            gShinyOverworldPalette_Glaceon
        )
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 45,
        .expYield = 184,
        .eggCycles = 35,
        .evYield_SpDefense = 2,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_MAGIC_GUARD, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Sylveon"),
        .cryId = CRY_SYLVEON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its ribbons are actually part of its body,\n"
            "and are prehensile. With them, Sylveon can\n"
            "manipulate small objects, or even attack\n"
            "its enemies."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sylveon, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Sylveon, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Sylveon),
        ICON(Sylveon, 0),
        .footprint = gMonFootprint_Sylveon,
        LEARNSETS(Sylveon),
        OVERWORLD(
            sPicTable_Sylveon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sylveon,
            gShinyOverworldPalette_Sylveon
        )
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 79,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_DOWNLOAD, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Porygon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON,
        .categoryName = _("Virtual"),
        .height = 8,
        .weight = 365,
        .description = COMPOUND_STRING(
            "It is capable of reverting itself entirely\n"
            "back to program data in order to enter\n"
            "cyberspace. A Porygon is copy-\n"
            "protected so it cannot be duplicated."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Porygon,
        OVERWORLD(
            sPicTable_Porygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon,
            gShinyOverworldPalette_Porygon
        )
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Porygon, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon),
        ICON(Porygon, 0),
        .footprint = gMonFootprint_Porygon,
        LEARNSETS(Porygon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_DOWNLOAD, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygon2"),
        .cryId = CRY_PORYGON2,
        .natDexNum = NATIONAL_DEX_PORYGON2,
        .categoryName = _("Virtual"),
        .height = 6,
        .weight = 325,
        .description = COMPOUND_STRING(
            "It was created by humans using the power\n"
            "of science. It has been given artificial\n"
            "intelligence that enables it to learn new\n"
            "gestures and emotions on its own."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon2, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Porygon2,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        OVERWORLD(
            sPicTable_Porygon2,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon2,
            gShinyOverworldPalette_Porygon2
        )
        .enemyMonElevation = 9,
        BACK_PIC(Porygon2, 56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon2),
        ICON(Porygon2, 0),
        .footprint = gMonFootprint_Porygon2,
        LEARNSETS(Porygon2),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MOODY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygon-Z"),
        .cryId = CRY_PORYGON_Z,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING(
            "In order to create a more advanced\n"
            "Pokémon, an additional program was\n"
            "installed, but apparently it contained a\n"
            "defect that made it move oddly."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PorygonZ, 40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Porygon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        BACK_PIC(PorygonZ, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(PorygonZ),
        ICON(PorygonZ, 0),
        .footprint = gMonFootprint_PorygonZ,
        LEARNSETS(PorygonZ),
        OVERWORLD(
            sPicTable_PorygonZ,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PorygonZ,
            gShinyOverworldPalette_PorygonZ
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Omanyte"),
        .cryId = CRY_OMANYTE,
        .natDexNum = NATIONAL_DEX_OMANYTE,
        .categoryName = _("Spiral"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "One of the ancient and long-since-extinct\n"
            "Pokémon that have been regenerated\n"
            "from fossils by humans. If attacked,\n"
            "it withdraws into its hard shell."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omanyte, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Omanyte,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        BACK_PIC(Omanyte, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omanyte),
        ICON(Omanyte, 0),
        .footprint = gMonFootprint_Omanyte,
        LEARNSETS(Omanyte),
        OVERWORLD(
            sPicTable_Omanyte,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Omanyte,
            gShinyOverworldPalette_Omanyte
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_OMASTAR}),
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Omastar"),
        .cryId = CRY_OMASTAR,
        .natDexNum = NATIONAL_DEX_OMASTAR,
        .categoryName = _("Spiral"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "An Omastar uses its tentacles to capture\n"
            "its prey. It is believed to have become\n"
            "extinct because its shell grew too large,\n"
            "making its movements slow and ponderous."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omastar, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Omastar,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Omastar, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omastar),
        ICON(Omastar, 0),
        .footprint = gMonFootprint_Omastar,
        LEARNSETS(Omastar),
         OVERWORLD(
            sPicTable_Omastar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Omastar,
            gShinyOverworldPalette_Omastar
        )
    },
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kabuto"),
        .cryId = CRY_KABUTO,
        .natDexNum = NATIONAL_DEX_KABUTO,
        .categoryName = _("Shellfish"),
        .height = 5,
        .weight = 115,
        .description = COMPOUND_STRING(
            "It is a Pokémon that has been regenerated\n"
            "from a fossil. However, in rare cases, living\n"
            "examples have been discovered. Kabuto\n"
            "have not changed for 300 million years."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabuto, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Kabuto,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Kabuto, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Kabuto),
        ICON(Kabuto, 2),
        .footprint = gMonFootprint_Kabuto,
        LEARNSETS(Kabuto),
        OVERWORLD(
            sPicTable_Kabuto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Kabuto,
            gShinyOverworldPalette_Kabuto
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KABUTOPS}),
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kabutops"),
        .cryId = CRY_KABUTOPS,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        .categoryName = _("Shellfish"),
        .height = 13,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Kabutops once swam underwater to hunt \n"
            "for prey. It was apparently evolving from\n"
            "being a water dweller to living on land as\n"
            "evident from changes in its gills and legs."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabutops, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Kabutops,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Kabutops, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Kabutops),
        ICON(Kabutops, 2),
        .footprint = gMonFootprint_Kabutops,
        LEARNSETS(Kabutops),
        OVERWORLD(
            sPicTable_Kabutops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kabutops,
            gShinyOverworldPalette_Kabutops
        )
    },
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
#define AERODACTYL_MISC_INFO                                \
        .types = { TYPE_ROCK, TYPE_FLYING },                \
        .catchRate = 45,                                    \
        .evYield_Speed = 2,                                 \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 35,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },\
        .bodyColor = BODY_COLOR_PURPLE,                     \
        .speciesName = _("Aerodactyl"),                     \
        .natDexNum = NATIONAL_DEX_AERODACTYL,               \
        .categoryName = _("Fossil"),                        \
        .footprint = gMonFootprint_Aerodactyl,              \
        LEARNSETS(Aerodactyl),                              \
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,\
        .formChangeTable = sAerodactylFormChangeTable

    [SPECIES_AERODACTYL] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = 180,
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE },
        .cryId = CRY_AERODACTYL,
        .height = 18,
        .weight = 590,
        .description = COMPOUND_STRING(
            "Aerodactyl is a Pokémon from the age\n"
            "of dinosaurs. It was regenerated from DNA\n"
            "extracted from amber. It is imagined to\n"
            "have been the king of the skies."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(Aerodactyl, 64, 64),
        .frontPicYOffset = 4,

OVERWORLD(
            sPicTable_Aerodactyl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Aerodactyl,
            gShinyOverworldPalette_Aerodactyl
        )       
         .frontAnimFrames = sAnims_Aerodactyl,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Aerodactyl, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Aerodactyl),
        ICON(Aerodactyl, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AERODACTYL_MEGA] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .expYield = 215,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .cryId = CRY_AERODACTYL_MEGA,
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution has\n"
            "completely restored its genes. The rocks\n"
            "on its body are harder than diamond."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(AerodactylMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AerodactylMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AerodactylMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(AerodactylMega),
        ICON(AerodactylMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 50,
        .evYield_HP = 1,
        .expYield = 78,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GLUTTONY, ABILITY_IMMUNITY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Munchlax"),
        .cryId = CRY_MUNCHLAX,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("Big Eater"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "When it finds something that looks like\n"
            "it might be edible, it goes right ahead\n"
            "and swallows it whole. That's why it gets\n"
            "fatter day by day."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Munchlax, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Munchlax, 48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Munchlax),
        ICON(Munchlax, 3),
        .footprint = gMonFootprint_Munchlax,
        LEARNSETS(Munchlax),
        OVERWORLD(
            sPicTable_Munchlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Munchlax,
            gShinyOverworldPalette_Munchlax
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SNORLAX}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define SNORLAX_MISC_INFO                                                       \
        .baseHP        = 160,                                                   \
        .baseAttack    = 110,                                                   \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 65,                                                    \
        .baseSpDefense = 110,                                                   \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                                  \
        .catchRate = 25,                                                        \
        .expYield = 189,                                                        \
        .genderRatio = PERCENT_FEMALE(50),                                    \
        .eggCycles = 40,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                              \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },                  \
        .abilities = { ABILITY_GLUTTONY, ABILITY_COMATOSE }, \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .speciesName = _("Snorlax"),                                            \
        .cryId = CRY_SNORLAX,                                                   \
        .natDexNum = NATIONAL_DEX_SNORLAX,                                      \
        .categoryName = _("Sleeping"),                                          \
        .footprint = gMonFootprint_Snorlax,                                     \
        LEARNSETS(Snorlax)                                                     \

    [SPECIES_SNORLAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 21,
        .weight = 4600,
        .description = COMPOUND_STRING(
            "Snorlax's typical day consists of nothing\n"
            "more than eating and sleeping. It is such\n"
            "a docile Pokémon that there are children\n"
            "who use its big belly as a place to play."),
        .pokemonScale = 256,
        .evYield_HP = 2,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(Snorlax, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Snorlax,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Snorlax, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Snorlax),
        ICON(Snorlax, 3),
        OVERWORLD(
            sPicTable_Snorlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snorlax,
            gShinyOverworldPalette_Snorlax
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GIGANTAMAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax energy has affected\n"
            "stray seeds and even pebbles that\n"
            "got stuck to Snorlax, making them grow\n"
            "to a huge size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(SnorlaxGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SnorlaxGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SnorlaxGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SnorlaxGigantamax),
        ICON(SnorlaxGigantamax, 3),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
#define ARTICUNO_MISC_INFO                                              \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .speciesName = _("Articuno"),                                   \
        .cryId = CRY_ARTICUNO,                                          \
        .natDexNum = NATIONAL_DEX_ARTICUNO,                             \
        .height = 17,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 309,                                            \
        .trainerOffset = 2,                                             \
        .footprint = gMonFootprint_Articuno,                            \
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,              \
        .isLegendary = TRUE

    [SPECIES_ARTICUNO] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .types = { TYPE_ICE, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpDefense = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_CLOAK },
        .bodyColor = BODY_COLOR_BLUE,
        .categoryName = _("Freeze"),
        .weight = 554,
        .description = COMPOUND_STRING(
            "Articuno is a legendary bird Pokémon that\n"
            "can control ice. The flapping of its wings\n"
            "chills the air. As a result, it is said that\n"
            "when this Pokémon flies, snow will fall."),
        FRONT_PIC(Articuno, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Articuno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Articuno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Articuno),
        ICON(Articuno, 2),
        LEARNSETS(Articuno),
        OVERWORLD(
            sPicTable_Articuno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Articuno,
            gShinyOverworldPalette_Articuno
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .expYield = 290,
        .evYield_SpAttack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .categoryName = _("Cruel"),
        .weight = 509,
        .description = COMPOUND_STRING(
            "It fires beams that immobilize opponents\n"
            "as if they had been frozen solid.\n"
            "Its feather-like blades of psychic energy\n"
            "rip through thick iron sheets like paper."),
        FRONT_PIC(ArticunoGalarian, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ArticunoGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(ArticunoGalarian, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArticunoGalarian),
        ICON(ArticunoGalarian, 2),
        LEARNSETS(ArticunoGalarian),
        OVERWORLD(
            sPicTable_ArticunoGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArticunoGalarian,
            gShinyOverworldPalette_ArticunoGalarian
        )
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
#define ZAPDOS_MISC_INFO                                                \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_YELLOW,                                 \
        .speciesName = _("Zapdos"),                                     \
        .cryId = CRY_ZAPDOS,                                            \
        .natDexNum = NATIONAL_DEX_ZAPDOS,                               \
        .height = 16,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 318,                                            \
        .trainerOffset = 3,                                             \
        .footprint = gMonFootprint_Zapdos,                              \
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,                \
        .isLegendary = TRUE

    [SPECIES_ZAPDOS] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_STATIC },
        #else
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        #endif
        .categoryName = _("Electric"),
        .weight = 526,
        .description = COMPOUND_STRING(
            "Zapdos is a legendary bird Pokémon that\n"
            "has the ability to control electricity.\n"
            "It usually lives in thunderclouds. It gains\n"
            "power if it is stricken by lightning bolts."),
        FRONT_PIC(Zapdos, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Zapdos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        BACK_PIC(Zapdos, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Zapdos),
        ICON(Zapdos, 0),
        LEARNSETS(Zapdos),
        OVERWORLD(
            sPicTable_Zapdos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Zapdos,
            gShinyOverworldPalette_Zapdos
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = { TYPE_FIGHTING, TYPE_FLYING },
        .expYield = 290,
        .evYield_Attack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .categoryName = _("Strong Legs"),
        .weight = 582,
        .description = COMPOUND_STRING(
            "When its feathers rub together, they\n"
            "produce a crackling sound like the\n"
            "zapping of electricity. Apparently, it runs\n"
            "through the mountains at over 180 mph."),
        FRONT_PIC(ZapdosGalarian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ZapdosGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZapdosGalarian, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZapdosGalarian),
        ICON(ZapdosGalarian, 0),
        LEARNSETS(ZapdosGalarian),
        OVERWORLD(
            sPicTable_ZapdosGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZapdosGalarian,
            gShinyOverworldPalette_ZapdosGalarian
        )
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
#define MOLTRES_MISC_INFO                                               \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .speciesName = _("Moltres"),                                    \
        .cryId = CRY_MOLTRES,                                           \
        .natDexNum = NATIONAL_DEX_MOLTRES,                              \
        .height = 20,                                                   \
        .pokemonScale = 270,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 387,                                            \
        .trainerOffset = 8,                                             \
        .footprint = gMonFootprint_Moltres,                             \
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,               \
        .isLegendary = TRUE

    [SPECIES_MOLTRES] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .categoryName = _("Flame"),
        .weight = 600,
        .description = COMPOUND_STRING(
            "Moltres is a legendary bird Pokémon\n"
            "that can control fire. If injured, it is said\n"
            "to dip its body in the molten magma of\n"
            "a volcano to burn and heal itself."),
        FRONT_PIC(Moltres, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Moltres,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Moltres, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Moltres),
        ICON(Moltres, 0),
        LEARNSETS(Moltres),
        OVERWORLD(
            sPicTable_Moltres,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Moltres,
            gShinyOverworldPalette_Moltres
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES_GALARIAN] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = { TYPE_DARK, TYPE_FLYING },
        .expYield = 290,
        .evYield_SpDefense = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .categoryName = _("Malevolent"),
        .weight = 660,
        .description = COMPOUND_STRING(
            "This Pokémon's sinister, flame-like aura\n"
            "will consume the spirit of any creature\n"
            "it hits. Victims become burned-out\n"
            "shadows of themselves."),
        FRONT_PIC(MoltresGalarian, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MoltresGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MoltresGalarian, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MoltresGalarian),
        ICON(MoltresGalarian, 0),
        LEARNSETS(MoltresGalarian),
        OVERWORLD(
            sPicTable_MoltresGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MoltresGalarian,
            gShinyOverworldPalette_MoltresGalarian
        )
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dratini"),
        .cryId = CRY_DRATINI,
        .natDexNum = NATIONAL_DEX_DRATINI,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 33,
        .description = COMPOUND_STRING(
            "A Dratini continually molts and sloughs\n"
            "off its old skin. It does so because the\n"
            "life energy within its body steadily builds\n"
            "to reach uncontrollable levels."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        FRONT_PIC(Dratini, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dratini,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dratini, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dratini),
        ICON(Dratini, 0),
        .footprint = gMonFootprint_Dratini,
        LEARNSETS(Dratini),
        OVERWORLD(
            sPicTable_Dratini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dratini,
            gShinyOverworldPalette_Dratini
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DRAGONAIR}),
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dragonair"),
        .cryId = CRY_DRAGONAIR,
        .natDexNum = NATIONAL_DEX_DRAGONAIR,
        .categoryName = _("Dragon"),
        .height = 40,
        .weight = 165,
        .description = COMPOUND_STRING(
            "A Dragonair stores an enormous amount of\n"
            "energy inside its body. It is said to alter\n"
            "the weather around it by loosing energy\n"
            "from the crystals on its neck and tail."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        FRONT_PIC(Dragonair, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Dragonair,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Dragonair, 40, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Dragonair),
        ICON(Dragonair, 0),
        .footprint = gMonFootprint_Dragonair,
        LEARNSETS(Dragonair),
         OVERWORLD(
            sPicTable_Dragonair,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dragonair,
            gShinyOverworldPalette_Dragonair
        )
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_DRAGONITE}),
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragonite"),
        .cryId = CRY_DRAGONITE,
        .natDexNum = NATIONAL_DEX_DRAGONITE,
        .categoryName = _("Dragon"),
        .height = 22,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "It can circle the globe in just 16 hours.\n"
            "It is a kindhearted Pokémon that leads\n"
            "lost and foundering ships in a storm\n"
            "to the safety of land."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Dragonite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dragonite,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Dragonite, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Dragonite),
        ICON(Dragonite, 2),
        .footprint = gMonFootprint_Dragonite,
        LEARNSETS(Dragonite),
        OVERWORLD(
            sPicTable_Dragonite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dragonite,
            gShinyOverworldPalette_Dragonite
        )
    },
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
#define SPECIES_MEWTWO_MISC_INFO                                        \
        .catchRate = 3,                                                 \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_PURPLE,                                 \
        .speciesName = _("Mewtwo"),                                     \
        .natDexNum = NATIONAL_DEX_MEWTWO,                               \
        .categoryName = _("Genetic"),                                   \
        .footprint = gMonFootprint_Mewtwo,                              \
        LEARNSETS(Mewtwo),                                              \
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,                \
        .formChangeTable = sMewtwoFormChangeTable,                      \
        .isLegendary = TRUE

    [SPECIES_MEWTWO] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .expYield = 306,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .cryId = CRY_MEWTWO,
        .height = 20,
        .weight = 1220,
        .description = COMPOUND_STRING(
            "A Pokémon that was created by genetic\n"
            "manipulation. However, even though the\n"
            "scientific power of humans made its body,\n"
            "they failed to give it a warm heart."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Mewtwo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mewtwo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Mewtwo, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Mewtwo),
        ICON(Mewtwo, 2),
        OVERWORLD(
            sPicTable_Mewtwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mewtwo,
            gShinyOverworldPalette_Mewtwo
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEWTWO_MEGA_X] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING },
        .expYield = 351,
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .isMegaEvolution = TRUE,
        .cryId = CRY_MEWTWO_MEGA_X,
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING(
            "Psychic power has augmented its muscles.\n"
            "It has a grip strength of one ton and can\n"
            "sprint a hundred meters in two seconds\n"
            "flat!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaX, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MewtwoMegaX, 56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaX),
        ICON(MewtwoMegaX, 2),
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .expYield = 351,
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .isMegaEvolution = TRUE,
        .cryId = CRY_MEWTWO_MEGA_Y,
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Despite its diminished size, its mental\n"
            "power has grown phenomenally. With a mere\n"
            "thought, it can smash a skyscraper to\n"
            "smithereens."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaY, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        BACK_PIC(MewtwoMegaY, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaY),
        ICON(MewtwoMegaY, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .isMythical = TRUE,
        .speciesName = _("Mew"),
        .cryId = CRY_MEW,
        .natDexNum = NATIONAL_DEX_MEW,
        .categoryName = _("New Species"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Mew is said to possess the genes of all\n"
            "Pokémon. It is capable of making itself\n"
            "invisible at will, so it entirely avoids\n"
            "notice even if it approaches people."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mew, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mew,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 11,
        BACK_PIC(Mew, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Mew),
        ICON(Mew, 0),
        .footprint = gMonFootprint_Mew,
        OVERWORLD(
            sPicTable_Mew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Mew,)
        LEARNSETS(Mew),
        
            
    },
#endif //P_FAMILY_MEW

#ifdef __INTELLISENSE__
};
#endif