.set LOCALID_BRAWLY, 5
.set LOCALID_MAGMA, 11
.set LOCALID_MINER_LEFT, 12
.set LOCALID_MINER_RIGHT, 13
.set LOCALID_CLOBBOPUS, 9
.set LOCALID_POOCHYENA, 10
.set LOCALID_WALLY, 14
.set LOCALID_RIVAL, 20
.set LOCALID_MINECART, 21
.set LOCALID_MINECART_BRENDAN, 22
.set LOCALID_MINECART_MAY, 23
.set LOCALID_TY, 24
.set LOCALID_GABBY, 25

GraniteCaveEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCaveEntrance_MapScripts_OnTransition
	.byte 0

GraniteCaveEntrance_MapScripts_OnTransition:
    call GraniteCave_HandleTrainers
	call_if_eq VAR_ROUTE106_STATE, 1, Route106_EventScript_MoveEveryone
	goto_if_set FLAG_HIDE_BRAWLY_GRANITE, GraniteCaveEntrance_MapScripts_End
	call_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_MoveBrawly
	GraniteCaveEntrance_MapScripts_End::
	end 

Route106_EventScript_MoveBrawly::
	setobjectxyperm LOCALID_BRAWLY, 17, 10
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_LOOK_AROUND
	setvar VAR_TEMP_A, 1
	return


GraniteCave_HandleTrainers::
	call_if_unset FLAG_HIDE_TABITHA_CAVE, GraniteCave_EventScript_ResetTrainers
	call_if_set FLAG_HIDE_TABITHA_CAVE, GraniteCave_EventScript_SetTrainers
	return

GraniteCave_EventScript_ResetTrainers::
	cleartrainerflag TRAINER_GRANITE_GRUNT_1
	cleartrainerflag TRAINER_GRANITE_GRUNT_2
	cleartrainerflag TRAINER_GRANITE_GRUNT_3
	cleartrainerflag TRAINER_GRANITE_GRUNT_4
	cleartrainerflag TRAINER_GRANITE_GRUNT_5
	cleartrainerflag TRAINER_GRANITE_GRUNT_6
	cleartrainerflag TRAINER_GRANITE_GRUNT_7
	cleartrainerflag TRAINER_GRANITE_GRUNT_8
	cleartrainerflag TRAINER_GRANITE_GRUNT_9
	return

GraniteCave_EventScript_SetTrainers::
	setifnotbeaten TRAINER_GRANITE_GRUNT_1
	setifnotbeaten TRAINER_GRANITE_GRUNT_2
	setifnotbeaten TRAINER_GRANITE_GRUNT_3
	setifnotbeaten TRAINER_GRANITE_GRUNT_4
	setifnotbeaten TRAINER_GRANITE_GRUNT_5
	setifnotbeaten TRAINER_GRANITE_GRUNT_6
	setifnotbeaten TRAINER_GRANITE_GRUNT_7
	setifnotbeaten TRAINER_GRANITE_GRUNT_8
	setifnotbeaten TRAINER_GRANITE_GRUNT_9
	return



Route106_EventScript_MinecartInteract::
	lockall
	goto_if_set FLAG_HIDE_MINECART_GRANITE, Route106_EventScript_DoNothing
	msgbox Route106_Text_RideMinecart, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, NO, Route106_EventScript_DoNothing
	checkplayergender
	call_if_eq VAR_FACING, DIR_SOUTH, Route106_EventScript_MinecartInteractFromSouth
	call_if_eq VAR_FACING, DIR_EAST, Route106_EventScript_MinecartInteractFromEast
	call_if_eq VAR_FACING, DIR_NORTH, Route106_EventScript_MinecartInteractFromNorth
	call_if_eq VAR_FACING, DIR_WEST, Route106_EventScript_MinecartInteractFromWest
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_GRANITE_CAVE_ENTRANCE
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	removeobject LOCALID_MINECART
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route106_EventScript_MinecartInteractBrendan
	call_if_eq VAR_RESULT, FEMALE, Route106_EventScript_MinecartInteractMay
	clearflag FLAG_HIDE_MINECART_DEWFORD
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_FOUNDRY, 10, 12
	releaseall
	end

