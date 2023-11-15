.set LOCALID_GRUNT, 3
.set LOCALID_DEVON_EMPLOYEE, 4
.set LOCALID_LOOKER, 14

PetalburgWoods_MapScripts::
	.byte 0

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonLooksDown
	waitmovement 0
	msgbox PetalburgWoods_Text_DealIsOff, MSGBOX_DEFAULT
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonEscapes
	waitmovement 0
	removeobject LOCALID_DEVON_EMPLOYEE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_GruntFacesPlayerLeft
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_GruntLeaves
	waitmovement 0
	removeobject LOCALID_GRUNT
	addobject LOCALID_LOOKER
	setobjectxy LOCALID_LOOKER, 25, 29
	special DrawWholeMapView
	waitmovement 0
	applymovement LOCALID_LOOKER, PetalburgWoods_Movement_LookerGoesUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox PetalburgWoods_Text_LookerLate, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox PetalburgWoods_Text_LookerFarewell, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LOOKER, PetalburgWoods_Movement_LookerByeLeft
	waitmovement 0
	removeobject LOCALID_LOOKER
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_EventScript_DevonResearcherRight::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonLooksDown
	waitmovement 0
	msgbox PetalburgWoods_Text_DealIsOff, MSGBOX_DEFAULT
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonEscapes
	waitmovement 0
	removeobject LOCALID_DEVON_EMPLOYEE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_GruntFacesPlayerRight
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_GruntLeaves
	waitmovement 0
	removeobject LOCALID_GRUNT
	addobject LOCALID_LOOKER
	setobjectxy LOCALID_LOOKER, 26, 29
	special DrawWholeMapView
	waitmovement 0
	applymovement LOCALID_LOOKER, PetalburgWoods_Movement_LookerGoesUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox PetalburgWoods_Text_LookerLate, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox PetalburgWoods_Text_LookerFarewell, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LOOKER, PetalburgWoods_Movement_LookerByeRight
	waitmovement 0
	removeobject LOCALID_LOOKER
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_DevonResearcherPostBattle::
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
	waitmovement 0
	removeobject LOCALID_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_BagFull::
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_DevonResearcherFinish::
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
	waitmovement 0
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_RemoveDevonResearcher::
	removeobject LOCALID_DEVON_EMPLOYEE
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_right
	delay_16
	face_left
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherExitLeft:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PetalburgWoods_Movement_GruntFacesPlayerLeft:
	walk_left
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_GruntFacesPlayerRight:
	walk_down
	walk_down
	step_end


PetalburgWoods_Movement_DevonResearcherExitRight:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_WatchResearcherLeave:
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_LookerGoesUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
	walk_fast_down
	walk_fast_right
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherStartExit:
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_DevonLooksDown:
	emote_exclamation_mark
	delay_16
	walk_in_place_faster_down
	delay_16
	step_end


PetalburgWoods_Movement_DevonEscapes:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgWoods_Movement_AquaBackOff:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_AquaRunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachResearcherRight:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaEntrance:
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachPlayer:
	walk_down
	step_end

PetalburgWoods_Movement_GruntLeaves:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

 PetalburgWoods_Movement_LookerByeLeft:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end


 PetalburgWoods_Movement_LookerByeRight:
 	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgWoods_EventScript_Boy1::
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Boy2::
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_NotAOneToBeFound:
	.string "DEVON RESEARCHER: Hmmm…\n"
	.string "Sh-she's late…$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "Hello, have you seen any POKéMON\n"
	.string "called SHROOMISH around here?\p"
	.string "I really love that POKéMON.$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
	.string "SHELLY: Yo, guy.\p"
	.string "As promised, you got me the\n"
	.string "GOODS, right?\p"
	.string "DEVON RESEARCHER: O-o-of\n"
	.string "course! And I made sure to not\l"
	.string "be followed!\p"
	.string "SHELLY: Oh yeah? Who's that\n"
	.string "behind you, then?$"

PetalburgWoods_Text_DealIsOff:
	.string "DEVON RESEARCHER: W-w-we've\n"
	.string "been caught!\p"
	.string "I'm sorry, but the deal is off!$"


PetalburgWoods_Text_HandOverThosePapers:
	.string "SHELLY: You!\p"
	.string "Thanks to you, that guy's run\n"
	.string "off with the GOODS!\p"
	.string "Do you even have any idea of who\n"
	.string "you're messing with?\p"
	.string "Prepare to feel the wrath of\n"
	.string "TEAM AQUA's second-in-command!$"

