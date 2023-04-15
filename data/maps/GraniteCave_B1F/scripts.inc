GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_B1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
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
	call GraniteCave_EventScript_MetatileOffB1F
	end


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
	setmetatile 34, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 35, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 36, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 37, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 38, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 39, 22, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 34, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 35, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 36, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 37, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 38, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 39, 23, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 34, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 35, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 36, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 37, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 38, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 39, 24, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 23, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 24, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 25, 31, METATILE_GraniteCave_Floor, FALSE
	setmetatile 14, 36, METATILE_GraniteCave_GateRailLeft, TRUE
	setmetatile 15, 36, METATILE_GraniteCave_GateRailMiddle, TRUE
	setmetatile 16, 36, METATILE_GraniteCave_GateRailRight, TRUE
	special DrawWholeMapView
	return

GraniteCave_EventScript_MetatileOffB1F::
	setmetatile 34, 22, METATILE_GraniteCave_Void, TRUE
	setmetatile 35, 22, METATILE_GraniteCave_Void, TRUE
	setmetatile 36, 22, METATILE_GraniteCave_Void, TRUE
	setmetatile 37, 22, METATILE_GraniteCave_Void, TRUE
	setmetatile 38, 22, METATILE_GraniteCave_Void, TRUE
	setmetatile 39, 22, METATILE_GraniteCave_RightEdgeOverVoid, TRUE
	setmetatile 34, 23, METATILE_GraniteCave_Void, TRUE
	setmetatile 35, 23, METATILE_GraniteCave_Void, TRUE
	setmetatile 36, 23, METATILE_GraniteCave_Void, TRUE
	setmetatile 37, 23, METATILE_GraniteCave_Void, TRUE
	setmetatile 38, 23, METATILE_GraniteCave_Void, TRUE
	setmetatile 39, 23, METATILE_GraniteCave_RightEdgeOverVoid, TRUE
	setmetatile 34, 24, METATILE_GraniteCave_Void, TRUE
	setmetatile 35, 24, METATILE_GraniteCave_Void, TRUE
	setmetatile 36, 24, METATILE_GraniteCave_Void, TRUE
	setmetatile 37, 24, METATILE_GraniteCave_Void, TRUE
	setmetatile 38, 24, METATILE_GraniteCave_Void, TRUE
	setmetatile 39, 24, METATILE_GraniteCave_RightEdgeOverVoid, TRUE
	setmetatile 23, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 24, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 25, 31, METATILE_GraniteCave_NormalGate, TRUE
	setmetatile 14, 36, METATILE_GraniteCave_RailLeft, FALSE
	setmetatile 15, 36, METATILE_GraniteCave_RailMiddle, FALSE
	setmetatile 16, 36, METATILE_GraniteCave_RailRight, FALSE
	special DrawWholeMapView
	return