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
	lock
# 13 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fd
# 14 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x496
# 15 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 17 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 18 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 19 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 20 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 21 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 22 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 24 "data/maps/LuxuraIsland/scripts.pory"
	namebox gardener
# 25 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 27 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 28 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 30 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 31 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 32 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 33 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_HG_FOLLOW_ME_2, TRUE
# 34 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 35 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 36 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 37 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 38 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 39 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 40 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 41 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 42 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 43 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 44 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 45 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 46 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 47 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 48 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 49 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 50 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 51 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 52 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 53 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 54 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 55 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 56 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 57 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 58 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 59 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 60 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 61 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 62 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 63 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 64 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 65 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 66 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 67 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 68 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 69 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 70 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 71 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 72 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 73 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 74 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 75 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 76 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 77 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 78 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 79 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 80 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 81 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 82 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 83 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 84 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 85 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 86 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 87 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 88 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 89 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 90 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 91 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 92 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 93 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 94 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 95 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 96 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 98 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 99 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 100 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 101 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 102 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 103 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 104 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 105 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 106 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 107 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 108 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 109 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 110 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 111 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 112 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 113 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 114 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 115 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 116 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 117 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 118 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 119 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 120 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 121 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 122 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 123 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 124 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 126 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 127 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 128 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 129 "data/maps/LuxuraIsland/scripts.pory"
	release
# 130 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 133 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 134 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 136 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 137 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 139 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 141 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 144 "data/maps/LuxuraIsland/scripts.pory"
in:
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 146 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 148 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 150 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 150 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 151 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 152 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 154 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 156 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 156 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 157 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 158 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 160 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 161 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 162 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 164 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 165 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 166 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 168 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 169 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 170 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 172 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 173 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 173 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 177 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 178 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 180 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 182 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 183 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 186 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 187 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 189 "data/maps/LuxuraIsland/scripts.pory"
move:
# 190 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 192 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 192 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 193 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 195 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 198 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 200 "data/maps/LuxuraIsland/scripts.pory"
run:
# 201 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 202 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 204 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 210 "data/maps/LuxuraIsland/scripts.pory"
face:
# 211 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 212 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 214 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 217 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 219 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 221 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 222 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 228 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 229 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 230 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 231 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 234 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 235 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 236 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 238 "data/maps/LuxuraIsland/scripts.pory"
player:
# 239 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 240 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 242 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 243 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 243 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 244 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 247 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 248 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 251 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 252 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 253 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 254 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 255 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 256 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 257 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 258 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 259 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 260 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 261 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 262 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 263 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 264 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 265 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 266 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 267 "data/maps/LuxuraIsland/scripts.pory"
	release
# 268 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 271 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 272 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 275 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 276 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 277 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 279 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 280 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 284 "data/maps/LuxuraIsland/scripts.pory"
io:
# 285 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 285 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 289 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 295 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 296 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 297 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 298 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 299 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 300 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 301 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 302 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 303 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 304 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 305 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 306 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, mirafollowerscript
# 307 "data/maps/LuxuraIsland/scripts.pory"
	release
# 308 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 311 "data/maps/LuxuraIsland/scripts.pory"
str:
# 312 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 312 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 315 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 316 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 317 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 318 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 319 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 320 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 323 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 324 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 324 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 324 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 328 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 335 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 342 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 349 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 358 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 367 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 377 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 387 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_ge LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 329 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 330 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 331 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 332 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 333 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 336 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 337 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 338 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 339 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 340 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 343 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 344 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 345 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 346 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 347 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 350 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 351 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 352 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 353 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 354 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 355 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 356 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 359 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 360 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 361 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 362 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 363 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 364 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 365 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 368 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 369 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 370 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 371 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 372 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 373 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 374 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 375 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 378 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 379 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 380 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 381 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 382 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 383 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 384 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 385 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 388 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 389 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 390 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 391 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 392 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 393 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 394 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 395 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 358 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13


strolll::
# 399 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 400 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 401 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 402 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 403 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 404 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 405 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


Sailor::
# 408 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 409 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 410 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 411 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


sailorr::
# 415 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 416 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 417 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 418 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


sail::
# 422 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 423 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 424 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 425 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


blood::
# 428 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 429 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 430 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 433 "data/maps/LuxuraIsland/scripts.pory"
fd:
# 434 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

bloodsee::
# 438 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 439 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 440 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 441 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 442 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 443 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 444 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 445 "data/maps/LuxuraIsland/scripts.pory"
	release
# 446 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 450 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 451 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 452 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, io
# 453 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 454 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 455 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 456 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


musicchange::
# 461 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 462 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 463 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 464 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 470 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 471 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 472 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 473 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 474 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 475 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 476 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxura::
# 479 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 480 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 481 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 484 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 485 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 486 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 489 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 490 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 491 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 495 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 496 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 497 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 501 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 502 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 503 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 507 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 508 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 509 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 513 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, outfit_1
	end

outfit_1:
# 514 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 515 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 519 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 516 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


strolllll::
# 527 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 528 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 529 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 530 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 531 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 532 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 533 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 536 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 537 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

ran_Text_0:
# 22 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 25 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira, You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 28 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No no, It's all your hard wor..$"

ran_Text_3:
# 31 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 40 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen, I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 43 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 46 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 52 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 56 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 62 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 66 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 72 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 75 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 80 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 83 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 89 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 94 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 107 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 113 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 116 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 119 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 122 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise. Now, let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 230 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 259 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 262 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.I'll do that.$"

stroll_Text_0:
# 299 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 304 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 403 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 410 "data/maps/LuxuraIsland/scripts.pory"
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
# 417 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 424 "data/maps/LuxuraIsland/scripts.pory"
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
# 429 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 443 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 474 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 480 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 485 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 490 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 496 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 502 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 508 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

gardener::
# 207 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
