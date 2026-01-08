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
	applymovement 0x7F, mo
# 16 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 17 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 18 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_0
# 19 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 20 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 21 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 22 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_1
# 23 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 24 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 25 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 26 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 27 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_3
# 28 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 29 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 30 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 31 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 32 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 33 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 34 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 35 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 36 "data/maps/Luxurawork/scripts.pory"
	waitse
# 37 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 38 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 39 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 40 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 41 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 42 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 43 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 44 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 45 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 46 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 47 "data/maps/Luxurawork/scripts.pory"
	waitse
# 48 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 49 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 50 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 51 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 52 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 53 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 54 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 55 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 56 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 57 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 58 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 59 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_4
# 60 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 61 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 62 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_5
# 63 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 64 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 65 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_6
# 66 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 67 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 68 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 70 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 71 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 72 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 73 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 74 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 75 "data/maps/Luxurawork/scripts.pory"
	waitse
# 76 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 77 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 78 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 80 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 81 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 82 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 83 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 85 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 86 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 88 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 89 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 90 "data/maps/Luxurawork/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 91 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 23
# 93 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_INDOOR, 14, 33
	return


Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 97 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 115 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 132 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 98 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 99 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 100 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 101 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 102 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 103 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 104 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 105 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 106 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 107 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 108 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 109 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 110 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 111 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 112 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 113 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 116 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 117 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 118 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 119 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 120 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 121 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 122 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 123 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 124 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 125 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 126 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 127 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 128 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 129 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 130 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 131 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 133 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 134 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 135 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 136 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 137 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 138 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 139 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 140 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 141 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 142 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 143 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 144 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 145 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 146 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 147 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 148 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 149 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 150 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 151 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 152 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 115 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 158 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 189 "data/maps/Luxurawork/scripts.pory"
	lockall
# 190 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 191 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 192 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 193 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 194 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 159 "data/maps/Luxurawork/scripts.pory"
	lockall
# 160 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 161 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 162 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 163 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 164 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 165 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 166 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 167 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 168 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 169 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 170 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 171 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 172 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 173 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 174 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 175 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 176 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 177 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 178 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 179 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 180 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 181 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 182 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 183 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 184 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 185 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 186 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 187 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 197 "data/maps/Luxurawork/scripts.pory"
exclam:
# 198 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 202 "data/maps/Luxurawork/scripts.pory"
	lockall
# 203 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 204 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, exclam
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 0x7F, mo
# 208 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 209 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 210 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0
# 211 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 212 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 213 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 214 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 215 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 216 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 217 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 218 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 219 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
# 220 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 221 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 222 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 223 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 224 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 225 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, trageflash_Movement_0
# 226 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 227 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 228 "data/maps/Luxurawork/scripts.pory"
	waitse
# 229 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 230 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 231 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 232 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, finish
# 233 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 234 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 235 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 236 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 237 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 238 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 239 "data/maps/Luxurawork/scripts.pory"
	waitse
# 240 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, visible
# 241 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 242 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 243 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 244 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, atk
# 245 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TAKE_DOWN
# 246 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, faint
# 247 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 248 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_RAICHU, CRY_MODE_FAINT
# 249 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 250 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 251 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 252 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 253 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 254 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4
# 255 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 256 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 257 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 258 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 259 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 260 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 261 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trageflash_Movement_1
# 262 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 263 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 264 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 265 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 266 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 267 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 268 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 269 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 270 "data/maps/Luxurawork/scripts.pory"
	waitse
# 271 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 272 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 273 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 274 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 275 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 276 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 277 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 278 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 279 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 280 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 281 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 282 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 283 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 284 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 285 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 286 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 287 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_0
# 288 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 289 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_8
# 290 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9
# 291 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 292 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 293 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 294 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 295 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 296 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10
# 297 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 298 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 299 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 300 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 301 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 302 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 303 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 304 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 305 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 306 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 307 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_1
# 308 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 309 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12
# 310 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 311 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 312 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 313 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13
# 314 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 315 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_2
# 316 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14
# 317 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 318 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 319 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 320 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 321 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 322 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_3
# 323 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_4
# 324 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 325 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 326 "data/maps/Luxurawork/scripts.pory"
	waitse
