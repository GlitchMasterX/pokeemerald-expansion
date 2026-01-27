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
	addobject 20, MAP_LUXURA_ISLAND
# 26 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, ran_Movement_0
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
	playse SE_PIN
# 65 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 66 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 67 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 68 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 69 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 70 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 71 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10, MSGBOX_AUTOCLOSE
# 72 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 73 "data/maps/LuxuraIsland/scripts.pory"
	addobject 21, MAP_LUXURA_ISLAND
# 74 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_1
# 75 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 76 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 77 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 78 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 79 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_2
# 81 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 82 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 83 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_open
# 84 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 85 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 86 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_3
# 87 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_IN
# 88 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_4
# 90 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_0
# 92 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_0
# 93 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 94 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_close
# 95 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 96 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 97 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 98 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_5
# 99 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 100 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 101 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 102 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 103 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, ran_Movement_6
# 104 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_7
# 105 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 106 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_8
# 107 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_8
# 108 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 109 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 110 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_open
# 111 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 112 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 113 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_OUT
# 114 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_9
# 115 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 116 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 117 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 118 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 119 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 121 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 122 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_10
# 123 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 124 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 125 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 126 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 127 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_close
# 128 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 129 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 130 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 131 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 132 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 133 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 134 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 135 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 136 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 137 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_5
# 138 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_11
# 139 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_5
# 140 "data/maps/LuxuraIsland/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 141 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 142 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 143 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 144 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 145 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_12
# 146 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 147 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 148 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 149 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_13
# 150 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 151 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 154 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 155 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 156 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 157 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 158 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 159 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 160 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 162 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 163 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 164 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 165 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 166 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 167 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 168 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 169 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 170 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 171 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 172 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_25
# 173 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 174 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_26
# 175 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 176 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 177 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 178 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 179 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 180 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_5
# 181 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 182 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 183 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 184 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_5
# 185 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 186 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 187 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 188 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 189 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 190 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 192 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 193 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 194 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 195 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 196 "data/maps/LuxuraIsland/scripts.pory"
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
	applymovement 0xFD, ran_Movement_5
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
# 444 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 457 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 472 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 485 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 501 "data/maps/LuxuraIsland/scripts.pory"
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
	removeobject 12
# 411 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
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
	removeobject 12
# 420 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
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
	removeobject 12
# 428 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
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
	setmetatile 6, 28, 0x30D, 0
# 437 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 438 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 439 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 440 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 441 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 442 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 445 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 446 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 447 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 448 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 449 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 450 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 451 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 452 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 453 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 454 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 455 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 458 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 459 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 460 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 462 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 463 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 464 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 465 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 466 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 467 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 468 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 469 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 470 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
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
	setmetatile 6, 28, 0x30D, 0
# 480 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 481 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 482 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
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
	setmetatile 6, 28, 0x30D, 0
# 493 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 494 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 495 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 496 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 497 "data/maps/LuxuraIsland/scripts.pory"
	addobject 12
# 498 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 502 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 503 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 504 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 505 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 506 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 507 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 508 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 509 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 510 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 511 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 512 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 513 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 514 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 472 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 457 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 444 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 519 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 520 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 521 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 522 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 523 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 525 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 528 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 529 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 530 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 531 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 535 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 536 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 537 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 538 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 542 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 543 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 544 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 545 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 548 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 552 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 553 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 554 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 549 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 559 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 560 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 561 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 562 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 563 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 564 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 565 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 566 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 567 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_2
# 571 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_3
# 575 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_4
# 579 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_5
# 583 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_6
bloodsee_1:
# 587 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 588 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 589 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 590 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 591 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 592 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 568 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 569 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 570 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_3:
# 572 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 573 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 574 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_4:
# 576 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 577 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
# 578 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_5:
# 580 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 581 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
# 582 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_6:
# 584 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 585 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
# 586 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1


blo::
# 596 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 597 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 598 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 599 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 600 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 605 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 606 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 607 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 608 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 614 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 615 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 616 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 617 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 618 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 620 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 623 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 624 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 625 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 628 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 629 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 630 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 633 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 634 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 635 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 639 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 640 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 641 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 645 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 646 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 647 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 651 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 652 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 653 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 657 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 658 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 659 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 660 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 661 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 663 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 666 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 667 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 670 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 671 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 672 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 673 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 674 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 676 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 680 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 681 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 682 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 683 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 684 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 685 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 686 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 687 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 688 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive1
# 689 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 690 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 691 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 692 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 693 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2
# 694 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 695 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 696 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, exclam
# 697 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 698 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 699 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive2
# 700 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 701 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 702 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3
# 703 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 704 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 705 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive_Movement_0
# 706 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_0
# 707 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_1
# 708 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 709 "data/maps/LuxuraIsland/scripts.pory"
	delay 60
# 710 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 711 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 712 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_4
# 713 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 714 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 715 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_2
# 716 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 717 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 718 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 719 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_3
# 720 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 721 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 722 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 723 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 724 "data/maps/LuxuraIsland/scripts.pory"
	release
# 725 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 726 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 728 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 731 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 732 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 733 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 735 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 736 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_0:
# 26 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 74 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_1:
# 74 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 74 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 74 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 74 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 80 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_2:
# 80 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 86 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_3:
# 86 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 89 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_4:
# 89 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 89 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 89 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 98 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_5:
# 98 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 103 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_6:
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 104 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_7:
# 104 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 104 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 104 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 104 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 104 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 106 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_8:
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 106 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 114 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_9:
# 114 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 114 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 114 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 114 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 122 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_10:
# 122 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 122 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 122 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 138 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_11:
# 138 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 138 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 145 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_12:
# 145 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 145 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
	step_end

