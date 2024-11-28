.set LOCALID_TWIN, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8
.set LOCALID_ZIGZAGOON, 11

LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
	.byte 0

	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
	@ 1: Met Rival
	@ 2: Saving Birch
	@ 3: Received Pokedex
	@ 4: Received Running Shoes

	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
	@ 1: In truck male
	@ 2: In truck female
	@ 3: Entered house
	@ 4: Told to go set clock
	@ 5: Entered 2F to set clock
	@ 6: Set clock
	@ 7: Told to go meet rival

	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
	@ 1: On Truck (and is corresponding gender)
	@ 2: Met Rival's Mom (and is corresponding gender)
	@ 3: Entered Hall of Fame
	@ 4: Completed Lati TV / SS Ticket event
	@ 5: Exited house after above event

	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
	@ 1: Never occurs
	@ 2: Entered Rival's bedroom
	@ 3: Met Rival
	@ 4: Received Pokedex


LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call Common_EventScript_SetupRivalGfxId
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
	end

LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	return
	

LittlerootTown_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LittlerootTown_EventScript_SetRivalLeftForRoute103::
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	return

LittlerootTown_EventScript_MoveRivalFromOldale::
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	return

LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	return

LittlerootTown_EventScript_MoveMomToMaysDoor::
	setobjectxyperm LOCALID_MOM, 19, 10
	return

LittlerootTown_EventScript_SetTwinPos::
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
	setobjectxyperm LOCALID_TWIN, 13, 1
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_EventScript_SetTwinGuardingRoutePos::
	setobjectxyperm LOCALID_TWIN, 13, 1
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
	return

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
	return

LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
	setobjectxyperm LOCALID_MOM, 5, 7
	return

LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
	setobjectxyperm LOCALID_MOM, 19, 11
	return

LittlerootTown_OnFrame:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
	.2byte 0

LittlerootTown_EventScript_StepOffTruckMale::
	lockall
	setvar VAR_0x8004, 5
	setvar VAR_0x8005, 7
	call LittlerootTown_EventScript_GoInsideWithMom
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	waitstate
	releaseall
	end

LittlerootTown_EventScript_StepOffTruckFemale::
	lockall
	setvar VAR_0x8004, 19
	setvar VAR_0x8005, 10
	call LittlerootTown_EventScript_GoInsideWithMom
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
	waitstate
	releaseall
	end

LittlerootTown_EventScript_GoInsideWithMom::
	delay 15
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
	waitmovement 0
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	addobject LOCALID_MOM
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
	waitmovement 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	delay 10
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
	waitmovement 0
	speakername Common_Name_Mom
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
	waitmovement 0
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
	waitmovement 0
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return

Common_Name_Mom:
	.string "Mom$"

LittlerootTown_Movement_MomExitHouse:
	walk_down
	step_end

LittlerootTown_Movement_MomApproachPlayerAtTruck:
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_Movement_MomApproachDoor:
	delay_16
	delay_8
	walk_up
	step_end

LittlerootTown_Movement_MomEnterHouse:
	walk_up
	set_invisible
	step_end

LittlerootTown_Movement_PlayerApproachDoor:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_up
	step_end

LittlerootTown_Movement_PlayerEnterHouse:
	walk_up
	walk_up
	step_end

LittlerootTown_Movement_PlayerStepOffTruck:
	jump_right
	delay_16
	delay_16
	delay_16
	step_end

LittlerootTown_EventScript_BeginDexUpgradeScene::
	lockall
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	delay 80
	speakername Common_Name_Birch
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	delay 20
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	releaseall
	end

Common_Name_Birch:
	.string "Prof. Birch$"

LittlerootTown_OnWarp:
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
	.2byte 0

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
	addobject LOCALID_BIRCH
	addobject LOCALID_RIVAL
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
	setobjectxy LOCALID_RIVAL, 6, 10
	setobjectxy LOCALID_BIRCH, 5, 10
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
	setobjectxy LOCALID_RIVAL, 13, 10
	setobjectxy LOCALID_BIRCH, 14, 10
	end

LittlerootTown_EventScript_FatMan::
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end

LittlerootTown_EventScript_Zigzagoon::
	lock
	faceplayer
	goto_if_set FLAG_ZIGZAGOON_EVENT, LittlerootTown_EventScript_ZigzagoonNoises
	msgbox LittlerootTown_Text_Zigzagoon, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_ZIGZAGOON_EVENT
	release
	end


