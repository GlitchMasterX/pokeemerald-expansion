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
# 33 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 34 "data/maps/LuxuraIsland/scripts.pory"
	speakername gardener
# 35 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 37 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 39 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 40 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 41 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_HG_FOLLOW_ME_2, TRUE
# 42 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 43 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 44 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 45 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 46 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 47 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 48 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 49 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 50 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 51 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 52 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 54 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 55 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 56 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 57 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 58 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 60 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 61 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 62 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 63 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 64 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 65 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 66 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 67 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 68 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 69 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 70 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 71 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 72 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 73 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 74 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 75 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 76 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 77 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 78 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 79 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 80 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 81 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 82 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 83 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 84 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 85 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 86 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 87 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 88 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 90 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 92 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 93 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 94 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 95 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 96 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 97 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 98 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 99 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 101 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 102 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 103 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 104 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 105 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 106 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 107 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 108 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 109 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 110 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 111 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 112 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 113 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 114 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 115 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 116 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 117 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 118 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 119 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 121 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_0
# 122 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 123 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 124 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_1
# 125 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 126 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 127 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 128 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 130 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 131 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 132 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 133 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 134 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 137 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 138 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 140 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 141 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 143 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 145 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 148 "data/maps/LuxuraIsland/scripts.pory"
in:
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 150 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 152 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 155 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 156 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 158 "data/maps/LuxuraIsland/scripts.pory"
fade:
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
fals:
# 165 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 166 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 168 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 169 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 170 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 172 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 173 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 174 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 176 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 177 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 177 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 180 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 181 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 182 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 184 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 186 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 187 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 190 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 191 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 193 "data/maps/LuxuraIsland/scripts.pory"
move:
# 194 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 196 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 197 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 199 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 200 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 200 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
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
	face_right
	step_end

# 204 "data/maps/LuxuraIsland/scripts.pory"
run:
# 205 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 206 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 208 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 209 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 209 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 209 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 209 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/LuxuraIsland/scripts.pory"
face:
# 215 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 216 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 218 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 219 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 219 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 219 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 219 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 225 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 226 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
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
	step_end

trig1::
# 232 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 233 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 234 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 235 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 238 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 239 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 240 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 242 "data/maps/LuxuraIsland/scripts.pory"
player:
# 243 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 244 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 246 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 248 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 251 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 252 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 255 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 256 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 257 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 258 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 259 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 260 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 261 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 262 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 263 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 264 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 265 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 266 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 267 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 268 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 269 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 270 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 271 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 272 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 275 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 276 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 279 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 280 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 281 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 283 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 284 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 288 "data/maps/LuxuraIsland/scripts.pory"
io:
# 289 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 289 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 292 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 299 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 300 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 301 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 302 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 303 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 304 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 305 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 306 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 307 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 308 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 309 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 310 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 311 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 312 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, mirafollowerscript
# 313 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 314 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 317 "data/maps/LuxuraIsland/scripts.pory"
str:
# 318 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 318 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 321 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 330 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 331 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 332 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_1
# 333 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 334 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 335 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 336 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 322 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 323 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 324 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 325 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 326 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 327 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 340 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 341 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 341 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 341 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 345 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 346 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 355 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 364 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 373 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 385 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 397 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 409 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 418 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 431 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 347 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 348 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 349 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 350 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 351 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 352 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 353 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 356 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 357 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 358 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 359 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 360 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 361 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 362 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 365 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 366 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 367 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 368 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 369 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 370 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 371 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 374 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 375 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 376 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 377 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 378 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 379 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 380 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 381 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 382 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 383 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 386 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 387 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
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
# 393 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 394 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 395 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 398 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 399 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 400 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 401 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 402 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 403 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 404 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 405 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 406 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 407 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 410 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 411 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 412 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 413 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 414 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 415 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 416 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 419 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 420 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 421 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 422 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 423 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 424 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 425 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 426 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 427 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 428 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 433 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 434 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 435 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 436 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 437 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 438 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 439 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 440 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 441 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 409 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 397 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 385 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 446 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 447 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 448 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 449 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 450 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 452 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 455 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 456 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 457 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 458 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 462 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 463 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 464 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 465 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 469 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 470 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 471 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 472 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 475 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 479 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 480 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 481 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 476 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 486 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 487 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 488 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 489 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 490 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 491 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 492 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 493 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_9
bloodsee_8:
# 496 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_3
# 499 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_4
# 502 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_5
bloodsee_1:
# 505 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 507 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 508 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 509 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 510 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 511 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 494 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 495 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
	goto bloodsee_1

bloodsee_3:
# 497 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 498 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
	goto bloodsee_1

bloodsee_4:
# 500 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 501 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
	goto bloodsee_1

bloodsee_5:
# 503 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 504 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
	goto bloodsee_1

bloodsee_9:
# 493 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_2
	goto bloodsee_8


blo::
# 515 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 516 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 517 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 518 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 519 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 524 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 525 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 526 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 527 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 533 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 534 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 535 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 536 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 537 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 539 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 542 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 543 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 544 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 547 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 548 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 549 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 552 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 553 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 554 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 558 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 559 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 560 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 564 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 565 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 566 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 570 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 571 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 572 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 576 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, outfit_1
	end

outfit_1:
# 577 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 578 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 582 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 579 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


strolllll::
# 591 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 592 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 593 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 594 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 595 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 597 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 600 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 601 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 604 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 605 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 606 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 607 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 608 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 610 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 614 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 615 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 616 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 617 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 618 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 619 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 621 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 622 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 623 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 624 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 625 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 626 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 627 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 629 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 630 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 631 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 632 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 633 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 634 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 635 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 637 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 638 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 639 "data/maps/LuxuraIsland/scripts.pory"
	release
# 640 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 641 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 644 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 645 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 647 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 649 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 651 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 652 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 121 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_0:
# 121 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 124 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_1:
# 124 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 300 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 309 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 309 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 309 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 310 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 310 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 310 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 494 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 494 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 497 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 497 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 498 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 498 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 500 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 500 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 503 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 503 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

ran_Text_0:
# 32 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 35 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira, You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 37 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}No no, It's all your hard wor..$"

ran_Text_3:
# 39 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 48 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with those Pancakes, I\n"
	.string "ran down so fast and then they all\l"
	.string "started laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily.$"

ran_Text_5:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 52 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 58 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 62 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 68 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 72 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 77 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 79 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 84 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 86 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 92 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 97 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 112 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 114 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 116 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make\n"
	.string "Pancakes for you and this time for real.$"

ran_Text_21:
# 118 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_23:
# 123 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}And yeah don't talk to the gardener\n"
	.string "again.\p"
	.string "I don't like him.$"

ran_Text_24:
# 126 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Okay I won't. Now, let's get inside\n"
	.string "before we catch a cold.$"

trig1_Text_0:
# 234 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 264 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 266 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 303 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 306 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 334 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 450 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 457 "data/maps/LuxuraIsland/scripts.pory"
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
# 464 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 471 "data/maps/LuxuraIsland/scripts.pory"
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
# 480 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 489 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 490 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 508 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 537 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 543 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 548 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 553 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 559 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 565 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 571 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 608 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 619 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 627 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 635 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 638 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 211 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
