Route116_TunnelersRestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition:
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1::
	goto_if_set FLAG_RECEIVED_TM09, Route116_TunnelersRestHouse_EventScript_Tunneler1GivenTM
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	giveitem ITEM_TM09
	setflag FLAG_RECEIVED_TM09
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1GivenTM::
		msgbox Route116_TunnelersRestHouse_Text_Unemployed, MSGBOX_NPC
		end

Route116_TunnelersRestHouse_EventScript_Tunneler2::
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3::
	lock
	faceplayer
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_TunnelOpened::
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
	.string "Who are we?\n"
	.string "We're the BULLDOZER BROTHERS.\p"
	.string "No one in the world knows more\n"
	.string "than us about bulldozing.\p"
	.string "Alas, it seems that our days may\n"
	.string "have come to an end.\p"
	.string "There are rumors that DEVON might\n"
	.string "be developing a new kind of\l"
	.string "technology.\p"
	.string "They say it might put everyone out\n"
	.string "of a job!\p"
	.string "And that's why I want you to have\n"
	.string "this: the distillation of the\l"
	.string "knowledge of us BROTHERS.$"


Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
	.string "DEVON's tunneling effort are\n"
	.string "being hindered by a strange man.\p"
	.string "Every time someone tries to entern\n"
	.string "the tunnel, he jumps at them.\p"
	.string "Of course, DEVON's got a lot of\n"
	.string "firepower, so it's not very effective.\p"
	.string "They say he's got a lover in VERDANTURF,\n"
	.string "and yet he's so committed at protecting\l"
	.string "the environment.\p"
	.string "I don't really get it.$"

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
	.string "DEVON CORP…\p"
	.string "I'm telling you man, that company\n"
	.string "is shady.\p"
	.string "They do give out mad benefits, though.$"

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
	.string "has gone through!\p"
	.string "Sometimes, if you hope strongly enough,\n"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Unemployed:
	.string "You know, not having to work doesn't\n"
	.string "sound so bad.\p"
	.string "But will it end up being alright,\n"
	.string "I wonder?$"