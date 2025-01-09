.set LOCALID_NURSE, 1

DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DewfordTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_EventScript_Man::
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_Text_StoneCavern:
	.string "There's an emerald mine at the edge\n"
	.string "of town.\p"
	.string "I've heard you can find all sort of\n"
	.string "stones there.$"

DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
	.string "Pokémon can USE Hidden Machines\n"
	.string "without having to know the move.\p"
	.string "Handy!$"


DewfordTown_PokemonCenter_1F_EventScript_Hiker::
	msgbox DewfordTown_PokemonCenter_1F_Text_Hiker, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_Text_Hiker:
	.string "I'm doing a sightseeing tour of Hoenn.\p"
	.string "There are all sorts of islands in the\n"
	.string "North-Eastern part of the region.\p"
	.string "I wonder how different they are from\n"
	.string "Dewford.$"