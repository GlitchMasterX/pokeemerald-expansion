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
	special SpawnCameraObject
# 15 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 17 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 18 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 19 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 20 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 21 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0
# 22 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 23 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 24 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 25 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1
# 26 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 27 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 28 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 29 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 30 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3
# 31 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 32 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 33 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 34 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 35 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 36 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 37 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 38 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 39 "data/maps/Luxurawork/scripts.pory"
	waitse
# 40 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 42 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 43 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 44 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 45 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 46 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 47 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 48 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 49 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 50 "data/maps/Luxurawork/scripts.pory"
	waitse
# 51 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 52 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 53 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 54 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 55 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 56 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 57 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 58 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 59 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 60 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 61 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 62 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4
# 63 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 64 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 65 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_5
# 66 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 67 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 68 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_6
# 69 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 70 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 71 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 73 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 74 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 75 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 76 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 77 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 78 "data/maps/Luxurawork/scripts.pory"
	waitse
# 79 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 80 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 81 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 83 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 84 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 85 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 86 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 88 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 89 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 90 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 91 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 92 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 93 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 94 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 96 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 100 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 118 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 135 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 101 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 102 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 103 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 107 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 108 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 109 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 110 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 111 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 112 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 113 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 114 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 115 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 116 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 119 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 120 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 121 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 122 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 123 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 124 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 125 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 126 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 127 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 128 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 129 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 130 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 131 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 132 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 133 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 134 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 136 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 137 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 138 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 139 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 140 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 141 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 142 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 143 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 144 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 145 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 146 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 147 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 148 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 149 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 150 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 151 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 152 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 153 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 154 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 155 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 118 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 161 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 191 "data/maps/Luxurawork/scripts.pory"
	lockall
# 192 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 193 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 194 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 195 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 196 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 162 "data/maps/Luxurawork/scripts.pory"
	lockall
# 163 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 164 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 165 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 166 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 167 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 168 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 169 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 170 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 171 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 172 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 173 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 174 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 175 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 176 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 177 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 178 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 179 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 180 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 181 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 182 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 183 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 184 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 185 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 186 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 187 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 188 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 189 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 199 "data/maps/Luxurawork/scripts.pory"
exclam:
# 200 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 204 "data/maps/Luxurawork/scripts.pory"
	lockall
# 205 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 206 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 208 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 209 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 210 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 211 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 212 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0
# 213 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 214 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 215 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 216 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1
# 217 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 218 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 219 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 220 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 221 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3
# 222 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 223 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 224 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 225 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 226 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 227 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 228 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 229 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 230 "data/maps/Luxurawork/scripts.pory"
	waitse
# 231 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 232 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 233 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 234 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 235 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 236 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 237 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 238 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 239 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 240 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 241 "data/maps/Luxurawork/scripts.pory"
	waitse
# 242 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 243 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 244 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 245 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 246 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 247 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 248 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 249 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 250 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 251 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 252 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 253 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4
# 254 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 255 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 256 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_5
# 257 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 258 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 259 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_6
# 260 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 261 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 262 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 263 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 264 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 265 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 266 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 267 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 268 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 269 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 270 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 271 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 272 "data/maps/Luxurawork/scripts.pory"
	waitse
# 273 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 274 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 275 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 276 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 277 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 278 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 279 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 280 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 281 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 282 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 283 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 284 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 285 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 286 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 287 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 288 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 289 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_0
# 290 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 291 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 292 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
# 293 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 294 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 295 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 296 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 297 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 298 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 299 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 300 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 301 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 302 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 303 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 304 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 305 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 306 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4
# 307 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 308 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 309 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_1
# 310 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 311 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 312 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 313 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 314 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 315 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 316 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 317 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_2
# 318 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 319 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 320 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 321 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 322 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 323 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 324 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_3
# 325 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_4
# 326 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 327 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 328 "data/maps/Luxurawork/scripts.pory"
	waitse
# 329 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 330 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 331 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 332 "data/maps/Luxurawork/scripts.pory"
	waitse
# 333 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 334 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 335 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 336 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 337 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 338 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 339 "data/maps/Luxurawork/scripts.pory"
	speakername unknown
# 340 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9
# 341 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 342 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 343 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 344 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_5
# 345 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 346 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 347 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 348 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 349 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 350 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 351 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 352 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 353 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 354 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 355 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 356 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11, MSGBOX_AUTOCLOSE
# 357 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 358 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 359 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12, MSGBOX_AUTOCLOSE
# 360 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 361 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_6
# 362 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 363 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 364 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 365 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 366 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 367 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trageflash_Movement_1
# 368 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 369 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 370 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 371 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 372 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 373 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 374 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 375 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 376 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_7
# 377 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_17
# 378 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 379 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_17
# 380 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 381 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_17
# 382 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 383 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 384 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 385 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 386 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 387 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 388 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 391 "data/maps/Luxurawork/scripts.pory"
capture:
# 392 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 392 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 402 "data/maps/Luxurawork/scripts.pory"
back:
# 403 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 403 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 403 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 403 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 405 "data/maps/Luxurawork/scripts.pory"
reverte:
# 406 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 407 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 408 "data/maps/Luxurawork/scripts.pory"
	face_up
