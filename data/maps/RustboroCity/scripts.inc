.set LOCALID_LITTLE_BOY, 7
.set LOCALID_LITTLE_GIRL, 8
.set LOCALID_LOOKER, 33
.set LOCALID_DEVON, 9
.set LOCALID_RIVAL, 13
.set LOCALID_SCIENTIST, 15
.set LOCALID_BOYPROTESTER, 18
.set LOCALID_MAGMA_GRUNT, 22
.set LOCALID_GIRLPROTESTER, 23
.set LOCALID_STEVEN, 35
.set LOCALID_ENGINEER, 29
.set LOCALID_WANDAS_BF, 40
.set LOCALID_PEEKO, 41
.set LOCALID_MR_BRINEY, 32
.set LOCALID_SILPH_SCIENTIST, 42

RustboroCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
	.byte 0

RustboroCity_EventScript_ResetGymTrainers::
	cleartrainerflag TRAINER_JOSH
	clearflag FLAG_RUSTBORO_JOSH
	cleartrainerflag TRAINER_TOMMY
	clearflag FLAG_RUSTBORO_TOMMY
	cleartrainerflag TRAINER_MARC
	clearflag FLAG_RUSTBORO_MARC
	releaseall
	end


RustboroCity_EventScript_GameBoy::
	msgbox  RustboroCity_Text_Gameboy, MSGBOX_NPC
	release
	end



RustboroCity_OnTransition:
	call PetalburgToRustboroHandleTrainers
	call Route115_HandleTrainers
	setflag FLAG_VISITED_RUSTBORO_CITY
	call Common_EventScript_SetupRivalGfxId
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
	call_if_eq VAR_RUSTBORO_CITY_STATE, 4, RustboroCity_EventScript_MoveEngineer
	call_if_eq VAR_RUSTBORO_CITY_STATE, 11, RustboroCity_EventScript_MoveEngineer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
	call_if_eq VAR_RUSTBORO_CITY_STATE, 10, RustboroCity_EventScript_PositionForLookerEvent
	setvar VAR_PELIPPER, 37
	end


RustboroCity_EventScript_PositionScientistForExit::
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
	end

RustboroCity_EventScript_PositionScientistLeftExit::
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
	end

RustboroCity_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

RustboroCity_EventScript_MoveEngineer:
	setobjectxyperm LOCALID_ENGINEER, 38, 8
	setobjectmovementtype LOCALID_ENGINEER, MOVEMENT_TYPE_FACE_DOWN
	return

RustboroCity_OnFrame:
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0

RustboroCity_EventScript_PositionForLookerEvent:
	call RustboroCity_EventScript_MoveEngineer
	setobjectxy LOCALID_MR_BRINEY, 34, 8
	setobjectxyperm LOCALID_MR_BRINEY, 34, 8
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_FACE_LEFT
	setobjectxy LOCALID_LOOKER, 34, 10
	setobjectxyperm LOCALID_LOOKER, 34, 10
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_LEFT
	end


RustboroCity_EventScript_Mr_Briney::
speakername Common_Name_Briney
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 10, RustboroCity_EventScript_Mr_BrineyHappy
	msgbox RustboroCity_Text_Mr_Briney, MSGBOX_NPC
	end


RustboroCity_EventScript_Mr_BrineyHappy:
	msgbox RustboroCity_Text_Mr_BrineyHappy, MSGBOX_DEFAULT
	closemessage
	end


RustboroCity_EventScript_WandasBf::
	speakername Common_Name_Riley
	msgbox RustboroCity_Text_Wandasbf, MSGBOX_NPC
	end

RustboroCity_EventScript_ScientistAddMatchCall::
	lockall
	setvar VAR_ROUTE104_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
	waitmovement 0
	playse SE_EXIT
	delay 10
	addobject LOCALID_SCIENTIST
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
	waitmovement 0
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HAS_MATCH_CALL
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 20
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
	closemessage
	delay 20
	goto RustboroCity_EventScript_MatchCallTutorial

RustboroCity_EventScript_PleaseSelectPokenav::
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
	closemessage
	delay 10
	goto RustboroCity_EventScript_MatchCallTutorial

RustboroCity_EventScript_OldMan::
	msgbox Rustborocity_Text_OldMan, MSGBOX_NPC
	end

RustboroCity_EventScript_Scientist::
	lock
	goto_if_set FLAG_SILPH_SCIENTIST, RustboroCity_EventScript_ScientistHelped
	msgbox RustboroCity_Text_ScientistWondering, MSGBOX_DEFAULT
	checkitem ITEM_BOOSTER_ENERGY
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_EventScript_Scientist_BoosterEnergy
	release
	end

RustboroCity_EventScript_Scientist_BoosterEnergy::
	playse SE_PIN
	applymovement LOCALID_SILPH_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SILPH_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	faceplayer
	msgbox RustboroCity_Text_BoosterEnergy, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON
	givemon SPECIES_PORYGON, 10
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_EventScript_SendPorygonParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_EventScript_SendPorygonPC
	goto Common_EventScript_NoMoreRoomForPokemon
	RustboroCity_EventScript_ReceivedPorygon::
	msgbox RustboroCity_Text_Porygon, MSGBOX_DEFAULT
	setflag FLAG_SILPH_SCIENTIST
	release
	end


RustboroCity_EventScript_SendPorygonParty::
	call RustboroCity_EventScript_ReceivedPorygonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_ReceivedPorygon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_EventScript_ReceivedPorygon
	end


RustboroCity_EventScript_PorygonTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto RustboroCity_EventScript_ReceivedPorygon
	end


RustboroCity_EventScript_SendPorygonPC::
	call RustboroCity_EventScript_ReceivedPorygonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_PorygonTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_EventScript_PorygonTransferredToPC
	end


RustboroCity_EventScript_ReceivedPorygonFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_PORYGON
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_Text_ObtainedPorygon
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
	return

