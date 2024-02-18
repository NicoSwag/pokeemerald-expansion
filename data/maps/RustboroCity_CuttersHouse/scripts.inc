RustboroCity_CuttersHouse_MapScripts::
	.byte 0

RustboroCity_CuttersHouse_EventScript_Cutter::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_CuttersHouse_EventScript_YouCanPutThisHMToGoodUse
	msgbox RustboroCity_CuttersHouse_Text_StayAway, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_ExplainCut::
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_Lass::
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
	end
	

RustboroCity_CuttersHouse_EventScript_YouCanPutThisHMToGoodUse::
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	setflag FLAG_RECEIVED_HM_CUT
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_Text_StayAway:
	.string "W-who are you?!\p"
	.string "No! Stay away!\n"
	.string "You crooks will never get me!$"


RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
	.string "W-who are you?!\p"
	.string "Oh… ROXANNE sent you?\p"
	.string "Very well, then… I guess I can trust\n"
	.string "you.\p"
	.string "I used to be known as the CUTTER.\n"
	.string "In my youth, I worked for DEVON.\p"
	.string "Back then, they were still in the\n"
	.string "process of expanding this city.\p"
	.string "I cut, and cut, and cut, until only\n"
	.string "this patch of nature was left.\p"
	.string "I realized my mistake, and now I\n"
	.string "live in here, in defiance of them.\p"
	.string "But, they're still after me, and my\n"
	.string "CUTTING skills.\p"
	.string "Pleae, TRAINER. Take this burden off\n"
	.string "these tired hands.$"

RustboroCity_CuttersHouse_Text_ExplainCut:
	.string "What I just gave you is the HIDDEN\n"
	.string "MACHINE containing the move CUT, the\l"
	.string "true source of my powers.\p"
	.string "HMs are unique in two ways.\p"
	.string "First off, they're infinitely\n"
	.string "reusable.\p"
	.string "Second, you don't actually need\n"
	.string "to teach them to a POKéMON in order\l"
	.string "for them to use their unique powers.\p"
	.string "But please, don't make my same\n"
	.string "mistakes.\p"
	.string "If you wanted to use it on something,\n"
	.string "I would suggest to try and cut down\l"
	.string "those pesky invasive cacti.\p"
	.string "That would actually help people, and\n"
	.string "help redeem this foolish old man.$"

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
	.string "My grandpa used to be known as the CUTTER.\p"
	.string "But he was a bit shaken by the whole\n"
	.string "ordeal, as you can see.\p"
	.string "If you wanted to talk to him, I'd try\n"
	.string "consulting with ROXANNE.\p"
	.string "She's one of the only people he trusts.$"
