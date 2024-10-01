GraniteCave_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_B2F_OnTransition
	.byte 0


GraniteCave_B2F_OnTransition:
	goto_if_set FLAG_GENERATOR_ACTIVE, GraniteCave_B2F_GeneratorActive
	setflashlevel 6
	end

GraniteCave_B2F_GeneratorActive:
	setflashlevel 1
	call GraniteCave_EventScript_MetatileOnB2F
	end

Granite_EventScript_GeneratorFloorB2F::
	lock
	msgbox GraniteCave_Text_PressTheButton, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Granite_EventScript_GeneratorDoNotPress
	goto_if_set FLAG_GENERATOR_ACTIVE, Granite_EventScript_GeneratorTurnOffFloorB2F
	goto Granite_EventScript_GeneratorTurnOnFloorB2F
	end


Granite_EventScript_GeneratorTurnOnFloorB2F::
	call GraniteCave_EventScript_MetatileOnB2F
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

Granite_EventScript_GeneratorTurnOffFloorB2F::
	clearflag FLAG_GENERATOR_ACTIVE
	call GraniteCave_EventScript_MetatileOffB2F
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



GraniteCave_EventScript_MetatileOnB2F::
	setmetatile 20, 16, METATILE_GraniteCave_Rail_Blocked_Left, TRUE
	setmetatile 21, 16, METATILE_GraniteCave_Rail_Blocked_Middle, TRUE
	setmetatile 22, 16, METATILE_GraniteCave_Rail_Blocked_Right, TRUE
	setmetatile 8, 35, METATILE_GraniteCave_Rail_Blocked_Left, TRUE
	setmetatile 9, 35, METATILE_GraniteCave_Rail_Blocked_Middle, TRUE
	setmetatile 10, 35, METATILE_GraniteCave_Rail_Blocked_Right, TRUE
	setmetatile 23, 41, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 23, 42, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 23, 43, METATILE_GraniteCave_BridgeDown, FALSE
	setmetatile 34, 23, METATILE_GraniteCave_BridgeUp, FALSE
	setmetatile 34, 24, METATILE_GraniteCave_BridgeMiddle, FALSE
	setmetatile 34, 25, METATILE_GraniteCave_BridgeDown, FALSE
	special DrawWholeMapView
	return

GraniteCave_EventScript_MetatileOffB2F::
	setmetatile 20, 16, METATILE_GraniteCave_RailLeft, FALSE
	setmetatile 21, 16, METATILE_GraniteCave_RailMiddle, FALSE
	setmetatile 22, 16, METATILE_GraniteCave_RailRight, FALSE
	setmetatile 8, 35, METATILE_GraniteCave_RailLeft, FALSE
	setmetatile 9, 35, METATILE_GraniteCave_RailMiddle, FALSE
	setmetatile 10, 35, METATILE_GraniteCave_RailRight, FALSE
	setmetatile 23, 41, METATILE_GraniteCave_Bridge_Blocked_Top, TRUE
	setmetatile 23, 42, METATILE_GraniteCave_Bridge_Blocked_Middle, TRUE
	setmetatile 23, 43, METATILE_GraniteCave_Bridge_Blocked_Bottom, TRUE
	setmetatile 34, 23, METATILE_GraniteCave_Bridge_Blocked_Top, TRUE
	setmetatile 34, 24, METATILE_GraniteCave_Bridge_Blocked_Middle, TRUE
	setmetatile 34, 25, METATILE_GraniteCave_Bridge_Blocked_Bottom, TRUE
	special DrawWholeMapView
	return