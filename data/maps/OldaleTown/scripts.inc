.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4
.set LOCALID_LEDYBA, 7
.set LOCALID_PELIPPER, 10

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_RECEIVED_EEVEE, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
	setvar VAR_PELIPPER, 10
	end

@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
OldaleTown_EventScript_SetOldaleState::
	setvar VAR_OLDALE_TOWN_STATE, 1
	return

OldaleTown_EventScript_Slugma::
	playmoncry SPECIES_SLUGMA, CRY_MODE_NORMAL
	msgbox OldaleTown_Text_Slugma, MSGBOX_NPC
	release
	end


OldaleTown_Text_Slugma:
	.string "SLUGMA: Bwshsh!$"

OldaleTown_EventScript_Ledyba::
 call_if_set FLAG_HELPED_LEDYBA, OldaleTown_EventScript_LedybaGrateful
 call OldaleTown_EventScript_HelpingLedyba
 end

OldaleTown_EventScript_HelpingLedyba::
	lock
	msgbox OldaleTown_Text_WantToHelpLedyba, MSGBOX_DEFAULT
	waitmessage
	msgbox OldaleTown_Text_YesOrNoLedyba, MSGBOX_YESNO
	waitmessage
	goto_if_eq VAR_RESULT, YES, OldaleTown_EventScript_LedybaGetUp
	release
	end
	
OldaleTown_EventScript_Girl2::
	goto_if_set FLAG_UTILITY_UMBRELLA, OldaleTown_EventScript_Girl2_GaveUmbrella
	msgbox OldaleTown_Text_Girl2, MSGBOX_NPC
	setflag FLAG_UTILITY_UMBRELLA
	giveitem ITEM_UTILITY_UMBRELLA
	OldaleTown_EventScript_Girl2_GaveUmbrella::
	msgbox OldaleTown_Text_Umbrella, MSGBOX_NPC
	end

OldaleTown_EventScript_LedybaGetUp::	
	applymovement LOCALID_LEDYBA, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox OldaleTown_Text_LedybaPresent, MSGBOX_NPC
	waitmessage
	giveitem ITEM_TM_HELPING_HAND
	call_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	setflag FLAG_HELPED_LEDYBA
	release
	end
	
OldaleTown_EventScript_LedybaGrateful::
	lockall
	msgbox OldaleTown_Text_LedybaHello, MSGBOX_NPC
	release
	end

OldaleTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 0, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

OldaleTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 4, 18
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_HeadingOut, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POKE_DOLL
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_Eevee_Check
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Eevee_Check::
	goto_if_unset FLAG_RECEIVED_EEVEE, OldaleTown_EventScript_Eevee_Get
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end





OldaleTown_EventScript_Eevee_Get::
	msgbox OldaleTown_Text_GiveEevee, MSGBOX_NPC
	setvar VAR_TEMP_1, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, OldaleTown_EventScript_SendEeveeParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, OldaleTown_EventScript_SendEeveePC
	goto Common_EventScript_NoMoreRoomForPokemon
	release
	end
	

OldaleTown_EventScript_SendEeveeParty::
	call OldaleTown_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_ReceivedEevee
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto OldaleTown_EventScript_ReceivedEevee
	end

OldaleTown_EventScript_SendEeveePC::
	call OldaleTown_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_EeveeTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto OldaleTown_EventScript_EeveeTransferredToPC
	end

OldaleTown_EventScript_EeveeTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto OldaleTown_EventScript_ReceivedEevee
	end

OldaleTown_EventScript_ReceivedEeveeFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_EEVEE
	playfanfare MUS_OBTAIN_ITEM
	message OldaleTown_Text_ObtainedEevee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	return

OldaleTown_EventScript_ReceivedEevee::
	setflag FLAG_RECEIVED_EEVEE
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, OldaleTown_EventScript_FootprintsManRight
	case DIR_WEST, OldaleTown_EventScript_FootprintsManDown
	case DIR_SOUTH, OldaleTown_EventScript_FootprintsManDown
	releaseall
	end


OldaleTown_Text_ObtainedEevee:
	.string "{PLAYER} obtained Eevee.$"

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
	end

OldaleTown_EventScript_ShowMayMessage::
call Common_Set_Name_Rival
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowBrendanMessage::
call Common_Set_Name_Rival
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_RivalFinish::
	closemessage
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_DoExitMovement1::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_Movement_RivalApproachPlayer1:
	walk_in_place_faster_left
	end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_in_place_faster_left
	end


