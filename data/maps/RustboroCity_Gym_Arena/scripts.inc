.set LOCALID_ROXANNE, 1

RustboroCity_Gym_Arena_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_Roxanne2::
	lock
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GoodLuckRoxanne
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_WelcomeRoxanne, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, Common_Movement_FaceLeft
	switch VAR_FACING
	case DIR_NORTH, RustboroCity_Gym_PlayerFacesNorth
	case DIR_EAST, RustboroCity_Gym_PlayerFacesEast
	case DIR_SOUTH, RustboroCity_Gym_PlayerFacesSouth
	case DIR_WEST, RustboroCity_Gym_PlayerFacesWest
	end

RustboroCity_Gym_EventScript_GoodLuckRoxanne::
speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_GoodLuckRoxanne, MSGBOX_NPC
	release
	end

RustboroCity_Gym_PlayerFacesNorth::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesNorth
	goto RustboroCity_Gym_EventScript_StartRoxanneFight
	end


RustboroCity_Gym_PlayerFacesEast::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesEast
	goto RustboroCity_Gym_EventScript_StartRoxanneFight
	end


RustboroCity_Gym_PlayerFacesSouth::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesSouth
	goto RustboroCity_Gym_EventScript_StartRoxanneFight
	end

RustboroCity_Gym_PlayerFacesWest::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesWest
	goto RustboroCity_Gym_EventScript_StartRoxanneFight
	end

RustboroCity_Gym_EventScript_StartRoxanneFight::
	waitmovement 0
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneStart, RustboroCity_Gym_Text_RoxanneDefeated, RustboroCity_Gym_EventScript_RoxannePostBattle
	end
	
	
RustboroCity_Gym_EventScript_RoxannePostBattle::
	lockall
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	setobjectxyperm LOCALID_ROXANNE, 7, 6
	setobjectmovementtype LOCALID_ROXANNE, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_RoxanneWalksLeft
	waitmovement 0
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_DropTheAct, MSGBOX_DEFAULT
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare	
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_StoneBadge, MSGBOX_DEFAULT
	call Common_EventScript_SetGymTrainers
	goto RustboroCity_Gym_EventScript_GivePrizes
	end

RustboroCity_Gym_EventScript_GivePrizes::
	giveitem ITEM_TM_SANDSTORM
	call_if_eq VAR_RESULT, FALSE, RustboroGym_EventScript_BagIsFull
	setflag FLAG_RECEIVED_TM06
	goto RustboroGym_EventScript_PostRoxanneContinue
	end

RustboroGym_EventScript_BagIsFull::
speakername Common_Name_Roxanne
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	releaseall
	end

RustboroGym_EventScript_PostRoxanneContinue::
speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_ExplainSandstorm, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_Movement_PlayerFacesNorth:
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

RustboroCity_Gym_Movement_RoxanneWalksLeft:
	walk_left
	walk_left
	step_end

RustboroCity_Gym_Movement_PlayerFacesEast:
	walk_left
	walk_left
	face_right
	step_end

RustboroCity_Gym_Movement_PlayerFacesWest:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end

RustboroCity_Gym_Movement_PlayerFacesSouth:
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end

RustboroCity_Gym_Text_RoxanneStart:
	.string "Very well then…\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_WelcomeRoxanne:
	.string "Welcome, my dear student.\n"
	.string "I'm very happy to see you.\p"
	.string "Did you enjoy your little lesson?\p"
	.string "Rest assured, that was the boring\n"
	.string "part.\p"
	.string "Now, it's time for a more hands-on\n"
	.string "approach.$"

RustboroCity_Gym_Text_RoxanneDefeated:
	.string "Pff… Ahah!\p"
	.string "It looks like you were the one to\n"
	.string "teach me a lesson!$"


RustboroCity_Gym_Text_DropTheAct:
	.string "I think it's time to drop the\n"
	.string "teacher act now.\p"
	.string "You did great! I haven't had this\n"
	.string "much fun in ages.\p"
	.string "And for that…$"

RustboroCity_Gym_Text_StoneBadge:
	.string "This Stone Badge certifies that\n"
	.string "you have succesfully passed the\l"
	.string "Rustboro City Gym Challenge.\p"
	.string "It's one of the eight Badges you're\n"
	.string "going to need if you want to sign up\l"
	.string "for the Ever Grande Conference.\p"
	.string "Of course, as I explained, that won't\n"
	.string "be the only prize you get.$"


RustboroCity_Gym_Text_ExplainSandstorm:
	.string "Sandstorm is a very powerful tool.\p"
	.string "It can be used, as the name implies,\n"
	.string "to summon a Sandstorm that damages\l"
	.string "any non Rock, Ground or Steel-type\l"
	.string "Pokémon.\p"
	.string "It also increases the Special Defense\n"
	.string "of Rock-type Pokémon.\p"
	.string "Well, that's all!\p"
	.string "Oh, but before you go…\n"
	.string "May I ask for a favor?\p"
	.string "Surely you must have noticed the…\n"
	.string "Distressing state of the city.\p"
	.string "I wish I could do something about it,\n"
	.string "but Devon has too much support in\l"
	.string "Hoenn to be easily opposed.\p"
	.string "But I'm digressing…\p"
	.string "I'd like you to check on the man living\n"
	.string "in the tree in the middle of the city.\p"
	.string "He's been taking things particularly\n"
	.string "bad, and I fear he might try something\l"
	.string "too drastic if left unattended.\p"
	.string "You can show him the badge, and tell him\n"
	.string "that I sent you: he will trust me.\p"
	.string "Thanks in advance, Trainer.$"

RustboroCity_Gym_Text_GoodLuckRoxanne:
	.string "Good luck in your adventure,\n"
	.string "Trainer!$"

