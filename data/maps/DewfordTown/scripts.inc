@ Sailing to and from Dewford uses local IDs from different maps
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DEWFORD, 2
.equ LOCALID_BOAT_DEWFORD, 4

.equ LOCALID_BOAT_R109, 1
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 8
.equ LOCALID_BRINEY_R104, 9

.set LOCALID_RIVAL, 14
.set LOCALID_MAGNEZONE, 27
.set LOCALID_SLAKOTH, 24
.set LOCALID_YOUNGSTER, 28
.set LOCALID_ARON, 21
.set LOCALID_MINER, 25
.set LOCALID_MINECART_DEWFORD, 29
.set LOCALID_MINECART_BRENDAN_DEWFORD, 30
.set LOCALID_MINECART_MAY_DEWFORD, 31
.set LOCALID_BRAWLY, 32

DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	.byte 0


DewfordTown_HandleTrainers::
	call_if_unset FLAG_HIDE_TABITHA_CAVE, DewfordTown_EventScript_ResetTrainers
	call_if_set FLAG_HIDE_TABITHA_CAVE, DewfordTown_EventScript_SetTrainers
	return

DewfordTown_EventScript_ResetTrainers::
	cleartrainerflag TRAINER_KYLA
	cleartrainerflag TRAINER_ELLEN
	cleartrainerflag TRAINER_ELLEN
	cleartrainerflag TRAINER_CHRISTINA
	cleartrainerflag TRAINER_ELLIOT_1
	cleartrainerflag TRAINER_KRYSTA
	cleartrainerflag TRAINER_KASSANDRA
	return

DewfordTown_EventScript_SetTrainers::
	setifnotbeaten TRAINER_KYLA
	setifnotbeaten TRAINER_ELLEN
	setifnotbeaten TRAINER_ELLEN
	setifnotbeaten TRAINER_CHRISTINA
	setifnotbeaten TRAINER_ELLIOT_1
	setifnotbeaten TRAINER_KRYSTA
	setifnotbeaten TRAINER_KASSANDRA
	return

DewfordTown_OnTransition:
	setflag FLAG_VISITED_DEWFORD_TOWN
	call DewfordTown_HandleTrainers
	call Common_EventScript_SetupRivalGfxId
	setvar VAR_PELIPPER, 13
	call_if_unset FLAG_HIDE_MINECART_DEWFORD, DewfordTown_EventScript_SetMinecart
	call_if_set FLAG_GAVE_IRON_BALL, DewfordTown_EventScript_SetAron
	end

DewfordTown_EventScript_MinecartInteract::
	lockall
	goto_if_set FLAG_HIDE_MINECART_DEWFORD, Route106_EventScript_DoNothing
	msgbox DewfordTown_Text_RideMinecart, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, NO, Route106_EventScript_DoNothing
	checkplayergender
	call_if_eq VAR_FACING, DIR_SOUTH, Route106_EventScript_MinecartInteractFromSouth
	call_if_eq VAR_FACING, DIR_EAST, Route106_EventScript_MinecartInteractFromEast
	call_if_eq VAR_FACING, DIR_NORTH, Route106_EventScript_MinecartInteractFromNorth
	call_if_eq VAR_FACING, DIR_WEST, Route106_EventScript_MinecartInteractFromWest
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	removeobject LOCALID_MINECART_DEWFORD
	checkplayergender
	call_if_eq VAR_RESULT, MALE, DewfordTown_EventScript_MinecartInteractBrendan
	call_if_eq VAR_RESULT, FEMALE, DewfordTown_EventScript_MinecartInteractMay
	clearflag FLAG_HIDE_MINECART_GRANITE
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_GRANITE_COTTAGE, 4, 5
	releaseall
	end


DewfordTown_EventScript_SlakothGuy::
	faceplayer
	msgbox DewfordTown_Text_Slakoth, MSGBOX_NPC
	end

DewfordTown_EventScript_MinecartInteractBrendan::
	
	clearflag FLAG_HIDE_BRENDAN_MINECART_DEWFORD
	addobject LOCALID_MINECART_BRENDAN_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_MinecartToGranite
	applymovement LOCALID_MINECART_BRENDAN_DEWFORD, DewfordTown_Movement_MinecartToGranite
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	fadedefaultbgm
	setflag FLAG_HIDE_BRENDAN_MINECART_DEWFORD
	return