RustboroCity_Text_ObtainedPorygon:
	.string "{PLAYER} obtained Porygon.$"

RustboroCity_EventScript_ScientistHelped::
	msgbox RustboroCity_Text_WordOfAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Text_WordOfAdvice:
	.string "We are friends now, yes…?\p"
	.string "So, I have word of advice for you.\n"
	.string "Run back to Johto.\p"
	.string "You see, Devon…\p"
	.string "Meddling with some dangerous forces,\n"
	.string "they are.\p"
	.string "I do not mean to alarm you, but that\n"
	.string "device you got…\p"
	.string "It is like a battery for a very dangerous\n"
	.string "form of energy.\p"
	.string "Do not worry… This one is too small\n"
	.string "to pose a problem.\p"
	.string "But… You have heard of the Mauville\n"
	.string "Disaster, yes…?\p"
	.string "In the near future, similar tragedies\n"
	.string "could be commonplace.\p"
	.string "I need to investigate further…$"


RustboroCity_Text_ScientistWondering:
	.string "These Devon crooks…\n"
	.string "I know they're hiding something…\p"
	.string "I need to find out what…\n"
	.string "But… How…$"


RustboroCity_Text_BoosterEnergy:
	.string "You…\p"
	.string "My energy detector is going crazy.\p"
	.string "You have somemething with you, don't\n"
	.string "you…?\p"
	.string "Oh, please… Do not worry…\n"
	.string "I only intend to take a look at it…\p"
	.string "… … … … …\p"
	.string "Ah, this…\n"
	.string "This is top secret Devon technology…\p"
	.string "How in the world did you…?\p"
	.string "… … … … …\p"
	.string "Well then, I will be introducing myself.\p"
	.string "I am a scientist working for the cutting\n"
	.string "edge company Silph Co., from Kanto…\p"
	.string "…Ah, you are from Johto, yourself?\n"
	.string "Splendid.\p"
	.string "You see, we think that Devon is very\n"
	.string "close to a major breakthrough…\p"
	.string "And this… Booster Energy, is it?\n"
	.string "Intriguing.\p"
	.string "Oh, you can keep it.\n"
	.string "At the present state, it is useless.\p"
	.string "But… Such concentrated energy…\n"
	.string "Yes, I think I see…\p"
	.string "I will need more confirmation, but…\p"
	.string "Oh… Do not tell a single soul about me.\n"
	.string "I am here in a covert mission, you see…\p"
	.string "Here, I have a gift for you…\n"
	.string "As long as you stay quiet…$"

RustboroCity_Text_Porygon:
	.string "This is Porygon, the digital Pokémon…\p"
	.string "A Silph Co. creation, replicated by Devon\n"
	.string "without our permission…\p"
	.string "Is it not fair, then, that we appropriate\n"
	.string "their research in turn…?\p"
	.string "Yes, of course it is.\n"
	.string "Now, once again: you did not see me.$"

RustboroCity_EventScript_MatchCallTutorial::
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	special ScriptMenu_CreateStartMenuForPokenavTutorial
	waitstate
	switch VAR_RESULT
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
	special OpenPokenavForTutorial
	waitstate
	delay 20
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SCIENTIST
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
	setvar VAR_RUSTBORO_CITY_STATE, 7
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	releaseall
	end

RustboroCity_Movement_ScientistWalkInPlaceDown:
	walk_in_place_down
	step_end

RustboroCity_Movement_PlayerWalkDown:
	walk_down
	step_end

RustboroCity_Movement_ScientistApproachPlayer:
	walk_down
	delay_16
	step_end

@ Unused
RustboroCity_Movement_ScientistWalkAroundPlayer:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_up
	delay_16
	step_end

RustboroCity_Movement_ScientistLeave:
	walk_up
	step_end

RustboroCity_EventScript_FatMan::
	lock
	faceplayer
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_FatManSawGrunt::
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_DevonEmployee2::
	lock
	faceplayer
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_MagmaProtest::
	msgbox RustboroCity_Text_MagmaProtest, MSGBOX_NPC
	applymovement LOCALID_MAGMA_GRUNT, Common_Movement_FaceRight
	end


RustboroCity_EventScript_BoyProtest::
	msgbox RustboroCity_Text_BoyProtest, MSGBOX_NPC
	applymovement LOCALID_BOYPROTESTER, Common_Movement_FaceRight
	end

RustboroCity_EventScript_Engineer_3::
	lock
	faceplayer
	msgbox RustboroCity_Text_Engineer_3, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, RustboroCity_EventScript_Engineer_3_No
	case YES, RustboroCity_EventScript_Engineer_3_Yes
	release
	end

RustboroCity_EventScript_Engineer_3_No::
	msgbox RustboroCity_Text_Engineer_3_Scram, MSGBOX_NPC
	release
	end

RustboroCity_EventScript_Engineer_3_Yes::
	msgbox RustboroCity_Text_Engineer_3_Fight, MSGBOX_NPC
	release
	end


RustboroCity_Text_Engineer_3_Scram:
	.string "Yeah, that's right.\n"
	.string "Now scram!$"


RustboroCity_Text_Engineer_3_Fight:
	.string "Oh, trust me kid, I would love to\n"
	.string "teach you a lesson.\p"
	.string "Fortunately for you, the developer\n"
	.string "hasn't gotten around to coding this\l"
	.string "event quite yet.\p"
	.string "But one day, kid.\n"
	.string "One day.$"

RustboroCity_EventScript_GirlProtest::
	lock
	msgbox RustboroCity_Text_GirlProtest, MSGBOX_DEFAULT
	closemessage
	release
	end

RustboroCity_EventScript_Rhydon::
	lock
	playmoncry SPECIES_RHYDON, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Rhydon, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Woman::
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
	end

RustboroCity_EventScript_Man1::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Engineer_4::
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 4, RustboroCity_EventScript_Engineer_4_After
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 10, RustboroCity_EventScript_Engineer_4_After
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 11, RustboroCity_EventScript_Engineer_4_After
	msgbox RustboroCity_Text_CantPass, MSGBOX_NPC
	end


