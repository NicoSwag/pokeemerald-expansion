OldaleRuins_MapScripts::
	.byte 0


EventScript_OldaleRuins_Hiker::
	msgbox OldaleRuins_Text_Hiker, MSGBOX_NPC
	end


OldaleRuins_EventScript_Camper::
	msgbox OldaleRuins_Text_Cave, MSGBOX_NPC
	end



OldaleRuins_EventScript_Picnicker::
	msgbox OldaleRuins_Text_Trees, MSGBOX_NPC
	end


OldaleRuins_Text_Hiker:
	.string "Hey, how did you get in?\p"
	.string "Ah, I see. The CUTTER gave you\n"
	.string "his permission.\p"
	.string "Very well, then. Just don't disturb\n"
	.string "these sacred ruins.$"


OldaleRuins_Text_Cave:
	.string "Now hold up a minute, friend.\p"
	.string "Are you thinking of going into that\n"
	.string "cave?\p"
	.string "The air inside is… Strange.\p"
	.string "Hard to breathe. Makes people see\n"
	.string "things.\p"
	.string "I'm not going to stop you, but whatever\n"
	.string "you do, be careful.$"


OldaleRuins_Text_Trees:
	.string "This was a tourist spot, once.\p"
	.string "But then more and more people came\n"
	.string "here trying to steal artefacts.\p"
	.string "We decided to plant cacti in front\n"
	.string "of the entrance to keep people out.$"