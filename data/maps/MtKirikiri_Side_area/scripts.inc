.set LOCALID_SHADOW, 1


MtKirikiri_Side_area_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MtKirikiri_Side_area_OnLoad
	.byte 0



MtKirikiri_Side_area_OnLoad:
	hideobjectat LOCALID_SHADOW, MAP_MT_KIRIKIRI_SIDE_AREA
	end

EventScript_MtKirikiri_Shadow_1::
	lock
	fadeoutbgm 1
	msgbox Kirkiri_Text_SomethingIsComing, MSGBOX_DEFAULT
	delay 5
	trainerbattle_no_intro TRAINER_KIRIKIRI_SHADOW_1, Kirikiri_Text_DotDotDot
	release
	setvar VAR_DEFEATED_KIRIKIRI_SHADOW_1, 1
	end

EventScript_MtKirikiri_StrangeWall:
	goto_if_set FLAG_OLDALE_ODD_INSCRIPTION, EventScript_MtKirikiri_StrangeWall2
	msgbox Text_MtKirikiri_StrangeWall, MSGBOX_SIGN
	giveitem ITEM_ODD_CARVING
	setflag FLAG_OLDALE_ODD_INSCRIPTION
	release
	end

EventScript_MtKirikiri_StrangeWall2::
	msgbox Text_MtKirikiri_StrangeWall2, MSGBOX_SIGN
	release
	end

EventScript_KirikiriMountain_ShadowAppears::
	lock
	addobject LOCALID_SHADOW
	setobjectxy LOCALID_SHADOW, 13, 43
	applymovement LOCALID_SHADOW, KirikiriMountain_Movement_ShadowWalksUp
	waitmovement 0
	delay 2
	setvar VAR_KIRIKIRI_MOUNTAIN_STATE, 2
	removeobject LOCALID_SHADOW
	setflag FLAG_SAW_GHOST
	release
	end

EventScript_KirikiriMountain_ShadowAppears2::
	lock
	addobject LOCALID_SHADOW
	setobjectxy LOCALID_SHADOW, 11, 24
	applymovement LOCALID_SHADOW, KirikiriMountain_Movement_ShadowHorizontal
	waitmovement 0
	delay 2
	setvar VAR_KIRIKIRI_MOUNTAIN_STATE, 3
	removeobject LOCALID_SHADOW
	release
	end


EventScript_KirikiriMountain_BadFeeling::
	setflag FLAG_HIDE_FIRST_SHADOW
	lock
	msgbox Kirikiri_Text_BadFeeling, MSGBOX_DEFAULT
	setvar VAR_KIRIKIRI_MOUNTAIN_STATE, 1
	release
	end


KirikiriMountain_Movement_ShadowWalksUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

KirikiriMountain_Movement_ShadowHorizontal:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Kirikiri_Text_BadFeeling::
	.string "A shiver runs down your spine.\p"
	.string "You've got a really bad feeling\n"
	.string "about this…$"

Kirkiri_Text_SomethingIsComing::
	.string "…Something is coming.$"


Kirikiri_Text_DotDotDot::
	.string "… … …$"


Text_MtKirikiri_StrangeWall::
	.string "You examine the strange symbols on\n"
	.string "the cave wall.\p"
	.string "For some reason, it's as if you're\n"
	.string "drawn to them.\p"
	.string "You decide to write them down.$"

Text_MtKirikiri_StrangeWall2::
	.string "You examine the strange symbols on\n"
	.string "the cave wall.\p"
	.string "For some reason, it's as if you're\n"
	.string "drawn to them.$"