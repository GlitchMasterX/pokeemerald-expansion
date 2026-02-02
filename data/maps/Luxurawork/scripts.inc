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
	destroyfollowernpc
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
	msgbox trage_Text_0
# 213 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 214 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 215 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 216 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1
# 217 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 218 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 219 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA_UNBOUND, CRY_MODE_ROAR_1
# 220 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 221 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2
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
	waitmoncry
# 252 "data/maps/Luxurawork/scripts.pory"
	waitbuttonpress
# 253 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 254 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3
# 255 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 256 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 257 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4
# 258 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 259 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 260 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5
# 261 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 262 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 263 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 264 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, trage_Movement_0
# 265 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 266 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 267 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6
# 268 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 269 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 270 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trageflash_Movement_2
# 271 "data/maps/Luxurawork/scripts.pory"
	waitmovement 12
# 272 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_BITE
# 273 "data/maps/Luxurawork/scripts.pory"
	waitse
# 274 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, run
# 275 "data/maps/Luxurawork/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
# 276 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 277 "data/maps/Luxurawork/scripts.pory"
	msgbox trageflash_Text_7
# 278 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 279 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 280 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 281 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 282 "data/maps/Luxurawork/scripts.pory"
	speakername name3
# 283 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7
# 284 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 285 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 286 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 287 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 288 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 289 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 290 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, exclam
# 292 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 293 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 294 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_1
# 295 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 296 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_9
# 297 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10
# 298 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 299 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 300 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 301 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 302 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 303 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 304 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 305 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 306 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, revert
# 307 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, reverte
# 308 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 309 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 310 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 311 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12
# 312 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 313 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 314 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_2
# 315 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 316 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13
# 317 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 318 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 319 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 320 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14
# 321 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 322 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 323 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_3
# 324 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15
# 325 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 326 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 327 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 328 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_open
# 329 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 330 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_4
# 331 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, trage_Movement_5
# 332 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 333 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_IN
# 334 "data/maps/Luxurawork/scripts.pory"
	waitse
# 335 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, invisible
# 336 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 337 "data/maps/Luxurawork/scripts.pory"
	playse SE_WARP_OUT
# 338 "data/maps/Luxurawork/scripts.pory"
	waitse
# 339 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 340 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, portal_close
# 341 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 342 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16
# 343 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 344 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 345 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_9
# 346 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_17
# 347 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 348 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 349 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 350 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, trage_Movement_6
# 351 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 352 "data/maps/Luxurawork/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 353 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 354 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 355 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 356 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_18, MSGBOX_AUTOCLOSE
# 357 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 358 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 359 "data/maps/Luxurawork/scripts.pory"
	applymovement 6, players
# 360 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 361 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 362 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_19, MSGBOX_AUTOCLOSE
# 363 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 364 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 365 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_20, MSGBOX_AUTOCLOSE
# 366 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 367 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_7
# 368 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 369 "data/maps/Luxurawork/scripts.pory"
	speakername surge
# 370 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_21, MSGBOX_AUTOCLOSE
# 371 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 372 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_22, MSGBOX_AUTOCLOSE
# 373 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 374 "data/maps/Luxurawork/scripts.pory"
	applymovement 7, trageflash_Movement_1
# 375 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 376 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 377 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_23, MSGBOX_AUTOCLOSE
# 378 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 379 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 380 "data/maps/Luxurawork/scripts.pory"
	speakername name2
# 381 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_24, MSGBOX_AUTOCLOSE
# 382 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 383 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, trage_Movement_8
# 384 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_25
# 385 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_26, MSGBOX_AUTOCLOSE
# 386 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_25
# 387 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_27, MSGBOX_AUTOCLOSE
# 388 "data/maps/Luxurawork/scripts.pory"
	speakername trage_Text_25
# 389 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_28, MSGBOX_AUTOCLOSE
# 390 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 391 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 392 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 393 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 394 "data/maps/Luxurawork/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_MIRA, 0x4, mirafollowerscript1
# 395 "data/maps/Luxurawork/scripts.pory"
	warp MAP_SPARKBASE, 96, 10