DewfordTown_EventScript_MinecartInteractMay::
	clearflag FLAG_HIDE_MAY_MINECART_DEWFORD
	addobject LOCALID_MINECART_MAY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_MinecartToGranite
	applymovement LOCALID_MINECART_MAY_DEWFORD, DewfordTown_Movement_MinecartToGranite
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	fadedefaultbgm
	setflag FLAG_HIDE_MAY_MINECART_DEWFORD
	return

DewfordTown_Movement_MinecartToGranite:
	walk_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_up
	walk_fast_up
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_left
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_down
	walk_fast_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_right
	step_end

DewfordTown_EventScript_SetAron::
	setobjectmovementtype LOCALID_ARON, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	setobjectxyperm LOCALID_ARON, 18, 33
	return

DewfordTown_EventScript_SetMinecart::
	addobject LOCALID_MINECART_DEWFORD
	return

DewfordTown_EventScript_WarehouseMiner2::
	lockall
	goto_if_set FLAG_GAVE_IRON_BALL, DewfordTown_EventScript_WarehouseMiner2AfterEvent
	msgbox DewfordTown_Text_Aron, MSGBOX_NPC
	checkitem ITEM_IRON_BALL
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_AskForIronBall
	releaseall
	end


DewfordTown_EventScript_WarehouseMiner2AfterEvent::
	msgbox DewfordTown_Text_ThanksForTheHelp, MSGBOX_NPC
	releaseall
	end



DewfordTown_EventScript_AskForIronBall::
	msgbox DewfordTown_Text_IronBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveIronBall
	msgbox DewfordTown_Text_ISee, MSGBOX_DEFAULT
	releaseall
	end


DewfordTown_EventScript_GiveIronBall::
	removeitem ITEM_IRON_BALL, 1
	setflag FLAG_GAVE_IRON_BALL
	msgbox DewfordTown_Text_GaveIronBall, MSGBOX_NPC
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, DewfordTown_EventScript_PlayerMove
	goto DewfordTown_EventScript_MinerMove
	end



DewfordTown_EventScript_PlayerMove::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerMove
	waitmovement 0
	goto DewfordTown_EventScript_MinerMove
	end

DewfordTown_EventScript_MinerMove::
	applymovement LOCALID_MINER, DewfordTown_Movement_MinerMove
	waitmovement 0
	applymovement LOCALID_ARON, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_ARON, Common_Movement_QuestionMark
	playse SE_PIN
	waitmovement 0
	delay 16
	applymovement LOCALID_MINER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 16
	applymovement LOCALID_ARON, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	delay 16
	applymovement LOCALID_ARON, Common_Movement_AronMoves
	waitmovement 0
	setobjectmovementtype LOCALID_ARON, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	setobjectxyperm LOCALID_ARON, 18, 33
	setflag FLAG_GAVE_IRON_BALL
	applymovement LOCALID_MINER, DewfordTown_Movement_MinerGoesUp
	waitmovement 0
	faceplayer
	msgbox DewfordTown_Text_ItWorked, MSGBOX_NPC
	giveitem ITEM_HEART_SCALE
	releaseall
	end

DewfordTown_EventScript_Slakoth::
	lock
	msgbox DewfordTown_Text_SlakothSleeping, MSGBOX_DEFAULT
	checkitem ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_UseFlute
	release
	end

DewfordTown_EventScript_UseFlute::
	msgbox DewfortTown_Text_WantToUseFlute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_Abduction
	release
	end

DewfortTown_Text_WantToUseFlute:
	.string "Play the Poké Flute?$"

