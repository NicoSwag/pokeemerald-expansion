.set LOCALID_STEVEN, 1

GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_Steven::
	lock
	msgbox GraniteCave_Text_SoClose, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	applymovement LOCALID_STEVEN, Common_Movement_Delay32
	waitmovement 0
	faceplayer
	msgbox GraniteCave_Text_ThereYouAre, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, Granite_EventScript_MovePlayer
	call_if_eq VAR_FACING, DIR_EAST, Granite_EventScript_PlayerFacingRight
	call_if_eq VAR_FACING, DIR_WEST, Granite_EventScript_PlayerFacingLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	waitmovement 0
	msgbox GraniteCave_Text_Carvings, MSGBOX_DEFAULT
	closemessage
	msgbox GraniteCave_Text_Note, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_ODD_CARVING
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	applymovement LOCALID_STEVEN, Common_Movement_Delay32
	waitmovement 0
	call_if_eq VAR_TEMP_A, 0, Granite_EventScript_TurnPlayerLeft
	call_if_eq VAR_TEMP_A, 1, Granite_EventScript_TurnPlayerRight
	call_if_eq VAR_TEMP_A, 1, Granite_EventScript_TurnStevenLeft
	call_if_eq VAR_TEMP_A, 0, Granite_EventScript_TurnStevenRight
	msgbox GraniteCave_Text_IAmSteven, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_KnowAboutYou, MSGBOX_DEFAULT
	closemessage
	msgbox GraniteCave_Text_Goods, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_OhThis, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_LayMan, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_A, 1, Granite_EventScript_TurnStevenLeft
	call_if_eq VAR_TEMP_A, 0, Granite_EventScript_TurnStevenRight
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_Explanation, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkDown
	waitmovement 0
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_Favor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkUp
	waitmovement 0
	call_if_eq VAR_TEMP_A, 1, Granite_EventScript_TurnStevenLeft
	call_if_eq VAR_TEMP_A, 0, Granite_EventScript_TurnStevenRight
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_RockClimb, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_HM_ROCK_CLIMB
	setflag FLAG_RECEIVED_ROCK_CLIMB
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_RockClimbExplanation, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_RAINBOW_ORE
	speakername Common_Name_Steven
	msgbox GraniteCave_Text_Bye, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkDown6
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay32
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject LOCALID_STEVEN
	setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
	release
	end

Granite_EventScript_TurnStevenLeft::
	applymovement LOCALID_STEVEN, Common_Movement_FaceLeft
	waitmovement 0
	return

Granite_EventScript_TurnStevenRight::
	applymovement LOCALID_STEVEN, Common_Movement_FaceRight
	waitmovement 0
	return


Granite_EventScript_MovePlayer::
    setvar VAR_TEMP_A, 0
	applymovement OBJ_EVENT_ID_PLAYER, Granite_Movement_MovePlayer
	waitmovement 0
	return

Granite_EventScript_PlayerFacingRight::
	setvar VAR_TEMP_A, 1
	return

Granite_EventScript_PlayerFacingLeft::
	setvar VAR_TEMP_A, 0
	return

Granite_EventScript_TurnPlayerLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return



Granite_EventScript_TurnPlayerRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

GraniteCave_Text_SoClose:
	.string "…Hmmm.$"

GraniteCave_Text_ThereYouAre:
	.string "Oh! There you are!\n"
	.string "I was waiting for you.\p"
	.string "I want to show you something.$"



GraniteCave_Text_Note:
	.string "… … …\p"
	.string "You examine the strange symbols on\n"
	.string "the cave wall.\p"
	.string "For some reason, it's as if you're\n"
	.string "drawn to them.\p"
	.string "You decide to write them down.$"


Common_Name_Steven:	
	.string "Steven$"

Granite_Movement_MovePlayer:
	walk_right
	walk_up
	step_end

GraniteCave_Text_Carvings:
	.string "See these carvings, here?\n"
	.string "Fascinating, aren't they?\p"
	.string "They can be found all over, if\n"
	.string "you know where to look.\p"
	.string "They were left behind by the previous\n"
	.string "inhabitants of Hoenn.\p"
	.string "Those who were here before us.\p"
	.string "But… No one has been able to translate\n"
	.string "them yet.\p"
	.string "And that's not the only mystery.\p"
	.string "This rock… It may appear to be normal,\n"
	.string "but that's not quite true.\p"
	.string "In reality, no tool or Pokémon is able\n"
	.string "to even dent it.\p"
	.string "…I doubt Team Magma invaded this mine\n"
	.string "just for the emeralds.\p"
	.string "No, they were interested in this.\p"
	.string "This is what that Tabitha was really\n"
	.string "after.\p"
	.string "But to what end…?$"

