.set LOCALID_WALLY, 2
.set LOCALID_GRANNY, 1
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 6
.set LOCALID_SCOTT, 7
.set LOCALID_LOOKER, 17

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	call PetalburgToRustboroHandleTrainers
	
	setflag FLAG_VISITED_PETALBURG_CITY
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	setvar VAR_PELIPPER, 22
	end


PetalburgToRustboroHandleTrainers::
	call Route104_HandleTrainers
	call PetalburgWoods_HandleTrainers
	call Route104Upper_HandleTrainers
	return


PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
	setobjectxyperm LOCALID_GYM_BOY, 5, 10
	return

PetalburgCity_EventScript_Lotad::
	msgbox PetalburgCity_Text_Lotad, MSGBOX_DEFAULT
	closemessage
	end

PetalburgCity_EventScript_Zigzagoon::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON_GALARIAN, CRY_MODE_NORMAL
	msgbox PetalburgCity_Text_ZigzagoonNoises, MSGBOX_NPC
	end

PetalburgCity_Text_ZigzagoonNoises:
	.string "Zigza!$"

PetalburgCity_EventScript_RainyLady::
	msgbox PetalburgCity_Text_RainyLady, MSGBOX_NPC
	end


PetalburgCity_Text_Lotad:
	.string "Lotad is sleeping.$"

PetalburgCity_EventScript_DisableMapNameAndMusic::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_FOLLOW_ME
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0

PetalburgCity_EventScript_WallyTutorial::
	lockall
	special SavePlayerParty
	special LoadWallyZigzagoon
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
	special StartWallyTutorialBattle
	waitstate
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_PETALBURG_CITY_STATE, 3
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	special LoadPlayerParty
	setvar VAR_PETALBURG_GYM_STATE, 1
	warp MAP_PETALBURG_CITY_GYM, 4, 108
	waitstate
	releaseall
	end

PetalburgCity_EventScript_WalkToWallyHouse::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM02, PetalburgCity_EventScript_Boy_TM
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_Boy_TM::
	msgbox PetalburgCity_Text_WaterTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_CHILLING_WATER
	msgbox PetalburgCity_Text_WaterTMExplain MSGBOX_NPC
	setflag FLAG_RECEIVED_TM02
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	goto_if_set FLAG_GOT_THROAT_SPRAY, PetalburgCity_EventScript_WallysMomPostItem
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	checkpartymoveold MOVE_AROMATHERAPY
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_WallyMomEnd
	setflag FLAG_GOT_THROAT_SPRAY
	msgbox PetalburgCity_Text_GiveThroatSpray, MSGBOX_NPC
	giveitem ITEM_THROAT_SPRAY
	end

PetalburgCity_EventScript_WallysMomPostItem::
	msgbox PetalburgCity_Text_WallySick, MSGBOX_NPC
	end


EventScript_WallyMomEnd::
	end
PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_Right
	waitmovement 0
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyDown
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_Movement_Right::
walk_right
step_end

PetalburgCity_Movement_BoyDown::
face_down
step_end

PetalburgCity_EventScript_BoyApproachPlayer0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 8, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 8, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 8, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_FaceLeft
	waitmovement 0
	removeobject LOCALID_SCOTT
	addobject LOCALID_LOOKER
	playbgm MUS_LOOKER_THEME, FALSE
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit2
	special DrawWholeMapView
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox PetalburgCity_Text_LookerDialogue1, MSGBOX_DEFAULT
	speakername Common_Name_Looker
	msgbox PetalburgCity_Text_LookerDialogue2, MSGBOX_DEFAULT
	msgbox PetalburgCity_Text_LookerDialogue3, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TOWN_MAP
	speakername Common_Name_Looker
	msgbox PetalburgCity_Text_Looker2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LookerExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LookerExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LookerExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LookerExit2
	removeobject LOCALID_LOOKER
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	setobjectxy LOCALID_LOOKER, 1, 11
	return

PetalburgCity_EventScript_ScottExit1::
	setobjectxy LOCALID_LOOKER, 1, 12
	return

PetalburgCity_EventScript_ScottExit2::
	setobjectxy LOCALID_LOOKER, 1, 13
	return

PetalburgCity_EventScript_LookerExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_LOOKER, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_LookerExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_LOOKER, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_LookerExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_LOOKER, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return


PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

PetalburgCity_Text_WhereIsWally:
	.string "Our Wally has been very sick recently.\p"
	.string "We've tried many things to make\n"
	.string "him feel better, but to no avail.\p"
	.string "Say, you're a trainer, right?\p"
	.string "If you happened to find a Pokémon that\n"
	.string "knows Aromatherapy, could you show me?$"


PetalburgCity_Text_AreYouRookieTrainer:
	.string "Hiya! Are you maybe…\n"
	.string "A rookie Trainer?\p"
	.string "Do you know what Pokémon Trainers\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of Gym\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection:
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_WaterTM:
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "The questions that come to mind when\n"
	.string "looking in the water are very chilling…\p"
	.string "Which is why I want you to have this.$"

PetalburgCity_Text_WaterTMExplain:
	.string "Chilling Water is a move that\n"
	.string "targets the opponent's inner fears\l"
	.string "potentially freezing them.\p"
	.string "Or perhaps it is the cold water that\n"
	.string "does that…\p"
	.string "We may never know.$"


