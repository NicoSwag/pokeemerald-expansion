.set LOCALID_EXPERT_M, 4
.set LOCALID_TWIN, 5
.set LOCALID_SCHOOL_KID_M, 7
.set LOCALID_PSYCHIC_M, 8

DewfordTown_Hall_MapScripts::
	.byte 0

DewfordTown_Hall_EventScript_Girl::
	lock
	faceplayer
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_GirlBoredOfTrend::
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Woman::
	lock
	faceplayer
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Man::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	special BufferDeepLinkPhrase
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
	end

DewfordTown_Hall_EventScript_ConfirmTrendLink::
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_RejectTrendLink::
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_ExpertM::
	lockall
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_Hall_EventScript_Twin::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_LittleBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_RIBBON_BOX, DewfordTown_Hall_EventScript_LittleBoyGaveRibbon
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_RIBBON_BOX
	giveitem ITEM_RIBBON_BOX
	msgbox DewfordTown_Hall_Text_RibbonBox, MSGBOX_DEFAULT
	release
	end


DewfordTown_Hall_EventScript_LittleBoyGaveRibbon::
	msgbox DewfordTown_Hall_Text_RibbonBox, MSGBOX_DEFAULT
	release
	end


DewfordTown_Hall_EventScript_Bookshelf::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_Painting::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
	case 1, DewfordTown_Hall_EventScript_SmileTitle
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
	case 2, DewfordTown_Hall_EventScript_LastTitle
	case 6, DewfordTown_Hall_EventScript_LastTitle
	case 3, DewfordTown_Hall_EventScript_BirthTitle
	case 7, DewfordTown_Hall_EventScript_LastTitle
	end

DewfordTown_Hall_EventScript_ScreamTitle::
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_Gentleman::
	goto_if_unset FLAG_RECEIVED_TM10 DewfordTown_Hall_EventScript_GentlemanTeachesDolls
	msgbox DewfordTown_Hall_Text_ILoveDolls, MSGBOX_NPC
	end

DewfordTown_Hall_EventScript_GentlemanTeachesDolls:
	msgbox DewfordTown_Hall_Text_GiveSubstitute, MSGBOX_NPC
	setflag FLAG_RECEIVED_TM10
	giveitem ITEM_TM_SUBSTITUTE
	end

DewfordTown_Hall_EventScript_SmileTitle::
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_LastTitle::
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_BirthTitle::
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_SchoolKidM::
	lockall
	setvar VAR_0x8008, 0
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end

DewfordTown_Hall_EventScript_PsychicM::
	msgbox DewfordTown_Hall_Text_Unevolved, MSGBOX_NPC
	end

DewfordTown_Hall_EventScript_DoTrendDebate::
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
	end

DewfordTown_Hall_EventScript_TrendDebate1::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
	releaseall
	end


DewfordTown_EventScript_DewfordBerryMaster::
	goto_if_set FLAG_SHOWN_EMEROLL, DewfordTown_EventScript_DewfordBerryMasterAfter
	msgbox DewfordTown_Text_ShowMeEmeroll, MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_EventScript_CheckPokemon
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_EventScript_NotAPokemon
	end


DewfordTown_EventScript_DewfordBerryMasterAfter::
	msgbox DewfordTown_Text_Intriguing, MSGBOX_NPC
	end


DewfordTown_EventScript_NotAPokemon::
	msgbox DewfordTown_Text_DoNotHaveIt, MSGBOX_NPC
	end

DewfordTown_EventScript_CheckPokemon::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EMERAIL, DewfordTown_EventScript_IsRightMon
	goto_if_eq VAR_RESULT, SPECIES_EMEROLL, DewfordTown_EventScript_IsRightMon
	goto_if_eq VAR_RESULT, SPECIES_BEHEMERALD, DewfordTown_EventScript_IsRightMon
	goto DewfordTown_EventScript_NotAPokemon
	end


DewfordTown_EventScript_IsRightMon::
	msgbox DewfordTown_Text_PokemonShown, MSGBOX_NPC
	setflag FLAG_SHOWN_EMEROLL
	giveitem ITEM_CHOPLE_VOUCHER
	end


DewfordTown_Hall_EventScript_TrendDebate2::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate3::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate4::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate5::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_DontMovePlayer1::
	return