Route106_EventScript_MinecartInteractBrendan::
	
	clearflag FLAG_HIDE_BRENDAN_MINECART_GRANITE
	addobject LOCALID_MINECART_BRENDAN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route106_Movement_MinecartToDewford
	applymovement LOCALID_MINECART_BRENDAN, Route106_Movement_MinecartToDewford
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	fadedefaultbgm
	setflag FLAG_HIDE_BRENDAN_MINECART_GRANITE
	return


Route106_EventScript_MinecartInteractMay::
	clearflag FLAG_HIDE_MAY_MINECART_GRANITE
	addobject LOCALID_MINECART_MAY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route106_Movement_MinecartToDewford
	applymovement LOCALID_MINECART_MAY, Route106_Movement_MinecartToDewford
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	fadedefaultbgm
	setflag FLAG_HIDE_MAY_MINECART_GRANITE
	return

Route106_EventScript_DoNothing::
	releaseall
	end

Route106_EventScript_MoveEveryone::
	setobjectxyperm LOCALID_MINER_LEFT, 23, 11
	setobjectxyperm LOCALID_MAGMA, 24, 11
	setobjectxyperm LOCALID_MINER_RIGHT, 25, 11
	setobjectmovementtype LOCALID_MINER_LEFT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MINER_RIGHT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MAGMA, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm LOCALID_BRAWLY, 9, 16
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_FACE_LEFT
	return



Route106_EventScript_BrawlyGoesToGym::
	applymovement LOCALID_BRAWLY, Route106_Movement_BrawlyGoesToYou1
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BRAWLY, Route106_Movement_BrawlyGoesToYou2
	waitmovement 0
	speakername Common_Name_Brawly
	msgbox Route106_Text_BrawlyCongrats, MSGBOX_NPC
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkDown4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown4
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkRight
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_GABBY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkLeft3
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkLeft2
	applymovement LOCALID_TY, Common_Movement_WalkLeft2
	waitmovement 0
	applymovement LOCALID_TY, Common_Movement_FaceUp
	applymovement LOCALID_GABBY, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_FaceDown
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	speakername Common_Name_Gabby
	msgbox Route106_Text_GabbyNewsReport, MSGBOX_DEFAULT
	applymovement LOCALID_GABBY, Common_Movement_FaceRight
	msgbox Route106_Text_GabbyNewsReport2, MSGBOX_DEFAULT
	applymovement LOCALID_GABBY, Common_Movement_FaceDown
	msgbox Route106_Text_GabbyNewsReport3, MSGBOX_DEFAULT
	applymovement LOCALID_GABBY, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route106_Text_GabbyNewsReport4, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_INTERVIEW, 0, TRUE
	speakername Common_Name_Gabby
	applymovement LOCALID_GABBY, Common_Movement_FaceDown
	waitmovement 0
	switch VAR_RESULT
	case 0, Route106_EventScript_EasyDefeat
	case 1, Route106_EventScript_HardDefeat
	case 2, Route106_EventScript_HumbleDefeat
	end

Route106_EventScript_EasyDefeat::
	msgbox Route106_Text_EasyDefeat, MSGBOX_DEFAULT
	goto Route106_EventScript_BrawlyGoesToGymContinue

Route106_EventScript_HardDefeat::
	msgbox Route106_Text_HardDefeat, MSGBOX_DEFAULT
	goto Route106_EventScript_BrawlyGoesToGymContinue

Route106_EventScript_HumbleDefeat::
	msgbox Route106_Text_HumbleDefeat, MSGBOX_DEFAULT
	goto Route106_EventScript_BrawlyGoesToGymContinue
	


