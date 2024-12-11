RustboroCity_Toilet_MapScripts::
	.byte 0



RustboroCity_EventScript_Toilet::
	lock
	msgbox RustboroCity_Text_Toilet, MSGBOX_SIGN
	release
	end


RustboroCity_Text_Toilet:
	.string "Some kind of vapor is emanating\n"
	.string "from the toilet.\p"
	.string "Maybe if you could Dive into it…$"