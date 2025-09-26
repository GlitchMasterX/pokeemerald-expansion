LuxuraIndoor_MapScripts::
# 2 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, tragedy
# 3 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 5, indoor
# 5 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 22, alistairarrive3
# 6 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 23, alistairarrive4
	.2byte 0

LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 22, playerinvisible
# 9 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 23, playerinvisible
	.2byte 0


alistairarrive3::
# 13 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 14 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 8, traces
# 17 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 18 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, traces1
# 19 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_2
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, alistairarrive3_Movement_0
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_3, MSGBOX_AUTOCLOSE
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	closemessage
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 27 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 30 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_LUXURAWORK, 10, 27
	return


# 33 "data/maps/LuxuraIndoor/scripts.pory"
traces1:
# 34 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
	step_end

# 36 "data/maps/LuxuraIndoor/scripts.pory"
traces:
# 37 "data/maps/LuxuraIndoor/scripts.pory"
	face_left
# 38 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 39 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
# 40 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 41 "data/maps/LuxuraIndoor/scripts.pory"
	face_right
# 42 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 43 "data/maps/LuxuraIndoor/scripts.pory"
	face_up
# 44 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 45 "data/maps/LuxuraIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

playerinvisible::
# 48 "data/maps/LuxuraIndoor/scripts.pory"
	hideobjectat 0xFF, MAP_LUXURA_INDOOR
# 49 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10, MAP_LUXURA_INDOOR
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11, MAP_LUXURA_INDOOR
	return


MaidZ::
# 54 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4A2, MaidZ_1
# 61 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 62 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 63 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 64 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 65 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 66 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 1, exclam
# 67 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_2
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	delay 120
# 71 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 72 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 73 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_3
# 75 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 76 "data/maps/LuxuraIndoor/scripts.pory"
	playfanfare FANFARE_OBTAIN_ITEM
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_4
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	waitfanfare
# 79 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 8
# 80 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A2
# 81 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

MaidZ_1:
# 55 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 56 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 57 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 58 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Maid::
# 86 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 88 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Maid_Text_0
# 91 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidG::
# 95 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 96 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 97 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidG_Text_0
# 100 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidD::
# 104 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 105 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 106 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 107 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidD_Text_0
# 109 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidB::
# 113 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 114 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 115 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 116 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidB_Text_0
# 118 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidM::
# 122 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 123 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 124 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidM_Text_0
# 127 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidE::
# 131 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49E, MaidE_1
# 139 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 140 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 141 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 142 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 143 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 144 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 2, exclam
# 145 "data/maps/LuxuraIndoor/scripts.pory"
	speakername felicia
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_1
# 147 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	closemessage
# 149 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 150 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 151 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 152 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 153 "data/maps/LuxuraIndoor/scripts.pory"
	release
# 154 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 7
# 155 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE103_STATE, 1
	return

MaidE_1:
# 132 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 133 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 134 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 137 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidC::
# 160 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidC_Text_0
# 165 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Minccino::
# 169 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 170 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 171 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Minccino_Text_0
# 172 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 173 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Minccino_Text_1
# 175 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Grumpig::
# 180 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, Grumpig_1
# 193 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 194 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Grumpig_Text_0
# 195 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 196 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 198 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

Grumpig_1:
# 181 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 182 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Grumpig_Text_0
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1, MSGBOX_AUTOCLOSE
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 187 "data/maps/LuxuraIndoor/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 1
# 188 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 189 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 190 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Blissey::
# 203 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 204 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 205 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Blissey_Text_0
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Blissey_Text_1
# 209 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 210 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


strol::
# 219 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox strol_Text_0
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


tragedy::
# 226 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt tragedy_1
# 230 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq tragedy_2
# 233 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq tragedy_3
# 236 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq tragedy_4
# 299 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt tragedy_14
tragedy_13:
# 364 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_lt tragedy_6
# 435 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 22
	goto_if_eq tragedy_7
# 507 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_eq tragedy_8
# 581 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_gt tragedy_9
	return