Route106_EventScript_BrawlyGoesToGymContinue::
	msgbox Route106_Text_GabbyNewsReport5, MSGBOX_DEFAULT
	applymovement LOCALID_GABBY, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	fadedefaultbgm
	msgbox Route106_Text_GabbyNewsReport6, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkDown3
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkDown
	applymovement LOCALID_TY, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_WalkDown4
	applymovement LOCALID_TY, Common_Movement_WalkDown4
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_WalkRight
	waitmovement 0
	speakername Common_Name_Brawly
	msgbox Route106_Text_BrawlyGoesBack, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_GABBY
	removeobject LOCALID_TY
	removeobject LOCALID_BRAWLY
	special RemoveCameraObject
	setflag FLAG_HIDE_BRAWLY_GRANITE
	setvar VAR_TEMP_A, 0
	release
	return

Route106_EventScript_BrawlyEvent::
	lock
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	msgbox Route106_Text_GoClobbopus, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_CLOBBOPUS, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_POOCHYENA, EnterPokeballMovement
	waitmovement 0
	removeobject LOCALID_POOCHYENA
	applymovement LOCALID_MAGMA, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	msgbox Route106_Text_NoMyPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_FaceDown
	waitmovement 0
	msgbox Route106_Text_GetHim, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MINER_LEFT, Route106_Movement_MinerLeft
	applymovement LOCALID_MINER_RIGHT, Route106_Movement_MinerRight
	waitmovement 0
	applymovement LOCALID_MAGMA, Route106_Movement_LookAround
	waitmovement 0
	msgbox Route106_Text_FilthyHands, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MINER_LEFT, Common_Movement_WalkDown6
	applymovement LOCALID_MINER_RIGHT, Common_Movement_WalkDown6
	applymovement LOCALID_MAGMA, Common_Movement_WalkDown6
	waitmovement 0
	setobjectxy LOCALID_MINER_LEFT, 23, 11
	setobjectxyperm LOCALID_MINER_LEFT, 23, 11
	setobjectxy LOCALID_MAGMA, 24, 11
	setobjectxyperm LOCALID_MAGMA, 24, 11
	setobjectxy LOCALID_MINER_RIGHT, 25, 11
	setobjectxyperm LOCALID_MINER_RIGHT, 25, 11
	setobjectmovementtype LOCALID_MINER_LEFT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MINER_RIGHT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_GRUNT, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_MINER_LEFT, Common_Movement_FaceDown
	applymovement LOCALID_MINER_RIGHT, Common_Movement_FaceDown
	applymovement LOCALID_MAGMA, Common_Movement_FaceDown
	fadedefaultbgm
	msgbox Route106_Text_Whew, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement LOCALID_CLOBBOPUS, EnterPokeballMovement
	waitmovement 0
	removeobject LOCALID_CLOBBOPUS
	applymovement LOCALID_BRAWLY, Common_Movement_WalkRight
	waitmovement 0
	applymovement LOCALID_BRAWLY, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_Brawly
	msgbox Route106_Text_Brawly, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkDown6
	waitmovement 0
	setobjectxy LOCALID_BRAWLY, 9, 16
	setobjectxyperm LOCALID_BRAWLY, 9, 16
	applymovement LOCALID_BRAWLY, Common_Movement_FaceLeft
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_FACE_LEFT
	special DrawWholeMapView
	setvar VAR_ROUTE106_STATE, 1
	release
	end


