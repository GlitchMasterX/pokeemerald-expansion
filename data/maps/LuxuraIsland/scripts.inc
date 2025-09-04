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
	addobject 21, MAP_LUXURA_ISLAND
# 26 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_0
# 27 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 29 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 30 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 31 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 32 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 33 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 34 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 36 "data/maps/LuxuraIsland/scripts.pory"
	speakername gardener
# 37 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 38 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 39 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 41 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 42 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
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
# 51 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 52 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 53 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 54 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 55 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 56 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 57 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 58 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 59 "data/maps/LuxuraIsland/scripts.pory"
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
	speakername Xylar1
# 70 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10, MSGBOX_AUTOCLOSE
# 71 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 72 "data/maps/LuxuraIsland/scripts.pory"
	addobject 22, MAP_LUXURA_ISLAND
# 73 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_1
# 74 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 75 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 76 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 77 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 78 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 79 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_2
# 80 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 81 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_3
# 82 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_4
# 83 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_IN
# 84 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 85 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_5
# 86 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 87 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_0
# 88 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_0
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_0
# 90 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 92 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_6
# 93 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 94 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 95 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 96 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 97 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_7
# 98 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_8
# 99 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 100 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_9
# 101 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_9
# 102 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 103 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_OUT
# 104 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, visible
# 105 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_10
# 106 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 107 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 108 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 109 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 110 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 111 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 112 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_11
# 113 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 114 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 115 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_0
# 116 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 117 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 118 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 119 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 121 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 122 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 123 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 124 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_6
# 125 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_12
# 126 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_6
# 127 "data/maps/LuxuraIsland/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 128 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 129 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 130 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 131 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 132 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_13
# 133 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 134 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 135 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 136 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_14
# 137 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 138 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 140 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 141 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 142 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 143 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 144 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 145 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 146 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 147 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 148 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 149 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 150 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 151 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 152 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 153 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 155 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 156 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 157 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 158 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 159 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 160 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_25
# 161 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 162 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_26
# 163 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 164 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 165 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_15
# 166 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 167 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 168 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 169 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_6
# 170 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 171 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 172 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 173 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 174 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 175 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 176 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 177 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 178 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 179 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, upset
# 180 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, happy
# 181 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 182 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_32
# 183 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 184 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_33
# 185 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 186 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 188 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 189 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 190 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_USUAL_GREEN
# 191 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_UNUSUAL_RED
# 192 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 193 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 194 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 198 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 199 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 201 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 202 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 204 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 205 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 206 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 209 "data/maps/LuxuraIsland/scripts.pory"
in:
# 210 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 210 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 210 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 211 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 213 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 214 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 215 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 216 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 217 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 219 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 220 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 221 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 222 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 224 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 225 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 226 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 228 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 229 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 230 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 232 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 233 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 236 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 240 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 241 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 242 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 244 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 245 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 246 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 247 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 248 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 249 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 252 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 253 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 255 "data/maps/LuxuraIsland/scripts.pory"
move:
# 256 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 258 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 260 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 261 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 261 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 262 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 264 "data/maps/LuxuraIsland/scripts.pory"
run:
# 265 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 266 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 268 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 274 "data/maps/LuxuraIsland/scripts.pory"
face:
# 275 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 276 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 278 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 279 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 279 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 279 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 279 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 282 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 283 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 285 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 286 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 292 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 293 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 294 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 297 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 298 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 299 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 301 "data/maps/LuxuraIsland/scripts.pory"
player:
# 302 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 303 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 305 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 306 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 306 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 307 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 310 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 311 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 314 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 315 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 316 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 317 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 318 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 319 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 320 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 321 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 322 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 323 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 324 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 325 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 326 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 327 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 329 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 330 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 331 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 334 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 335 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 336 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 338 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 339 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 340 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 342 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 343 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 347 "data/maps/LuxuraIsland/scripts.pory"
io:
# 348 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 348 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 352 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 353 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 358 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 359 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 360 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 361 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 362 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 363 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 364 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 365 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 366 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 367 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 368 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 369 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 370 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 371 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 372 "data/maps/LuxuraIsland/scripts.pory"
	release