RustboroCity_EventScript_Engineer_4_After::
	msgbox RustboroCity_Text_Advice, MSGBOX_NPC
	end

RustboroCity_EventScript_Man1HaveBadge::
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Diglett::
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Diglett, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Delibird::
	playmoncry SPECIES_DELIBIRD, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Delibird, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Boy2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Boy2BrineyLeftTunnel::
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Peeko::
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_PeekoCry, MSGBOX_DEFAULT
	closemessage
	end

RustboroCity_EventScript_Twin::
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
	end

RustboroCity_EventScript_Looker::
	lock
	faceplayer
	msgbox RustboroCity_Text_LookerDisguise, MSGBOX_DEFAULT
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_LookerDisguise2, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_NinjaBoy::
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
	end

RustboroCity_EventScript_Engineer_1::
	msgbox RustboroCity_Text_StaringAtMe, MSGBOX_NPC
	closemessage
	end

Common_Name_Test:
	.string "Engineer$"

RustboroCity_EventScript_Engineer_2::
	lock
	msgbox RustboroCity_Text_DumbBird, MSGBOX_NPC
	release
	end

RustboroCity_EventScript_TunnelSign::
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end

RustboroCity_EventScript_DevonCorpSign::
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_GymSign::
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end



@ Unused
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CitySign::
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end

RustboroCity_EventScript_TrainersSchoolSign::
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CuttersHouseSign::
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end

RustboroCity_EventScript_LittleBoy::
	lock
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_EventScript_LittleGirl::
	lock
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_EventScript_Bodyguards::
	msgbox RustboroCity_Text_Bodyguards, MSGBOX_NPC
	release
	closemessage
	end

RustboroCity_EventScript_Man2::
	lock
	faceplayer
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_StolenGoodsTrigger0::
	lockall
	setobjectxyperm LOCALID_LOOKER, 14, 21
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 0
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger1::
	lockall
	setobjectxyperm LOCALID_LOOKER, 14, 21
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 1
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger2::
	lockall
	setobjectxyperm LOCALID_LOOKER, 14, 21
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 2
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger3::
	lockall
	setobjectxyperm LOCALID_LOOKER, 14, 21
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 3
	goto RustboroCity_EventScript_StolenGoodsScene
	end
	

RustboroCity_EventScript_StolenGoodsTrigger4::
	lockall
	setobjectxyperm LOCALID_LOOKER, 14, 21
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 4
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsScene::
speakername Common_Name_Looker
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
	setflag FLAG_HIDE_RUSTBORO_CITY_LOOKER
	closemessage
	playbgm MUS_LOOKER_THEME, FALSE
	addobject LOCALID_DEVON
	setobjectxy LOCALID_DEVON, 13, 21
	addobject LOCALID_LOOKER
	applymovement LOCALID_DEVON, RustboroCity_Movement_GruntEscape
	waitmovement 0
	removeobject LOCALID_DEVON
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeChaseGrunt1
	waitmovement 0
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeChaseGrunt2
	waitmovement 0
	fadedefaultbgm
	setobjectxy LOCALID_LOOKER, 34, 10
	setobjectxyperm LOCALID_LOOKER, 34, 10
	setobjectmovementtype LOCALID_LOOKER, MOVEMENT_TYPE_FACE_RIGHT
	setflag FLAG_DEVON_GOODS_STOLEN
	setvar VAR_RUSTBORO_CITY_STATE, 2
	setvar VAR_ROUTE116_STATE, 1
	clearflag FLAG_REAL_LOOKER_RUSTBORO
	special DrawWholeMapView
	releaseall
	end

RustboroCity_EventScript_Looker_Cutscene::
	lock
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 10, RustboroCity_EventScript_Looker_CutsceneFinal
	switch VAR_FACING
	case DIR_EAST, RustboroCity_EventScript_Looker_FaceRight
	case DIR_WEST RustboroCity_EventScript_Looker_FaceLeft
	goto RustboroCity_EventScript_Looker_FaceAnyOther
	end


RustboroCity_EventScript_Looker_CutsceneFinal::
	setvar VAR_RUSTBORO_CITY_STATE, 11
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_LookerTired, MSGBOX_DEFAULT
	msgbox RustboroCity_Text_LookerDotDotDot, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_LookerISee, MSGBOX_NPC
	playse SE_PIN
	applymovement LOCALID_MR_BRINEY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MR_BRINEY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MR_BRINEY, Common_Movement_FaceDown
	waitmovement 0
	speakername Common_Name_Briney
	msgbox RustboroCity_Text_MrBrineyDewford, MSGBOX_NPC
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_LookerVeryGood, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_LookerMission, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_LOOKER_THEME, FALSE
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_FaceRight
	waitmovement 0
	removeobject LOCALID_LOOKER
	setflag FLAG_REAL_LOOKER_RUSTBORO
	playse SE_PIN
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_WANDAS_BF, RustboroCity_Movement_DownAndRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	speakername Common_Name_Riley
	msgbox RustboroCity_Text_BoyfriendLeave, MSGBOX_NPC
	fadedefaultbgm
	applymovement LOCALID_WANDAS_BF, RustboroCity_Movement_BoyfriendLeave
	waitmovement 0
	removeobject LOCALID_WANDAS_BF
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_Briney
	msgbox RustboroCity_Text_MrBrineyOffer, MSGBOX_NPC
	closemessage
	applymovement LOCALID_MR_BRINEY, RustboroCity_Movement_BrineyLeave
	applymovement LOCALID_PEEKO, RustboroCity_Movement_PeekoLeave
	waitmovement 0
	removeobject LOCALID_MR_BRINEY
	removeobject LOCALID_PEEKO
	setflag FLAG_HIDE_PEEKO_EVENT
	setflag FLAG_HIDE_MR_BRINEY_RUSTBORO
	setvar VAR_ROUTE104_STATE, 1
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_HOUSE_STATE, 1
	release
	end











