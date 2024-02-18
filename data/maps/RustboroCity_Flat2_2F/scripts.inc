RustboroCity_Flat2_2F_MapScripts::
	.byte 0

RustboroCity_Flat2_2F_EventScript_OldMan::
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_BOOSTER_ENERGY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall::
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
	.string "It is said that DEVON existed even\n"
	.string "way back when people started to\l"
	.string "settle in HOENN.\p"
	.string "Of course, I wasn't even born back\n"
	.string "then. Haha!$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
	.string "My daddy's working at the CORPORATION.\p"
	.string "One day, while he wasn't looking, I\n"
	.string "stole this from his work room!\p"
	.string "You can have it, as long as you\n"
	.string "don't tell anyone.$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
	.string "My daddy's working at the CORPORATION.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "DEVON, too.$"
