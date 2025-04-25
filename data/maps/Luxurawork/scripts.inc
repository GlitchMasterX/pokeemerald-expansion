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
	addobject 14
# 14 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
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
	applymovement 11, visible
# 23 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 24 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, invisible
# 25 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 26 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 27 "data/maps/Luxurawork/scripts.pory"
	waitse
# 28 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 29 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 30 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 31 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 32 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 33 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 34 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 35 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 36 "data/maps/Luxurawork/scripts.pory"
	waitse
# 37 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 38 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 39 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 40 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 41 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 42 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 44 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 45 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 46 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 47 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 48 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2, MSGBOX_AUTOCLOSE
# 49 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, capture
# 51 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 52 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 53 "data/maps/Luxurawork/scripts.pory"
	waitse
# 54 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 55 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 56 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 58 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 59 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 60 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 62 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 63 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 64 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 65 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 66 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 67 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 68 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 70 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 74 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 92 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 109 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 75 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 76 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 77 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 78 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 79 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 80 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 81 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 82 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 83 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 84 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 85 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 86 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 87 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 88 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 89 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 90 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 93 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 94 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 95 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 96 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 97 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 98 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 99 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 100 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 101 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 102 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 103 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 107 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 108 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 110 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 111 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 112 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 113 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 114 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 115 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 116 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 117 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 118 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 119 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 120 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 121 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 122 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 123 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 124 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 125 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 126 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 127 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 128 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 129 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 92 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 135 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 165 "data/maps/Luxurawork/scripts.pory"
	lockall
# 166 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 167 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 168 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 169 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 170 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 136 "data/maps/Luxurawork/scripts.pory"
	lockall
# 137 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 138 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 139 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 140 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 141 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 142 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 143 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 144 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 145 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 146 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 147 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 148 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 149 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 150 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 151 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 152 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 153 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 154 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 155 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 156 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 157 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 158 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 159 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 160 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 161 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 162 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 163 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 173 "data/maps/Luxurawork/scripts.pory"
exclam:
# 174 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 178 "data/maps/Luxurawork/scripts.pory"
	lockall
# 179 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 180 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 181 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 182 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 183 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 184 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 186 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 187 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1, MSGBOX_AUTOCLOSE
# 188 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 189 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 190 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 191 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 192 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3, MSGBOX_AUTOCLOSE
# 193 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 194 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 195 "data/maps/Luxurawork/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 196 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 197 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 198 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, invisible
# 199 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 200 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 201 "data/maps/Luxurawork/scripts.pory"
	waitse
# 202 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 203 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 204 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 208 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 209 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 210 "data/maps/Luxurawork/scripts.pory"
	waitse
# 211 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 212 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 213 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 214 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 215 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 216 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 217 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 218 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 219 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 220 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 221 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 222 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 223 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 224 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 225 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 226 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6, MSGBOX_AUTOCLOSE
# 227 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 228 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 229 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trage_Movement_0
# 230 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 231 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 232 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 233 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_1
# 234 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 235 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 236 "data/maps/Luxurawork/scripts.pory"
	waitse
# 237 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 238 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 239 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 241 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 242 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 243 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 244 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 245 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 246 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 247 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 248 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 249 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 250 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 251 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 252 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_2
# 253 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 254 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 255 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9
# 256 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 257 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10
# 258 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 259 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 260 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 261 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 262 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 263 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 264 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 265 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 266 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 267 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 268 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 269 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 270 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 271 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12
# 272 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 273 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 274 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 275 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 276 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_3
# 277 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 278 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 279 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 280 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_4
# 281 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 282 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 283 "data/maps/Luxurawork/scripts.pory"
	waitse
