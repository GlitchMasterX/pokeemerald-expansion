Dormindoor1_MapScripts::
# 2 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 8, Kaelmet
# 4 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 10, Nightstroll
	.2byte 0


Kaelmet::
# 8 "data/maps/Dormindoor1/scripts.pory"
	lock
# 9 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 10 "data/maps/Dormindoor1/scripts.pory"
	special SpawnCameraObject
# 11 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, serenametmov7
# 12 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, dorm
# 13 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 14 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, MOVE1
# 15 "data/maps/Dormindoor1/scripts.pory"
	speakername unknown
# 16 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_0
# 17 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 18 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, mov1
# 19 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 20 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 21 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 22 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_2
# 23 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, happy
# 24 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 25 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, MOVE1
# 26 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 27 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 28 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 29 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 30 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 31 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5, MSGBOX_AUTOCLOSE
# 32 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 33 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 34 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 35 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 36 "data/maps/Dormindoor1/scripts.pory"
	speakername kael
# 37 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8, MSGBOX_AUTOCLOSE
# 38 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 39 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, Kaelmet_Movement_0
# 40 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 41 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 43 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_9, MSGBOX_AUTOCLOSE
# 44 "data/maps/Dormindoor1/scripts.pory"
	playse MUS_HEAL
# 45 "data/maps/Dormindoor1/scripts.pory"
	waitse
# 46 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 47 "data/maps/Dormindoor1/scripts.pory"
	addvar VAR_CURRENT_DAY_OF_WEEK, 1
# 48 "data/maps/Dormindoor1/scripts.pory"
	special RemoveCameraObject
# 49 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/maps/Dormindoor1/scripts.pory"
	release
# 51 "data/maps/Dormindoor1/scripts.pory"
	fadedefaultbgm
	return


# 57 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 59 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 59 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 59 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 59 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 59 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Nightstroll::
# 64 "data/maps/Dormindoor1/scripts.pory"
	lock
# 65 "data/maps/Dormindoor1/scripts.pory"
	speakername Nightstroll_Text_0
# 66 "data/maps/Dormindoor1/scripts.pory"
	msgbox Nightstroll_Text_1
# 67 "data/maps/Dormindoor1/scripts.pory"
	release
# 68 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 11
	return


lunarofficer::
# 71 "data/maps/Dormindoor1/scripts.pory"
	lock
# 72 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Dormindoor1/scripts.pory"
	applymovement 3, lunarofficer_Movement_0
# 74 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 75 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer_Text_1
# 76 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 77 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, lunarofficer_Movement_1
# 78 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 79 "data/maps/Dormindoor1/scripts.pory"
	release
	return


lunarofficer1::
# 83 "data/maps/Dormindoor1/scripts.pory"
	lock
# 84 "data/maps/Dormindoor1/scripts.pory"
	faceplayer
# 85 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 86 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer1_Text_0
# 87 "data/maps/Dormindoor1/scripts.pory"
	release
	return


# 39 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_0:
# 39 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 39 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 39 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 39 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 39 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

# 73 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_0:
# 73 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_1:
# 77 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 16 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough.$"

Kaelmet_Text_1:
# 20 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?$"

Kaelmet_Text_2:
# 22 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kael Duskbane.\p"
	.string "Your roommate.\p"
	.string "Unless you plan on sleeping outside.$"

Kaelmet_Text_3:
# 27 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd prefer that.$"

Kaelmet_Text_4:
# 29 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Suit yourself.\p"
	.string "Just don't drag in dirt if you come\n"
	.string "crawling back.$"

Kaelmet_Text_5:
# 31 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........$"

Kaelmet_Text_6:
# 33 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, what's your deal?\p"
	.string "You don't talk much, and you look like\n"
	.string "you'd rather punch someone in the face\l"
	.string "than have a conversation.$"

Kaelmet_Text_7:
# 35 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}None of your business.$"

Kaelmet_Text_8:
# 37 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fair enough.\p"
	.string "Just don't expect me to pretend we're\n"
	.string "friends.$"

Kaelmet_Text_9:
# 43 "data/maps/Dormindoor1/scripts.pory"
	.string "I came here beacuse I lost the bet.\p"
	.string "But I don't know if it was the right\n"
	.string "choice.\p"
	.string "Let's just sleep for now.$"

Nightstroll_Text_0:
# 65 "data/maps/Dormindoor1/scripts.pory"
	.string "Xylar$"

Nightstroll_Text_1:
# 66 "data/maps/Dormindoor1/scripts.pory"
	.string "I can't fall sleep, maybe I should go for\n"
	.string "a walk.$"

lunarofficer_Text_0:
# 74 "data/maps/Dormindoor1/scripts.pory"
	.string "Officer$"

lunarofficer_Text_1:
# 75 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop right there!\p"
	.string "First years are not allowed in the\n"
	.string "forest yet.$"

lunarofficer1_Text_0:
# 86 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}First years are not allowed in the\n"
	.string "forest yet.$"

kael::
# 53 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
