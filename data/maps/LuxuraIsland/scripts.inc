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
# 168 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 169 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 170 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 171 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 172 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 173 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_25
# 174 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 175 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_26
# 176 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 177 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 178 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_14
# 179 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 180 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 181 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 182 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_5
# 183 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 184 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 185 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 186 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 187 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 188 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 189 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 190 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 191 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 192 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, upset
# 193 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, happy
# 194 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 195 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_32
# 196 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 197 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_33
# 198 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 199 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 201 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 202 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 203 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 204 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 205 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 209 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 210 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 212 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 213 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 215 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 217 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 220 "data/maps/LuxuraIsland/scripts.pory"
in:
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 222 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 224 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 225 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 228 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 230 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 231 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 233 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 235 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 236 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 237 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 239 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 240 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 241 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 243 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 244 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 245 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 247 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 248 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 248 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 251 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 252 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 253 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 255 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 256 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 257 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 258 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 259 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 260 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 263 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 264 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 266 "data/maps/LuxuraIsland/scripts.pory"
move:
# 267 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 271 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 272 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 272 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 275 "data/maps/LuxuraIsland/scripts.pory"
run:
# 276 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 277 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 279 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 280 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 280 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 280 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 280 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 285 "data/maps/LuxuraIsland/scripts.pory"
face:
# 286 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 287 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 289 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 292 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 293 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 296 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 297 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 298 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 298 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 303 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 304 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 305 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 308 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 309 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 310 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 312 "data/maps/LuxuraIsland/scripts.pory"
player:
# 313 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 314 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 316 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 317 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 317 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 318 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 321 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 322 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 325 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 326 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 327 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 328 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 329 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 330 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 331 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 332 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 333 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 334 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 335 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 336 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 337 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 338 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 339 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 340 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 341 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 342 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 345 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 346 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 347 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 349 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 350 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 351 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 353 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 354 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 358 "data/maps/LuxuraIsland/scripts.pory"
io:
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 359 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 363 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 364 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 369 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 370 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 371 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 372 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 373 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 374 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 375 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 376 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 377 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 378 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 379 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 380 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 381 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 382 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 383 "data/maps/LuxuraIsland/scripts.pory"
	release
# 384 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 387 "data/maps/LuxuraIsland/scripts.pory"
str:
# 388 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 388 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 391 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 400 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 401 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 402 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_5
# 403 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 404 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 405 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 406 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 392 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 393 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 394 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 395 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 396 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 397 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 410 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 411 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 411 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 411 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 415 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 416 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 425 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 434 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 442 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 455 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 468 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 483 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 496 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 512 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 417 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 418 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 419 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 420 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 421 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 422 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 423 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 426 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 427 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 428 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 429 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 430 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 431 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 432 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 435 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 436 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 437 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 438 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 439 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 440 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 443 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 444 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 445 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 446 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 447 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 448 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 449 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 450 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 451 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 452 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 453 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 456 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 457 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 458 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 459 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 460 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 462 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 463 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 464 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 465 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 466 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 469 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 470 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 471 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 472 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 473 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 474 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 475 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 476 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 477 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 478 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 479 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 480 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 481 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 484 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 485 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 486 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 487 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 488 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 489 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 490 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 491 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 492 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 493 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 497 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 498 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 499 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 500 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 501 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 502 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 503 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 504 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 505 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 507 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 508 "data/maps/LuxuraIsland/scripts.pory"
	addobject 12
# 509 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 513 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 514 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 515 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 516 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 517 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 518 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 519 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 520 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 521 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 522 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 523 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 524 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 525 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 483 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 468 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 455 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 530 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 531 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 532 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 533 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 534 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 536 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 539 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 540 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 541 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 542 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 546 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 547 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 548 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 549 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 553 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 554 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 555 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 556 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 559 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 563 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 564 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 565 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 560 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 570 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 571 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 572 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 573 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 574 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 575 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 576 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 577 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 578 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_2
# 582 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_3
# 586 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_4
# 590 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_5
# 594 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_6
bloodsee_1:
# 598 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 599 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 600 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 601 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 602 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 603 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 579 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 580 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 581 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_3:
# 583 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 584 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 585 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_4:
# 587 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 588 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
# 589 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_5:
# 591 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 592 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
# 593 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_6:
# 595 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 596 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
# 597 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1


