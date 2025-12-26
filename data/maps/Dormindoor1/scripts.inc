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
	.2byte 0


KaelPos::
# 13 "data/maps/Dormindoor1/scripts.pory"
	setobjectxyperm 1, 5, 8
# 14 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 15 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 16 "data/maps/Dormindoor1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 17 "data/maps/Dormindoor1/scripts.pory"
	addobject 1, MAP_DORMINDOOR1
# 18 "data/maps/Dormindoor1/scripts.pory"
	addobject 5, MAP_DORMINDOOR1
# 19 "data/maps/Dormindoor1/scripts.pory"
	addobject 4, MAP_DORMINDOOR1
	return


Kaelmet::
# 23 "data/maps/Dormindoor1/scripts.pory"
	lock
# 24 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_0
# 25 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 26 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_1
# 28 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 29 "data/maps/Dormindoor1/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 30 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_2
# 31 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 32 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 33 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_3
# 34 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 35 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_0
# 36 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_1
# 37 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 38 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_4
# 39 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_5
# 41 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 42 "data/maps/Dormindoor1/scripts.pory"
	addobject 4
# 43 "data/maps/Dormindoor1/scripts.pory"
	addobject 5
# 44 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_6
# 45 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 46 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_7
# 47 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_8
# 49 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 50 "data/maps/Dormindoor1/scripts.pory"
	playse SE_WIN_OPEN
# 51 "data/maps/Dormindoor1/scripts.pory"
	applymovement 4, Kaelmet_Movement_9
# 52 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 53 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_10
# 54 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Dormindoor1/scripts.pory"
	applymovement 5, Kaelmet_Movement_9
# 56 "data/maps/Dormindoor1/scripts.pory"
	playse SE_WIN_OPEN
# 57 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 59 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_3
# 60 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 61 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_4
# 62 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 63 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 64 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_5
# 65 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 66 "data/maps/Dormindoor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Kaelmet_Movement_11
# 67 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 68 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 69 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_6
# 70 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 71 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 72 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 74 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 75 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_7
# 76 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 77 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_8
# 78 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 79 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmet_Movement_13
# 80 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 81 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_9
# 82 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 83 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_14
# 85 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 86 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_10
# 87 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 88 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 89 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_11
# 90 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 91 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_12
# 92 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 93 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 94 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 95 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 96 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_13
# 97 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 98 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_14
# 99 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 100 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_15
# 101 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 102 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_16
# 103 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 104 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 105 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 106 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 107 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_17
# 108 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 109 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_18
# 110 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 111 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_19
# 112 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 113 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 114 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_12
# 115 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 116 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_20
# 117 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 118 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_15
# 119 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 120 "data/maps/Dormindoor1/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_21
# 123 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 124 "data/maps/Dormindoor1/scripts.pory"
	waitbuttonpress
# 125 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmet_Movement_16
# 126 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 127 "data/maps/Dormindoor1/scripts.pory"
	initclock 21, 00
# 128 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 129 "data/maps/Dormindoor1/scripts.pory"
	playse SE_DOOR
# 130 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_17
# 131 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 132 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 133 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_22
# 134 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 135 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_18
# 136 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 137 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_23
# 138 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 139 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_19
# 140 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 141 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 142 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_24
# 143 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 144 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 145 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmet_Movement_3
# 146 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/Dormindoor1/scripts.pory"
	delay 120
# 148 "data/maps/Dormindoor1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 150 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 151 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_25
# 152 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 153 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 154 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmet_Text_26
# 155 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 156 "data/maps/Dormindoor1/scripts.pory"
	delay 120
# 157 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 9
# 158 "data/maps/Dormindoor1/scripts.pory"
	warp_continue_script MAP_DORMINDOOR1, 1, 5, Kaelmorning, TRUE
	return


# 164 "data/maps/Dormindoor1/scripts.pory"
dorm:
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 165 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 166 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 166 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 166 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 166 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 166 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmorning::
# 171 "data/maps/Dormindoor1/scripts.pory"
	lock
# 172 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, Kaelmorning_Movement_0
# 173 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 174 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_1
# 175 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 176 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 177 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_0
# 178 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 179 "data/maps/Dormindoor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data/maps/Dormindoor1/scripts.pory"
	speakername Xylar1
# 181 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_1
# 182 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 183 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 184 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, exclam
# 185 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 186 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_2
# 187 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 188 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_2
# 189 "data/maps/Dormindoor1/scripts.pory"
	speakername Kaelmet_Text_2
# 190 "data/maps/Dormindoor1/scripts.pory"
	msgbox Kaelmorning_Text_3
# 191 "data/maps/Dormindoor1/scripts.pory"
	closemessage
# 192 "data/maps/Dormindoor1/scripts.pory"
	applymovement 1, Kaelmorning_Movement_3
