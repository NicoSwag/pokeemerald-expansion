Common_EventScript_FlyingTaxi::
    faceplayer
    call_if_unset FLAG_USED_TAXI_BEFORE, Common_EventScript_FlyingTaxiIntroduction
    setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
    showmoneybox 0, 0
    msgbox gText_FlyingTaxi_Intro, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_FlyingTaxi_ChooseDestination
    compare VAR_RESULT, NO
    goto_if_eq EventScript_FlyingTaxi_Goodbye
    end

EventScript_FlyingTaxi_ChooseDestination::
    checkmoney 500
    goto_if_eq VAR_RESULT, FALSE, EventScript_FlyingTaxi_NotEnoughMoney
    removemoney 500
    updatemoneybox
    hidemoneybox
    applymovement VAR_PELIPPER, Movement_TurnInvisible
    waitmovement 0
    special FieldLoadFlyMap
    goto EventScript_FlyingTaxi_Goodbye
    end

EventScript_FlyingTaxi_Goodbye::
    message gText_WeHopeToSeeYouAgain
    hidemoneybox
    setvar VAR_LAST_TALKED, 0
    releaseall
    return

Movement_TurnInvisible:
    set_invisible
    step_end

EventScript_FlyingTaxi_NotEnoughMoney::
    msgbox gText_FlyingTaxi_NotEnoughMoney, MSGBOX_DEFAULT
    hidemoneybox
    releaseall
    end

Common_EventScript_FlyingTaxiIntroduction::
    setflag FLAG_USED_TAXI_BEFORE
    msgbox gText_FlyingTaxi_Explanation, MSGBOX_DEFAULT
    return

gText_FlyingTaxi_Explanation:
    .string "Hi! You've never used our services\n"
    .string "before, have you?\p"
    .string "Allow me to explain, then!\p"
    .string "Thanks to our Pelipper Taxi, you can\n"
    .string "fly to any city you've visited before.\p"
    .string "For a small fee, of course.\p"
    .string "Oh and don't worry about our PELIPPER.\n"
    .string "They come back.\p"
    .string "Now then…$"

gText_FlyingTaxi_NotEnoughMoney:
    .string "Oh…\n"
    .string "You don't have enough money.$"