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
	speakername alistairarrive3_Text_2
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_3
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, alistairarrive3_Movement_0
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_4, MSGBOX_AUTOCLOSE
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	closemessage
# 27 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 30 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 31 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_LUXURAWORK, 10, 27
	return


# 34 "data/maps/LuxuraIndoor/scripts.pory"
traces1:
# 35 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
	step_end

# 37 "data/maps/LuxuraIndoor/scripts.pory"
traces:
# 38 "data/maps/LuxuraIndoor/scripts.pory"
	face_left
# 39 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 40 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
# 41 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 42 "data/maps/LuxuraIndoor/scripts.pory"
	face_right
# 43 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 44 "data/maps/LuxuraIndoor/scripts.pory"
	face_up
# 45 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 46 "data/maps/LuxuraIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

playerinvisible::
# 49 "data/maps/LuxuraIndoor/scripts.pory"
	hideobjectat 0xFF, MAP_LUXURA_INDOOR
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10, MAP_LUXURA_INDOOR
# 51 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11, MAP_LUXURA_INDOOR
	return


MaidZ::
# 55 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4A2, MaidZ_1
# 62 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 63 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 64 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 65 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 66 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 67 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 1, exclam
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_2
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/LuxuraIndoor/scripts.pory"
	delay 120
# 72 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 74 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_3
# 76 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	playfanfare FANFARE_OBTAIN_ITEM
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_4
# 79 "data/maps/LuxuraIndoor/scripts.pory"
	waitfanfare
# 80 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 8
# 81 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A2
# 82 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

MaidZ_1:
# 56 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 57 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 58 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 60 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Maid::
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 88 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Maid_Text_0
# 92 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidG::
# 96 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 97 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 99 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidG_Text_0
# 101 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidD::
# 105 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 106 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 107 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 108 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidD_Text_0
# 110 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidB::
# 114 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 115 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 116 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 117 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidB_Text_0
# 119 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidM::
# 123 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 124 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidM_Text_0
# 128 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidE::
# 132 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49E, MaidE_1
# 140 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 141 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 142 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 143 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 144 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 145 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 2, exclam
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	speakername felicia
# 147 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_1
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 149 "data/maps/LuxuraIndoor/scripts.pory"
	closemessage
# 150 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 152 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 153 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/LuxuraIndoor/scripts.pory"
	release
# 155 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 7
# 156 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE103_STATE, 1
	return

MaidE_1:
# 133 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 134 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidC::
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	speakername MaidZ_Text_0
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidC_Text_0
# 166 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Minccino::
# 170 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 171 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 172 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Minccino_Text_0
# 173 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 174 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Minccino_Text_1
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 177 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Grumpig::
# 181 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, Grumpig_1
# 194 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 195 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Grumpig_Text_0
# 196 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 198 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 200 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

Grumpig_1:
# 182 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Grumpig_Text_0
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1, MSGBOX_AUTOCLOSE
# 187 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 188 "data/maps/LuxuraIndoor/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 1
# 189 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 190 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 191 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Blissey::
# 204 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 205 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	speakername Blissey_Text_0
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 208 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Blissey_Text_1
# 210 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 211 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


strol::
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox strol_Text_0
# 223 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


tragedy::
# 227 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt tragedy_1
# 231 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq tragedy_2
# 234 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq tragedy_3
# 237 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq tragedy_4
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt tragedy_14
tragedy_13:
# 365 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_lt tragedy_6
# 436 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 22
	goto_if_eq tragedy_7
# 508 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_eq tragedy_8
# 582 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_gt tragedy_9
	return