DewfordTown_EventScript_Abduction::
	closemessage
	clearflag FLAG_HIDE_MAGNEZONE
	addobject LOCALID_MAGNEZONE
	playfanfare MUS_RG_POKE_FLUTE
	waitfanfare
	playbgm MUS_SAILING, FALSE
	applymovement LOCALID_MAGNEZONE, DewfordTown_Movement_StartMoving
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_YOUNGSTER, Common_Movement_FaceUp
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkUp
	playse SE_M_NIGHTMARE
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	applymovement LOCALID_MAGNEZONE, Common_Movement_WalkLeft
	applymovement LOCALID_SLAKOTH, Common_Movement_WalkLeft
	playse SE_M_TAKE_DOWN
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_MAGNEZONE
	removeobject LOCALID_SLAKOTH
	setflag FLAG_HIDE_MAGNEZONE
	setflag FLAG_HIDE_SLAKOTH
	release
	end 


DewfordTown_Text_SlakothSleeping:
	.string "An oversized Slakoth is sleeping\n"
	.string "on the beach.$"


DewfordTown_Movement_StartMoving:
	lock_facing_direction
	walk_left
	step_end

DewfordTown_EventScript_Briney::
	lock
	faceplayer
	speakername Common_Name_Briney
	goto_if_set FLAG_BADGE02_GET, DewfordTown_EventScript_Briney_GoToSlateport
	goto_if_set FLAG_TALKED_TO_BRINEY_DEWFORD, DewfordTown_EventScript_Briney_GoDoGym
	goto_if_set FLAG_HIDE_BRAWLY_GRANITE, DewfordTown_EventScript_Briney_BeforeBeatingGym
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_Briney_GoDoGym:
	msgbox DewfordTown_Text_Briney_GoDoGym, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_EventScript_Briney_GoToSlateport:
	msgbox DewfordTown_Text_Briney_GoToSlateport, MSGBOX_DEFAULT
	releaseall
	end


DewfordTown_EventScript_Briney_BeforeBeatingGym:
	clearflag FLAG_HIDE_BRAWLY_DEWFORD
	addobject LOCALID_BRAWLY
	msgbox DewfordTown_Text_Briney_BeforeBeatingGym, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkUp3
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BRAWLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkRight2
	waitmovement 0
	speakername Common_Name_Brawly
	msgbox DewfordTown_Text_Briney_BrawlyHey, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkLeft2
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_BRAWLY
	speakername Common_Name_Briney
	msgbox DewfordTown_Text_Briney_Youth, MSGBOX_DEFAULT
	setflag FLAG_TALKED_TO_BRINEY_DEWFORD
	releaseall
	end




DewfordTown_EventScript_ChoosePetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport::
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect::
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt::
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_NPC
	applymovement LOCALID_BRINEY_DEWFORD, Common_Movement_FaceUp
	waitmovement 0
	release
	end

DewfordTown_EventScript_SailBackToPetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman::
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign::
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign::
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign::
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	goto DewfordTown_EventScript_HowsFishing
	end

DewfordTown_EventScript_GiveOldRod::
	giveitem ITEM_SHELL_BELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	release
	end

DewfordTown_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing::
	msgbox DewfordTown_Text_HowsYourFishing, MSGBOX_NPC
	end


DewfordTown_EventScript_WarehouseMiner::
	goto_if_set FLAG_CLEARED_GRANITE_CAVE, DewfordTown_EventScript_WarehouseMinerPostCave
	msgbox DewfordTown_Text_MinecraftPreCave, MSGBOX_NPC
	end

DewfordTown_EventScript_WarehouseMinerPostCave::
	msgbox DewfordTown_Text_MinecraftPostCave, MSGBOX_NPC
	end


DewfordTown_Text_MinecraftPreCave:
	.string "Normally you can ride a minecart\n"
	.string "all the way to the mines, but…\p"
	.string "Something odd is happening there.$"

DewfordTown_Text_MinecraftPostCave:
	.string "I heard the mine situation got resolved.\n"
	.string "I'm relieved to hear it.$"

DewfordTown_Sign_Foundry::
	msgbox DewfordTown_Text_FoundrySign, MSGBOX_SIGN
	release
	end


DewfordTown_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	removeobject LOCALID_BOAT_DEWFORD
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods::
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_LandedSlateport::
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DewfordTown_Movement_SailToPetalburg:
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_SailToSlateport:
	walk_right
	walk_fast_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_PlayerBoardBoat:
	walk_right
	walk_up
	step_end

DewfordTown_Movement_ExitBoatPetalburg:
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_ExitBoatSlateport:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

