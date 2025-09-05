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
	playse SE_ESCALATOR
# 82 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, portal_open
# 83 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 84 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_3
# 85 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_IN
# 86 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 87 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_4
# 88 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_0
# 90 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_ESCALATOR
# 92 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, portal_close
# 93 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 94 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 95 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_5
# 96 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 97 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 98 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 99 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 100 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, ran_Movement_6
# 101 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_7
# 102 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 103 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_8
# 104 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_8
# 105 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 106 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_ESCALATOR
# 107 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, portal_open
# 108 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 109 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_WARP_OUT
# 110 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_9
# 111 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 112 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 113 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 114 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 115 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 116 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 117 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_10
# 118 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_M_DIVE
# 119 "data/maps/LuxuraIsland/scripts.pory"
	waitse
# 120 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 121 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_ESCALATOR
# 122 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 21, portal_close
# 123 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 124 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 125 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 126 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 127 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 128 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 129 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 130 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 131 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 132 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, ran_Movement_5
# 133 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, ran_Movement_11
# 134 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_5
# 135 "data/maps/LuxuraIsland/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 136 "data/maps/LuxuraIsland/scripts.pory"
	speakername ran_Text_11
# 137 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 138 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 139 "data/maps/LuxuraIsland/scripts.pory"
	closemessage
# 140 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 22, ran_Movement_12
# 141 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 142 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 143 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 144 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, ran_Movement_13
# 145 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 146 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/LuxuraIsland/scripts.pory"
	fadedefaultbgm
# 148 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 149 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 150 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 151 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 152 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 153 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 154 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 155 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 157 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 158 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 159 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 160 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 161 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 163 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 164 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_23
# 165 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 166 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_24
# 167 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 168 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_25
# 169 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 170 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_26
# 171 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 172 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 173 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, ran_Movement_14
# 174 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 175 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_27
# 176 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 177 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, ran_Movement_5
# 178 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 179 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_28
# 180 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 181 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_29
# 182 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 183 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_30
# 184 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 185 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_31
# 186 "data/maps/LuxuraIsland/scripts.pory"
	playse SE_PIN
# 187 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, upset
# 188 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, happy
# 189 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 190 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_32
# 191 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 192 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_33
# 193 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 194 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 195 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 196 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 197 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 198 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_USUAL_GREEN
# 199 "data/maps/LuxuraIsland/scripts.pory"
	unlockoutfit OUTFIT_UNUSUAL_RED
# 200 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 201 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 202 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 206 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 207 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 209 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 210 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 212 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 214 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 217 "data/maps/LuxuraIsland/scripts.pory"
in:
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 218 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 219 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 221 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 223 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 224 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 225 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 227 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 229 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 230 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 232 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 233 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 234 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 236 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 238 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 240 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 241 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 242 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 244 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 245 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 245 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 248 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 249 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 250 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 252 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 253 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 254 "data/maps/LuxuraIsland/scripts.pory"
	delay_16
# 255 "data/maps/LuxuraIsland/scripts.pory"
	delay_2
# 256 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 257 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 260 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 261 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 263 "data/maps/LuxuraIsland/scripts.pory"
move:
# 264 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 265 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 266 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 268 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 272 "data/maps/LuxuraIsland/scripts.pory"
run:
# 273 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 274 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 276 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 277 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/LuxuraIsland/scripts.pory"
face:
# 283 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 284 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 286 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 289 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 290 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 291 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 293 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 294 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 295 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 295 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 300 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 301 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 302 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 305 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 306 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 307 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 309 "data/maps/LuxuraIsland/scripts.pory"
player:
# 310 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 311 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 313 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 314 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 314 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 315 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 318 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 319 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 322 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 323 "data/maps/LuxuraIsland/scripts.pory"
	resumefakertc
# 324 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 325 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 326 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 327 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 328 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 329 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 330 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 331 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 332 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 333 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 334 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 335 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 336 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 337 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 338 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 339 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 342 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 343 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 344 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 347 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 348 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 350 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 351 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 355 "data/maps/LuxuraIsland/scripts.pory"
io:
# 356 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 356 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 359 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 360 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 361 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 366 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 367 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_0
# 368 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 369 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 370 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 371 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 372 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 373 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 374 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 375 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 376 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, stroll_Movement_1
# 377 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stroll_Movement_2
# 378 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 379 "data/maps/LuxuraIsland/scripts.pory"
	setfollowernpc 5, 0x4, mirafollowerscript
# 380 "data/maps/LuxuraIsland/scripts.pory"
	release
# 381 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 384 "data/maps/LuxuraIsland/scripts.pory"
str:
# 385 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 385 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 388 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_TRIAL_SERENA, mirafollowerscript_1
# 397 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 398 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 399 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, ran_Movement_5
# 400 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 401 "data/maps/LuxuraIsland/scripts.pory"
	msgbox mirafollowerscript_Text_0
# 402 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 403 "data/maps/LuxuraIsland/scripts.pory"
	release
	return