LittlerootTown_EventScript_ZigzagoonNoises::
	playmoncry SPECIES_ZIGZAGOON_GALARIAN, CRY_MODE_NORMAL
	msgbox LittlerootTown_Text_ZigzagoonNoises, MSGBOX_NPC
	end


LittlerootTown_EventScript_Girl::
	lockall
	goto_if_set FLAG_RECEIVED_TM11, LittlerootTown_EventScript_HowIsObstagoon
	goto_if_set FLAG_ACCEPTED_ZIGZAGOON, LittlerootTown_EventScript_HowIsZigzagoon
	goto_if_set FLAG_REFUSED_NEIGHBOR, LittlerootTown_EventScript_Rethinking
	goto_if_set FLAG_SYS_POKEDEX_GET, LittlerootTown_EventScript_HelpMe
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end


LittlerootTown_EventScript_HelpMe::
	setflag FLAG_REFUSED_NEIGHBOR
	msgbox LittlerootTown_Text_CanYouTakeZigzagoon, MSGBOX_NPC
	msgbox LittlerootTown_Text_AcceptMyRequest, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LittlerootTown_EventScript_ThankYouSoMuch
	case NO, LittlerootTown_EventScript_AhOfCourse
	end

LittlerootTown_EventScript_Rethinking::
	msgbox LittlerootTown_Text_DidYouThinkAboutIt, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LittlerootTown_EventScript_ThankYouSoMuch
	case NO, LittlerootTown_EventScript_AhOfCourse
	end

LittlerootTown_EventScript_AhOfCourse::
	msgbox LittlerootTown_Text_OfCourse, MSGBOX_NPC
	release
	end


LittlerootTown_EventScript_ThankYouSoMuch::
	msgbox LittlerootTown_Text_ThankYouSoMuch, MSGBOX_NPC
	msgbox LittlerootTown_Text_ComeHereNow, MSGBOX_NPC
	setflag FLAG_ACCEPTED_ZIGZAGOON
	removeobject LOCALID_ZIGZAGOON
	givemon SPECIES_ZIGZAGOON_GALARIAN, 5, ITEM_NONE, ITEM_CHERISH_BALL, NATURE_JOLLY, 1, MON_MALE
	msgbox LittlerootTown_Text_ThankYou, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_Text_WalkingZigzagoon, MSGBOX_NPC
	end

LittlerootTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_HowIsZigzagoon::
	msgbox LittlerootTown_Text_WhereIsMyBaby, MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_EventScript_ShowMon
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_EventScript_ShowMon_NotZiggy
	releaseall
	end


LittlerootTown_EventScript_ShowMon::
	specialvar VAR_RESULT, ScriptGetPartyMonBall
	goto_if_eq VAR_RESULT, ITEM_CHERISH_BALL, LittlerootTown_EventScript_ShowMon_CheckFurther
	msgbox LittlerootTown_EventScript_Text_NotMyZiggy, MSGBOX_NPC
	releaseall
	end


LittlerootTown_EventScript_ShowMon_CheckFurther::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_ZIGZAGOON_GALARIAN, LittlerootTown_EventScript_ShowMon_Zigzagoon
	goto_if_eq VAR_RESULT, SPECIES_LINOONE_GALARIAN, LittlerootTown_EventScript_ShowMon_Linoone
	goto_if_eq VAR_RESULT, SPECIES_OBSTAGOON, LittlerootTown_EventScript_ShowMon_Obstagoon
	releaseall
	end


LittlerootTown_EventScript_ShowMon_Zigzagoon::
	msgbox LittlerootTown_EventScript_Text_Zigzagoon, MSGBOX_NPC
	releaseall
	end

LittlerootTown_EventScript_ShowMon_Linoone::
	msgbox LittlerootTown_EventScript_Text_Linoone, MSGBOX_NPC
	releaseall
	end

LittlerootTown_EventScript_ShowMon_Obstagoon::
	msgbox LittlerootTown_EventScript_Text_Obstagoon, MSGBOX_NPC
	giveitem ITEM_TM_RETURN
	setflag FLAG_RECEIVED_TM11
	msgbox LittlerootTown_EventScript_Text_StrongMove, MSGBOX_NPC
	releaseall
	end

LittlerootTown_EventScript_HowIsObstagoon::
	msgbox LittlerootTown_EventScript_Text_HowIsObstagoon, MSGBOX_NPC
	releaseall
	end


LittlerootTown_EventScript_Geez::
	msgbox LittlerootTown_EventScript_Text_Geez, MSGBOX_NPC
	releaseall
	end

