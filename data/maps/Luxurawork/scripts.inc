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
# 13 "data/maps/Luxurawork/scripts.pory"
	lockall
# 14 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 15 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 17 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 18 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 19 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0
# 20 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 21 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 22 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 23 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1
# 24 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 25 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 26 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 27 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 28 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3
# 29 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 30 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 31 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 32 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 33 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 34 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 35 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 36 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 37 "data/maps/Luxurawork/scripts.pory"
	waitse
# 38 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 39 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 40 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 42 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 43 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 44 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 45 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 46 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 47 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 48 "data/maps/Luxurawork/scripts.pory"
	waitse
# 49 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 50 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 51 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 52 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 53 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 54 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 55 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 56 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 57 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 58 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 60 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4
# 61 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 62 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 63 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_5
# 64 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 65 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 66 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_6
# 67 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 68 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 69 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 71 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 72 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 73 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 74 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 75 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 76 "data/maps/Luxurawork/scripts.pory"
	waitse
# 77 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 78 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 79 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 81 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 82 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 83 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 84 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 86 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 87 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 89 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 90 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 91 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 92 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 94 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 98 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 116 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 133 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 99 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 100 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 101 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 102 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 103 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 107 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 108 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 109 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 110 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 111 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 112 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 113 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 114 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 117 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 118 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 119 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 120 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 121 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 122 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 123 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 124 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 125 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 126 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 127 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 128 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 129 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 130 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 131 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 132 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 134 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 135 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 136 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 137 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 138 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 139 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 140 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 141 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 142 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 143 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 144 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 145 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 146 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 147 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 148 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 149 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 150 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 151 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 152 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 153 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 116 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 159 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 190 "data/maps/Luxurawork/scripts.pory"
	lockall
# 191 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 192 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 193 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 194 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 195 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 160 "data/maps/Luxurawork/scripts.pory"
	lockall
# 161 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 162 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 163 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 164 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 165 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 166 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 167 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 168 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 169 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 170 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 171 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 172 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 173 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 174 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 175 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 176 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 177 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 178 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 179 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 180 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 181 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 182 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 183 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 184 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 185 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 186 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 187 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 188 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 198 "data/maps/Luxurawork/scripts.pory"
exclam:
# 199 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 203 "data/maps/Luxurawork/scripts.pory"
	lockall
# 204 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 205 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 206 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 207 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 208 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 209 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 210 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 211 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 212 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 213 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 214 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 215 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 216 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 217 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 218 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 219 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 220 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
# 221 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 222 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 223 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 224 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 225 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 226 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 227 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 228 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 229 "data/maps/Luxurawork/scripts.pory"
	waitse
# 230 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 231 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 232 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 233 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 234 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 235 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 236 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 237 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 238 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 239 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 240 "data/maps/Luxurawork/scripts.pory"
	waitse
# 241 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 242 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 243 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 244 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 245 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 246 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 247 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 248 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 249 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 250 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 251 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 252 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 253 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 254 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 255 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4
# 256 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 257 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 258 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 259 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 260 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 261 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 262 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 263 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 264 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 265 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 266 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 267 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 268 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 269 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 270 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 271 "data/maps/Luxurawork/scripts.pory"
	waitse
# 272 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 273 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 274 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 275 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 276 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 277 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 278 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 279 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 280 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 281 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 282 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 283 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 284 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 285 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 286 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 287 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 288 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_0
# 289 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 290 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_8
# 291 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9
# 292 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 293 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 294 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 295 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 296 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 297 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10
# 298 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 299 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 300 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 301 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 302 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 303 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 304 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 305 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 306 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 307 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 308 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_1
# 309 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 310 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12
# 311 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 312 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 313 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 314 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13
# 315 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 316 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_2
# 317 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14
# 318 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 319 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 320 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 321 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 322 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 323 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_3
# 324 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_4
# 325 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 326 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 327 "data/maps/Luxurawork/scripts.pory"
	waitse
# 328 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 329 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 330 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 331 "data/maps/Luxurawork/scripts.pory"
	waitse
# 332 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 333 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 334 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 335 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15
# 336 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 337 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 338 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_8
# 339 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16
# 340 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 341 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 342 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 343 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_5
# 344 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 345 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 346 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 347 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 348 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 349 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_17, MSGBOX_AUTOCLOSE
# 350 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 351 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 352 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 353 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 354 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 355 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 356 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 357 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 358 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 359 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 360 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_6
# 361 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 362 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 363 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 364 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 365 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_21, MSGBOX_AUTOCLOSE
# 366 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trageflash_Movement_1
# 367 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 368 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 369 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_22, MSGBOX_AUTOCLOSE
# 370 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 371 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 372 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 373 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_23, MSGBOX_AUTOCLOSE
# 374 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 375 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_7
# 376 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 377 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_25, MSGBOX_AUTOCLOSE
# 378 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 379 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_26, MSGBOX_AUTOCLOSE
# 380 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 381 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_27, MSGBOX_AUTOCLOSE
# 382 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 383 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 384 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 385 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 386 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 387 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 390 "data/maps/Luxurawork/scripts.pory"
capture:
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 391 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 401 "data/maps/Luxurawork/scripts.pory"
back:
# 402 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 402 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 402 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 402 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 404 "data/maps/Luxurawork/scripts.pory"
reverte:
# 405 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 406 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 407 "data/maps/Luxurawork/scripts.pory"
	face_up
