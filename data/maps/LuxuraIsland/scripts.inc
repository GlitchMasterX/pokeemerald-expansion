# 1 "data/maps/LuxuraIsland/scripts.pory"

# 2 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts::
# 3 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 6 "data/maps/LuxuraIsland/scripts.pory"
	.byte 0
# 7 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 9, stroll
# 9 "data/maps/LuxuraIsland/scripts.pory"
.2byte 0

ran::
# 12 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 13 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x496
# 14 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 16 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 17 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 18 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 19 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 20 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 21 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 23 "data/maps/LuxuraIsland/scripts.pory"
	namebox gardener
# 24 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 25 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 26 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 27 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 29 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 30 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 31 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 32 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 33 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 34 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 35 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 36 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 37 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 38 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 39 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 40 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 41 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 42 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 43 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 44 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 45 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 46 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 47 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 48 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 49 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 50 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 51 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 52 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 53 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 54 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 55 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 56 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 57 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 58 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 59 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 60 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 61 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 62 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 63 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 64 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 65 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 66 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 67 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 68 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 69 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 70 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 71 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 72 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 73 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 74 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 75 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 76 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 77 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 78 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 79 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 80 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 81 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 82 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 83 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 84 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 85 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 86 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 87 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 88 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 90 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 92 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 93 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 94 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 96 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 97 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 98 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 99 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 100 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 101 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 102 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 104 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 105 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 106 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 107 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 108 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 109 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 110 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 111 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 112 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 113 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 114 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 115 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 116 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 117 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 118 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 119 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 120 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 121 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 123 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 124 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 125 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 126 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 127 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 130 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 131 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 133 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 134 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 136 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 137 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 137 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 137 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 138 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 141 "data/maps/LuxuraIsland/scripts.pory"
in:
# 142 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 142 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 142 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 143 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 145 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 148 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 149 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 151 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 152 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 152 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 152 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 152 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 154 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 155 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 157 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 158 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 159 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 161 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 162 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 163 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 165 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 166 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 167 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 169 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 170 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 170 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 173 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 174 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 175 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 177 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 178 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 179 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 180 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 183 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 184 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 186 "data/maps/LuxuraIsland/scripts.pory"
move:
# 187 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 190 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 192 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 193 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 193 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 197 "data/maps/LuxuraIsland/scripts.pory"
run:
# 198 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 199 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 201 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 207 "data/maps/LuxuraIsland/scripts.pory"
face:
# 208 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 209 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 211 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 218 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 219 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 225 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 226 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 227 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 228 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 231 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 232 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 233 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 235 "data/maps/LuxuraIsland/scripts.pory"
player:
# 236 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 237 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 239 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 240 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 240 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 241 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 244 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 245 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 248 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 249 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 250 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 251 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 252 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 253 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 254 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 255 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 256 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 257 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 258 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 259 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 260 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 261 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 263 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 264 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 265 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 268 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 272 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 273 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 276 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 277 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 281 "data/maps/LuxuraIsland/scripts.pory"
io:
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 285 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 286 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 292 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 293 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 294 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 295 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 296 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 297 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 298 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 299 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 300 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 301 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 302 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 303 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, mirafollowerscript
# 304 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 305 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 308 "data/maps/LuxuraIsland/scripts.pory"
str:
# 309 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 309 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 312 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 313 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 314 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 315 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 316 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 317 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 320 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 321 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 321 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 321 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 325 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 332 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 339 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 346 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 355 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 364 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 374 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 384 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_ge LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 326 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 327 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 328 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 329 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 330 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 333 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 334 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 335 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 336 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 337 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 340 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 341 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 342 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 343 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 344 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 347 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 348 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 349 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 350 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 351 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 352 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 353 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 356 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 357 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 358 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 359 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 360 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 361 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 362 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 365 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 366 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 367 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 368 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 369 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 370 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 371 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 372 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 375 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 376 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 377 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 378 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 379 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 380 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 381 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 382 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 385 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 386 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 387 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 388 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 389 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 390 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 391 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 392 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 374 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 355 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13


strolll::
# 396 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 397 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 398 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 399 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 400 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 401 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 402 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 405 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 406 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 407 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 408 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 412 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 413 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 414 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 415 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 419 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 420 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 421 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 422 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 425 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 426 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 427 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


bloodsee::
# 432 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 433 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 434 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 435 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 436 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 437 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 438 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 439 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 440 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 444 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 445 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 446 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, io
# 447 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 448 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 449 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 450 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 455 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 456 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 457 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 458 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 464 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 465 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 466 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 467 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 468 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 469 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 470 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 473 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 474 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 475 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 478 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 479 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 480 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 483 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 484 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 485 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_SPARK
# 486 "data/maps/LuxuraIsland/scripts.pory"
	giveitem ITEM_OUTFIT_BOX, 1
# 487 "data/maps/LuxuraIsland/scripts.pory"
	giveitem ITEM_ACRO_BIKE, 1
# 488 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 492 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 493 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 494 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 498 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 499 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 500 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 504 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 505 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 510 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, outfit_1
	end

outfit_1:
# 511 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 512 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 516 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 513 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ran_Text_0:
# 21 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 24 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira, You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 27 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No no, It's all your hard wor..$"

ran_Text_3:
# 30 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 38 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen, I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 41 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 44 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 54 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 60 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 64 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 70 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 73 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 78 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 81 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 87 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 92 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 104 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 107 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 113 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 116 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 119 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise. Now, let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 227 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 256 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 259 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.I'll do that.$"

stroll_Text_0:
# 296 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 301 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 400 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 407 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I have to tell you, your\n"
	.string "father is one of the bravest men I've\l"
	.string "ever known.\p"
	.string "The way he stood up against the Dark\n"
	.string "Force to protect us all,I've never seen\l"
	.string "courage like that.\p"
	.string "Without him, who knows what would have\n"
	.string "happened?\p"
	.string "He's a true hero, and it's an honor to\n"
	.string "serve him.$"

sailorr_Text_0:
# 414 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 421 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I'll never forget the day\n"
	.string "your Father faced the Dark Force.\p"
	.string "The skies turned dark, and portals\n"
	.string "opened everywhere, unleashing chaos.\p"
	.string "It was the most terrifying thing I've\n"
	.string "ever seen.\p"
	.string "But your father, he didn't even flinch.\p"
	.string "He stood firm, right in the face of that\n"
	.string "monster, and fought with a bravery I've\l"
	.string "never witnessed before.\p"
	.string "We all owe him our lives for what he did\n"
	.string "that day.$"

blood_Text_0:
# 426 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 437 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 468 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 474 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 479 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 484 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 493 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 499 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 505 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

gardener::
# 204 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