# 396 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 399 "data/maps/Luxurawork/scripts.pory"
capture:
# 400 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 400 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

mirafollowerscript1::
# 405 "data/maps/Luxurawork/scripts.pory"
	lock
# 406 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 407 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, mirafollowerscript1_Movement_0
# 408 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 409 "data/maps/Luxurawork/scripts.pory"
	msgbox mirafollowerscript1_Text_0
# 410 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 411 "data/maps/Luxurawork/scripts.pory"
	release
	return


# 421 "data/maps/Luxurawork/scripts.pory"
back:
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 422 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 424 "data/maps/Luxurawork/scripts.pory"
reverte:
# 425 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 426 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 427 "data/maps/Luxurawork/scripts.pory"
	face_up
# 428 "data/maps/Luxurawork/scripts.pory"
	face_left
# 429 "data/maps/Luxurawork/scripts.pory"
	face_down
# 430 "data/maps/Luxurawork/scripts.pory"
	face_right
# 431 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 435 "data/maps/Luxurawork/scripts.pory"
revert:
# 436 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 437 "data/maps/Luxurawork/scripts.pory"
	face_left
# 438 "data/maps/Luxurawork/scripts.pory"
	face_down
# 439 "data/maps/Luxurawork/scripts.pory"
	face_right
# 440 "data/maps/Luxurawork/scripts.pory"
	face_up
# 441 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 443 "data/maps/Luxurawork/scripts.pory"
moq:
# 444 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 444 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 444 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 446 "data/maps/Luxurawork/scripts.pory"
faint:
# 447 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 448 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 449 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 451 "data/maps/Luxurawork/scripts.pory"
players:
# 452 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 453 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 455 "data/maps/Luxurawork/scripts.pory"
atk:
# 456 "data/maps/Luxurawork/scripts.pory"
	face_right
# 457 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 458 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 458 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 458 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 459 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 459 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 459 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 460 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 462 "data/maps/Luxurawork/scripts.pory"
visible:
# 463 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 465 "data/maps/Luxurawork/scripts.pory"
invisible:
# 466 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 468 "data/maps/Luxurawork/scripts.pory"
mo:
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 469 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 471 "data/maps/Luxurawork/scripts.pory"
finish:
# 472 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 472 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 472 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 473 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 473 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 473 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/Luxurawork/scripts.pory"
ded:
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 476 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 479 "data/maps/Luxurawork/scripts.pory"
dede:
# 480 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 481 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 481 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 482 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 483 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

Hooparescue::
# 488 "data/maps/Luxurawork/scripts.pory"
	lock
# 489 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 490 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, trageflash_Movement_1
# 491 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 492 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_0
# 493 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 494 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_1, MSGBOX_AUTOCLOSE
# 495 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_2
# 496 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 497 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_3, MSGBOX_AUTOCLOSE
# 498 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 499 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_4, MSGBOX_AUTOCLOSE
# 500 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 501 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_5, MSGBOX_AUTOCLOSE
# 502 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 503 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_6, MSGBOX_AUTOCLOSE
# 504 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 505 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_7, MSGBOX_AUTOCLOSE
# 506 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 507 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_8, MSGBOX_AUTOCLOSE
# 508 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 509 "data/maps/Luxurawork/scripts.pory"
	msgbox Hooparescue_Text_9, MSGBOX_AUTOCLOSE
# 510 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 511 "data/maps/Luxurawork/scripts.pory"
	release
# 512 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


escape::
# 516 "data/maps/Luxurawork/scripts.pory"
	lock
# 517 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 518 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 519 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 520 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_1, MSGBOX_AUTOCLOSE
# 521 "data/maps/Luxurawork/scripts.pory"
	facefollowernpc
# 522 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 523 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_2, MSGBOX_AUTOCLOSE
# 524 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 525 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_3, MSGBOX_AUTOCLOSE
# 526 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 527 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 528 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 529 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 530 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 531 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 532 "data/maps/Luxurawork/scripts.pory"
	playse SE_BIKE_BELL
# 533 "data/maps/Luxurawork/scripts.pory"
	waitse
