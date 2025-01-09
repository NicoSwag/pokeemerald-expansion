.set LOCALID_FAT_MAN, 1
.set LOCALID_MAN_1, 2
.set LOCALID_RICH_BOY, 3
.set LOCALID_GRUNT_1, 5
.set LOCALID_COOK, 6
.set LOCALID_OLD_WOMAN, 7
.set LOCALID_GIRL, 8
.set LOCALID_SCAMMER_2, 9
.set LOCALID_SCAMMER_1, 10
.set LOCALID_CAPT_STERN, 11
.set LOCALID_DRAKE, 26
.set LOCALID_ENGINEER, 29
.set LOCALID_GRUNT_2, 18
.set LOCALID_GRUNT_3, 19
.set LOCALID_GRUNT_4, 26
.set LOCALID_GRUNT_5, 36
.set LOCALID_GRUNT_6, 35
.set LOCALID_GRUNT_7, 29
.set LOCALID_GRUNT_8, 30
.set LOCALID_GRUNT_9, 31
.set LOCALID_GRUNT_11, 33
.set LOCALID_SCOTT, 34


@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h

SlateportCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SlateportCity_OnResume
	.byte 0

SlateportCity_OnFrame:
	map_script_2 VAR_GAME_INTRO_STATE, 1, SlateportCity_EventScript_Cutscene
	.2byte 0

SlateportCity_EventScript_WrongWay::
	msgbox SlateportCity_Text_Areyoulost, MSGBOX_NPC
	end

SlateportCity_EventScript_Cutscene:
	lock
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_PLAYER
	setvar VAR_GAME_INTRO_STATE, 2
	release
	end

Slateport_CutsceneDrake_Top::
	setvar VAR_GAME_INTRO_STATE, 3
	playse SE_PIN
	applymovement LOCALID_DRAKE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DRAKE, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_DRAKE, Common_Movement_FaceLeft
	waitmovement 0
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_Drake, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Slateport_Movement_GoToDrakeTop
	waitmovement 0
	goto Slateport_Cutscene_DrakeCont

Slateport_CutsceneDrake_Bottom::
	setvar VAR_GAME_INTRO_STATE, 3
	playse SE_PIN
	applymovement LOCALID_DRAKE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DRAKE, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_DRAKE, Common_Movement_FaceLeft
	waitmovement 0
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_Drake, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Slateport_Movement_GoToDrakeBottom
	waitmovement 0
	goto Slateport_Cutscene_DrakeCont


	
Slateport_Cutscene_DrakeCont::
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_Parents, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ENGINEER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ENGINEER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_ENGINEER, Slateport_Movement_ApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox SlateportCity_Text_WorkerCutscene, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DRAKE, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_ISuppose, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ENGINEER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ENGINEER, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_Text_Hey, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_JustAJoke, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ENGINEER Common_Movement_QuestionMark
	waitmovement 0
	msgbox SlateportCity_Text_ThePresident, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_ScratchThat, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DRAKE, Common_Movement_FaceLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	speakername Common_Name_Drake
	msgbox SlateportCity_Text_GotARide, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ENGINEER, Slateport_Movement_EngineerToTruck
	applymovement OBJ_EVENT_ID_PLAYER, Slateport_Movement_PlayerToTruck
	waitmovement 0
	setflag FLAG_HIDE_SLATEPORT_CUTSCENE
	special SetUpTruckSequence
	warp MAP_INSIDE_OF_TRUCK, 2, 2
	release
	end



Slateport_Movement_GoToDrakeTop:
	walk_right
	walk_right
	step_end

Slateport_Movement_GoToDrakeBottom:
	walk_right
	walk_right
	walk_up
	face_right
	step_end

Slateport_Movement_EngineerToTruck:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end


Slateport_Movement_PlayerToTruck:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	delay_16
	step_end

Slateport_Movement_ApproachPlayer:
	walk_down
	walk_down
	step_end

SlateportCity_Text_Drake:
	.string "Hey, there, kid!\p"
	.string "You're the last one to have gotten\n"
	.string "off the ship.\p"
	.string "Well, c'mere!$"

SlateportCity_Text_Parents:
	.string "Say, where are your parents?\p"
	.string "… … …\p"
	.string "What?!\p"
	.string "They made you do the trip by yourself,\n"
	.string "and they're waiting for you in\l"
	.string "Littleroot Town?\p"
	.string "I swear, parents these days…\p"
	.string "Well now, we have to find a way to ship\n"
	.string "you all the way to Littleroot, don't we?\p"
	.string "Hmmm…$"

SlateportCity_Text_WorkerCutscene:
	.string "Littleroot, you said?\p"
	.string "I'm about to depart for a delivery in\n"
	.string "Rustboro, and I'll be passing by near\l"
	.string "Littleroot.\p"
	.string "It won't be comfortable, but you could\n"
	.string "ride on the back of my truck!$"

SlateportCity_Text_ISuppose:
	.string "Ah…\p"
	.string "You work for Devon Corp., don't you?\p"
	.string "Hm…\p"
	.string "Well, yes, I suppose that would be the\n"
	.string "quickest way.\p"
	.string "Don't worry, kid, I deal with Devon all\n"
	.string "the time.\p"
	.string "They ain't the most agreeable, that's for\n"
	.string "sure, but they ain't gonna kindap you or\l"
	.string "anything.$"