PetalburgWoods_Text_YouHaveToHelpMe:
	.string "SHELLY: Listen!\p"
	.string "You only got off easy because\n"
	.string "I wasn't expecting any fight!\p"
	.string "Next time we meet, you'll get it!\p"
	.string "And you better forget about what you\n"
	.string "you saw, or else!$"

PetalburgWoods_Text_LookerLate:
	.string "LOOKER: At long last, I arrive!\p"
	.string "Pardon the lateness, my friend,\n"
	.string "but finally we are ready to catch\l"
	.string "some criminals!\p"
	.string "… … … …\p"
	.string "Whaaaaaaat?\n"
	.string "You say that you already dealt with\l"
	.string "the situation?\p"
	.string "And that, additionally, a man wearing\n"
	.string "a suit was attempting to bestow a\l"
	.string "package to a member of TEAM AQUA?\p"
	.string "Hmm…\p"
	.string "I must say, my friend, those are some\n"
	.string "big clues that you have unconvered!\p"
	.string "We already knew of TEAM AQUA, as well as\n"
	.string "TEAM MAGMA, of course, but a mysterious\l"
	.string "third party?\p"
	.string "And that is to say, what if there were a\n"
	.string "secret fourth party? Or a fifth…?\p"
	.string "No, my friend, this is not good! We must\n"
	.string "investigate, as quickly as we can!\p"
	.string "Oh, but first…\p"
	.string "To thank you for your outstanding work,\n"
	.string "I have another gift for you.\p"
	.string "It is another one of those so-called\n"
	.string "TRAINER items.\p"
	.string "Yes, it is an EXP. SHARE.\p"
	.string "As I am told, it is used to distribute\n"
	.string "EXPERIENCE evenly amongst POKéMON.\l"
	.string "Of course, I have no use of it.\p"
	.string "Then, will you be taking it?$"

PetalburgWoods_Text_LookerFarewell:
	.string "Now, my friend, we must go quickly.\p"
	.string "I shall try to find out the location\n"
	.string "of our mysterious third party.\p"
	.string "The operation might take some time,\n"
	.string "however…\p"
	.string "Ah, while I am asking around for leads,\n"
	.string "why not challenge the GYM LEADER of\l"
	.string "RUSTBORO CITY?\p"
	.string "That way, you will look like an ordinary\n"
	.string "TRAINER instead of an assistant of the\l"
	.string "world-famous detective LOOKER!\p"
	.string "Well then, a plan it is!\n"
	.string "I will see you later!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
	.string "Hunh? What do you think you're doing?\n"
	.string "What, you're going to protect him?\p"
	.string "No one who crosses TEAM AQUA\n"
	.string "gets any mercy, not even a kid!\p"
	.string "Come on and battle me!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "I should've brought my main\n"
	.string "team…$"

PetalburgWoods_Text_YouveGotSomeNerve:
	.string "Grrr… You've got some nerve\n"
	.string "meddling with TEAM AQUA!\l"
	.string "Come on and battle me again!\p"
	.string "I wish I could say that, but I'm out of\n"
	.string "POKéMON…\p"
	.string "And, hey, we of TEAM AQUA are also\n"
	.string "after something in RUSTBORO.\p"
	.string "I'll let you go today!$"

PetalburgWoods_Text_ThatWasAwfullyClose:
	.string "Whew…\n"
	.string "That was awfully close!\p"
	.string "Thanks to you, he didn't rob me of\n"
	.string "these important papers.\p"
	.string "I know, I'll give you a GREAT BALL as\n"
	.string "my thanks!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
	.string "Didn't that TEAM AQUA thug say\n"
	.string "they were after something in\l"
	.string "RUSTBORO, too?$"

PetalburgWoods_Text_ICantBeWastingTime:
	.string "Uh-oh! It's a crisis!\n"
	.string "I can't be wasting time!$"

PetalburgWoods_Text_YoureLoadedWithItems:
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

PetalburgWoods_Text_ICouldntWin:
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "What? Crabs are totally bugs.$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "What? CORPHISH isn't a crab?\n"
	.string "You're right, my bad.\l"
	.string "It's a lobster.$"

PetalburgWoods_Text_IWantRematch1:
	.string "I want a rematch when my BUG\n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_IWantRematch2:
	.string "I want a rematch when my BUG \n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "My BUG POKéMON have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "You get to be popular if you have\n"
	.string "strong POKéMON, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "The fantastic FEEBAS PRO SHOP PRISM\n"
	.string "has just opened!\p"
	.string "Find us north of PETALBURG WOODS.$"
