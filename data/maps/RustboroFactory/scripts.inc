.set LOCALID_GARBAGE_LADY, 7


RustboroFactory_MapScripts::
	.byte 0

RustboroCity_Sign_Factory::
	msgbox RustboroCity_Text_DevonFactory, MSGBOX_SIGN
	end


RustboroCity_Text_DevonFactory:
	.string "Devon Factory\n"
	.string "Unauthorized personnel keep out$"

RustboroCity_EventScript_KidRunning::
	msgbox RustboroCity_Text_KidRunning, MSGBOX_NPC
	end

RustboroCity_Text_KidRunning::
	.string "Yahoo!$"