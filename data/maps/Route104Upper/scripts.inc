Route104Upper_MapScripts::
	.byte 0



Route104Upper_HandleTrainers::
	call_if_trainerunset TRAINER_GINA_AND_MIA_1,Route104Upper_EventScript_ResetTrainers
	call_if_trainerset TRAINER_GINA_AND_MIA_1,Route104Upper_EventScript_SetTrainers
	return


Route104Upper_EventScript_ResetTrainers::
	cleartrainerflag TRAINER_WINSTON_1
	cleartrainerflag TRAINER_HALEY_1
	cleartrainerflag TRAINER_IVAN
	return



Route104Upper_EventScript_SetTrainers::
	setifnotbeaten TRAINER_WINSTON_1
	setifnotbeaten TRAINER_HALEY_1
	setifnotbeaten TRAINER_IVAN
	return

Route104Upper_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM04, Route104_EventScript_ReceivedTrailblaze
	msgbox Route104_Text_TakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_TRAILBLAZE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM04
	release
	end


Route104_EventScript_Winston::
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
	setvar VAR_0x8004, TRAINER_WINSTON_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_Sign::
	msgbox Route104_Text_Sign, MSGBOX_SIGN
	release
	end

Route104_EventScript_Sign4::
	msgbox Route104_Text_Sign, MSGBOX_SIGN
	release
	end

Route104_EventScript_Sign2::
	msgbox Route104_Text_Sign2, MSGBOX_SIGN
	release
	end

Route104_EventScript_Sign3::
	msgbox Route104_Text_Sign3, MSGBOX_SIGN
	end

Route104_EventScript_TryRegisterWinstonAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
	release
	end

Route104_EventScript_RegisterWinstonAfterBattle::
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

Route104_EventScript_TryRegisterWinston::
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_RegisterWinston::
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

Route104_EventScript_RematchWinston::
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_ReceivedTrailblaze::
	msgbox Route104_Text_TMsAreOneTimeUseKinda, MSGBOX_DEFAULT
	release
	end

Route104Upper_EventScript_BerryMaster::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHERI_VOUCHER, Route104Upper_EventScript_BerryMaster_End
	msgbox Route104Upper_Text_BerryMaster, MSGBOX_DEFAULT
	giveitem ITEM_CHERI_VOUCHER
	setflag FLAG_RECEIVED_CHERI_VOUCHER
	release
	end

Route104Upper_EventScript_BerryMaster_End::
	msgbox Route104Upper_Text_BerryMaster_End, MSGBOX_NPC
	release
	end

Route104_EventScript_Gina::
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_Mia::
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_Haley::
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_TryRegisterHaleyAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
	release
	end

Route104_EventScript_RegisterHaleyAfterBattle::
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_HALEY_1
	release
	end

Route104_EventScript_TryRegisterHaley::
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release
	end

Route104_EventScript_RegisterHaley::
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_HALEY_1
	release
	end

Route104_EventScript_RematchHaley::
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
	end


Route104_Text_TakeThis:
	.string "While hiking, being the first\n"
	.string "person to carve a new trail can be\l"
	.string "very dangerous.\p"
	.string "It does come with its own benefits,\n"
	.string "though!\p"
	.string "Here, let me show you…$"

Route104_Text_TMsAreOneTimeUseKinda:
	.string "A word of advice!\p"
	.string "A TM, Technical Machine, is good only\n"
	.string "for one-time use.\p"
	.string "However, once you find one, you can\n"
	.string "always buy it again from any Mart!$"

Route104_Text_WinstonIntro:
	.string "Oh, sure, I'll accept your challenge.\n"
	.string "I have a lot of money.$"

Route104_Text_WinstonDefeat:
	.string "Why couldn't I win?$"

Route104_Text_WinstonPostBattle:
	.string "There are some things money can't buy.\n"
	.string "That's skill.$"


	Route104_Text_GinaIntro:
	.string "Okay, let's battle with our\n"
	.string "Pokémon!$"

Route104_Text_GinaDefeat:
	.string "Losing upsets me!$"

Route104_Text_GinaPostBattle:
	.string "You are strong!\n"
	.string "We have to train lots more!$"

Route104_Text_GinaNotEnoughMons:
	.string "Oh? Only one Pokémon?\n"
	.string "Then, we don't battle with you.\p"
	.string "If there's only one Pokémon, it will\n"
	.string "be lonesome. That's not nice.$"

Route104_Text_MiaIntro:
	.string "We are twins, so we battle\n"
	.string "Pokémon together.$"

Route104_Text_MiaDefeat:
	.string "We battled together, but we\n"
	.string "both lost…\p"
	.string "Gina and Mia were the Area Leaders!$"

Route104_Text_MiaPostBattle:
	.string "We will train our Pokémon more\n"
	.string "and be strong like you.$"

Route104_Text_MiaNotEnoughMons:
	.string "You want to battle with us?\p"
	.string "It's a big no-no if you don't have two\n"
	.string "Pokémon with you.\l"
	.string "We're too strong for you!$"

Route104_Text_Sign:
	.string "World-famous Feebas Pro Shop Prism\n"
	.string "just one step to the left and six\l"
	.string "forward!$"


Route104_Text_Sign2:
	.string "World-famous Feebas Pro Shop Prism\n"
	.string "just one step forward!$"

Route104_Text_Sign3:
	.string "Leaving?\n"
	.string "Make sure to check out the Feebas P-\p"
	.string "Someone scribbled over the rest of the\n"
	.string "sign.$"

Route104_Text_Sign4:
	.string "Rustboro City.\n"
	.string "Proud home of Devon Corp.$"


Route104Upper_Text_BerryMaster:
	.string "There is something strange about the\n"
	.string "soil of Hoenn, yes.\p"
	.string "They say that for some reason, berry\n"
	.string "trees don't grow well on it.\p"
	.string "But thankfully, Pokémon Centers have\n"
	.string "their own supply that they distribute\l"
	.string "to Trainers.\p"
	.string "Here, take this!$"

Route104Upper_Text_BerryMaster_End:	
	.string "Pokémon with berries cannot be deposited\n"
	.string "in a PC.\p"
	.string "Why? Simple.\p"
	.string "Pokémon, as well as most items, are very\n"
	.string "easy to turn into data.\p"
	.string "But for some reason, they haven't figure\n"
	.string "out berries quite yet.\p"
	.string "The same is also true for healing items.$"