# 534 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_HEAL_BELL
# 535 "data/maps/Luxurawork/scripts.pory"
	speakername Xylar1
# 536 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_4, MSGBOX_AUTOCLOSE
# 537 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 538 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_5, MSGBOX_AUTOCLOSE
# 539 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 540 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 541 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_1
# 542 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_2
# 543 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 544 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 545 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 546 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 547 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_0
# 548 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_0
# 549 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 550 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 551 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 552 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_6, MSGBOX_AUTOCLOSE
# 553 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 554 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_WEAK
# 555 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 556 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_7, MSGBOX_AUTOCLOSE
# 557 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 558 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 559 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_3
# 560 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 561 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 562 "data/maps/Luxurawork/scripts.pory"
	waitse
# 563 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_open
# 564 "data/maps/Luxurawork/scripts.pory"
	playse SE_PIN
# 565 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, exclam
# 566 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, exclam
# 567 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 568 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 569 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_8
# 570 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 571 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_4
# 572 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 573 "data/maps/Luxurawork/scripts.pory"
	speakername escape_Text_0
# 574 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_9
# 575 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 576 "data/maps/Luxurawork/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_HIGH_PITCH
# 577 "data/maps/Luxurawork/scripts.pory"
	speakername trageflash_Text_2
# 578 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_10
# 579 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 580 "data/maps/Luxurawork/scripts.pory"
	waitmoncry
# 581 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 582 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_5
# 583 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 584 "data/maps/Luxurawork/scripts.pory"
	playse SE_BANG
# 585 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, escape_Movement_6
# 586 "data/maps/Luxurawork/scripts.pory"
	waitse
# 587 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFF, escape_Movement_7
# 588 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 589 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 590 "data/maps/Luxurawork/scripts.pory"
	waitse
# 591 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, escape_Movement_8
# 592 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, escape_Movement_9
# 593 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 594 "data/maps/Luxurawork/scripts.pory"
	speakername name4
# 595 "data/maps/Luxurawork/scripts.pory"
	msgbox escape_Text_11
# 596 "data/maps/Luxurawork/scripts.pory"
	closemessage
# 597 "data/maps/Luxurawork/scripts.pory"
	removefieldmugshot
# 598 "data/maps/Luxurawork/scripts.pory"
	applymovement 0xFD, trage_Movement_5
# 599 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 600 "data/maps/Luxurawork/scripts.pory"
	playse SE_EXIT
# 601 "data/maps/Luxurawork/scripts.pory"
	waitse
# 602 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFF
# 603 "data/maps/Luxurawork/scripts.pory"
	removeobject 0xFD
# 604 "data/maps/Luxurawork/scripts.pory"
	playse SE_M_TELEPORT
# 605 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, portal_close
# 606 "data/maps/Luxurawork/scripts.pory"
	waitse
# 607 "data/maps/Luxurawork/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 11
# 608 "data/maps/Luxurawork/scripts.pory"
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

# 264 "data/maps/Luxurawork/scripts.pory"
trage_Movement_0:
# 264 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 264 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 294 "data/maps/Luxurawork/scripts.pory"
trage_Movement_1:
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 294 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 314 "data/maps/Luxurawork/scripts.pory"
trage_Movement_2:
# 314 "data/maps/Luxurawork/scripts.pory"
	face_left
	step_end

# 323 "data/maps/Luxurawork/scripts.pory"
trage_Movement_3:
# 323 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 323 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 330 "data/maps/Luxurawork/scripts.pory"
trage_Movement_4:
# 330 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 330 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 330 "data/maps/Luxurawork/scripts.pory"
	walk_fast_left
# 330 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 331 "data/maps/Luxurawork/scripts.pory"
trage_Movement_5:
# 331 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 350 "data/maps/Luxurawork/scripts.pory"
trage_Movement_6:
# 350 "data/maps/Luxurawork/scripts.pory"
	spy_vanish