# 149 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_13:
# 149 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
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

# 568 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 568 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 576 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 576 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 577 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 577 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 580 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 580 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 584 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 584 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 705 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_0:
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 705 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 707 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_1:
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 707 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 715 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_2:
# 715 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 719 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_3:
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master {PLAYER}! But I\n"
	.string "couldn't help myself.\p"
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master {PLAYER}.$"

ran_Text_9:
# 69 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!!\p"
	.string "Wait… if Mom sees you chasing me like\n"
	.string "this in the cold, she'll ground you,\l"
	.string "Master {PLAYER}!$"

ran_Text_10:
# 71 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

ran_Text_11:
# 75 "data/maps/LuxuraIsland/scripts.pory"
	.string "Hoopa$"

ran_Text_12:
# 76 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_NORMAL}.......$"

ran_Text_13:
# 100 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_JOY}.......$"

ran_Text_14:
# 118 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This definitely wasn't part of the\n"
	.string "plan...$"

ran_Text_15:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}HEY! Mira! What was that?!$"

ran_Text_16:
# 130 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-what the-?! The pool?!\p"
	.string "Mira!! this is all your fault!$"

ran_Text_17:
# 133 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Ehh?! Don't blame me!\p"
	.string "I didn't do it!……\p"
	.string "But you look like a drenched Torchic,\n"
	.string "Master {PLAYER}!$"

ran_Text_18:
# 135 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_BLUSH}{COLOR BLUE}{SHADOW LIGHT_GRAY}A-a Torchic?!\p"
	.string "Why you-!!\p"
	.string "If Mom sees us dripping wet, we're both\n"
	.string "in trouble!$"

ran_Text_19:
# 147 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey!! Come back here, you floating\n"
	.string "donut!!$"

ran_Text_20:
# 162 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe Hoopa did that!\p"
	.string "Now we're both soaked…\p"
	.string "Tch-one day, I'm gonna catch that\n"
	.string "troublemaker!$"

ran_Text_21:
# 164 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Pfft, totally worth it!\p"
	.string "Besides… we won't get moments like this\n"
	.string "once you leave for the Academy.$"

ran_Text_22:
# 166 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah…\p"
	.string "It feels strange knowing I'll be away\n"
	.string "from everyone.\p"
	.string "I guess I'm… kinda nervous.$"

ran_Text_23:
# 168 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "{PLAYER}.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back, I'll make real\n"
	.string "pancakes this time.\n"
	.string "No tricks, I swear.$"

ran_Text_24:
# 170 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_25:
# 172 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_26:
# 174 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira... You know you don't have to keep\n"
	.string "doing this.\p"
	.string "All the maid stuff...\p"
	.string "Mom and Dad also don't want you to live\n"
	.string "as a maid.$"

ran_Text_27:
# 176 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}You see Master {PLAYER}...\p"
	.string "I lost my entire family during the war.\p"
	.string "But Mom and Dad adopted and took care\n"
	.string "of me.$"

ran_Text_28:
# 178 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}I know they don't ask this of me… but I\n"
	.string "want to.\p"
	.string "It's the least I can do to repay your\n"
	.string "parents.$"

ran_Text_29:
# 182 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}They're not just my parents.\p"
	.string "They are your parents too.$"

ran_Text_30:
# 186 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Yes... they are.$"

ran_Text_31:
# 188 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on, let's go inside before we\n"
	.string "both catch a cold.\p"
	.string "Or else Mom will scold us.$"

indoor_Text_0:
# 323 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master {PLAYER}, You should take a\n"
	.string "bath and get changed before mother\l"
	.string "sees you like this.$"

indoor_Text_1:
# 325 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 362 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master {PLAYER}.$"

stroll_Text_1:
# 365 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 393 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master {PLAYER}, I'll\n"
	.string "always be with you.$"

strolll_Text_0:
# 523 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master {PLAYER}.$"

Sailor_Text_0:
# 530 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master {PLAYER}, I have to tell you,\n"
	.string "your father is one of the bravest men\l"
	.string "I've ever known.\p"
	.string "The way he stood up against the Dark\n"
	.string "Force to protect us all, I've never seen\l"
	.string "courage like that.\p"
	.string "Without him, who knows what would have\n"
	.string "happened?\p"
	.string "He's a true hero, and it's an honor to\n"
	.string "serve him.$"

sailorr_Text_0:
# 537 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master {PLAYER}!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 544 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master {PLAYER}, I'll never forget the\n"
	.string "day your Father faced the Dark Force.\p"
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
# 553 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 563 "data/maps/LuxuraIsland/scripts.pory"
	.string "{PLAYER}$"

bloodsee_Text_1:
# 564 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 589 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master {PLAYER}, Don't look at it.\n"
	.string "You're too young to see something like\l"
	.string "this... Please, just trust me and let's go\l"
	.string "back inside.$"

strollll_Text_0:
# 618 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 624 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 629 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 634 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 640 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 646 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 652 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 674 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master {PLAYER}.$"

alistairarrive_Text_0:
# 684 "data/maps/LuxuraIsland/scripts.pory"
	.string "???$"

alistairarrive_Text_1:
# 685 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_2:
# 693 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_3:
# 702 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_4:
# 712 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther...Elysia...Please be safe.$"

gardener::
# 271 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