Route106_EventScript_Wally::
	lock
	playbgm MUS_WALLY_ENCOUNTER, FALSE
	speakername Common_Name_Wally
	msgbox Route106_Text_Wally, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_GABBY, Route106_Movement_GabbyAndTyFilming
	applymovement LOCALID_TY, Route106_Movement_GabbyAndTyFilming
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay32
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
	waitmovement 0
	speakername Common_Name_Wally
	msgbox Route106_Text_WallyWhoAreYou, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox Route106_Text_ImGabby, MSGBOX_DEFAULT
	speakername Common_Name_Ty
	msgbox Route106_Text_TySup, MSGBOX_DEFAULT
	speakername Common_Name_Gabby
	msgbox Route106_Text_GabbyWondering, MSGBOX_DEFAULT
	speakername Common_Name_Wally
	msgbox Route106_Text_WallyToGabby, MSGBOX_DEFAULT
	speakername Common_Name_Gabby
	msgbox Route106_Text_GabbyToWally, MSGBOX_DEFAULT
	speakername Common_Name_Wally
	msgbox Route106_Text_WallyFine, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	speakername Common_Name_Wally
	msgbox Route106_Text_ReallyGottaBeatYou, MSGBOX_DEFAULT
	special RemoveCameraObject
	trainerbattle_no_intro TRAINER_WALLY_2, Route106_Text_WallyDefeat
	applymovement LOCALID_GABBY, Common_Movement_Delay32
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_GABBY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_GABBY, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Gabby
	msgbox Route106_Text_Splendid, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TY, Route106_Movement_GabbyAndTyWalkAway
	applymovement LOCALID_GABBY, Route106_Movement_GabbyAndTyWalkAway
	waitmovement 0
	applymovement LOCALID_TY, Common_Movement_FaceUp
	applymovement LOCALID_GABBY, Common_Movement_FaceDown
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
	waitmovement 0
	special RemoveCameraObject
	addobject LOCALID_RIVAL
	speakername Common_Name_Wally
	clearflag FLAG_HIDE_GRANITE_RIVAL
	msgbox Route106_Text_DontUnderstand, MSGBOX_NPC
	applymovement LOCALID_RIVAL, Route106_Movement_WalkUp2Fast
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
	applymovement LOCALID_RIVAL, Route106_Movement_WalkUp4Fast
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Route106_Movement_LetWallyPass
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_WALLY_106
	applymovement LOCALID_RIVAL, Common_Movement_WalkRight
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp2
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_FaceRight
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route106_Text_WhoWasThat, MSGBOX_NPC
	applymovement LOCALID_RIVAL, Route106_Movement_RunAfterWally
	waitmovement 0
	removeobject LOCALID_RIVAL
	setflag FLAG_HIDE_GRANITE_RIVAL
	release
	end


Route106_EventScript_Ty::
	lock
	goto_if_set FLAG_HIDE_WALLY_106, Route106_EventScript_TyPostWally
	msgbox Route106_Text_TyMove, MSGBOX_DEFAULT
	closemessage
	release
	end


Route106_EventScript_TyPostWally:
	speakername Common_Name_Ty
	msgbox Route106_Text_TyCool, MSGBOX_DEFAULT
	closemessage
	release
	end

Route106_EventScript_Gabby::
	lock
	call_if_set FLAG_HIDE_WALLY_106, Route106_EventScript_GabbyName
	goto_if_eq VAR_FACING, DIR_NORTH, Route106_EventScript_GabbyMove
	msgbox Route106_Text_GabbyTalking, MSGBOX_DEFAULT
	closemessage
	release
	end

Route106_EventScript_GabbyName::
	speakername Common_Name_Gabby
	return

Route106_EventScript_GabbyMove::
	msgbox Route106_Text_GabbyMove, MSGBOX_DEFAULT
	closemessage
	release
	end

Route106_Movement_WalkDown2Normal:
	walk_down
	walk_down
	step_end

Route106_Movement_WalkUp2Fast:
	walk_fast_up
	walk_fast_up
	step_end


Route106_Movement_WalkUp4Fast:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route106_Movement_LetWallyPass:
	walk_left
	face_right
	step_end

Route106_Text_GoClobbopus:
	.string "Go, Clobbopus!\n"
	.string "Use Storm Throw!$"


