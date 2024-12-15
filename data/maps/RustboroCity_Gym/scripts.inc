.set LOCALID_ROXANNE, 1
.set LOCALID_LASS, 4
RustboroCity_Gym_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_OnTransition
map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Gym_OnLoad
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM06, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_OnTransition:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_MoveLass
	goto_if_set FLAG_SAW_ROXANNE_CUTSCENE, RustboroCity_Gym_MoveLassRight
	end

RustboroCity_Gym_OnLoad:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_UnlockDoors
	end


RustboroCity_Gym_TurnPlayerUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	return


RustboroCity_Gym_UnlockDoors::
	setmetatile 5, 23, METATILE_RustboroGym_RealDoorRustboro, FALSE
	special DrawWholeMapView
	end

RustboroCity_Gym_MoveLass::
	setobjectxyperm LOCALID_LASS, 4, 6
	removeobject LOCALID_ROXANNE
	end

RustboroCity_Gym_MoveLassRight::
	removeobject LOCALID_LASS
	removeobject LOCALID_ROXANNE
	addobject LOCALID_LASS
	setobjectxyperm LOCALID_LASS, 9, 9
	end

RustboroCity_Gym_EventScript_Lass::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GoodJob
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_EventScript_GoodLuck
	goto_if_set FLAG_SAW_ROXANNE_CUTSCENE, RustboroCity_Gym_EventScript_GoodLuck
	msgbox RustboroCity_Gym_Text_CanChallengeRoxanne, MSGBOX_NPC
	applymovement LOCALID_LASS, RustboroCity_Gym_Movement_LassWalksUp
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_PlayerWalksUp
	waitmovement 0
	msgbox RustboroCity_Gym_Text_WaitHere, MSGBOX_NPC
	applymovement LOCALID_LASS, RustboroCity_Gym_Movement_LassGoBack
	waitmovement 0
	setobjectxy LOCALID_ROXANNE, 2, 2
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_RoxanneGoesInPlace
	waitmovement 0
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_ClassStarting, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_RoxanneGoesBlackBoard
	waitmovement 0
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_GymBattles, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_RoxanneWalksRight
	waitmovement 0
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_DifferentChallenges, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_ReturnToDesk
	waitmovement 0
	speakername Common_Name_Roxanne
	msgbox RustboroCity_Gym_Text_SeeMeAfterClass, MSGBOX_NPC
	applymovement LOCALID_ROXANNE, RustboroCity_Gym_Movement_GoAway
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_ROXANNE
	setobjectxyperm LOCALID_LASS, 9, 9
	setobjectmovementtype LOCALID_LASS, MOVEMENT_TYPE_FACE_LEFT
	setflag FLAG_SAW_ROXANNE_CUTSCENE
	setflag FLAG_TEMP_1
	release
	end

RustboroCity_Gym_EventScript_GoodJob::
	msgbox RustboroCity_Gym_Text_GoodJob, MSGBOX_NPC
	release
	end

RustboroCity_Gym_EventScript_LassMovesAway::
	msgbox RustboroCity_Gym_Text_LassMovingAway, MSGBOX_NPC
	setflag FLAG_TEMP_1
	applymovement LOCALID_LASS, RustboroCity_Gym_Movement_LassGoesAway
	waitmovement 0
	release
	end

RustboroCity_Gym_EventScript_GoodLuck::
	msgbox RustboroCity_Gym_Text_GoodLuck, MSGBOX_NPC
	release
	end

RustboroCity_Gym_EventScript_DefeatAll::
	msgbox RustboroCity_Gym_Text_DefeatAllTrainers, MSGBOX_NPC
	release
	end

RustboroCity_Gym_Text_LassMovingAway:
	.string "Hi! I'm the Gym Leader's assistant.\p"
	.string "Miss Roxanne will be seeing you soon.\p"
	.string "This way, if you please.$"

RustboroCity_Gym_Text_GoodJob:
	.string "Outstanding work!\p"
	.string "I knew you could do it!$"

RustboroCity_Gym_Text_DefeatAllTrainers:
	.string "Hi! I'm ROXANNE's assistant.\p"
	.string "To challenge ROXANNE, first you'll\n"
	.string "have to defeat all of the TRAINERS\l"
	.string "in this GYM without leaving.\p"
	.string "That's the rule!$"

RustboroCity_Gym_Text_CanChallengeRoxanne:
	.string "Hi! I'm Roxanne's assistant.\p"
	.string "Roxanne will be here shortly.\n"
	.string "Come with me!$"

RustboroCity_Gym_Text_WaitHere:
	.string "Now wait here, please.$"

Common_Name_Roxanne:
	.string "Roxanne$"

RustboroCity_Gym_Text_ClassStarting:
	.string "Good day, class!\p"
	.string "Today we'll be covering…\n"
	.string "Gym challenges!$"

RustboroCity_Gym_Text_GymBattles:
	.string "Gym challenges are special\n"
	.string "battles designed by Gym Leaders.\p"
	.string "Their purpose is to push Trainers\n"
	.string "to improve themselves, and verify\n"
	.string "that they are up to standards.$"

