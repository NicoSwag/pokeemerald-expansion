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
	.string "My mom told me that, thousands of years\l"
	.string "ago, the legendary POKéMON awakened.\p"
	.string "And when that happened, BLAMM!\n"
	.string "Big rocks from Mt. Chimney rained here\p"
	.string "That's why it's full of SLUGMA!$"

OldaleTown_House3_Text_Mom:
	.string "My son is very interested in history.\n"
	.string "Maybe he can tell you something new!$"