Route106_Text_NoMyPokemon:
	.string "No!\n"
	.string "My Pokémon!$"


Route106_Text_GetHim:
	.string "Get him, guys!$"

Route106_Text_FilthyHands:
	.string "N-no!\n"
	.string "Get your filthy hands off me!$"

Route106_Text_Whew:
	.string "…Whew.$"


Route106_Text_Brawly:
	.string "Hey! Who are you?\p"
	.string "…Ah! A Trainer?\n"
	.string "You came at the right time!\p"
	.string "Name's Brawly.\p"
	.string "Three times rock climbing champion.\n"
	.string "Back to back.\p"
	.string "…Also, I'm Dewford's Gym Leader.\p"
	.string "We received intel a while back that\n"
	.string "Team Magma was gonna try and seize\l"
	.string "our mines.\p"
	.string "So we guarded the way to here!\n"
	.string "But, huh…\p"
	.string "They got here from the sea.\p"
	.string "Hard to see that one coming, to be\n"
	.string "fair.\p"
	.string "So now a bunch of Team Magma grunts\n"
	.string "are partying it up in the mines.\p"
	.string "To make matters worse, I've been\n"
	.string "told that someone entered the mines\l"
	.string "after they were taken over.\p"
	.string "As you can see, I need to stay here\n"
	.string "to make sure that no one else tries to\l"
	.string "sneak in.\p"
	.string "But you could help check out the\n"
	.string "situation inside, right?\p"
	.string "Consider it an extended Gym challenge.\p"
	.string "…Well then! I'm counting on you.$"


Route106_Text_Wally:
	.string "{PLAYER}!\n"
	.string "You're here too, huh…?\p"
	.string "Have you heard…?\n"
	.string "The mines have been taken over…\p"
	.string "I'd go and check it out, but…\n"
	.string "Cough…\p"
	.string "Well, it's not very good for my health…\p"
	.string "… … …\p"
	.string "Listen, {PLAYER}…\p"
	.string "I've-\n"
	.string "Cough…\p"
	.string "I've trained since the last time\n"
	.string "we battled…\p"
	.string "I know you're busy, but we need to\n"
	.string "have a battle, right now!\p"
	.string "I'll beat you this time!\n"
	.string "I will!$"


Route106_Text_WallyWhoAreYou:
	.string "… … …\n"
	.string "Erm…\p"
	.string "Who are you…?$"


Route106_Text_ImGabby:
	.string "Oh, yes, hi!\n"
	.string "Please don't mind us.\p"
	.string "We're here to film a news report.\p"
	.string "Name's Gabby, by the way.\n"
	.string "And that one's over there is Ty.$"

Route106_Text_TySup:
	.string "'Sup.$"


Route106_Text_GabbyWondering:
	.string "You're about to do battle,\n"
	.string "right?\p"
	.string "We were wondering if you could\n"
	.string "let us film you.\p"
	.string "You know, for the people at home!$"

Route106_Text_WallyToGabby:
	.string "But…\n"
	.string "…Weren't you covering Team Magma?$"

Route106_Text_GabbyToWally:
	.string "Well, yes.\p"
	.string "But you don't get to see two young\n"
	.string "rival Trainers battling it out to their\l"
	.string "fullest every day, do you?\p"
	.string "…Besides, I don't just do news.\p"
	.string "I'm a prolific battle commentator,\n"
	.string "you know?$"

Route106_Text_WallyFine:
	.string "… … …\n"
	.string "So I'd get to be on TV…?\p"
	.string "… … …\n"
	.string "Ok…$"

Route106_Text_ReallyGottaBeatYou:
	.string "I really gotta beat you now, don't I…?\p"
	.string "…I won't lose this time.\p"
	.string "Pre-\n"
	.string "Cough…\p"
	.string "Prepare yourself…!$"

Route106_Text_Splendid:
	.string "Did you catch all of that, Ty?\n"
	.string "That was explosive!\p"
	.string "We need to review the footage, now!$"

