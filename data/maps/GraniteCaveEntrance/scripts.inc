.set LOCALID_BRAWLY, 5
.set LOCALID_MAGMA, 12
.set LOCALID_MINER_LEFT, 13
.set LOCALID_MINER_RIGHT, 14
.set LOCALID_CLOBBOPUS, 10
.set LOCALID_POOCHYENA, 11

GraniteCaveEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCaveEntrance_MapScripts_OnTransition
	.byte 0

GraniteCaveEntrance_MapScripts_OnTransition:
	goto_if_eq VAR_ROUTE106_STATE, 1, Route106_EventScript_MoveEveryone
	end 



Route106_EventScript_MoveEveryone::
	setobjectxyperm LOCALID_MINER_LEFT, 23, 11
	setobjectxyperm LOCALID_MAGMA, 24, 11
	setobjectxyperm LOCALID_MINER_LEFT, 25, 11
	setobjectmovementtype LOCALID_MINER_LEFT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MINER_RIGHT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_GRUNT, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm LOCALID_BRAWLY, 9, 16
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_FACE_LEFT
	end


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
	removeobject LOCALID_MAGMA
	addobject LOCALID_MAGMA
	removeobject LOCALID_MINER_LEFT
	addobject LOCALID_MINER_LEFT
	removeobject LOCALID_MINER_RIGHT
	addobject LOCALID_MINER_RIGHT
	setobjectxyperm LOCALID_MINER_LEFT, 23, 11
	setobjectxyperm LOCALID_MAGMA, 24, 11
	setobjectxyperm LOCALID_MINER_LEFT, 25, 11
	setobjectmovementtype LOCALID_MINER_LEFT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MINER_RIGHT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_GRUNT, MOVEMENT_TYPE_FACE_DOWN
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
	msgbox Route106_Text_Brawly, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BRAWLY, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_BRAWLY
	addobject LOCALID_BRAWLY
	setobjectxyperm LOCALID_BRAWLY, 9, 16
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_FACE_LEFT
	special DrawWholeMapView
	setvar VAR_ROUTE106_STATE, 1
	release
	end



Route106_Text_GoClobbopus:
	.string "???: Go, Clobbopus!\n"
	.string "Use Karate Chop!$"


Route106_Text_NoMyPokemon:
	.string "GRUNT: No!\n"
	.string "My Pokémon!$"


Route106_Text_GetHim:
	.string "???: Get him, guys!$"

Route106_Text_FilthyHands:
	.string "Grunt: N-no!\n"
	.string "Get your filthy hands off me!$"

Route106_Text_Whew:
	.string "…Whew.$"


Route106_Text_Brawly:
	.string "Hey! Who are you?\p"
	.string "…Ah! A Trainer?\n"
	.string "You came at the right time!\p"
	.string "Name's Brawly.\p"
	.string "Three times rock climbing champion.\n"
	.string "Back to back, I might add.\p"
	.string "…Also, I'm Dewford's Gym Leader.\p"
	.string "We received a tip a while back that\n"
	.string "Team Magma was gonna try and seize\l"
	.string "our mines.\p"
	.string "So we guarded the way there!\n"
	.string "But, huh…\p"
	.string "They got here from the sea.\p"
	.string "Hard to see that one coming, to be\n"
	.string "fair.\p"
	.string "So now a bunch of Team Magma goons\n"
	.string "are partying it up in the mines.\p"
	.string "To make matters worse, I've been\n"
	.string "told that someone entered the mines\l"
	.string "right before they were attacked.\p"
	.string "As you can see, I need to stay here\n"
	.string "to make sure that no one else tries to\l"
	.string "sneak in.\p"
	.string "But you could help check out the\n"
	.string "situation  inside, right?\p"
	.string "Consider it an extended Gym challenge.\p"
	.string "…Well then! I'm counting on you.$"

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