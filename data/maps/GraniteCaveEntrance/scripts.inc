.set LOCALID_BRAWLY, 5
.set LOCALID_MAGMA, 12
.set LOCALID_MINER_LEFT, 13
.set LOCALID_MINER_RIGHT, 14
.set LOCALID_CLOBBOPUS, 10
.set LOCALID_POOCHYENA, 11
.set LOCALID_WALLY, 15
.set LOCALID_RIVAL, 21

GraniteCaveEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCaveEntrance_MapScripts_OnTransition
	.byte 0

GraniteCaveEntrance_MapScripts_OnTransition:
	goto_if_eq VAR_ROUTE106_STATE, 1, Route106_EventScript_MoveEveryone
	end 



Route106_EventScript_MoveEveryone::
	setobjectxyperm LOCALID_MINER_LEFT, 23, 11
	setobjectxyperm LOCALID_MAGMA, 24, 11
	setobjectxyperm LOCALID_MINER_RIGHT, 25, 11
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
	msgbox Route106_Text_Wally, MSGBOX_NPC
	speakername Common_Name_Wally
	trainerbattle_no_intro TRAINER_WALLY_2, Route106_Text_WallyDefeat
	speakername Common_Name_Wally
	msgbox Route106_Text_DontUnderstand, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_WALLY, Route106_Movement_WalkDown2Normal
	clearflag FLAG_HIDE_GRANITE_RIVAL
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, Route106_Movement_WalkUp3Fast
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Route106_Movement_LetWallyPass
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_WALLY_106
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route106_Text_WhoWasThat, MSGBOX_NPC
	applymovement LOCALID_RIVAL, Route106_Movement_RunAfterWally
	waitmovement 0
	removeobject LOCALID_RIVAL
	setflag FLAG_HIDE_GRANITE_RIVAL
	release
	end


Route106_Movement_WalkDown2Normal:
	walk_down
	walk_down
	step_end

Route106_Movement_WalkUp3Fast:
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
	.string "Use Karate Chop!$"


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
	.string "So now a bunch of Team Magma goons\n"
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
	.string "You're here too, huh…\p"
	.string "I've-\n"
	.string "Cough…\p"
	.string "I've trained since the last time\n"
	.string "we battled, {PLAYER}…\p"
	.string "I know you're busy, but we need to\n"
	.string "have a battle, right now!\p"
	.string "I'll beat you this time!\n"
	.string "I will!$"

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
	msgbox Route106_Text_MineLivelihood, MSGBOX_NPC
	end

Route106_EventScript_MinerLeft::
	msgbox Route106_Text_MinerLeft, MSGBOX_NPC
	end

Route106_EventScript_MinerRight::
	msgbox Route106_Text_MinerRight, MSGBOX_NPC
	end

Route106_EventScript_MinerMiddle::
	msgbox Route106_Text_MinerMiddle, MSGBOX_NPC
	end

Route106_EventScript_MinerBottom::
	msgbox Route106_Text_MinerBottom, MSGBOX_NPC
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
	.string "If they wanted to steal the emeralds,\n"
	.string "wouldn't it have been easier to attack\l"
	.string "the forge?\p"
	.string "…Eh, what do I know about crime anyway.$"


Route106_Text_MinerLeft:
	.string "…What an annoyance.$"


Route106_Text_MinerRight:
	.string "I'm not a Trainer, but I can still\n"
	.string "hold my own.\p"
	.string "No one will steal the mine from us\n"
	.string "on my watch.$"


Route106_Text_MinerMiddle:
	.string "Most of us aren't Trainers.\p"
	.string "Those that are got sent to the north\n"
	.string "to watch out for Team Magma.\p"
	.string "But you saw how it ended up.$"


Route106_Text_MinerBottom:
	.string "I saw a Trainer rush into the mine\n"
	.string "earlier.\p"
	.string "I tried to stop them, but they didn't\n"
	.string "even turn around.\p"
	.string "I hope they're ok.$"


Route106_Text_Magma:
	.string "Unhand me, you criminals!\n"
	.string "I have done nothing wrong!$"


Route106_Text_MinerGate:
	.string "There's a minecart you can take\n"
	.string "to go back to Dewford.\p"
	.string "Right now it's out of commission,\n"
	.string "though.$"


Route106_Text_MinerHouse:
	.string "Feel free to rest up inside,\n"
	.string "if you need it.$"

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


Common_Name_Brawly:
	.string "Brawly$"


Route106_Text_WhoWasThat:
	.string "Hey, {PLAYER}, wasn't that…\n"
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
	.string "Leader but…\p"
	.string "Having a friendly sparring match with\n"
	.string "that Wally sounds more fun.\p"
	.string "You know, to teach him the ropes!\p"
	.string "Oh, but don't worry!\n"
	.string "I won't beat him too hard.\p"
	.string "Well, I better run after him before he\n"
	.string "decides to run off the island.\p"
	.string "See ya around!$"


Route106_Movement_RunAfterWally:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end