Route106_Text_WallyDefeat:
	.string "…Huh?$"


Route106_Movement_MinerLeft:
	walk_up
	walk_up
	face_right
	step_end

Route106_Movement_MinerRight:
	walk_up
	walk_up
	face_left
	step_end


Route106_Movement_LookAround:
	face_right
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	step_end


Route106_EventScript_BrawlyDialogue::
	speakername Common_Name_Brawly
	msgbox Route106_Text_MineLivelihood, MSGBOX_NPC
	end

Route106_EventScript_MinerLeft::
	goto_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_MinerLeft_Post
	msgbox Route106_Text_MinerLeft, MSGBOX_NPC
	end

Route106_EventScript_MinerLeft_Post::
	msgbox Route106_Text_MinerLeft_Post, MSGBOX_NPC
	end

Route106_EventScript_MinerRight::
	goto_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_MinerRight_Post
	msgbox Route106_Text_MinerRight, MSGBOX_NPC
	end

Route106_EventScript_MinerRight_Post::
	msgbox Route106_Text_MinerRight_Post, MSGBOX_NPC
	end

Route106_EventScript_MinerMiddle::
	goto_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_MinerMiddle_Post
	msgbox Route106_Text_MinerMiddle, MSGBOX_NPC
	end

Route106_EventScript_MinerMiddle_Post::
	msgbox Route106_Text_MinerMiddle_Post, MSGBOX_NPC
	end

Route106_EventScript_MinerBottom::
	goto_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_MinerBottom_Post
	msgbox Route106_Text_MinerBottom, MSGBOX_NPC
	end

Route106_EventScript_MinerBottom_Post::
	msgbox Route106_Text_MinerBottom_Post, MSGBOX_NPC
	end


Route106_EventScript_Magma::
	msgbox Route106_Text_Magma, MSGBOX_NPC
	end

Route106_EventScript_MinerGate::
	msgbox Route106_Text_MinerGate, MSGBOX_NPC
	end

Route106_EventScript_MinerHouse::
	msgbox Route106_Text_MinerHouse, MSGBOX_NPC
	end

Route106_EventScript_MinerCastle::
	msgbox Route106_Text_MinerCastle, MSGBOX_NPC
	end

Route106_Text_MineLivelihood:
	.string "You know, I was thinking…\n"
	.string "If this Team Magma just wanted to\l"
	.string "steal the emeralds…\p"
	.string "Wouldn't it have been easier to\n"
	.string "just raid the forge?\p"
	.string "…I guess the mind of a criminal\n"
	.string "works in strange ways.$"


Route106_Text_MinerLeft:
	.string "…What an annoyance.$"

Route106_Text_MinerLeft_Post:
	.string "Yeah, we had to let this guy go.\p"
	.string "It's not like we have a place to\n"
	.string "keep him.$"

Route106_Text_MinerRight:
	.string "I'm not a Trainer, but I can still\n"
	.string "hold my own.\p"
	.string "No one will steal the mine from us\n"
	.string "on my watch.$"

Route106_Text_MinerRight_Post:
	.string "You're on fire, man!\p"
	.string "You really sent Team Magma packing!$"

Route106_Text_MinerMiddle:
	.string "Most of us aren't Trainers.\p"
	.string "Those that are got sent to the north,\n"
	.string "to watch out for Team Magma.\p"
	.string "But…\n"
	.string "You saw how it ended up.$"

Route106_Text_MinerMiddle_Post:
	.string "Even with Team Magma gone, we should\n"
	.string "still keep watch for other threats.$"

Route106_Text_MinerBottom:
	.string "I saw a Trainer rush into the mine\n"
	.string "earlier.\p"
	.string "I tried to stop them, but they didn't\n"
	.string "even turn around.\p"
	.string "I hope they're ok.$"