# 327 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 328 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 329 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 330 "data/maps/Luxurawork/scripts.pory"
	waitse
# 331 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 332 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 333 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 334 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15
# 335 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 336 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 337 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_8
# 338 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16
# 339 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 340 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 341 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 342 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_5
# 343 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 344 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 345 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 346 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 347 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 348 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_17, MSGBOX_AUTOCLOSE
# 349 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 350 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 351 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 352 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 353 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 354 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 355 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 356 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 357 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 358 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 359 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_6
# 360 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 361 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 362 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 363 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 364 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_21, MSGBOX_AUTOCLOSE
# 365 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trageflash_Movement_1
# 366 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 367 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 368 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_22, MSGBOX_AUTOCLOSE
# 369 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 370 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 371 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 372 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_23, MSGBOX_AUTOCLOSE
# 373 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 374 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_7
# 375 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 376 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_25, MSGBOX_AUTOCLOSE
# 377 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 378 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_26, MSGBOX_AUTOCLOSE
# 379 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_24
# 380 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_27, MSGBOX_AUTOCLOSE
# 381 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 382 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 383 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 384 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 385 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 386 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 389 "data/maps/Luxurawork/scripts.pory"
capture:
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 390 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 400 "data/maps/Luxurawork/scripts.pory"
back:
# 401 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 401 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 401 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 401 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 403 "data/maps/Luxurawork/scripts.pory"
reverte:
# 404 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 405 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 406 "data/maps/Luxurawork/scripts.pory"
	face_up
# 407 "data/maps/Luxurawork/scripts.pory"
	face_left
# 408 "data/maps/Luxurawork/scripts.pory"
	face_down
# 409 "data/maps/Luxurawork/scripts.pory"
	face_right
# 410 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 414 "data/maps/Luxurawork/scripts.pory"
revert:
# 415 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 416 "data/maps/Luxurawork/scripts.pory"
	face_left
# 417 "data/maps/Luxurawork/scripts.pory"
	face_down
# 418 "data/maps/Luxurawork/scripts.pory"
	face_right
# 419 "data/maps/Luxurawork/scripts.pory"
	face_up
# 420 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 422 "data/maps/Luxurawork/scripts.pory"
moq:
# 423 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 423 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 423 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 425 "data/maps/Luxurawork/scripts.pory"
faint:
# 426 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 427 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 428 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 430 "data/maps/Luxurawork/scripts.pory"
players:
# 431 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 432 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 434 "data/maps/Luxurawork/scripts.pory"
atk:
# 435 "data/maps/Luxurawork/scripts.pory"
	face_right
# 436 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 437 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 437 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 437 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 438 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 439 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 441 "data/maps/Luxurawork/scripts.pory"
visible:
# 442 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 444 "data/maps/Luxurawork/scripts.pory"
invisible:
# 445 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 447 "data/maps/Luxurawork/scripts.pory"
mo:
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 448 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 450 "data/maps/Luxurawork/scripts.pory"
finish:
# 451 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 451 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 451 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 452 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/Luxurawork/scripts.pory"
ded:
# 455 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 455 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 455 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 455 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 458 "data/maps/Luxurawork/scripts.pory"
dede:
# 459 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 460 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 461 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 462 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 467 "data/maps/Luxurawork/scripts.pory"
	lock
# 468 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 469 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trageflash_Movement_1
# 470 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 471 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 472 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 473 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 474 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 475 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 476 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 477 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 478 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 479 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 480 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 481 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 482 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 483 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 484 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 485 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 486 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 487 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 488 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 489 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 490 "data/maps/Luxurawork/scripts.pory"
	release
