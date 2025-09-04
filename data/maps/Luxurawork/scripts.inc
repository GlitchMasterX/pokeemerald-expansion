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
	msgbox trageflash_Text_0
# 20 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 21 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 22 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1
# 23 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 24 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 25 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, invisible
# 26 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 27 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 28 "data/maps/Luxurawork/scripts.pory"
	waitse
# 29 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 30 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 31 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 32 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 33 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 34 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 35 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 36 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 37 "data/maps/Luxurawork/scripts.pory"
	waitse
# 38 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 39 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 40 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 42 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 44 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 45 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 46 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 47 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 48 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 49 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_2
# 50 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 52 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_0
# 53 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 54 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 55 "data/maps/Luxurawork/scripts.pory"
	waitse
# 56 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 57 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 58 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4, MSGBOX_AUTOCLOSE
# 60 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 61 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 62 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 64 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
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
	addobject 12
# 123 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 124 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 125 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 126 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 127 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 128 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 129 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 130 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 131 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 94 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 137 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 167 "data/maps/Luxurawork/scripts.pory"
	lockall
# 168 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 169 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 170 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 171 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 172 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 138 "data/maps/Luxurawork/scripts.pory"
	lockall
# 139 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 140 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 141 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 142 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 143 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 144 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 145 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 146 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 147 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 148 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 149 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 150 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 151 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 152 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 153 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 154 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 155 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 156 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 157 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 158 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 159 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 160 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 161 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 162 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 163 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 164 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 165 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 175 "data/maps/Luxurawork/scripts.pory"
exclam:
# 176 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 180 "data/maps/Luxurawork/scripts.pory"
	lockall
# 181 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 182 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 183 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 184 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 185 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 186 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 187 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 188 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 189 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 190 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 191 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 192 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 193 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 194 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 195 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 196 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 197 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 198 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 199 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 200 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 201 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, invisible
# 202 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 203 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 204 "data/maps/Luxurawork/scripts.pory"
	waitse
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 208 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 209 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 210 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 211 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 212 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 213 "data/maps/Luxurawork/scripts.pory"
	waitse
# 214 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 215 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 216 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 217 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 218 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 219 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 220 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 221 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 222 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 223 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 224 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4
# 225 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 226 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 227 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 228 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 229 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 230 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 231 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 232 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 233 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 234 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trage_Movement_0
# 235 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 236 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 237 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 238 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 239 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 240 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_0
# 241 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 242 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 243 "data/maps/Luxurawork/scripts.pory"
	waitse
# 244 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 245 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 246 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 247 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4
# 248 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 249 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 250 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 251 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 252 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 253 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 254 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 255 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 256 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 257 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 258 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 259 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 260 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_1
# 261 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 262 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 263 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9
# 264 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 265 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 266 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 267 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 268 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 269 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10
# 270 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 271 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 272 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 273 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 274 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 275 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 276 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 277 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 278 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 279 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 280 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_2
# 281 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 282 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12
# 283 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 284 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 285 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 286 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13
# 287 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 288 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_3
# 289 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14
# 290 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 291 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 292 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 293 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 294 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_4
# 295 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_5
# 296 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 297 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 298 "data/maps/Luxurawork/scripts.pory"
	waitse
# 299 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 300 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 301 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 302 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 303 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 304 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15
# 305 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 306 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 307 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 308 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16
# 309 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 310 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 311 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 312 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_6
# 313 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 314 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 315 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 316 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 317 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 318 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_17, MSGBOX_AUTOCLOSE
# 319 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 320 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 321 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 322 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 323 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 324 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 325 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 326 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 327 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 328 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 329 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_7
# 330 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 331 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 332 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 333 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 334 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_21, MSGBOX_AUTOCLOSE
# 335 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trage_Movement_0
# 336 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 337 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 338 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_22, MSGBOX_AUTOCLOSE
# 339 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 340 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 341 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 342 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_23, MSGBOX_AUTOCLOSE
# 343 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 344 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_8
# 345 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 346 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_25, MSGBOX_AUTOCLOSE
# 347 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 348 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_26, MSGBOX_AUTOCLOSE
# 349 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 350 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_27, MSGBOX_AUTOCLOSE
# 351 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 352 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 353 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 354 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 355 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 356 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 359 "data/maps/Luxurawork/scripts.pory"
capture:
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 370 "data/maps/Luxurawork/scripts.pory"
back:
# 371 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 371 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 371 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 371 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 373 "data/maps/Luxurawork/scripts.pory"
reverte:
# 374 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 375 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 376 "data/maps/Luxurawork/scripts.pory"
	face_up
