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
	addobject 21, MAP_LUXURA_ISLAND
# 73 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_1
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
	playse SE_M_TELEPORT
# 82 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_open
# 83 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 84 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 85 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_3
# 86 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_IN
# 87 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 88 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_4
# 89 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 90 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_0
# 92 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 93 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_close
# 94 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 95 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 96 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 97 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_5
# 98 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 99 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 100 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 101 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 102 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, ran_Movement_6
# 103 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_7
# 104 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 105 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_8
# 106 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_8
# 107 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 108 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 109 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_open
# 110 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 111 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 112 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_OUT
# 113 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_9
# 114 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 115 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 116 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 117 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 118 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 119 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 120 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 121 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_10
# 122 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 123 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 124 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 125 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_TELEPORT
# 126 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 20, portal_close
# 127 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 128 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 129 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 130 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 131 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 132 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 133 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 134 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 135 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 136 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_5
# 137 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_11
# 138 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_5
# 139 "data/maps/LuxuraIsland/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 140 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 141 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 142 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 143 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 144 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_12
# 145 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 146 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 147 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 148 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_13
# 149 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 150 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 153 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 154 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 155 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 156 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 157 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 158 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 159 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 160 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 161 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 162 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 163 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 164 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 165 "data/maps/LuxuraIsland/scripts.pory"
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
	waitmessage
# 176 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 177 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_14
# 178 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 179 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 180 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 181 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_5
# 182 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 183 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 184 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 185 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 186 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 187 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 188 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 189 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 190 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 191 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, upset
# 192 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, happy
# 193 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 194 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_32
# 195 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 196 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_33
# 197 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 198 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 200 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 201 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 202 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_USUAL_GREEN
# 203 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_UNUSUAL_RED
# 204 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 205 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 206 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 210 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 211 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 213 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 214 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 216 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 217 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 218 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 221 "data/maps/LuxuraIsland/scripts.pory"
in:
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 225 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 226 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 227 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 229 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 231 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 233 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 234 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 236 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 237 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 238 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 240 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 241 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 242 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 244 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 245 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 246 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 248 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 249 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 252 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 253 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 254 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 256 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 257 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 258 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 259 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 260 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 261 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 264 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 267 "data/maps/LuxuraIsland/scripts.pory"
move:
# 268 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 272 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 273 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 276 "data/maps/LuxuraIsland/scripts.pory"
run:
# 277 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 278 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 280 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 281 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 281 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 281 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 281 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 286 "data/maps/LuxuraIsland/scripts.pory"
face:
# 287 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 288 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 290 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 291 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 291 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 291 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 291 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 293 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 294 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 295 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 297 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 298 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 299 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 300 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 304 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 305 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 306 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 309 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 310 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 311 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 313 "data/maps/LuxuraIsland/scripts.pory"
player:
# 314 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 315 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 317 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 318 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 318 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 319 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 322 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 323 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 326 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 327 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 328 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 329 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 330 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 331 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 332 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 333 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 334 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 335 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 336 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 337 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 338 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 339 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 340 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 341 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 342 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 343 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 346 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 347 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 348 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 350 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 351 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 352 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 354 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 355 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 359 "data/maps/LuxuraIsland/scripts.pory"
io:
# 360 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 360 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 364 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 365 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 370 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 371 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 372 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 373 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 374 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 375 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 376 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 377 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 378 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 379 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 380 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 381 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 382 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 383 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 384 "data/maps/LuxuraIsland/scripts.pory"
	release
# 385 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 388 "data/maps/LuxuraIsland/scripts.pory"
str:
# 389 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 389 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 392 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 401 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 402 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 403 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_5
# 404 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 405 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 406 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 407 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 393 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 394 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 395 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 396 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 397 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 398 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 411 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 412 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 412 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 412 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 416 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 417 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 426 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 435 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 443 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 456 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 469 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 484 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 497 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 513 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 418 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 419 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 420 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 421 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 422 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 423 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 424 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 427 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 428 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 429 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 430 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 431 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 432 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 433 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 436 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 437 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 438 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 439 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 440 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 441 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 444 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 445 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 446 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 447 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 448 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 449 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 450 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 451 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 452 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 453 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 454 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 457 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 458 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 459 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 460 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 462 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 463 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 464 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 465 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 466 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 467 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 470 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 471 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 472 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 473 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 474 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 475 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 476 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 477 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 478 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 479 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 480 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 481 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 482 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 485 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 486 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 487 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 488 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 489 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 490 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 491 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 492 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 493 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 494 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 498 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 499 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 500 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 501 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 502 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 503 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 504 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 505 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 506 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 507 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 508 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 509 "data/maps/LuxuraIsland/scripts.pory"
	addobject 12
# 510 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 514 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 515 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 516 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 517 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 518 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 519 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 520 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x30D, 0
# 521 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 29, 0x315, 0
# 522 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 29, 0x314, 0
# 523 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 5, 28, 0x30C, 0
# 524 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 525 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 526 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 484 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 469 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 456 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 531 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 532 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 533 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 534 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 535 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 537 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 540 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 541 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 542 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 543 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 547 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 548 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 549 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 550 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 554 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 555 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 556 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 557 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 560 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 564 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 565 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 566 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 561 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 571 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 572 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 573 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 574 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 575 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 576 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 577 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 578 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 579 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_2
# 583 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_3
# 587 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_4
# 591 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_5
# 595 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_6
bloodsee_1:
# 599 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 600 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 601 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 602 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 603 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 604 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 580 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 581 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 582 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_3:
# 584 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 585 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
# 586 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_4:
# 588 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 589 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
# 590 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_5:
# 592 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 593 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
# 594 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1