# 408 "data/maps/Luxurawork/scripts.pory"
	face_left
# 409 "data/maps/Luxurawork/scripts.pory"
	face_down
# 410 "data/maps/Luxurawork/scripts.pory"
	face_right
# 411 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 415 "data/maps/Luxurawork/scripts.pory"
revert:
# 416 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 417 "data/maps/Luxurawork/scripts.pory"
	face_left
# 418 "data/maps/Luxurawork/scripts.pory"
	face_down
# 419 "data/maps/Luxurawork/scripts.pory"
	face_right
# 420 "data/maps/Luxurawork/scripts.pory"
	face_up
# 421 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 423 "data/maps/Luxurawork/scripts.pory"
moq:
# 424 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 424 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 424 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 426 "data/maps/Luxurawork/scripts.pory"
faint:
# 427 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 431 "data/maps/Luxurawork/scripts.pory"
players:
# 432 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 433 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 435 "data/maps/Luxurawork/scripts.pory"
atk:
# 436 "data/maps/Luxurawork/scripts.pory"
	face_right
# 437 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 440 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 442 "data/maps/Luxurawork/scripts.pory"
visible:
# 443 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 445 "data/maps/Luxurawork/scripts.pory"
invisible:
# 446 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 448 "data/maps/Luxurawork/scripts.pory"
mo:
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 449 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 451 "data/maps/Luxurawork/scripts.pory"
finish:
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 455 "data/maps/Luxurawork/scripts.pory"
ded:
# 456 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 456 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 456 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 456 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 459 "data/maps/Luxurawork/scripts.pory"
dede:
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 462 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 463 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 468 "data/maps/Luxurawork/scripts.pory"
	lock
# 469 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 470 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trageflash_Movement_1
# 471 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 472 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 473 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 474 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 475 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 476 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 477 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 478 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 479 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 480 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 481 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 482 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 483 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 484 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 485 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 486 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 487 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 488 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 489 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 490 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 491 "data/maps/Luxurawork/scripts.pory"
	release
# 492 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 496 "data/maps/Luxurawork/scripts.pory"
	lock
# 497 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 498 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 499 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 500 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 501 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 502 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 503 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 504 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 505 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 506 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 507 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 508 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 509 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 510 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 511 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 512 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 513 "data/maps/Luxurawork/scripts.pory"
	waitse
# 514 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 515 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 516 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 517 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 518 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 519 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 520 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 521 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 522 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 523 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 524 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 525 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 526 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 527 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 528 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 529 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 530 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 531 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 532 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 533 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 534 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 535 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 536 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 537 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 538 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 539 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 540 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 541 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 542 "data/maps/Luxurawork/scripts.pory"
	waitse
# 543 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_open
# 544 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 545 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 546 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 547 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 548 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 549 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 550 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 551 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_4
# 552 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 553 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 554 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 555 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 556 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 557 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 558 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 559 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 560 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 561 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 562 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 563 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 564 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 565 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_6
# 566 "data/maps/Luxurawork/scripts.pory"
	waitse
# 567 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_7
# 568 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 569 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 570 "data/maps/Luxurawork/scripts.pory"
	waitse
# 571 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_8
# 572 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_9
# 573 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 574 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 575 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_11
# 576 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 577 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 578 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_4
# 579 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 580 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 581 "data/maps/Luxurawork/scripts.pory"
	waitse
# 582 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 583 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 584 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 585 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_close
# 586 "data/maps/Luxurawork/scripts.pory"
	waitse
# 587 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 588 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 34 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_0:
# 34 "data/maps/Luxurawork/scripts.pory"
	face_up
# 34 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 70 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_1:
# 70 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 73 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_2:
# 73 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 73 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 73 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 73 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 288 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 288 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 308 "data/maps/Luxurawork/scripts.pory"
	face_left
	step_end

# 316 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 316 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 316 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 323 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 323 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 323 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 323 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 323 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 324 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 324 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 343 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 343 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 343 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 360 "data/maps/Luxurawork/scripts.pory"
trage_Movement_6:
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 360 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 375 "data/maps/Luxurawork/scripts.pory"
trage_Movement_7:
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 375 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 507 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 507 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 507 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 521 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 522 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 522 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 522 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 539 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 539 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 539 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 551 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 551 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 551 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 562 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 562 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 562 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 565 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 565 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 565 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 565 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 567 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 567 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 571 "data/maps/Luxurawork/scripts.pory"
escape_Movement_8:
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 571 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 572 "data/maps/Luxurawork/scripts.pory"
escape_Movement_9:
# 572 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 572 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

