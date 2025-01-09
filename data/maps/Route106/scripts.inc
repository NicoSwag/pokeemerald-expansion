Route106_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route106_EventScript_OnTransition
	.byte 0

Route106_EventScript_OnTransition::
	end

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Krysta::
	trainerbattle_single TRAINER_KRYSTA, Route106_Text_KrystaIntro, Route106_Text_KrystaDefeated
	msgbox Route106_Text_KrystaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kassandra::
	trainerbattle_single TRAINER_KASSANDRA, Route106_Text_KassandraIntro, Route106_Text_KassandraDefeated
	msgbox Route106_Text_KassandraPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ellen::
	trainerbattle_single TRAINER_ELLEN, Route106_Text_EllenIntro, Route106_Text_EllenDefeated
	msgbox Route106_Text_EllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Christina::
	trainerbattle_single TRAINER_CHRISTINA, Route106_Text_ChristinaIntro, Route106_Text_ChristinaDefeated
	msgbox Route106_Text_ChristinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Elliot::
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ELLIOT_1
	release
	end

Route106_EventScript_ElliotRematch::
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ned::
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"

Route106_Text_EllenIntro:
	.string "Halt!\n"
	.string "Who goes there?$"

Route106_Text_EllenDefeated:
	.string "Very well.\n"
	.string "You may pass!$"
	
Route106_Text_EllenPostBattle:
	.string "I'm on guard duty today.\p"
	.string "Truth to be told, it's pretty boring.\n"
	.string "I'd rather be in the mines.$"


Route106_Text_ChristinaIntro:
	.string "We'll never give up our mine!$"

Route106_Text_ChristinaDefeated:
	.string "Do you yearn for the mines\n"
	.string "that much…?$"
	
Route106_Text_ChristinaPostBattle:
	.string "Our mine seems to interest a lot\n"
	.string "people recently.\p"
	.string "Beats me why. It's just a mine!$"
