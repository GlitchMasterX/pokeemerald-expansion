AstralisAcademy_House1_MapScripts::
# 2 "data/maps/AstralisAcademy_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
	.byte 0


Fionanight::
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT, Fionanight_3
Fionanight_2:
	end

Fionanight_1:
# 6 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_0
# 8 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 9 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 10 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 12 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 13 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_1, MSGBOX_AUTOCLOSE
# 14 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 15 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 17 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 20 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 21 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 23 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 24 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 25 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_4, MSGBOX_AUTOCLOSE
# 27 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 28 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 29 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 34 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 35 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 36 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_5, MSGBOX_AUTOCLOSE
# 37 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 38 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 39 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_6, MSGBOX_AUTOCLOSE
# 40 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 41 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 42 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_7, MSGBOX_AUTOCLOSE
# 43 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 44 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 45 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 51 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 52 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 53 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_8, MSGBOX_AUTOCLOSE
# 54 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 55 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 56 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_9, MSGBOX_AUTOCLOSE
# 57 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 58 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 59 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 65 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 66 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 67 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_10, MSGBOX_AUTOCLOSE
# 68 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 69 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 70 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_11, MSGBOX_AUTOCLOSE
# 71 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 72 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 73 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 77 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 78 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 79 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 80 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_12, MSGBOX_AUTOCLOSE
# 81 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 82 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 83 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_13, MSGBOX_AUTOCLOSE
# 84 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 85 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 86 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 87 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 88 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_14, MSGBOX_AUTOCLOSE
# 89 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 90 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 91 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_15, MSGBOX_AUTOCLOSE
# 92 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 93 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 94 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_16, MSGBOX_AUTOCLOSE
# 95 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 96 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 100 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 101 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 102 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 103 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_17, MSGBOX_AUTOCLOSE
# 104 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 105 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/AstralisAcademy_House1/scripts.pory"
	removeobject 1
# 107 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 111 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 112 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 113 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 114 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_18, MSGBOX_AUTOCLOSE
# 115 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 116 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 117 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT
	return

Fionanight_3:
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_5
	goto Fionanight_2

Fionanight_5:
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_2, Fionanight_1
	goto Fionanight_2


# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_0:
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_1:
# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
	step_end

# 29 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_2:
# 30 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 31 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 32 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 33 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 45 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_3:
# 46 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 47 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 48 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 49 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 50 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 73 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_4:
# 74 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 75 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 76 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

Fionanight_Text_0:
# 10 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....You're quiet.$"

Fionanight_Text_1:
# 13 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Fionanight_Text_2:
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not used to company?$"

Fionanight_Text_3:
# 21 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........\p"
	.string "No.$"

Fionanight_Text_4:
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Same.$"

Fionanight_Text_5:
# 36 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You come here often?$"

Fionanight_Text_6:
# 39 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "First time.$"

Fionanight_Text_7:
# 42 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Figured.$"

Fionanight_Text_8:
# 53 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You?$"

Fionanight_Text_9:
# 56 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..A lot.$"

Fionanight_Text_10:
# 67 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...It's peaceful.$"

Fionanight_Text_11:
# 70 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....Yeah.$"

Fionanight_Text_12:
# 80 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...What's your name?$"

Fionanight_Text_13:
# 83 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Xylar.$"

Fionanight_Text_14:
# 88 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You don't talk much, huh?$"

Fionanight_Text_15:
# 91 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess not.$"

Fionanight_Text_16:
# 94 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..That's fine.$"

Fionanight_Text_17:
# 103 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Xylar.$"

Fionanight_Text_18:
# 114 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...I should also go.\p"
	.string "It's getting late.$"
