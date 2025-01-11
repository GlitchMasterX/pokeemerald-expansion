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
	playbgm MUS_HG_FOLLOW_ME_2, TRUE
# 33 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 34 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 35 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 36 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 37 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 38 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 39 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 40 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 41 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 42 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 43 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 44 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 45 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 46 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 47 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 48 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 49 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 50 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 51 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 52 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 53 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 54 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 55 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 56 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 57 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 58 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 59 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 60 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 61 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 62 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 63 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 64 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 65 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 66 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 67 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 68 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 69 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 70 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 71 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 72 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 73 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 74 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 75 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 76 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 77 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 78 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 79 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 80 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 81 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 82 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 83 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 84 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 85 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 86 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 87 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 88 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 89 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 90 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 91 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 92 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 93 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 94 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 95 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 97 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 98 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 99 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 100 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 101 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 102 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 103 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 104 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 106 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 107 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 108 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 109 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 110 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 111 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 112 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 113 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 114 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 115 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 116 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 117 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 118 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 119 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 120 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 121 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 122 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 123 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 125 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 126 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 127 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 128 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 129 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 132 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 133 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 135 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 136 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 138 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 139 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 139 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 139 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 140 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 143 "data/maps/LuxuraIsland/scripts.pory"
in:
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 145 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 147 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 150 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 151 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 153 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 156 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 157 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 159 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 160 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 161 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 163 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 164 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 165 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 167 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 168 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 169 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 171 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 175 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 176 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 177 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 179 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 180 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 181 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 182 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 185 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 188 "data/maps/LuxuraIsland/scripts.pory"
move:
# 189 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 192 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 194 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 197 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 199 "data/maps/LuxuraIsland/scripts.pory"
run:
# 200 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 201 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 203 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 209 "data/maps/LuxuraIsland/scripts.pory"
face:
# 210 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 211 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 213 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 214 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 214 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 214 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 214 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 216 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 218 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 220 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 221 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 227 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 228 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 229 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 230 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 233 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 234 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 235 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 237 "data/maps/LuxuraIsland/scripts.pory"
player:
# 238 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 239 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 241 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 242 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 242 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 243 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 246 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 247 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 250 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 251 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 252 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 253 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 254 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 255 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 256 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 257 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 258 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 259 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 260 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 261 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 262 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 263 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 265 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 267 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 270 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 271 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 272 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 274 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 275 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 276 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 278 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 279 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 283 "data/maps/LuxuraIsland/scripts.pory"
io:
# 284 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 284 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 287 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 289 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 294 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 295 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 296 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 297 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 298 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 299 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 300 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 301 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 302 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 303 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 304 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 305 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, mirafollowerscript
# 306 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 307 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 310 "data/maps/LuxuraIsland/scripts.pory"
str:
# 311 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 311 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 314 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 315 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 316 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 317 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 318 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 319 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 322 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 327 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 334 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 341 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 348 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 357 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 366 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 376 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 386 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_ge LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 328 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 329 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 330 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 331 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 332 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 335 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 336 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 337 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 338 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 339 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 342 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 343 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 344 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 345 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 346 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 349 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 350 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 351 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 352 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 353 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 354 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 355 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 358 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 359 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 360 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 361 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 362 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 363 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 364 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 367 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 368 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 369 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 370 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 371 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 372 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 373 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 374 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 378 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 379 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 380 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 381 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 382 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 383 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 384 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 387 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 388 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 389 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 390 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 391 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 392 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 393 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 394 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 376 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 357 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13


strolll::
# 398 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 399 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 400 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 401 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 402 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 403 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 404 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 407 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 408 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 409 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 410 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 414 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 415 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 416 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 417 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 421 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 422 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 423 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 424 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 427 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 428 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 429 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


bloodsee::
# 434 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 435 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 436 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 437 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 438 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 439 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 440 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 441 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 442 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 446 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 447 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 448 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, io
# 449 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 450 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 451 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 452 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 457 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 458 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 459 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 460 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 466 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 467 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 468 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 469 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 470 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 471 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 472 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 475 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 476 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 477 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 480 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 481 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 482 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 485 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 486 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 487 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 491 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 492 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 493 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 497 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 498 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 499 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 503 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 504 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 505 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 509 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, outfit_1
	end

outfit_1:
# 510 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 511 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 515 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 512 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


strolllll::
# 524 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 525 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 526 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 527 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 528 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 529 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 530 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 533 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 534 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 537 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 538 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 539 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 540 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 541 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 542 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 543 "data/maps/LuxuraIsland/scripts.pory"
	release
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
# 39 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen, I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 42 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 45 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 51 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 55 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 61 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 65 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 71 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 74 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 79 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 82 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 88 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 93 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 106 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 109 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 112 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 115 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 118 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 121 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise. Now, let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 229 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 258 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 261 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. xI'll do that.$"

stroll_Text_0:
# 298 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 303 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 402 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 409 "data/maps/LuxuraIsland/scripts.pory"
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
# 416 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 423 "data/maps/LuxuraIsland/scripts.pory"
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
# 428 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 439 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 470 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 476 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 481 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 486 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 492 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 498 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 504 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

gardener::
# 206 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