SlateportCity_Text_Hey:
	.string "But of course not!\p"
	.string "Devon is Hoenn's most beloved company,\n"
	.string "with a spotless track record for\l"
	.string "customer service!$"

SlateportCity_Text_JustAJoke:
	.string "'Tis just a joke.\n"
	.string "No need to get all fired up.\p"
	.string "By the way, youngster…\p"
	.string "If you happen to see the President…\p"
	.string "Would you mind letting him know\n"
	.string "that I say hello?$"

SlateportCity_Text_ThePresident:
	.string "The President?\n"
	.string "Are you referring to Mr. Stone?\p"
	.string "I'm afraid I can't really do that, sir.\p"
	.string "But if you wish, I could pass on the\n"
	.string "message to a subordinate of his.$"


SlateportCity_Text_ScratchThat:
	.string "…Eh, it's fine.\n"
	.string "It's not like he ever bothers to visit.$"

SlateportCity_Text_GotARide:
	.string "Well, kid, looks like you got your\n"
	.string "ride.\p"
	.string "Have a safe travel, aye?\n"
	.string "Maybe we'll see each other around.\p"
	.string "Unless I kick the bucket first!\n"
	.string "Gyah ah ah!\p"
	.string "'Tis a joke, don't worry.\n"
	.string "Enjoy the trip!$"

SlatePortCity_Movement_GotoDrake:
	delay_16
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

Common_Movement_Set_Visible:
	set_visible
	step_end

Common_Movement_Set_Invisible:
	set_invisible
	step_end


SlateportCity_OnResume:
	setstepcallback STEP_CB_ASH
	end


SlateportCity_OnTransition:
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
	call SlateportCity_EventScript_EnterSlateport
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
	end

SlateportCity_EventScript_EnterSlateport::
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	return

SlateportCity_EventScript_MovePeopleForSternInterview::
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
	setobjectxyperm LOCALID_COOK, 27, 16
	setobjectxyperm LOCALID_GIRL, 28, 16
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
	setobjectxyperm LOCALID_MAN_1, 31, 14
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
	return

SlateportCity_EventScript_SetReadyForScottScene::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
	setobjectxyperm LOCALID_SCOTT, 23, 27
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_EventScript_MoveScottLeft::
	setobjectxyperm LOCALID_SCOTT, 22, 27
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return


SlateportCity_EventScript_ScottScene::
	lockall
	addobject LOCALID_SCOTT
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
	waitmovement 0
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 60
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
	waitmovement 0
	removeobject LOCALID_SCOTT
	setobjectxyperm LOCALID_SCOTT, 10, 12
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
	addvar VAR_SCOTT_STATE, 1
	releaseall
	end

SlateportCity_Movement_PlayerFaceScott:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ScottApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_Movement_ScottExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_EventScript_EnergyGuru::
	lock
	faceplayer
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
	waitmessage
	pokemart SlateportCity_Pokemart_EnergyGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_EnergyGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end

SlateportCity_EventScript_EffortRibbonWoman::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message SlateportCity_Text_ReceivedEffortRibbon
	waitfanfare
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
	special GiveLeadMonEffortRibbon
	release
	end

SlateportCity_EventScript_MonEVsNotMaxed::
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_MonHasEffortRibbon::
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Cook::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_CookSternInterview::
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWoman::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWomanSternInterview::
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Girl::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSternInterview::
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSecretBase::
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoy::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoySternInterview::
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_FatMan::
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
	end

SlateportCity_EventScript_FatManSternInterview::
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man1::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Man1SternInterview::
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1::
	lock
	faceplayer
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1AquaGone::
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_BattleTentSign::
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_SternsShipyardSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardNearsCompletion::
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardFerryComplete::
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_PokemonFanClubSign::
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_OceanicMuseumSign::
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_CitySign::
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
	end

SlateportCity_EventScript_MarketSign::
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_HarborSignFerryComplete::
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_NameRatersHouseSign::
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_Maniac::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

@ Unclear if the text here was meant to be different, but its not
SlateportCity_EventScript_ManiacSternInterview::
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman2::
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor1::
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor2::
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
	end

SlateportCity_EventScript_PokefanF::
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
	end

SlateportCity_EventScript_Man2::
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
	end

SlateportCity_EventScript_AquaGrunt1::
	lock
	faceplayer
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt2::
	lock
	faceplayer
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt3::
	lock
	faceplayer
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt4::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt5::
	lock
	faceplayer
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt6::
	lock
	faceplayer
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt7::
	lock
	faceplayer
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt8::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt9::
	lock
	faceplayer
	playse SE_PIN
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_Movement_DelayAquaGrunt:
	delay_16
	delay_16
	step_end

SlateportCity_EventScript_AquaGrunt10::
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
	end

SlateportCity_EventScript_AquaGrunt11::
	lock
	faceplayer
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_DollClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor_Dolls:
	.2byte DECOR_AZURILL_DOLL
	.2byte DECOR_MARILL_DOLL
	.2byte DECOR_SKITTY_DOLL
	.2byte DECOR_NONE
	release
	end

