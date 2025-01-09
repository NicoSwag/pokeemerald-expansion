DewfordTown_GymEntrance_MapScripts::
	.byte 0


DewfordGymEntrance_EventScript_BlackBelt::
	msgbox DewfordGymEntrance_Text_BlackBelt, MSGBOX_NPC
	end


DewfordGymEntrance_EventScript_Maniac::
	msgbox DewfordGymEntrance_Text_Maniac, MSGBOX_NPC
	end


DewfordTown_Smoothies_EventScript_Clerk::
	lock
	faceplayer
	message gText_SmoothieShop
	waitmessage
	pokemart DewfordTown_Smoothies_Shop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end




	.align 2
DewfordTown_Smoothies_Shop:
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_POMEG_SMOOTHIE
	.2byte ITEM_KELPSY_SMOOTHIE
	.2byte ITEM_QUALOT_SMOOTHIE
	.2byte ITEM_HONDEW_SMOOTHIE
	.2byte ITEM_GREPA_SMOOTHIE
	.2byte ITEM_TAMATO_SMOOTHIE
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE
	release
	end



DewfordGymEntrance_Text_BlackBelt:
	.string "Gahhhhh!\p"
	.string "I'm training to beat Brawly!$"

DewfordGymEntrance_Text_Maniac:
	.string "To defeat a Gym Leader, you must utilize\n"
	.string "all of your Pokémon knowledge.\p"
	.string "It's brains over brawns, after all.$"
	

Dewford_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Dewford_Gym_EventScript_GymGuidePostVictory
	msgbox Dewford_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end


Dewford_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end


Dewford_Gym_Text_GymGuideAdvice:
	.string "Greeting, future Champion!\p"
	.string "To conquer this Gym, you will need to\n"
	.string "climb on top of tall walls!\p"
	.string "You can climb them yourself, so don't\n"
	.string "worry if you don't have Pokémon that know\l"
	.string "Rock Climb\p"
	.string "About the Leader…\p"
	.string "Brawly specializes in Fighting-type Pokémon.\n"
	.string "However, you must be careful.\p"
	.string "Just because he's a type expert, it doesn't\n"
	.string "mean that all his Pokémon will be of that type.\p"
	.string "However, you will still need to prepare for\n"
	.string "Fighting moves coming from them.\p"
	.string "Defeat the Gym Trainers if you need some hints.\p"
	.string "And finally, most importantly: good luck!$"


DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "I knew you would do it!\p"
	.string "I wish I could watch the battles, but these\n"
	.string "old bones aren't up for climbing anymore.\p"
	.string "But I'm sure it was a brilliant fight!$"