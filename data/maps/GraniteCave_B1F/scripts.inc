.set LOCALID_TABITHA, 9
.set LOCALID_BEHEMERALD, 10


GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_B1F_OnTransition
	.byte 0

GraniteCave_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end

GraniteCave_B1F_OnTransition:
	goto_if_set FLAG_GENERATOR_ACTIVE, GraniteCave_B1F_GeneratorActive
	setflashlevel 6
	end

GraniteCave_B1F_GeneratorActive:
	setflashlevel 1
	call GraniteCave_EventScript_MetatileOnB1F
	end


Common_Name_Tabitha:
	.string "Tabitha$"

Granite_EventScript_Tabitha::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	applymovement LOCALID_TABITHA, Granite_Movement_TabithaRunDown
	waitmovement 0
	playse SE_WALL_HIT
	waitse
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	msgbox Granite_Text_Yeowch, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Granite_Movement_TabithaRecoilBack
	waitmovement 0
	msgbox Granite_Text_TabithaWhat, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkDown
	waitmovement 0
	speakername Common_Name_Tabitha
	msgbox Granite_Text_TabithaOutOfTheWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Tabitha
	msgbox Granite_Text_TabithaJustLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkUp
	waitmovement 0
	speakername Common_Name_Tabitha
	msgbox Granite_Text_TabithaShreds, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	applymovement LOCALID_TABITHA, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_WalkDown
	waitmovement 0
	speakername Common_Name_Tabitha
	msgbox Granite_Text_TabithaMyPoint, MSGBOX_DEFAULT
	closemessage
	call GraniteCave_EventScript_MetatileOnB1F
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	playmoncry SPECIES_BEHEMERALD, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
	waitmovement 0
	clearflag FLAG_HIDE_BEHEMERALD_CAVE
	addobject LOCALID_BEHEMERALD
	applymovement LOCALID_BEHEMERALD, Common_Movement_WalkRight
	waitmovement 0
	playse SE_M_STRENGTH
	waitse
	applymovement LOCALID_BEHEMERALD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_BEHEMERALD, Common_Movement_WalkRight
	waitmovement 0
	playse SE_M_STRENGTH
	waitse
	applymovement LOCALID_BEHEMERALD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_BEHEMERALD, Common_Movement_WalkRight
	waitmovement 0
	playse SE_M_STRENGTH
	waitse
	applymovement LOCALID_BEHEMERALD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_BEHEMERALD, Common_Movement_WalkRight
	waitmovement 0
	playse SE_M_STRENGTH
	waitse
	applymovement LOCALID_BEHEMERALD, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_Delay32
	waitmovement 0
	applymovement LOCALID_TABITHA, Granite_Movement_TabithaHides
	waitmovement 0
	speakername Common_Name_Tabitha
	msgbox Granite_Text_Yikes, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_PREVENT_RUNNING
	setflag FLAG_CANNOT_USE_BALLS
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_BEHEMERALD_CAVE
	setflag FLAG_HIDE_TABITHA_CAVE
	removeobject LOCALID_TABITHA
	removeobject LOCALID_BEHEMERALD
	setvar VAR_GRANITE_CAVE_STATE, 1
	createmon 1, 0, SPECIES_EMEROLL, 22, ITEM_NONE, NATURE_HARDY, 0
	createmon 1, 1, SPECIES_BEHEMERALD, 22, ITEM_SITRUS_BERRY, NATURE_SASSY, 1, MON_FEMALE, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_CLEAN_SLATE, MOVE_CONFUSION, MOVE_STRUGGLE_BUG, MOVE_ANCIENT_POWER
	setwilddoubleflag
	dowildbattle
	clearflag FLAG_PREVENT_RUNNING
	clearflag FLAG_CANNOT_USE_BALLS
	setvar VAR_GRANITE_CAVE_STATE, 1
	msgbox Granite_Text_Disappeared, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Granite_Movement_TabithaHides:
	walk_fast_right
	walk_fast_down
	face_left
	step_end


Granite_Text_Yeowch:
	.string "Yeowchhh!$"

Granite_Text_TabithaWhat:
	.string "What?\n"
	.string "Who?\l"
	.string "How?\p"
	.string "Another Trainer?\n"
	.string "How did you get past my men?\p"
	.string "Those incompetent…\n"
	.string "…Incompetent fools!\p"
	.string "Grahhh!\n"
	.string "This is a disaster!\p"
	.string "Grumble…\n"
	.string "Pull yourself together, Tabitha…$"

Granite_Text_TabithaOutOfTheWay:
	.string "…\p"
	.string "Hello, yes, hi.\p"
	.string "Could you move, please and thank\n"
	.string "you?\p"
	.string "… … …\p"
	.string "… … … … … … … …$"

Granite_Text_TabithaJustLeaving:
	.string "Look, I'm just leaving, see?\p"
	.string "Trust me, I would love nothing more\n"
	.string "than to teach you a lesson…\p"
	.string "And tear you to shreds…$"