# 491 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 495 "data/maps/Luxurawork/scripts.pory"
	lock
# 496 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 497 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 498 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 499 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 500 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 501 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 502 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 503 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 504 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 505 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 506 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 507 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 508 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 509 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 510 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 511 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 512 "data/maps/Luxurawork/scripts.pory"
	waitse
# 513 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 514 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 515 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 516 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 517 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 518 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 519 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 520 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 521 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 522 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 523 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 524 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 525 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 526 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 527 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 528 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 529 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 530 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 531 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 532 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 533 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 534 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 535 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 536 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 537 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 538 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 539 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 540 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 541 "data/maps/Luxurawork/scripts.pory"
	waitse
# 542 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_open
# 543 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 544 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 545 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 546 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 547 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 548 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 549 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 550 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_4
# 551 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 552 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 553 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 554 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 555 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 556 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 557 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 558 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 559 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 560 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 561 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 562 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 563 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 564 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_6
# 565 "data/maps/Luxurawork/scripts.pory"
	waitse
# 566 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_7
# 567 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 568 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 569 "data/maps/Luxurawork/scripts.pory"
	waitse
# 570 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_8
# 571 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_9
# 572 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 573 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 574 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_11
# 575 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 576 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 577 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_4
# 578 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 579 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 580 "data/maps/Luxurawork/scripts.pory"
	waitse
# 581 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 582 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 583 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 584 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_close
# 585 "data/maps/Luxurawork/scripts.pory"
	waitse
# 586 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 587 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 33 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_0:
# 33 "data/maps/Luxurawork/scripts.pory"
	face_up
# 33 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 69 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_1:
# 69 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 72 "data/maps/Luxurawork/scripts.pory"
trageflash_Movement_2:
# 72 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 72 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 72 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 72 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 287 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 287 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 307 "data/maps/Luxurawork/scripts.pory"
	face_left
	step_end

# 315 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 315 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 315 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 322 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 322 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 322 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 322 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 322 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 323 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 323 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 342 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 342 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 342 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 359 "data/maps/Luxurawork/scripts.pory"
trage_Movement_6:
# 359 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 359 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 359 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 359 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 359 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 374 "data/maps/Luxurawork/scripts.pory"
trage_Movement_7:
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 374 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 506 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 506 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 506 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 520 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 520 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 521 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 521 "data/maps/Luxurawork/scripts.pory"
	walk_right
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
	face_right
	step_end

# 538 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 538 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 538 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 550 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 550 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 550 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 561 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 561 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 561 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 564 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 564 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 564 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 564 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 566 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 566 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 570 "data/maps/Luxurawork/scripts.pory"
escape_Movement_8:
# 570 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 570 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 570 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 570 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 570 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 571 "data/maps/Luxurawork/scripts.pory"
escape_Movement_9:
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 571 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

trageflash_Text_0:
# 18 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trageflash_Text_1:
# 22 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trageflash_Text_2:
# 26 "data/maps/Luxurawork/scripts.pory"
	.string "Hoopa$"

trageflash_Text_3:
# 27 "data/maps/Luxurawork/scripts.pory"
	.string "Hooo...paaa!$"

trageflash_Text_4:
# 59 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trageflash_Text_5:
# 62 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trageflash_Text_6:
# 65 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trageflash_Text_7:
# 79 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

dad_Text_0:
# 162 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 164 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 166 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 168 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 170 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all I ask, son.$"

dad_Text_5:
# 176 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, before I forget-\p"
	.string "An old friend of mine from the academy\n"
	.string "will be visiting near the end of this\l"
	.string "month.\p"
	.string "He's been very curious to meet you.$"

dad_Text_6:
# 178 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Friend?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 180 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha! I meant to but it slipped my\n"
	.string "mind.\p"
	.string "He wanted to meet you before the start.\p"
	.string "Don't worry he's just coming to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 182 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 184 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all he'll\n"
	.string "want to see.$"