tragedy_1:
# 227 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 228 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_2:
# 231 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_3:
# 234 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_4:
# 237 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 238 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 239 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 240 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 241 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 242 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 243 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 244 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 245 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 246 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 247 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 248 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 249 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 250 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 251 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 252 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 253 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 254 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 255 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 256 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 257 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 258 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 259 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 260 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 261 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 262 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 263 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 264 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 265 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 266 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 267 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 268 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 269 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 270 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 271 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 272 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 273 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 274 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 275 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 276 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 277 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 278 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 279 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 280 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 281 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 282 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 283 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 284 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 285 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 286 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 287 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 288 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 289 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 290 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 291 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 292 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 293 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 294 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 295 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 296 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 297 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_5:
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 301 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 302 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 303 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 304 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 305 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 306 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 307 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 308 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 309 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 310 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 311 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 312 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 313 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 314 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 315 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 316 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 317 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 318 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 319 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 320 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 321 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 322 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 323 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 324 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 325 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 326 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 327 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 328 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 329 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 330 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 331 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 332 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 333 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 334 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 335 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 336 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 337 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 338 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 339 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 340 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 341 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 342 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 343 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 344 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 345 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 346 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 347 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 348 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 349 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 350 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 351 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 352 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 353 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 354 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 355 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 356 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 357 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 358 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 359 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 360 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 361 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_6:
# 365 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 366 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 367 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 368 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 369 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 370 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 371 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 372 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 373 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 374 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 375 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 376 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 377 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 378 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 379 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 380 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 381 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 382 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 383 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 384 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 385 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 386 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 387 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 388 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 389 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 390 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 391 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 392 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 393 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 394 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 395 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 396 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 397 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 398 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 399 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 400 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 401 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 402 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 403 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 404 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 405 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 406 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 407 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 408 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 409 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 410 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 411 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 412 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 413 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 414 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 415 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 416 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 417 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 418 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 419 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 420 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 421 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 422 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 423 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 424 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 425 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 426 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 427 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 428 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 429 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 430 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 431 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 432 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 433 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_7:
# 436 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 437 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 438 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 439 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 440 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 441 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 442 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 443 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 444 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 445 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 446 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 447 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 448 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 449 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 450 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 451 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 452 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 453 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 454 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 455 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 456 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 457 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 458 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 459 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 460 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 461 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 462 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 463 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 464 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 465 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 466 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 467 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 468 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 469 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 470 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 471 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 472 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 473 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 474 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 475 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 476 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 477 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 478 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 479 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 480 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 481 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 482 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 483 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 484 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 485 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 486 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 487 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 488 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 489 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 490 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 491 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 492 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 493 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 494 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 495 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 496 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 497 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 498 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 499 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 500 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 501 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 502 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 503 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 504 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 505 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_8:
# 508 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 509 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 510 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 511 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 512 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 513 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 514 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 515 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 516 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 517 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 518 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 519 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 520 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 521 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 522 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10
# 523 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11
# 524 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 525 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 526 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 527 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 528 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 529 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 530 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 531 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 532 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 533 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 534 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 535 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 536 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 537 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 538 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 539 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 540 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 541 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 542 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 543 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 544 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 545 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 546 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 547 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 548 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 549 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 550 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 551 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 552 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 553 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 554 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 555 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 556 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 557 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 558 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 559 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 560 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 561 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 562 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 563 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 564 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 565 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 566 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 567 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 568 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 569 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 570 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 571 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 572 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 573 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 574 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 575 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 576 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 577 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 578 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 579 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_9:
# 583 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 584 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 585 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 586 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 587 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 588 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 589 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 590 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 591 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 592 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 593 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 594 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 595 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 596 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 597 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 598 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 599 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 600 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 601 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 602 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 603 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 604 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 605 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 606 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 607 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 608 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 609 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 610 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 611 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 612 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 613 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 614 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 615 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 616 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 617 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 618 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 619 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 620 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 621 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 622 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 623 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 624 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 625 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 626 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 627 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 628 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 629 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 630 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 631 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 632 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 633 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 634 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 635 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 636 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 637 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 638 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 639 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 640 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 641 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 642 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 643 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 644 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 645 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 646 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 647 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 648 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 649 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 650 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 651 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 652 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 653 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 654 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_14:
# 299 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt tragedy_5
	goto tragedy_13


# 658 "data/maps/LuxuraIndoor/scripts.pory"
rop:
# 659 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 660 "data/maps/LuxuraIndoor/scripts.pory"
	walk_right
	step_end

# 663 "data/maps/LuxuraIndoor/scripts.pory"
rope:
# 664 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

alistairarrive4::
# 668 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 669 "data/maps/LuxuraIndoor/scripts.pory"
	special HealPlayerParty
# 670 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 671 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_0, MSGBOX_AUTOCLOSE
# 672 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 673 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 674 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 8, exclam
# 675 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, traces1
# 676 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_1, MSGBOX_AUTOCLOSE
# 677 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 678 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, exclam
# 679 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 680 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_2, MSGBOX_AUTOCLOSE
# 681 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0xFF, alistairgone3
# 682 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, alistairgone
# 683 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 8, alistairgone1
# 684 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 685 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_EXIT
# 686 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 687 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 688 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 689 "data/maps/LuxuraIndoor/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPY, 12, 15, 8, 4, DIR_SOUTH
# 690 "data/maps/LuxuraIndoor/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 691 "data/maps/LuxuraIndoor/scripts.pory"
	special SpawnCameraObject