SlateportCity_EventScript_ComeBackWithSecretPower::
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_DecorClerk::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor:
	.2byte DECOR_RED_BRICK
	.2byte DECOR_BLUE_BRICK
	.2byte DECOR_YELLOW_BRICK
	.2byte DECOR_RED_BALLOON
	.2byte DECOR_BLUE_BALLOON
	.2byte DECOR_YELLOW_BALLOON
	.2byte DECOR_C_LOW_NOTE_MAT
	.2byte DECOR_D_NOTE_MAT
	.2byte DECOR_E_NOTE_MAT
	.2byte DECOR_F_NOTE_MAT
	.2byte DECOR_G_NOTE_MAT
	.2byte DECOR_A_NOTE_MAT
	.2byte DECOR_B_NOTE_MAT
	.2byte DECOR_C_HIGH_NOTE_MAT
	.2byte DECOR_NONE
	release
	end

SlateportCity_EventScript_PowerTMClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Pokemart_PowerTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_PowerTMs:
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_NONE
	release
	end

@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
SlateportCity_EventScript_CaptStern::
	end

SlateportCity_Movement_OldWomanConcern:
	delay_16
	delay_16
	emote_question_mark
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ManConcern:
	emote_question_mark
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_GabbyExit:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_Movement_TyExit:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_Movement_Unused:
	walk_down
	walk_in_place_faster_up
	step_end

SlateportCity_Movement_SternEnterHarbor:
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_Movement_SternWatchGabbyAndTyExit:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	step_end

SlateportCity_Movement_PlayerEnterHarbor:
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_right
	walk_up
	step_end

SlateportCity_Movement_PlayerFaceStern:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

SlateportCity_EventScript_Ty::
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
	end

SlateportCity_EventScript_Gabby::
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man3::
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
	end

SlateportCity_EventScript_BerryPowderClerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
	giveitem ITEM_POWDER_JAR
	setflag FLAG_RECEIVED_POWDER_JAR
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ReceivedPowderJar::
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
	special DisplayBerryPowderVendorMenu
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ExplainBerryPowder::
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ChooseBerryPowderItem::
	message SlateportCity_Text_ExchangeWhatWithIt
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, SlateportCity_EventScript_EnergyPowder
	case 1, SlateportCity_EventScript_EnergyRoot
	case 2, SlateportCity_EventScript_HealPowder
	case 3, SlateportCity_EventScript_RevivalHerb
	case 4, SlateportCity_EventScript_Protein
	case 5, SlateportCity_EventScript_Iron
	case 6, SlateportCity_EventScript_Carbos
	case 7, SlateportCity_EventScript_Calcium
	case 8, SlateportCity_EventScript_Zinc
	case 9, SlateportCity_EventScript_HPUp
	case 10, SlateportCity_EventScript_PPUp
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
	end

SlateportCity_EventScript_EnergyPowder::
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_EnergyRoot::
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
	setvar VAR_0x8009, 80
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HealPowder::
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
	setvar VAR_0x8008, ITEM_HEAL_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_RevivalHerb::
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
	setvar VAR_0x8009, 300
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Protein::
	bufferitemname STR_VAR_1, ITEM_PROTEIN
	setvar VAR_0x8008, ITEM_PROTEIN
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Iron::
	bufferitemname STR_VAR_1, ITEM_IRON
	setvar VAR_0x8008, ITEM_IRON
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Carbos::
	bufferitemname STR_VAR_1, ITEM_CARBOS
	setvar VAR_0x8008, ITEM_CARBOS
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Calcium::
	bufferitemname STR_VAR_1, ITEM_CALCIUM
	setvar VAR_0x8008, ITEM_CALCIUM
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Zinc::
	bufferitemname STR_VAR_1, ITEM_ZINC
	setvar VAR_0x8008, ITEM_ZINC
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HPUp::
	bufferitemname STR_VAR_1, ITEM_HP_UP
	setvar VAR_0x8008, ITEM_HP_UP
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_PPUp::
	bufferitemname STR_VAR_1, ITEM_PP_UP
	setvar VAR_0x8008, ITEM_PP_UP
	setvar VAR_0x8009, 3000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_CancelPowderItemSelect::
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_TryBuyBerryPowderItem::
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
	giveitem VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	special TakeBerryPowder
	special PrintPlayerBerryPowderAmount
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NoRoomForBerryPowderItem::
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NotEnoughBerryPowder::
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ScottBattleTentScene::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 10, 12
	waitdooranim
	addobject LOCALID_SCOTT
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
	waitmovement 0
	closedoor 10, 12
	waitdooranim
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
	waitmovement 0
	removeobject LOCALID_SCOTT
	addvar VAR_SCOTT_STATE, 1
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	releaseall
	end

SlateportCity_Movement_PushPlayerDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

SlateportCity_Movement_PlayerWatchScottExit:
	delay_16
	walk_in_place_faster_right
	step_end

SlateportCity_Movement_ScottExitBattleTent:
	delay_8
	walk_down
	step_end

SlateportCity_Movement_ScottExitAfterBattleTent:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_EventScript_BerryCrushRankingsSign::
	lockall
	special ShowBerryCrushRankings
	waitstate
	releaseall
	end

SlateportCity_Text_EnergyGuruSellWhatYouNeed:
	.string "I'm the ENERGY GURU! I'll go for it and\n"
	.string "sell you what you need!$"

SlateportCity_Text_OhYourPokemon:
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon:
	.string "Went for it stupendously!\p"
	.string "As its reward, please give it this\n"
	.string "EFFORT RIBBON.$"

SlateportCity_Text_ReceivedEffortRibbon:
	.string "{PLAYER} received the EFFORT RIBBON.$"