GraniteCave_Text_IAmSteven:
	.string "Oh, I'm sorry.\n"
	.string "You must be wondering who I am.\p"
	.string "My name is Steven Stone.$"

GraniteCave_Text_KnowAboutYou:
	.string "I would love to introduce myself as a\n"
	.string "geologist, but that's just a hobby of\l"
	.string "mine.\p"
	.string "In reality, I'm only the Champion\n"
	.string "of the Pokémon League. Haha!\p"
	.string "And you, {PLAYER}…\p"
	.string "Your father has told me much about you.\n"
	.string "And Looker did too, of course!\p"
	.string "Speaking of…\p"
	.string "Looker told me that you have something\n"
	.string "to show me.\p"
	.string "May I take a look at it?$"

GraniteCave_Text_Goods:
	.string "You handed the Goods to Steven.$"

GraniteCave_Text_OhThis:
	.string "Ah, that…!$"

GraniteCave_Text_LayMan:
	.string "Mhh…\p"
	.string "I'm a layman in this area, but…\p"
	.string "This, to me, looks like a component\n"
	.string "for some sort of sonar device.\p"
	.string "And right here, it says it was made\n"
	.string "by Stern's Shipyard.\p"
	.string "That's in Slateport.\p"
	.string "And a Devon employee was handing\n"
	.string "it to Team Aqua?\p"
	.string "…Mhh.\n"
	.string "This might be bad news…$"

GraniteCave_Text_Explanation:
	.string "I think some explanations are due.\p"
	.string "You might have guessed it already,\n"
	.string "but…\p"
	.string "My father is the president of Devon.\p"
	.string "Me and him…\n"
	.string "Well, we don't really get along.\p"
	.string "If you've been to Rustboro, you must\n"
	.string "have seen the damage Devon is doing.\p"
	.string "As a geologist- and Champion of the\n"
	.string "Pokémon League…\p"
	.string "I can't just let this stand.\p"
	.string "Unfortunately, Devon is very powerful.\p"
	.string "If we stepped in too directly, there is\n"
	.string "no telling what could happen.\p"
	.string "However…\n"
	.string "That's far from my only concern.\p"
	.string "Team Magma and Team Aqua…\p"
	.string "Recently, their methods have grown more\n"
	.string "extreme.\p"
	.string "This mine takeover has been the least\n"
	.string "of it.\p"
	.string "And this Devon employee…\n"
	.string "Is collaborating with them?\l"
	.string "The sworn enemies of Devon?\p"
	.string "I don't understand fully, but…\n"
	.string "I feel like a war might be brewing.\p"
	.string "What a headache, right?\p"
	.string "This is why I called Looker here to help\n"
	.string "unravel the situation.$"

GraniteCave_Text_Favor:
	.string "… … …\p"
	.string "Could I ask you for a favor?\p"
	.string "If you could bring the component\n"
	.string "to Captain Stern, in Slateport…\p"
	.string "He might know what Team Aqua\n"
	.string "was planning to do with it.$"

GraniteCave_Text_RockClimb:
	.string "Of course, I'm not expecting you\n"
	.string "to do this for free.\p"
	.string "Here's a Hidden Machine that I'm\n"
	.string "sure you'll find very useful.$"

GraniteCave_Text_RockClimbExplanation:
	.string "That HM contains the move Rock Climb.\p"
	.string "It allows Pokémon to climb certain\n"
	.string "rocks.\p"
	.string "…Here's a little extra, too.$"

GraniteCave_Text_Bye:
	.string "Pretty, right?\p"
	.string "Just don't let the Pokémon League know.\p"
	.string "I wouldn't want to be accused of bribing\n"
	.string "Trainers! Ha ha!\p"
	.string "…Now, I really need to go back to Ever\n"
	.string "Grande.\p"
	.string "As important as this is, I also have\n"
	.string "my League duties to attend to.\p"
	.string "But, {PLAYER}…\p"
	.string "We will certainly see each other again.$"

GraniteCave_Sign_Carvings::
	msgbox GraniteCave_Text_CarvingInteract, MSGBOX_SIGN
	release
	end

GraniteCave_Text_CarvingInteract:
	.string "You examine the strange symbols on\n"
	.string "the cave wall.\p"
	.string "For some reason, it's as if you're\n"
	.string "drawn to them.$"