RustboroCity_EventScript_Looker_FaceRight::
	setvar VAR_0x8008, 1
	goto RustboroCity_EventScript_Looker_ContinueScene
	end

RustboroCity_EventScript_Looker_FaceLeft::
	setvar VAR_0x8008, 2
	goto RustboroCity_EventScript_Looker_ContinueScene
	end

RustboroCity_EventScript_Looker_FaceAnyOther::
	setvar VAR_0x8008, 3
	goto RustboroCity_EventScript_Looker_ContinueScene
	end

RustboroCity_EventScript_Looker_ContinueScene::
	faceplayer
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_AhMyFriend, MSGBOX_NPC
	call_if_eq VAR_0x8008, 1, RustboroCity_EventScript_Looker_MoveUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_LOOKER, RustboroCity_Movement_LookerLeft
	waitmovement 0
	clearflag FLAG_STEVEN_RUSTBORO
	addobject LOCALID_STEVEN
	setobjectxy LOCALID_STEVEN, 24, 10
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenRight
	waitmovement 0
	call_if_eq VAR_0x8008, 1, RustboroCity_EventScript_StevenTime
	applymovement LOCALID_STEVEN, RustboroCity_Movement_LookerStepRight
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	goto RustboroCity_EventScript_StevenTime
	end


RustboroCity_EventScript_StevenTime:
speakername Common_Name_Looker
	msgbox RustboroCity_Text_WatchAndLearn, MSGBOX_NPC
	call_if_eq VAR_0x8008, 1, RustboroCity_EventScript_StevenPlayerFacesLeft
	call_if_eq VAR_0x8008, 2, RustboroCity_EventScript_StevenPlayerFacesRight
	call_if_eq VAR_0x8008, 3, RustboroCity_EventScript_StevenPlayerFacesAny
	waitmovement 0 
	applymovement LOCALID_ENGINEER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_ENGINEER, Common_Movement_WalkInPlaceLeft
	waitmovement 0 
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement 0 
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_ENGINEER, RustboroCity_Movement_EngineerOutOfTheWay
	waitmovement 0
	setobjectxy LOCALID_ENGINEER, 38, 8
	setobjectxyperm LOCALID_ENGINEER, 38, 8
	setobjectmovementtype LOCALID_ENGINEER, MOVEMENT_TYPE_FACE_DOWN
	setvar VAR_RUSTBORO_CITY_STATE, 4
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenThreeLeft
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	speakername Common_Name_Looker
	msgbox RustboroCity_Text_TheWayIsOpen, MSGBOX_NPC
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenLeave
	waitmovement 0
	setflag FLAG_REAL_LOOKER_RUSTBORO
	removeobject LOCALID_LOOKER
	removeobject LOCALID_STEVEN
	release
	end


RustboroCity_EventScript_Looker_MoveUp::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_Up
	waitmovement 0
	return

RustboroCity_EventScript_StevenPlayerFacesLeft:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenFourRight
	waitmovement 0
	return

RustboroCity_EventScript_StevenPlayerFacesRight:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenThreeRight
	waitmovement 0
	return

RustboroCity_EventScript_StevenPlayerFacesAny:
	applymovement LOCALID_STEVEN, RustboroCity_Movement_StevenThreeRight
	waitmovement 0
	return

RustboroCity_Movement_EngineerOutOfTheWay:
	walk_right
	walk_up
	walk_up
	face_down
	step_end

RustboroCity_Movement_LookerLeft:
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
	step_end

RustboroCity_Movement_StevenFourRight:
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	step_end

RustboroCity_Movement_StevenLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_Movement_StevenThreeRight:
	walk_right
	walk_right
	walk_right
	delay_16
	step_end

RustboroCity_Movement_StevenThreeLeft:
	walk_left
	walk_left
	walk_left
	step_end
	

RustboroCity_Movement_StevenRight:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_Movement_LookerStepRight:
	walk_right
	step_end

@ Unused
RustboroCity_EventScript_ShadyCharacterTookOff::
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	return

@ Unused
RustboroCity_EventScript_YouGotItThankYou::
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	return

@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
RustboroCity_EventScript_EmployeeApproachUp::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachUp
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachLeft::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachLeft
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachRight::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachRight
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachDown::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachDown
	waitmovement 0
	return

@ Unused, similar movement to the above scripts
RustboroCity_EventScript_EmployeeApproachPlayerFar::
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachPlayerFar
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

@ Unused
RustboroCity_Movement_GruntEscapeExtended:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_Up:
	walk_up
	step_end

RustboroCity_Movement_GruntEscape:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_EmployeeChaseGrunt1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

RustboroCity_Movement_EmployeeChaseGrunt2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachUp:
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachLeft:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachRight:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachDown:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachPlayerFar:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

RustboroCity_EventScript_DevonEmployee1::
	lock
	faceplayer
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
	waitse
	setvar VAR_TEMP_1, 4
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger0::
	lockall
	setvar VAR_TEMP_1, 0
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger1::
	lockall
	setvar VAR_TEMP_1, 1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger2::
	lockall
	setvar VAR_TEMP_1, 2
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger3::
	lockall
	setvar VAR_TEMP_1, 3
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_EmployeeAskToGetGoods::
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
	setvar VAR_RUSTBORO_CITY_STATE, 3
	copyobjectxytoperm LOCALID_LOOKER
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
	releaseall
	end

@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
RustboroCity_EventScript_EmployeeFacePlayerUp1::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerLeft1::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerDown1::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeApproachPlayerDown1::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachPlayerDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

RustboroCity_Movement_EmployeeApproachPlayerDown:
	walk_down
	step_end