SlateportCity_Text_PutEffortRibbonOnMon:
	.string "{PLAYER} put the EFFORT RIBBON\n"
	.string "on {STR_VAR_1}.$"

SlateportCity_Text_GoForItLittleHarder:
	.string "You have to go for it a little harder.\p"
	.string "If you do, I'll give your POKéMON\n"
	.string "something nice.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt:
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
	.string "RIBBON looks good on it!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
	.string "The light of the lighthouse reaches\n"
	.string "dozens of miles away.\p"
	.string "I wonder if it doesn't startle POKéMON\n"
	.string "in the sea.$"

SlateportCity_Text_SeaweedFullOfLife:
	.string "Ooh, look at this!\p"
	.string "The seaweed you can get around these\n"
	.string "parts is fresh and full of life.\p"
	.string "Why, it looks like it can even rear up\n"
	.string "and attack!$"

SlateportCity_Text_HowTownIsBornAndGrows:
	.string "Where the water is clean, the fruits\n"
	.string "of bountiful harvest gather.\p"
	.string "And where people gather, a market\n"
	.string "soon starts.\p"
	.string "That is how a town is born and grows.$"

SlateportCity_Text_SlateportWonderfulPlace:
	.string "Shopping where you can breathe the\n"
	.string "scent of the ocean…\p"
	.string "SLATEPORT is such a wonderful place!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
	.string "If you put DOLLS or CUSHIONS on\n"
	.string "the floor, they'll get dirty.\p"
	.string "I'm going to buy some BRICKS so my\n"
	.string "DOLLS and CUSHIONS won't get dirty\l"
	.string "when I leave them out.$"

SlateportCity_Text_GoingToCompeteInBattleTent:
	.string "Wroooar! I'm going to compete in\n"
	.string "the BATTLE TENT, too!\p"
	.string "But before that, I need to catch\n"
	.string "some POKéMON!$"

SlateportCity_Text_BushedHikingFromMauville:
	.string "Whew… I'm just bushed…\p"
	.string "I hiked over from MAUVILLE CITY.\n"
	.string "But, boy, this city's huge.\p"
	.string "If I'd known this, I would've ridden\n"
	.string "my BIKE here.$"

SlateportCity_Text_EveryoneCallsHimCaptStern:
	.string "STERN, the fellow who built the\n"
	.string "MUSEUM, also happens to be the leader\l"
	.string "of an undersea exploration team.\p"
	.string "So, everyone calls him CAPT. STERN.$"

SlateportCity_Text_WhatsLongLineOverThere:
	.string "What is that over there?\n"
	.string "That long line…$"

SlateportCity_Text_VisitedMuseumOften:
	.string "When I was a child, I visited\n"
	.string "the MUSEUM often.\p"
	.string "I used to dream about the mysteries of\n"
	.string "the sea after seeing the exhibits.$"

SlateportCity_Text_QuitPushing:
	.string "Hey, there! Quit pushing!\n"
	.string "This is the line, can't you see?$"

SlateportCity_Text_AquaHasPolicy:
	.string "TEAM AQUA has a policy of\n"
	.string "assembling and dispersing at\l"
	.string "the operation site.$"

SlateportCity_Text_BossIsBrilliant:
	.string "Our BOSS is brilliant.\p"
	.string "What would he want to do with\n"
	.string "a MUSEUM now?$"

SlateportCity_Text_WhatsNewSchemeIWonder:
	.string "What's the new scheme, I wonder?\p"
	.string "Our BOSS is scary when he's mad, so\n"
	.string "I'd better not screw things up…$"

SlateportCity_Text_ShouldTakeItAll:
	.string "If there's something we need in\n"
	.string "the MUSEUM, we should take it all!$"

SlateportCity_Text_DontButtIn:
	.string "Hey, you there!\n"
	.string "Don't butt in!$"

SlateportCity_Text_RemindsMeOfLongLineForGames:
	.string "A long line, huh?\p"
	.string "It reminds me of the times I lined up to\n"
	.string "buy smash-hit games…$"

SlateportCity_Text_WhyAreWeLiningUp:
	.string "Why are we even lining up and paying?\n"
	.string "We should just march in!$"

SlateportCity_Text_WhatDoYouWant:
	.string "What?\n"
	.string "What do you want?$"

SlateportCity_Text_IllReadSignForYou:
	.string "You want to read this sign?\n"
	.string "I'll read it for you!$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
	.string "Let's see…\p"
	.string "Um… I think it says something like\n"
	.string "“the life in the sea is endless.”\p"
	.string "Yup, I'm pretty sure that's what\n"
	.string "it says.$"

SlateportCity_Text_ShouldveBroughtMyGameBoy:
	.string "Grumble…\p"
	.string "I should've brought my Game Boy\n"
	.string "Advance so I wouldn't get bored in line…\p"
	.string "Grumble…$"

SlateportCity_Text_HotSpringsAfterOperation:
	.string "When this operation's over, I'll take\n"
	.string "you to a hot spring spa!\p"
	.string "That's what our leader said.\n"
	.string "I can't wait!$"

SlateportCity_Text_SeaIsSoWet:
	.string "The sea is just so vast…\p"
	.string "Could the sea have been made by\n"
	.string "the tears shed by POKéMON?$"