# 350 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 367 "data/maps/Luxurawork/scripts.pory"
trage_Movement_7:
# 367 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 367 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 367 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 367 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 367 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/Luxurawork/scripts.pory"
trage_Movement_8:
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 383 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 407 "data/maps/Luxurawork/scripts.pory"
mirafollowerscript1_Movement_0:
# 407 "data/maps/Luxurawork/scripts.pory"
	emote_happy
	step_end

# 527 "data/maps/Luxurawork/scripts.pory"
escape_Movement_0:
# 527 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 527 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 541 "data/maps/Luxurawork/scripts.pory"
escape_Movement_1:
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 541 "data/maps/Luxurawork/scripts.pory"
	walk_right
	step_end

# 542 "data/maps/Luxurawork/scripts.pory"
escape_Movement_2:
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 542 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 542 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 559 "data/maps/Luxurawork/scripts.pory"
escape_Movement_3:
# 559 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 559 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 571 "data/maps/Luxurawork/scripts.pory"
escape_Movement_4:
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 571 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 571 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

# 582 "data/maps/Luxurawork/scripts.pory"
escape_Movement_5:
# 582 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 582 "data/maps/Luxurawork/scripts.pory"
	walk_left
	step_end

# 585 "data/maps/Luxurawork/scripts.pory"
escape_Movement_6:
# 585 "data/maps/Luxurawork/scripts.pory"
	slide_up
# 585 "data/maps/Luxurawork/scripts.pory"
	slide_down
# 585 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 587 "data/maps/Luxurawork/scripts.pory"
escape_Movement_7:
# 587 "data/maps/Luxurawork/scripts.pory"
	jump_up
	step_end

# 591 "data/maps/Luxurawork/scripts.pory"
escape_Movement_8:
# 591 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 591 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 591 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 591 "data/maps/Luxurawork/scripts.pory"
	walk_fast_down
# 591 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 592 "data/maps/Luxurawork/scripts.pory"
escape_Movement_9:
# 592 "data/maps/Luxurawork/scripts.pory"
	walk_right
# 592 "data/maps/Luxurawork/scripts.pory"
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}, all set for the academy?$"

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
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, {PLAYER}, before I forget-\p"
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
# 212 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like I'm down to my last one…$"

trage_Text_1:
# 216 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa…\pFinish it.$"

trage_Text_2:
# 221 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_UNBOUND}{EMOTE_NORMAL}Hooo...paaa!$"

trage_Text_3:
# 254 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong… stronger than I expected.$"

trage_Text_4:
# 257 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}You call that strength?$"

trage_Text_5:
# 260 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're pitiful, Surge.\p"
	.string "This is where it ends.$"

trage_Text_6:
# 267 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What-?$"

trage_Text_7:
# 283 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_BLOOD}Cough... Cough...\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}{FONT_SHORT}{PLAYER}....Elysia....Mira..I'm sorry....$"

trage_Text_8:
# 287 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Aurthur-!! No… no, please!!$"

trage_Text_9:
# 296 "data/maps/Luxurawork/scripts.pory"
	.string "???$"

trage_Text_10:
# 297 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I warned you. This man crushed the\n"
	.string "Nexus Order single-handedly.\p"
	.string "He was called the strongest trainer\n"
	.string "alive…$"

trage_Text_11:
# 303 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So this is the mighty Aurthur… laid low\n"
	.string "like any other man.\p"
	.string "Even legends die, don't they?$"

trage_Text_12:
# 311 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_TEAR}..........$"

trage_Text_13:
# 316 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… so it's true.\p"
	.string "When Aurthur dies, the mighty Hoopa\n"
	.string "becomes nothing more than a broken\l"
	.string "child.\p"
	.string "How convenient.$"

trage_Text_14:
# 320 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa!$"

trage_Text_15:
# 324 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Listen to me-your power is gone!\p"
	.string "You can't fight them now… please, run!\p"
	.string "If they take you, everything he died\n"
	.string "for is lost!$"

trage_Text_16:
# 342 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… ran off like a frightened child.\p"
	.string "No matter, Aurthur's dead.\p"
	.string "That's what really mattered.$"

trage_Text_17:
# 346 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_18:
# 356 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No… no, this isn't real.\p"
	.string "Dad… get up… please get up!$"