mirafollowerscript_1:
# 389 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 390 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 391 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 392 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 393 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 394 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 407 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 408 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 408 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 408 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 412 "data/maps/LuxuraIsland/scripts.pory"
	special SetRoofBirds
# 413 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 422 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 431 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 439 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 449 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 459 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 471 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 480 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 493 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 414 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 415 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 416 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 417 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 418 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 419 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 420 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 423 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 424 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
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

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 433 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 434 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 435 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 436 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 437 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 440 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 441 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 442 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 443 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 444 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 445 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 446 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 447 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 450 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 451 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 452 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 453 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 454 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 455 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 456 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 457 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 460 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 461 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 462 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 463 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 464 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 465 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 466 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 467 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 468 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 469 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 472 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 473 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 474 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 475 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 476 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 477 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 478 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 481 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 482 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 483 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 484 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 485 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 486 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 487 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 488 "data/maps/LuxuraIsland/scripts.pory"
	addobject 13
# 489 "data/maps/LuxuraIsland/scripts.pory"
	addobject 14
# 490 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 494 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 495 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 496 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 497 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 498 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 499 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 500 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
# 501 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 13
# 502 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 14
# 503 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 471 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 459 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 449 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16


strolll::
# 508 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 509 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 510 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 511 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 512 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 514 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 517 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 518 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 519 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 520 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 524 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 525 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 526 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 527 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 531 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 532 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 533 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 534 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 537 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4AF, blood_1
# 541 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 542 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 543 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return

blood_1:
# 538 "data/maps/LuxuraIsland/scripts.pory"
	goto blo
	return


bloodsee::
# 548 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 549 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 550 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, exclam
# 551 "data/maps/LuxuraIsland/scripts.pory"
	speakername bloodsee_Text_0
# 552 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_1, MSGBOX_SIGN
# 553 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 554 "data/maps/LuxuraIsland/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 555 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq bloodsee_9
bloodsee_8:
# 558 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 27
	goto_if_eq bloodsee_3
# 561 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq bloodsee_4
# 564 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 25
	goto_if_eq bloodsee_5
bloodsee_1:
# 567 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 568 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 569 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 570 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 571 "data/maps/LuxuraIsland/scripts.pory"
	removefieldmugshot
# 572 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 573 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return

bloodsee_2:
# 556 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_0
# 557 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_0
	goto bloodsee_1

bloodsee_3:
# 559 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_1
# 560 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_2
	goto bloodsee_1

bloodsee_4:
# 562 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_3
# 563 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_3
	goto bloodsee_1

bloodsee_5:
# 565 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFF, bloodsee_Movement_4
# 566 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, bloodsee_Movement_4
	goto bloodsee_1

bloodsee_9:
# 555 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq bloodsee_2
	goto bloodsee_8


blo::
# 577 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 578 "data/maps/LuxuraIsland/scripts.pory"
	facefollowernpc
# 579 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 580 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_2
# 581 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 586 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 587 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 588 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 589 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 595 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 596 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 597 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strp
# 598 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 599 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 601 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 604 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 605 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 606 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 609 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 610 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 611 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 614 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 615 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 616 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 620 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 621 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 622 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 626 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 627 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 628 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 632 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 633 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 634 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


strolllll::
# 638 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 639 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 640 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 641 "data/maps/LuxuraIsland/scripts.pory"
	speakername Xylar1
# 642 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 644 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


# 647 "data/maps/LuxuraIsland/scripts.pory"
strrp:
# 648 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

stded::
# 651 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 652 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strrp
# 653 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0xFD, strrp
# 654 "data/maps/LuxuraIsland/scripts.pory"
	speakername name4
# 655 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stded_Text_0
# 657 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


alistairarrive::
# 661 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 662 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 663 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, cameramovementalistair
# 664 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 665 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 666 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_0, MSGBOX_AUTOCLOSE
# 668 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 669 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive1
# 670 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive1
# 671 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 672 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 673 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 674 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 676 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, exclam
# 677 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 0x7F, alistairarrive1
# 678 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 679 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 13, alistairarrive2
# 680 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 14, alistairarrive2
# 681 "data/maps/LuxuraIsland/scripts.pory"
	speakername unknown
# 682 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 684 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 685 "data/maps/LuxuraIsland/scripts.pory"
	msgbox alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 686 "data/maps/LuxuraIsland/scripts.pory"
	release
# 687 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 22
# 688 "data/maps/LuxuraIsland/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


# 691 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive2:
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 692 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 694 "data/maps/LuxuraIsland/scripts.pory"
cameramovementalistair:
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 696 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 698 "data/maps/LuxuraIsland/scripts.pory"
alistairarrive1:
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 699 "data/maps/LuxuraIsland/scripts.pory"
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

# 84 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_3:
# 84 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 87 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_4:
# 87 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 87 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 87 "data/maps/LuxuraIsland/scripts.pory"
	jump_up
	step_end

# 95 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_5:
# 95 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
	step_end

