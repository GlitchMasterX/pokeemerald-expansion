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
	applymovement 1, ran_Movement_0
# 71 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 72 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_1
# 73 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 74 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 75 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 76 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 77 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 78 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 79 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 80 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 81 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 82 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 83 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 84 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 85 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 86 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 87 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 88 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 89 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 90 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 91 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 92 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 93 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 94 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 95 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 96 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 97 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 98 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 99 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 100 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 101 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 102 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 103 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 104 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 105 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 106 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 107 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 110 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 111 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 112 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 113 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 114 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 115 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 116 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 118 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 119 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 121 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 122 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 123 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 124 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 125 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 126 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 127 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 128 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 129 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 130 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 131 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 132 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 133 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_2
# 134 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 135 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_25
# 136 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 137 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_3
# 138 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 139 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_26
# 140 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 141 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 142 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 143 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 144 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 145 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 146 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 147 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, upset
# 148 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, happy
# 149 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 150 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 151 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 152 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 153 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 154 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 156 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 157 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 158 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_USUAL_GREEN
# 159 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_UNUSUAL_RED
# 160 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 161 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 162 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 165 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 166 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 168 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 169 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 171 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 173 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 176 "data/maps/LuxuraIsland/scripts.pory"
in:
# 177 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 177 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 177 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 178 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 180 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 181 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 183 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 184 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 186 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 187 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 187 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 187 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 187 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 188 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 190 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 192 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 193 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 194 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 196 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 197 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 198 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 200 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 201 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 202 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 204 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 209 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 210 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 212 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 214 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 215 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 216 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 220 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 223 "data/maps/LuxuraIsland/scripts.pory"
move:
# 224 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 227 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 229 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 230 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 230 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 234 "data/maps/LuxuraIsland/scripts.pory"
run:
# 235 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 236 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 238 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 239 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 239 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 239 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 239 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 244 "data/maps/LuxuraIsland/scripts.pory"
face:
# 245 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 246 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 248 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 251 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 252 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 253 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 255 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 256 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 262 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 263 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 264 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 265 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 268 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 269 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 270 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 272 "data/maps/LuxuraIsland/scripts.pory"
player:
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 274 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 276 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 278 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 281 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 282 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 285 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 286 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 287 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 288 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 289 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 290 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 291 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 292 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 293 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 294 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 295 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 296 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 297 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 298 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 299 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 300 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 301 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 302 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 305 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 306 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 307 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 310 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 311 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 313 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 314 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 318 "data/maps/LuxuraIsland/scripts.pory"
io:
# 319 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 319 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 322 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 323 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 324 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 329 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 330 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 331 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 332 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 333 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 334 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 335 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 336 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 337 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 338 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 339 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 340 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 341 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 342 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 343 "data/maps/LuxuraIsland/scripts.pory"
	release
# 344 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 347 "data/maps/LuxuraIsland/scripts.pory"
str:
# 348 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 348 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 351 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 360 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 361 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 362 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_3
# 363 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 364 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 365 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 366 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 352 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 353 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 354 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 355 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 356 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 357 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 370 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 375 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 376 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 385 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 394 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 402 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 412 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 422 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 434 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 443 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 456 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 378 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 379 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 380 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 381 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 382 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 383 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 386 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 387 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 388 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 389 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 390 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 391 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 392 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 395 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 396 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 397 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 398 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 399 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 400 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 403 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 404 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 405 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 406 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 407 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 408 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 409 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 410 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 413 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 414 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 415 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 416 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 417 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 418 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 419 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 420 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 423 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 424 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 425 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 426 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 427 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 428 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 429 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 430 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 431 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 432 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 435 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 436 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 437 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 438 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 439 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 440 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 441 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 444 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 445 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 446 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 447 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 448 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 449 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 450 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 451 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 452 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 453 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 457 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 458 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 459 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 460 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 461 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 462 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 463 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 464 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 465 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 466 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 434 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 422 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 412 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 471 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 472 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 473 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 474 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 475 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 477 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 480 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 481 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 482 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 483 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 487 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 488 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 489 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 490 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 494 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 495 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 496 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 497 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 500 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 504 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 505 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 501 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 511 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 512 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 513 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 514 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 515 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 516 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 517 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 518 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_9
bloodsee_8:
# 521 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_3
# 524 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_4
# 527 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_5
bloodsee_1:
# 530 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 531 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 532 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 533 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 534 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 535 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 536 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 519 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 520 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
	goto bloodsee_1

bloodsee_3:
# 522 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 523 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
	goto bloodsee_1

bloodsee_4:
# 525 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 526 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
	goto bloodsee_1

