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
	msgbox trageflash_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 25 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 27 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 28 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 29 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 30 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 31 "data/maps/Luxurawork/scripts.pory"
	waitse
# 32 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 33 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 34 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 35 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 36 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 37 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 38 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 39 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 40 "data/maps/Luxurawork/scripts.pory"
	waitse
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 42 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 44 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 45 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 46 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 47 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 48 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 49 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 50 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 51 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 52 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 53 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 54 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 55 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2, MSGBOX_AUTOCLOSE
# 56 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 57 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 58 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 59 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 60 "data/maps/Luxurawork/scripts.pory"
	waitse
# 61 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 62 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 64 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 65 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 66 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 67 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 69 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 71 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 72 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 73 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 74 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/Luxurawork/scripts.pory"
	call Script_RemoveTint
# 76 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 77 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


flash::
# 81 "data/maps/Luxurawork/scripts.pory"
	call Script_SetGrayscaleTint
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 84 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 102 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 119 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 85 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 86 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 87 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 88 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 89 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 90 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 91 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 92 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 93 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 94 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 95 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 96 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 97 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 98 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 99 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 100 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 103 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 107 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 108 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 109 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 110 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 111 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 112 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 113 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 114 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 115 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 116 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 117 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 118 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 120 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 121 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 122 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 123 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 124 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 125 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 126 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 127 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 128 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 129 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 130 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 131 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 132 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 133 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 134 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 135 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 136 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 137 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 138 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 139 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 140 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 102 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 146 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 184 "data/maps/Luxurawork/scripts.pory"
	lockall
# 185 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 186 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 187 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 188 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 189 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 147 "data/maps/Luxurawork/scripts.pory"
	lockall
# 148 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 149 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 150 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 151 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 152 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 153 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 154 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 155 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 156 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 157 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 158 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 159 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 160 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 161 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 162 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 163 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 164 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 165 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 166 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 167 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 168 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 169 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 170 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 171 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 172 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 173 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 174 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 175 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 176 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 177 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 178 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 179 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 180 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 181 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 182 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 192 "data/maps/Luxurawork/scripts.pory"
exclam:
# 193 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 197 "data/maps/Luxurawork/scripts.pory"
	lockall
# 198 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 199 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 200 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 201 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 202 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 203 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 204 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 205 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0, MSGBOX_AUTOCLOSE
# 206 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 207 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 208 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 209 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1, MSGBOX_AUTOCLOSE
# 210 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 211 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 212 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 213 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 214 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 215 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 216 "data/maps/Luxurawork/scripts.pory"
	waitse
# 217 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 218 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 219 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 220 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 221 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 222 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 223 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 224 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 225 "data/maps/Luxurawork/scripts.pory"
	waitse
# 226 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 227 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 228 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 229 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 230 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 231 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 232 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 233 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 234 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 235 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 236 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 237 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 238 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 239 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 240 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 241 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 243 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 244 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 245 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 246 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 247 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 248 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 249 "data/maps/Luxurawork/scripts.pory"
	waitse
# 250 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 251 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 252 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 253 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 254 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 255 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 256 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 257 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 258 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 259 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 260 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 261 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 262 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 263 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 264 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, dede
# 265 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 266 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 267 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 268 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 269 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
# 270 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 271 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, revert
# 272 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 273 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, reverte
# 274 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 275 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 276 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 277 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 278 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 279 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 280 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 281 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 282 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 283 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 284 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 285 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 286 "data/maps/Luxurawork/scripts.pory"
	waitse
# 287 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 288 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 289 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 290 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 291 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 292 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 293 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 294 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 295 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 296 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 297 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 298 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 299 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 300 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 301 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, players
# 302 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 303 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 304 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 305 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 306 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 307 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8, MSGBOX_AUTOCLOSE
# 308 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 309 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 310 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 311 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 312 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 313 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, capture
# 314 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 315 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 316 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 317 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11, MSGBOX_AUTOCLOSE
# 318 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 319 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 320 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 321 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 322 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 325 "data/maps/Luxurawork/scripts.pory"
capture:
# 326 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 326 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 336 "data/maps/Luxurawork/scripts.pory"
back:
# 337 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 337 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 337 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 337 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/Luxurawork/scripts.pory"
reverte:
# 340 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 341 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 342 "data/maps/Luxurawork/scripts.pory"
	face_up
# 343 "data/maps/Luxurawork/scripts.pory"
	face_left
# 344 "data/maps/Luxurawork/scripts.pory"
	face_down
# 345 "data/maps/Luxurawork/scripts.pory"
	face_right
# 346 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 350 "data/maps/Luxurawork/scripts.pory"
revert:
# 351 "data/maps/Luxurawork/scripts.pory"
	face_left
# 352 "data/maps/Luxurawork/scripts.pory"
	face_down
# 353 "data/maps/Luxurawork/scripts.pory"
	face_right
# 354 "data/maps/Luxurawork/scripts.pory"
	face_up
# 355 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 357 "data/maps/Luxurawork/scripts.pory"
moq:
# 358 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 358 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 358 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 360 "data/maps/Luxurawork/scripts.pory"
faint:
# 361 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 363 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 365 "data/maps/Luxurawork/scripts.pory"
players:
# 366 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 367 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 369 "data/maps/Luxurawork/scripts.pory"
atk:
# 370 "data/maps/Luxurawork/scripts.pory"
	face_right
# 371 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 372 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 372 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 372 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 373 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 373 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 373 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 374 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 376 "data/maps/Luxurawork/scripts.pory"
visible:
# 377 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 379 "data/maps/Luxurawork/scripts.pory"
invisible:
# 380 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 382 "data/maps/Luxurawork/scripts.pory"
mo:
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/Luxurawork/scripts.pory"
finish:
# 386 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 386 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 386 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 387 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 387 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 387 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/Luxurawork/scripts.pory"
ded:
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 393 "data/maps/Luxurawork/scripts.pory"
dede:
# 394 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 395 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 395 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 396 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 397 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

trageflash_Text_0:
# 23 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trageflash_Text_1:
# 25 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trageflash_Text_2:
# 55 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trageflash_Text_3:
# 56 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge. Pathetically so.\p"
	.string "Now it's the end for you.$"

trageflash_Text_4:
# 64 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 150 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 153 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 156 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 159 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 162 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 167 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in a\n"
	.string "few days.$"

dad_Text_6:
# 170 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 173 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 176 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 179 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 187 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 261 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_1:
# 266 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_2:
# 269 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_3:
# 277 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_4:
# 280 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_5:
# 292 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_6:
# 298 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_7:
# 304 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_8:
# 307 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_9:
# 310 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_10:
# 312 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_11:
# 317 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 329 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 332 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