# 100 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_6:
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 100 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
	step_end

# 101 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_7:
# 101 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 101 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 101 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 101 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 101 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_8:
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 103 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 110 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_9:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 110 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 110 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 110 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 117 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_10:
# 117 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 117 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_down
# 117 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 133 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_11:
# 133 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 133 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 140 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_12:
# 140 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_left
	step_end

# 144 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_13:
# 144 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 173 "data/maps/LuxuraIsland/scripts.pory"
ran_Movement_14:
# 173 "data/maps/LuxuraIsland/scripts.pory"
	emote_upset
	step_end

# 367 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_0:
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 367 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 376 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_1:
# 376 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 376 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 376 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 377 "data/maps/LuxuraIsland/scripts.pory"
stroll_Movement_2:
# 377 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 377 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 556 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_0:
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 556 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 559 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_1:
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 559 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 560 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_2:
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 560 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
	step_end

# 562 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_3:
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 562 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 565 "data/maps/LuxuraIsland/scripts.pory"
bloodsee_Movement_4:
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 565 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 565 "data/maps/LuxuraIsland/scripts.pory"
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
# 97 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_JOY}.......$"

ran_Text_14:
# 113 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This definitely wasn't part of the\n"
	.string "plan...$"

ran_Text_15:
# 115 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}HEY! Mira! What was that?!$"

ran_Text_16:
# 125 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-what the-?! The pool?!\p"
	.string "Mira!! this is all your fault!$"

ran_Text_17:
# 128 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Ehh?! Don't blame me!\p"
	.string "I didn't do it!……\p"
	.string "But you look like a drenched Torchic,\n"
	.string "Master Xylar!$"

ran_Text_18:
# 130 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}A-a Torchic?!\p"
	.string "Why you-!!\p"
	.string "If Mom sees us dripping wet, we're both\n"
	.string "in trouble!$"

ran_Text_19:
# 142 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey!! Come back here, you floating\n"
	.string "donut!!$"

ran_Text_20:
# 157 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe Hoopa did that!\p"
	.string "Now we're both soaked…\p"
	.string "Tch-one day, I'm gonna catch that\n"
	.string "troublemaker!$"

ran_Text_21:
# 159 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Pfft-totally worth it!\p"
	.string "Besides… we won't get moments like this\n"
	.string "once you leave for the Academy.$"

ran_Text_22:
# 161 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah…\p"
	.string "It feels strange knowing I'll be away\n"
	.string "from everyone.\p"
	.string "I guess I'm… kinda nervous.$"

ran_Text_23:
# 164 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You're going to be amazing, Master\n"
	.string "Xylar.\p"
	.string "We're all proud of you.\p"
	.string "And when you come back-I'll make real\n"
	.string "pancakes this time.\n"
	.string "No tricks, I swear.$"

ran_Text_24:
# 166 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_25:
# 168 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Promise.$"

ran_Text_26:
# 170 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And… uh… maybe don't talk to that\n"
	.string "gardener again, okay?$"

ran_Text_27:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't like the way he looks at you.$"

ran_Text_28:
# 179 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Oh? Is Master Xylar jealous?$"

ran_Text_29:
# 181 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wh-?! N-No! I just-=\p"
	.string "That's not-!$"

ran_Text_30:
# 183 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Haha, you're cute when you're flustered.$"

ran_Text_31:
# 185 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ughhh… I hate you.$"

ran_Text_32:
# 190 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Relax, I'm just teasing.$"

ran_Text_33:
# 192 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now come on-before we both catch a\n"
	.string "cold.$"

indoor_Text_0:
# 331 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 333 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah. I'll do that.$"

stroll_Text_0:
# 370 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 373 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

mirafollowerscript_Text_0:
# 401 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master Xylar, I'll always be\n"
	.string "with you.$"

strolll_Text_0:
# 512 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way, Master Xylar.$"

Sailor_Text_0:
# 519 "data/maps/LuxuraIsland/scripts.pory"
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
# 526 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 533 "data/maps/LuxuraIsland/scripts.pory"
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
# 542 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 551 "data/maps/LuxuraIsland/scripts.pory"
	.string "Xylar$"

bloodsee_Text_1:
# 552 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

bloodsee_Text_2:
# 570 "data/maps/LuxuraIsland/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 599 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 605 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 610 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 615 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 621 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 627 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 633 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

stded_Text_0:
# 655 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

alistairarrive_Text_0:
# 666 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther's family mansion.\n"
	.string "He always spoke so highly of this place.\l"
	.string "It's been years since I've visited.$"

alistairarrive_Text_1:
# 674 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait....Something's not right.$"

alistairarrive_Text_2:
# 682 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Blood?.....\n"
	.string "No....What happened here?$"

alistairarrive_Text_3:
# 685 "data/maps/LuxuraIsland/scripts.pory"
	.string "He rushed inside, looking around the\n"
	.string "ruined mansion.$"

gardener::
# 279 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
