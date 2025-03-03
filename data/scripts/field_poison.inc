EventScript_FieldPoison::
	lockall
	special TryFieldPoisonWhiteOut
	waitstate
	goto_if_eq VAR_RESULT, FLDPSN_WHITEOUT, EventScript_FieldWhiteOut
	goto_if_eq VAR_RESULT, FLDPSN_FRONTIER_WHITEOUT, EventScript_FrontierFieldWhiteOut
	releaseall
	end

EventScript_FieldWhiteOut::
	message gText_PlayerWhitedOut
	waitmessage
	waitbuttonpress
	call_if_set FLAG_DEAD_WHEN_FAINT, EventScript_LostNuzlocke
	EventScript_FieldWhiteOutCont::
	special Script_FadeOutMapMusic
	waitstate
	fadescreen FADE_TO_BLACK
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, EventScript_SetRespawnLavaridgePkmnCenter
	special SetCB2WhiteOut
	waitstate
	end

EventScript_LostNuzlocke::
	call_if_unset FLAG_SYS_POKEDEX_GET, EventScript_FieldWhiteOutCont
	clearflag FLAG_DEAD_WHEN_FAINT
	message gText_PlayerNuzlockeFailed
	waitmessage
	waitbuttonpress
	return

EventScript_SetRespawnLavaridgePkmnCenter::
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	return

EventScript_FrontierFieldWhiteOut::
	message gText_PlayerWhitedOut
	waitmessage
	waitbuttonpress
	call_if_set FLAG_DEAD_WHEN_FAINT, EventScript_LostNuzlocke
	pike_inchallenge
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePike_EventScript_Retire
	pyramid_inchallenge
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost  @ On Pyramid floor
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost  @ On Pyramid peak
	trainerhill_inchallenge
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_1F_EventScript_Lost
	special Script_FadeOutMapMusic
	waitstate
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	end
