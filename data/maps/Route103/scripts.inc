.set LOCALID_RIVAL, 2
.set LOCALID_MAGMAM, 18
.set LOCALID_MAGMAF, 19

Route103_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0

Route103_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end

Route103_EventScript_OpenAlteringCave::
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return

Route103_EventScript_Pickle::
	msgbox Route103_Message_Pickle, MSGBOX_NPC
	release
	end

Route103_EventScript_Rival::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
	end

Route103_EventScript_RivalMay::
	call Common_Set_Name_Rival
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route103_Text_Suckers, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement LOCALID_MAGMAM Common_Movement_ExclamationMark
	applymovement LOCALID_MAGMAF Common_Movement_ExclamationMark
	waitmovement 0
	goto Route103_EventScript_MagmaStart
	end

Route103_EventScript_RivalBrendan::
call Common_Set_Name_Rival
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call Common_Set_Name_Rival
	msgbox Route103_Text_Suckers, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement LOCALID_MAGMAM Common_Movement_ExclamationMark
	applymovement LOCALID_MAGMAM Common_Movement_ExclamationMark
	waitmovement 0
	goto Route103_EventScript_MagmaStart
	end

Route103_EventScript_MagmaStart::
	switch VAR_FACING
	case DIR_EAST, Route103_EventScript_MagmaEast
	case DIR_WEST, Route103_EventScript_MagmaWest
	case DIR_NORTH, Route103_EventScript_MagmaNorth
end

Route103_EventScript_MagmaEast::
	applymovement OBJ_EVENT_ID_PLAYER Route103_Movement_Down
	waitmovement 0
	goto Route103_EventScript_MagmaFight
	end

Route103_EventScript_MagmaWest::
	applymovement OBJ_EVENT_ID_PLAYER Route103_Movement_West
	waitmovement 0
	goto Route103_EventScript_MagmaFight
	end

Route103_EventScript_MagmaNorth::
	applymovement OBJ_EVENT_ID_PLAYER Route103_Movement_North
	waitmovement 0
	goto Route103_EventScript_MagmaFight
	end

Route103_EventScript_MagmaFight::
	applymovement LOCALID_MAGMAM Route103_Movement_Magmam
	applymovement LOCALID_MAGMAF Route103_Movement_Magmaf
	applymovement LOCALID_RIVAL Route103_Movement_Rival
	msgbox Route_103_Text_SayWhat, MSGBOX_DEFAULT
	closemessage
	waitmovement 0
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_PrepareFightMay
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_PrepareFightBrendan
	end

Route103_EventScript_PrepareFightBrendan::
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartBrendanBattleTreecko
	case 1, Route103_EventScript_StartBrendanBattleTorchic
	case 2, Route103_EventScript_StartBrendanBattleMudkip
	end

Route103_EventScript_PrepareFightMay::
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartMayBattleTreecko
	case 1, Route103_EventScript_StartMayBattleTorchic
	case 2, Route103_EventScript_StartMayBattleMudkip
	end

Route103_Movement_Rival::
	walk_down
	step_end

Route103_Movement_Magmam::
	walk_up
	step_end

Route103_Movement_Magmaf::
	walk_up
	walk_up
	walk_up
	step_end

Route103_Movement_Down::
	walk_down
	step_end

Route103_Movement_West::
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

Route103_Movement_North::
	walk_left
	walk_in_place_faster_down
	step_end

Route103_EventScript_StartMayBattleTreecko::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_MAY_ROUTE_103_TREECKO
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleTorchic::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_MAY_ROUTE_103_TORCHIC
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleMudkip::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_MAY_ROUTE_103_MUDKIP
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartBrendanBattleTreecko::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_BRENDAN_ROUTE_103_TREECKO
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleTorchic::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_BRENDAN_ROUTE_103_TORCHIC
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleMudkip::
	multi_fixed_2_vs_2 TRAINER_ROUTE_103_MAGMAF, Magma2DefeatText, TRAINER_ROUTE_103_MAGMAM, Magma2DefeatText, PARTNER_BRENDAN_ROUTE_103_MUDKIP
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_AfterMayBattle::
speakername Common_Name_Courtney
msgbox Route103_Text_Revenge, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER Route103_Movement_Stepup
	applymovement LOCALID_RIVAL Route103_Movement_Stepup
	waitmovement 0
	applymovement LOCALID_MAGMAM Route_103_Magmam_Exit
	applymovement LOCALID_MAGMAF Route_103_Magmaf_Exit
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAY, FALSE
	call Common_Set_Name_Rival
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_AfterBrendanBattle::
speakername Common_Name_Courtney
	msgbox Route103_Text_Revenge, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAGMAM Route_103_Magmam_Exit
	applymovement LOCALID_MAGMAF Route_103_Magmaf_Exit
	waitmovement 0
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	call Common_Set_Name_Rival
	applymovement LOCALID_RIVAL, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

script_PlayerLostTheFight::
end

Route103_Movement_Stepup::
	walk_up
	walk_in_place_faster_down
	step_end

Route_103_Magmam_Exit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route_103_Magmaf_Exit::
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Text_Revenge::
	.string "Leader Maxie…\n"
	.string "I disappointed you…\p"
	.string "But at least…\n"
	.string "We got the samples.\p"
	.string "Remember it well.\n"
	.string "We are Team Magma.\p"
	.string "We will make the world…\n"
	.string "A better place.\l"
	.string "No matter the cost.\p"
	.string "Soon, no one…\n"
	.string "Will stand in our way.$"

