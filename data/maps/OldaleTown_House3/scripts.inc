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
	.string "A long time ago, the mountain north of\n"
	.string "here, Mt. Kirikiri, was a volcano!\p"
	.string "That's why there's all sorts of rocks\n"
	.string "scattered around here.\p"
	.string "But now it went to sleep, and the only\n"
	.string "active volcano in the region is Mt.\l"
	.string "Chimney.\p"
	.string "It seems that a bunch of Slugma kept\n"
	.string "living here, though, despite the rain!$"

OldaleTown_House3_Text_Mom:
	.string "My son is very interested in science.\n"
	.string "Maybe he can tell you something new!$"
