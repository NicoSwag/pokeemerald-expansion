.equ LOCALID_WANDAS_BF, 1
.set LOCALID_DEVON_EMPLOYEE, 3
.set LOCALID_PEEKO, 4
.set LOCALID_GRUNT, 5
.set LOCALID_BALL, 13

RusturfTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
	.byte 0

RusturfTunnel_OnFrame:
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
	.2byte 0

RusturfTunnel_OnLoad:
	end

RusturfTunnel_OnTransition::
	goto_if_eq VAR_RUSTURF_TUNNEL_STATE, 3, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos3
	goto_if_eq VAR_RUSTURF_TUNNEL_STATE, 4 RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos4
	end

RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
	msgbox RustturfTunnel_Message_AfterHim, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WANDAS_BF, RustturfTunnel_Movement_AfterHim
	waitmovement 0
	copyobjectxytoperm LOCALID_WANDAS_BF
	setobjectmovementtype LOCALID_WANDAS_BF, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
	release
	end

RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos3::
	setobjectxyperm LOCALID_WANDAS_BF, 16, 17
	setobjectmovementtype LOCALID_WANDAS_BF, MOVEMENT_TYPE_FACE_RIGHT
	end

RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos4::
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 23, 17
	setobjectxyperm LOCALID_PEEKO, 23, 16
	setobjectxyperm LOCALID_WANDAS_BF, 20, 17
	setobjectmovementtype LOCALID_WANDAS_BF, MOVEMENT_TYPE_FACE_RIGHT
	end



RusturfTunnel_EventScript_Wanda::
	lock
	faceplayer
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RusturfTunnel_EventScript_WandasBoyfriend::
	faceplayer
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WANDAS_BF, Common_Movement_FaceRight
	waitmovement 0
	release
	end

RusturfTunnel_EventScript_AlreadySpokenTo::
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RusturfTunnel_EventScript_ClearTunnelScene::
	lockall
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
	releaseall
	end

RusturfTunnel_EventScript_BoyfriendApproachWanda1::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
	waitmovement 0
	return

RusturfTunnel_EventScript_BoyfriendApproachWanda2::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	waitmovement 0
	return

RusturfTunnel_EventScript_BoyfriendApproachWanda3::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend1::
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend2::
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend3::
	return

RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
	closemessage
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
	waitmovement 0
	return

RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
	waitmovement 0
	return

RusturfTunnel_EventScript_WandaAndBoyfriendExit::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
	waitmovement 0
	return

RusturfTunnel_EventScript_WandasBoyfriendNotice::
	playse SE_PIN
	waitmovement 0
	return

RusturfTunnel_Movement_WandaExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandaExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_PlayerWatchWandaExit:
	delay_8
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused1:
	walk_left
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused2:
	walk_down
	walk_in_place_faster_up
	delay_8
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused3:
	walk_up
	walk_in_place_faster_down
	delay_8
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend1:
	walk_left
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend:
	walk_right
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_BoyfriendFaceRight:
	walk_up
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RustturfTunnel_Movement_AfterHim:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
	walk_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda1:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_fast_up
	walk_fast_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
	setvar VAR_TEMP_1, 1
	end

RusturfTunnel_EventScript_TunnelBlockagePos2::
	setvar VAR_TEMP_1, 2
	end

RusturfTunnel_EventScript_TunnelBlockagePos3::
	setvar VAR_TEMP_1, 3
	end

RusturfTunnel_EventScript_AquaGruntBackUp::
	lockall
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
	waitmovement 0
	copyobjectxytoperm LOCALID_GRUNT
	copyobjectxytoperm LOCALID_PEEKO
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
	releaseall
	end

RusturfTunnel_Movement_GruntAndPeekoBackUp:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

RusturfTunnel_EventScript_Peeko::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RusturfTunnel_EventScript_Grunt::
	lock
	msgbox RusturfTunnel_Message_dontyoudare, MSGBOX_NPC
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, RusturfTunnel_Movement_Retreat
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_Retreat
	waitmovement 0
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
	copyobjectxytoperm LOCALID_PEEKO
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	msgbox RusturfTunnel_Message_CornerHim, MSGBOX_NPC
	closemessage
	applymovement LOCALID_WANDAS_BF, RustturfTunnel_Movement_BlackBeltRight
	waitmovement 0
	copyobjectxytoperm LOCALID_WANDAS_BF
	setvar VAR_RUSTURF_TUNNEL_STATE, 4
	release
	end
	
RusturfTunnel_EventScript_Grunt2Top::
	setvar VAR_TEMP_1, 1
	goto RusturfTunnel_EventScript_Grunt2
	end

RusturfTunnel_EventScript_Grunt2Bottom::
	setvar VAR_TEMP_1, 2
	goto RusturfTunnel_EventScript_Grunt2
	end