LittlerootTown_EventScript_ShowMon_HoldingItem::
	msgbox LittlerootTown_EventScript_Text_HoldingItem, MSGBOX_NPC
	releaseall
	end

LittlerootTown_EventScript_ShowMon_NotZiggy::
	msgbox LittlerootTown_EventScript_Text_NotZiggy, MSGBOX_NPC
	releaseall
	end


LittlerootTown_EventScript_Sunflora::
	lock
	faceplayer
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
	msgbox LittlerootTown_Text_Sunflora, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_GoSaveBirch::
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
	release
	end

LittlerootTown_EventScript_YouSavedBirch::
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_GoodLuck::
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_NeedPokemonTriggerLeft::
	lockall
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
	waitmovement 0
	call LittlerootTown_EventScript_DangerousWithoutPokemon
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
	waitmovement 0
	releaseall
	end

LittlerootTown_EventScript_DangerousWithoutPokemon::
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
	waitmovement 0
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
	closemessage
	return

LittlerootTown_Movement_TwinApproachPlayerLeft:
	face_up
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_up
	delay_8
	walk_fast_up
	walk_fast_up
	walk_fast_left
	face_down
	step_end

LittlerootTown_Movement_TwinPushPlayerFromRoute:
	walk_down
	step_end

LittlerootTown_Movement_TwinReturnLeft:
	walk_right
	walk_down
	walk_in_place_faster_down
	step_end

LittlerootTown_Movement_PushPlayerBackFromRoute:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

LittlerootTown_EventScript_NeedPokemonTriggerRight::
	lockall
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
	waitmovement 0
	call LittlerootTown_EventScript_DangerousWithoutPokemon
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
	waitmovement 0
	releaseall
	end

LittlerootTown_Movement_TwinApproachPlayerRight:
	face_right
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_right
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_down
	step_end

LittlerootTown_Movement_TwinReturnRight:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

LittlerootTown_EventScript_GoSaveBirchTrigger::
	lockall
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
	releaseall
	end

LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_Test::
	returntotitle
	end


EventScript_SaveTotem::
	lockall
	msgbox Text_WantToSave, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, EventScript_SaveTotem_End
	savegame
	closemessage
	releaseall
	end

EventScript_SaveTotem_End::
	closemessage
	releaseall
	end


Text_WantToSave:
	.string "As you touch the statue, you are filled\n"
	.string "with an ancient power.\p"
	.string "Would you like to save the game?$"

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BrendansHouseSign::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
	releaseall
	end

LittlerootTown_EventScript_PlayersHouseSignMale::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_BirchsHouseSignFemale::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_MaysHouseSign::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
	releaseall
	end

LittlerootTown_EventScript_BirchsHouseSignMale::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_PlayersHouseSignFemale::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_GiveRunningShoesTrigger0::
	lockall
	setvar VAR_0x8008, 0
	addobject LOCALID_MOM
	setobjectxy LOCALID_MOM, 12, 11
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger1::
	lockall
	setvar VAR_0x8008, 1
	addobject LOCALID_MOM
	setobjectxy LOCALID_MOM, 13, 11
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
	speakername Common_Name_Mom
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
	closemessage
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerMale
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	call LittlerootTown_EventScript_GiveRunningShoes
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_SetHomeDoorCoordsMale::
	setvar VAR_0x8009, 5
	setvar VAR_0x800A, 8
	return

LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
	setvar VAR_0x8009, 16
	setvar VAR_0x800A, 9
	return

LittlerootTown_EventScript_MomNoticePlayerMale::
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

LittlerootTown_EventScript_MomNoticePlayerFemale::
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
	return

LittlerootTown_EventScript_MomApproachPlayerFemale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
	return

LittlerootTown_EventScript_MomApproachPlayer0::
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer1::
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
	waitmovement 0
	return


LittlerootTown_EventScript_MomReturnHomeMale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome0
	return

LittlerootTown_EventScript_MomReturnHomeFemale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome0
	return

LittlerootTown_EventScript_MomReturnHome0::
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome1::
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
	waitmovement 0
	return


LittlerootTown_Movement_MomApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_Movement_MomApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_Movement_MomReturnHome0:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LittlerootTown_Movement_MomReturnHome1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end


LittlerootTown_Movement_MomExitThroughDoor:
	walk_up
	step_end