SlateportCity_Text_SinkOldBoats:
	.string "Do you know what they do with old\n"
	.string "ships that become too creaky to sail?\p"
	.string "They sink them in the sea so they\n"
	.string "become habitats for POKéMON.$"

SlateportCity_Text_BuyTooMuch:
	.string "Whenever I visit here, I get carried\n"
	.string "away and buy too much.$"

SlateportCity_Text_GetNameRaterToHelpYou:
	.string "If you want to change your POKéMON's\n"
	.string "nickname, you'll have to get the NAME\l"
	.string "RATER to help you.$"

SlateportCity_Text_CantChangeTradeMonName:
	.string "Any POKéMON you get in a trade,\n"
	.string "you can't change its nickname.\p"
	.string "The original TRAINER's love for that\n"
	.string "POKéMON is in the nickname.$"

SlateportCity_Text_BattleTentBuiltRecently:
	.string "Recently, a BATTLE TENT was built\n"
	.string "in SLATEPORT.\p"
	.string "GYMS are fun, but the BATTLE TENT's\n"
	.string "awesome in its own way.\p"
	.string "You should go find tough POKéMON\n"
	.string "for the BATTLE TENT!$"

SlateportCity_Text_CaptSternBeingInterviewed:
	.string "I was hoping that it was a famous star\n"
	.string "so I could get an autograph.\p"
	.string "But who's that being interviewed?\n"
	.string "Isn't that CAPT. STERN?$"

SlateportCity_Text_InterviewerSoCool:
	.string "That lady interviewer is so cool\n"
	.string "and pretty.\p"
	.string "When I grow up, I'm going to be\n"
	.string "an international journalist!$"

SlateportCity_Text_SternSaysDiscoveredSomething:
	.string "CAPT. STERN says they discovered\n"
	.string "something at the bottom of the sea.\p"
	.string "I wonder what it is?\n"
	.string "What could it be?$"

SlateportCity_Text_CaptainComeBackWithBigFish:
	.string "What's going on here?\p"
	.string "Did the good CAPTAIN come back with\n"
	.string "a big fish from the ocean floor?$"

SlateportCity_Text_AmIOnTV:
	.string "Hey! Are you watching?\n"
	.string "Am I on TV?$"

SlateportCity_Text_CaptainsACelebrity:
	.string "A TV interview! Here!\n"
	.string "The CAPTAIN's a celebrity!$"

SlateportCity_Text_BigSmileForCamera:
	.string "TY: Okay, CAPT. STERN, a big smile\n"
	.string "for the camera!$"

SlateportCity_Text_MostInvaluableExperience:
	.string "GABBY: I see, I see. You've had a most\n"
	.string "invaluable experience…$"

SlateportCity_Text_SternMoveAheadWithExploration:
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
	.string "move ahead with our exploration.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview:
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
	.string "Thank you for taking the time from\l"
	.string "your busy schedule to talk to us.\p"
	.string "We hope we can interview you again\n"
	.string "with news of more discoveries!$"

SlateportCity_Text_SternWhewFirstInterview:
	.string "CAPT. STERN: Whew…\p"
	.string "That was my first time to be filmed for\n"
	.string "TV. That was nerve-wracking.$"

SlateportCity_Text_OhPlayerWeMadeDiscovery:
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "You're looking great!\p"
	.string "We made a huge discovery on our last\n"
	.string "seafloor exploration.\p"
	.string "We found an underwater cavern on\n"
	.string "ROUTE 128.\p"
	.string "We think it's the habitat of a POKéMON\n"
	.string "that's said to have been long extinct.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
	.string "Fufufu…\n"
	.string "CAPT. STERN, I presume.\p"
	.string "We of TEAM AQUA will assume\n"
	.string "control of your submarine!\p"
	.string "Your objections are meaningless!\n"
	.string "We expect your total cooperation!\p"
	.string "Fufufu…\n"
	.string "Just watch and learn what TEAM\l"
	.string "AQUA has planned!$"

SlateportCity_Text_SternWhatWasAllThat:
	.string "CAPT. STERN: What was that all about?\p"
	.string "It sounded like someone using\n"
	.string "a megaphone…\p"
	.string "Where did it come from?$"

SlateportCity_Text_FromHarborTryingToTakeSub:
	.string "It's from the HARBOR!\p"
	.string "The submarine!\n"
	.string "They're trying to take it!$"

SlateportCity_Text_PleaseComeWithMe:
	.string "{PLAYER}{KUN}!\n"
	.string "Please, come with me!$"

SlateportCity_Text_BattleTentSign:
	.string "BATTLE TENT SLATEPORT SITE\n"
	.string "“Find it! The ultimate POKéMON!”$"

SlateportCity_Text_SternsShipyardWantedSign:
	.string "STERN'S SHIPYARD\p"
	.string "“Wanted: A sailor capable of sailing\n"
	.string "in all currents.”$"

SlateportCity_Text_SternsShipyardNearsCompletion:
	.string "STERN'S SHIPYARD\p"
	.string "“The ferry S.S. TIDAL nears\n"
	.string "completion for serving the ports of\l"
	.string "SLATEPORT and LILYCOVE.”$"

SlateportCity_Text_SternsShipyardFerryComplete:
	.string "STERN'S SHIPYARD\p"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
	.string "ferry S.S. TIDAL is handled at the\l"
	.string "HARBOR.”$"

SlateportCity_Text_PokemonFanClubSign:
	.string "POKéMON FAN CLUB\n"
	.string "“Calling all fans of POKéMON!”$"