RustboroCity_Gym_Text_DifferentChallenges:
	.string "Each Gym Leaders usually\n"
	.string "specializes in a single type,\l"
	.string "but Trainers must be prepared\l"
	.string "to face unexpected matchups.$"

RustboroCity_Gym_Text_SeeMeAfterClass:
	.string "Finally, the reward for passing\n"
	.string "a Gym challenge is a cash prize,\l"
	.string "a Technical Machine, and a badge\p"
	.string "Did you get all of that?\n"
	.string "Well, either way…\p"
	.string "I'll be expecting you after class.$"

RustboroCity_Gym_Text_GoodLuck:
	.string "Good luck!$"

RustboroCity_Gym_Movement_LassGoesAway:
	walk_right
	walk_right
	face_left
	step_end

RustboroCity_Gym_Movement_LassWalksUp:
	walk_up
	walk_up
	walk_up
	walk_up
	face_left
	step_end

RustboroCity_Gym_Movement_PlayerWalksUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	face_up
	step_end

RustboroCity_Gym_Movement_LassGoBack:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_left
	delay_16
	step_end

RustboroCity_Gym_Movement_RoxanneGoesInPlace:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	delay_16
	step_end

RustboroCity_Gym_Movement_RoxanneGoesBlackBoard:
	walk_left
	face_up
	step_end

RustboroCity_Gym_Movement_RoxanneWalksRight:
	walk_right
	walk_right
	walk_right
	face_down
	step_end

RustboroCity_Gym_Movement_ReturnToDesk:
	walk_left
	walk_left
	walk_left
	face_down
	step_end

RustboroCity_Gym_Movement_GoAway:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_SANDSTORM
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM06
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end



RustboroCity_Gym_EventScript_Marc::
	speakername Common_Name_Roxanne
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
	.string "Well met, young trainer!\n"
	.string "If you hope to challenge the Ever\l"
	.string "Grande Conference, you better heed my\l"
	.string "advice.\p"
	.string "It's your goal as a Trainer to collect\n"
	.string "Gym Badges, am I right?\p"
	.string "But Gym Leaders aren't pushovers!\p"
	.string "And that's where I come in.\n"
	.string "I'm here to provide expert advice!\p"
	.string "Gyms challenges are gauntlet designed to\n"
	.string "certify the skill level of Trainers.\p"
	.string "Once you go enter, there is no way out\n"
	.string "until you defeat the Gym Leader.\p"
	.string "So make sure to bring your best team!\p"
	.string "Each fight is designed to test your\n"
	.string "skill and knowledge.\p"
	.string "Therefore, even regular Trainers will\n"
	.string "provide much more of a challenge.\p"
	.string "Keep in mind that the usage of items\n"
	.string "from the bag during battle is forbidden.\p"
	.string "However, your team gets healed after\n"
	.string "each fight, so feel free to go all out.\p"
	.string "Now, about the Gym Leader.\p"
	.string "Roxanne is a user of Rock-type\n"
	.string "Pokémon.\p"
	.string "The Rock type is very durable, but\n"
	.string "it can't stand Water-type and\l"
	.string "Grass-type moves.\p"
	.string "Well, that's all.\n"
	.string "Go for it!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
	.string "Whoa! What a breathtaking victory!\n"
	.string "I knew you could do it!\p"
	.string "Check your Trainer Card.\p"
	.string "The Stone Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to glory!$"

RustboroCity_Gym_Text_JoshIntro:
	.string "Don't take us Gym Trainers lightly!\n"
	.string "I'll show you why we're better!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "You were too good for me…$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "Roxanne uses four different\n"
	.string "Pokémon, so you better be ready!$"

RustboroCity_Gym_Text_TommyIntro:
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "Wow! You've got some potential!$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Watch out for Roxanne's fearsome\n"
	.string "Sandstorm.\p"
	.string "If you aren't prepared, her Onix\n"
	.string "will crush you with overwhelming\l"
	.string "speed and power!$"

RustboroCity_Gym_Text_MarcIntro:
	.string "We might be in the middle of a museum,\n"
	.string "but so what?\p"
	.string "My Rock Pokémon need room to\n"
	.string "rampage!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "A hint to defeat Roxanne?\n"
	.string "Sure, you've earned it.\p"
	.string "Roxanne leads with Anorith and\n"
	.string "Lileep.\p"
	.string "Those are a Grass type and a Steel\n"
	.string "type.\p"
	.string "If you need a refresher on types,\n"
	.string "you should go to Rustboro's Trainer\l"
	.string "School.$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "Hello, I am Roxanne, the Rustboro\n"
	.string "POKéMON GYM LEADER.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The POKéMON LEAGUE's rules state\n"
	.string "that TRAINERS are to be given this\l"
	.string "if they defeat a GYM LEADER.\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE STONE BADGE.$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "The STONE BADGE heightens the ATTACK\n"
	.string "power of your POKéMON.\p"
	.string "It also enables them to use the HM move\n"
	.string "CUT outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_GymStatue:
	.string "RUSTBORO CITY POKéMON GYM$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string "RUSTBORO CITY POKéMON GYM$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