# 409 "data/maps/Luxurawork/scripts.pory"
	face_left
# 410 "data/maps/Luxurawork/scripts.pory"
	face_down
# 411 "data/maps/Luxurawork/scripts.pory"
	face_right
# 412 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 416 "data/maps/Luxurawork/scripts.pory"
revert:
# 417 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 418 "data/maps/Luxurawork/scripts.pory"
	face_left
# 419 "data/maps/Luxurawork/scripts.pory"
	face_down
# 420 "data/maps/Luxurawork/scripts.pory"
	face_right
# 421 "data/maps/Luxurawork/scripts.pory"
	face_up
# 422 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 424 "data/maps/Luxurawork/scripts.pory"
moq:
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 425 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 427 "data/maps/Luxurawork/scripts.pory"
faint:
# 428 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 429 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 430 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 432 "data/maps/Luxurawork/scripts.pory"
players:
# 433 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 434 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 436 "data/maps/Luxurawork/scripts.pory"
atk:
# 437 "data/maps/Luxurawork/scripts.pory"
	face_right
# 438 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 439 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 440 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 440 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 440 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 441 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 443 "data/maps/Luxurawork/scripts.pory"
visible:
# 444 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 446 "data/maps/Luxurawork/scripts.pory"
invisible:
# 447 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 449 "data/maps/Luxurawork/scripts.pory"
mo:
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 452 "data/maps/Luxurawork/scripts.pory"
finish:
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 453 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 454 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 454 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 454 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 456 "data/maps/Luxurawork/scripts.pory"
ded:
# 457 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 457 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 457 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 457 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 460 "data/maps/Luxurawork/scripts.pory"
dede:
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 462 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 462 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 463 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 464 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 469 "data/maps/Luxurawork/scripts.pory"
	lock
# 470 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 471 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trageflash_Movement_1
# 472 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 473 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 474 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 475 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 476 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 477 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 478 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 479 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 480 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 481 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 482 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 483 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 484 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 485 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 486 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 487 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 488 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 489 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 490 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 491 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 492 "data/maps/Luxurawork/scripts.pory"
	release
# 493 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 497 "data/maps/Luxurawork/scripts.pory"
	lock
# 498 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 499 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 500 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 501 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 502 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 503 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 504 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 505 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 506 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 507 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 508 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 509 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 510 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 511 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 512 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 513 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 514 "data/maps/Luxurawork/scripts.pory"
	waitse
# 515 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 516 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 517 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 518 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 519 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 520 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 521 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 522 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 523 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 524 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 525 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 526 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 527 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 528 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 529 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 530 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 531 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 532 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 533 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 534 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 535 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 536 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 537 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 538 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 539 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 540 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 541 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 542 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 543 "data/maps/Luxurawork/scripts.pory"
	waitse
# 544 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_open
# 545 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 546 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 547 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 548 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 549 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 550 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 551 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 552 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_4
# 553 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 554 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 555 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 556 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 557 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 558 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 559 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 560 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 561 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 562 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 563 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 564 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 565 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 566 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_6
# 567 "data/maps/Luxurawork/scripts.pory"
	waitse
# 568 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_7
# 569 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 570 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 571 "data/maps/Luxurawork/scripts.pory"
	waitse
# 572 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_8
# 573 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_9
# 574 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 575 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 576 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_11
# 577 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 578 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 579 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_4
# 580 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 581 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 582 "data/maps/Luxurawork/scripts.pory"
	waitse
# 583 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 584 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 585 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 586 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_close
# 587 "data/maps/Luxurawork/scripts.pory"
	waitse
# 588 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 589 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 36 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_0:
# 36 "data/maps/Luxurawork/scripts.pory"
	face_up
# 36 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 72 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_1:
# 72 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_2:
# 75 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 75 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 75 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 75 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 289 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 289 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 309 "data/maps/Luxurawork/scripts.pory"
	face_left
	step_end

# 317 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 317 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 317 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 324 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 324 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 324 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 324 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 324 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 325 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 325 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 344 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 344 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 344 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 361 "data/maps/Luxurawork/scripts.pory"
trage_Movement_6:
# 361 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 361 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 361 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 361 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 361 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 376 "data/maps/Luxurawork/scripts.pory"
trage_Movement_7:
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 376 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 508 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 508 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 508 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 522 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
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
	walk_right
	step_end

