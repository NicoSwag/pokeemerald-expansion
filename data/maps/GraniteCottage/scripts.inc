GraniteCottage_MapScripts::
	.byte 0


GraniteCottage_EventScript_BedSleep::
	msgbox GraniteCottage_Text_WantToSleep, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, YES, GraniteCottage_EventScript_SleepYes
	end


GraniteCottage_Text_WantToSleep:
	.string "The bed looks comfortable.\p"
	.string "Do you want to rest here?$"

GraniteCottage_EventScript_SleepYes::
	fadescreenswapbuffers FADE_TO_BLACK
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox GraniteCottage_Text_YouFeelRefreshed, MSGBOX_DEFAULT
	closemessage
	end


GraniteCottage_Text_YouFeelRefreshed:
	.string "You and your team feel refreshed.$"

GraniteCottage_EventScript_Rival::
	call Common_Set_Name_Rival
	msgbox GraniteCottage_Text_Rival, MSGBOX_NPC
	end


GraniteCottage_Text_Rival:
	.string "Oh, hey.\p"
	.string "So apparently the mines have been\n"
	.string "taken over by Team Magma.\p"
	.string "I wanted to challenge the Gym Leader,\n"
	.string "but he's staying here until the\l"
	.string "situation has been dealt with.\p"
	.string "So for now I'll just be waiting.\p"
	.string "Don't exactly feel like going against\n"
	.string "an army of dangerous weirdos by myself.\p"
	.string "Hey, speaking of weirdos…\p"
	.string "What's with the kid outside?\n"
	.string "Wally, right?\p"
	.string "I've always seen him around, but never\n"
	.string "really talked to him.\p"
	.string "… … …\p"
	.string "Oh, you know him?\n"
	.string "I can see why you two would get along.\n"
	.string "Hah!\p"
	.string "… … … …\p"
	.string "That was a joke! A J-O-K-E!\n"
	.string "I was calling both of you boring!\p"
	.string "…Tough crowd.$"