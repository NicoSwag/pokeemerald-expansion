.set LOCALID_OWNER, 1

Route104_PrettyPetalFlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
	.byte 0

Route104_PrettyPetalFlowerShop_OnTransition:
	setflag FLAG_LANDMARK_FLOWER_SHOP
	setflag FLAG_TEMP_1
	end


AquaShop_EventScript_AquaClerk::
	lock
	faceplayer
	msgbox AquaShop_Text_WaterShop, MSGBOX_NPC
	waitmessage
	pokemart AquaShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
AquaShop_Pokemart:
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end

AquaShop_EventScript_AquaFishingRod::
	lock
	goto_if_set FLAG_RECEIVED_SUPER_ROD, AquaShop_EventScript_PostRod
	showmoneybox 0, 0
	msgbox AquaShop_Text_WannaBuyARod, MSGBOX_YESNO
	msgbox AquaShop_Text_JustJoking, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, AquaShop_EventScript_CheckMoney
	msgbox AquaShop_Text_YourLoss, MSGBOX_NPC
	release
	end

AquaShop_EventScript_PostRod::
	msgbox AquaShop_Text_ThankYouKindly
	release
	end

AquaShop_EventScript_CheckMoney::
	checkmoney 5000
	goto_if_eq VAR_RESULT, FALSE, AquaShop_EventScript_NoMoney
	goto_if_eq VAR_RESULT, TRUE, AquaShop_EventScript_Money
	release
	end
	
	
	
AquaShop_EventScript_Money::
	removemoney 5000
	hidemoneybox
	giveitem ITEM_SUPER_ROD
	msgbox AquaShop_Text_ThankYouKindly, MSGBOX_NPC
	setflag FLAG_RECEIVED_SUPER_ROD
	release
	end

AquaShop_EventScript_NoMoney:
	msgbox AquaShop_Text_NoMoney, MSGBOX_NPC
	hidemoneybox
	release
	end


Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
	release
	end


AquaShop_EventScript_Note::
	lock
	msgbox AquaShop_Text_LookaNote, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, AquaShop_EventScript_ReadNote
	msgbox AquaShop_Text_Nevermind
	release
	end

AquaShop_EventScript_ShadyAquaGuy::
	lock
	faceplayer
	msgbox AquaShop_Text_NotAqua, MSGBOX_NPC
	release
	end

AquaShop_EventScript_ReadNote::
	msgbox AquaShop_Text_ReadNote, MSGBOX_NPC
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
	return

Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
	return

Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
	message gText_PlayerWhatCanIDoForYou
	waitmessage
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
	.2byte DECOR_RED_PLANT
	.2byte DECOR_TROPICAL_PLANT
	.2byte DECOR_PRETTY_FLOWERS
	.2byte DECOR_COLORFUL_PLANT
	.2byte DECOR_BIG_PLANT
	.2byte DECOR_GORGEOUS_PLANT
	.2byte DECOR_NONE
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_WAILMER_PAIL
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

AquaShop_Text_LookaNote:
	.string "Looks like someone tried to hide a note\n"
	.string "behind a labyrinth of potted plants.\p"
	.string "Read the note?$"
 
 AquaShop_Text_Nevermind:
	.string "Perhaps some things are better left\n"
	.string "forgotten, for now.$"

AquaShop_Text_ReadNote:
	.string "Dear TEAM AQUA'S MATT DIVISION,\n"
	.string "what in the seven seas are you guys\l"
	.string "doing?\p"
	.string "You know perfectly well how important\n"
	.string "it is to raise money to provide for our\l"
	.string "crew…\p"
	.string "And yet, while the SHELLY DIVISION is\n"
	.string "ammassing income, you do nothing but\l"
	.string "twiddle your thumbs!\p"
	.string "You better start earning some money,\n"
	.string "and fast!\l"
	.string "-ARCHIE\p"
	.string "PS: MATT'S motion to cut back on the\n"
	.string "expenses by buying less model ships\l"
	.string "is overruled.$"

AquaShop_Text_NotAqua:
	.string "TEAM AQUA? What's that?\p"
	.string "This is the world-famous FEEBAS\n"
	.string "PRO SHOP PRISM!\p"
	.string "Any resemblance to unaffiliated\n"
	.string "organizations are purely coincidental.$"

AquaShop_Text_WannaBuyARod:
	.string "Hey, kid!\n"
	.string "Welcome to the world-famous FEEBAS\l"
	.string "PRO SHOP PRISM!\p"
	.string "We sell aaall kind of fishing gear here!\p"
	.string "Oh, I can tell! You wanna buy a rod!\p"
	.string "Well, the price is gonna be about\n"
	.string "9,999,999,999,999¥.\p"
	.string "How about it?$"

AquaShop_Text_JustJoking:
	.string "Sheesh kid, I was only joking!\n"
	.string "You're not very bright, are you?\p"
	.string "I'll tell you what: 5,000¥ and it's\n"
	.string "yours.\p"
	.string "Convenient, right?$"


AquaShop_Text_ThankYouKindly:
	.string "Thank you for your patronage!\n"
	.string "Kekekekekekekeke!$"


AquaShop_Text_NoMoney:
	.string "What the… Hey!\n"
	.string "You don't have any money!\p"
	.string "How about you come back when\n"
	.string "you're a little richer, huh?$"

AquaShop_Text_WaterShop:
	.string "Welcome, welcome!\n"
	.string "Here's our selection of items\l"
	.string "for all water-related necessities!\p"
	.string "Now with a permanent 99% discount!$"

AquaShop_Text_YourLoss:
	.string "Whaat? You don't want it?\n"
	.string "That's… So evil…$"
