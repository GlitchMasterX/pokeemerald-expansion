Dormindoor1_MapScripts::
# 6 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 2 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 8, Kaelmet
# 4 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 11, Nightstroll
	.2byte 0


DAYNIGHT_NPC::
# 9 "data/maps/Dormindoor1/scripts.pory"
	compare VAR_CURRENT_TIME_OF_DAY, 2
	goto_if_lt DAYNIGHT_NPC_1
# 16 "data/maps/Dormindoor1/scripts.pory"
	compare VAR_CURRENT_TIME_OF_DAY, 2
	goto_if_gt DAYNIGHT_NPC_4
DAYNIGHT_NPC_3:
# 24 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_DAY_NPC
# 25 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NIGHT_NPC
# 26 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_ACDAEMY_MURKROW
# 27 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NORMAL_OUTFOREST
# 28 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_TRIAL_SERENA
	return

DAYNIGHT_NPC_1:
# 10 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_NIGHT_NPC
# 11 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_ACDAEMY_MURKROW
# 12 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_DAY_NPC
# 13 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_NORMAL_OUTFOREST
# 14 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_TRIAL_SERENA
	return

DAYNIGHT_NPC_2:
# 17 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_DAY_NPC
# 18 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NIGHT_NPC
# 19 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_ACDAEMY_MURKROW
# 20 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NORMAL_OUTFOREST
# 21 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_TRIAL_SERENA
	return

DAYNIGHT_NPC_4:
# 16 "data/maps/Dormindoor1/scripts.pory"
	compare ACADEMY_START, 12
	goto_if_gt DAYNIGHT_NPC_2
	goto DAYNIGHT_NPC_3


Kaelmet::
# 32 "data/maps/Dormindoor1/scripts.pory"
	lock
# 33 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 34 "data/maps/Dormindoor1/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, serenametmov7
# 36 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, dorm
# 37 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 38 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, MOVE1
# 39 "data/maps/Dormindoor1/scripts.pory"
	speakername unknown
# 40 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_0
# 41 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 42 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, mov1
# 43 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 44 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 45 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 46 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_2
# 47 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, happy
# 48 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, MOVE1
# 50 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 51 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 52 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 53 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 54 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 55 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5, MSGBOX_AUTOCLOSE
# 56 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 57 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 58 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 59 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 60 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 61 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8, MSGBOX_AUTOCLOSE
# 62 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 63 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, Kaelmet_Movement_0
# 64 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 65 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 67 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_9, MSGBOX_AUTOCLOSE
# 68 "data/maps/Dormindoor1/scripts.pory"
	playse MUS_HEAL
# 69 "data/maps/Dormindoor1/scripts.pory"
	waitse
# 70 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 71 "data/maps/Dormindoor1/scripts.pory"
	addvar VAR_CURRENT_DAY_OF_WEEK, 1
# 72 "data/maps/Dormindoor1/scripts.pory"
	special RemoveCameraObject
# 73 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 74 "data/maps/Dormindoor1/scripts.pory"
	release
# 75 "data/maps/Dormindoor1/scripts.pory"
	fadedefaultbgm
	return


# 81 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 82 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 83 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 83 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 83 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 83 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 83 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Nightstroll::
# 88 "data/maps/Dormindoor1/scripts.pory"
	lock
# 89 "data/maps/Dormindoor1/scripts.pory"
	speakername Nightstroll_Text_0
# 90 "data/maps/Dormindoor1/scripts.pory"
	msgbox Nightstroll_Text_1
# 91 "data/maps/Dormindoor1/scripts.pory"
	release
# 92 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 12
	return


lunarofficer::
# 95 "data/maps/Dormindoor1/scripts.pory"
	lock
# 96 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Dormindoor1/scripts.pory"
	applymovement 3, lunarofficer_Movement_0
# 98 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 99 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer_Text_1
# 100 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 101 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, lunarofficer_Movement_1
# 102 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 103 "data/maps/Dormindoor1/scripts.pory"
	release
	return


lunarofficer1::
# 107 "data/maps/Dormindoor1/scripts.pory"
	lock
# 108 "data/maps/Dormindoor1/scripts.pory"
	faceplayer
# 109 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 110 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer1_Text_0
# 111 "data/maps/Dormindoor1/scripts.pory"
	release
	return


# 63 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_0:
# 63 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 63 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 63 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 63 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 63 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_0:
# 97 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_1:
# 101 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 40 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough.$"

Kaelmet_Text_1:
# 44 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?$"

Kaelmet_Text_2:
# 46 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kael Duskbane.\p"
	.string "Your roommate.\p"
	.string "Unless you plan on sleeping outside.$"

Kaelmet_Text_3:
# 51 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd prefer that.$"

Kaelmet_Text_4:
# 53 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Suit yourself.\p"
	.string "Just don't drag in dirt if you come\n"
	.string "crawling back.$"

Kaelmet_Text_5:
# 55 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........$"

Kaelmet_Text_6:
# 57 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, what's your deal?\p"
	.string "You don't talk much, and you look like\n"
	.string "you'd rather punch someone in the face\l"
	.string "than have a conversation.$"

Kaelmet_Text_7:
# 59 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}None of your business.$"

Kaelmet_Text_8:
# 61 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fair enough.\p"
	.string "Just don't expect me to pretend we're\n"
	.string "friends.$"

Kaelmet_Text_9:
# 67 "data/maps/Dormindoor1/scripts.pory"
	.string "I came here beacuse I lost the bet.\p"
	.string "But I don't know if it was the right\n"
	.string "choice.\p"
	.string "Let's just sleep for now.$"

Nightstroll_Text_0:
# 89 "data/maps/Dormindoor1/scripts.pory"
	.string "Xylar$"

Nightstroll_Text_1:
# 90 "data/maps/Dormindoor1/scripts.pory"
	.string "I can't fall sleep, maybe I should go for\n"
	.string "a walk.$"

lunarofficer_Text_0:
# 98 "data/maps/Dormindoor1/scripts.pory"
	.string "Officer$"

lunarofficer_Text_1:
# 99 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop right there!\p"
	.string "First years are not allowed in the\n"
	.string "forest yet.$"

lunarofficer1_Text_0:
# 110 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}First years are not allowed in the\n"
	.string "forest yet.$"

kael::
# 77 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
