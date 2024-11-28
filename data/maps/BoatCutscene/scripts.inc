BoatCutscene_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BoatCutscene_OnFrame
	.byte 0

BoatCutscene_OnFrame:
	map_script_2 VAR_GAME_INTRO_STATE, 0, BoatCutscene_EventScript_Cutscene
	.2byte 0


BoatCutscene_EventScript_Cutscene::
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, BoatCutscene_Movement_PanToShip
	waitmovement 0
	msgbox BoatCutscene_Text_LadiesAndGentlemen, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_Drake
	msgbox BoatCutscene_Text_Hoenn, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, BoatCutscene_Movement_PanToShip
	waitmovement 0
	setvar VAR_GAME_INTRO_STATE, 1
	warp MAP_SLATEPORT_CITY, 42, 23
	release
	end


BoatCutscene_Movement_PanToShip:
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	step_end


Common_Name_Drake:
	.string "Drake$"


BoatCutscene_Text_LadiesAndGentlemen:
	.string "Good day, lasses and lads.\p"
	.string "This is Captain Drake speaking, with\n"
	.string "an update on your cruise.$"


BoatCutscene_Text_Hoenn:
	.string "We are about an hour away from reaching\n"
	.string "the shores of Hoenn.\p"
	.string "If you look out of your windows now,\n"
	.string "lasses and lads, you will be able\l"
	.string "to see quite the terrible storm.\p"
	.string "We are now traversing what is known\n"
	.string "as the 'Zone of Death'.\p"
	.string "…Ah, but have no fear!\p"
	.string "Thanks to our state of the art cruiser,\n"
	.string "'tis only a minor breeze.\p"
	.string "Why indeed, there have been no recorded\n"
	.string "accidents in this area for more than a\l"
	.string "hundred years!\p"
	.string "Gyah ah ah!\p"
	.string "So have no worries, lasses and lads,\n"
	.string "and enjoy the ride.\p"
	.string "The temperature in Slateport, our\n"
	.string "destination, is three…\l"
	.string "No, two degrees Celsius.\p"
	.string "So if you have packed winter clothing,\n"
	.string "it's time to get it out!\l"
	.string "Gyah ah ah!\p"
	.string "Thank you for choosing to travel with\n"
	.string "us, and enjoy the rest of the cruise.$"