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
# 17 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_DAY_NPC
# 18 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NIGHT_NPC
# 19 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_ACDAEMY_MURKROW
# 20 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NORMAL_OUTFOREST
# 21 "data/maps/Dormindoor1/scripts.pory"
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


Kaelmet::
# 25 "data/maps/Dormindoor1/scripts.pory"
	lock
# 26 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 27 "data/maps/Dormindoor1/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, serenametmov7
# 29 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, dorm
# 30 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 31 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, MOVE1
# 32 "data/maps/Dormindoor1/scripts.pory"
	speakername unknown
# 33 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_0
# 34 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 35 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, mov1
# 36 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 37 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 38 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 39 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_2
# 40 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, happy
# 41 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 42 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, MOVE1
# 43 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 44 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 45 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 46 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 47 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 48 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5, MSGBOX_AUTOCLOSE
# 49 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 50 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 51 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 52 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 53 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 54 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8, MSGBOX_AUTOCLOSE
# 55 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 56 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, Kaelmet_Movement_0
# 57 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 59 "data/maps/Dormindoor1/scripts.pory"
	setvar VAR_CURRENT_DAY_OF_WEEK, 2
# 60 "data/maps/Dormindoor1/scripts.pory"
	special RemoveCameraObject
# 61 "data/maps/Dormindoor1/scripts.pory"
	release
# 62 "data/maps/Dormindoor1/scripts.pory"
	fadedefaultbgm
	return


# 68 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 69 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 70 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 70 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 70 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 70 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 70 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Nightstroll::
# 75 "data/maps/Dormindoor1/scripts.pory"
	lock
# 76 "data/maps/Dormindoor1/scripts.pory"
	speakername Nightstroll_Text_0
# 77 "data/maps/Dormindoor1/scripts.pory"
	msgbox Nightstroll_Text_1
# 78 "data/maps/Dormindoor1/scripts.pory"
	release
# 79 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 12
	return


lunarofficer::
# 82 "data/maps/Dormindoor1/scripts.pory"
	lock
# 83 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Dormindoor1/scripts.pory"
	applymovement 3, lunarofficer_Movement_0
# 85 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 86 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer_Text_1
# 87 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 88 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, lunarofficer_Movement_1
# 89 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 90 "data/maps/Dormindoor1/scripts.pory"
	release
	return


lunarofficer1::
# 94 "data/maps/Dormindoor1/scripts.pory"
	lock
# 95 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 96 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer1_Text_0
# 97 "data/maps/Dormindoor1/scripts.pory"
	release
	return


# 56 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_0:
# 56 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 56 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 56 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 56 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 56 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

# 84 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_0:
# 84 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 88 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_1:
# 88 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 33 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough.$"

Kaelmet_Text_1:
# 37 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?$"

Kaelmet_Text_2:
# 39 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kael Duskbane.\p"
	.string "Your roommate.\p"
	.string "Unless you plan on sleeping outside.$"

Kaelmet_Text_3:
# 44 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd prefer that.$"

Kaelmet_Text_4:
# 46 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Suit yourself.\p"
	.string "Just don't drag in dirt if you come\n"
	.string "crawling back.$"

Kaelmet_Text_5:
# 48 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........$"

Kaelmet_Text_6:
# 50 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, what's your deal?\p"
	.string "You don't talk much, and you look like\n"
	.string "you'd rather punch someone in the face\l"
	.string "than have a conversation.$"

Kaelmet_Text_7:
# 52 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}None of your business.$"

Kaelmet_Text_8:
# 54 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fair enough.\p"
	.string "Just don't expect me to pretend we're\n"
	.string "friends.$"

Nightstroll_Text_0:
# 76 "data/maps/Dormindoor1/scripts.pory"
	.string "Xylar$"

Nightstroll_Text_1:
# 77 "data/maps/Dormindoor1/scripts.pory"
	.string "I can't fall sleep, maybe I should go for\n"
	.string "a walk.$"

lunarofficer_Text_0:
# 85 "data/maps/Dormindoor1/scripts.pory"
	.string "Officer$"

lunarofficer_Text_1:
# 86 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop right there!\p"
	.string "First years are not allowed in the\n"
	.string "forest yet.$"

lunarofficer1_Text_0:
# 96 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}First years are not allowed in the\n"
	.string "forest yet.$"

kael::
# 64 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