Route106_Text_MinerBottom_Post:
	.string "The Trainer that went in the cave…\n"
	.string "Was Steven Stone?\p"
	.string "Like, THE Steven Stone?\p"
	.string "I'm so jealous you got to meet him.\p"
	.string "I really wanted to ask for an autograph.$"

Route106_Text_Magma:
	.string "Unhand me, you ruffians!\n"
	.string "I have done nothing wrong!$"


Route106_Text_MinerGate:
	.string "There's a minecart you can take\n"
	.string "to go back to Dewford.\p"
	.string "Right now it's out of commission,\n"
	.string "though.$"


Route106_Text_MinerHouse:
	.string "Feel free to rest up inside,\n"
	.string "if you need it.\p"
	.string "You can also take the minecart\n"
	.string "back to Dewford.$"

Route106_Text_MinerCastle:
	.string "Across the water from here, there's\n"
	.string "an island with an ancient castle.\p"
	.string "People say it's bad luck, so I've\n"
	.string "never been there.\p"
	.string "…I wonder what's in it, though.$"

Route106_Text_DontUnderstand:
	.string "I don't understand, {PLAYER}.\p"
	.string "We're… We're both new Trainers,\n"
	.string "right?\p"
	.string "And…\n"
	.string "Cough…\p"
	.string "And I'm doing everything right…\p"
	.string "I'm using good moves, and items,\n"
	.string "And everything…\p"
	.string "Maybe my family was right…\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "…No.\p"
	.string "I'll keep trying, {PLAYER}.\n"
	.string "I'll keep getting stronger.\p"
	.string "And one day…\n"
	.string "I'll defeat you.\p"
	.string "Just…\n"
	.string "Cough…\p"
	.string "Just you wait for me…!$"

Route106_Text_BrawlyCongrats:
	.string "Dude, you did it!\p"
	.string "A swarm of Magma Grunts just ran\n"
	.string "out of the mines!\p"
	.string "They all climbed in their little boat\n"
	.string "and went off somewhere.\p"
	.string "And no one was hurt so, you know,\n"
	.string "I think we can call this a victory.\p"
	.string "Ahh, now I'm itching to face off with\n"
	.string "our new hero!\p"
	.string "But first…\n"
	.string "Well, follow me!$"

Common_Name_Brawly:
	.string "Brawly$"


Route106_Text_WhoWasThat:
	.string "Hey, {PLAYER}, what's going on\n"
	.string "here?\p"
	.string "There's cameras, and people fighting,\n"
	.string "and…\p"
	.string "That was…\n"
	.string "Wally, right?\p"
	.string "I know he lives in Petalburg, but I've\n"
	.string "never really spoken to him before.\p"
	.string "Not that I haven't tried!\n"
	.string "But he's always been a bit of a weirdo.\p"
	.string "Good thing you've moved here, or I would\n"
	.string "have eventually died of boredom, ha!\p"
	.string "Anyway, what was he doing here?\p"
	.string "… … …\p"
	.string "Whaaaaat?\n"
	.string "He's a Pokémon Trainer now?\p"
	.string "Him, of all people?\n"
	.string "That's a bit of a shock.\p"
	.string "… … …\p"
	.string "You know, I came here to find the Gym\n"
	.string "Leader, but…\p"
	.string "Having a sparring match with that Wally\n"
	.string "sounds more fun.\p"
	.string "You know, to teach him the ropes!\p"
	.string "Oh, but don't worry!\n"
	.string "I won't beat him too hard.\p"
	.string "Well, I better go after him before he\n"
	.string "decides to run off the island.\p"
	.string "See ya around!$"

Route106_Text_TyMove:
	.string "Uhm…\p"
	.string "I'm trying to film, here.$"

Route106_Text_TyCool:
	.string "Hey, I know we're cool, but…\n"
	.string "Still trying to do my job here.$"