DewfordTown_Hall_EventScript_DebateReact1::
	applymovement LOCALID_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
	end

DewfordTown_Hall_EventScript_PlayerReactWest::
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

DewfordTown_Hall_EventScript_DontMovePlayer2::
	return

DewfordTown_Hall_EventScript_DebateReact2::
	applymovement LOCALID_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
	end

DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerReactEast::
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
	walk_in_place_left
	step_end

DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
	walk_in_place_right
	step_end

DewfordTown_Hall_EventScript_Wynaut::
	msgbox DewfordTown_Hall_Text_Wynaut, MSGBOX_SIGN
	end


DewfordTown_Hall_EventScript_SludgeBombMan::
	goto_if_set FLAG_RECEIVED_PLAY_ROUGH, DewfordTown_Hall_EventScript_ReceivedPlayRough
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_NPC
	checkitem ITEM_EVIOLITE
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_Eviolite
	release
	end


DewfordTown_Hall_EventScript_ReceivedPlayRough::
	msgbox DewfordTown_Hall_Text_PlayRough, MSGBOX_DEFAULT
	release
	end


DewfordTown_Hall_EventScript_Eviolite::
	msgbox DewfordTown_Hall_Text_Eviolite, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_GetPlayRough
	msgbox DewfordTown_Hall_Text_Tch, MSGBOX_DEFAULT
	release
	end


DewfordTown_Hall_EventScript_GetPlayRough::
	setflag FLAG_RECEIVED_PLAY_ROUGH
	removeitem ITEM_EVIOLITE, 1
	msgbox DewfordTown_Hall_Text_BlessYou, MSGBOX_DEFAULT
	giveitem ITEM_TM_PLAY_ROUGH
	msgbox DewfordTown_Hall_Text_PlayRough, MSGBOX_DEFAULT
	release
	end


DewfordTown_Hall_Text_BlessYou:
	.string "…Ah, bless you.\n"
	.string "Bless, you, my friend.\p"
	.string "I will treasure this item.\p"
	.string "Now, as promised.$"

DewfordTown_Hall_Text_PlayRough:
	.string "Play Rough is an extremely powerful\n"
	.string "move.\p"
	.string "I am sure that a Trainer as wise as you\n"
	.string "will be able to master it.$"

DewfordTown_Hall_Text_Tch:
	.string "…Tch.\p"
	.string "A million curses on your, and your\n"
	.string "family, and your children, for a hundred\l"
	.string "generation henceforth.$"

DewfordTown_Hall_Text_Eviolite:
	.string "…But that…!\p"
	.string "Could it be? Could it truly be?\p"
	.string "It is! An Eviolite!\p"
	.string "Oh, I feel so blessed!\p"
	.string "…Say.\p"
	.string "Give it to me, and in return I will give\n"
	.string "you the TM for Play Rough.\p"
	.string "It's a powerful move… You would\n"
	.string "not regret it.$"


DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
	.string "Personally, I could not associate\n"
	.string "with people who use elemental stones.\p"
	.string "I've heard that they can make POKéMON\n"
	.string "evolve with some horrid radiation!\p"
	.string "It's just not natural!$"

DewfordTown_Hall_Text_GettingBoredOfTrend:
	.string "What's in vogue? Why, it has to be\n"
	.string "“{STR_VAR_1}”!\p"
	.string "But I'm getting kind of bored with it.\p"
	.string "I should look for the next big thing.$"

DewfordTown_Hall_Text_TeachingMonAboutTrend:
	.string "That man has a Wynaut…\p"
	.string "A rare, beautiful, pristine, untainted,\n"
	.string "unevolved Wynaut…\p"
	.string "Ohhhh… The jealousy…$"

DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
	.string "I'm studying up on the hip and trendy\n"
	.string "“{STR_VAR_1}” now.\p"
	.string "Is it true that there's a deep link\n"
	.string "between “{STR_VAR_1}”\l"
	.string "and “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_MyHunchWasRight:
	.string "Oh!\n"
	.string "So, my hunch was right!\p"
	.string "I'm one step closer to being hip and\n"
	.string "happening, yowza!$"

DewfordTown_Hall_Text_NotEasyToKeepUp:
	.string "What?!\n"
	.string "Is that so?!\p"
	.string "It's not easy for an older fellow like\n"
	.string "me to keep up with trends!$"