SlateportCity_Text_OceanicMuseumSign:
	.string "“The endless sea sustains\n"
	.string "all life.”\p"
	.string "OCEANIC MUSEUM$"

SlateportCity_Text_CitySign:
	.string "SLATEPORT CITY\p"
	.string "“The port where people and POKéMON\n"
	.string "cross paths.”$"

SlateportCity_Text_MarketSign:
	.string "SLATEPORT MARKET\n"
	.string "“Unique items found nowhere else!”$"

SlateportCity_Text_HarborFerryUnderConstruction:
	.string "SLATEPORT HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in the SHIPYARD.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

SlateportCity_Text_HarborSign:
	.string "SLATEPORT HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

SlateportCity_Text_NameRatersHouseSign:
	.string "NAME RATER'S HOUSE\n"
	.string "“POKéMON nicknames rated.”$"

SlateportCity_Text_ExplainBerries:
	.string "If a wild POKéMON gets hurt, it heals\n"
	.string "itself by chewing on BERRIES.\p"
	.string "Did you know that?\p"
	.string "Somebody saw that and got the idea\n"
	.string "of making medicine from BERRIES.\p"
	.string "Did you know that?\p"
	.string "To turn BERRIES into medicine,\n"
	.string "they must be crushed into powder.\p"
	.string "Did you know that?\p"
	.string "You seem to have an interest\n"
	.string "in BERRIES!\p"
	.string "I've got something good for someone\n"
	.string "like you.$"

SlateportCity_Text_ExplainBerryPowder:
	.string "I recently had machines installed at\n"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
	.string "The BERRY CRUSH machines are at\n"
	.string "the DIRECT CORNER upstairs.\p"
	.string "Did you know?\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using those machines?\p"
	.string "I can make you all sorts of medicine\n"
	.string "if you bring me lots of BERRY POWDER.$"

SlateportCity_Text_BroughtMeSomeBerryPowder:
	.string "Have you brought me some\n"
	.string "BERRY POWDER?$"

SlateportCity_Text_ExchangeWhatWithIt:
	.string "What would you like to exchange\n"
	.string "it with?$"

SlateportCity_Text_ExchangeBerryPowderForItem:
	.string "Okay, you want to exchange your\n"
	.string "BERRY POWDER for one {STR_VAR_1}?$"

SlateportCity_Text_DontHaveEnoughBerryPowder:
	.string "Oh, dear. You don't have enough\n"
	.string "BERRY POWDER.$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse:
	.string "This is fine BERRY POWDER.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more of your\n"
	.string "BERRY POWDER for something else?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe:
	.string "Okay! When you get some more\n"
	.string "BERRY POWDER, bring it to me, please!$"

SlateportCity_Text_ComeBackToTradeBerryPowder:
	.string "Come back if you'd like to trade your\n"
	.string "BERRY POWDER for some medicine.\p"
	.string "I'm always running a bazaar here.\p"
	.string "Did you know?$"

SlateportCity_Text_YouDroveTeamAquaAway:
	.string "SCOTT: Huh?\n"
	.string "I'm sure I met you somewhere before.\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name's SCOTT.\p"
	.string "I just saw TEAM AQUA run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_MaybeThisTrainer:
	.string "SCOTT: Hmm…\n"
	.string "Maybe, just maybe, this TRAINER…$"

SlateportCity_Text_LetsRegisterEachOther:
	.string "SCOTT: All right! I think you're going\n"
	.string "to become a good friend.\p"
	.string "So, let's register each other in our\n"
	.string "POKéNAVS.\p"
	.string "… … … … … …$"

SlateportCity_Text_RegisteredScott:
	.string "Registered this SCOTT person\n"
	.string "in the POKéNAV.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
	.string "SCOTT: What I'd like to do is tag along\n"
	.string "with you, but I do want to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I'll be off to roam other towns\n"
	.string "a bit more.\p"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge:
	.string "SCOTT: Oh, hey!\n"
	.string "If it isn't {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
	.string "to take the BATTLE TENT challenge?\p"
	.string "Yeah! That's a good idea!\n"
	.string "That's a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the BATTLE TENT!\p"
	.string "Give it your best effort!$"

SlateportCity_Text_Areyoulost:
	.string "The exit's on top.\n"
	.string "This is the cargo handling area.\p"
	.string "Now, move it.$"


SlateportCity_EventScript_ScammersFront::
	lock
	setvar VAR_TEMP_A, 1
	playse SE_PIN
	applymovement LOCALID_SCAMMER_1, Common_Movement_ExclamationMark
	applymovement LOCALID_SCAMMER_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto SlateportCity_EventScript_Scammers
	
SlateportCity_EventScript_ScammersBack::
	lock
	setvar VAR_TEMP_A, 2
	playse SE_PIN
	applymovement LOCALID_SCAMMER_1, Common_Movement_ExclamationMark
	applymovement LOCALID_SCAMMER_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_WalkDown
	applymovement LOCALID_SCAMMER_2, Common_Movement_WalkDown
	goto SlateportCity_EventScript_Scammers
	