Magma1DefeatText::
	.string "U… Unbelievable…$"

Magma2DefeatText::
	.string "Processing…\n"
	.string "…We lost?$"

Route103_EventScript_RivalExit::
	closemessage
	goto Route103_EventScript_RivalExitFacingSouth
	end

Route103_EventScript_RivalExitFacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingEastOrWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingSouth::
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalEnd::
	removeobject LOCALID_RIVAL
	removeobject LOCALID_MAGMAF
	removeobject LOCALID_MAGMAM
	setvar VAR_BIRCH_LAB_STATE, 4
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setvar VAR_OLDALE_RIVAL_STATE, 1
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_EventScript_MagmaF::
	msgbox Route103_Text_Volcanic_Rocks, MSGBOX_DEFAULT
	closemessage
end

Route103_EventScript_MagmaM::
	msgbox Route103_Text_Complaining, MSGBOX_DEFAULT
	closemessage
end

Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_Movement_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_RouteSign::
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end

Route103_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AmyRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_AmyRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_LivRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_LivRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MIGUEL_1
	release
	end

Route103_EventScript_MiguelRematch::
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_Text_MayRoute103Pokemon:
	.string "Let's see… The Pokémon found\n"
	.string "in Pilgrim's Passage include…$"

Route103_Text_MayLetsBattle:
	.string "Oh, {PLAYER}{KUN}, it's you.\p"
	.string "…What, my dad gave you a Pokémon\n"
	.string "as a gift?\p"
	.string "…Would you look at that.\n"
	.string "Things are finally getting interesting.\p"
	.string "Do you see those two suspicious guys\n"
	.string "back there?\p"
	.string "Those are members of Team Magma.\p"
	.string "I've seen them wander around here\n"
	.string "before, acting all shady and yelling\l"
	.string "at people…\p"
	.string "What do you say, {PLAYER}{KUN}?\p"
	.string "Let's team up and show them who's\n"
	.string "really the boss around here.$"



Route103_Text_MayDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_MayTimeToHeadBack:
	.string "Well, that was pretty good.\n"
	.string "I suppose you can handle a Pokémon.\p"
	.string "Maybe my dad wasn't wrong on that one.\p"
	.string "Well, I'm heading back to the lab now.\n"
	.string "Don't trip over yourself.$"

Route103_Text_BrendanRoute103Pokemon:
	.string "Let's see… The Pokémon found\n"
	.string "in Pilgrim's Passage include…$"


Route103_Text_BrendanLetsBattle:
	.string "Oh, {PLAYER}{KUN}, it's you.\p"
	.string "…What, my dad gave you a Pokémon\n"
	.string "as a gift?\p"
	.string "…Would you look at that.\n"
	.string "Things are finally getting interesting.\p"
	.string "Do you see those two suspicious guys\n"
	.string "back there?\p"
	.string "Those are members of Team Magma.\p"
	.string "I've seen them wander around here\n"
	.string "before, acting all shady and yelling\l"
	.string "at people…\p"
	.string "What do you say, {PLAYER}{KUN}?\p"
	.string "Let's team up and show them who's\n"
	.string "really the boss around here.$"

Route103_Text_Suckers:
	.string "Hey, suckers!\p"
	.string "Come and get some!$"

Route_103_Text_SayWhat:
	.string "What… Was that…?\p"
	.string "More nuisances?\n"
	.string "Great…\p"
	.string "The ruins… blocked off.\p"
	.string "We sabotaged the bridge, at\n"
	.string "least…\p"
	.string "But now…\p"
	.string "… … …\p"
	.string "Are you…\n"
	.string "Trying to oppose us?\p"
	.string "That… Simply won't do.\p"
	.string "Get ready…\n"
	.string "To face Courtney of Team Magma!$"

Route103_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
	.string "Well, that was pretty good.\n"
	.string "I suppose you can handle a Pokémon.\p"
	.string "Maybe my dad wasn't wrong on that one.\p"
	.string "Well, I'm heading back to the lab now.\n"
	.string "Don't trip over yourself.$"

Route103_Text_ShouldHaveBroughtPotion:
	.string "This bridge connect to Slateport,\n"
	.string "but it looks like it's broken.\p"
	.string "I bet those Team Magma guys did it.$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
	.string "Pilgrim's Passage\n"
	.string "{DOWN_ARROW} Oldale Town$"

Route103_Text_Volcanic_Rocks:
	.string "Hmm… No doubt about it…\n"
	.string "These are volcanic formations.\p"
	.string "Better take some samples…$"

Route103_Text_Complaining:
	.string "Why do we always have to do\n"
	.string "the dirty work?$"

Common_Name_Courtney:
	.string "Courtney$"


Route103_Message_Pickle:
	.string "Oh, hey! It's you!\n"
	.string "Remember me?\p"
	.string "I'm the one you hitched a passage\n"
	.string "from!\p"
	.string "Well, I got to Rustboro alright, and I\n"
	.string "was on my way back to Slateport…\p"
	.string "But now the bridge is broken!\p"
	.string "How am I going to get back?$"