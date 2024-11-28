.set LOCALID_BRAWLY, 1


DewfordTown_GymArena_MapScripts::
	.byte 0

Dewford_Gym_EventScript_Brawly::
	lock
	speakername Common_Name_Brawly
	goto_if_set FLAG_BADGE02_GET, Dewford_Gym_EventScript_GoodLuckBrawly
	speakername Common_Name_Brawly
	msgbox Dewford_Gym_Text_WelcomeBrawly, MSGBOX_NPC
	applymovement LOCALID_BRAWLY, Common_Movement_FaceLeft
	switch VAR_FACING
	case DIR_NORTH, Dewford_Gym_PlayerFacesNorth
	case DIR_EAST, Dewford_Gym_PlayerFacesEast
	case DIR_SOUTH, Dewford_Gym_PlayerFacesSouth
	case DIR_WEST, Dewford_Gym_PlayerFacesWest
	end

Dewford_Gym_EventScript_GoodLuckBrawly::
speakername Common_Name_Brawly
	msgbox Dewford_Gym_Text_GoodLuckBrawly, MSGBOX_NPC
	release
	end

Dewford_Gym_PlayerFacesNorth::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesNorth
	goto Dewford_Gym_EventScript_StartBrawlyFight
	end


Dewford_Gym_PlayerFacesEast::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesEast
	goto Dewford_Gym_EventScript_StartBrawlyFight
	end


Dewford_Gym_PlayerFacesSouth::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesSouth
	goto Dewford_Gym_EventScript_StartBrawlyFight
	end

Dewford_Gym_PlayerFacesWest::
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerFacesWest
	goto Dewford_Gym_EventScript_StartBrawlyFight
	end

Dewford_Gym_EventScript_StartBrawlyFight::
	waitmovement 0
	trainerbattle_single TRAINER_BRAWLY_1, Dewford_Gym_Text_BrawlyStart, Dewfordy_Gym_Text_BrawlyDefeated, Dewford_Gym_EventScript_BrawlyPostBattle
	end
	
	
Dewford_Gym_EventScript_BrawlyPostBattle::
	lockall
	setvar VAR_0x8008, 2
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	setobjectxyperm LOCALID_BRAWLY, 7, 6
	setobjectmovementtype LOCALID_BRAWLY, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_BRAWLY, RustboroCity_Gym_Movement_RoxanneWalksLeft
	waitmovement 0
	speakername Common_Name_Brawly
	msgbox Dewford_Gym_Text_Congratulations, MSGBOX_DEFAULT
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare	
	speakername Common_Name_Brawly
	msgbox DewfordTown_Gym_Text_KnuckleBadge, MSGBOX_DEFAULT
	call Common_EventScript_SetGymTrainers
	goto Dewford_Gym_EventScript_GivePrizes
	end

Dewford_Gym_EventScript_GivePrizes::
	giveitem ITEM_TM_REVERSAL
	setflag FLAG_RECEIVED_TM08
	goto Dewford_EventScript_PostBrawlyContinue
	end


Dewford_EventScript_PostBrawlyContinue::
speakername Common_Name_Brawly
	msgbox Dewford_Gym_Text_ExplainTm, MSGBOX_DEFAULT
	releaseall
	end


Dewford_Gym_Text_BrawlyStart:
	.string "Do you have the strength to defeat\n"
	.string "me as well?$"

Dewford_Gym_Text_WelcomeBrawly:
	.string "Hey, it's you!\n"
	.string "It's great to see you here!\p"
	.string "What you did at the mine…\n"
	.string "Man, that was great!\l"
	.string "We're all in your debt, now!\p"
	.string "And what's a better way to repay a debt\n"
	.string "than a blood-pumping fight?\p"
	.string "Very well, then!\n"
	.string "Let me properly introduce myself.\p"
	.string "Name's Brawly!\n"
	.string "Extreme sports enthusiast, and fighting-type\n"
	.string "specialist!\p"
	.string "To get here, you had to climb to the very top!\n"
	.string "But…$"

Dewfordy_Gym_Text_BrawlyDefeated:
	.string "Whoa, wow!\p"
	.string "That was even better than expected!$"


Dewford_Gym_Text_Congratulations:
	.string "You've really got me!\n"
	.string "I haven't had this much fun in ages!\p"
	.string "Not even rock-climbing is as much of a\n"
	.string "thrill as Pokémon battles, would you agree?\p"
	.string "…Yeah, you get me! I know you do!\n"
	.string "Here, take this badge!$"

DewfordTown_Gym_Text_KnuckleBadge:
	.string "Here, this Knuckle Badge certifies\n"
	.string "your victory against me, fair and square!\p"
	.string "That's your second one, isn't it?\p"
	.string "You still have a ways to go, but you're\n"
	.string "doing great!\p"
	.string "You'll get to Ever Grande in no time!\p"
	.string "Oh, and take this too!$"


Dewford_Gym_Text_ExplainTm:
	.string "This TM contains Reversal.\p"
	.string "It's a pretty nifty move!\p"
	.string "Basically, the less health your Pokémon\n"
	.string "has, the more damage it deals.\p"
	.string "Risk-reward, see? Just how I like it!\p"
	.string "Well! I believe we're done here!\p"
	.string "{PLAYER}. thanks again for the fight!\p"
	.string "Hopefully we can catch each other around.\n"
	.string "But either way…/l"
	.string "I'm rooting for you!$"

Dewford_Gym_Text_GoodLuckBrawly:
	.string "Go out there and rock them!\n"
	.string "I know you can do it!$"