bloodsee_6:
# 596 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 597 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
# 598 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
	goto bloodsee_1


blo::
# 608 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 609 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 610 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 611 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 612 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 617 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 618 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 619 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 620 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 626 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 627 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 628 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 629 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 630 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 632 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 635 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 636 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 637 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 640 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 641 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 642 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 645 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 646 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 647 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 651 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 652 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 653 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 657 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 658 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 659 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 663 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 664 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 665 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 669 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 670 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 671 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 672 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 673 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 675 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 678 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 679 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 682 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 683 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 684 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 685 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 686 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 688 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 692 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 693 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 694 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 695 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 696 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 697 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 698 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 699 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 700 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive1
# 701 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 702 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 703 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 704 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 705 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1
# 706 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 707 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 708 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, exclam
# 709 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 710 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 711 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive2
# 712 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 713 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 714 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2
# 715 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 716 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 717 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive_Movement_0
# 718 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_0
# 719 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_1
# 720 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 721 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 722 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 723 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3
# 724 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 725 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 12, alistairarrive_Movement_2
# 726 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 12
# 727 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 728 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 729 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive_Movement_3
# 730 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 731 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 732 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_EXIT
# 733 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 734 "data/maps/LuxuraIsland/scripts.pory"
	release
# 735 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 736 "data/maps/LuxuraIsland/scripts.pory"
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

# 85 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_3:
# 85 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 88 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_4:
# 88 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 88 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 88 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 97 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_5:
# 97 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 102 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_6:
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 102 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 103 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_7:
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 105 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_8:
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 105 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_9:
# 113 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 113 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 113 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 113 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 121 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_10:
# 121 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 121 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 121 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 137 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_11:
# 137 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 137 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 144 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_12:
# 144 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
	step_end

# 148 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_13:
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_14:
# 177 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 371 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 371 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 380 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 380 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 380 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 381 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 381 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 381 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 580 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
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
	step_end

# 588 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
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
# 588 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 589 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 589 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 592 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 592 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 596 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 596 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 717 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_0:
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 717 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 719 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_1:
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
# 719 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_up
	step_end

# 725 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_2:
# 725 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 729 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive_Movement_3:
# 729 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 729 "data/maps/LuxuraIsland/scripts.pory"
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
# 99 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_JOY}.......$"

ran_Text_14:
# 117 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This definitely wasn't part of the\n"
	.string "plan...$"

ran_Text_15:
# 119 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}HEY! Mira! What was that?!$"

ran_Text_16:
# 129 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-what the-?! The pool?!\p"
	.string "Mira!! this is all your fault!$"

ran_Text_17:
# 132 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Ehh?! Don't blame me!\p"
	.string "I didn't do it!……\p"
	.string "But you look like a drenched Torchic,\n"
	.string "Master Xylar!$"

ran_Text_18:
# 134 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}A-a Torchic?!\p"
	.string "Why you-!!\p"
	.string "If Mom sees us dripping wet, we're both\n"
	.string "in trouble!$"

ran_Text_19:
# 146 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey!! Come back here, you floating\n"
	.string "donut!!$"

ran_Text_20:
# 161 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe Hoopa did that!\p"
	.string "Now we're both soaked…\p"
	.string "Tch-one day, I'm gonna catch that\n"
	.string "troublemaker!$"

ran_Text_21:
# 163 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Pfft-totally worth it!\p"
	.string "Besides… we won't get moments like this\n"
	.string "once you leave for the Academy.$"

ran_Text_22:
# 165 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah…\p"
	.string "It feels strange knowing I'll be away\n"
	.string "from everyone.\p"
	.string "I guess I'm… kinda nervous.$"

ran_Text_23:
# 168 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "Xylar.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back-I'll make real\n"
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And… uh… maybe don't talk to that\n"
	.string "gardener again, okay?$"

ran_Text_27:
# 179 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't like the way he looks at you.$"

ran_Text_28:
# 183 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Oh? Is Master Xylar jealous?$"

ran_Text_29:
# 185 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-?! N-No! I just-\p"
	.string "That's not-!$"

ran_Text_30:
# 187 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Haha, you're cute when you're flustered.$"

ran_Text_31:
# 189 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ughhh… I hate you.$"

ran_Text_32:
# 194 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Relax, I'm just teasing.$"

ran_Text_33:
# 196 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on-before we both catch a\n"
	.string "cold.$"

indoor_Text_0:
# 335 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 337 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 374 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 405 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 535 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 542 "data/maps/LuxuraIsland/scripts.pory"
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
# 549 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 556 "data/maps/LuxuraIsland/scripts.pory"
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
# 565 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 575 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 576 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 601 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 630 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 636 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 641 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 646 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 652 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 658 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 664 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 686 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 697 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 705 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 714 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 723 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther...Elysia...Please be safe.$"

gardener::
# 283 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