# 193 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 194 "data/maps/Dormindoor1/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/Dormindoor1/scripts.pory"
	removeobject 1
# 196 "data/maps/Dormindoor1/scripts.pory"
	setflag FLAG_KAEL_DORM
# 197 "data/maps/Dormindoor1/scripts.pory"
	setrespawn HEAL_LOCATION_DORM
# 198 "data/maps/Dormindoor1/scripts.pory"
	release
	return


Nightstroll::
# 203 "data/maps/Dormindoor1/scripts.pory"
	lock
# 204 "data/maps/Dormindoor1/scripts.pory"
	speakername Nightstroll_Text_0
# 205 "data/maps/Dormindoor1/scripts.pory"
	msgbox Nightstroll_Text_1
# 206 "data/maps/Dormindoor1/scripts.pory"
	release
# 207 "data/maps/Dormindoor1/scripts.pory"
	setvar ACADEMY_START, 11
	return


lunarofficer::
# 210 "data/maps/Dormindoor1/scripts.pory"
	lock
# 211 "data/maps/Dormindoor1/scripts.pory"
	playse SE_PIN
# 212 "data/maps/Dormindoor1/scripts.pory"
	applymovement 3, Kaelmet_Movement_12
# 213 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 214 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer_Text_1
# 215 "data/maps/Dormindoor1/scripts.pory"
	waitmessage
# 216 "data/maps/Dormindoor1/scripts.pory"
	applymovement 0xFF, lunarofficer_Movement_0
# 217 "data/maps/Dormindoor1/scripts.pory"
	waitmovement 0
# 218 "data/maps/Dormindoor1/scripts.pory"
	release
	return


lunarofficer1::
# 222 "data/maps/Dormindoor1/scripts.pory"
	lock
# 223 "data/maps/Dormindoor1/scripts.pory"
	faceplayer
# 224 "data/maps/Dormindoor1/scripts.pory"
	speakername lunarofficer_Text_0
# 225 "data/maps/Dormindoor1/scripts.pory"
	msgbox lunarofficer1_Text_0
# 226 "data/maps/Dormindoor1/scripts.pory"
	release
	return


# 24 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_0:
# 24 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 24 "data/maps/Dormindoor1/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_1:
# 27 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/Dormindoor1/scripts.pory"
	face_down
	step_end

# 30 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_2:
# 30 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
# 30 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 30 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 30 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 30 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 30 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_right
# 30 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
# 30 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_down
	step_end

# 33 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_3:
# 33 "data/maps/Dormindoor1/scripts.pory"
	emote_happy
	step_end

# 38 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_4:
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 38 "data/maps/Dormindoor1/scripts.pory"
	face_right
# 38 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 38 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 38 "data/maps/Dormindoor1/scripts.pory"
	face_left
# 38 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 38 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 38 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 40 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_5:
# 40 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
# 40 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 44 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_6:
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 44 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 46 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_7:
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 46 "data/maps/Dormindoor1/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_8:
# 48 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 51 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_9:
# 51 "data/maps/Dormindoor1/scripts.pory"
	set_visible
	step_end

# 53 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_10:
# 53 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 53 "data/maps/Dormindoor1/scripts.pory"
	face_up
# 53 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
# 53 "data/maps/Dormindoor1/scripts.pory"
	face_right
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	face_left
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	face_down
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	delay_16
# 53 "data/maps/Dormindoor1/scripts.pory"
	face_up
	step_end

# 66 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_11:
# 66 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 66 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 66 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 73 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_12:
# 73 "data/maps/Dormindoor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_13:
# 79 "data/maps/Dormindoor1/scripts.pory"
	walk_in_place_up
	step_end

# 84 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_14:
# 84 "data/maps/Dormindoor1/scripts.pory"
	emote_question_mark
	step_end

# 118 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_15:
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 118 "data/maps/Dormindoor1/scripts.pory"
	walk_down
	step_end

# 125 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_16:
# 125 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 125 "data/maps/Dormindoor1/scripts.pory"
	walk_down
# 125 "data/maps/Dormindoor1/scripts.pory"
	walk_right
# 125 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 130 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_17:
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	walk_up
# 130 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 135 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_18:
# 135 "data/maps/Dormindoor1/scripts.pory"
	face_right
	step_end

# 139 "data/maps/Dormindoor1/scripts.pory"
Kaelmet_Movement_19:
# 139 "data/maps/Dormindoor1/scripts.pory"
	walk_right
	step_end

# 172 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_0:
# 172 "data/maps/Dormindoor1/scripts.pory"
	face_left
	step_end

# 174 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_1:
# 174 "data/maps/Dormindoor1/scripts.pory"
	walk_left
# 174 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

# 188 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_2:
# 188 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_left_right
# 188 "data/maps/Dormindoor1/scripts.pory"
	jump_in_place_left_right
	step_end