DewfordTown_Hall_Text_TVShowAboutTrend:
	.string "This new television thing…\p"
	.string "So entertaining…$"

DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
	.string "Across the sea…\p"
	.string "Is “{STR_VAR_1}”\n"
	.string "even more popular?$"

DewfordTown_Hall_Text_CollectTrendMerchandise:
	.string "Hi! I'm the president of this\n"
	.string "FAN CLUB!\p"
	.string "Yeah, that's right!\p"
	.string "Oh, the man at the end of the table?\n"
	.string "That's just his favorite spot.\p"
	.string "Anyway!\p"
	.string "This club is dedicated to the beauty of\n"
	.string "unevolved POKéMON!\p"
	.string "They're not only cute, but they can\n"
	.string "be strong, too!\p"
	.string "Here's a gift to celebrate our meeting!$"

DewfordTown_Hall_Text_BooksAboutTrend:
	.string "IDENTIFYING GOOD\n"
	.string "“{STR_VAR_1}” &\l"
	.string "BAD “{STR_VAR_1}”…\p"
	.string "THE LINK BETWEEN\n"
	.string "“{STR_VAR_1}” AND\l"
	.string "POKéMON…\p"
	.string "USEFUL\n"
	.string "“{STR_VAR_1}”…\p"
	.string "It's neatly jammed with books about\n"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_TrendsScream:
	.string "“{STR_VAR_1}'S\n"
	.string "SCREAM” is the title.$"

DewfordTown_Hall_Text_TrendsSmile:
	.string "“{STR_VAR_1}'S\n"
	.string "SMILE” is the title.$"

DewfordTown_Hall_Text_LastTrend:
	.string "It's titled “THE LAST\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_BirthOfTrend:
	.string "It's titled “THE BIRTH OF\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_SawTrendCoolestThing:
	.string "I saw “{STR_VAR_1}”!\n"
	.string "Cool, huh?\p"
	.string "It's, like, the coolest thing going!\p"
	.string "It was awesome!\n"
	.string "It was the real thing, oh yeah!$"

DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
	.string "Oh, no, no, no.\p"
	.string "That alleged\n"
	.string "“{STR_VAR_1}”\l"
	.string "you claim to have seen--it's not.\p"
	.string "The authentic article is much…\n"
	.string "How should I say it?\l"
	.string "Sharper, yet more mellow!\p"
	.string "Ah, no matter. It's astonishing!$"

DewfordTown_Hall_Text_ComposedTrendThemeSong:
	.string "Hey, listen, I composed a theme song\n"
	.string "for “{STR_VAR_1}.”\p"
	.string "“{STR_VAR_1}”\n"
	.string "is really popular right now.\p"
	.string "Okay, listen!\n"
	.string "… …\p"
	.string "Oh!\n"
	.string "{STR_VAR_1}!\p"
	.string "Wonderful\n"
	.string "{STR_VAR_1}!$"

DewfordTown_Hall_Text_WorkOnYourSinging:
	.string "… …\p"
	.string "I dare say, chap, it would pay for you\n"
	.string "to work on your singing before you\l"
	.string "trifle yourself with\l"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_OrganizeTrendParty:
	.string "Anyway, as I was saying earlier, we\n"
	.string "should get together and organize a\l"
	.string "“{STR_VAR_1}” party\l"
	.string "on the island.$"

DewfordTown_Hall_Text_BrilliantIndeed:
	.string "Oh, a smashing good idea!\p"
	.string "It will settle once and for all\n"
	.string "who is the best at\l"
	.string "“{STR_VAR_1}.”\l"
	.string "Brilliant, indeed!\p"
	.string "Starting today, our lives will revolve\n"
	.string "around “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
	.string "I was thinking, though…\p"
	.string "Wouldn't you agree that\n"
	.string "“{STR_VAR_1}” has\l"
	.string "grown from being something trendy to\l"
	.string "being a part of our daily lives?$"

DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
	.string "Beg pardon?\n"
	.string "That much, what?\p"
	.string "However, it's true that\n"
	.string "“{STR_VAR_1}”\l"
	.string "weighs heavily on your mind, whether\l"
	.string "you're awake or asleep.\p"
	.string "Absolutely, you're the\n"
	.string "“{STR_VAR_1}”\l"
	.string "PROFESSOR, old sport!$"

DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
	.string "If you and me team up as a combo,\n"
	.string "we'll be invincible when it comes to all\l"
	.string "things “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_WellBeTrendDuo:
	.string "Spot on, my friend!\p"
	.string "We shall be the\n"
	.string "“{STR_VAR_1}” DUO!\p"
	.string "Isn't that a ripe image?\n"
	.string "Hahahah!$"

DewfordTown_Hall_Text_GiveYouSludgeBomb:
	.string "For me, SLUDGE BOMB is at the peak\n"
	.string "of popularity. It's the one.\p"
	.string "Hunh? You're telling me that you don't\n"
	.string "know about SLUDGE BOMB?\p"
	.string "That's outright pitiful.\n"
	.string "I'll give you one.$"

DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo:
	.string "Have you heard about a legendary item\n"
	.string "called Eviolite?\p"
	.string "Allegedly, it makes unevolved Pokémon\n"
	.string "super strong.\p"
	.string "Such power… I can only dream about even\n"
	.string "touching a potent artefact like that…$"

DewfordTown_Hall_Text_Wynaut:
	.string "Oh! A rare POKéMON!\p"
	.string "…Actually, it's just a doll.$"

DewfordTown_Hall_Text_ILoveDolls:
	.string "I love dolls!\p"
	.string "They're cute, they never grow up,\n"
	.string "require no care, and never disappoint!\p"
	.string "Unlike my son.$"

DewfordTown_Hall_Text_GiveSubstitute:
	.string "I love dolls!\p"
	.string "They're cute, they never grow up,\n"
	.string "require no care, and never disappoint!\p"
	.string "Here, let me teach you how to make them!$"

	DewfordTown_Hall_Text_RibbonBox:
	.string "That's a Ribbon Box.\p"
	.string "If you give your Pokémon a Ribbon, they\n"
	.string "will never evolve.\p"
	.string "…Unless you give them an evolutionary\n"
	.string "item, but why would you do that?$"

DewfordTown_Hall_Text_Unevolved:
	.string "Some of the club members are a bit…\n"
	.string "Extra.\p"
	.string "However, it is true that some unevolved\n"
	.string "Pokémon can be as strong as their\l"
	.string "evolution, if not more.\p"
	.string "Scyther, Vigoroth, or Magneton…\n"
	.string "Are all good choices.\p"
	.string "There are other cases too, of course.$"

DewfordTown_Text_ShowMeEmeroll:
	.string "Hmmmmmmmm…\p"
	.string "I may not look like it, but…\n"
	.string "I come from the Galar region.\p"
	.string "Very far away, yes. Very far.\p"
	.string "I have settled here, and I am now\n"
	.string "a Berry Master, yes.\p"
	.string "You see, there is something I am curious\n"
	.string "about.\p"
	.string "Those emerald-looking Pokémon in the mines,\n"
	.string "they look similar to ones in my region.\p"
	.string "I would like to see one, yes.\n"
	.string "I will reward you, if you will help.$"


DewfordTown_Text_DoNotHaveIt:
	.string "Hmmmmmmmm…\p"
	.string "You do not have it?\n"
	.string "I see.\p"
	.string "But no prize for you.$"

DewfordTown_Text_PokemonShown:
	.string "Hmmmmmmmm…\p"
	.string "I see, I see…\n"
	.string "Very curious.\p"
	.string "This Pokémon is very similar to a\n"
	.string "species found in Galar, but…\p"
	.string "It also seems to diverge significantly…\p"
	.string "Hmmmmmmmm…\p"
	.string "I will have to ponder on this.\p"
	.string "In the mean time, you have more than\n"
	.string "earned your prize.\p"
	.string "Here it is, for you.$"


DewfordTown_Text_Intriguing:
	.string "Hmmmmmmmm…\p"
	.string "Some Pokémon can adapt to regions where\n"
	.string "they are not originally native.\p"
	.string "Those are called Regional Forms.\p"
	.string "Some happen to look like other Pokémon,\n"
	.string "but are actually unrelated.\p"
	.string "Those are called Convergent Forms.\p"
	.string "I suppose the one you have shown me is closer\n"
	.string "to the latter…\p"
	.string "Or perhaps, it is something else entirely.\p"
	.string "Oh, well. It does not really matter.$"