DewfordTown_Movement_BrineyBoardBoat:
	walk_up
	step_end

DewfordTown_Movement_BrineyExitBoat:
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_TrendyPhraseBoy::
	msgbox DewfordTown_Text_DewfordBoring, MSGBOX_NPC
	end

DewfordTown_EventScript_OldMan::
	msgbox DewfordTown_Text_OldMan, MSGBOX_NPC
	end


DewfordTown_Text_OldMan:
	.string "The sea breeze works wonders on these\n"
	.string "old bones! Gyaha!$"


DewfordTown_EventScript_OldWoman::
	msgbox DewfordTown_Text_OldWoman, MSGBOX_NPC
	end

DewfordTown_EventScript_Kid::
	goto_if_set FLAG_RECEIVED_SHELL_BELL, DewfordTown_EventScript_KidPostSand
	checkitem ITEM_SEASHELL, 5
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_HaveAllSeashells
	msgbox DewfordTown_Text_KidShop, MSGBOX_NPC
	release
	end


DewfordTown_EventScript_HaveAllSeashells::
	removeitem ITEM_SEASHELL, 5
	msgbox DewfordTown_Text_HaveAllSeashells, MSGBOX_NPC
	giveitem ITEM_SHELL_BELL
	setflag FLAG_RECEIVED_SHELL_BELL
	end


DewfordTown_EventScript_KidPostSand::
	msgbox DewfordTown_Text_GoodAtBusiness, MSGBOX_NPC
	end

DewfordTown_EventScript_Ribbon::
	special GiveLeadMonEffortRibbon
	end

DewfordTown_Text_KidShop:
	.string "Hey, hey!\n"
	.string "I'm running a shop!\p"
	.string "I'm selling seashells!\n"
	.string "But no one wants to but them…\p"
	.string "I think it's because there are already\n"
	.string "seashells everywhere!\p"
	.string "So I have an idea!\p"
	.string "I counted five seashells around here!\p"
	.string "If you could pick them up, people would\n"
	.string "start buying them from me!$"

DewfordTown_Text_HaveAllSeashells:
	.string "Oh! Oh!\n"
	.string "You got all of them!\p"
	.string "Now I can sell you one of mine!\n"
	.string "At the price of…\l"
	.string "Zero!!!!$"

DewfordTown_Text_GoodAtBusiness:
	.string "When I grow up I want to be a business\n"
	.string "woman!\p"
	.string "I'm good at it, right?$"


DewfordTown_Text_OldWoman:
	.string "My husband used to work in Slateport\n"
	.string "back when we were young.\p"
	.string "Living here is the happiest I've ever seen\n"
	.string "him, though.$"


DewfordTown_EventScript_MinerTrail::
	msgbox DewfordTown_Text_ILoveMining, MSGBOX_NPC
	end


DewfordTown_EventScript_GymGuide::
	msgbox DewfordTown_Text_LookingForBrawly, MSGBOX_NPC
	end

DewfordTown_EventScript_FanClub::
	msgbox DewfordTown_Text_FanClub, MSGBOX_SIGN
	end


DewfordTown_EventScript_Boy::
	msgbox DewfordTown_Text_Boy, MSGBOX_NPC
	end

DewfordTown_Text_LookingForBrawly::
	.string "Ah! Looking for our Leader?\p"
	.string "I'm afraid he is not here at the\n"
	.string "moment.\p"
	.string "He's been requested at the Granite Cave\n"
	.string "to deal with some sensitive matters.\p"
	.string "You may find him there, if you wish\n"
	.string "to speak to him.\p"
	.string "Granite Cave is just west of here.$"

DewfordTown_Text_Boy:
	.string "Recently, I've seen some people in lab\n"
	.string "coats come here and argue with the\l"
	.string "miners.\p"
	.string "What's going on…?$"



DewfordTown_Text_ILoveMining:
	.string "Granite Cave is full of all sorts\n"
	.string "of things.\p"
	.string "There's granite, of course, but you\n"
	.string "can also find many ores and stones.\p"
	.string "Rare Pokémon, too!\n"
	.string "Although we try not to bother them.$"

