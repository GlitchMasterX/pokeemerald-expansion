Dormindoor1_MapScripts::
# 5 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 2 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 8, Kaelmet
	.2byte 0


DAYNIGHT_NPC::
# 8 "data/maps/Dormindoor1/scripts.pory"
	compare VAR_CURRENT_TIME_OF_DAY, 2
	goto_if_lt DAYNIGHT_NPC_1
# 15 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_DAY_NPC
# 16 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NIGHT_NPC
# 17 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_ACDAEMY_MURKROW
# 18 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_NORMAL_OUTFOREST
	return

DAYNIGHT_NPC_1:
# 9 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_NIGHT_NPC
# 10 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_ACDAEMY_MURKROW
# 11 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_DAY_NPC
# 12 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_NORMAL_OUTFOREST
	return


Kaelmet::
# 22 "data/maps/Dormindoor1/scripts.pory"
	lock
# 23 "data/maps/Dormindoor1/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0x7F, serenametmov7
# 25 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, dorm
# 26 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 27 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, MOVE1
# 28 "data/maps/Dormindoor1/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 29 "data/maps/Dormindoor1/scripts.pory"
	namebox unknown
# 30 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_0
# 31 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 32 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 33 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, mov1
# 34 "data/maps/Dormindoor1/scripts.pory"
	namebox Xylar
# 35 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 36 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 37 "data/maps/Dormindoor1/scripts.pory"
	namebox kael
# 38 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_2
# 39 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 40 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, happy
# 41 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 42 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, MOVE1
# 43 "data/maps/Dormindoor1/scripts.pory"
	namebox Xylar
# 44 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 45 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 46 "data/maps/Dormindoor1/scripts.pory"
	namebox kael
# 47 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 48 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 49 "data/maps/Dormindoor1/scripts.pory"
	namebox Xylar
# 50 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5, MSGBOX_AUTOCLOSE
# 51 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 52 "data/maps/Dormindoor1/scripts.pory"
	namebox kael
# 53 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 54 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 55 "data/maps/Dormindoor1/scripts.pory"
	namebox Xylar
# 56 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 57 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 58 "data/maps/Dormindoor1/scripts.pory"
	namebox kael
# 59 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8, MSGBOX_AUTOCLOSE
# 60 "data/maps/Dormindoor1/scripts.pory"
	hidenamebox
# 61 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 62 "data/maps/Dormindoor1/scripts.pory"
	special RemoveCameraObject
# 63 "data/maps/Dormindoor1/scripts.pory"
	release
# 64 "data/maps/Dormindoor1/scripts.pory"
	fadedefaultbgm
	return


# 70 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 72 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 72 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 72 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 72 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 72 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 30 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough.$"

Kaelmet_Text_1:
# 35 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?$"

Kaelmet_Text_2:
# 38 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kael Duskbane.\p"
	.string "Your roommate.\p"
	.string "Unless you plan on sleeping outside.$"

Kaelmet_Text_3:
# 44 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd prefer that.$"

Kaelmet_Text_4:
# 47 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Suit yourself.\p"
	.string "Just don't drag in dirt if you come\n"
	.string "crawling back.$"

Kaelmet_Text_5:
# 50 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........$"

Kaelmet_Text_6:
# 53 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, what's your deal?\p"
	.string "You don't talk much, and you look like\n"
	.string "you'd rather punch someone in the face\l"
	.string "than have a conversation.$"

Kaelmet_Text_7:
# 56 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}None of your business.$"

Kaelmet_Text_8:
# 59 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fair enough.\p"
	.string "Just don't expect me to pretend we're\n"
	.string "friends.$"

kael::
# 66 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