blo::
# 607 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 608 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 609 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 610 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 611 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 616 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 617 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 618 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 619 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 625 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 626 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 627 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 628 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 629 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 631 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 634 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 635 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 636 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 639 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 640 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 641 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 644 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 645 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 646 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 650 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 651 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 652 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 656 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 657 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 658 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 662 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 663 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 664 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 668 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 669 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 670 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 671 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 672 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 674 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 677 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 678 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 681 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 682 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 683 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 684 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 685 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 687 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 691 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 692 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 693 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 694 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 695 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 696 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 697 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 698 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 699 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive1
# 700 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 701 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 702 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 703 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 704 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2
# 705 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 706 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 707 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, exclam
# 708 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 709 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 710 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive2
# 711 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 712 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 713 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3
# 714 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 715 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 716 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive_Movement_0
# 717 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_0
# 718 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_1
# 719 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 720 "data/maps/LuxuraIsland/scripts.pory"
	delay 60
# 721 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 722 "data/maps/LuxuraIsland/scripts.pory"
	speakername alistairarrive_Text_0
# 723 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_4
# 724 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 725 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 726 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_2
# 727 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 728 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 729 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 730 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_3
# 731 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 732 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 733 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 734 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 735 "data/maps/LuxuraIsland/scripts.pory"
	release
# 736 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 737 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 739 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 740 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 742 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 743 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 744 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 746 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 747 "data/maps/LuxuraIsland/scripts.pory"
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

# 178 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_14:
# 178 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 370 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 370 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 379 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 379 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 379 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 379 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 380 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 380 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 380 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 579 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 579 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 587 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 587 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 588 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 588 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 591 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 591 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 595 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 595 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 716 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_0:
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 716 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 718 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_1:
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 718 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 726 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_2:
# 726 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 730 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_3:
# 730 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIsland/scripts.pory"
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
# 69 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!!\p"
	.string "Wait… if Lady Elysia sees you chasing\n"
	.string "me like this in the cold, she'll ground\l"
	.string "you, Master Xylar!$"

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
	.string "Master Xylar!$"

ran_Text_18:
# 135 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}A-a Torchic?!\p"
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Pfft-totally worth it!\p"
	.string "Besides… we won't get moments like this\n"
	.string "once you leave for the Academy.$"

ran_Text_22:
# 166 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah…\p"
	.string "It feels strange knowing I'll be away\n"
	.string "from everyone.\p"
	.string "I guess I'm… kinda nervous.$"

ran_Text_23:
# 169 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "Xylar.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back-I'll make real\n"
	.string "pancakes this time.\n"
	.string "No tricks, I swear.$"

ran_Text_24:
# 171 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_25:
# 173 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_26:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And… uh… maybe don't talk to that\n"
	.string "gardener again, okay?$"

ran_Text_27:
# 180 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't like the way he looks at you.$"

ran_Text_28:
# 184 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Oh? Is Master Xylar jealous?$"

ran_Text_29:
# 186 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-?! N-No! I just-\p"
	.string "That's not-!$"

ran_Text_30:
# 188 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Haha, you're cute when you're flustered.$"

ran_Text_31:
# 190 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ughhh… I hate you.$"

ran_Text_32:
# 195 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Relax, I'm just teasing.$"

ran_Text_33:
# 197 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on-before we both catch a\n"
	.string "cold.$"

indoor_Text_0:
# 334 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before mother sees you\l"
	.string "like this.$"

indoor_Text_1:
# 336 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 373 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 376 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 404 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 534 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 541 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I have to tell you, your\n"
	.string "father is one of the bravest men I've\l"
	.string "ever known.\p"
	.string "The way he stood up against the Dark\n"
	.string "Force to protect us all, I've never seen\l"
	.string "courage like that.\p"
	.string "Without him, who knows what would have\n"
	.string "happened?\p"
	.string "He's a true hero, and it's an honor to\n"
	.string "serve him.$"

sailorr_Text_0:
# 548 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 555 "data/maps/LuxuraIsland/scripts.pory"
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
# 564 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 574 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 575 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 600 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 629 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 635 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 640 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 645 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 651 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 657 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 663 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 685 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 695 "data/maps/LuxuraIsland/scripts.pory"
	.string "???$"

alistairarrive_Text_1:
# 696 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_2:
# 704 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_3:
# 713 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_4:
# 723 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther...Elysia...Please be safe.$"

gardener::
# 282 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
