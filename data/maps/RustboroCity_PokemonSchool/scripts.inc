RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	msgbox RustboroCity_PokemonSchool_Text_Blackboard, MSGBOX_DEFAULT
	closemessage
	end


RustboroCity_PokemonSchool_Text_Blackboard:
	.string "The writing is unintelligible.\p"
	.string "Maybe you should ask someone for notes.$"


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
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end
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
	.string "Things we thought were certain are being\n"
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
	.string "switch in your Pelipper with the\l"
	.string "Drizzle ability.\p"
	.string "Naturally, it will start raining.\p"
	.string "But will it keep raining if you switch the\n"
	.string "Pelipper out?$"

RustboroCity_PokemonSchool_Text_Paralysis:	
	.string "In the absence of other ailments, can a\n"
	.string "paralyzed Pokémon always act?$"

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
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
	.string "The notes list newly discovered\n"
	.string "information about Pokémon.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainTypes:
	.string "New discoveries in the field:\p"
	.string "Bug hits Fairy for neutral damage,\n"
	.string "and resists Fairy and Dark. It's also\l"
	.string "unaffected by confusion.\p"
	.string "Psychic is unaffected by flinching.\p"
	.string "Normal types are only be affected by\n"
	.string "status if applied directly, and not by\l"
	.string "side effects.\p"
	.string "Rock types take neutral damage from\n"
	.string "ground attacks, and resist other Rock.\p"
	.string "Dragon types resist Fairy.\p"
	.string "Ice resists Water and Flying.\p"
	.string "Finally, Fighting is completely immune\n"
	.string "to Ghost, and is unaffected by Taunt,\l"
	.string "Encore and Torment.$"  

RustboroCity_PokemonSchool_Text_ExplainField_Changes:
	.string "Field Effects: umbrella term coined by\n"
	.string "Prof. Birch to refer to effects such\l"
	.string "as Weather and Terrain.\p"
	.string "Pokémon can induce a Field change\n"
	.string "through moves.\p"
	.string "By default, it lasts five turns.\p"
	.string "But with the aid of certain items, it\n"
	.string "can last indefinitely.\p"
	.string "Some Pokémon are able to provoke such\n"
	.string "such changes with their Ability.\p"
	.string "In this case, the alteration will last\n"
	.string "until the Pokémon leaves the field for\l"
	.string "any reason.$"

RustboroCity_PokemonSchool_Text_ExplainStatuses:
	.string "Pokémon in the Hoenn have evolved\n"
	.string "different responses to debilitating\l"
	.string "Status conditions.\p"
	.string "For instance, sleeping Pokémon wake\n"
	.string "up immediately if hit by an attack.\p"
	.string "They also heal some HP while they're\n"
	.string "sleeping.\p"
	.string "Paralyzed Pokémon have less evasion,\n"
	.string "and their attacks have lower priority.\l"
	.string "However, they will never skip turns.\p"
	.string "Finally, Pokémon affected by Frostbite\n"
	.string "will be able to act, but will lose some\l"
	.string "of their HP every turn, and their Sp.\l"
	.string "Atk. will be halved.$"


RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Students who don't study get a little\n"
	.string "taste of my Quick Claw.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "A Pokémon holding the Quick Claw\n"
	.string "will occasionally go first.\p"
	.string "It's not the most reliable item,\n"
	.string "but it can get you out of a pinch.$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "I'm trading Capumon with my friend\n"
	.string "right now.\p"
	.string "Heard of it?\n"
	.string "It's the hot new game!$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "Trade evolutions are so annoying…\n"
	.string "I wish they got rid of them.$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "This school mostly teaches Pokémon\n"
	.string "battling.\p"
	.string "Down in Pacifidlog Town, they have\n"
	.string "an university where you can learn\l"
	.string "science, or history, or whatever.\p"
	.string "I don't see why you'd wanna do that\n"
	.string "over being a Trainer, though!$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "This building is the lecture hall of\n"
	.string "the Trainer School.\p"
	.string "Our second location is the Pokémon Gym,\n"
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