SlateportCity_EventScript_Scammers::
	setvar VAR_SLATEPORT_SCAMMERS, 1
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_Prejudices, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_SCAMMERS 0, TRUE
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_WeDontBite, MSGBOX_DEFAULT
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_OrCrunch, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, SlateportCity_Movement_ScammerLooksAtOther
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_YeahListen, MSGBOX_DEFAULT
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_Orphans, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, SlateportCity_Movement_ScammerLooksAtOther
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_YeahOrphans, MSGBOX_DEFAULT
	speakername NULL
	msgbox SlateportCity_Text_ShovePokedoll, MSGBOX_DEFAULT
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_LittleBuddies, MSGBOX_DEFAULT
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_AndTheirPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, SlateportCity_Movement_ScammerLooksAtOther
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_ItsCheap, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox SlateportCity_Text_Offer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_Eventscript_BoughtDoll
	hidemoneybox
	msgbox SlateportCity_Text_CantDoThat, MSGBOX_DEFAULT
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_OnChristmas, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay32
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_ItsNotChristmas, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SCAMMER_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_ItsIsChristmasAfterAll, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox SlateportCity_Text_ItsNotMuch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_Eventscript_BoughtDoll
	hidemoneybox
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_FuckYou, MSGBOX_DEFAULT
	SlateportCity_Scammers_Fight::
	trainerbattle_no_intro TRAINER_ROBBERS, SlateportCity_Defeat_Scammers
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_IllLeave, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_A, 1, SlateportCity_EventScript_Scammer1LeavesBack
	call_if_eq VAR_TEMP_A, 2, SlateportCity_EventScript_Scammer1LeavesFront
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_OnChristmasToo, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_2, Common_Movement_WalkLeft5
	waitmovement 0
	applymovement LOCALID_SCAMMER_2, Common_Movement_WalkUp6
	waitmovement 0
	removeobject LOCALID_SCAMMER_1
	removeobject LOCALID_SCAMMER_2
	msgbox SlateportCity_Text_GotPokeDoll, MSGBOX_DEFAULT
	giveitem ITEM_POKE_DOLL
	release
	end


SlateportCity_EventScript_Scammer1LeavesBack:
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_BackUp
	applymovement LOCALID_SCAMMER_1, SlateportCity_Movement_BackUp
	applymovement LOCALID_SCAMMER_2, SlateportCity_Movement_BackUp
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_WalkLeft5
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_WalkUp6
	waitmovement 0
	return

SlateportCity_EventScript_Scammer1LeavesFront:
	applymovement LOCALID_SCAMMER_1, Common_Movement_WalkLeft5
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_WalkUp6
	waitmovement 0
	return

SlateportCity_Eventscript_BoughtDoll::
	checkmoney 5000
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Eventscript_NoMoney
	removemoney 5000
	hidemoneybox
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_YoureSoKind, MSGBOX_DEFAULT
	speakername NULL
	giveitem ITEM_POKE_DOLL
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_LifeSaver, MSGBOX_DEFAULT
	waitmovement 0
	msgbox SlateportCity_Text_OnChristmas, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay32
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_ItsNotChristmas, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SCAMMER_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_YeahOnChristmasBye, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_A, 1, SlateportCity_EventScript_Scammer1LeavesBack
	call_if_eq VAR_TEMP_A, 2, SlateportCity_EventScript_Scammer1LeavesFront
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_AndMerryChristmas, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_2, Common_Movement_WalkLeft5
	waitmovement 0
	applymovement LOCALID_SCAMMER_2, Common_Movement_WalkUp6
	waitmovement 0
	removeobject LOCALID_SCAMMER_1
	removeobject LOCALID_SCAMMER_2
	release
	end


SlateportCity_Eventscript_NoMoney::
	hidemoneybox
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_WaitASecond, MSGBOX_DEFAULT
	speakername Common_Name_Scammer2
	msgbox SlateportCity_Text_OnChristmas, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay32
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_ItsNotChristmas, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SCAMMER_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCAMMER_1, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Scammer1
	msgbox SlateportCity_Text_YeahOnChristmas, MSGBOX_DEFAULT
	goto SlateportCity_Scammers_Fight

SlateportCity_Movement_BackUp:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

SlateportCity_Text_Prejudices:
	.string "Hi there!\n"
	.string "Can we borrow a minute or two?\p"
	.string "Great!\p"
	.string "Say, do you have any prejudices\n"
	.string "against former anti-establishment\l"
	.string "entrepreneurs?$"

SlateportCity_Text_WeDontBite:
	.string "Hey, no, don't worry!\n"
	.string "We don't bite!$"

SlateportCity_Text_OrCrunch:
	.string "Or crunch.$"

SlateportCity_Text_YeahListen:
	.string "…Yeah, or crunch.\n"
	.string "No, look…\p"
	.string "I happen to be an ex-member of\n"
	.string "Team Aqua.\p"
	.string "And this guy, he was in Team Magma.\p"
	.string "And you know how we managed to get past\n"
	.string "our differences?$"

SlateportCity_Text_Orphans:
	.string "Orphans.$"

SlateportCity_Text_YeahOrphans:
	.string "…Yeah, orphans.\p"
	.string "Listen, we've turned over a new leaf,\n"
	.string "right?\p"
	.string "And we're doing a fundraiser.\n"
	.string "For orphans.\p"
	.string "We're selling Poké Dolls.\n"
	.string "Also made by orphans.\p"
	.string "All the profits are going to them,\n"
	.string "of course.\p"
	.string "And the dolls are great quality!\n"
	.string "Not like the kind you find in stores.\p"
	.string "Here, look, check it out.$"