dad_Text_10:
# 192 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 210 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trage_Text_1:
# 214 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trage_Text_2:
# 219 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa!$"

trage_Text_3:
# 251 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trage_Text_4:
# 254 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trage_Text_5:
# 257 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trage_Text_6:
# 264 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}What-?$"

trage_Text_7:
# 281 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Aurthur-!! No… no, please!!$"

trage_Text_8:
# 289 "data/maps/Luxurawork/scripts.pory"
	.string "???$"

trage_Text_9:
# 290 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I warned you. This man crushed the\n"
	.string "Nexus Order single-handedly.\p"
	.string "He was called the strongest trainer\n"
	.string "alive…$"

trage_Text_10:
# 296 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So this is the mighty Aurthur… laid low\n"
	.string "like any other man.\p"
	.string "Even legends die, don't they?$"

trage_Text_11:
# 304 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_12:
# 309 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… so it's true.\p"
	.string "When Aurthur dies, the mighty Hoopa\n"
	.string "becomes nothing more than a broken\l"
	.string "child.\p"
	.string "How convenient.$"

trage_Text_13:
# 313 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_14:
# 316 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Listen to me-your power is gone!\p"
	.string "You can't fight them now… please, run!\p"
	.string "If they take you, everything he died\n"
	.string "for is lost!$"

trage_Text_15:
# 334 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… ran off like a frightened child.\p"
	.string "No matter, Aurthur's dead.\p"
	.string "That's what really mattered.$"

trage_Text_16:
# 338 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_17:
# 348 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No… no, this isn't real.\p"
	.string "Dad… get up… please get up!$"

trage_Text_18:
# 354 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_19:
# 357 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?… DAD!!!!$"

trage_Text_20:
# 362 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… what do we have here?\p"
	.string "Grunts! Seize them.\p"
	.string "They'll make fine test subjects.$"

trage_Text_21:
# 364 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Sir!$"

trage_Text_22:
# 368 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run!\p"
	.string "Now, hurry!!$"

trage_Text_23:
# 372 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please…\p"
	.string "Spare them.\p"
	.string "Take me instead-just, leave the\n"
	.string "children out of this.$"

trage_Text_24:
# 375 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_25:
# 376 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… Begging, Lady Elysia?\p"
	.string "How pathetic.\p"
	.string "I almost expected more from you.$"

trage_Text_26:
# 378 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You say you'd do anything?\p"
	.string "No-you WILL do what I decide.\p"
	.string "And as for your precious brats… they're\n"
	.string "coming with me.$"

trage_Text_27:
# 380 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Trust me.\p"
	.string "You won't like what happens next.$"

Hooparescue_Text_0:
# 471 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 473 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master Xylar.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 474 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 476 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 478 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master Xylar... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 480 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 482 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "Xylar.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 484 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 486 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 488 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 498 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 499 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stay where you are, kid.\p"
	.string "Orders are clear-nobody leaves this\n"
	.string "room.\p"
	.string "Test me, and you'll regret it.$"

escape_Text_2:
# 502 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira… what do we do now?$"

escape_Text_3:
# 504 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}We can't just sit here.\p"
	.string "There has to be another way out.$"

escape_Text_4:
# 515 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did you hear that…?$"

escape_Text_5:
# 517 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Come on. Let's see what it was.$"

escape_Text_6:
# 531 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa…? Why are you here…?$"

escape_Text_7:
# 535 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_SAD}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa.$"

escape_Text_8:
# 548 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You… you're helping us?$"

escape_Text_9:
# 553 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! What's going o-\p"
	.string "Wait, what the-?!$"

escape_Text_10:
# 557 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}HOOO…PAAA!!!$"

escape_Text_11:
# 574 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa… thank you.\p"
	.string "Even after everything, you're still\n"
	.string "protecting him.$"

surge::
# 393 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 396 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
