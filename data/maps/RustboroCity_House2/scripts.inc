RustboroCity_House2_MapScripts::
	.byte 0

RustboroCity_House2_EventScript_PokefanF::
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
	end

RustboroCity_House2_EventScript_LittleGirl::
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
	end

RustboroCity_House2_Text_TrainerSchoolExcellent:
	.string "The Trainer's School is excellent.\p"
	.string "If you study there, you could even\n"
	.string "become a Gym Leader.$"

RustboroCity_House2_Text_RoxanneKnowsALot:
	.string "Roxanne, the Gym Leader, really knows\n"
	.string "a lot about Pokémon.\p"
	.string "She's really strong, too!$"

RustboroCity_House2_EventScript_BerryMaster::
	goto_if_set FLAG_RECEIVED_CHARTI_VOUCHER, RustboroCity_House2_EventScript_BerryMasterPostVoucher
	msgbox RustboroCity_House2_Text_BerryMasterShowMe20Species, MSGBOX_NPC
	msgbox RustboroCity_House2_Text_20Species, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroCity_House2_EventScript_BerryMaster20Species
	msgbox RustboroCity_House2_Text_Truthful, MSGBOX_NPC
	end




RustboroCity_House2_EventScript_BerryMaster20Species::
	msgbox RustboroCity_House2_Text_TruthOrLie, MSGBOX_NPC
	giveitem ITEM_CHARTI_VOUCHER
	setflag FLAG_RECEIVED_CHARTI_VOUCHER
	RustboroCity_House2_EventScript_BerryMasterPostVoucher::
	msgbox RustboroCity_House2_Text_Explanation, MSGBOX_NPC
	end


RustboroCity_House2_Text_BerryMasterShowMe20Species:
	.string "Hmmm…\n"
	.string "I am a Berry Master.\p"
	.string "If you catch at least 20 species of\n"
	.string "Pokémon, I will give you something good.\p"
	.string "Well…\n"
	.string "Is what I would say, but…\p"
	.string "You might have noticed…\n"
	.string "That the Pokédex feature is kind of\l"
	.string "broken, right now.\p"
	.string "So…\n"
	.string "Just answer this truthfully…$"

RustboroCity_House2_Text_20Species:
	.string "Have you caught 20 different species\n"
	.string "of Pokémon?$"

RustboroCity_House2_Text_Truthful:	
	.string "Well…\n"
	.string "I do commend you for your honesty.\p"
	.string "Come back when the truth becomes\n"
	.string "reality.\p"
	.string "Or when you have learned to lie.$"

RustboroCity_House2_Text_TruthOrLie:
	.string "Well…\n"
	.string "Is it truth, or is it a lie?\p"
	.string "No matter.\n"
	.string "Here is what you were looking for.$"

RustboroCity_House2_Text_Explanation:	
	.string "See…\n"
	.string "Some berries reduce damage taken\l"
	.string "from supereffective moves.\p"
	.string "And…\n"
	.string "Charti Berries are good against Rock.\p"
	.string "What type does the Rustboro Gym Leader\l"
	.string "use?\p"
	.string "Mh, yes…\p"
	.string "I see the little cogs in your head are\n"
	.string "turning.$"

