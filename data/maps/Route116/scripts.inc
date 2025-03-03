
.set LOCALID_WANDAS_BF_OUTSIDE, 8

Route116_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
	.byte 0

Route116_OnTransition:
	call Route116_HandleTrainers
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
	end


Route116_HandleTrainers::
	call_if_trainerunset TRAINER_DEVON_MANAGER_1, Route116_EventScript_ResetTrainers
	call_if_trainerset TRAINER_DEVON_MANAGER_1, Route116_EventScript_SetTrainers
	return


Route116_EventScript_ResetTrainers::
	cleartrainerflag TRAINER_WYLL
	cleartrainerflag TRAINER_JOSE
	cleartrainerflag TRAINER_JOHNSON
	cleartrainerflag TRAINER_CLARK
	cleartrainerflag TRAINER_KAREN_1
	cleartrainerflag TRAINER_DEVAN
	cleartrainerflag TRAINER_JERRY_1
	cleartrainerflag TRAINER_JOEY
	return

Route116_EventScript_SetTrainers::
	setifnotbeaten TRAINER_WYLL
	setifnotbeaten TRAINER_JOSE
	setifnotbeaten TRAINER_JOHNSON
	setifnotbeaten TRAINER_CLARK
	setifnotbeaten TRAINER_KAREN_1
	setifnotbeaten TRAINER_DEVAN
	setifnotbeaten TRAINER_JERRY_1
	setifnotbeaten TRAINER_JOEY
	return

Route116_EventScript_SetWandasBoyfriendPos::
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
	return

Route116_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
	end

Route116_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route116_EventScript_WandasBoyfriend::
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_NPC
	end

Route116_EventScript_BoyfriendGruntLeftTunnel::
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_BoyfriendGruntInTunnel::
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_DevonEmployee::
	lock
	faceplayer
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
	goto Route116_EventScript_GiveRepeatBall
	end

Route116_EventScript_GiveRepeatBall::
	setflag FLAG_MET_DEVON_EMPLOYEE
	giveitem ITEM_REPEAT_BALL
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
	removeobject VAR_LAST_TALKED
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setflag FLAG_RECEIVED_REPEAT_BALL
	release
	end

Route116_EventScript_DevonEmployeeExit::
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
	waitmovement 0
	return

Route116_EventScript_DevonEmployeeExitEast::
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
	waitmovement 0
	return

Route116_EventScript_TryGiveRepeatBallAgain::
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
	goto Route116_EventScript_GiveRepeatBall
	end

Route116_EventScript_NoRoomForRepeatBall::
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
	release
	end

Route116_Movement_DevonEmployeeExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route116_Movement_DevonEmployeeExitEast:
	walk_down
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

Route116_EventScript_RouteSignRustboro::
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
	end

Route116_EventScript_RusturfTunnelSign::
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

Route116_EventScript_TunnelersRestHouseSign::
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
	end

Route116_EventScript_TrainerTipsBToStopEvolution::
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
	end

Route116_EventScript_TrainerTipsBagHasPockets::
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
	end

Route116_EventScript_Briney::
	lock
	faceplayer
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
	setvar VAR_ROUTE116_STATE, 2
	release
	end

Route116_EventScript_WandasBoyfriendJumps::
	lock
	msgbox Route116_Text_Wait, MSGBOX_NPC
	playse SE_LEDGE
	applymovement LOCALID_WANDAS_BF_OUTSIDE, Route116_Movement_BfSlidesDown
	waitmovement 0
	playse SE_WALL_HIT
	delay 4
	msgbox Route116_Text_Greetings, MSGBOX_NPC
	speakername Common_Name_Riley
	msgbox Route116_Text_Riley, MSGBOX_NPC
	applymovement LOCALID_WANDAS_BF_OUTSIDE, Route116_Movement_BfEntersCave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_WANDAS_BF_OUTSIDE
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
	setvar VAR_ROUTE116_STATE, 2
	end

Route116_EventScript_GlassesMan::
	lock
	faceplayer
	checkitem ITEM_BLACK_GLASSES
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_FoundGlassesNotOnPlayer::
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
	closemessage
	goto Route116_EventScript_GlassesManExit
	end

Route116_EventScript_PlayerHasGlasses::
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_FoundGlassesOnPlayer::
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
	closemessage
	goto Route116_EventScript_GlassesManExit
	end

Route116_EventScript_GlassesManExit::
	delay 20
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
	removeobject VAR_LAST_TALKED
	release
	end

Route116_EventScript_GlassesManExitNormal::
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
	waitmovement 0
	return

Route116_EventScript_GlassesManExitEast::
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
	waitmovement 0
	return

