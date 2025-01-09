.set LOCALID_SLUGMA, 7


Foundry_MapScripts::
	.byte 0






DewfordTown_EventScript_FoundryMiner1::
	msgbox DewfordTown_Text_FoundryMiner1, MSGBOX_NPC
	end

DewfordTown_EventScript_FoundryMiner2::
	lock
	msgbox DewfordTown_Text_FoundryMiner2, MSGBOX_DEFAULT
	closemessage
	release
	end


DewfordTown_EventScript_FoundryMiner3::
	msgbox DewfordTown_Text_FoundryMiner3, MSGBOX_NPC
	end


DewfordTown_EventScript_FoundryMiner4::
	goto_if_unset FLAG_FOUNDRY_COMPONENT_GOT, DewfordTown_EventScript_FoundryNotAvailable
	msgbox DewfordTown_Text_FoundryMiner4, MSGBOX_NPC
	end

DewfordTown_EventScript_FoundryNotAvailable:
	msgbox DewfordTown_Text_FoundryNotAvailable, MSGBOX_NPC
	end

DewfordTown_EventScript_FoundryInteract::
	goto_if_unset FLAG_FOUNDRY_COMPONENT_GOT, DewfordTown_EventScript_Nothing
	lock
	checkitem ITEM_RAINBOW_ORE
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_NoOre
	msgbox DewfordTown_Text_ChooseFire, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_EventScript_FoundryCheckFire
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_EventScript_FoundryNoMon
	end


DewfordTown_EventScript_Nothing::
	msgbox Foundry_Text_Broken, MSGBOX_DEFAULT
	closemessage
	end


DewfordTown_EventScript_NoOre::
	msgbox DewfordTown_Text_NoOre, MSGBOX_DEFAULT
	release
	end


DewfordTown_EventScript_FoundryCheckFire::
	specialvar VAR_RESULT, ScriptIsPartyMonFireType
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_FoundryIsFire
	goto DewfordTown_EventScript_FoundryIsNotFire
	end


DewfordTown_EventScript_FoundryIsFire::
	msgbox DewfordTown_Text_IsFire, MSGBOX_DEFAULT
	multichoicegrid 12, 0, EVO_STONES, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_FireStone
	case 1, DewfordTown_EventScript_WaterStone
	case 2, DewfordTown_EventScript_ThunderStone
	case 3, DewfordTown_EventScript_LeafStone
	case 4, DewfordTown_EventScript_MoonStone
	case 5, DewfordTown_EventScript_SunStone
	case 6, DewfordTown_EventScript_ShinyStone
	case 7, DewfordTown_EventScript_DuskStone
	case 8, DewfordTown_EventScript_DawnStone
	case 9, DewfordTown_EventScript_IceStone
	goto DewfordTown_EventScript_FoundryNoMon
	end


DewfordTown_EventScript_FadeToBlack::
	fadescreenswapbuffers FADE_TO_BLACK
	removeitem ITEM_RAINBOW_ORE, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	return


DewfordTown_EventScript_FireStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_FIRE_STONE
	release
	end

DewfordTown_EventScript_WaterStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_WATER_STONE
	release
	end

DewfordTown_EventScript_ThunderStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_THUNDER_STONE
	release
	end

DewfordTown_EventScript_LeafStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_LEAF_STONE
	release
	end

DewfordTown_EventScript_MoonStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_MOON_STONE
	release
	end

DewfordTown_EventScript_SunStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_SUN_STONE
	release
	end

DewfordTown_EventScript_ShinyStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_SHINY_STONE
	release
	end


DewfordTown_EventScript_DuskStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_DUSK_STONE
	release
	end


DewfordTown_EventScript_DawnStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_DAWN_STONE
	release
	end


DewfordTown_EventScript_IceStone::
	call DewfordTown_EventScript_FadeToBlack
	giveitem ITEM_ICE_STONE
	release
	end

DewfordTown_EventScript_FoundryIsNotFire::
	msgbox DewfordTown_Text_IsNotFire, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FoundryNoMon::
	release
	end


DewfordTown_Text_FoundryMiner1:
	.string "Here in the foundry, we take the ore\n"
	.string "from the mines and refine it.\p"
	.string "We then ship the emeralds to other\n"
	.string "towns in Hoenn, or even other regions.$"


DewfordTown_Text_FoundryMiner2:
	.string "Ore production…\n"
	.string "Is slightly behind schedule.$"


DewfordTown_Text_FoundryMiner3:
	.string "Working with Pokémon can be\n"
	.string "unpredictable.\p"
	.string "But I would not have it any other\n"
	.string "way.\p"
	.string "What humans and Pokémon can accomplish\n"
	.string "together is astounding.$"


DewfordTown_Text_FoundryMiner4:	
	.string "The component arrived!\p"
	.string "A promise is a promise.\p"
	.string "If you want to use the smelter on the\n"
	.string "right, go ahead.\p"
	.string "You'll just need to bring a Fire-type\n"
	.string "Pokémon and some ore to smelt.$"


DewfordTown_Text_IsFire:
	.string "Which stone do you want?$"

DewfordTown_Text_IsNotFire:
	.string "Maybe another time.$"


DewfordTown_Text_NoOre:
	.string "You don't have any ore to smelt.$"


DewfordTown_Text_ChooseFire:
	.string "You can smelt your Rainbow Ore with\n"
	.string "a Fire-Type Pokémon.$"


DewfordTown_Text_FoundryNotAvailable:
	.string "Well, the last furnace on the right\n"
	.string "broke down.\p"
	.string "And the only way to repair it is with\n"
	.string "a component that's manufactured in\l"
	.string "Slateport City.\p"
	.string "Say…\p"
	.string "Could you go to Slateport and ask\n"
	.string "around for it?\p"
	.string "I'll let you use the furnace if you do me\n"
	.string "this favor.$"

Foundry_Text_Broken:
	.string "It's broken.$"