DewfordTown_Text_DewfordBoring:
	.string "Man, this place is boring.\p"
	.string "I'd rather leave somewhere cool, like\n"
	.string "Rustboro, or Slateport!$"

DewfordTown_EventScript_ConfirmTrendyPhrase::
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase::
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase::
	incrementgamestat GAME_STAT_STARTED_TRENDS
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase::
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough::
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_TownMiner::
	msgbox DewfordTown_Text_TownMiner, MSGBOX_NPC
	end


DewfordTown_Text_TownMiner:
	.string "The mine is our livelihood.\p"
	.string "Recently Devon has tried to pressure\n"
	.string "us into selling it, but we refused.\p"
	.string "It's just too important for us.$"


DewfordTown_Text_TinyIslandCommunity:
	.string "There's a weird lady living\n"
	.string "in the forest west of here.\p"
	.string "She's not bad, but…\n"
	.string "How to put it…\p"
	.string "She's totally scary.\n"
	.string "Super strong, too.\p"
	.string "… … … …\p"
	.string "I wish I could find the courage\n"
	.string "to ask her out.$"


DewfordTown_Text_TownSign:
	.string "Dewford Town\n"
	.string "“A mining town in the blue sea.”$"

DewfordTown_Text_GymSign:
	.string "Dewford Town Pokémon Gym\n"
	.string "Leader: Brawly\l"
	.string "“A big wave in fighting!”$"

DewfordTown_Text_HallSign:
	.string "DEWFORD HALL\n"
	.string "“Everyone's information exchange!”$"

Route104_Text_LandedInDewfordDeliverLetter:
	.string "Ahoy!\n"
	.string "We've hit land in Dewford.$"

DewfordTown_Text_SetSailBackToPetalburg:
	.string "Oh, don't mind me.\n"
	.string "Just inspecting me boat, is all.\p"
	.string "I might need a favor from ye,\n"
	.string "at some point.\p"
	.string "But for now, go do what ye gotta\n"
	.string "do!\p"
	.string "Wah ah ah!$"

DewfordTown_Text_PetalburgWereSettingSail2:
	.string "Petalburg it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, me darling!$"

DewfordTown_Text_GoDeliverIllBeWaiting:
	.string "Then ye go on.\n"
	.string "I'll be waiting.$"

DewfordTown_Text_BrineyLandedInDewford:
	.string "Well, I'll be here, now.\n"
	.string "I need to check something about\l"
	.string "me boat.\p"
	.string "If ye wanna go back, ye can always\n"
	.string "use them Pelipper service.\p"
	.string "But if ye need to sail off to some\n"
	.string "new place, let me know, aye?$"

DewfordTown_Text_WhereAreWeBound:
	.string "Ahoy!\n"
	.string "For ye, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

DewfordTown_Text_PetalburgWereSettingSail:
	.string "Petalburg, is it?\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, me darling!$"

DewfordTown_Text_SlateportWereSettingSail:
	.string "Slateport is it?\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, me darling!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
	.string "Ye just tell me whenever ye need\n"
	.string "to set sail again!$"

DewfordTown_Text_GettingItchToFish:
	.string "I found this while fishing the other\n"
	.string "day.\p"
	.string "I don't really need it, so here.$"

DewfordTown_Text_GiveYouOneOfMyRods:
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing RODS.$"

DewfordTown_Text_ThrowInFishingAdvice:
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

Route104_Text_WantToThankYe:
	.string "…Hold on a moment.\p"
	.string "I just wanted to say… Thank ye.\p"
	.string "It's been a long time since I\n"
	.string "sailed the seven seas.\p"
	.string "I even thought of hanging up the\n"
	.string "old sails.\p"
	.string "But ye… The way ye selflessly\n"
	.string "saved me darling Peeko…\p"
	.string "Ye motivated me, ye have.\p"
	.string "…Sniff.\p"
	.string "Oh, pay me no mind, pay me no mind.\n"
	.string "I'm just happy, is all.$"



DewfordTown_Text_ThatsTooBadThen:
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

DewfordTown_Text_HowsYourFishing:
	.string "Have you heard about the power plant\n"
	.string "that Team Aqua blew up to protect\l"
	.string "the sea life?\p"
	.string "I don't know about going to such\n"
	.string "extremes, but…\p"
	.string "Honestly, I do get it a little bit.$"

