const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_STEVEN] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
    },

      [PARTNER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
    },

  [PARTNER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
    },
      [PARTNER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
    },
    [PARTNER_MAY_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("MAY"),
        .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
    },
  [PARTNER_MAY_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("MAY"),
        .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
    },

      [PARTNER_MAY_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("MAY"),
        .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
    },

};