RustboroCity_EventScript_ReturnGoodsTrigger0::
	lockall
	setvar VAR_TEMP_1, 0
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger1::
	lockall
	setvar VAR_TEMP_1, 1
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger2::
	lockall
	setvar VAR_TEMP_1, 2
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger3::
	lockall
	setvar VAR_TEMP_1, 3
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoods::
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RETURNED_DEVON_GOODS
	setvar VAR_RUSTBORO_CITY_STATE, 5
	delay 30
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
	waitstate
	releaseall
	end

RustboroCity_EventScript_BagFull::
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	return

RustboroCity_EventScript_EmployeeFacePlayerUp2::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerLeft2::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerDown2::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeApproachPlayerDown2::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_LOOKER, RustboroCity_Movement_EmployeeApproachPlayerDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerRight::
	applymovement LOCALID_LOOKER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LOOKER, Common_Movement_Delay48
	waitmovement 0
	return

RustboroCity_EventScript_Rival::
	lockall
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_PlayRivalMusic::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
	return

RustboroCity_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

RustboroCity_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

RustboroCity_EventScript_RivalTrigger0::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger1::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger2::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger3::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger4::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger5::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger6::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger7::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalEncounter::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
	end

RustboroCity_EventScript_MayEncounter::
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
	setflag FLAG_MET_RIVAL_RUSTBORO
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
	setvar VAR_RUSTBORO_CITY_STATE, 8
	setvar VAR_ROUTE104_STATE, 2
	setvar VAR_0x8008, 0
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_MayAskToBattle::
	setvar VAR_0x8008, 1
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_EventScript_BattleMay::
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, RustboroCity_EventScript_BattleMayTreecko
	case 1, RustboroCity_EventScript_BattleMayTorchic
	case 2, RustboroCity_EventScript_BattleMayMudkip
	end

RustboroCity_EventScript_MayBrineyHint::
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_RestoreBgm::
	savebgm MUS_DUMMY
	fadedefaultbgm
	return

RustboroCity_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_MayBrineyHint
	end

RustboroCity_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_MayBrineyHint
	end

RustboroCity_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_MayBrineyHint
	end

RustboroCity_EventScript_BrendanEncounter::
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
	setflag FLAG_MET_RIVAL_RUSTBORO
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
	setvar VAR_RUSTBORO_CITY_STATE, 8
	setvar VAR_ROUTE104_STATE, 2
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_BrendanAskToBattle::
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_EventScript_BattleBrendan::
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
	end

RustboroCity_EventScript_BrendanBrineyHint::
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_BrendanBrineyHint
	end

RustboroCity_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_BrendanBrineyHint
	end

RustboroCity_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	goto RustboroCity_EventScript_BrendanBrineyHint
	end

RustboroCity_Movement_RivalApproachPlayer0:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer2:
	walk_down
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer3:
	walk_down
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer4:
	walk_down
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer5:
	walk_down
	walk_right
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer6:
	walk_down
	walk_right
	walk_right
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer7:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

RustboroCity_EventScript_Boy1::
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
	end

RustboroCity_Text_WeShortenItToDevon:
	.string "Devon wants to expand in the forest\n"
	.string "up north, but some strange women are\l"
	.string "giving them trouble.\p"
	.string "I fear that the situation may turn\n"
	.string "violent…$"

RustboroCity_Text_SneakyLookingManWentAroundCorner:
	.string "Hm? A sneaky-looking man?\p"
	.string "Come to think of it, yes, a shady-\n"
	.string "looking guy went around the corner.$"

RustboroCity_Text_HaveYouChallengedGym:
	.string "Roxanne is such a hard worker.\p"
	.string "Not only she's our Gym Leader,\n"
	.string "but she's also a teacher!\p"
	.string "I don't know how she does it!$"



RustboroCity_Text_HeyThatsRustborosGymBadge:
	.string "Hey, that's Rustboro's Gym Badge!\p"
	.string "Out of all the Pokémon Gym Badges,\n"
	.string "Rustboro's is the coolest, I'd say.$"

RustboroCity_Text_YoureNewAroundHere:
	.string "Oh? Who might you be?\n"
	.string "You're a new face around these parts.\p"
	.string "Have you just transferred into the\n"
	.string "Pokémon Trainer School?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire:
	.string "Rustboro City wasn't always like this.\p"
	.string "But things changed Devon's current CEO,\n"
	.string "Joseph Stone, inherited the company\l"
	.string "from his grandfather.\p"
	.string "Believe it or not, when I was a young\n"
	.string "lass, this place was so much greener\l"
	.string "and the water so much bluer…$"

RustboroCity_Text_MrBrineyWalksInTheTunnel:
	.string "With all of the houses that Devon\n"
	.string "built, I have to wonder…\p"
	.string "When will they build one for me?$"

RustboroCity_Text_MrBrineyLovesPeeko:
	.string "The old sailor Mr. Briney lives in\n"
	.string "a cottage by the sea.\p"
	.string "He said he was going shopping in\n"
	.string "Slateport for his pet, Peeko.\p"
	.string "That old sea dog, he must really love\n"
	.string "that Peeko.$"

RustboroCity_Text_WowYouHavePokemon:
	.string "Wow, you have Pokémon with you, too.\p"
	.string "When I get bigger, I'm going to get\n"
	.string "Pokémon too, and leave this stinky\l"
	.string "place.$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
	.string "Pokémon Trainer School!\p"
	.string "If I go to this school, I will\n"
	.string "learn everything about Pokémon\l"
	.string "battles!$"

RustboroCity_Text_PokemonCanChangeLookFromExp:
	.string "Hey sis, what do you wanna be when\n"
	.string "you're an adult?$"

RustboroCity_Text_PokemonChangeShape:
	.string "I wanna work at Devon, just like\n"
	.string "dad!$"

RustboroCity_Text_TradePokemonGrowFast:
	.string "Looks like there's construction\n"
	.string "going on even in the Routes around\l"
	.string "our city…\p"
	.string "Where will our kids play?$"

RustboroCity_Text_OutOfTheWay:
	.string "Come back here!$"