# 377 "data/maps/Luxurawork/scripts.pory"
	face_left
# 378 "data/maps/Luxurawork/scripts.pory"
	face_down
# 379 "data/maps/Luxurawork/scripts.pory"
	face_right
# 380 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 384 "data/maps/Luxurawork/scripts.pory"
revert:
# 385 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 386 "data/maps/Luxurawork/scripts.pory"
	face_left
# 387 "data/maps/Luxurawork/scripts.pory"
	face_down
# 388 "data/maps/Luxurawork/scripts.pory"
	face_right
# 389 "data/maps/Luxurawork/scripts.pory"
	face_up
# 390 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 392 "data/maps/Luxurawork/scripts.pory"
moq:
# 393 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 393 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 393 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 395 "data/maps/Luxurawork/scripts.pory"
faint:
# 396 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 397 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 398 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 400 "data/maps/Luxurawork/scripts.pory"
players:
# 401 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 402 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 404 "data/maps/Luxurawork/scripts.pory"
atk:
# 405 "data/maps/Luxurawork/scripts.pory"
	face_right
# 406 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 407 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 407 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 407 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 408 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 408 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 408 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 409 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 411 "data/maps/Luxurawork/scripts.pory"
visible:
# 412 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 414 "data/maps/Luxurawork/scripts.pory"
invisible:
# 415 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 417 "data/maps/Luxurawork/scripts.pory"
mo:
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 418 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 420 "data/maps/Luxurawork/scripts.pory"
finish:
# 421 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 421 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 421 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 424 "data/maps/Luxurawork/scripts.pory"
ded:
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 428 "data/maps/Luxurawork/scripts.pory"
dede:
# 429 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 430 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 430 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 431 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 432 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 437 "data/maps/Luxurawork/scripts.pory"
	lock
# 438 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 439 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trage_Movement_0
# 440 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 441 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 442 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 443 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 444 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 445 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 446 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 447 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 448 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 449 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 450 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 451 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 452 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 453 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 454 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 455 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 456 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 457 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 458 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 459 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 460 "data/maps/Luxurawork/scripts.pory"
	release
# 461 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 465 "data/maps/Luxurawork/scripts.pory"
	lock
# 466 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 467 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 468 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 469 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 470 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 471 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 472 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 473 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 474 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 475 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 476 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 477 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 478 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 479 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 480 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 481 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 482 "data/maps/Luxurawork/scripts.pory"
	waitse
# 483 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 484 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 485 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 486 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 487 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 488 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 489 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 490 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 491 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 492 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 493 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 494 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 495 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 496 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 497 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 498 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 499 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 500 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 501 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 502 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 503 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 504 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 505 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 506 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 507 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 508 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 509 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 510 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 511 "data/maps/Luxurawork/scripts.pory"
	waitse
# 512 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 513 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 514 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 515 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 516 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 517 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 518 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 519 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 520 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_4
# 521 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 522 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 523 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 524 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 525 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 526 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_2
# 527 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 528 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 529 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 530 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 531 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 532 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 533 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 534 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_6
# 535 "data/maps/Luxurawork/scripts.pory"
	waitse
# 536 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_7
# 537 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 538 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 539 "data/maps/Luxurawork/scripts.pory"
	waitse
# 540 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_8
# 541 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_9
# 542 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 543 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 544 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_11
# 545 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 546 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 547 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_5
# 548 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 549 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 550 "data/maps/Luxurawork/scripts.pory"
	waitse
# 551 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 552 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 553 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 554 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, invisible
# 555 "data/maps/Luxurawork/scripts.pory"
	waitse
# 556 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 557 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 52 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_0:
# 52 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 52 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 52 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 52 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 234 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 234 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 260 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 260 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 280 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 280 "data/maps/Luxurawork/scripts.pory"
	face_left
	step_end

# 288 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 288 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 288 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 294 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 294 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 295 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 295 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/Luxurawork/scripts.pory"
trage_Movement_6:
# 312 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 312 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 329 "data/maps/Luxurawork/scripts.pory"
trage_Movement_7:
# 329 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 329 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 329 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 329 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 329 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/Luxurawork/scripts.pory"
trage_Movement_8:
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 344 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 476 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 490 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 490 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 491 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 491 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 491 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 508 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 508 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 508 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 520 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 520 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 531 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 531 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 531 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 534 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 534 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 534 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 534 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 536 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 536 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 540 "data/maps/Luxurawork/scripts.pory"
escape_Movement_8:
# 540 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 540 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 540 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 540 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 540 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 541 "data/maps/Luxurawork/scripts.pory"
escape_Movement_9:
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 541 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