PetalburgCity_Text_FullPartyExplanation:
	.string "Let's say you have six Pokémon.\n"
	.string "If you catch another one…\l"
	.string "It will get sent to the PC.$"

PetalburgCity_Text_GymSign:
	.string "Petalburg City's Pokémon Gym\n"
	.string "Leader: Norman\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "Petalburg City$"

PetalburgCity_Text_WallyHouseSign:
	.string "Wally's House$"

PetalburgCity_Text_AreYouATrainer:
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a Pokémon Trainer?$"

PetalburgCity_Text_WellMaybeNot:
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie Trainer,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "…\p"
	.string "But, that look…\p"
	.string "Yes, of course! You see right\n"
	.string "through the ruse, do you not?$"

PetalburgCity_Text_LookerDialogue1:
	.string "A clever one, are you not?\n"
	.string "Yes, I could see it from your eyes…\p"
	.string "No trickery evades your fine mind!\p"
	.string "Why, yes, someone with such a\n"
	.string "strong power of observation might\l"
	.string "prove to be of use to this case…\p"
	.string "Very good, then! Allow me to\n"
	.string "introduce myself.\p"
	.string "My name…\n"
	.string "Ah, no! That is, of course,\l"
	.string "classified.\p"
	.string "But my code name, it is Looker.\n"
	.string "It is what they all call me.\p"
	.string "Yes, I am a globe-trotting\n"
	.string "elite of the International Police.$"

PetalburgCity_Text_LookerDialogue2:
	.string "I was summoned in this region, you\n"
	.string "see, by a certain individual.\p"
	.string "My task, it is to investigate some\n"
	.string "happenings that are taking place here.\p"
	.string "The thing is, I seem to have judged\n"
	.string "the situation wrongly.\p"
	.string "You see, a master investigator, I am\n"
	.string "that.\p"
	.string "But a Trainer, unfortunately, I am not.\p"
	.string "Therefore, I have been looking for a\n"
	.string "trustworthy aide to help me.\p"
	.string "Say, your name is…?$"
PetalburgCity_Text_LookerDialogue3:
	.string "… …\p"
	.string "It is {PLAYER}, then?\n"
	.string "Magnificent!\p"
	.string "My friend, I would be grateful\n"
	.string "if you could meet me in the Petalburg\l"
	.string "Woods.\p"
	.string "According to my sources, an illicit\n"
	.string "deal is to occur on those very premises.\p"
	.string "Your assistance, of course, would be\n"
	.string "very much appreciated.\p"
	.string "Incidentally…\p"
	.string "Do you not possess a Town Map?\p"
	.string "Is it not an invaluable item for every\n"
	.string "Trainer that calls themselves such?\p"
	.string "Ah, but fret not, my friend!\n"
	.string "Feel free to take this, as compensation\l"
	.string "in advance for your invaluable help!$"


PetalburgCity_Text_Looker2:
	.string "Now, my dear assistant, is the time\n"
	.string "to take my leave.\p"
	.string "I shall be awaiting for you in the\n"
	.string "Petalburg Woods.\p"
	.string "And remember, if anyone asks of me,\n"
	.string "I am like a ghost: invisible!$"

PetalburgCity_Text_GiveThroatSpray:
	.string "…Oh, you have one with you?\n"
	.string "Wonderful!\p"
	.string "Now, let me just…\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "There! I made a little remedy.\n"
	.string "You can have a sample, of course.$"

PetalburgCity_Text_WallySick:
	.string "You know, we used to live in Verdanturf,\n"
	.string "next to Mauville.\p"
	.string "Then the incident with the power plant\n"
	.string "happened, and…\p"
	.string "Well, that's when Wally started being\n"
	.string "sick.\p"
	.string "We moved here to get some fresh air.$"

Common_Name_Looker:
	.string "Looker$"

PetalburgCity_EventScript_OldLady::
	lock
	goto_if_unset FLAG_ITEM_PETALBURG_MIRACLE_SEED, PetalburgCity_EventScript_OldLadyGivesSeed
	msgbox PetalburgCity_Text_OldLady, MSGBOX_DEFAULT
	closemessage
	release
	end


PetalburgCity_EventScript_OldLadyGivesSeed::
	msgbox PetalburgCity_Text_Seed, MSGBOX_NPC
	giveitem ITEM_MIRACLE_SEED
	setflag FLAG_ITEM_PETALBURG_MIRACLE_SEED
	applymovement LOCALID_GRANNY, Common_Movement_FaceDown
	release
	end


PetalburgCity_Text_Seed:
	.string "Hmmm…\n"
	.string "The birdie isn't eating my seeds…\p"
	.string "Here, have one.$"

PetalburgCity_Text_OldLady:
	.string "Come here, little birdie!\n"
	.string "Cheep, cheep!$"

PetalburgCity_EventScript_Wingull::
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox PetalburgCity_Text_Wingull, MSGBOX_NPC
	end


PetalburgCity_Text_Wingull:
	.string "Kweh! Kweh!$"

PetalburgCity_Text_RainyLady:
	.string "The weather here is often rainy.\n"
	.string "I've heard it's more sunny in Dewford.\p"
	.string "I quite like the rain, myself.$"