tragedy_1:
# 228 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 229 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_2:
# 232 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_3:
# 235 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_4:
# 238 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 239 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 240 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 241 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 242 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 243 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 244 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 245 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 246 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 247 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 248 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 249 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 250 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 251 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 252 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 253 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 254 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 255 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 256 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 257 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 258 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 259 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 260 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 261 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 262 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 263 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 264 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 265 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 266 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 267 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 268 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 269 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 270 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 271 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 272 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 273 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 274 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 275 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 276 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 277 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 278 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 279 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 280 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 281 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 282 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 283 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 284 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 285 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 286 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 287 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 288 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 289 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 290 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 291 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 292 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 293 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 294 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 295 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 296 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 297 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 298 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_5:
# 301 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 302 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 303 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 304 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 305 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 306 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 307 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 308 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 309 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 310 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 311 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 312 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 313 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 314 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 315 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 316 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 317 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 318 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 319 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 320 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 321 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 322 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 323 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 324 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 325 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 326 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 327 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 328 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 329 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 330 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 331 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 332 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 333 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 334 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 335 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 336 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 337 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 338 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 339 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 340 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 341 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 342 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 343 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 344 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 345 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 346 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 347 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 348 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 349 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 350 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 351 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 352 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 353 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 354 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 355 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 356 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 357 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 358 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 359 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 360 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 361 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 362 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_6:
# 366 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 367 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 368 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 369 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 370 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 371 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 372 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 373 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 374 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 375 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 376 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 377 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 378 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 379 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 380 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 381 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 382 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 383 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 384 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 385 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 386 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 387 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 388 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 389 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 390 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 391 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 392 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 393 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 394 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 395 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 396 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 397 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 398 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 399 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 400 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 401 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 402 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 403 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 404 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 405 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 406 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 407 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 408 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 409 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 410 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 411 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 412 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 413 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 414 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 415 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 416 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 417 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 418 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 419 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 420 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 421 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 422 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 423 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 424 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 425 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 426 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 427 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 428 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 429 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 430 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 431 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 432 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 433 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 434 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_7:
# 437 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 438 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 439 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 440 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 441 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 442 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 443 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 444 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 445 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 446 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 447 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 448 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 449 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 450 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 451 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 452 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 453 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 454 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 455 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 456 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 457 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 458 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 459 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 460 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 461 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 462 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 463 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 464 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 465 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 466 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 467 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 468 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 469 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 470 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 471 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 472 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 473 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 474 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 475 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 476 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 477 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 478 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 479 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 480 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 481 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 482 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 483 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 484 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 485 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 486 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 487 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 488 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 489 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 490 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 491 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 492 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 493 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 494 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 495 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 496 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 497 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 498 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 499 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 500 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 501 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 502 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 503 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 504 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 505 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 506 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_8:
# 509 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 510 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 511 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 512 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 513 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 514 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 515 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 516 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 517 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 518 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 519 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 520 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 521 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 522 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 523 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10
# 524 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11
# 525 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 526 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 527 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 528 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 529 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 530 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 531 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 532 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 533 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 534 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 535 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 536 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 537 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 538 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 539 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 540 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 541 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 542 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 543 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 544 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 545 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 546 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 547 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 548 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 549 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 550 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 551 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 552 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 553 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 554 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 555 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 556 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 557 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 558 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 559 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 560 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 561 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 562 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 563 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 564 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 565 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 566 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 567 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 568 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 569 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 570 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 571 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 572 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 573 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 574 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 575 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 576 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 577 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 578 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 579 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 580 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_9:
# 584 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 585 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 586 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 22, 0x1E5, 0
# 587 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 23, 0x1ED, 0
# 588 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 22, 0x1E6, 0
# 589 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 23, 0x1EE, 0
# 590 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 38, 0x1E5, 0
# 591 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 24, 39, 0x1ED, 0
# 592 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 38, 0x1E6, 0
# 593 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 25, 39, 0x1EE, 0
# 594 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 30, 0x1E5, 0
# 595 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 31, 0x1ED, 0
# 596 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 30, 0x1E6, 0
# 597 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 31, 0x1EE, 0
# 598 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 599 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 600 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 601 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 602 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 603 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 604 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 605 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 606 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 607 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 608 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 609 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 610 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 611 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 612 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 613 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 614 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 615 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 616 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 617 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 618 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 619 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 620 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 621 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 622 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 623 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 624 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 625 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 626 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 627 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 628 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 629 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 630 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 631 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 632 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 633 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 634 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 635 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 636 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 637 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 638 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 639 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 640 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 641 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 642 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 643 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 644 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 645 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 646 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 647 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 648 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 649 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 650 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 651 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 652 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 653 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 654 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 655 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_14:
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt tragedy_5
	goto tragedy_13


# 659 "data/maps/LuxuraIndoor/scripts.pory"
rop:
# 660 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 661 "data/maps/LuxuraIndoor/scripts.pory"
	walk_right
	step_end

# 664 "data/maps/LuxuraIndoor/scripts.pory"
rope:
# 665 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

alistairarrive4::
# 669 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 670 "data/maps/LuxuraIndoor/scripts.pory"
	special HealPlayerParty
# 671 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 672 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_0, MSGBOX_AUTOCLOSE
# 673 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 674 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 675 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 8, exclam
# 676 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, traces1
# 677 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_2
# 678 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_1, MSGBOX_AUTOCLOSE
# 679 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_PIN
# 680 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, exclam
# 681 "data/maps/LuxuraIndoor/scripts.pory"
	speakername alistairarrive3_Text_0
# 682 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_2, MSGBOX_AUTOCLOSE
# 683 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0xFF, alistairgone3
# 684 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 7, alistairgone
# 685 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 8, alistairgone1
# 686 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 687 "data/maps/LuxuraIndoor/scripts.pory"
	playse SE_EXIT
# 688 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 689 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 690 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 691 "data/maps/LuxuraIndoor/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPY, 12, 15, 8, 4, DIR_SOUTH
# 692 "data/maps/LuxuraIndoor/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 693 "data/maps/LuxuraIndoor/scripts.pory"
	special SpawnCameraObject
