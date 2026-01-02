Dormindoor1_MapScripts::
# 2 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/Dormindoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Dormindoor1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Dormindoor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 8, Kaelmet
# 4 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 10, Nightstroll
	.2byte 0

Dormindoor1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 8, KaelPos
# 8 "data/maps/Dormindoor1/scripts.pory"
	map_script_2 ACADEMY_START, 9, trialloss
	.2byte 0


KaelPos::
# 14 "data/maps/Dormindoor1/scripts.pory"
	setobjectxyperm 1, 5, 8
# 15 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 16 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 17 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 18 "data/maps/Dormindoor1/scripts.pory"
	addobject 1, MAP_DORMINDOOR1
# 19 "data/maps/Dormindoor1/scripts.pory"
	addobject 5, MAP_DORMINDOOR1
# 20 "data/maps/Dormindoor1/scripts.pory"
	addobject 4, MAP_DORMINDOOR1
	return


trialloss::
# 24 "data/maps/Dormindoor1/scripts.pory"
	destroyfollowernpc
	return


Kaelmet::
# 28 "data/maps/Dormindoor1/scripts.pory"
	lock
# 29 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_0
# 30 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 31 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_1
# 33 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 34 "data/maps/Dormindoor1/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 35 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_2
# 36 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 37 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 38 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_3
# 39 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 40 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_0
# 41 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 42 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 43 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_4
# 44 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_5
# 46 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 47 "data/maps/Dormindoor1/scripts.pory"
	addobject 4
# 48 "data/maps/Dormindoor1/scripts.pory"
	addobject 5
# 49 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_6
# 50 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_7
# 52 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 53 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_8
# 54 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Dormindoor1/scripts.pory"
	playse SE_WIN_OPEN
# 56 "data/maps/Dormindoor1/scripts.pory"
	applymovement 4, Kaelmet_Movement_9
# 57 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_10
# 59 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 60 "data/maps/Dormindoor1/scripts.pory"
	applymovement 5, Kaelmet_Movement_9
# 61 "data/maps/Dormindoor1/scripts.pory"
	playse SE_WIN_OPEN
# 62 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 63 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 64 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 65 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 66 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 67 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 68 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 69 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5
# 70 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 71 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_11
# 72 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 73 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 74 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 75 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 76 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 77 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 78 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 79 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 80 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 81 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 82 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8
# 83 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 84 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmet_Movement_13
# 85 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 86 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_9
# 87 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 88 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_14
# 90 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 91 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_10
# 92 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 93 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 94 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_11
# 95 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 96 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_12
# 97 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 98 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 99 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 100 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 101 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_13
# 102 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 103 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_14
# 104 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 105 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_15
# 106 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 107 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_16
# 108 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 109 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 110 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 111 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 112 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_17
# 113 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 114 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_18
# 115 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 116 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_19
# 117 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 118 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 119 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 120 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 121 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_20
# 122 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 123 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_15
# 124 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 125 "data/maps/Dormindoor1/scripts.pory"
	playse SE_EXIT
# 126 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_21
# 128 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 129 "data/maps/Dormindoor1/scripts.pory"
	waitbuttonpress
# 130 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmet_Movement_16
# 131 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 132 "data/maps/Dormindoor1/scripts.pory"
	initclock 21, 00
# 133 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/Dormindoor1/scripts.pory"
	playse SE_DOOR
# 135 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_17
# 136 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 137 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 138 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_22
# 139 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 140 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_18
# 141 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 142 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_23
# 143 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 144 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_19
# 145 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 146 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 147 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_24
# 148 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 149 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 150 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_3
# 151 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/Dormindoor1/scripts.pory"
	delay 120
# 153 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 155 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 156 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_25
# 157 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 158 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 159 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_26
# 160 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 161 "data/maps/Dormindoor1/scripts.pory"
	delay 120
# 162 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 163 "data/maps/Dormindoor1/scripts.pory"
	warp_continue_script MAP_DORMINDOOR1, 1, 5, Kaelmorning, TRUE
	return


# 169 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 170 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 171 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 171 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 171 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 171 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 171 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmorning::
# 176 "data/maps/Dormindoor1/scripts.pory"
	lock
