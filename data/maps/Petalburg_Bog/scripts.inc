.set LOCALID_BOG_MAN_SLEEPING, 18
.set LOCALID_BOG_MAN, 19
.set LOCALID_FOSSIL_ANORITH, 20
.set LOCALID_FOSSIL_LILEEP, 21


Petalburg_Bog_MapScripts::
	.byte 0



PetalburgBog_EventScript_OldManSleeping::
	lockall
	msgbox PetalburgBog_Text_IsHeDead, MSGBOX_DEFAULT
	closemessage
	removeobject LOCALID_BOG_MAN_SLEEPING
	clearflag FLAG_HIDE_BOG_MAN_STANDING
	addobject LOCALID_BOG_MAN
	playse SE_PIN
	waitse
	msgbox PetalburgBog_Text_IAmBogMan, MSGBOX_NPC
	closemessage
	trainerbattle_no_intro TRAINER_BOG_MAN, PetalburgBox_Text_BogManDefeat
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_VeryWell, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOG_MAN, PetalburgBog_Movement_BogManGoesInCorner
	waitmovement 0
	releaseall
	end

PetalburgBog_EventScript_ClawFossil::
	lockall
	msgbox PetalburgBog_Text_ClawFossil, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, PetalburgBog_EventScript_End
	removeobject LOCALID_FOSSIL_ANORITH
	giveitem ITEM_CLAW_FOSSIL
	setflag FLAG_CHOSE_CLAW_FOSSIL
	applymovement LOCALID_BOG_MAN, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_IWillTakeTheOther, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOG_MAN, PetalburgBog_Movement_TakeRootFossil
	waitmovement 0
	removeobject LOCALID_FOSSIL_LILEEP
	msgbox PetalburgBog_Text_BogManGetsRootFossil, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_ReviveFossil, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOG_MAN, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_BOG_MAN, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_BOG_MAN, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_BOG_MAN
	releaseall
	end
	
PetalburgBog_EventScript_RootFossil::
	lockall
	msgbox PetalburgBog_Text_RootFossil, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, PetalburgBog_EventScript_End
	removeobject LOCALID_FOSSIL_LILEEP
	giveitem ITEM_ROOT_FOSSIL
	setflag FLAG_CHOSE_ROOT_FOSSIL
	applymovement LOCALID_BOG_MAN, Common_Movement_FaceUp
	waitmovement 0
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_IWillTakeTheOther, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOG_MAN, PetalburgBog_Movement_TakeClawFossil
	waitmovement 0
	removeobject LOCALID_FOSSIL_ANORITH
	msgbox PetalburgBog_Text_BogManGetsClawFossil, MSGBOX_DEFAULT
	closemessage
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_ReviveFossil, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOG_MAN, Common_Movement_WalkDown6
	waitmovement 0
	removeobject LOCALID_BOG_MAN
	releaseall
	end

PetalburgBog_EventScript_End::
	releaseall
	end


PetalburgBog_EventScript_OldManStanding::
	speakername Common_Name_BogMan
	msgbox PetalburgBog_Text_ChooseFossil, MSGBOX_NPC
	end



PetalburgBog_Text_IsHeDead:
	.string "There's a body laying on the\n"
	.string "ground.\p"
	.string "Is he…\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …!!!$"

PetalburgBog_Text_IAmBogMan:
	.string "… … …\p"
	.string "Who Dares\n"
	.string "\l"
	.string "Disturb Me…?\p"
	.string "I Am The Bog\n"
	.string "\l"
	.string "Man…\p"
	.string "In This Bog, There Are\n"
	.string "\l"
	.string "Fossils…\p"
	.string "And They Are\n"
	.string "\l"
	.string "All Mine…!$"

PetalburgBox_Text_BogManDefeat:
	.string "I See\n"
	.string "\l"
	.string "How It Is…$"

PetalburgBog_Text_VeryWell:
	.string "Very\n"
	.string "\l"
	.string "Well.\p"
	.string "Bested\n"
	.string "\l"
	.string "At Last.\p"
	.string "You May Choose\n"
	.string "\l"
	.string "One Fossil.\p"
	.string "I Will Keep\n"
	.string "\l"
	.string "The Other.$"


PetalburgBog_Text_ChooseFossil:
	.string "You May Choose\n"
	.string "\l"
	.string "One Fossil.\p"
	.string "I Will Keep\n"
	.string "\l"
	.string "The Other.$"

PetalburgBog_Text_IWillTakeTheOther:
	.string "You Have Made\n"
	.string "\l"
	.string "Your Choice.\p"
	.string "I Shall Take\n"
	.string "\l"
	.string "The Other.$"

PetalburgBog_Text_ClawFossil:
	.string "It's a Claw Fossil.\p"
	.string "Take it?$"

PetalburgBog_Text_RootFossil:
	.string "It's a Root Fossil.\p"
	.string "Take it?$"

PetalburgBog_Text_BogManGetsRootFossil:
	.string "The strange man got the\n"
	.string "Root Fossil.$"

PetalburgBog_Text_BogManGetsClawFossil:
	.string "The strange man got the\n"
	.string "Claw Fossil.$"

PetalburgBog_Text_ReviveFossil:
	.string "I Will Now\n"
	.string "\l"
	.string "Take My Leave.\p"
	.string "I Will Travel\n"
	.string "\l"
	.string "The World.\p"
	.string "Revive This\n"
	.string "\l"
	.string "Fossil.\p"
	.string "Nurture It\n"
	.string "\l"
	.string "Like Own Son.\p"
	.string "Perhaps\n"
	.string "\l"
	.string "We Will Meet Again…\p"
	.string "… … …\n"
	.string "\l"
	.string "My Friend.$"

Common_Name_BogMan:	
	.string "Bog Man$"

PetalburgBog_Movement_BogManGoesInCorner:
	walk_up
	walk_up
	walk_right
	walk_right
	face_left
	step_end

PetalburgBog_Movement_TakeRootFossil:
	walk_left
	walk_up
	delay_16
	step_end

PetalburgBog_Movement_TakeClawFossil:
	walk_left
	walk_left
	walk_up
	delay_16
	step_end