OldaleTown_Movement_RivalExit:
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_EventScript_FootprintsManRight::
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_FootprintsRight
	waitmovement 0
	removeobject LOCALID_FOOTPRINTS_MAN
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 10, 6
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	releaseall
	end

OldaleTown_EventScript_FootprintsManDown::
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_FootprintsDown
	waitmovement 0
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 10, 6
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	releaseall
	end

OldaleTown_Movement_FootprintsRight::
	walk_right
	walk_right
	walk_diag_northeast
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_Movement_FootprintsDown::
	walk_down
	walk_right
	walk_right
	walk_diag_northeast
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end


OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Movement_Ledyba:
	face_down
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_down
	delay_16
	step_end
	

OldaleTown_Text_SavingMyProgress:
	.string "There are many ways to make a\n"
	.string "Pokémon stronger.\p"
	.string "Defeating enemies is one, but it\n"
	.string "won't always cut it.\p"
	.string "I've heard that Gyms sell items that\n"
	.string "can improve the power of your Pokémon.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a Pokémon Mart.$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a Pokémon Center.\n"
	.string "The Pokémon Mart is inside it!\p"
	.string "We sell a variety of goods.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation:
	.string "Running away from wild Pokémon can be\n"
	.string "more difficult than expected.\p"
	.string "With a Poké Doll, you can disengage the\n"
	.string "enemy without fail.\p"
	.string "Prevention is the best medicine, after\n"
	.string "all.$"

OldaleTown_Text_WaitDontComeInHere:
	.string "Oh, hello!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare Pokémon!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_DiscoveredFootprints:
	.string "I just discovered the footprints of\n"
	.string "a rare Pokémon!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "Thank you for taking this Eevee!\p"
	.string "I'm sure it'll be very happy in your\n"
	.string "care.$"

OldaleTown_Text_GiveEevee:
	.string "I was sketching the footprints of\n"
	.string "a rare Pokémon, but…\p"
	.string "You can imagine my surprise when\n"
	.string "said Pokémon jumped out of the\l"
	.string "grass and approached me!\p"
	.string "Now the little fellow won't leave\n"
	.string "me alone, but I'm hardly a Trainer…\p"
	.string "But you, you look the part!\p"
	.string "Please, do me a favor and accept it!$"

OldaleTown_Text_MayLetsGoBack:
	.string "I'm heading back to my dad's\n"
	.string "Lab now.\l"
	.string "{PLAYER}, hurry up!$"

OldaleTown_Text_BrendanLetsGoBack:
	.string "I'm heading back to my dad's\n"
	.string "Lab now.\l"
	.string "{PLAYER}, hurry up!$"

OldaleTown_Text_TownSign:
	.string "Oldale Town$"

OldaleTown_Text_WantToHelpLedyba:
	.string "This Ledyba looks like it's offering\n"
	.string "you a handshake.$"

OldaleTown_Text_YesOrNoLedyba:
	.string "Do you grab its hand!$"

OldaleTown_Text_LedybaPresent:
	.string "Ledyba looks happy.\p"
	.string "Oh, but what's this?\n"
	.string "It seems like Ledyba is offering you\l"
	.string "a gift!$"

OldaleTown_Text_LedybaHello:
	.string "Ledyba is waving to you with all of\n"
	.string "its hands.$"

OldaleTown_Text_Girl2:
	.string "It rains a lot around here.\n"
	.string "Fire-type moves get weaker in rain.\p"
	.string "But don't worry!\n"
	.string "My umbrellas can help.$"

OldaleTown_Text_Umbrella:
	.string "A Utility Umbrella can protect\n"
	.string "your Pokémon from the effects of\l"
	.string "the rain.\p"
	.string "It can double as a parasol for the sun,\n"
	.string "too!$"


OldaleTown_Text_HeadingOut:
	.string "Heading out?\n"
	.string "Here's something you should know.\p"
	.string "Each area has a Leader.\p"
	.string "If you leave an area without defeating\n"
	.string "its Leader, you will be rematched by\l"
	.string "Trainers.\p"
	.string "Also, just between me and you…\p"
	.string "Being defeated might set you back\n"
	.string "a lot more than expected.\p"
	.string "As my grandpa always said:\n"
	.string "Losing might send you back to\l"
	.string "the title screen!\p"
	.string "I'm not sure what he meant by that,\n"
	.string "but it's probably good advice.$"
