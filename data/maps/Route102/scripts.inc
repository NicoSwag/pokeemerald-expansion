Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_SILVER_POWDER, Route102_EventScript_LittleBoyPowder
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	release
	end


Route102_EventScript_LittleBoyPowder::
	msgbox Route102_Text_GivePowder, MSGBOX_NPC
	giveitem ITEM_SILVER_POWDER
	msgbox Route102_Text_Feelbetternow, MSGBOX_NPC
	setflag FLAG_RECEIVED_SILVER_POWDER
	release
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE102_TRADE_COMPLETE, Route102_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SWINUB
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox Route102_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route102_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route102_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, Route102_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Route102_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_ROUTE102_TRADE_COMPLETE
	release
	end

Route102_EventScript_DeclineTrade::
	msgbox Route102_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Route102_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_TradeCompleted::
	msgbox Route102_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Well, you've seen how it goes.$"

Route102_Text_GivePowder:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_Feelbetternow:
	.string "Oh, I'm sorry!\n"
	.string "I think that came out of my nose…\p"
	.string "But it looks like my sneeze is gone!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_Text_YouWillTradeWontYou:
	.string "Oh, hi!\n"
	.string "Would you mind giving me a hand with\l"
	.string "something?\p"
	.string "You see, I wanted to catch a RALTS,\n"
	.string "but…\p"
	.string "Every time I throw a ball it just\n"
	.string "teleports away!\p"
	.string "If you'd be willing to trade me one,\n"
	.string "I could give you this SWINUB in return.\p"
	.string "What do you say?$"

Route102_Text_MonYouTakeCare:
	.string "Oh my, thank you!\p"
	.string "I'll take good care of your RALTS!$"

Route102_Text_YouWontTradeMe:
	.string "Aww…\n"
	.string "Well, I understand.\p"
	.string "I'm gonna be here if you change\n"
	.string "your mind!$"

Route102_Text_ThisIsntAMon:
	.string "Uh, I hate to say this, but\n"
	.string "that's not a {STR_VAR_1}.$"

Route102_Text_GoingToMakeVolbeatStrong:
	.string "I come from PETALBURG CITY, you\n"
	.string "see.\p"
	.string "We got plenty of SWINUB, but psychic-\n"
	.string "types are more rare.$"