LittlerootTown_EventScript_Mom::
	lock
	faceplayer
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
	call LittlerootTown_EventScript_GiveRunningShoes
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_SetReceivedRunningShoes::
	removeobject LOCALID_MOM
	setflag FLAG_SYS_B_DASH
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	release
	end

LittlerootTown_EventScript_GiveRunningShoes::
    speakername Common_Name_Mom
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
	waitfanfare
	setflag FLAG_RECEIVED_RUNNING_SHOES
	speakername Common_Name_Mom
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
	closemessage
	delay 30
	return

LittlerootTown_Text_OurNewHomeLetsGoInside:
	.string "{PLAYER}, you're home, honey!\p"
	.string "I'm sorry for making you get here by\n"
	.string "yourself.\p"
	.string "It's really hard to reserve a spot on\n"
	.string "one of those ships, and dad had to rush\l"
	.string "here for an urgent League meeting.\p"
	.string "Look at the bright side: by the time\n"
	.string "you got here, we're already almost\l"
	.string "finished with moving in!\p"
	.string "Well, anyway this is Littleroot Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It seems to be a nice place to live\n"
	.string "don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

LittlerootTown_Text_WaitPlayer:
	.string "Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes:
	.string "{PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to PROF. BIRCH?\p"
	.string "Oh! What an adorable POKéMON!\n"
	.string "You got it from PROF. BIRCH. How nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with POKéMON!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, wear these RUNNING SHOES.\p"
	.string "They'll put a zip in your step!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes:
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes:
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens:
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "POKéMON now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_CanUsePCToStoreItems:
	.string "Did you know that with new technology\n"
	.string "anybody can make their own fan game?\p"
	.string "I'm so glad that companies don't employ\n"
	.string "unethical copyright practices.\p"
	.string "Right?$"

LittlerootTown_Text_BirchSpendsDaysInLab:
	.string "The POKEMON LEAGUE has branches in\n"
	.string "many regions of the world, but it's\l"
	.string "particularly unique in HOENN.\p"
	.string "Here, trainers prefer to battle it out\n"
	.string "with two-on-two fights instead of the\l"
	.string "usual one-on-one.\p"
	.string "Why exactly? No idea! I'm not much of a\n"
	.string "trainer myself…$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild POKéMON will jump out!$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon:
	.string "It's dangerous if you don't have\n"
	.string "your own POKéMON.$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening:
	.string "Um, hi!\p"
	.string "There are scary POKéMON outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on,\n"
	.string "but I don't have any POKéMON…\p"
	.string "Can you go see what's happening\n"
	.string "for me?$"

LittlerootTown_Text_YouSavedBirch:
	.string "POKéMON that live in towns are\n"
	.string "peaceful, but you have to be\l"
	.string "careful when venturing out!$"

LittlerootTown_Text_Sunflora:
	.string "A perfectly normal flower.\n"
	.string "Nothing to see here.$"


LittlerootTown_Text_GoodLuckCatchingPokemon:
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_TownSign:
	.string "LITTLEROOT TOWN$"

LittlerootTown_Text_ProfBirchsLab:
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse:
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse:
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab:
	.string "Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"

LittlerootTown_Text_Zigzagoon:
	.string "ZIGZAGOON is holding something in\n"
	.string "its mouth.$"

LittlerootTown_Text_ZigzagoonNoises:
	.string "Zigza!$"

LittlerootTown_Text_WalkingZigzagoon:
	.string "Pretty cool, huh?\p"
	.string "This is a statue left behind by an\n"
	.string "ancient civilization.\p"
	.string "There are loads of them all around\n"
	.string "Hoenn.\p"
	.string "Try touching it!\p"
	.string "You can totally feel the spiritual\n"
	.string "energy coming from it!\p"
	.string "…Or something.$"

LittlerootTown_Text_CanYouTakeZigzagoon:
	.string "Oh, hey, {PLAYER}{KUN}!\n"
	.string "I have a favor to ask you.\p"
	.string "You see, I have always wanted my dear\n"
	.string "ZIGZAGOON to see the world.\p"
	.string "But, I'm afraid, I don't know much about\n"
	.string "POKéMON battling.\p"
	.string "And you know just how dangerous it is, to\n"
	.string "travel without knowing how to battle.\p"
	.string "Anyway, I've heard that PROF. BIRCH\n"
	.string "finally gave you a POKéMON…\p"
	.string "Which means you're going to travel the\n"
	.string "world, right?\p"
	.string "If so, could you take my Zigzagoon with\n"
	.string "you?\p"
	.string "Not forever, just…\n"
	.string "I want my baby to grow a bit.$"

