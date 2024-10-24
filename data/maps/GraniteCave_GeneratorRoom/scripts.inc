GraniteCave_GeneratorRoom_MapScripts::
	.byte 0

GraniteCave_EventScript_BrokenGenerator::
	lock
	msgbox GraniteCave_Text_BrokenGenerator, MSGBOX_SIGN
	closemessage
	release
	end


GraniteCave_Text_BrokenGenerator:
	.string "A hole has been punched through\n"
	.string "the generator.\p"
	.string "It does not seem to be functional\n"
	.string "anymore.$"