DewfordTown_Text_GreatHaulInSomeBigOnes:
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

DewfordTown_Text_FishingAdvice:
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight:
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DewfordTown_Text_TellMeWhatsNewAndIn:
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DewfordTown_Text_OfCourseIKnowAboutThat:
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DewfordTown_Text_XHuhIThinkYIsCool:
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DewfordTown_Text_YeahDefinitionOfInRightNow:
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"


DewfordTown_Text_FanClub:
	.string "“Unevolved Pokémon Fan Club”$"


Route104_EventScript_RivalTriggerFirst::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	call RustboroCity_EventScript_PlayRivalMusic
	delay 10
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
	waitmovement 0
	setvar VAR_0x8008, 0
	waitmovement 0
	goto Route104_EventScript_RivalEncounter


Route104_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	call RustboroCity_EventScript_PlayRivalMusic
	delay 10
	applymovement LOCALID_RIVAL, Route104_Movement_RivalReachPlayer
	waitmovement 0
	faceplayer
	setvar VAR_0x8008, 0
	waitmovement 0
	goto Route104_EventScript_RivalEncounter



Route104_Movement_RivalExitBrineysCottage:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

Route104_Movement_RivalReachPlayer:
	walk_down
	walk_down
	walk_down
	step_end

@ Unused, shares script with Rustboro encounter instead
Route104_EventScript_PlayRivalMusic::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
	return

Route104_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route104_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

Route104_EventScript_RivalEncounter::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
	end

Route104_EventScript_MayEncounter::
call Common_Set_Name_Rival
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
	closemessage
	waitmovement 0
	copyobjectxytoperm LOCALID_RIVAL
call Common_Set_Name_Rival
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
call Common_Set_Name_Rival
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
	goto Route104_EventScript_BattleMay
	call Route104_EventScript_RestoreMusic
	releaseall
	end

Route104_Movement_RivalWalkSlowLeft:
	walk_slow_left
	step_end

Route104_Movement_RivalApproachPlayer:
	walk_down
	face_right
	step_end

Route104_Movement_PlayerFaceRival:
	delay_4
	walk_in_place_faster_left
	step_end

Route104_EventScript_MayAskToBattle::
call Common_Set_Name_Rival
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
call Common_Set_Name_Rival
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
	releaseall
	end

Route104_EventScript_BattleMay::
	switch VAR_STARTER_MON
	case 0, Route104_EventScript_BattleMayTreecko
	case 1, Route104_EventScript_BattleMayTorchic
	case 2, Route104_EventScript_BattleMayMudkip
	end

Route104_EventScript_MayDefeated::
call Common_Set_Name_Rival
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, Route104_Movement_RivalGoesAway
	waitmovement 0
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
	setvar VAR_ROUTE104_STATE, 2
	setflag FLAG_HIDE_ROUTE_104_RIVAL
	removeobject LOCALID_RIVAL
	releaseall
	end

Route104_EventScript_RestoreMusic::
	savebgm MUS_DUMMY
	fadedefaultbgm
	return

Route104_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BrendanEncounter::
call Common_Set_Name_Rival
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
	closemessage
	waitmovement 0
	copyobjectxytoperm LOCALID_RIVAL
call Common_Set_Name_Rival
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
call Common_Set_Name_Rival
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
	goto Route104_EventScript_BattleBrendan
	call Route104_EventScript_RestoreMusic
	releaseall
	end

Route104_EventScript_BrendanAskToBattle::
call Common_Set_Name_Rival
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
call Common_Set_Name_Rival
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
call Common_Set_Name_Rival
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
	releaseall
	end

Route104_EventScript_BattleBrendan::
	switch VAR_STARTER_MON
	case 0, Route104_EventScript_BattleBrendanTreecko
	case 1, Route104_EventScript_BattleBrendanTorchic
	case 2, Route104_EventScript_BattleBrendanMudkip
	end

Route104_EventScript_BrendanDefeated::
call Common_Set_Name_Rival
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
		setvar VAR_ROUTE104_STATE, 2
	releaseall
	end

Route104_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
	goto Route104_EventScript_MayDefeated
	end

