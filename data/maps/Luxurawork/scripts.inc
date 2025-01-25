# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Luxurawork/scripts.pory"
	.byte 0
# 6 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 11, trage
# 8 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 22, trageflash
# 9 "data/maps/Luxurawork/scripts.pory"
.2byte 0

trageflash::
# 12 "data/maps/Luxurawork/scripts.pory"
	lockall
# 13 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 14 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 15 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 16 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 18 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 19 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 21 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 23 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 24 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 25 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 26 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 27 "data/maps/Luxurawork/scripts.pory"
	waitse
# 28 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 29 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 30 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 31 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 32 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 33 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 34 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 35 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 36 "data/maps/Luxurawork/scripts.pory"
	waitse
# 37 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 38 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 39 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 40 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 41 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 42 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 44 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 45 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 46 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 47 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 48 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 49 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 50 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 51 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2, MSGBOX_AUTOCLOSE
# 52 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 53 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 54 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 55 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 56 "data/maps/Luxurawork/scripts.pory"
	waitse
# 57 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 58 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 60 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 61 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 62 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 63 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 64 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 65 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 67 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 68 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 69 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 70 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 72 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 76 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 94 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 111 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 77 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 78 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 79 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 80 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 81 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 82 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 83 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 84 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 85 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 86 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 87 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 88 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 89 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 90 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
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
	setflag FLAG_UNUSED_0x4A6
# 110 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 112 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 113 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 114 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 115 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 116 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 117 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 118 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 119 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 120 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 121 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 122 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 123 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 124 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 125 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 126 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 127 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 128 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 129 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 130 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 131 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 132 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 94 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 138 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 176 "data/maps/Luxurawork/scripts.pory"
	lockall
# 177 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 178 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 179 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 180 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 181 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 139 "data/maps/Luxurawork/scripts.pory"
	lockall
# 140 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 141 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 142 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 143 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 144 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 145 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 146 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 147 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 148 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 149 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 150 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 151 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 152 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 153 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 154 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 155 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 156 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 157 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 158 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 159 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 160 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 161 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 162 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 163 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 164 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 165 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 166 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 167 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 168 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 169 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 170 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 171 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 172 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 173 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 174 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 184 "data/maps/Luxurawork/scripts.pory"
exclam:
# 185 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 189 "data/maps/Luxurawork/scripts.pory"
	lockall
# 190 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 191 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 192 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 193 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 194 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 195 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 196 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 197 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 199 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 200 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 201 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1, MSGBOX_AUTOCLOSE
# 202 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 203 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 204 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 208 "data/maps/Luxurawork/scripts.pory"
	waitse
# 209 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 210 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 211 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, finish
# 212 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, finish
# 213 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 214 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 215 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 216 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 217 "data/maps/Luxurawork/scripts.pory"
	waitse
# 218 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, visible
# 219 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 220 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 221 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, atk
# 222 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 223 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 224 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, faint
# 225 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 226 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 227 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, visible
# 228 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, invisible
# 229 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 230 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 231 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 232 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 233 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2, MSGBOX_AUTOCLOSE
# 234 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 235 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 236 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 237 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 238 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, capture
# 239 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 240 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 241 "data/maps/Luxurawork/scripts.pory"
	waitse
# 242 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, run
# 243 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 244 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 245 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 246 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 247 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, invisible
# 248 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 249 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 250 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 251 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 252 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 253 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 254 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, dede
# 255 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 256 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 257 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 258 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 259 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
# 260 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 261 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, revert
# 262 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 263 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, reverte
# 264 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 265 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 266 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 267 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 268 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 269 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 270 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 271 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 272 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 273 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, visible
# 274 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 275 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 276 "data/maps/Luxurawork/scripts.pory"
	waitse
# 277 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 278 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 279 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 280 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 281 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 282 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 283 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 284 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 285 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 286 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 287 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 288 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 289 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 290 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 291 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, players
# 292 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 293 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 294 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 295 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 296 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 297 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8, MSGBOX_AUTOCLOSE
# 298 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 299 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 300 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 301 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 302 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 303 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, capture
# 304 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 305 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 306 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 307 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11, MSGBOX_AUTOCLOSE
# 308 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 309 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 310 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 311 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 312 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 315 "data/maps/Luxurawork/scripts.pory"
capture:
# 316 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 316 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 326 "data/maps/Luxurawork/scripts.pory"
back:
# 327 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 327 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 327 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 327 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 329 "data/maps/Luxurawork/scripts.pory"
reverte:
# 330 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 331 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 332 "data/maps/Luxurawork/scripts.pory"
	face_up
# 333 "data/maps/Luxurawork/scripts.pory"
	face_left
# 334 "data/maps/Luxurawork/scripts.pory"
	face_down
# 335 "data/maps/Luxurawork/scripts.pory"
	face_right
# 336 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 340 "data/maps/Luxurawork/scripts.pory"
revert:
# 341 "data/maps/Luxurawork/scripts.pory"
	face_left
# 342 "data/maps/Luxurawork/scripts.pory"
	face_down
# 343 "data/maps/Luxurawork/scripts.pory"
	face_right
# 344 "data/maps/Luxurawork/scripts.pory"
	face_up
# 345 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 347 "data/maps/Luxurawork/scripts.pory"
moq:
# 348 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 348 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 348 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 350 "data/maps/Luxurawork/scripts.pory"
faint:
# 351 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 352 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 353 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 355 "data/maps/Luxurawork/scripts.pory"
players:
# 356 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 357 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 359 "data/maps/Luxurawork/scripts.pory"
atk:
# 360 "data/maps/Luxurawork/scripts.pory"
	face_right
# 361 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 362 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 363 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 363 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 363 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 364 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 366 "data/maps/Luxurawork/scripts.pory"
visible:
# 367 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 369 "data/maps/Luxurawork/scripts.pory"
invisible:
# 370 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 372 "data/maps/Luxurawork/scripts.pory"
mo:
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 373 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 375 "data/maps/Luxurawork/scripts.pory"
finish:
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 377 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 379 "data/maps/Luxurawork/scripts.pory"
ded:
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 380 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/Luxurawork/scripts.pory"
dede:
# 384 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 385 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 385 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 386 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 387 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

trageflash_Text_0:
# 19 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trageflash_Text_1:
# 21 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trageflash_Text_2:
# 51 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trageflash_Text_3:
# 52 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge. Pathetically so.\p"
	.string "Now it's the end for you.$"

trageflash_Text_4:
# 60 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 142 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 145 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 148 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 151 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 154 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 159 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in a\n"
	.string "few days.$"

dad_Text_6:
# 162 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 165 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 168 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 171 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 179 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 250 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_1:
# 256 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_2:
# 259 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_3:
# 267 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_4:
# 270 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_5:
# 282 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_6:
# 288 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_7:
# 294 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_8:
# 297 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_9:
# 300 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_10:
# 302 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_11:
# 307 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 319 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 322 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