# 284 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 285 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 286 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 287 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 288 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 289 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 290 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 291 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 292 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 293 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 294 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 295 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 296 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 297 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 298 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 299 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 300 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_17, MSGBOX_AUTOCLOSE
# 301 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 302 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 303 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 304 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 305 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 306 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 307 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 308 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 309 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trage_Movement_5
# 310 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 311 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 312 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_21, MSGBOX_AUTOCLOSE
# 313 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 314 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 315 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 316 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_22, MSGBOX_AUTOCLOSE
# 317 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_23
# 318 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_24, MSGBOX_AUTOCLOSE
# 319 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_23
# 320 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_25, MSGBOX_AUTOCLOSE
# 321 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_26, MSGBOX_AUTOCLOSE
# 322 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 323 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 324 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 325 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 326 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 327 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 330 "data/maps/Luxurawork/scripts.pory"
capture:
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/Luxurawork/scripts.pory"
back:
# 342 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 342 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 342 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 342 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/Luxurawork/scripts.pory"
reverte:
# 345 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 346 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 347 "data/maps/Luxurawork/scripts.pory"
	face_up
# 348 "data/maps/Luxurawork/scripts.pory"
	face_left
# 349 "data/maps/Luxurawork/scripts.pory"
	face_down
# 350 "data/maps/Luxurawork/scripts.pory"
	face_right
# 351 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 355 "data/maps/Luxurawork/scripts.pory"
revert:
# 356 "data/maps/Luxurawork/scripts.pory"
	face_left
# 357 "data/maps/Luxurawork/scripts.pory"
	face_down
# 358 "data/maps/Luxurawork/scripts.pory"
	face_right
# 359 "data/maps/Luxurawork/scripts.pory"
	face_up
# 360 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 362 "data/maps/Luxurawork/scripts.pory"
moq:
# 363 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 363 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 363 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 365 "data/maps/Luxurawork/scripts.pory"
faint:
# 366 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 367 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 368 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 370 "data/maps/Luxurawork/scripts.pory"
players:
# 371 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 372 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 374 "data/maps/Luxurawork/scripts.pory"
atk:
# 375 "data/maps/Luxurawork/scripts.pory"
	face_right
# 376 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 377 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 377 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 377 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 378 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 378 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 378 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 379 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 381 "data/maps/Luxurawork/scripts.pory"
visible:
# 382 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 384 "data/maps/Luxurawork/scripts.pory"
invisible:
# 385 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 387 "data/maps/Luxurawork/scripts.pory"
mo:
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
# 388 "data/maps/Luxurawork/scripts.pory"
	walk_faster_up
	step_end

# 390 "data/maps/Luxurawork/scripts.pory"
finish:
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 392 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 392 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 392 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 394 "data/maps/Luxurawork/scripts.pory"
ded:
# 395 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 395 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 395 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 398 "data/maps/Luxurawork/scripts.pory"
dede:
# 399 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 400 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 400 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 401 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 402 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 407 "data/maps/Luxurawork/scripts.pory"
	lock
# 408 "data/maps/Luxurawork/scripts.pory"
	facefollower
# 409 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trage_Movement_5
# 410 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 411 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 412 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 413 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 414 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 415 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 416 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 417 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 418 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 419 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 420 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 421 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 422 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 423 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 424 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 425 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 426 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 427 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 428 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 429 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 430 "data/maps/Luxurawork/scripts.pory"
	release
# 431 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 435 "data/maps/Luxurawork/scripts.pory"
	lock
# 436 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 437 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 438 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 439 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 440 "data/maps/Luxurawork/scripts.pory"
	facefollower
# 441 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 442 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 443 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 444 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 445 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 446 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 447 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 448 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 449 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 450 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 451 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 452 "data/maps/Luxurawork/scripts.pory"
	waitse
# 453 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 454 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 455 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 456 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 457 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 458 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 459 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 460 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 461 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 462 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 463 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 464 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 465 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 466 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 467 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 468 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 469 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 470 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 471 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 472 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 473 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 474 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 475 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 476 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 477 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 478 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 479 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 480 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 481 "data/maps/Luxurawork/scripts.pory"
	waitse
# 482 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 483 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 484 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 485 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 486 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 487 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 488 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 489 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 490 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 491 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 492 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 493 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 494 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 495 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 496 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_4
# 497 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 498 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 499 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 500 "data/maps/Luxurawork/scripts.pory"
	waitse
