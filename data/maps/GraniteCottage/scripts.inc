GraniteCottage_MapScripts::
	.byte 0


GraniteCottage_EventScript_BedSleep::
	msgbox GraniteCottage_Text_WantToSleep, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, YES, GraniteCottage_EventScript_SleepYes
	end


GraniteCottage_Text_WantToSleep:
	.string "The bed looks comfortable.\p"
	.string "Do you want to rest here?$"

GraniteCottage_EventScript_SleepYes::
	fadescreenswapbuffers FADE_TO_BLACK
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox GraniteCottage_Text_YouFeelRefreshed, MSGBOX_DEFAULT
	closemessage
	end


GraniteCottage_Text_YouFeelRefreshed:
	.string "You and your team feel refreshed.$"

Route106_EventScript_Generator::
	goto_if_set FLAG_HIDE_TABITHA_CAVE, Route106_EventScript_Generator_Post
	msgbox Route106_Text_Generator, MSGBOX_NPC
	end

Route106_EventScript_Generator_Post::
	msgbox Route106_Text_Generator_Post, MSGBOX_NPC
	end

Route106_EventScript_MinerTalkMagma::
	msgbox Route106_Text_MinerTalkMagma, MSGBOX_NPC
	end

Route106_Text_Generator:
	.string "The power system in the mine is pretty\n"
	.string "archaic.\p"
	.string "There are a bunch of generators supplying\n"
	.string "power, but even if only one of them goes\l"
	.string "out, it all goes out of whack.$"

Route106_Text_Generator_Post:
	.string "Yeah, so one of the generators is broken.\p"
	.string "A scared Pokémon wrecked it, or something.\p"
	.string "We called someone to repair it, but it's\n"
	.string "gonna take a while.$"

Route106_Text_MinerTalkMagma:
	.string "We get some time off?\n"
	.string "Score!\p"
	.string "Uh, I mean…\n"
	.string "What a disaster, yes.$"