OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Man::
	goto_if_set FLAG_RECEIVED_SPELL_TAG, OldaleTown_House2_EventScript_SpellTag
	goto_if_set FLAG_SAW_GHOST, OldaleTown_House2_EventScript_SawGhost
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_SawGhost::
	msgbox OldaleTown_House2_Text_IKnewIt, MSGBOX_NPC
	giveitem ITEM_SPELL_TAG
	setflag FLAG_RECEIVED_SPELL_TAG
OldaleTown_House2_EventScript_SpellTag::
	msgbox OldaleTown_House2_Text_SpellTag, MSGBOX_NPC

OldaleTown_House2_Text_PokemonLevelUp:
	.string "I swear! I saw it!\n"
	.string "A ghost, in MT. KIRIKIRI!\p"
	.string "And not just a Ghost-type POKéMON!\n"
	.string "A human ghost!$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "I keep telling my husband to stay\n"
	.string "away from that place.\p"
	.string "It's cursed.\p"
	.string "Thankfully they barred the entrance.$"

OldaleTown_House2_Text_IKnewIt:
	.string "What? You saw a ghost too?\n"
	.string "Ahah! I knew it! I'm not crazy!\p"
	.string "My theory, you see, is that those are\n"
	.string "not merely spirits, no.\p"
	.string "They're actually time travelers.\n"
	.string "From the past. Or future.\p"
	.string "I can't quite prove anything yet.\p"
	.string "But, thank you for the field work.\p"
	.string "Here, this might be useful.$"

OldaleTown_House2_Text_SpellTag:
	.string "What I just gave you is a SPELL TAG.\p"
	.string "It increases the power of Ghost-type\n"
	.string "moves.\p"
	.string "Ghost POKéMON are weak to other Ghost\n"
	.string "POKéMON you see.\p"
	.string "Perhaps the same is true for human spirits?\n"
	.string "Further investigation is needed.$"