# 694 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0x7F, alistairgone2
# 695 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 696 "data/maps/LuxuraIndoor/scripts.pory"
	delay 120
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0x7F, alistairarrive4_Movement_0
# 698 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 699 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 0
# 700 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 701 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 702 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 1
# 703 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 704 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 705 "data/maps/LuxuraIndoor/scripts.pory"
	special ClearMugshot
# 706 "data/maps/LuxuraIndoor/scripts.pory"
	resumefakertc
# 707 "data/maps/LuxuraIndoor/scripts.pory"
	initclock 0, 10
# 708 "data/maps/LuxuraIndoor/scripts.pory"
	fwdweekday 6
# 709 "data/maps/LuxuraIndoor/scripts.pory"
	pausefakertc
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 24
# 711 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_AFTERTRAGEDY_MUSIC
# 712 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
	return


# 714 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone3:
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
	step_end

# 718 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone:
# 719 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 723 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone1:
# 724 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
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
# 727 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 729 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone2:
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/LuxuraIndoor/scripts.pory"
alistairarrive3_Movement_0:
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	walk_in_place_down
	step_end

# 697 "data/maps/LuxuraIndoor/scripts.pory"
alistairarrive4_Movement_0:
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 697 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

alistairarrive3_Text_0:
# 14 "data/maps/LuxuraIndoor/scripts.pory"
	.string "???$"

alistairarrive3_Text_1:
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther.....Elysia...Xylar...where are you?$"

alistairarrive3_Text_2:
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Alakazam$"

alistairarrive3_Text_3:
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This place is filled with grief and\n"
	.string "violence.\p"
	.string "There are faint traces of memories\n"
	.string "lingering here.\p"
	.string "Shall I show you?$"

alistairarrive3_Text_4:
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}....$"

MaidZ_Text_0:
# 58 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Maid$"

MaidZ_Text_1:
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Young master, please let me know if you\n"
	.string "need anything.$"

MaidZ_Text_2:
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your shoes?\p"
	.string "I'll go get it right away.$"

MaidZ_Text_3:
# 74 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Here you go!$"

MaidZ_Text_4:
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Recieved {COLOR BLUE}{SHADOW LIGHT_GRAY}RUNNING SHOES.$"

Maid_Text_0:
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Young master, please let me know if you\n"
	.string "need anything.$"

MaidG_Text_0:
# 99 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Grumpig helps us by using its psychic\n"
	.string "powers to precisely measure and mix the\l"
	.string "ingredients, ensuring perfect results\l"
	.string "every time.$"

MaidD_Text_0:
# 108 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm just finishing up the dishes and will\n"
	.string "have everything cleaned and put away\l"
	.string "shortly.$"

MaidB_Text_0:
# 117 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Having Blissey in the kitchen ensures\n"
	.string "that every dish is prepared with care\l"
	.string "and has a touch of healing energy,\l"
	.string "making meals not only delicious but also\l"
	.string "comforting.$"

MaidM_Text_0:
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}With Minccino around, cleaning is a\n"
	.string "breeze, its Swift Swipes keep\l"
	.string "everything spotless and organized in\l"
	.string "no time.$"

MaidE_Text_0:
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lady Elysia is so considerate, she\n"
	.string "knows I love reading, so she's given me\l"
	.string "a break in the library to enjoy my book.$"

MaidE_Text_1:
# 147 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What? Lady Elysia is asking for me?\p"
	.string "I'll be on my way.$"

MaidC_Text_0:
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm just dusting the shelves in the\n"
	.string "library to keep everything neat.$"

Minccino_Text_0:
# 172 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Minccino$"

Minccino_Text_1:
# 174 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Chii, chii! Min-min!$"

Grumpig_Text_0:
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Grumpig$"

Grumpig_Text_1:
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Pii, pii! Grrum, grrum!$"

Blissey_Text_0:
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Blissey$"

Blissey_Text_1:
# 208 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Hoo, hoo! Blii, bliiss!$"

strol_Text_0:
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	.string "It's time for my stroll with Mira.\p"
	.string "I should go tell her.$"

alistairarrive4_Text_0:
# 672 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No...This wasn't supposed to happen.\p"
	.string "Aurther, Elysia.......How could this......!\p"
	.string "$"

alistairarrive4_Text_1:
# 678 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}The boy......he escaped. His emotions are\n"
	.string "vivid, almost overwhelming.\p"
	.string "Rage, sorrow, despair and an unknown\n"
	.string "presence.\n"
	.string "I can sense where he went.$"

alistairarrive4_Text_2:
# 682 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar survived?\p"
	.string "That's all that matters now.\n"
	.string "If he is out there I'll find him no\l"
	.string "matter what happens!\p"
	.string "Let's go!$"

felicia::
# 214 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Felicia$"