# 523 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 523 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 523 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 540 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 540 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 540 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 552 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 552 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 552 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 563 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 563 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 563 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 566 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 566 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 566 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 566 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 568 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 568 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 572 "data/maps/Luxurawork/scripts.pory"
escape_Movement_8:
# 572 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 572 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 572 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 572 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 572 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 573 "data/maps/Luxurawork/scripts.pory"
escape_Movement_9:
# 573 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 573 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

trageflash_Text_0:
# 21 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trageflash_Text_1:
# 25 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trageflash_Text_2:
# 29 "data/maps/Luxurawork/scripts.pory"
	.string "Hoopa$"

trageflash_Text_3:
# 30 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa!$"

trageflash_Text_4:
# 62 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trageflash_Text_5:
# 65 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trageflash_Text_6:
# 68 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trageflash_Text_7:
# 82 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 165 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 167 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 169 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 171 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 173 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all I ask, son.$"

dad_Text_5:
# 178 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, before I forget-\p"
	.string "An old friend of mine from the academy\n"
	.string "will be visiting near the end of this\l"
	.string "month.\p"
	.string "He's been very curious to meet you.$"

dad_Text_6:
# 180 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Friend?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 182 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "He wanted to meet you before the start.\p"
	.string "Don't worry he's just coming to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 184 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 186 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all he'll\n"
	.string "want to see.$"

dad_Text_10:
# 194 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 266 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}What-?$"

trage_Text_1:
# 283 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Aurthur-!! No… no, please!!$"

trage_Text_2:
# 292 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I warned you. This man crushed the\n"
	.string "Nexus Order single-handedly.\p"
	.string "He was called the strongest trainer\n"
	.string "alive…$"

trage_Text_3:
# 298 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So this is the mighty Aurthur… laid low\n"
	.string "like any other man.\p"
	.string "Even legends die, don't they?$"

trage_Text_4:
# 306 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_5:
# 311 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… so it's true.\p"
	.string "When Aurthur dies, the mighty Hoopa\n"
	.string "becomes nothing more than a broken\l"
	.string "child.\p"
	.string "How convenient.$"

trage_Text_6:
# 315 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_7:
# 318 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Listen to me-your power is gone!\p"
	.string "You can't fight them now… please, run!\p"
	.string "If they take you, everything he died\n"
	.string "for is lost!$"

trage_Text_8:
# 336 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… ran off like a frightened child.\p"
	.string "No matter, Aurthur's dead.\p"
	.string "That's what really mattered.$"

trage_Text_9:
# 340 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_10:
# 350 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No… no, this isn't real.\p"
	.string "Dad… get up… please get up!$"

trage_Text_11:
# 356 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_12:
# 359 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?… DAD!!!!$"

trage_Text_13:
# 364 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… what do we have here?\p"
	.string "Grunts! Seize them.\p"
	.string "They'll make fine test subjects.$"

trage_Text_14:
# 366 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Sir!$"

trage_Text_15:
# 370 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run!\p"
	.string "Now, hurry!!$"

trage_Text_16:
# 374 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please…\p"
	.string "Spare them.\p"
	.string "Take me instead-just, leave the\n"
	.string "children out of this.$"

trage_Text_17:
# 377 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_18:
# 378 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… Begging, Lady Elysia?\p"
	.string "How pathetic.\p"
	.string "I almost expected more from you.$"

trage_Text_19:
# 380 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You say you'd do anything?\p"
	.string "No-you WILL do what I decide.\p"
	.string "And as for your precious brats… they're\n"
	.string "coming with me.$"

trage_Text_20:
# 382 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Trust me.\p"
	.string "You won't like what happens next.$"

Hooparescue_Text_0:
# 473 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 475 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master Xylar.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 476 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 478 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 480 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master Xylar... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 482 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 484 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "Xylar.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 486 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 488 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 490 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 500 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 501 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stay where you are, kid.\p"
	.string "Orders are clear-nobody leaves this\n"
	.string "room.\p"
	.string "Test me, and you'll regret it.$"

escape_Text_2:
# 504 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira… what do we do now?$"

escape_Text_3:
# 506 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}We can't just sit here.\p"
	.string "There has to be another way out.$"

escape_Text_4:
# 517 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did you hear that…?$"

escape_Text_5:
# 519 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Come on. Let's see what it was.$"

escape_Text_6:
# 533 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa…? Why are you here…?$"

escape_Text_7:
# 537 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_NORM}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa.$"

escape_Text_8:
# 550 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You… you're helping us?$"

escape_Text_9:
# 555 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! What's going o-\p"
	.string "Wait, what the-?!$"

escape_Text_10:
# 559 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}HOOO…PAAA!!!$"

escape_Text_11:
# 576 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa… thank you.\p"
	.string "Even after everything, you're still\n"
	.string "protecting him.$"

surge::
# 395 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 398 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