Route104_Movement_PlayerBackUp:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

Route104_Text_MayWeShouldRegister:
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "DEVON upgraded your POKéNAV with\n"
	.string "the MATCH CALL system, huh?\p"
	.string "We should register each other so we\n"
	.string "can get in contact anytime.$"

Route104_Text_RegisteredMay:
	.string "{PLAYER} registered MAY\n"
	.string "in the POKéNAV.$"

Route104_Text_MayHowsYourPokedex:
	.string "Oh, hey, {PLAYER}{KUN}.\n"
	.string "Fancy meeting you here.\p"
	.string "The old sailor Mr. Briney started\n"
	.string "offering free trips to Dewford.\p"
	.string "And there's no chance I'll say no to\n"
	.string "anything free, so here I am.\p"
	.string "Guessing you're here for that too, huh?$"

Route104_Text_MayMinesDecentLetsBattle:
	.string "By the way, how's your Pokédex looking?\p"
	.string "Mine rules.\n"
	.string "How about a little battle?$"

Route104_Text_MayHaventRaisedPokemon:
	.string "Oh, come on, {PLAYER}{KUN}, don't be\n"
	.string "such a bore.\p"
	.string "Don't you know that a Trainer always\n"
	.string "has to be ready for battle?\p"
	.string "Let's put that into practice.$"

Route104_Text_MayLetsBattle:
	.string "So, what do you think?\n"
	.string "How about a little battle here?$"

Route104_Text_MayIntro:
	.string "You just became a Trainer,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104_Text_MayDefeat:
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route104_Text_MayPostBattle:
	.string "My, my.\p"
	.string "You're more interesting than I\n"
	.string "expected.\p"
	.string "You know, most people living in\n"
	.string "Littleroot and Petalburg are really\l"
	.string "boring.\p"
	.string "So when you moved here, I thought you\n"
	.string "were going to be really boring, too.\p"
	.string "But the way you fight…\n"
	.string "Maybe it's that Johtoan spark, huh?\p"
	.string "Well, either way, this was just a fluke.\p"
	.string "There's no chance I'm gonna let you\n"
	.string "win next time.\p"
	.string "Oh, by the way…\p"
	.string "I've heard there's some commotion at\n"
	.string "the nearby mine, so I'm gonna check\l"
	.string "it out.\p"
	.string "Catch you later, eh?$"

Route104_Text_BrendanWeShouldRegister:
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "Cool, you had DEVON install the MATCH\n"
	.string "CALL system on your POKéNAV!\p"
	.string "Let's register each other in our\n"
	.string "POKéNAVS so we can keep in touch.$"

Route104_Text_RegisteredBrendan:
	.string "{PLAYER} registered BRENDAN\n"
	.string "in the POKéNAV.$"

Route104_Text_BrendanHowsYourPokedex:
	.string "Oh, hey, {PLAYER}{KUN}.\n"
	.string "Fancy meeting you here.\p"
	.string "The old sailor Mr. Briney started\n"
	.string "offering free trips to Dewford.\p"
	.string "And there's no chance I'll say no to\n"
	.string "anything free, so here I am.\p"
	.string "Guessing you're here for that too, huh?$"

Route104_Text_BrendanDoingGreatLetsBattle:
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104_Text_BrendanNoConfidence:
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

Route104_Text_BrendanLetsBattle:
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

Route104_Text_BrendanIntro:
	.string "You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104_Text_BrendanDefeat:
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104_Text_BrendanPostBattle:
	.string "BRENDAN: You've gotten pretty decent\n"
	.string "at handling POKéMON.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making POKéMON battle.\p"
	.string "Like MR. BRINEY, it's important to\n"
	.string "become friends with your POKéMON.$"

DewfordTown_Text_RideMinecart:
	.string "Ride the minecart to Granite\n"
	.string "Cave?$"

Route104_Movement_RivalGoesAway:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Text_Aron:
	.string "This Aron here is very hungry.\n"
	.string "It keeps trying to eat our emeralds.\p"
	.string "Maybe if I had an Iron Ball, I could\n"
	.string "feed it to it and get it to stop.$"


