OldaleTown_House3_MapScripts::
	.byte 0

OldaleTown_House3_EventScript_Kid::
	msgbox OldaleTown_House3_Text_Volcano, MSGBOX_NPC
	end

OldaleTown_House3_EventScript_Mom::
	msgbox OldaleTown_House3_Text_Mom, MSGBOX_NPC
	end

OldaleTown_House3_Text_Volcano:
	.string "Did you know?\p"
	.string "Ages ago, the mountain north of here,\n"
	.string "MT. KIRIKIRI, was a volcano!\p"
	.string "That's why there's all sorts of rocks\n"
	.string "scattered around here.\p"
	.string "But now it went to sleep, and the only\n"
	.string "active volcano in the region is MT.\l"
	.string "CHIMNEY.\p"
	.string "It seems that a bunch of SLUGMAS decided\n"
	.string "to keep living here, though, despite the\l"
	.string "frequent rain!$"

OldaleTown_House3_Text_Mom:
	.string "My son is very interested in science.\n"
	.string "Maybe he can tell you something new!$"