# 501 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_6
# 502 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 503 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 504 "data/maps/Luxurawork/scripts.pory"
	waitse
# 505 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xfD, escape_Movement_7
# 506 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 507 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 508 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 509 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 510 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 511 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_4
# 512 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 513 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 514 "data/maps/Luxurawork/scripts.pory"
	waitse
# 515 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 516 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 517 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 518 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, invisible
# 519 "data/maps/Luxurawork/scripts.pory"
	waitse
# 520 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 521 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 229 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 229 "data/maps/Luxurawork/scripts.pory"
	face_right
# 229 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 233 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 233 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 233 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 252 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 276 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 276 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 280 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 280 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 309 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 446 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 446 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 446 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 460 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 461 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 478 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 478 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 478 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 496 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 496 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 496 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 499 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 499 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 499 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 499 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 501 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 501 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 505 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 505 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 505 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

trageflash_Text_0:
# 19 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trageflash_Text_1:
# 21 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trageflash_Text_2:
# 48 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trageflash_Text_3:
# 49 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge. Pathetically so.\p"
	.string "Now it's the end for you.$"

trageflash_Text_4:
# 57 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 139 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 141 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 143 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 145 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 147 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all I ask, son.$"

dad_Text_5:
# 152 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in a\n"
	.string "few days.$"

dad_Text_6:
# 154 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 156 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 158 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 160 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 168 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 184 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trage_Text_1:
# 187 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trage_Text_2:
# 191 "data/maps/Luxurawork/scripts.pory"
	.string "Hoopa$"

trage_Text_3:
# 192 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa$"

trage_Text_4:
# 221 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trage_Text_5:
# 223 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?$"

trage_Text_6:
# 226 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're weak, Surge. Pathetically so.\p"
	.string "Now it's the end for you.$"

trage_Text_7:
# 232 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

trage_Text_8:
# 246 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_9:
# 255 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_10:
# 257 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_11:
# 264 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_12:
# 271 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_13:
# 275 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_14:
# 277 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Your powers... they're sealed! You're too\n"
	.string "weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_15:
# 289 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_16:
# 294 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_17:
# 300 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_18:
# 303 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_19:
# 306 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_20:
# 308 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_21:
# 312 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

trage_Text_22:
# 316 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please....spare them.\p"
	.string "I'll do anything....just, please, leave\n"
	.string "them alone.$"

trage_Text_23:
# 317 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_24:
# 318 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha, seeing you beg... it's almost\n"
	.string "amusing.$"

trage_Text_25:
# 320 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen here, you bitch. You don't get to\n"
	.string "tell me what to do.\p"
	.string "You say you'd do anything? You don't\n"
	.string "have a choice.\p"
	.string "Not that it matters... I'll be taking\n"
	.string "both of them.$"

trage_Text_26:
# 321 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}And trust me, you won't like what comes\n"
	.string "next.$"

Hooparescue_Text_0:
# 411 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 413 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master Xylar.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 414 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 416 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 418 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master Xylar... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 420 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 422 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "Xylar.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 424 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 426 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 428 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 438 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 439 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Back off, kid.\p"
	.string "I've been given strict orders to guard\n"
	.string "this room and make sure you don't leave.\p"
	.string "So stay put… unless you want things to\n"
	.string "get real messy.$"

escape_Text_2:
# 442 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}What should we do, Mira?$"

escape_Text_3:
# 444 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's look if there is another way$"

escape_Text_4:
# 455 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that$"

escape_Text_5:
# 457 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go check.$"

escape_Text_6:
# 471 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Why...why are you here?$"

escape_Text_7:
# 475 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_NORM}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa$"

escape_Text_8:
# 488 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Are youu helping us?$"

escape_Text_9:
# 492 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa$"

escape_Text_10:
# 508 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Thank you… For still protecting him.$"

surge::
# 334 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 337 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
