DewfordGymTest_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DewfordCity_Gym_OnLoad
	.byte 0

DewfordCity_Gym_OnLoad:
	goto_if_set FLAG_BADGE02_GET, DewfordCity_Gym_UnlockDoors
	end

DewfordCity_Gym_UnlockDoors::
	setmetatile 5, 38, METATILE_DewfordGym_DoorReal, FALSE
	special DrawWholeMapView
	end

DewfordGymTest_EventScript_StartClimbing::
	call DewfordGym_EventScript_SlipperyWallOn
	startclimbing
	setvar VAR_CLIMBING, 1
	end

DewfordGymTest_EventScript_StopClimbing::
	call DewfordGym_EventScript_SlipperyWallOff
	setvar VAR_CLIMBING, 0
	stopclimbing
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	end

DewfordGymTest_EventScript_StartClimbingLedge::
	lock
	startclimbing
	applymovement OBJ_EVENT_ID_PLAYER, DewfordGym_Movement_FaceUpSlideDown
	waitmovement 0
	setvar VAR_CLIMBING, 1
	call DewfordGym_EventScript_SlipperyWallOn
	release
	end


DewfordGym_Movement_FaceUpSlideDown:
	face_up
	slide_down
	step_end

DewfordGym_EventScript_KeepSliding::
	release
	end

DewfordGym_Movement_SlideDownSingle::
	slide_down
	step_end


DewfordGym_EventScript_SlipperyWallOn::
	setmetatile 9, 30, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 20, 34, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 32, 34, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 17, 28, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 23, 28, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 28, 28, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 7, 17, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 27, 17, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 10, 14, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 14, 14, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 26, 9, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 31, 36, METATILE_DewfordGym_SlipperyWall, FALSE
	setmetatile 15, 17, METATILE_DewfordGym_SlipperyWall, FALSE
	special DrawWholeMapView
	return

DewfordGym_EventScript_SlipperyWallOff::
	setmetatile 9, 30, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 20, 34, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 32, 34, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 17, 28, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 23, 28, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 28, 28, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 7, 17, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 27, 17, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 10, 14, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 14, 14, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 26, 9, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 31, 36, METATILE_DewfordGym_NonSlipperyWall, FALSE
	setmetatile 15, 17, METATILE_DewfordGym_NonSlipperyWall, FALSE
	special DrawWholeMapView
	return