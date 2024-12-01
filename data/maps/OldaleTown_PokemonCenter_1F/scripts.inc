.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end




OldaleTown_PokemonCenter_1F_EventScript_MasterBerry::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ORAN_VOUCHER, OldaleTown_PokemonCenter_1F_EventScript_BerryMasterGaveVoucher
	msgbox OldaleTown_PokemonCenter_1F_Text_GiveVoucher, MSGBOX_DEFAULT
	giveitem ITEM_ORAN_VOUCHER
	setflag FLAG_RECEIVED_ORAN_VOUCHER
	msgbox OldaleTown_PokemonCenter_1F_Text_GivenVoucher, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_BerryMasterGaveVoucher::
	msgbox OldaleTown_PokemonCenter_1F_Text_OneOfMany, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Mart::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, OldaleTown_PokemonCenter_1F_EventScript_StillStocking
	message gText_HowMayIServeYou
	waitmessage
	pokemart OldaleTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

		.align 2

OldaleTown_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE
	release
	end



OldaleTown_PokemonCenter_1F_EventScript_StillStocking:
	msgbox OldaleTown_PokemonCenter_1F_Text_StillStocking, MSGBOX_NPC
	release
	end



OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "When you cure your Pokémon, you\n"
	.string "also get some healing items for free.\p"
	.string "I've heard that you can get more by\n"
	.string "winning Badges.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "I spent too much money at the Mart,\n"
	.string "and now I'm completely broke.\p"
	.string "I guess I could go fight more wild\n"
	.string "Pokémon…$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The second floor of Pokémon Centers\n"
	.string "houses a bunch of useful services.\p"
	.string "You can make your Pokémon forget and\n"
	.string "remember moves, or even learn brand\l"
	.string "new ones!$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The second floor of Pokémon Centers\n"
	.string "houses a bunch of useful services.\p"
	.string "You can make your Pokémon forget and\n"
	.string "remember moves, or even learn brand\l"
	.string "new ones!$"

OldaleTown_PokemonCenter_1F_Text_StillStocking:
	.string "I'm terribly sorry, but we're still\n"
	.string "stocking our inventory.\p"
	.string "Do come back in a little!$"

OldaleTown_PokemonCenter_1F_Text_GiveVoucher:
	.string "Oh oh!\n"
	.string "Eh eh eh!\p"
	.string "Greetings, my little friend!\n"
	.string "I am one of the Berry Masters!\p"
	.string "Yes, a band of most merry companions\n"
	.string "sharing with all the joy of berries!\p"
	.string "Take this, my little friend!\n"
	.string "Eh eh eh!$"


OldaleTown_PokemonCenter_1F_Text_GivenVoucher:
	.string "Oh oh!\p"
	.string "That is a Berry Voucher!\p"
	.string "By presenting it at a Pokémon Center,\n"
	.string "you will be given six berries of the\l"
	.string "corresponding type!\p"
	.string "One for each of your little friends!\n"
	.string "Eh eh eh!\p"
	.string "And don't worry!\n"
	.string "You can use it as many time as you want!\p"
	.string "Eh eh eh!$"

OldaleTown_PokemonCenter_1F_Text_OneOfMany:
	.string "Oh oh!\p"
	.string "There are many Berry Masters other\n"
	.string "than me!\p"
	.string "But not all of them might be this easy\n"
	.string "to find!\p"
	.string "Eh eh eh!$"