.set LOCALID_ROXANNE, 1

RustboroCity_Gym_Arena_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_Roxanne2::
	lock
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GoodLuckRoxanne
	msgbox RustboroCity_Gym_Text_WelcomeRoxanne, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, Common_Movement_FaceLeft
	switch VAR_FACING
	case DIR_NORTH, RustboroCity_Gym_PlayerFacesNorth
	case DIR_EAST, RustboroCity_Gym_PlayerFacesEast
	case DIR_SOUTH, RustboroCity_Gym_PlayerFacesSouth
	case DIR_WEST, RustboroCity_Gym_PlayerFacesWest
	end

RustboroCity_Gym_EventScript_GoodLuckRoxanne::
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
	msgbox RustboroCity_Gym_Text_DropTheAct, MSGBOX_DEFAULT
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare	
	msgbox RustboroCity_Gym_Text_StoneBadge, MSGBOX_DEFAULT
	call Common_EventScript_SetGymTrainers
	goto RustboroCity_Gym_EventScript_GiveVitamins
	end

RustboroCity_Gym_EventScript_GiveVitamins::
	
	playfanfare MUS_OBTAIN_ITEM
	msgbox RustboroCity_Gym_Text_Vitamins, MSGBOX_DEFAULT
	waitfanfare
	msgbox RustboroCity_Gym_Text_ExplainVitamins, MSGBOX_DEFAULT
	giveitem ITEM_TM_SANDSTORM
	call_if_eq VAR_RESULT, FALSE, RustboroGym_EventScript_BagIsFull
	setflag FLAG_RECEIVED_TM06
	goto RustboroGym_EventScript_PostRoxanneContinue
	hideitemdesc
	end

RustboroGym_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	releaseall
	end

RustboroGym_EventScript_PostRoxanneContinue::
	hideitemdesc
	msgbox RustboroCity_Gym_Text_ExplainSandstorm, MSGBOX_DEFAULT
	additem ITEM_HP_UP, 2
	additem ITEM_PROTEIN, 2
	additem ITEM_IRON, 2
	additem ITEM_CALCIUM, 2
	additem ITEM_ZINC, 2
	additem ITEM_CARBOS,2
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
	.string "battle, and with which POKéMON?$"

RustboroCity_Gym_Text_WelcomeRoxanne:
	.string "ROXANNE: Welcome, my dear student.\n"
	.string "I'm very happy to see you.\p"
	.string "Did you enjoy your little lesson\n"
	.string "from earlier?\p"
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
	.string "much fun in a while during a battle.\p"
	.string "And for that…$"

RustboroCity_Gym_Text_StoneBadge:
	.string "This STONE BADGE certifies that\n"
	.string "you have succesfully passed the\l"
	.string "RUSTBORO CITY GYM CHALLENGE.\p"
	.string "It's one of the eight BADGES you're\n"
	.string "going to need if you want to sign up\l"
	.string "for the EVER GRANDE CONFERENCE.\p"
	.string "Of course, as I explained, that won't\n"
	.string "be the only prize you get.\p"
	.string "First off: VITAMINS!$"

RustboroCity_Gym_Text_ExplainVitamins:
	.string "VITAMINS are items you can give\n"
	.string "your POKéMON to increase their\l"
	.string "STATS.\p"
	.string "For example, giving a PROTEIN to\n"
	.string "a POKéMON will increase their ATTACK.\p"
	.string "Of course, there are some limits to\n"
	.string "how much a POKéMON can grow.\p"
	.string "VITAMINS are pretty hard to come by,\n"
	.string "so make sure to use them strategically!\p"
	.string "And now, for your next prize…$"

RustboroCity_Gym_Text_ExplainSandstorm:
	.string "SANDSTORM is a very powerful tool.\p"
	.string "It can be used, as the name implies,\n"
	.string "to summon a SANDSTORM that damages\l"
	.string "any non ROCK, GROUND or STEEL-type\l"
	.string "POKéMON.\p"
	.string "It also increases the defenses of\n"
	.string "ROCK-type POKéMON.\p"
	.string "Oh, before you go…\n"
	.string "May I ask for a favor?\p"
	.string "I'm sure you have noticed the…\n"
	.string "Distressing state of the city.\p"
	.string "I wish I could do something about it,\n"
	.string "but DEVON has too much support in\n"
	.string "HOENN to be easily stopped.\p"
	.string "If we want to do something, we must act\n"
	.string "cautiously to avoid a big scandal.\p"
	.string "But I'm digressing…\p"
	.string "I'd like you to check on the man living\n"
	.string "in the tree in the middle of the city.\p"
	.string "He's been taking things particularly bad,\n"
	.string "and I fear he might try something drastic\l"
	.string "if left unattended.\p"
	.string "You can show him the badge, and tell him\n"
	.string "that I sent you: he will trust me.\p"
	.string "Thanks in advance, TRAINER.$"
	.string "ROXANNE: Good luck in your adventure,\n"
	.string "TRAINER!$"

RustboroCity_Gym_Text_GoodLuckRoxanne:
	.string "Good luck in your adventure,\n"
	.string "TRAINER!$"
RustboroCity_Gym_Text_Vitamins:
	.string "Received VITAMINS!$"
