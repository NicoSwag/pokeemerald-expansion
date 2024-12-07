PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid::
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "Norman became our town's new\n"
	.string "Gym Leader.\p"
	.string "I think he called his family over from\n"
	.string "somewhere far away.$"

PetalburgCity_House2_Text_BattledNormanOnce:
	.string "If you think about it, being a\n"
	.string "Gym Leader kinda sucks.\p"
	.string "You're there to test Trainers,\n"
	.string "right?\p"
	.string "So you can't really go too hard on\n"
	.string "them.\p"
	.string "In a way, their job is to lose.$"