DewfordTown_Text_IronBall:
	.string "Hey, you got one, don't you?\n"
	.string "Any chance I could have it?$"


DewfordTown_Text_GaveIronBall:
	.string "Thanks!\n"
	.string "Let's see if it works.$"


DewfordTown_Text_ISee:
	.string "I see.\n"
	.string "That's ok. I understand!\p"
	.string "Not everyone is ready to part with\n"
	.string "their balls.$"


DewfordTown_Movement_PlayerMove:
	walk_right
	face_left
	step_end

DewfordTown_Movement_MinerMove:
	walk_down
	walk_down
	face_left
	step_end


Common_Movement_AronMoves:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end


DewfordTown_Movement_MinerGoesUp:
	walk_up
	walk_up
	step_end


DewfordTown_Text_ItWorked:
	.string "It worked!\p"
	.string "That Iron Ball is going to keep Aron\n"
	.string "busy for a while.\p"
	.string "Thank you for your help!\p"
	.string "I'd like you to have this, as a token\n"
	.string "of my gratitude.$"


DewfordTown_Text_ThanksForTheHelp:
	.string "Thanks again for the help, friend!\p"
	.string "If you have any ore to smelt, feel free\n"
	.string "to stop by at our Foundry.$"

DewfordTown_Text_FoundrySign:
	.string "Dewford Foundry$"

DewfordTown_Text_Slakoth:
	.string "This Slakoth's been asleep for\n"
	.string "days, at this point.\p"
	.string "I can't get it to move, no matter\n"
	.string "how hard I try.$"

DewfordTown_Text_Briney_BeforeBeatingGym:
	.string "Well, ahoy there!\p"
	.string "Ye finished with what ye needed\n"
	.string "to do?\p"
	.string "I just finished inspecting me boat,\n"
	.string "meself.\p"
	.string "So, we off to somewhere?\p"
	.string "… … …\p"
	.string "Slateport, eh?\n"
	.string "Aye, I can do that\p"
	.string "Hop off, then!$"

DewfordTown_Text_Briney_BrawlyHey:
	.string "Well hey, there!\p"
	.string "I was just, yeah, I just happened\n"
	.string "to be walking past here, right, and\l"
	.string "I couldn't help but spot you.\p"
	.string "You still coming to the Gym, right?\n"
	.string "You know, to fight me and all…?\p"
	.string "I'm just, ahah, looking forward to our\n"
	.string "little bout, yeah?\p"
	.string "… … …\p"
	.string "No pressure, though!\n"
	.string "Ahah!\p"
	.string "Well, see ya soon!$"

DewfordTown_Text_Briney_Youth:
	.string "I'll say, who was that, hm?\n"
	.string "Some kind of boisterous youth?\p"
	.string "Well, it seems to me that ye made\n"
	.string "a committment.\p"
	.string "It's bad manners to make people wait,\n"
	.string "ye know.\p"
	.string "Go and do what ye gotta do.\n"
	.string "I'll be waiting for ye here, I will.$"

DewfordTown_Text_Briney_GoDoGym:
	.string "It seems to me that ye made a\n"
	.string "committment.\p"
	.string "It's bad manners to make people wait,\n"
	.string "ye know.\p"
	.string "Go and do what ye gotta do.\n"
	.string "I'll be waiting for ye here, I will.$"

DewfordTown_Text_Briney_GoToSlateport:
	.string "Now hold up a moment, there.\n"
	.string "Going to Slateport?\p"
	.string "I'd love to take ye, but…\n"
	.string "Well, the demo's over, ye know.\p"
	.string "I could try sailing to there, but there's\n"
	.string "many dangers about.\p"
	.string "I could, ye know, fall into the void.\p"
	.string "Or become the prey of some anomalous,\n"
	.string "glitched-out, rectangular sea-beast…\p"
	.string "Nah, it'll have to wait, I'm afraid.\p"
	.string "You can always go back and see if ye\n"
	.string "missed anything.\p"
	.string "But thanks for playing until here!\n"
	.string "There's more to come, yessir.\p"
	.string "Until then…\n"
	.string "… … …\p"
	.string "… … …\p"
	.string "Eh, I forget was I was supposed to say.\n"
	.string "Me bad.$"