# 177 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmorning_Movement_0
# 178 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 179 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_1
# 180 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 181 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 182 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_0
# 183 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 184 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 185 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 186 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_1
# 187 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 188 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 189 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, exclam
# 190 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 191 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_2
# 192 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 193 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_2
# 194 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 195 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_3
# 196 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 197 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_3
# 198 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 199 "data/maps/Dormindoor1/scripts.pory"
	playse SE_EXIT
# 200 "data/maps/Dormindoor1/scripts.pory"
	removeobject 1
# 201 "data/maps/Dormindoor1/scripts.pory"
	fwdweekday 1
# 202 "data/maps/Dormindoor1/scripts.pory"
	initclock 9, 25
# 203 "data/maps/Dormindoor1/scripts.pory"
	pausefakertc
# 204 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_KAEL_DORM
# 205 "data/maps/Dormindoor1/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 206 "data/maps/Dormindoor1/scripts.pory"
	setrespawn HEAL_LOCATION_DORM
# 207 "data/maps/Dormindoor1/scripts.pory"
	release
	return


Nightstroll::
# 212 "data/maps/Dormindoor1/scripts.pory"
	lock
# 213 "data/maps/Dormindoor1/scripts.pory"
	speakername Nightstroll_Text_0
# 214 "data/maps/Dormindoor1/scripts.pory"
	msgbox Nightstroll_Text_1
# 215 "data/maps/Dormindoor1/scripts.pory"
	release
# 216 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 11
	return


lunarofficer::
# 219 "data/maps/Dormindoor1/scripts.pory"
	lock
# 220 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 221 "data/maps/Dormindoor1/scripts.pory"
	applymovement 3, Kaelmet_Movement_12
# 222 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 223 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer_Text_1
# 224 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 225 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, lunarofficer_Movement_0
# 226 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 227 "data/maps/Dormindoor1/scripts.pory"
	release
	return


lunarofficer1::
# 231 "data/maps/Dormindoor1/scripts.pory"
	lock
# 232 "data/maps/Dormindoor1/scripts.pory"
	faceplayer
# 233 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 234 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer1_Text_0
# 235 "data/maps/Dormindoor1/scripts.pory"
	release
	return


# 29 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_0:
# 29 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 29 "data/maps/Dormindoor1/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_1:
# 32 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
# 32 "data/maps/Dormindoor1/scripts.pory"
	face_down
	step_end

# 35 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_2:
# 35 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
# 35 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 35 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 35 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 35 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
# 35 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
	step_end

# 38 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_3:
# 38 "data/maps/Dormindoor1/scripts.pory"
	emote_happy
	step_end

# 43 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_4:
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 43 "data/maps/Dormindoor1/scripts.pory"
	face_right
# 43 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 43 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 43 "data/maps/Dormindoor1/scripts.pory"
	face_left
# 43 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 43 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 43 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 45 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_5:
# 45 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
# 45 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 49 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_6:
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 49 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 51 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_7:
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 51 "data/maps/Dormindoor1/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_8:
# 53 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 56 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_9:
# 56 "data/maps/Dormindoor1/scripts.pory"
	set_visible
	step_end

# 58 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_10:
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 58 "data/maps/Dormindoor1/scripts.pory"
	face_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
# 58 "data/maps/Dormindoor1/scripts.pory"
	face_right
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	face_left
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	face_down
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 58 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 71 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_11:
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 71 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 78 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_12:
# 78 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_13:
# 84 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_up
	step_end

# 89 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_14:
# 89 "data/maps/Dormindoor1/scripts.pory"
	emote_question_mark
	step_end

# 123 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_15:
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 123 "data/maps/Dormindoor1/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_16:
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_right
# 130 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 135 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_17:
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 135 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 140 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_18:
# 140 "data/maps/Dormindoor1/scripts.pory"
	face_right
	step_end

# 144 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_19:
# 144 "data/maps/Dormindoor1/scripts.pory"
	walk_right
	step_end

# 177 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_0:
# 177 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 179 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_1:
# 179 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 179 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

# 193 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_2:
# 193 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_left_right
# 193 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_left_right
	step_end

# 197 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_3:
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 197 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
	step_end

# 225 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_0:
# 225 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 40 "data/maps/Dormindoor1/scripts.pory"
	.string "???$"

Kaelmet_Text_1:
# 41 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! You must be my roommate!$"

Kaelmet_Text_2:
# 63 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"

Kaelmet_Text_3:
# 64 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm Kael! Kael Ashford. From Cinderbrook\n"
	.string "Town.\p"
	.string "You?$"