LittlerootTown_Text_AcceptMyRequest:
	.string "Would you accept my request?$"

LittlerootTown_Text_OfCourse:
	.string "Oh… Of course.\p"
	.string "I bet you're going to be awfully busy from\n"
	.string "now on.\p"
	.string "Still, if you change your mind…\n"
	.string "You'll know where to find me.$"


LittlerootTown_Text_ThankYouSoMuch:
	.string "Ah! Thank you so much!$"


LittlerootTown_Text_ZigzagoonQuest:
	.string "Quest accepted:\n"
	.string "Zigzagoon's day out!$"


LittlerootTown_Text_ComeHereNow:
	.string "Now…\n"
	.string "Come here, Zigzagoon!\p"
	.string "{PLAYER}{KUN} is going to take you for a trip!$"


LittlerootTown_Text_ThankYou:
	.string "Again, thank you so much.\p"
	.string "You can tell it's my Zigzagoon because I\n"
	.string "put him in a special POKé BALL.\p"
	.string "Let me know how he behaves, ok?$"


LittlerootTown_Text_DidYouThinkAboutIt:
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "Did you decide to take along my\n"
	.string "Zigzagoon?$"

LittlerootTown_Text_WhereIsMyBaby:
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "How is my baby Zigzagoon doing?\n"
	.string "Can I see him?\p"
	.string "Remember, he's the one I put in a\n"
	.string "Cherish Ball!$"


LittlerootTown_EventScript_Text_NotZiggy:
	.string "Oh… He's not with you?\n"
	.string "That's okay, I understand.\p"
	.string "Still, if next time you're here you\n"
	.string "have him around, remember to come and\l"
	.string "say hello, okay?$"


LittlerootTown_EventScript_Text_NotMyZiggy:
	.string "That's… Not my Zigzagoon.\p"
	.string "That's okay, I understand.\p"
	.string "Still, if next time you're here you\n"
	.string "have him around, remember to come and say\l"
	.string "hello, okay?$"


LittlerootTown_EventScript_Text_Zigzagoon:
	.string "Oh! Hello, little guy!\p"
	.string "He seems to be doing quite well.\p"
	.string "Feel free to carry him around for more\n"
	.string "of your adventures, okay?$"



LittlerootTown_EventScript_Text_Linoone:
	.string "Oh! Would you look at that!\p"
	.string "He seems… Different.\n"
	.string "But not in a bad way!\p"
	.string "it must be because he's travelling\n"
	.string "with you, {PLAYER}{KUN}.$"


LittlerootTown_EventScript_Text_Obstagoon:
	.string "Oh! Would you look at that!\p"
	.string "He looks very… Grown up.\n"
	.string "Not in a bad way!\p"
	.string "And his eyes…\p"
	.string "You've been travelling a lot, sweetie,\n"
	.string "haven't you?\p"
	.string "… … … … …\p"
	.string "Say, {PLAYER}{KUN}…\p"
	.string "You've done an amazing job at taking\n"
	.string "care of him.\p"
	.string "I think he'll be happier with you than\n"
	.string "he ever was with me.\p"
	.string "Just… Promise you'll come and visit often\n"
	.string "okay?\p"
	.string "Oh, and… One more thing.\n"
	.string "Take this.\p"
	.string "it's nothing, really.$"


LittlerootTown_EventScript_Text_CanIHaveItBack:
	.string "Could I have my POKéMON back?$"

LittlerootTown_EventScript_Text_HoldingItem:
	.string "Oh, but wait.\n"
	.string "My POKéMON is holding an item.\p"
	.string "Make sure to take it off first, okay?$"

LittlerootTown_EventScript_Text_Geez:
	.string "Ah-…\p"
	.string "Well… I see…\p"
	.string "It's understandable, after all…\p"
	.string "After traveling so much with my sweetie,\n"
	.string "you've become this attached to him…\p"
	.string "Well… I can't blame you, but…\p"
	.string "If you change your mind, I'll be waiting\n"
	.string "here, okay…?"

LittlerootTown_EventScript_Text_StrongMove:
	.string "Apparently this move is pretty strong.\p"
	.string "Well, I wouldn't know, but I think you\n"
	.string "might find it useful.\p"
	.string "Well then…\n"
	.string "Until next time, okay?$"

LittlerootTown_EventScript_Text_HowIsObstagoon:
	.string "Hi, {PLAYER}{KUN}!\n"
	.string "How is my POKéMON doing?$"