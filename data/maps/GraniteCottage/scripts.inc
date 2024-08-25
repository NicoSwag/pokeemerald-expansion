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
