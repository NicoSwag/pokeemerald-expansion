.set LOCALID_WALDA, 2
.set LOCALID_WALDAS_DAD, 6

RustboroCity_Flat1_2F_MapScripts::
	.byte 0

RustboroCity_Flat1_2F_EventScript_WaldasDad::
	lock
	faceplayer
	specialvar VAR_RESULT, TryBufferWaldaPhrase
	goto_if_set FLAG_WALDA_AWOKEN, RustboroCity_Flat1_2F_EventScript_WaldaAwoken
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase

RustboroCity_Flat1_2F_EventScript_WaldaAwoken::
	msgbox RustboroCity_Flat1_2F_Text_WaldaAwoken, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_GivePhrase::
	special DoWaldaNamingScreen
	waitstate
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	applymovement LOCALID_WALDA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALDA, Common_Movement_FaceRight
	waitmovement 0 
	msgbox RustboroCity_Flat1_2F_Text_SoTrue, MSGBOX_DEFAULT
	applymovement LOCALID_WALDAS_DAD, Common_Movement_ExclamationMark
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	setflag FLAG_WALDA_AWOKEN
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
	return

RustboroCity_Flat1_2F_EventScript_WaldasMom::
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end

RustboroCity_Flat1_2F_EventScript_PokeDoll::
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end

RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
	.string "Oh, it's so hard every day…\p"
	.string "What's hard?\n"
	.string "You need to ask?\p"
	.string "It's trying to figure out what to\n"
	.string "make for meals every day.\p"
	.string "It really isn't easy coming up with\n"
	.string "meals every day.$"

RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
	.string "Oh, hello!\n"
	.string "Welcome to the PEPPER household.\p"
	.string "I would love to greet you properly,\n"
	.string "but…\p"
	.string "I'm truly in quite a pickle!\p"
	.string "You see my daughter, one day, went\n"
	.string "to play a bit too close to the\l"
	.string "FORBIDDEN FOREST north of here.\p"
	.string "Misfortune would have it that she\n"
	.string "was cursed by a rogue witch!\p"
	.string "Now she's totally unresponsive, and\n"
	.string "there is but one way to wake her up.\p"
	.string "It is a spell, and a puzzle mixed in\n"
	.string "one!\p"
	.string "To wake her I must solve this riddle:\n"
	.string "what is the truest thing in the world?\p"
	.string "But ah! I can't figure it out.\p"
	.string "If you have any ideas, please, let me\n"
	.string "know.$"

RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
	.string "I've been saying “{STR_VAR_1}”\n"
	.string "but it isn't working.\p"
	.string "Do you know of a better word or\n"
	.string "a phrase that might work?$"

RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
	.string "Oh, that's wonderful.\n"
	.string "So, let's hear it, your suggestion.$"

RustboroCity_Flat1_2F_Text_OhIsThatRight:
	.string "Oh, is that right?\p"
	.string "Well, if you come up with a good\n"
	.string "suggestion, I'm all ears.$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_OhShesLaughing:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"

RustboroCity_Flat1_2F_Text_LetsGiveItATry:
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… It's not working…$"

RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
	.string "Oh, so you don't know any good words.\n"
	.string "I'd better think for myself, then.\p"
	.string "Hmm…\n"
	.string "How about “{STR_VAR_1}”?\l"
	.string "Let's see if that will work.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… It's not working…$"

RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
	.string "Oh, so you don't know any good words.\n"
	.string "I guess I'll keep trying with the\l"
	.string "previous suggestion.\p"
	.string "Anyways, if you have a good suggestion,\n"
	.string "don't hesitate in telling me, okay?$"

RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
	.string "It worked!\p"
	.string "Thanks to you, my darling WALDA\n"
	.string "woke up!\p"
	.string "Please, accept this token of my\n"
	.string "gratitude.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
	.string "It's a POKéMON plush DOLL!$"

RustboroCity_Flat1_2F_Text_SoTrue:
	.string "So true!$"

RustboroCity_Flat1_2F_Text_WaldaAwoken:
	.string "WALDA is sleeping right now.\p"
	.string "Ah! Don't worry! She's just\n"
	.string "taking a nap.$"
