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
	warp MAP_LUXURA_INDOOR, 14, 41
# 159 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 160 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 163 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 164 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 166 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 167 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 169 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 170 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 170 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 170 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 171 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 174 "data/maps/LuxuraIsland/scripts.pory"
in:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 175 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 175 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 176 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 178 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 180 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 180 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 181 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 182 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 184 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 187 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 188 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 190 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 191 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 192 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 194 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 196 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 198 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 199 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 200 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 202 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 206 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 207 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 208 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 210 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 211 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 212 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 213 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 214 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 218 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 219 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/LuxuraIsland/scripts.pory"
move:
# 222 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 224 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 225 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 227 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 230 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 232 "data/maps/LuxuraIsland/scripts.pory"
run:
# 233 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 234 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 236 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/LuxuraIsland/scripts.pory"
face:
# 243 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 244 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 246 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 247 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 249 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 250 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 251 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 253 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 254 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 255 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 255 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 260 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 261 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 262 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 263 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 266 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 267 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 268 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 270 "data/maps/LuxuraIsland/scripts.pory"
player:
# 271 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 272 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 274 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 275 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 275 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 276 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 279 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 280 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 283 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 284 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 285 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 286 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 287 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 288 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 289 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 290 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 291 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 292 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 293 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 294 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 295 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 296 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 297 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 298 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 299 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 300 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 303 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 304 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 305 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 307 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 308 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 309 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 311 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 312 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 316 "data/maps/LuxuraIsland/scripts.pory"
io:
# 317 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 317 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 320 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 321 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 322 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 327 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 328 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 329 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 330 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 331 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 332 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 333 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 334 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 335 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 336 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 337 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 338 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 339 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 340 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 341 "data/maps/LuxuraIsland/scripts.pory"
	release
# 342 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 345 "data/maps/LuxuraIsland/scripts.pory"
str:
# 346 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 346 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 349 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 358 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 359 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 360 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_3
# 361 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 362 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 363 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 364 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 350 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 351 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 352 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 353 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 354 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 355 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 368 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 369 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 369 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 369 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 373 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 374 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 383 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 392 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 400 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 410 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 420 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 441 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 454 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 375 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 376 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 377 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 378 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 379 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 380 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 381 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 384 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 385 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 386 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 387 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 388 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 389 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 390 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 393 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 394 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 395 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 396 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 397 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 398 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 401 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 402 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 403 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 404 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 405 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 406 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 407 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 408 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 411 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 412 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 413 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 414 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 415 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 416 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 417 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 418 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 421 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 422 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 423 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 424 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 425 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 426 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 427 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 428 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 429 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 430 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 433 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 434 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 435 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 436 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 437 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 438 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 439 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 442 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 443 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 444 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 445 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 446 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 447 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 448 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 449 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 450 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 451 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 455 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 456 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 457 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 458 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 459 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 460 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 462 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 463 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 464 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 420 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 410 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 469 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 470 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 471 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 472 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 473 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 475 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 478 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 479 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 480 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 481 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 485 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 486 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 487 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 488 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 492 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 493 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 494 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 495 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 498 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 502 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 503 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 504 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 499 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 509 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 510 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 511 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 512 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 513 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 514 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 515 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 516 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_9
bloodsee_8:
# 519 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_3
# 522 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_4
# 525 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_5
bloodsee_1:
# 528 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 529 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 530 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 531 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 532 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 533 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 534 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 517 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 518 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
	goto bloodsee_1

bloodsee_3:
# 520 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 521 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
	goto bloodsee_1

bloodsee_4:
# 523 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 524 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
	goto bloodsee_1

bloodsee_5:
# 526 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 527 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
	goto bloodsee_1

bloodsee_9:
# 516 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_2
	goto bloodsee_8


blo::
# 538 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 539 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 540 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 541 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 542 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 547 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 548 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 549 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 550 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 556 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 557 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 558 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 559 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 560 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 562 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 565 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 566 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 567 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 570 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 571 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 572 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 575 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 576 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 577 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 581 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 582 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 583 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 587 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 588 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 589 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 593 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 594 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 595 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 599 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 600 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 601 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 602 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 603 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 605 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 608 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 609 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 612 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 613 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 614 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 615 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 616 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 618 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 622 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 623 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 624 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 625 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 626 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 627 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 629 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 630 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 631 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 632 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 633 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 634 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 635 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 637 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 638 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 639 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 640 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 641 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 642 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 643 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 645 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 646 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 647 "data/maps/LuxuraIsland/scripts.pory"
	release
# 648 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 649 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 652 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 653 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 655 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 656 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 657 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 659 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 660 "data/maps/LuxuraIsland/scripts.pory"
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

# 328 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 328 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 337 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 337 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 337 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 337 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 338 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 338 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 338 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 517 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 517 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 520 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 520 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 521 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 521 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 523 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
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
# 523 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 526 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 526 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 526 "data/maps/LuxuraIsland/scripts.pory"
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
# 262 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 292 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 294 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 331 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 334 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 362 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 473 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 480 "data/maps/LuxuraIsland/scripts.pory"
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
# 487 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 494 "data/maps/LuxuraIsland/scripts.pory"
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
# 503 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 512 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 513 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 531 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 560 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 566 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 571 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 576 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 582 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 588 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 594 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 616 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 627 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 635 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 643 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 646 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 239 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