bloodsee_5:
# 528 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 529 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
	goto bloodsee_1

bloodsee_9:
# 518 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_2
	goto bloodsee_8


blo::
# 540 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 541 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 542 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 543 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 544 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 549 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 550 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 551 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 552 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 558 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 559 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 560 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 561 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 562 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 564 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 567 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 568 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 569 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 572 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 573 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 574 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 577 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 578 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 579 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 583 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 584 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 585 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 589 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 590 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 591 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 595 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 596 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 597 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 601 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 602 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 603 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 604 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 605 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 607 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 610 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 611 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 614 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 615 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 616 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 617 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 618 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 620 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 624 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 625 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 626 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 627 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 628 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 629 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 631 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 632 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 633 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 634 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 635 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 636 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 637 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 639 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 640 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 641 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 642 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 643 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 644 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 645 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 647 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 648 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 649 "data/maps/LuxuraIsland/scripts.pory"
	release
# 650 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 651 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 654 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 655 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 657 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 658 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 659 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 661 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 662 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 70 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_0:
# 70 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 72 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_1:
# 72 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 72 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 133 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_2:
# 133 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 137 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_3:
# 137 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 330 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 330 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 339 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 339 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 339 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 339 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 340 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 340 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 340 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 519 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 519 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 522 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 522 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 523 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 525 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 525 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 528 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 528 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

ran_Text_0:
# 32 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}There! Just how I imagined it.$"

ran_Text_1:
# 35 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow, Lady Mira! You really have a talent\n"
	.string "for this.\p"
	.string "It turned out beautifully.$"

ran_Text_2:
# 37 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Oh, no no-it's your effort that brought\n"
	.string "it to life.$"

ran_Text_3:
# 39 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}MIIIIIRAAAA!!$"

ran_Text_4:
# 48 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You lied about the pancakes! I ran down\n"
	.string "like a chicken-then everyone laughed\l"
	.string "at me!\p"
	.string "You know Dad would never allow it.\p"
	.string "You're not getting away with this!$"

ran_Text_5:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar! But I couldn't\n"
	.string "help myself.\p"
	.string "You should've seen your face-it was\n"
	.string "priceless!$"

ran_Text_6:
# 52 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 58 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're not getting off that easy!$"

ran_Text_8:
# 62 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 68 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!!$"

ran_Text_10:
# 76 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Ahh-Oh no!!$"

ran_Text_11:
# 81 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This definitely wasn't part of the\n"
	.string "plan...$"

ran_Text_12:
# 83 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.$"

ran_Text_13:
# 85 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm the one who has to pull\n"
	.string "you out now, huh?$"

ran_Text_14:
# 90 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Here, take my hand.$"

ran_Text_15:
# 92 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Thank you, Master Xylar.$"

ran_Text_16:
# 100 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}HEY! Mira! What was that?!$"

ran_Text_17:
# 105 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You said you wanted to help me, didn't\n"
	.string "you?\p"
	.string "Well… now we're both in the water!$"

ran_Text_18:
# 118 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_19:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Totally worth it.\p"
	.string "We won't have moments like this once\n"
	.string "you leave for the Academy...$"

ran_Text_20:
# 122 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels weird knowing I'll be away from\n"
	.string "everyone.\p"
	.string "I guess I'm... a little nervous.$"

ran_Text_21:
# 124 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "Xylar.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back-I'll make real\n"
	.string "pancakes. No tricks this time..$"

ran_Text_22:
# 126 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_23:
# 128 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_24:
# 130 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And... uh, don't talk to the gardener\n"
	.string "again, okay?$"

ran_Text_25:
# 135 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't like the way he looks at you.$"

ran_Text_26:
# 139 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Oh? Are you getting jealous, Master\n"
	.string "Xylar?$"

ran_Text_27:
# 141 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}What?! N-No! I just…$"

ran_Text_28:
# 143 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're cute when you're flustered.$"

ran_Text_29:
# 145 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ughh, I hate you.$"

ran_Text_30:
# 150 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Relax, I was just teasing.$"

ran_Text_31:
# 152 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on-before we both catch a\n"
	.string "cold$"

trig1_Text_0:
# 264 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 294 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 296 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 333 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 336 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 364 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 475 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 482 "data/maps/LuxuraIsland/scripts.pory"
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
# 489 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 496 "data/maps/LuxuraIsland/scripts.pory"
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
# 505 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 514 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 515 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 533 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 562 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 568 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 573 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 578 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 584 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 590 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 596 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 618 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 629 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 637 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 645 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 648 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 241 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
