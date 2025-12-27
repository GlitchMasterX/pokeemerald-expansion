Route109_MapScripts::
# 2 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route109_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route109/scripts.pory"
	map_script_2 ACADEMY_START, 2, ONHARBOR1
	.2byte 0


ONHARBOR1::
# 8 "data/maps/Route109/scripts.pory"
	playbgm MUS_HG_KIMONO_GIRL_DANCE, FALSE
# 9 "data/maps/Route109/scripts.pory"
	lock
# 10 "data/maps/Route109/scripts.pory"
	speakername ONHARBOR1_Text_0
# 11 "data/maps/Route109/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 12 "data/maps/Route109/scripts.pory"
	speakername Xylar1
# 13 "data/maps/Route109/scripts.pory"
	msgbox ONHARBOR1_Text_2
# 14 "data/maps/Route109/scripts.pory"
	speakername ONHARBOR1_Text_0
# 15 "data/maps/Route109/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 16 "data/maps/Route109/scripts.pory"
	closemessage
# 17 "data/maps/Route109/scripts.pory"
	waitmessage
# 18 "data/maps/Route109/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Route109/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 20 "data/maps/Route109/scripts.pory"
	removeobject 2
# 21 "data/maps/Route109/scripts.pory"
	removeobject 1
# 22 "data/maps/Route109/scripts.pory"
	setflag FLAG_OLDMAN_GONE
# 23 "data/maps/Route109/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/Route109/scripts.pory"
	applymovement 0xFF, ONHARBOR1_Movement_0
# 25 "data/maps/Route109/scripts.pory"
	speakername Xylar1
# 26 "data/maps/Route109/scripts.pory"
	msgbox ONHARBOR1_Text_4
# 27 "data/maps/Route109/scripts.pory"
	closemessage
# 28 "data/maps/Route109/scripts.pory"
	pausefakertc
# 29 "data/maps/Route109/scripts.pory"
	fadedefaultbgm
# 30 "data/maps/Route109/scripts.pory"
	setvar ACADEMY_START, 3
# 31 "data/maps/Route109/scripts.pory"
	release
	return


# 24 "data/maps/Route109/scripts.pory"
ONHARBOR1_Movement_0:
# 24 "data/maps/Route109/scripts.pory"
	walk_up
	step_end

ONHARBOR1_Text_0:
# 10 "data/maps/Route109/scripts.pory"
	.string "Oldman$"

ONHARBOR1_Text_1:
# 11 "data/maps/Route109/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here we are, young man.\p"
	.string "The Astralis Academy-the place where\n"
	.string "ordinary trainers become legends.$"

ONHARBOR1_Text_2:
# 13 "data/maps/Route109/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

ONHARBOR1_Text_3:
# 15 "data/maps/Route109/scripts.pory"
	.string "(His eyes... are not normal.)$"

ONHARBOR1_Text_4:
# 26 "data/maps/Route109/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Legends don't matter to the dead.$"