Granite_Text_TabithaShreds:
	.string "And tear those shreds into smaller,\n"
	.string "infinitesimal particles and scatter\l"
	.string "those into the wind so that the\l"
	.string "Mandibuzz can feast on your…$"

Granite_Text_TabithaMyPoint:
	.string "My point!\n"
	.string "Is that we admit defeat here.\p"
	.string "Done, busted.\p"
	.string "I don't know where you or that\n"
	.string "other guy came from, but it's ok.\p"
	.string "My team is wiped out.\n"
	.string "So we will be leaving very peacefully.\p"
	.string "So PLEASE.\n"
	.string "If you just.\l"
	.string "Would.\l"
	.string "Stand.\l"
	.string "Asi-$"

Granite_Text_Yikes:
	.string "Yikes!\p"
	.string "Y-you deal with it now!$"

Granite_Text_Disappeared:
	.string "… … …\p"
	.string "It seems Tabitha disappeared in\n"
	.string "the confusion.$"

Granite_Movement_TabithaRunDown:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Granite_Movement_TabithaRecoilBack:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

Granite_EventScript_Grimer::
	lock
	goto_if_set FLAG_GRIMER_GRANITE, Granite_EventScript_Grimer_Defeated
	setflag FLAG_PREVENT_RUNNING
	setwildbattle SPECIES_GRIMER, 15
	msgbox GraniteCave_Text_Fridge, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_GRIMER, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	clearflag FLAG_PREVENT_RUNNING
	setflag FLAG_GRIMER_GRANITE
	msgbox GraniteCave_Text_CouldBeUseful, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_BLACK_SLUDGE
	release
	end


GraniteCave_Text_Fridge:
	.string "You look inside the fridge.\p"
	.string "…Ugh. That was a mistake.\p"
	.string "The food inside has long since\n"
	.string "rotten.\p"
	.string "…In fact, it starts to move!$"

GraniteCave_Text_CouldBeUseful:
	.string "…Well, this could be useful.$"


Granite_EventScript_Grimer_Defeated::
	msgbox GraniteCave_Text_FridgeIsEmpty, MSGBOX_DEFAULT
	closemessage
	release
	end


GraniteCave_Text_FridgeIsEmpty:
	.string "The fridge is empty.$"


Granite_EventScript_GeneratorFloorB1F::
	lock
	msgbox GraniteCave_Text_PressTheButton, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Granite_EventScript_GeneratorDoNotPress
	goto_if_set FLAG_GENERATOR_ACTIVE, Granite_EventScript_GeneratorTurnOffFloorB1F
	goto Granite_EventScript_GeneratorTurnOnFloorB1F
	end


Granite_EventScript_GeneratorTurnOnFloorB1F::
	call GraniteCave_EventScript_MetatileOnB1F
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	setflag FLAG_GENERATOR_ACTIVE
	animateflash 1
	setflashlevel 1
	msgbox GraniteCave_Text_SomethingChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

Granite_EventScript_GeneratorTurnOffFloorB1F::
	clearflag FLAG_GENERATOR_ACTIVE
	call GraniteCave_EventScript_MetatileOffB1F
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	animateflash 6
	setflashlevel 6
	fadescreen FADE_TO_BLACK
	special ResetFlash
	fadescreen FADE_FROM_BLACK
	msgbox GraniteCave_Text_SomethingChanged, MSGBOX_DEFAULT
	closemessage
	release
	end


GraniteCave_Text_SomethingChanged:
	.string "Something in the mines changed.$"

GraniteCave_Text_PressTheButton:
	.string "The generator is whirring quietly.\p"
	.string "Try pressing a button?$"

Granite_EventScript_GeneratorDoNotPress::
	msgbox GraniteCave_Text_DoNotPressTheButton, MSGBOX_DEFAULT
	closemessage
	release
	end


GraniteCave_Text_DoNotPressTheButton:
	.string "Better leave it alone.$"


GraniteCave_EventScript_MetatileOnB1F::
	setmetatile 32, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 32, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 32, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 23, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 24, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 25, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 14, 36, METATILE_GraniteCave_GateRailLeft, TRUE
	setmetatile 15, 36, METATILE_GraniteCave_GateRailMiddle, TRUE
	setmetatile 16, 36, METATILE_GraniteCave_GateRailRight, TRUE
	special DrawWholeMapView
	return

GraniteCave_EventScript_MetatileOffB1F::
	setmetatile 32, 22, METATILE_GraniteCave_Bridge_Blocked_Top, TRUE
	setmetatile 32, 23, METATILE_GraniteCave_Bridge_Blocked_Middle, TRUE
	setmetatile 32, 24, METATILE_GraniteCave_Bridge_Blocked_Bottom, TRUE
	setmetatile 23, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 24, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 25, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 14, 36, METATILE_GraniteCave_RailLeft, FALSE
	setmetatile 15, 36, METATILE_GraniteCave_RailMiddle, FALSE
	setmetatile 16, 36, METATILE_GraniteCave_RailRight, FALSE
	special DrawWholeMapView
	return