Route106_Text_GabbyTalking:
	.string "Special report from Granite\n"
	.string "Cave!\p"
	.string "The organization known as 'Team Magma'\n"
	.string "has seized control of the mines!\p"
	.string "Their goals and demands are so far\n"
	.string "unknown!$"

Route106_Text_GabbyMove:
	.string "Could you…\n"
	.string "Not stand in front of me, please?\p"
	.string "We're trying to film a news report.$"

Route106_Text_RideMinecart:
	.string "Ride the minecart to Dewford?$"

Route106_Movement_RunAfterWally:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end


Route106_EventScript_MinecartInteractFromSouth:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return

Route106_EventScript_MinecartInteractFromEast:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	return


Route106_EventScript_MinecartInteractFromNorth:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

Route106_EventScript_MinecartInteractFromWest:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	return

Route106_Movement_MinecartToDewford:
	walk_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_up
	walk_fast_up
	walk_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_up
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
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_down
	walk_down
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_down
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_right
	step_end



Route106_Movement_BrawlyGoesToYou1:
	face_down
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_up
	delay_16
	emote_exclamation_mark
	step_end
Route106_Movement_BrawlyGoesToYou2:
	delay_16
	walk_up
	walk_up
	step_end

Route106_Movement_GabbyAndTyFilming:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end


Route106_Movement_GabbyAndTyWalkAway:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

Common_Name_Gabby:
	.string "Gabby$"

Common_Name_Ty:
	.string "Ty$"

Route106_Text_GabbyNewsReport:
	.string "…And we're back at Granite\n"
	.string "Cave, with a flash update on the\l"
	.string "situation!\p"
	.string "It would appear that Team Magma, which\n"
	.string "was previously terrorizing the area,\l"
	.string "has been defeated thanks to the\l"
	.string "efforts of one young Trainer!$"

Route106_Text_GabbyNewsReport2:
	.string "Would you be so kind as to tell us\n"
	.string "your name?\p"
	.string "… … …\p"
	.string "{PLAYER}!\n"
	.string "I see!\p"
	.string "But…\n"
	.string "Hold onto your Ponytas!\p"
	.string "Would your father happen to be\n"
	.string "Petalburg's Gym Leader?\p"
	.string "… … …\p"
	.string "Gasp!\n"
	.string "What a shocking twist!$"

Route106_Text_GabbyNewsReport3:
	.string "Our viewers will remember that we\n"
	.string "previously interviewed Petalburg\l"
	.string "City's Gym Leader on this very program!\p"
	.string "And now, we have the pleasure to have\n"
	.string "here none other than {PLAYER}!$"

Route106_Text_GabbyNewsReport4:
	.string "Do you have any comments on your\n"
	.string "defeat of Team Magma?$"

Route106_Text_EasyDefeat:
	.string "A confident Trainer!\p"
	.string "We love to see it, ladies and\n"
	.string "gentlemen!$"

Route106_Text_HardDefeat:
	.string "A humble Trainer!\p"
	.string "We love to see it, ladies and\n"
	.string "gentlemen!$"

Route106_Text_HumbleDefeat:
	.string "A case of stage fright!\p"
	.string "We love to see it, ladies and\n"
	.string "gentlemen!$"

Route106_Text_GabbyNewsReport5:
	.string "Anyway…\p"
	.string "It looks like the situation has been\n"
	.string "solved, so we'll end the report here.\p"
	.string "Make sure to follow us for more breaking\n"
	.string "news!\p"
	.string "Until next time!$"

Route106_Text_GabbyNewsReport6:
	.string "And there we go!\p"
	.string "Thanks for allowing me to interview you.\n"
	.string "This is gonna be a great story!\p"
	.string "See you around!$"

Route106_Text_BrawlyGoesBack:
	.string "Right on!\n"
	.string "You're pretty much a celebrity now!\p"
	.string "Well, I'll be back at the Gym.\n"
	.string "I got a real itch to fight you!\p"
	.string "Well, then, see you later!$"
