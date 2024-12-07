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
	.string "Ah, I see. The Cutter gave you\n"
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
	.string "I'm not going to stop you, but…\p"
	.string "I'd recommend having at least three\n"
	.string "Gym Badges before going too far in.\p"
	.string "I don't want a rookie Trainer weighing\n"
	.string "on my coscience.$"


OldaleRuins_Text_Trees:
	.string "This was a tourist spot, once.\p"
	.string "But then more and more people came\n"
	.string "here trying to steal artefacts.\p"
	.string "We decided to plant cacti in front\n"
	.string "of the entrance to keep people out.$"