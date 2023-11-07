LowerRoute115_MapScripts::
	.byte 0


Route115_EventScript_Barrier::
	msgbox Route115_Text_Barrier, MSGBOX_DEFAULT
	closemessage
	end

Route115_EventScript_Engineer1::
	msgbox Route115_Text_Difficult, MSGBOX_NPC
	closemessage
	end

Route115_EventScript_Engineer2::
	msgbox Route115_Text_Door, MSGBOX_NPC
	closemessage
	end

Route115_EventScript_Engineer3::
	msgbox Route115_Text_DestroyBarrier, MSGBOX_DEFAULT
	closemessage
	end

Route115_EventScript_Scizor::
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
	msgbox Route115_Text_Scizor, MSGBOX_DEFAULT
	end

Route115_Text_Barrier:
	.string "Some sort of invisible barrier\n"
	.string "is blocking the way.$"


Route115_Text_Difficult:
	.string "It's quite hard to build on top\n"
	.string "of this terrain.$"

Route115_Text_Door:
	.string "Drats!\p"
	.string "I forgot to install a door!$"

Route115_Text_DestroyBarrier:
	.string "Come on, SCIZOR!\n"
	.string "We have a forest to cut down!$"

Route115_Text_Scizor:
	.string "SCIZOR: Hya! Hya! Hya!$"