# 192 "data/maps/Dormindoor1/scripts.pory"
Kaelmorning_Movement_3:
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
# 192 "data/maps/Dormindoor1/scripts.pory"
	walk_fast_down
	step_end

# 216 "data/maps/Dormindoor1/scripts.pory"
lunarofficer_Movement_0:
# 216 "data/maps/Dormindoor1/scripts.pory"
	walk_left
	step_end

Kaelmet_Text_0:
# 35 "data/maps/Dormindoor1/scripts.pory"
	.string "???$"

Kaelmet_Text_1:
# 36 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! You must be my roommate!$"

Kaelmet_Text_2:
# 58 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"

Kaelmet_Text_3:
# 59 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm Kael! Kael Ashford. From Cinderbrook\n"
	.string "Town.\p"
	.string "You?$"

Kaelmet_Text_4:
# 61 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar.$"

Kaelmet_Text_5:
# 64 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar... cool name! So, where are you\n"
	.string "from?$"

Kaelmet_Text_6:
# 69 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Doesn't matter.$"

Kaelmet_Text_7:
# 75 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Right, yeah... privacy, I get it.$"

Kaelmet_Text_8:
# 77 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}So! How'd you do on the Entry Test? I\n"
	.string "barely passed the battle portion.\p"
	.string "My Pokémon and I were so nervous, but\n"
	.string "we pulled through!$"

Kaelmet_Text_9:
# 81 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I didn't take it.$"

Kaelmet_Text_10:
# 86 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Didn't... wait, you didn't take the test?$"

Kaelmet_Text_11:
# 89 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Kaelmet_Text_12:
# 91 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}...{PAUSE_UNTIL_PRESS}...$"

Kaelmet_Text_13:
# 96 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! So you got special admission?\n"
	.string "That's awesome! You must be really\l"
	.string "talented or...$"

Kaelmet_Text_14:
# 98 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm here. That's all that matters.$"

Kaelmet_Text_15:
# 100 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, hey! We're roommates now, so we\n"
	.string "should stick together, right?\p"
	.string "Maybe we could train sometime?\p"
	.string "I've got my starter, and I bet yours is\n"
	.string "cool too...$"

Kaelmet_Text_16:
# 102 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I train alone.$"

Kaelmet_Text_17:
# 107 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh. Okay, sure... I mean, everyone has\n"
	.string "their own style, right?$"

Kaelmet_Text_18:
# 109 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Look, I know we just met, but if you\n"
	.string "ever need anything, help with classes,\l"
	.string "finding your way around, or just...\l"
	.string "talking, I'm here.\p"
	.string "That's what roommates are for, right?$"

Kaelmet_Text_19:
# 111 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I won't need anything.$"

Kaelmet_Text_20:
# 116 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh..{PAUSE}...Right. Well... I'll, uh, let you settle\n"
	.string "in.\p"
	.string "See you around, Xylar.$"

Kaelmet_Text_21:
# 122 "data/maps/Dormindoor1/scripts.pory"
	.string "Night Time.....$"

Kaelmet_Text_22:
# 133 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!\p"
	.string "{PAUSE_UNTIL_PRESS}Oh! he's asleep.$"

Kaelmet_Text_23:
# 137 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I should also go to sleep...\p"
	.string "Tomorrow is the start of my Academy\n"
	.string "life.$"

Kaelmet_Text_24:
# 142 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wonder what kind of days are waiting\n"
	.string "for us.$"

Kaelmet_Text_25:
# 151 "data/maps/Dormindoor1/scripts.pory"
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
# 154 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

Kaelmorning_Text_0:
# 177 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh… Xylar? Morning.\p"
	.string "Class starts soon.\p"
	.string "I thought I'd make sure you didn't miss\n"
	.string "it.$"

Kaelmorning_Text_1:
# 181 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wasn't sleeping.$"

Kaelmorning_Text_2:
# 186 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh...Right...$"

Kaelmorning_Text_3:
# 190 "data/maps/Dormindoor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well… good morning.\p"
	.string "I'll be leaving.$"

Nightstroll_Text_0:
# 204 "data/maps/Dormindoor1/scripts.pory"
	.string "Xylar$"

Nightstroll_Text_1:
# 205 "data/maps/Dormindoor1/scripts.pory"
	.string "I can't fall sleep, maybe I should go for\n"
	.string "a walk.$"

lunarofficer_Text_0:
# 213 "data/maps/Dormindoor1/scripts.pory"
	.string "Officer$"

lunarofficer_Text_1:
# 214 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop right there!\p"
	.string "First years are not allowed in the\n"
	.string "forest yet.$"

lunarofficer1_Text_0:
# 225 "data/maps/Dormindoor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}First years are not allowed in the\n"
	.string "forest yet.$"

kael::
# 160 "data/maps/Dormindoor1/scripts.pory"
	.string "Kael$"