Route116_Movement_GlassesManExit:
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

Route116_Movement_GlassesManExitEast:
	walk_up
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


Route116_Movement_BfSlidesDown:
	slide_down
	slide_down
	slide_down
	slide_down
	step_end


Route116_Movement_BfEntersCave:
	walk_up
	step_end

Route116_EventScript_Joey::
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Jose::
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Jerry::
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_TryRegisterJerryAfterBattle::
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
	release
	end

Route116_EventScript_RegisterJerryAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JERRY_1
	release
	end

Route116_EventScript_TryRegisterJerry::
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_RegisterJerry::
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JERRY_1
	release
	end

Route116_EventScript_RematchJerry::
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Clark::
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Wyll::
	trainerbattle_single TRAINER_WYLL, Route116_Text_WyllIntro, Route116_Text_WyllDefeat
	msgbox Route116_Text_WyllPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Karen::
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_TryRegisterKarenAfterBattle::
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
	release
	end

Route116_EventScript_RegisterKarenAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_KAREN_1
	release
	end

Route116_EventScript_TryRegisterKaren::
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_RegisterKaren::
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_KAREN_1
	release
	end

Route116_EventScript_RematchKaren::
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Sarah::
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_FriendlyEngineer1::
	lock
	msgbox Route116_Text_Engineer1, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_FriendlyEngineer2::
	lock
	msgbox Route116_Text_Engineer2, MSGBOX_DEFAULT
	release
	end

Route116_EventScript_FriendlyEngineer3::
	lock
	msgbox Route116_Text_Engineer3, MSGBOX_NPC
	release
	end

Route116_EventScript_Scientist::
	msgbox Route116_Text_Scientist, MSGBOX_NPC
	release
	end

Route116_EventScript_Dawson::
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Devan::
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_FriendlyBlackBelt::
	msgbox Route116_Text_FriendlyBlackBelt, MSGBOX_NPC
	end

Route116_EventScript_Johnson::
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end

Route116_Text_ScoundrelMadeOffWithPeeko:
	.string "Ohhh, what am I to do?\p"
	.string "We were on our walk, PEEKO and I, when\n"
	.string "we were jumped by an odd thug…\p"
	.string "The scoundrel made off with my\n"
	.string "darling PEEKO!\p"
	.string "Wrrrooooooaaaar! PEEKO!$"

Route116_Text_WantToDigTunnel:
	.string "Hey!\p"
	.string "You're spoiling my grand entrance!$"

Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
	.string "Nnn… Roar!\n"
	.string "What's going on?\p"
	.string "I was digging the tunnel without any\n"
	.string "tools when some goon ordered me out!\p"
	.string "That tunnel's filled with POKéMON\n"
	.string "that react badly to loud noises.\l"
	.string "They could cause an uproar.\p"
	.string "That's why we stopped using heavy\n"
	.string "equipment for tunneling…\p"
	.string "I'm worried that the goon will do\n"
	.string "something stupid and startle the\l"
	.string "POKéMON into an uproar.$"

Route116_Text_GoonHightailedItOutOfTunnel:
	.string "Nnn… Roar!\p"
	.string "That goofy goon hightailed it out of\n"
	.string "the tunnel! I can go back to digging!$"

Route116_Text_ThankYouTokenOfAppreciation:
	.string "Oh! It's you!\p"
	.string "You're that person who not only helped\n"
	.string "me in PETALBURG WOODS, but also got\l"
	.string "back my stolen package and then even\l"
	.string "graciously delivered it to SLATEPORT!\p"
	.string "CAPT. STERN informed us that the\n"
	.string "package arrived, too!\p"
	.string "I thank you very, very much!\p"
	.string "Why, if I were a rain cloud, I would\n"
	.string "shower you with gratitude and hail\l"
	.string "you as a hero!\p"
	.string "For you, the most wonderful TRAINER,\n"
	.string "I bear good news!\p"
	.string "Recently, our company developed\n"
	.string "a new kind of POKé BALL.\p"
	.string "As a token of our appreciation, this\n"
	.string "is our gift to our wonderful TRAINER!$"

Route116_Text_NewBallAvailableAtMart:
	.string "Our new POKé BALL will be available\n"
	.string "at the POKéMON MART in RUSTBORO.\p"
	.string "Please do try it out!\n"
	.string "Thank you and bye-bye!$"

Route116_Text_BagIsJamPacked:
	.string "Your BAG is jam-packed.\n"
	.string "I can't give you this REPEAT BALL.$"

Route116_Text_TokenOfAppreciation:
	.string "As a token of our appreciation for\n"
	.string "your delivering our package, I have\l"
	.string "a gift of a new kind of POKé BALL\l"
	.string "for our most wonderful TRAINER!$"