# 373 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 376 "data/maps/LuxuraIsland/scripts.pory"
str:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 377 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 380 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 389 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 390 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 391 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_6
# 392 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 393 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 394 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 395 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 381 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 382 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 383 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 384 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 385 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 386 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 399 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 400 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 400 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 400 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 404 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 405 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 414 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 423 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 431 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 441 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 451 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 463 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 472 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 485 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 406 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 407 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 408 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 409 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 410 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 411 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 412 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 415 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 416 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 417 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 418 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 419 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 420 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 421 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 424 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 425 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 426 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 427 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 428 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 429 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 433 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 434 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 435 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 436 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 437 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 438 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 439 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 442 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 443 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 444 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 445 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 446 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 447 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 448 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 449 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 452 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 453 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 454 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 455 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 456 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 457 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 458 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 459 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 460 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 464 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 465 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 466 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 467 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 468 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 469 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 470 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 473 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 474 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 475 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 476 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 477 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 478 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 479 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 480 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 481 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 482 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 486 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 487 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 488 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 489 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 490 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 491 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 492 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 493 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 494 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 495 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 463 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 451 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 441 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 500 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 501 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 502 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 503 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 504 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 509 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 510 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 511 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 512 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 516 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 517 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 518 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 519 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 523 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 524 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 525 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 526 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 529 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 533 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 534 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 535 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 530 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 540 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 541 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 542 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 543 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 544 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 545 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 546 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 547 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_9
bloodsee_8:
# 550 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_3
# 553 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_4
# 556 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_5
bloodsee_1:
# 559 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 560 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 561 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 562 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 563 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 564 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 565 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 548 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 549 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
	goto bloodsee_1

bloodsee_3:
# 551 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 552 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
	goto bloodsee_1

bloodsee_4:
# 554 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 555 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
	goto bloodsee_1

bloodsee_5:
# 557 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 558 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
	goto bloodsee_1

bloodsee_9:
# 547 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_2
	goto bloodsee_8


blo::
# 569 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 570 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 571 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 572 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 573 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 578 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 579 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 580 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 581 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 587 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 588 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 589 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 590 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 591 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 593 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 596 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 597 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 598 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 601 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 602 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 603 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 606 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 607 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 608 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 612 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 613 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 614 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 618 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 619 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 620 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 624 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 625 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 626 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 630 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 631 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 632 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 633 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 634 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 636 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 639 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 640 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 643 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 644 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 645 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 646 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 647 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 649 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 653 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 654 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 655 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 656 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 657 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 658 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 660 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 661 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 662 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 663 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 664 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 665 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 666 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 668 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 669 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 670 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 671 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 672 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 673 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 674 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 676 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 677 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 678 "data/maps/LuxuraIsland/scripts.pory"
	release
# 679 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 680 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 683 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 684 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 686 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 687 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 688 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 690 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 691 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_0:
# 26 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 73 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_1:
# 73 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 73 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 73 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 73 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 79 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_2:
# 79 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 81 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_3:
# 81 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 82 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_4:
# 82 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 85 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_5:
# 85 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 85 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 85 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 92 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_6:
# 92 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 97 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_7:
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 97 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 98 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_8:
# 98 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 98 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 98 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 98 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 98 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_9:
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 105 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_10:
# 105 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 105 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 105 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 112 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_11:
# 112 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 112 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 112 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 125 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_12:
# 125 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 125 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 132 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_13:
# 132 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 132 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
	step_end

# 136 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_14:
# 136 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 165 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_15:
# 165 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 359 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 368 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 368 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 368 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 368 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 369 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 369 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 369 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 548 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 548 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 551 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 551 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 552 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 552 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 554 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 554 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 557 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 557 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

ran_Text_0:
# 34 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}There! Just how I imagined it.$"