RustboroCity_Text_WaitDontTakeMyGoods:
	.string "Wait! Pleeeaaase!\p"
	.string "Don't take my GOODS!$"

RustboroCity_Text_HelpMeIWasRobbed:
	.string "Oh, it's you!\p"
	.string "You're that fantastic TRAINER who\n"
	.string "helped me in PETALBURG WOODS!\p"
	.string "Help me! I was robbed by TEAM AQUA!\n"
	.string "I have to get the DEVON GOODS back!\p"
	.string "If I don't…\n"
	.string "I'm going to be in serious trouble.$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
	.string "That shady character, I think he took\n"
	.string "off towards the tunnel over there.$"

RustboroCity_Text_YouGotItThankYou:
	.string "Oh! How did it go?\n"
	.string "The DEVON GOODS?\p"
	.string "You did!\n"
	.string "You got them back!\p"
	.string "You really are a great TRAINER!\p"
	.string "I know! As my thanks, I'll give you\n"
	.string "another GREAT BALL!$"

RustboroCity_Text_YoureLoadedWithItems:
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

RustboroCity_Text_PleaseComeWithMe:
	.string "Excuse me, please!\n"
	.string "Please come with me!$"

RustboroCity_Text_MayHiLetsRegister:
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV!\p"
	.string "Let's register each other so we can\n"
	.string "contact one another anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredMay:
	.string "Registered MAY\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_MayPassedBrineyWantToBattle:
	.string "MAY: Oh, by the way, I passed\n"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
	.string "I guess he's on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "How's your POKéDEX coming along,\n"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
	.string "So…\n"
	.string "How about a little battle?$"

RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
	.string "MAY: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

RustboroCity_Text_MayWantToBattle:
	.string "MAY: So, what do you think?\n"
	.string "How about a little battle here?$"

RustboroCity_Text_MayImNotGoingToLose:
	.string "MAY: You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

RustboroCity_Text_MayDefeat:
	.string "Yikes!\n"
	.string "You're better than I expected!$"

RustboroCity_Text_MayMrBrineyHint:
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
	.string "I just passed…\p"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
	.string "might not know this, but MR. BRINEY\l"
	.string "was once a revered seafarer.$"