trageflash_Text_0:
# 19 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trageflash_Text_1:
# 23 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trageflash_Text_2:
# 27 "data/maps/Luxurawork/scripts.pory"
	.string "Hoopa$"

trageflash_Text_3:
# 28 "data/maps/Luxurawork/scripts.pory"
	.string "Hooo...paaa!$"

trageflash_Text_4:
# 60 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trageflash_Text_5:
# 63 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trageflash_Text_6:
# 66 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trageflash_Text_7:
# 80 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 163 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 165 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 167 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 169 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 171 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all I ask, son.$"

dad_Text_5:
# 177 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, before I forget-\p"
	.string "An old friend of mine from the academy\n"
	.string "will be visiting near the end of this\l"
	.string "month.\p"
	.string "He's been very curious to meet you.$"

dad_Text_6:
# 179 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Friend?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 181 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha! I meant to but it slipped my\n"
	.string "mind.\p"
	.string "He wanted to meet you before the start.\p"
	.string "Don't worry he's just coming to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 183 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 185 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all he'll\n"
	.string "want to see.$"

dad_Text_10:
# 193 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 211 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trage_Text_1:
# 215 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trage_Text_2:
# 220 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa!$"

trage_Text_3:
# 252 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trage_Text_4:
# 255 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trage_Text_5:
# 258 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trage_Text_6:
# 265 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}What-?$"

trage_Text_7:
# 282 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Aurthur-!! No… no, please!!$"

trage_Text_8:
# 290 "data/maps/Luxurawork/scripts.pory"
	.string "???$"

trage_Text_9:
# 291 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I warned you. This man crushed the\n"
	.string "Nexus Order single-handedly.\p"
	.string "He was called the strongest trainer\n"
	.string "alive…$"

trage_Text_10:
# 297 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So this is the mighty Aurthur… laid low\n"
	.string "like any other man.\p"
	.string "Even legends die, don't they?$"

trage_Text_11:
# 305 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_12:
# 310 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… so it's true.\p"
	.string "When Aurthur dies, the mighty Hoopa\n"
	.string "becomes nothing more than a broken\l"
	.string "child.\p"
	.string "How convenient.$"

trage_Text_13:
# 314 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_14:
# 317 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Listen to me-your power is gone!\p"
	.string "You can't fight them now… please, run!\p"
	.string "If they take you, everything he died\n"
	.string "for is lost!$"

trage_Text_15:
# 335 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… ran off like a frightened child.\p"
	.string "No matter, Aurthur's dead.\p"
	.string "That's what really mattered.$"

trage_Text_16:
# 339 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_17:
# 349 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No… no, this isn't real.\p"
	.string "Dad… get up… please get up!$"

trage_Text_18:
# 355 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_19:
# 358 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?… DAD!!!!$"

trage_Text_20:
# 363 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… what do we have here?\p"
	.string "Grunts! Seize them.\p"
	.string "They'll make fine test subjects.$"

trage_Text_21:
# 365 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Sir!$"

trage_Text_22:
# 369 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run!\p"
	.string "Now, hurry!!$"

trage_Text_23:
# 373 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please…\p"
	.string "Spare them.\p"
	.string "Take me instead-just, leave the\n"
	.string "children out of this.$"

trage_Text_24:
# 376 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_25:
# 377 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… Begging, Lady Elysia?\p"
	.string "How pathetic.\p"
	.string "I almost expected more from you.$"

trage_Text_26:
# 379 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You say you'd do anything?\p"
	.string "No-you WILL do what I decide.\p"
	.string "And as for your precious brats… they're\n"
	.string "coming with me.$"

trage_Text_27:
# 381 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Trust me.\p"
	.string "You won't like what happens next.$"

Hooparescue_Text_0:
# 472 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 474 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master Xylar.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 475 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 477 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 479 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master Xylar... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 481 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 483 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "Xylar.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 485 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 487 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 489 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 499 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 500 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stay where you are, kid.\p"
	.string "Orders are clear-nobody leaves this\n"
	.string "room.\p"
	.string "Test me, and you'll regret it.$"

escape_Text_2:
# 503 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira… what do we do now?$"

escape_Text_3:
# 505 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}We can't just sit here.\p"
	.string "There has to be another way out.$"

escape_Text_4:
# 516 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did you hear that…?$"

escape_Text_5:
# 518 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Come on. Let's see what it was.$"

escape_Text_6:
# 532 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa…? Why are you here…?$"

escape_Text_7:
# 536 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_SAD}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa.$"

escape_Text_8:
# 549 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You… you're helping us?$"

escape_Text_9:
# 554 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! What's going o-\p"
	.string "Wait, what the-?!$"

escape_Text_10:
# 558 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}HOOO…PAAA!!!$"

escape_Text_11:
# 575 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa… thank you.\p"
	.string "Even after everything, you're still\n"
	.string "protecting him.$"

surge::
# 394 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 397 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
