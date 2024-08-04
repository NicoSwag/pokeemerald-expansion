RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Types
	case 1, RustboroCity_PokemonSchool_EventScript_Field_Changes
	case 2, RustboroCity_PokemonSchool_EventScript_Statuses
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Types::
	msgbox RustboroCity_PokemonSchool_Text_ExplainTypes, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Field_Changes::
	msgbox RustboroCity_PokemonSchool_Text_ExplainField_Changes, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Statuses::
	msgbox RustboroCity_PokemonSchool_Text_ExplainStatuses, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Assistant::
	lock
	faceplayer
	goto_if_set FLAG_QUIZ_COMPLETED, RustboroCity_PokemonSchool_EventScript_AssistantAfter
	msgbox RustboroCity_PokemonSchool_Text_Assistant, MSGBOX_DEFAULT
	msgbox RustboroCity_PokemonSchool_Text_Rock, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, RustboroCity_PokemonSchool_EventScript_Assistant_Fail
	msgbox RustboroCity_PokemonSchool_Text_Correct, MSGBOX_DEFAULT
	msgbox RustboroCity_PokemonSchool_Text_Field, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, RustboroCity_PokemonSchool_EventScript_Assistant_Fail
	msgbox RustboroCity_PokemonSchool_Text_Correct, MSGBOX_DEFAULT
	msgbox RustboroCity_PokemonSchool_Text_Paralysis, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, RustboroCity_PokemonSchool_EventScript_Assistant_Fail
	msgbox RustboroCity_PokemonSchool_Text_GotIt, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	setflag FLAG_QUIZ_COMPLETED
	release
	end

RustboroCity_PokemonSchool_EventScript_Assistant_Fail::
	msgbox RustboroCity_PokemonSchool_Text_Wrong, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_AssistantAfter::
	msgbox RustboroCity_PokemonSchool_Text_NewDiscoveries, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_NewDiscoveries:
	.string "It's almost strange how many new things\n"
	.string "we are still discovering about Pokémon…\p"
	.string "Notions we thought certain are being\n"
	.string "called into question.\p"
	.string "That's the scientific method for you.$"


RustboroCity_PokemonSchool_Text_GotIt:
	.string "Correct!\p"
	.string "Looks like you have a good base of\n"
	.string "knowledge.\p"
	.string "Or did you just guess?\p"
	.string "Either way, make sure to review the\n"
	.string "theory if you aren't sure.\p"
	.string "But as promised, here is your prize.$"

RustboroCity_PokemonSchool_Text_Correct:
	.string "Correct!\p"
	.string "Now, the next question.$"

RustboroCity_PokemonSchool_Text_Assistant:
	.string "I have a pop quiz for you.\p"
	.string "Answer all the questions and you'll\n"
	.string "get a reward!\p"
	.string "Well then, let's begin.$"

RustboroCity_PokemonSchool_Text_Rock:
	.string "Is rock weak to ground?$"

RustboroCity_PokemonSchool_Text_Wrong:
	.string "Sorry, you got it wrong.\p"
	.string "Even if you think you know everything,\n"
	.string "there are always many new discoveries.\p"
	.string "That's why I would recommend refreshing\n"
	.string "up a bit on the theory.$"

RustboroCity_PokemonSchool_Text_Field:
	.string "Let's say that, during a battle, you\n"
	.string "switch in your Pelipper with Drizzle.\p"
	.string "Naturally, it will start raining.\p"
	.string "But will it keep raining if you switch it\n"
	.string "out right away?$"

RustboroCity_PokemonSchool_Text_Paralysis:	
	.string "In the absence of other ailments, can a\n"
	.string "paralyzed POKéMON always act?$"

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_DRAGON_FANG
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard lists newly discovered\n"
	.string "information about POKéMON.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainTypes:
	.string "New discoveries in the field:\p"
	.string "BUG hits FAIRY for neutral damage,\n"
	.string "and resists FAIRY and DARK. It's also\l"
	.string "unaffected by confusion.\p"
	.string "PSYCHIC is unaffected by flinching,\n"
	.string "TAUNT, ENCORE and TORMENT.\p"
	.string "NORMAL can only be affected by status\n"
	.string "if applied directly, and not by side\l"
	.string "effects.\p"
	.string "ROCK types take neutral damage from GROUND\n"
	.string "attacks.\p"
	.string "Finally, FIGHTING is completely immune\n"
	.string "to GHOST.\p"  

RustboroCity_PokemonSchool_Text_ExplainField_Changes:
	.string "FIELD EFFECTS: umbrella term coined by\n"
	.string "PROF. BIRCH to refer to any battle-altering\l"
	.string "effect, such as WEATHER or TERRAINS.\p"
	.string "POKéMON can induce a FIELD change\n"
	.string "through moves, in which case the effect\l"
	.string "lasts five to eight turns.\p"
	.string "Some POKéMON are able to provoke such\n"
	.string "such changes with their ABILITY.\p"
	.string "In this case, the alteration will last\n"
	.string "until the timer ends or the POKéMON\l"
	.string "leaves the field for any reason.$"

RustboroCity_PokemonSchool_Text_ExplainStatuses:
	.string "POKéMON in the HOENN region seem to\n"
	.string "have evolved different responses to\l"
	.string "debilitating STATUS conditions.\p"
	.string "Of particular note is that sleeping\n"
	.string "POKéMON heal some of their HP for every\l"
	.string "turn they're asleep.\p"
	.string "PARALYZED POKéMON will move slower, and\n"
	.string "evade attacks less, but will never skip\l"
	.string "turns.$"
	.string "In addition, POKéMON affected by\n"
	.string "FROSTBITE will be able to act, albeit\l"
	.string "losing some of their HP every turn and\l"
	.string "with their SP. ATK halved.$"


RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Students who don't study get a little\n"
	.string "taste of my DRAGON FANG.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "A POKéMON holding the DRAGON FANG\n"
	.string "will have its own DRAGON-TYPE moves\l"
	.string "empowered.\p"
	.string "I found it in the OLDALE RUINS during\n"
	.string "a field trip with my students.\p"
	.string "Too bad the location is closed for visitors.\p"
	.string "At least I got a souvenir I can threaten my\n"
	.string "students with. Ha ha!$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "I'm trading CAPUMON with my friend\n"
	.string "right now.\p"
	.string "Heard of it?\n"
	.string "It's the hot new game!$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "Trade evolutions are so annoying…\n"
	.string "I wish they got rid of them.$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "This school mostly teaches POKEMON\n"
	.string "battling.\p"
	.string "Down in PACIFIDLOG TOWN, they have\n"
	.string "an university where you can learn\l"
	.string "science, or history, or whatever.\p"
	.string "I don't see why you'd wanna do that\n"
	.string "over being a TRAINER, though!$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "This building is the lecture hall of\n"
	.string "the TRAINER SCHOOL.\p"
	.string "Our second location is the POKEMON GYM,\n"
	.string "which acts as a library, museum, and\l"
	.string "battleground all at once.\p"
	.string "Convenient!$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "Argh! I can't focus at all!\n"
	.string "There's too much noise outside!$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"