RustboroCity_Text_BrendanHiLetsRegister:
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV! Cool!\p"
	.string "Let's register each other so we can\n"
	.string "get in touch anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredBrendan:
	.string "Registered BRENDAN\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_BrendanPassedBrineyWantToBattle:
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
	.string "I bet he was on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "{PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?\p"
	.string "Mine rules.\p"
	.string "Want to have a battle to test how\n"
	.string "far you've progressed?$"

RustboroCity_Text_BrendanNoConfidenceInPokemon:
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

RustboroCity_Text_BrendanWantToBattle:
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

RustboroCity_Text_BrendanIWontGoEasy:
	.string "BRENDAN: I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

RustboroCity_Text_BrendanDefeat:
	.string "Hmm…\n"
	.string "You're pretty good.$"

RustboroCity_Text_BrendanMrBrineyHint:
	.string "BRENDAN: By the way, you know\n"
	.string "MR. BRINEY? The guy I just passed?\p"
	.string "I bet you didn't know this, since you\n"
	.string "just moved here, {PLAYER}, but\l"
	.string "MR. BRINEY was once a great sailor.$"

RustboroCity_Text_TunnelNearingCompletion:
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

RustboroCity_Text_DevonCorpSign:
	.string "DEVON CORPORATION\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”$"

RustboroCity_Text_GymSign:
	.string "RUSTBORO CITY POKéMON GYM\n"
	.string "LEADER: ROXANNE\p"
	.string "“The ROCK-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign:
	.string "DEVON CORP. BRANCH OFFICE\p"
	.string "“Access limited to DEVON employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign:
	.string "Rustboro City$"

RustboroCity_Text_TrainersSchoolSign:
	.string "TRAINER'S SCHOOL LECTURE HALL\p"
	.string "“We'll teach you anything about\n"
	.string "POKéMON!”$"

RustboroCity_Text_CuttersHouse:
	.string "CUTTER'S HOUSE$"

RustboroCity_Text_DevelopedNewPokenavFeature:
	.string "I've been developing an added feature\n"
	.string "for the POKéNAV…\p"
	.string "And it turned out great!\p"
	.string "{PLAYER}, may I see that POKéNAV?\n"
	.string "The one our PRESIDENT gave you?$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
	.string "There you go, {PLAYER}!\p"
	.string "I added a new feature named\n"
	.string "MATCH CALL to your POKéNAV.\p"
	.string "Using the MATCH CALL feature,\n"
	.string "you can chat with people who have\l"
	.string "been registered in your POKéNAV.\p"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
	.string "be registered in your POKéNAV.\p"
	.string "Test it out.\n"
	.string "Please give our PRESIDENT a call.$"

RustboroCity_Text_PleaseSelectPokenav:
	.string "Please select the POKéNAV.$"

RustboroCity_Text_IdBetterGetBackToWork:
	.string "Okay, I'd better get back to work.\n"
	.string "Please take care, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle:
	.string "This city is home to the headquarters\n"
	.string "of Devon.\p"
	.string "Devon is a multiregional corporation\n"
	.string "that deals with, well, pretty much\l"
	.string "everything.\p"
	.string "Real estate, technology, Pokémon…\p"
	.string "If you can name it, you can buy it\n"
	.string "from Devon.\p"
	.string "Recently, they've been targeted\n"
	.string "by many protests over so-called\l"
	.string "environmental concerns…\p"
	.string "Between you and me, I think those\n"
	.string "people are just mad that they aren't\l"
	.string "rich.$"

RustboroCity_Text_StaringAtMe:
	.string "That old man…\p"
	.string "He keeps staring at me, and he never\n"
	.string "seem to leave.\p"
	.string "It's seriously starting to creep me\n"
	.string "out.$"

RustboroCity_Text_Diglett:
	.string "DIGLETT is working away.$"

RustboroCity_Text_DumbBird:
	.string "Sigh…\p"
	.string "Delibird is supposed to help in\n"
	.string "carrying construction material to\l"
	.string "its proper place, but…\p"
	.string "It doesn't look like he's quite got\n"
	.string "it.$"

RustboroCity_Text_Delibird:
	.string "Kwaaah!$"

RustboroCity_Text_LookerDisguise:
	.string "Psst! Hey!\n"
	.string "It is me, Looker!$"

RustboroCity_Text_LookerDisguise2:
	.string "Quite the disguise, is it not?\p"
	.string "You see, I have reason to believe that\n"
	.string "the suspicious man we encountered\l"
	.string "is, in fact, an employee of Devon!\p"
	.string "Therefore, I am snooping around here to\n"
	.string "try and find out where he has gone.\p"
	.string "If I uncover any leads, I will let you\n"
	.string "know, yes!$"


RustboroCity_Text_Bodyguards:
	.string "Hm, yes?\n"
	.string "What is your business?\p"
	.string "This is private property.\p"
	.string "Get ouf of here.$"

RustboroCity_Text_MagmaProtest:
	.string "What are you staring at?\p"
	.string "I'm protesting for a good cause!$"

RustboroCity_Text_BoyProtest:
	.string "Devon wants to demolish this park.\p"
	.string "But we won't stand for it!$"

RustboroCity_Text_GirlProtest:
	.string "Stop the construction!\n"
	.string "Stop the construction!$"

RustboroCity_Text_Engineer_3:
	.string "What's wrong, huh?\n"
	.string "You got a problem?$"

RustboroCity_Text_Rhydon:
	.string "Gwraaaaaaa!$"

RustboroCity_Text_CantPass:
	.string "Sorry, kid, but I can't let you through.\n"
	.string "There's dangerous work going on here.\p"
	.string "And we wouldn't wanna get injured now,\n"
	.string "would we?$"
	
Rustborocity_Text_OldMan:
	.string "Boy oh boy, do I love watching\n"
	.string "construction!$"

RustboroCity_Text_Mr_Briney:
	.string "Oh, the misery…\n"
	.string "Oh, poor little old me!\p"
	.string "Ye see, I was walking me Peeko as\n"
	.string "usual, when…\p"
	.string "The rascal decided to fly over the\n"
	.string "wall!\p"
	.string "Now she's on the other side, but…\n"
	.string "This rapscallion of a man isn't letting\l"
	.string "me go through to save me lass!\p"
	.string "Oh, Peeko, me love…\n"
	.string "Oh, Peeko, me girl!\p"
	.string "I can but pray for yer safety!$"

RustboroCity_Text_AhMyFriend:
	.string "Ah, my friend… Huff!\n"
	.string "That scoundrel, he… Puff!\p"
	.string "Slithered away, yes…\p"
	.string "And now, this man here is not\n"
	.string "letting us pass!\p"
	.string "Ah, but… Worry not.\p"
	.string "As you know, I am a master of\n"
	.string "the disguise.\p"
	.string "And I might just have an idea to\n"
	.string "get us out of this pickle!$"

RustboroCity_Text_WatchAndLearn:
	.string "And now, observe.$"

RustboroCity_Text_TheWayIsOpen:
	.string "And as we say in my\n"
	.string "home region: voilà!\p"
	.string "Yes my friend, the way is clear.\p"
	.string "Who is it I'm masquerading as, you ask?\p"
	.string "Oh oh! It would be a shame to spoil the\n"
	.string "surprise, would it not?\p"
	.string "After all, I have a feeling that you\n"
	.string "shall meet him soon.\p"
	.string "Anyway, my assistant…\n"
	.string "I have a favor to ask you once more.\p"
	.string "As you know, I'm no Trainer.\n"
	.string "Well, not anymore, but…\p"
	.string "…Well! Long story short, I am going to\n"
	.string "need you to find that man.\p"
	.string "You will be compensated for it,\n"
	.string "of course.\p"
	.string "Now, I must take my leave, for…\p"
	.string "Well, there is someone I must call.\p"
	.string "Private call, yes. Very confidential.\p"
	.string "I am counting on you!$"

RustboroCity_Text_Advice:
	.string "You seem to have some powerful\n"
	.string "friends.\p"
	.string "Can't really disobey those orders.\p"
	.string "But let me give you a piece of\n"
	.string "advice.\p"
	.string "If you keep sticking your nose in\n"
	.string "these kinds of things…\p"
	.string "Well, it just might end up badly.$"

RustboroCity_Text_Wandasbf:
	.string "All's well that ends well!$"

RustboroCity_Text_PeekoCry:
	.string "Kyahh!$"

RustboroCity_Text_Mr_BrineyHappy:
	.string "Oh, Peeko!\n"
	.string "Yer back!$"

RustboroCity_Text_LookerTired:
	.string "Ah… Huff…\n"
	.string "My friend…! Puff…\p"
	.string "Please excuse me. My breath…\n"
	.string "Huff… Needs some catching…\p"
	.string "… … … … … …\p"
	.string "There! Good as a newborn baby.\p"
	.string "But yes, I got some news as, I assume,\n"
	.string "you do.\p"
	.string "Good news is, I found the man we were\n"
	.string "pursuing.\p"
	.string "Bad news is, he has run away like the\n"
	.string "wind.\p"
	.string "I have never seen someone reach such\n"
	.string "speeds!\p"
	.string "Impressive, if I must say.\p"
	.string "But what about you?$"

RustboroCity_Text_LookerDotDotDot:
	.string "… … … … … … …$"

RustboroCity_Text_LookerISee:
	.string "Ah! I see!\n"
	.string "Terrific job, terrific!\p"
	.string "And, those Goods you've mentioned…\p"
	.string "Would you care for me to take a look?\p"
	.string "… … …\p"
	.string "Ah! I see!\n"
	.string "Well, not fully.\p"
	.string "Yes, these Goods? Unmistakeable Devon\n"
	.string "make.\p"
	.string "Machine parts of some sort, it would\n"
	.string "seem.\p"
	.string "An engine, perhaps.\p"
	.string "But other than this? I cannot say.\p"
	.string "Luckily, however, I do know someone\n"
	.string "who might be able to tell.\p"
	.string "Unluckily, they are currently in\n"
	.string "Dewford.\p"
	.string "Quite far from here, indeed.$"

RustboroCity_Text_MrBrineyDewford:
	.string "Dewford?\n"
	.string "Why, me young fellow, I can take ye\l"
	.string "there!\p"
	.string "Me Speed-Boat always welcomes friends\n"
	.string "of Peeko!$"

RustboroCity_Text_LookerVeryGood:
	.string "Ah! Very good!$"

RustboroCity_Text_LookerMission:
	.string "My friend, you have a new mission.\p"
	.string "You must go to Dewford at once and meet\n"
	.string "with my employer.\p"
	.string "He will certainly be able to give us\n"
	.string "some leads.\p"
	.string "As for his identity…\n"
	.string "Well, worry not.\p"
	.string "I am sure that you will be able to\n"
	.string "recognize him.\p"
	.string "Anyway!\p"
	.string "Your help is proving to be, I daresay,\n"
	.string "fundamental to solving this case!\p"
	.string "Here, however, is where we must part\n"
	.string "ways.\p"
	.string "Oh! Only temporarily, of course.\p"
	.string "I am in need of doing some of my own\n"
	.string "investigating.\p"
	.string "But, my friend, once we meet back up,\n"
	.string "you must tell me everything that is\l"
	.string "new!\p"
	.string "Until then…\p"
	.string "Special agent Looker bids his farewell!$"

RustboroCity_Movement_DownAndRight:
	delay_16
	walk_down
	walk_down
	face_right
	step_end

RustboroCity_Text_BoyfriendLeave:
	.string "What the…\n"
	.string "Is he a secret agent for real?\p"
	.string "Today has been a crazy day…\p"
	.string "Speaking of which, I'm gonna go and\n"
	.string "visit my Wanda.\p"
	.string "If you happen to pass by Verdanturf\n"
	.string "feel free to stop by, eh?$"

RustboroCity_Movement_BoyfriendLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_Text_MrBrineyOffer:
	.string "Time to take me leave too, then!\p"
	.string "But if ye ever find yerself in need of\n"
	.string "me Speed Boat…\p"
	.string "Ye can find me in me cottage in Stormy\n"
	.string "Seaside! Gyaha!\p"
	.string "Well then! I'm off!\n"
	.string "Let's go, lass!$"


RustboroCity_Movement_BrineyLeave:
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

RustboroCity_Movement_PeekoLeave:
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
	step_end

RustboroCity_Text_Gameboy:
	.string "Sometimes I can hear voices from the\n"
	.string "sewers.\p"
	.string "Isn't that scary?\p"
	.string "I tried sneaking in from the manholes,\n"
	.string "but I wasn't strong enough.\p"
	.string "If only I had a Pokémon…$"

RustboroCity_EventScript_SewerBar::
	msgbox RustboroCity_Text_SewerBar, MSGBOX_SIGN
	closemessage
	end


RustboroCity_Text_SewerBar:
	.string "A locked gate.\p"
	.string "It's too strong to force it\n"
	.string "open.$"


RustboroCity_EventScript_ManHole::
	msgbox RustboroCity_Text_Manhole,MSGBOX_SIGN
	closemessage
	end


RustboroCity_Text_Manhole:
	.string "A suspicious manhole.\p"
	.string "A Pokémon might be strong enough to\n"
	.string "force it open.$"

Common_Name_Briney:
	.string "Mr. Briney$"


RustboroCity_EventScript_Drilbur::
	lock
	playmoncry SPECIES_DRILBUR, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Drilbur, MSGBOX_NPC
	waitmoncry
	release
	end


RustboroCity_Text_Drilbur:
	.string "Fshshah!$"


RustboroCity_EventScript_Scraggy::
	lock
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Scraggy, MSGBOX_NPC
	waitmoncry
	release
	end


RustboroCity_Text_Scraggy:
	.string "Weeoh!$"

RustboroCity_EventScript_Trubbish::
	lock
	playmoncry SPECIES_TRUBBISH, CRY_MODE_NORMAL
	msgbox RustboroCity_Text_Trubbish, MSGBOX_NPC
	waitmoncry
	release
	end


RustboroCity_Text_Trubbish:
	.string "Bwrrrwrr!$"



RustboroCity_EventScript_ManChemicals::
	msgbox RustboroCity_EventScript_Text, MSGBOX_NPC
	end


RustboroCity_EventScript_Text:
	.string "Devon is releasing, like, these\n"
	.string "crazy chemicals in the air and in\l"
	.string "the water, man.\p"
	.string "The sky's dark all the time, and the\n"
	.string "sea has this weird color…\p"
	.string "I dunno, man.\n"
	.string "Bad vibes.$"


RustboroCity_EventScript_ManFactory::
	msgbox RustboroCity_Text_Factory, MSGBOX_NPC
	end

RustboroCity_EventScript_Factory::
	msgbox RustboroCity_Text_Factory, MSGBOX_NPC
	end

RustboroCity_Text_Factory:
	.string "I wonder what's in the factory.\p"
	.string "They don't let anyone it, and\n"
	.string "the workers never talk about it.$"

RustboroCity_EventScript_GarbageLady::
	lock
	playse SE_PIN
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_BackUp
	waitmovement 0
	msgbox RustboroCity_Text_GarbageLady, MSGBOX_NPC
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_GARBAGE_LADY, Common_Movement_WalkUp
	waitmovement 0
	release
	end




RustboroCity_Movement_BackUp:
	walk_down
	step_end

RustboroCity_Text_GarbageLady:
	.string "Stay away from my garbage!$"