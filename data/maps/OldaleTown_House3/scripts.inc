OldaleTown_House3_MapScripts::
	.byte 0

OldaleTown_House3_EventScript_Kid::
	msgbox OldaleTown_House3_Text_Volcano, MSGBOX_NPC
	end

OldaleTown_House3_EventScript_Mom::
	msgbox OldaleTown_House3_Text_Mom, MSGBOX_NPC
	end

OldaleTown_House3_Text_Volcano:
	.string "Did you see the big rock outside?\p"
	.string "My mom told me that, thousands of years\n"
	.string "ago, the legendary POKéMON awakened.\p"
	.string "And when that happened, BLAMM!\n"
	.string "Big rocks from Mt. Chimney rained on the\l"
	.string "town.\p"
	.string "That's why you can find Slugma here!$"

OldaleTown_House3_Text_Mom:
	.string "My son is very interested in history.\n"
	.string "Maybe he can tell you something new!$"
