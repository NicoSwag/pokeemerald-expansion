RustboroCity_GymInterior_MapScripts::
	.byte 0

RustboroGym_Smoothies_EventScript_Clerk::
	lock
	faceplayer
	message gText_SmoothieShop
	waitmessage
	pokemart RustboroGym_Smoothies_Shop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


RustboroGym_EventScript_Boy::
	msgbox RustboroGym_Text_Boy, MSGBOX_NPC
	end

RustboroGym_Smoothies_EventScript_Girl::
	msgbox RustboroGym_Text_Girl, MSGBOX_NPC
	end

gText_SmoothieShop::
	.string "Welcome to the Smoothie Shop!\p"
	.string "How may I serve you?$"

	.align 2
RustboroGym_Smoothies_Shop:
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE
	release
	end


RustboroGym_Bags_EventScript_Clerk::
	lock
	faceplayer
	message gText_BagsShop
	waitmessage
	pokemart RustboroGym_Bags_Shop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


gText_BagsShop::
	.string "What's up, string bean?\p"
	.string "I sell punching bags that can make\n"
	.string "your Pokémon super strong.\p"
	.string "What do ya say?$"

	.align 2
RustboroGym_Bags_Shop:
	.2byte ITEM_HP_BAG_XS
	.2byte ITEM_ATK_BAG_XS
	.2byte ITEM_DEF_BAG_XS
	.2byte ITEM_SPATK_BAG_XS
	.2byte ITEM_SPDEF_BAG_XS
	.2byte ITEM_SPEED_BAG_XS
	.2byte ITEM_NONE
	release
	end

RustboroGym_Text_Boy:
	.string "To be the very best, you gotta learn\n"
	.string "about the strenghts of your Pokémon.\p"
	.string "For example…\p"
	.string "Every species of Pokémon has different\n"
	.string "base stats, like Attack or Speed, right?\p"
	.string "That's the easy part.\p"
	.string "But each individual Pokémon has\n"
	.string "something called Effort Values, or EVs.\p"
	.string "To put it simply, gaining EVs in a stat\n"
	.string "makes it stronger.\p"
	.string "Each Pokémon can only have a maximum of\n"
	.string "510 EVs total, and a maximum of 252\l"
	.string "EVs in a single stat.\p"
	.string "You can gain EVs by either defeating\n"
	.string "enemy Pokémon or buying training items\l"
	.string "from the gyms.$"


RustboroGym_Text_Girl:
	.string "They sell smoothies here.\n"
	.string "Chocolate is my favorite!\p"
	.string "The other flavors are quite a bit\n"
	.string "stranger, though.$"