Kaelmet_Text_4:
# 66 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar.$"

Kaelmet_Text_5:
# 69 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar... cool name! So, where are you\n"
	.string "from?$"

Kaelmet_Text_6:
# 74 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Doesn't matter.$"

Kaelmet_Text_7:
# 80 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Right, yeah... privacy, I get it.$"

Kaelmet_Text_8:
# 82 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}So! How'd you do on the Entry Test? I\n"
	.string "barely passed the battle portion.\p"
	.string "My Pokémon and I were so nervous, but\n"
	.string "we pulled through!$"

Kaelmet_Text_9:
# 86 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I didn't take it.$"

Kaelmet_Text_10:
# 91 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Didn't... wait, you didn't take the test?$"

Kaelmet_Text_11:
# 94 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Kaelmet_Text_12:
# 96 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}...{PAUSE_UNTIL_PRESS}...$"

Kaelmet_Text_13:
# 101 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! So you got special admission?\n"
	.string "That's awesome! You must be really\l"
	.string "talented or...$"

Kaelmet_Text_14:
# 103 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm here. That's all that matters.$"

Kaelmet_Text_15:
# 105 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, hey! We're roommates now, so we\n"
	.string "should stick together, right?\p"
	.string "Maybe we could train sometime?\p"
	.string "I've got my starter, and I bet yours is\n"
	.string "cool too...$"

Kaelmet_Text_16:
# 107 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I train alone.$"

Kaelmet_Text_17:
# 112 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh. Okay, sure... I mean, everyone has\n"
	.string "their own style, right?$"

Kaelmet_Text_18:
# 114 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Look, I know we just met, but if you\n"
	.string "ever need anything, help with classes,\l"
	.string "finding your way around, or just...\l"
	.string "talking, I'm here.\p"
	.string "That's what roommates are for, right?$"

Kaelmet_Text_19:
# 116 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I won't need anything.$"

Kaelmet_Text_20:
# 121 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh..{PAUSE}...Right. Well... I'll, uh, let you settle\n"
	.string "in.\p"
	.string "See you around, Xylar.$"

Kaelmet_Text_21:
# 127 "data/maps/Dormindoor1/scripts.pory"
	.string "Night Time.....$"

Kaelmet_Text_22:
# 138 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!\p"
	.string "{PAUSE_UNTIL_PRESS}Oh! he's asleep.$"

Kaelmet_Text_23:
# 142 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I should also go to sleep...\p"
	.string "Tomorrow is the start of my Academy\n"
	.string "life.$"

Kaelmet_Text_24:
# 147 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wonder what kind of days are waiting\n"
	.string "for us.$"

Kaelmet_Text_25:
# 156 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Two years. That was the deal.\p"
	.string "Astralis Academy.\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The most prestigious training\n"
	.string "institution in Velanthis.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Waste of time.\p"
	.string "Surge was just one. There are others.\n"
	.string "Higher-ups.\p"
	.string "Lady Nova.\p"
	.string "Strength. That's all I need.\p"
	.string "Then I hunt them down.\p"
	.string "And this time...\p"
	.string "{FONT_SMALL}I'll make them regret leaving me alive.$"

Kaelmet_Text_26:
# 159 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

Kaelmorning_Text_0:
# 182 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh… Xylar? Morning.\p"
	.string "Class starts soon.\p"
	.string "I thought I'd make sure you didn't miss\n"
	.string "it.$"

Kaelmorning_Text_1:
# 186 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wasn't sleeping.$"

Kaelmorning_Text_2:
# 191 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh...Right...$"

Kaelmorning_Text_3:
# 195 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well… good morning.\p"
	.string "I'll be leaving.$"

Nightstroll_Text_0:
# 213 "data/maps/Dormindoor1/scripts.pory"
	.string "Xylar$"

Nightstroll_Text_1:
# 214 "data/maps/Dormindoor1/scripts.pory"
	.string "I can't fall sleep, maybe I should go for\n"
	.string "a walk.$"

lunarofficer_Text_0:
# 222 "data/maps/Dormindoor1/scripts.pory"
	.string "Officer$"

lunarofficer_Text_1:
# 223 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop right there!\p"
	.string "First years are not allowed in the\n"
	.string "forest yet.$"

lunarofficer1_Text_0:
# 234 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}First years are not allowed in the\n"
	.string "forest yet.$"

kael::
# 165 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