trageflash_Text_0:
# 19 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trageflash_Text_1:
# 22 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pFinish this.$"

trageflash_Text_2:
# 49 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trageflash_Text_3:
# 50 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?\p"
	.string "You're pitiful, Surge.\p"
	.string "This is where it ends$"

trageflash_Text_4:
# 59 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 141 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 143 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 145 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 147 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 149 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all I ask, son.$"

dad_Text_5:
# 154 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in a\n"
	.string "few days.$"

dad_Text_6:
# 156 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 158 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 160 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 162 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 170 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 187 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trage_Text_1:
# 191 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trage_Text_2:
# 195 "data/maps/Luxurawork/scripts.pory"
	.string "Hoopa$"

trage_Text_3:
# 196 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa$"

trage_Text_4:
# 224 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trage_Text_5:
# 227 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trage_Text_6:
# 230 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trage_Text_7:
# 237 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}What-?$"

trage_Text_8:
# 254 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Aurthur-!! No… no, please!!$"

trage_Text_9:
# 263 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I warned you. This man crushed the\n"
	.string "Nexus Order single-handedly.\p"
	.string "He was called the strongest trainer\n"
	.string "alive…$"

trage_Text_10:
# 269 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So this is the mighty Aurthur… laid low\n"
	.string "like any other man.\p"
	.string "Even legends die, don't they?$"

trage_Text_11:
# 277 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_12:
# 282 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… so it's true.\p"
	.string "When Aurthur dies, the mighty Hoopa\n"
	.string "becomes nothing more than a broken\l"
	.string "child.\p"
	.string "How convenient.$"

trage_Text_13:
# 286 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_14:
# 289 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Listen to me-your power is gone!\p"
	.string "You can't fight them now… please, run!\p"
	.string "If they take you, everything he died\n"
	.string "for is lost!$"

trage_Text_15:
# 304 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… ran off like a frightened child.\p"
	.string "No matter, Aurthur's dead.\p"
	.string "That's what really mattered.$"

trage_Text_16:
# 308 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_17:
# 318 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No… no, this isn't real.\p"
	.string "Dad… get up… please get up!$"

trage_Text_18:
# 324 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_19:
# 327 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?… DAD!!!!$"

trage_Text_20:
# 332 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… what do we have here?\p"
	.string "Grunts! Seize them.\p"
	.string "They'll make fine test subjects.$"

trage_Text_21:
# 334 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Sir!$"

trage_Text_22:
# 338 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run!\p"
	.string "Now, hurry!!$"

trage_Text_23:
# 342 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please…\p"
	.string "Spare them.\p"
	.string "Take me instead-just, leave the\n"
	.string "children out of this.$"

trage_Text_24:
# 345 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_25:
# 346 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… Begging, Lady Elysia?\p"
	.string "How pathetic.\p"
	.string "I almost expected more from you.$"

trage_Text_26:
# 348 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You say you'd do anything?\p"
	.string "No-you WILL do what I decide.\p"
	.string "And as for your precious brats… they're\n"
	.string "coming with me.$"

trage_Text_27:
# 350 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Trust me.\p"
	.string "You won't like what happens next.$"

Hooparescue_Text_0:
# 441 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 443 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master Xylar.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 444 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 446 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 448 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master Xylar... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 450 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 452 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "Xylar.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 454 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 456 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 458 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 468 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 469 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stay where you are, kid.\p"
	.string "Orders are clear-nobody leaves this\n"
	.string "room.\p"
	.string "Test me, and you'll regret it.$"

escape_Text_2:
# 472 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira… what do we do now?$"

escape_Text_3:
# 474 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}We can't just sit here.\p"
	.string "There has to be another way out.$"

escape_Text_4:
# 485 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did you hear that…?$"

escape_Text_5:
# 487 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Come on. Let's see what it was.$"

escape_Text_6:
# 501 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa…? Why are you here…?$"

escape_Text_7:
# 505 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_NORM}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa.$"

escape_Text_8:
# 518 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You… you're helping us?$"

escape_Text_9:
# 523 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! What's going o-\p"
	.string "Wait, what the-?!$"

escape_Text_10:
# 527 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}HOOO…PAAA!!!$"

escape_Text_11:
# 544 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa… thank you.\p"
	.string "Even after everything, you're still\n"
	.string "protecting him.$"

surge::
# 363 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 366 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
