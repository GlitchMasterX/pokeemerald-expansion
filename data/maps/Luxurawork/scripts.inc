# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE,  Luxurawork_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/Luxurawork/scripts.pory"
	.byte 0
# 7 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 11, trage
# 9 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 22, trageflash
# 10 "data/maps/Luxurawork/scripts.pory"
.2byte 0
# 11 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 12 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 22, flash
# 13 "data/maps/Luxurawork/scripts.pory"
.2byte 0

trageflash::
# 16 "data/maps/Luxurawork/scripts.pory"
	lockall
# 17 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 18 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 19 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 20 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 22 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 23 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 24 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 25 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 26 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 27 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 28 "data/maps/Luxurawork/scripts.pory"
	waitse
# 29 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 30 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 31 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 32 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 33 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 34 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 35 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 36 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 37 "data/maps/Luxurawork/scripts.pory"
	waitse
# 38 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 39 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 40 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 42 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 44 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 45 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 46 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 47 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 48 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 49 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 50 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 51 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 52 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 53 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 54 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 55 "data/maps/Luxurawork/scripts.pory"
	waitse
# 56 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 57 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 58 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 59 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 60 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 62 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 63 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 64 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 65 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/Luxurawork/scripts.pory"
	call Script_RemoveTint
# 67 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 68 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


flash::
# 72 "data/maps/Luxurawork/scripts.pory"
	call Script_SetGrayscaleTint
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 75 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 94 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 112 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 76 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 77 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 78 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 79 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 80 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 81 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 82 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 83 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 84 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 85 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 86 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 87 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 88 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 89 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 90 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 91 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 92 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 95 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 96 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 97 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 98 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 99 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 100 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 101 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 102 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 103 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 107 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 108 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 109 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 110 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 111 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 113 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 114 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 115 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 116 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 117 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 118 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 119 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 120 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 121 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 122 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 123 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 124 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 125 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 126 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 127 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 128 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 129 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 130 "data/maps/Luxurawork/scripts.pory"
	addobject 18
# 131 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 132 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 133 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 134 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 94 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 140 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 178 "data/maps/Luxurawork/scripts.pory"
	lockall
# 179 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 180 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 181 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 182 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 183 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 141 "data/maps/Luxurawork/scripts.pory"
	lockall
# 142 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 143 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 144 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 145 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 146 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 147 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 148 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 149 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 150 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 151 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 152 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 153 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 154 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 155 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 156 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 157 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 158 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 159 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 160 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 161 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 162 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 163 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 164 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 165 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 166 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 167 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 168 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 169 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 170 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 171 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 172 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 173 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 174 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 175 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 176 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 186 "data/maps/Luxurawork/scripts.pory"
exclam:
# 187 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 191 "data/maps/Luxurawork/scripts.pory"
	lockall
# 192 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 193 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 194 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 195 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 196 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 197 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 198 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 199 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0, MSGBOX_AUTOCLOSE
# 200 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 201 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 202 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 203 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1, MSGBOX_AUTOCLOSE
# 204 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 208 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 209 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 210 "data/maps/Luxurawork/scripts.pory"
	waitse
# 211 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 212 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 213 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 214 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 215 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 216 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 217 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 218 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 219 "data/maps/Luxurawork/scripts.pory"
	waitse
# 220 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 221 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 222 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 223 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 224 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 225 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 226 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 227 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 228 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 229 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 230 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 231 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 232 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 233 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 234 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 235 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2, MSGBOX_AUTOCLOSE
# 236 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 237 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 238 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3, MSGBOX_AUTOCLOSE
# 239 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 240 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 241 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 242 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 243 "data/maps/Luxurawork/scripts.pory"
	waitse
# 244 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 245 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 247 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 248 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 249 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 250 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 251 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 252 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 253 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 254 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 255 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 256 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 257 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 258 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, dede
# 259 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 260 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 261 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 262 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 263 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 264 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 265 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, revert
# 266 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 267 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, reverte
# 268 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 269 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 270 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 271 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 272 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 273 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 274 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 275 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 276 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 277 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 278 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 279 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 280 "data/maps/Luxurawork/scripts.pory"
	waitse
# 281 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 282 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 283 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 284 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 285 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 286 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 287 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 288 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 289 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 290 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 291 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 292 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 293 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 294 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 295 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, players
# 296 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 297 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 298 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12, MSGBOX_AUTOCLOSE
# 299 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 300 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 301 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 302 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 303 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 304 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 305 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 306 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 307 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, capture
# 308 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 309 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 310 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 311 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 312 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 313 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 314 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 315 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 316 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 319 "data/maps/Luxurawork/scripts.pory"
capture:
# 320 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 320 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/Luxurawork/scripts.pory"
back:
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 333 "data/maps/Luxurawork/scripts.pory"
reverte:
# 334 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 335 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 336 "data/maps/Luxurawork/scripts.pory"
	face_up
# 337 "data/maps/Luxurawork/scripts.pory"
	face_left
# 338 "data/maps/Luxurawork/scripts.pory"
	face_down
# 339 "data/maps/Luxurawork/scripts.pory"
	face_right
# 340 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 344 "data/maps/Luxurawork/scripts.pory"
revert:
# 345 "data/maps/Luxurawork/scripts.pory"
	face_left
# 346 "data/maps/Luxurawork/scripts.pory"
	face_down
# 347 "data/maps/Luxurawork/scripts.pory"
	face_right
# 348 "data/maps/Luxurawork/scripts.pory"
	face_up
# 349 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 351 "data/maps/Luxurawork/scripts.pory"
moq:
# 352 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 352 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 352 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 354 "data/maps/Luxurawork/scripts.pory"
faint:
# 355 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 356 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 357 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 359 "data/maps/Luxurawork/scripts.pory"
players:
# 360 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 361 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 363 "data/maps/Luxurawork/scripts.pory"
atk:
# 364 "data/maps/Luxurawork/scripts.pory"
	face_right
# 365 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 366 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 366 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 366 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 368 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 370 "data/maps/Luxurawork/scripts.pory"
visible:
# 371 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 373 "data/maps/Luxurawork/scripts.pory"
invisible:
# 374 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 376 "data/maps/Luxurawork/scripts.pory"
mo:
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 379 "data/maps/Luxurawork/scripts.pory"
finish:
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 381 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 381 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 381 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/Luxurawork/scripts.pory"
ded:
# 384 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 384 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 384 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 387 "data/maps/Luxurawork/scripts.pory"
dede:
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 389 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 389 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

dad_Text_0:
# 144 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 147 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 150 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 153 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 156 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 161 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in a\n"
	.string "few days.$"

dad_Text_6:
# 164 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 167 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 170 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 173 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 181 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 199 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trage_Text_1:
# 203 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trage_Text_2:
# 235 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trage_Text_3:
# 238 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge. Pathetically so.\p"
	.string "Now it's the end for you.$"

trage_Text_4:
# 248 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

trage_Text_5:
# 255 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_6:
# 260 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_7:
# 263 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_8:
# 271 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_9:
# 274 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_10:
# 286 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_11:
# 292 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_12:
# 298 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_13:
# 301 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_14:
# 304 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_15:
# 306 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_16:
# 311 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 323 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 326 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