SlateportCity_Text_ShovePokedoll:
	.string "The man forcefully shoves a Poké Doll\n"
	.string "in your hands.$"

SlateportCity_Text_LittleBuddies:
	.string "See?\n"
	.string "Great, ain't it?\p"
	.string "And you're a Trainer, no?\p"
	.string "I'm sure your little buddies will\n"
	.string "love it, if you bought it.\p"
	.string "The orphans would love it, too.$"

SlateportCity_Text_AndTheirPokemon:
	.string "And their Pokémon too!$"

SlateportCity_Text_ItsCheap:
	.string "…Yeah, and their Pokémon too.\n"
	.string "The Pokémon are orphans, as well.\p"
	.string "Tragic story.$"

SlateportCity_Text_Offer:
	.string "Anyway, listen.\p"
	.string "This doll?\n"
	.string "Yours for just ¥5,000.\p"
	.string "It's a steal, right?$"

SlateportCity_Text_CantDoThat:
	.string "No, look, you can't…\n"
	.string "You're already holding it, man.\p"
	.string "You've touched it, you got your\n"
	.string "hands on it.\p"
	.string "You can't just give it back.\p"
	.string "Look, think of the orphans.\n"
	.string "They're crying.\p"
	.string "And I mean, you got money, right?\n"
	.string "Look at you.\p"
	.string "Your parents bought you those clothes?\n"
	.string "They're pretty fancy.\p"
	.string "Come on, man.\p"
	.string "Would you really do this to the poor\n"
	.string "orphans?$"

SlateportCity_Text_OnChristmas:
	.string "And on Christmas, too.$"

SlateportCity_Text_ItsNotChristmas:
	.string "It's not C…$"

SlateportCity_Text_ItsIsChristmasAfterAll:
	.string "Yeah!\n"
	.string "On Christmas, too!\p"
	.string "You'd be heartless to say no.\p"
	.string "They'll die.\n"
	.string "They'll die, and it'll be your fault.$"

SlateportCity_Text_ItsNotMuch:
	.string "Come on.\n"
	.string "It's just ¥5,000.$"

SlateportCity_Text_FuckYou:
	.string "… … …\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "…Look.\n"
	.string "I get how it is.\p"
	.string "You're a smart one, eh?\p"
	.string "Did your parents tell you not to talk\n"
	.string "to strangers?\p"
	.string "Well, great job.\n"
	.string "You got me.\p"
	.string "There were never any orphans.\n"
	.string "Kid orphans, Pokémon orphans, whatever.\p"
	.string "We were trying to scam you.\p"
	.string "But now…\n"
	.string "This is no longer a scam.\p"
	.string "This is a robbery.\p"
	.string "Could have prevented it if you just\n"
	.string "gave us the dough.\p"
	.string "So…\n"
	.string "Get ready, kid.$"

SlateportCity_Text_IllLeave:
	.string "Ok, ok, yeesh!\n"
	.string "I get it!\p"
	.string "I'll leave!\p"
	.string "Can't even work an honest job\n"
	.string "anymore!$"

SlateportCity_Text_OnChristmasToo:
	.string "…And on Christmas, too.\n"
	.string "For shame.$"

SlateportCity_Text_GotPokeDoll:
	.string "… … …\p"
	.string "You're left with a Poké Doll\n"
	.string "in your hands.$"

SlateportCity_Text_WaitASecond:
	.string "Thanks a-\n"
	.string "Wait a second.\p"
	.string "That's not enough money, is it?\p"
	.string "You're trying to pull a fast one\n"
	.string "on us, aren't you?$"

SlateportCity_Text_YeahOnChristmas:
	.string "…Yeah, on Christmas too.\n"
	.string "No shame at all.\p"
	.string "I guess we're alike, then.\n"
	.string "See, the orphans? Not real.\p"
	.string "Kid orphans, Pokémon orphans, whatever.\n"
	.string "We were trying to scam you.\p"
	.string "But now…\n"
	.string "This is no longer a scam.\p"
	.string "This is a robbery.\p"
	.string "Could have prevented it if you just\n"
	.string "gave us the dough.\p"
	.string "So…\n"
	.string "Get ready.$"
	
SlateportCity_Text_YoureSoKind:
	.string "That's right!\n"
	.string "You made the right choice, man!\p"
	.string "Those orphans are gonna be so\n"
	.string "happy!\p"
	.string "Their Pokémon too!\p"
	.string "What can I say?\n"
	.string "The doll is yours!$"

SlateportCity_Text_LifeSaver:
	.string "I don't…\n"
	.string "I don't even know how to thank you!\p"
	.string "Those orphans, they would have starved\n"
	.string "starved without you!\p"
	.string "And you saved them all!$"

SlateportCity_Text_YeahOnChristmasBye:
	.string "Yeah! You saved Christmas!\p"
	.string "Well, catch you around, then\n"
	.string "eh?$"

SlateportCity_Text_AndMerryChristmas:
	.string "And merry Christmas!$"


SlateportCity_Defeat_Scammers:
	.string "That backfired.$"

Common_Name_Scammer1:
	.string "Weird Guy$"

Common_Name_Scammer2:
	.string "Weird Guy 2$"

SlateportCity_Movement_ScammerLooksAtOther:
	face_right
	delay_16
	delay_16
	delay_16
	face_down
	step_end