trage_Text_19:
# 362 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}({PLAYER} stares at his father's\n"
	.string "lifeless body, blood soaking the\l"
	.string "ground.)$"

trage_Text_20:
# 365 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?… DAD!!!!$"

trage_Text_21:
# 370 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… what do we have here?\p"
	.string "Grunts! Seize them.\p"
	.string "They'll make fine test subjects.$"

trage_Text_22:
# 372 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Sir!$"

trage_Text_23:
# 377 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take {PLAYER} and run!\p"
	.string "Now, hurry!!$"

trage_Text_24:
# 381 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Please…\p"
	.string "Spare them.\p"
	.string "Take me instead-just, leave the\n"
	.string "children out of this.$"

trage_Text_25:
# 384 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

trage_Text_26:
# 385 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah… Begging, Lady Elysia?\p"
	.string "How pathetic.\p"
	.string "I almost expected more from you.$"

trage_Text_27:
# 387 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You say you'd do anything?\p"
	.string "No-you WILL do what I decide.\p"
	.string "And as for your precious brats… they're\n"
	.string "coming with me.$"

trage_Text_28:
# 389 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Trust me.\p"
	.string "You won't like what happens next.$"

mirafollowerscript1_Text_0:
# 409 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Master {PLAYER}, I'll\n"
	.string "always be with you.$"

Hooparescue_Text_0:
# 492 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira!$"

Hooparescue_Text_1:
# 494 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}It's alright, Master {PLAYER}.\p"
	.string "I'm here. I'm not going anywhere.$"

Hooparescue_Text_2:
# 495 "data/maps/Luxurawork/scripts.pory"
	.string "(She hugs him tightly.)$"

Hooparescue_Text_3:
# 497 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}They… They took Dad.\p"
	.string "I saw him… He wasn't moving...$"

Hooparescue_Text_4:
# 499 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}I know, Master {PLAYER}... I know.\p"
	.string "But right now, you need to be strong.\p"
	.string "For him. For your mother.\p"
	.string "They wouldn't want you to be scared.$"

Hooparescue_Text_5:
# 501 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I am scared... I don't understand…\p"
	.string "Why is this happening? Why did they\n"
	.string "hurt Dad?$"

Hooparescue_Text_6:
# 503 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Because the world isn't fair, Master\n"
	.string "{PLAYER}.\p"
	.string "Sometimes, terrible people do terrible\n"
	.string "things.\p"
	.string "But listen to me you are not alone. You\n"
	.string "have me.\p"
	.string "And I'll be always with you.$"

Hooparescue_Text_7:
# 505 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

Hooparescue_Text_8:
# 507 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}With all my heart.$"

Hooparescue_Text_9:
# 509 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}But first, we need to escape from here.$"

escape_Text_0:
# 519 "data/maps/Luxurawork/scripts.pory"
	.string "Grunt$"

escape_Text_1:
# 520 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stay where you are, kid.\p"
	.string "Orders are clear-nobody leaves this\n"
	.string "room.\p"
	.string "Test me, and you'll regret it.$"

escape_Text_2:
# 523 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira… what do we do now?$"

escape_Text_3:
# 525 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}We can't just sit here.\p"
	.string "There has to be another way out.$"

escape_Text_4:
# 536 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did you hear that…?$"

escape_Text_5:
# 538 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Come on. Let's see what it was.$"

escape_Text_6:
# 552 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa…? Why are you here…?$"

escape_Text_7:
# 556 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_SAD}{COLOR RED}{SHADOW LIGHT_GRAY}Hooo....paaa.$"

escape_Text_8:
# 569 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You… you're helping us?$"

escape_Text_9:
# 574 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! What's going o-\p"
	.string "Wait, what the-?!$"

escape_Text_10:
# 578 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_HOOPA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}HOOO…PAAA!!!$"

escape_Text_11:
# 595 "data/maps/Luxurawork/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa… thank you.\p"
	.string "Even after everything, you're still\n"
	.string "protecting him.$"

surge::
# 414 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 417 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