RusturfTunnel_EventScript_Grunt2::
	lock
	msgbox RusturfTunnel_Message_StopIt, MSGBOX_NPC
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_FaceDown
	applymovement LOCALID_WANDAS_BF, RustturfTunnel_Movement_BlockExit
	waitmovement 0
	msgbox RusturfTunnel_Message_Noyoudont, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_FaceLeft
	waitmovement 0
	msgbox RusturfTunnel_Message_Fine, MSGBOX_NPC
	closemessage
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_Grunt2PlayerWalkDown
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_Grunt2PlayerWalkUp
	trainerbattle_no_intro TRAINER_DEVON_MANAGER_1, RustturfTunnel_Message_DevonDefeat
	setvar VAR_RUSTURF_TUNNEL_STATE, 5
	msgbox RusturfTunnel_Message_GetItThen, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_BALL
	setobjectxy LOCALID_BALL, 23, 17
	applymovement LOCALID_BALL, RusturfTunnel_Movement_BallThrow
	waitmovement 0
	playse SE_WALL_HIT
	msgbox RusturfTunnel_Message_Escape, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, RusturfTunnel_Movement_DevonEscapes
	waitmovement 0
	removeobject LOCALID_DEVON_EMPLOYEE
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BfReachesYou
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox RusturfTunnel_Message_HolyMiltank, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	removeobject LOCALID_BALL
	giveitem ITEM_DEVON_GOODS
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox RusturfTunnel_Message_NoClue, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_GetToPeeko
	waitmovement 0
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BfExitCave
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExitCave
	waitmovement 0
	removeobject LOCALID_WANDAS_BF
	removeobject LOCALID_PEEKO
	setvar VAR_RUSTBORO_CITY_STATE, 10
	release
	end

RusturfTunnel_Movement_PushPlayerAsideForGrunt:
	face_down
	lock_facing_direction
	walk_up
	unlock_facing_direction
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_PlayerMoveAsideForBriney:
	walk_down
	walk_in_place_faster_up
	step_end

RusturfTunnel_Movement_GruntEscape:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RusturfTunnel_Movement_BrineyApproachPeeko1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RusturfTunnel_Movement_BrineyExit:
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

RusturfTunnel_Movement_PlayerWatchBrineyExit:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_BrineyApproachPeeko2:
	delay_16
	walk_right
	step_end

RusturfTunnel_Movement_PeekoExit:
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

RusturfTunnel_Movement_Retreat:
	walk_right
	walk_right
	walk_right
	walk_right
	face_left
	step_end

RustturfTunnel_Movement_BlackBeltRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustturfTunnel_Movement_BlockExit:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	face_up
	step_end

RusturfTunnel_EventScript_Mike::
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end

RusturfTunnel_Text_ComeAndGetSome:
	.string "What, are you coming?\n"
	.string "Come and get some, then!$"

RusturfTunnel_Text_Peeko:
	.string "PEEKO: Pii pihyoh!$"

RusturfTunnel_Text_GruntIntro:
	.string "Grah, keelhaul it all!\p"
	.string "That hostage POKéMON turned out to\n"
	.string "be worthless!\p"
	.string "And to think I made a getaway…\n"
	.string "In this tunnel to nowhere!\p"
	.string "Hey! You!\n"
	.string "So you want to battle me?$"

RusturfTunnel_Text_GruntDefeat:
	.string "Urrrggh! My career in crime comes to\n"
	.string "a dead end!$"

RusturfTunnel_Text_GruntTakePackage:
	.string "This is plain not right…\p"
	.string "The BOSS told me this would be a\n"
	.string "slick-and-easy job to pull.\p"
	.string "All I had to do was steal some package\n"
	.string "from DEVON.\p"
	.string "Tch!\n"
	.string "You want it back that badly, take it!$"

RusturfTunnel_Text_PeekoGladToSeeYouSafe:
	.string "PEEKO!\n"
	.string "Am I glad to see you're safe!$"

RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
	.string "PEEKO owes her life to you!\p"
	.string "They call me MR. BRINEY.\n"
	.string "And, you are?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
	.string "I sincerely thank you!\p"
	.string "Now, if there's anything that troubles\n"
	.string "you, don't hesitate to tell me!\p"
	.string "You can usually find me in my cottage\n"
	.string "by the sea near PETALBURG WOODS.\p"
	.string "Come, PEEKO, we should make our way\n"
	.string "home.\p"
	.string "PEEKO: Pihyoh!$"

RusturfTunnel_Message_CornerHim:
	.string "Corner him!$"

RustturfTunnel_Message_AfterHim:
	.string "Go! After him!$"

RusturfTunnel_Message_dontyoudare:
	.string "DEVON MANAGER: S-stop it right there!\p"
	.string "Don't you dare move a step…\n"
	.string "Or this WINGULL is gonna get it!$"