Route116_Text_CanYouHelpMeFindGlasses:
	.string "I lost my glasses…\n"
	.string "Can you help me find them?$"

Route116_Text_MayISeeThoseGlasses:
	.string "Those glasses!\n"
	.string "May I see them for a second?$"

Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
	.string "Hmm…\n"
	.string "These are Black Glasses.\l"
	.string "They're not what I'm looking for…\p"
	.string "Maybe my glasses aren't around\n"
	.string "here…$"

Route116_Text_CantFindGlassesNotHere:
	.string "Hmm…\n"
	.string "I can't find my glasses anywhere…\l"
	.string "Maybe they're not around here…$"

Route116_Text_NotWhatImLookingFor:
	.string "My glasses?\n"
	.string "Oh, don't worry.\p"
	.string "I realized they were right on my\n"
	.string "nose all along.\p"
	.string "You could have just told me so!$"

Route116_Text_RouteSignRustboro:
	.string "Rustboro Hills\n"
	.string "{LEFT_ARROW} Rustboro City$"

Route116_Text_RusturfTunnelSign:
	.string "Rusturf Tunnel\n"
	.string "Linking Rustboro and Verdanturf$"

Route116_Text_TunnelersRestHouse:
	.string "TUNNELER'S REST HOUSE$"

Route116_Text_TrainerTipsBToStopEvolution:
	.string "TRAINER TIPS\p"
	.string "If you want to stop a POKéMON from\n"
	.string "evolving, press the B Button while it\l"
	.string "is trying to evolve.\l"
	.string "The startled POKéMON will stop.\p"
	.string "This is called an evolution cancel.$"

Route116_Text_TrainerTipsBagHasPockets:
	.string "TRAINER TIPS\p"
	.string "Your BAG has several POCKETS.\p"
	.string "Items you obtain are automatically\n"
	.string "placed in the appropriate POCKETS.\p"
	.string "No TRAINER can afford to be without\n"
	.string "a BAG of their own.$"

Route116_Text_Engineer1:
	.string "What kinda place is this to\n"
	.string "build a swimming pool?\p"
	.string "Ah well, money is money.$"

Route116_Text_Engineer2:
	.string "DRRRRRRRRRRRRRRRRRRRR!\p"
	.string "He's drilling, so he can't\n"
	.string "hear you.$"

Route116_Text_Engineer3:
	.string "Oh, this?\p"
	.string "Why, this is President Stone's\n"
	.string "fancy new vacation house.\p"
	.string "Yes, he does live in Rustboro\n"
	.string "already.\p"
	.string "But this area, you see, is just\n"
	.string "for him.\p"
	.string "And for all those who can afford\n"
	.string "it, of course.$"

Route116_Text_Scientist:
	.string "Eveything is progressing\n"
	.string "as scheduled.\p"
	.string "This land's value will soar!$"

Route116_Text_FriendlyBlackBelt:
	.string "A-a-are you the inspector?\p"
	.string "I've been doing my job, sir, I\n"
	.string "swear it!\p"
	.string "Oh, wait.\n"
	.string "You're just some kid.\p"
	.string "Buzz of, will ya?$"

Route116_Text_Wait:
	.string "Waaaaait!$"

Route116_Text_Greetings:
	.string "Hey, there.\n"
	.string "You can call me Riley.\p"
	.string "I will cut straight to\n"
	.string "the chase.$"


Route116_Text_Riley:
	.string "Me and my Wanda, we've had this dream\n"
	.string "for a while.\p"
	.string "She lives in Verdanturf, you see.\p"
	.string "We've been hoping to, eventually,\n"
	.string "dig a hole in this cave.\p"
	.string "That way, our aching hearts would\n"
	.string "finally be connected.\p"
	.string "We thought that with Devon starting\n"
	.string "to drill, it could finally come true.\p"
	.string "But the way they're doing it…\n"
	.string "It's just not right.\p"
	.string "They're displacing the Pokémon from\n"
	.string "their habitat, scaring them…\p"
	.string "To put it simply, I don't like it.\n"
	.string "So here's the deal.\p"
	.string "I saw what happened from up here.\p"
	.string "A Devon grunt barged in and took old\n"
	.string "Mr. Briney's Peeko as hostage.\p"
	.string "I don't know if I can do much by\n"
	.string "myself, but with you?\p"
	.string "I've seen you fight.\n"
	.string "You're a one-man army.\p"
	.string "So, meet me inside.\n"
	.string "We'll give him a lesson.$"

Common_Name_Riley:
	.string "Riley$"