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
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/LuxuraIsland/scripts.pory"
	.byte 0
# 8 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 9, stroll
# 10 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 21, alistairarrive
# 11 "data/maps/LuxuraIsland/scripts.pory"
.2byte 0
# 12 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 21, playerinvisible1 
# 14 "data/maps/LuxuraIsland/scripts.pory"
.2byte 0

playerinvisible1::
# 18 "data/maps/LuxuraIsland/scripts.pory"
	hideobjectat 0xFF, MAP_LUXURA_ISLAND
# 19 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13, MAP_LUXURA_ISLAND
# 20 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14, MAP_LUXURA_ISLAND
	return


ran::
# 23 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 24 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x496
# 25 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 27 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 28 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 29 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 30 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 31 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 32 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/LuxuraIsland/scripts.pory"
	speakername gardener
# 35 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 38 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 41 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 43 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_HG_FOLLOW_ME_2, TRUE
# 44 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 45 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 46 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 47 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 48 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 49 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 50 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 52 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 53 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 55 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 56 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 58 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 59 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 60 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 61 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 62 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 64 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 65 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 66 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 68 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 69 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 70 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 71 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 72 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 74 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 75 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 76 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 78 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 79 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 80 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 81 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 82 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 84 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 85 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 87 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 88 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 89 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 90 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 92 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 93 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 95 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 96 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 97 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 98 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 99 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 101 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 102 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 103 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 104 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 106 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 109 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 110 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 111 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 112 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 113 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 114 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 115 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 117 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 119 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 122 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 123 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 125 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 126 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 128 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 129 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 131 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 132 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 134 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 136 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 137 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 138 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 139 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 140 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 143 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 144 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 146 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 147 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 149 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 150 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 150 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 150 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 151 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 154 "data/maps/LuxuraIsland/scripts.pory"
in:
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 155 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 156 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 158 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 159 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 159 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 159 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 159 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 159 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 160 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 160 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 161 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 162 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 164 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 165 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 165 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 165 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 165 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 166 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 166 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 167 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 168 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 170 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 171 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 172 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 174 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 176 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 178 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 179 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 180 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 182 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 183 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 183 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 187 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 188 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 190 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 192 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 193 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 196 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 199 "data/maps/LuxuraIsland/scripts.pory"
move:
# 200 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 201 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 202 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 203 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 205 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 206 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 206 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 208 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 210 "data/maps/LuxuraIsland/scripts.pory"
run:
# 211 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 212 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 214 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 220 "data/maps/LuxuraIsland/scripts.pory"
face:
# 221 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 222 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 224 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 229 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 231 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 232 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 233 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 233 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 238 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 239 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 240 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 241 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 244 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 245 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 246 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 248 "data/maps/LuxuraIsland/scripts.pory"
player:
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 250 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 252 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 253 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 253 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 254 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 257 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 258 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 261 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 262 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 263 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 264 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 265 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 266 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 267 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 268 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 269 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 270 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 272 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 273 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 275 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 276 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 277 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 278 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 279 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 282 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 283 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 284 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 286 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 287 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 288 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 290 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 291 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 295 "data/maps/LuxuraIsland/scripts.pory"
io:
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 299 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 301 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 306 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 307 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 308 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 309 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 310 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 312 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 313 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 314 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 315 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 317 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, mirafollowerscript
# 318 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 319 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 322 "data/maps/LuxuraIsland/scripts.pory"
str:
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 326 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 327 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 328 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 329 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 331 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 334 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 335 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 335 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 335 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 339 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 340 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 349 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 358 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 367 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 379 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 391 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 403 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 412 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 425 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 341 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 342 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 343 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 344 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 345 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 346 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 347 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 350 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 351 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 352 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 353 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 354 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 355 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 356 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 359 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 360 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 361 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 362 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 363 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 364 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 365 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 368 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 369 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
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
# 375 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 376 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 377 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 380 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 381 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 382 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 383 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 384 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 385 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 386 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 387 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 388 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 389 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 392 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 393 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 394 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 395 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 396 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 397 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 398 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 399 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 400 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 401 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 404 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 405 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 406 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 407 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 408 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 409 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 410 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 413 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 414 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 415 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 416 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 417 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 418 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 419 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 420 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 421 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 422 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 426 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 427 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 428 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 429 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 430 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 431 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 432 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 433 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 434 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 435 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 403 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 391 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 379 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 440 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 441 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 442 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 443 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 444 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 446 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 449 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 450 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 451 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 452 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 456 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 457 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 458 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 459 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 463 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 464 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 465 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 466 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 469 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 470 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 471 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


bloodsee::
# 476 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 477 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 478 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 479 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 480 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 481 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 483 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 484 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 488 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 489 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 490 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, io
# 491 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 492 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 494 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 499 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 500 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 501 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 502 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 508 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 509 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 510 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 511 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 512 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 514 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 517 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 518 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 519 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 522 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 523 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 524 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 527 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 528 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 529 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 533 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 534 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 535 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 539 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 540 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 541 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 545 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 546 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 547 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 551 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, outfit_1
	end

outfit_1:
# 552 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 553 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 557 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 554 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


strolllll::
# 566 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 567 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 568 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 569 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 570 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 572 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 575 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 579 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 580 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 581 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 582 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 583 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 585 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 589 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 590 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 591 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 592 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 593 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 594 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 596 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 597 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 598 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 599 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 600 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 601 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 602 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 604 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 605 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 606 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 607 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 608 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 609 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 610 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 612 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 613 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 614 "data/maps/LuxuraIsland/scripts.pory"
	release
# 615 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 616 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 619 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 620 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 622 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 623 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 624 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 626 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 627 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

ran_Text_0:
# 32 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 35 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira, You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 38 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No no, It's all your hard wor..$"

ran_Text_3:
# 41 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen, I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 53 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 56 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 62 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 66 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 72 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 76 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 82 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 85 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 90 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 93 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 99 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 104 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 117 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 123 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 126 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 129 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 132 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise. Now, let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 240 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 270 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 273 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 310 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 315 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 444 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 451 "data/maps/LuxuraIsland/scripts.pory"
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
# 458 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 465 "data/maps/LuxuraIsland/scripts.pory"
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
# 470 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 481 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 512 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 518 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 523 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 528 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 534 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 540 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 546 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

alistairarrive_Text_0:
# 594 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 602 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 610 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 613 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 217 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