RusturfTunnel_Text_WhyCantTheyKeepDigging:
	.string "What are you waiting for?$"

RusturfTunnel_Text_ToGetToVerdanturf:
	.string "To get from RUSTBORO to VERDANTURF,\n"
	.string "you need to go to DEWFORD, then pass\l"
	.string "through SLATEPORT and MAUVILLE…$"

RusturfTunnel_Text_YouShatteredBoulderTakeHM:
	.string "Wow! You shattered that boulder\n"
	.string "blocking the way.\p"
	.string "To show you how much I appreciate it,\n"
	.string "I'd like you to have this HM.$"

RusturfTunnel_Text_ExplainStrength:
	.string "That HM contains STRENGTH.\p"
	.string "If a muscular POKéMON were to learn\n"
	.string "that, it would be able to move even\l"
	.string "large boulders.$"

RusturfTunnel_Text_WandaReunion:
	.string "WANDA!\n"
	.string "Now I can see you anytime!\p"
	.string "WANDA: That's…wonderful.\p"
	.string "Please, take some rest at my home.$"

RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
	.string "On the other side of this rock…\n"
	.string "My boyfriend is there.\p"
	.string "He… He's not just digging the tunnel\n"
	.string "to come see me.\p"
	.string "He works his hands raw and rough\n"
	.string "for the benefit of everyone.$"

RusturfTunnel_Text_MikeIntro:
	.string "What do you call a wild man up in the\n"
	.string "mountains? A mountain man, right?\p"
	.string "So why don't they call a POKéMON in\n"
	.string "the mountains a mountain POKéMON?$"

RusturfTunnel_Text_MikeDefeat:
	.string "My POKéMON…\n"
	.string "Ran out of power…$"

RusturfTunnel_Text_MikePostBattle:
	.string "They halted development here to\n"
	.string "protect POKéMON, right?\l"
	.string "There's a feel-good story!$"


RusturfTunnel_Message_StopIt:
	.string "DEVON MANAGER: G-gah!\n"
	.string "I'm outta here!$"

RusturfTunnel_Message_Noyoudont:
	.string "No you don't!$"


RusturfTunnel_Message_Fine:
	.string "DEVON MANAGER: …F-fine!\p"
	.string "You want me so badly?\n"
	.string "Come and get me, then!\p"
	.string "I-I'll let you know…\p"
	.string "I didn't rise to my position by\n"
	.string "being a weakling…!$"


RustturfTunnel_Message_DevonDefeat:
	.string "No, no, no, no!\n"
	.string "You stupid b-brat!$"


RusturfTunnel_Message_GetItThen:
	.string "DEVON MANAGER: W-what have I even\n"
	.string "done to you!?\p"
	.string "Ha… Hahaha!\n"
	.string "I get it!\p"
	.string "You're after the GOODS, aren't you?\p"
	.string "T-then go ahead and get them!$"


RusturfTunnel_Movement_BallThrow:
	walk_left
	step_end

RusturfTunnel_Message_Thud:
	.string "THUD!$"

RusturfTunnel_Message_Escape:
	.string "DEVON MANAGER: And finally, without\n"
	.string "that junk slowing me down…\p"
	.string "I can finally make my escape!\p"
	.string "G-gyahaha!\p"
	.string "See you later, suckers!$"

RusturfTunnel_Movement_DevonEscapes:
	walk_faster_down
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
	step_end

 RusturfTunnel_Movement_BfReachesYou:
	walk_up
	walk_left
	walk_left
	face_up
	step_end

RusturfTunnel_Message_HolyMiltank:
	.string "Holy MILTANK, man!\p"
	.string "Did you see how fast that guy ran?\p"
	.string "Guess this weird package was really\n"
	.string "weighing him down.\p"
	.string "Speaking of…\n"
	.string "What even is it?$"


RusturfTunnel_Message_NoClue:
	.string "Yeah, huh, I got no clue.\n"
	.string "You can keep that.\p"
	.string "I'm just glad old PEEKO is safe,\n"
	.string "really.\p"
	.string "I'll bring him back to MR. BRINEY.\n"
	.string "See you there, eh?$"

RusturfTunnel_Movement_GetToPeeko:
	walk_right
	walk_right
	walk_up
	step_end

RusturfTunnel_Movement_BfExitCave:
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
	step_end

RusturfTunnel_Movement_PeekoExitCave:
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
	walk_left
	walk_left
	step_end

RusturfTunnel_EventScript_Grunt2PlayerWalkDown::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWalkDown
	waitmovement 0
	return

RusturfTunnel_Movement_PlayerWalkDown:
	walk_down
	face_right
	step_end


RusturfTunnel_EventScript_Grunt2PlayerWalkUp::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWalkUp
	waitmovement 0
	return

RusturfTunnel_Movement_PlayerWalkUp:
	walk_up
	face_right
	step_end