ran_Text_1:
# 37 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow, Lady Mira! You really have a talent\n"
	.string "for this.\p"
	.string "It turned out beautifully.$"

ran_Text_2:
# 39 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Oh, no no-it's your effort that brought\n"
	.string "it to life.$"

ran_Text_3:
# 41 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}MIIIIIRAAAA!!$"

ran_Text_4:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You lied about the pancakes! I ran down\n"
	.string "like a chicken-then everyone laughed\l"
	.string "at me!\p"
	.string "You know Dad would never allow it.\p"
	.string "You're not getting away with this!$"

ran_Text_5:
# 52 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar! But I couldn't\n"
	.string "help myself.\p"
	.string "You should've seen your face-it was\n"
	.string "priceless!$"

ran_Text_6:
# 54 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 59 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're not getting off that easy!$"

ran_Text_8:
# 62 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 68 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!!\p"
	.string "Wait… if Lady Elysia sees you chasing\n"
	.string "me like this in the cold, she'll ground\l"
	.string "you, Master Xylar!$"

ran_Text_10:
# 70 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

ran_Text_11:
# 74 "data/maps/LuxuraIsland/scripts.pory"
	.string "Hoopa$"

ran_Text_12:
# 75 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_NORMAL}.......$"

ran_Text_13:
# 94 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_JOY}.......$"

ran_Text_14:
# 108 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This definitely wasn't part of the\n"
	.string "plan...$"

ran_Text_15:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}HEY! Mira! What was that?!$"

ran_Text_16:
# 117 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-what the-?! The pool?!\p"
	.string "Mira!! this is all your fault!$"

ran_Text_17:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Ehh?! Don't blame me!\p"
	.string "I didn't do it!……\p"
	.string "But you look like a drenched Torchic,\n"
	.string "Master Xylar!$"

ran_Text_18:
# 122 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}A-a Torchic?!\p"
	.string "Why you-!!\p"
	.string "If Mom sees us dripping wet, we're both\n"
	.string "in trouble!$"

ran_Text_19:
# 134 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey!! Come back here, you floating\n"
	.string "donut!!$"

ran_Text_20:
# 149 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe Hoopa did that!\p"
	.string "Now we're both soaked…\p"
	.string "Tch-one day, I'm gonna catch that\n"
	.string "troublemaker!$"

ran_Text_21:
# 151 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Pfft-totally worth it!\p"
	.string "Besides… we won't get moments like this\n"
	.string "once you leave for the Academy.$"

ran_Text_22:
# 153 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah…\p"
	.string "It feels strange knowing I'll be away\n"
	.string "from everyone.\p"
	.string "I guess I'm… kinda nervous.$"

ran_Text_23:
# 156 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "Xylar.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back-I'll make real\n"
	.string "pancakes this time.\n"
	.string "No tricks, I swear.$"

ran_Text_24:
# 158 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_25:
# 160 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_26:
# 162 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And… uh… maybe don't talk to that\n"
	.string "gardener again, okay?$"

ran_Text_27:
# 167 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't like the way he looks at you.$"

ran_Text_28:
# 171 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Oh? Is Master Xylar jealous?$"

ran_Text_29:
# 173 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-?! N-No! I just-=\p"
	.string "That's not-!$"

ran_Text_30:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Haha, you're cute when you're flustered.$"

ran_Text_31:
# 177 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ughhh… I hate you.$"

ran_Text_32:
# 182 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Relax, I'm just teasing.$"

ran_Text_33:
# 184 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on-before we both catch a\n"
	.string "cold.$"

indoor_Text_0:
# 323 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 325 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 362 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 365 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 393 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 504 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 511 "data/maps/LuxuraIsland/scripts.pory"
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
# 518 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 525 "data/maps/LuxuraIsland/scripts.pory"
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
# 534 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 543 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 544 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 562 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 591 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 597 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 602 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 607 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 613 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 619 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 625 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 647 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 658 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 666 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 674 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 677 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 271 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