# 692 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0x7F, alistairgone2
# 693 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 694 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 0
# 695 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 696 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 1
# 698 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 699 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 700 "data/maps/LuxuraIndoor/scripts.pory"
	special ClearMugshot
# 701 "data/maps/LuxuraIndoor/scripts.pory"
	resumefakertc
# 702 "data/maps/LuxuraIndoor/scripts.pory"
	initclock 0, 10
# 703 "data/maps/LuxuraIndoor/scripts.pory"
	fwdweekday 6
# 704 "data/maps/LuxuraIndoor/scripts.pory"
	pausefakertc
# 705 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 24
# 706 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_AFTERTRAGEDY_MUSIC
# 707 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
	return


# 709 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone3:
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

# 713 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone:
# 714 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 716 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 718 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone1:
# 719 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 722 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 724 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone2:
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

# 21 "data/maps/LuxuraIndoor/scripts.pory"
alistairarrive3_Movement_0:
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	walk_in_place_down
	step_end

alistairarrive3_Text_0:
# 14 "data/maps/LuxuraIndoor/scripts.pory"
	.string "???$"

alistairarrive3_Text_1:
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther.....Elysia...Xylar...where are you?$"

alistairarrive3_Text_2:
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This place is filled with grief and\n"
	.string "violence.\p"
	.string "There are faint traces of memories\n"
	.string "lingering here.\p"
	.string "Shall I show you?$"

alistairarrive3_Text_3:
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}....$"

MaidZ_Text_0:
# 57 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Maid$"

MaidZ_Text_1:
# 58 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Young master, please let me know if you\n"
	.string "need anything.$"

MaidZ_Text_2:
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your shoes?\p"
	.string "I'll go get it right away.$"

MaidZ_Text_3:
# 73 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Here you go!$"

MaidZ_Text_4:
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Recieved {COLOR BLUE}{SHADOW LIGHT_GRAY}RUNNING SHOES.$"

Maid_Text_0:
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Young master, please let me know if you\n"
	.string "need anything.$"

MaidG_Text_0:
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Grumpig helps us by using its psychic\n"
	.string "powers to precisely measure and mix the\l"
	.string "ingredients, ensuring perfect results\l"
	.string "every time.$"

MaidD_Text_0:
# 107 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm just finishing up the dishes and will\n"
	.string "have everything cleaned and put away\l"
	.string "shortly.$"

MaidB_Text_0:
# 116 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Having Blissey in the kitchen ensures\n"
	.string "that every dish is prepared with care\l"
	.string "and has a touch of healing energy,\l"
	.string "making meals not only delicious but also\l"
	.string "comforting.$"

MaidM_Text_0:
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}With Minccino around, cleaning is a\n"
	.string "breeze, its Swift Swipes keep\l"
	.string "everything spotless and organized in\l"
	.string "no time.$"

MaidE_Text_0:
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lady Elysia is so considerate, she\n"
	.string "knows I love reading, so she's given me\l"
	.string "a break in the library to enjoy my book.$"

MaidE_Text_1:
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What? Lady Elysia is asking for me?\p"
	.string "I'll be on my way.$"

MaidC_Text_0:
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm just dusting the shelves in the\n"
	.string "library to keep everything neat.$"

Minccino_Text_0:
# 171 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Minccino$"

Minccino_Text_1:
# 173 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Chii, chii! Min-min!$"

Grumpig_Text_0:
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Grumpig$"

Grumpig_Text_1:
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Pii, pii! Grrum, grrum!$"

Blissey_Text_0:
# 205 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Blissey$"

Blissey_Text_1:
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Hoo, hoo! Blii, bliiss!$"

strol_Text_0:
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	.string "It's time for my stroll with Mira.\p"
	.string "I should go tell her.$"

alistairarrive4_Text_0:
# 671 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No...This wasn't supposed to happen.\p"
	.string "Aurther, Elysia.......How could this......!\p"
	.string "$"

alistairarrive4_Text_1:
# 676 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}The boy......he escaped. His emotions are\n"
	.string "vivid, almost overwhelming.\p"
	.string "Rage, sorrow, despair and an unknown\n"
	.string "presence.\n"
	.string "I can sense where he went.$"

alistairarrive4_Text_2:
# 680 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar survived?\p"
	.string "That's all that matters now.\n"
	.string "If he is out there I'll find him no\l"
	.string "matter what happens!\p"
	.string "Let's go!$"

felicia::
# 213 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Felicia$"
