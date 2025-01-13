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
	namebox unknown
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 17 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 10, exclam
# 18 "data/maps/LuxuraIndoor/scripts.pory"
	namebox unknown
# 19 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_1
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 6
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	special ClearMugshot
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	namebox unknown
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_2
# 27 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 11, traces
# 30 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 31 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 10, traces1
# 32 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 33 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_3
# 34 "data/maps/LuxuraIndoor/scripts.pory"
	namebox unknown
# 35 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive3_Text_4, MSGBOX_AUTOCLOSE
# 36 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 37 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 38 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 39 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 40 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 41 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 42 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_LUXURAWORK, 10, 27
	return


# 45 "data/maps/LuxuraIndoor/scripts.pory"
traces1:
# 46 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
	step_end

# 48 "data/maps/LuxuraIndoor/scripts.pory"
traces:
# 49 "data/maps/LuxuraIndoor/scripts.pory"
	face_left
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 51 "data/maps/LuxuraIndoor/scripts.pory"
	face_down
# 52 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 53 "data/maps/LuxuraIndoor/scripts.pory"
	face_right
# 54 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 55 "data/maps/LuxuraIndoor/scripts.pory"
	face_up
# 56 "data/maps/LuxuraIndoor/scripts.pory"
	delay_16
# 57 "data/maps/LuxuraIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

playerinvisible::
# 60 "data/maps/LuxuraIndoor/scripts.pory"
	hideobjectat 0xFF, MAP_LUXURA_INDOOR
# 61 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10, MAP_LUXURA_INDOOR
# 62 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11, MAP_LUXURA_INDOOR
	return


MaidZ::
# 66 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4A2, MaidZ_1
# 74 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 75 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 76 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 79 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 1, exclam
# 80 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 81 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_2
# 82 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 83 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 86 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_3
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 88 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	playfanfare FANFARE_OBTAIN_ITEM
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_4
# 91 "data/maps/LuxuraIndoor/scripts.pory"
	waitfanfare
# 92 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 8
# 93 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A2
# 94 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

MaidZ_1:
# 67 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 71 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 72 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Maid::
# 99 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 100 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 101 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 102 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 103 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 104 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidG::
# 108 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 109 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 110 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 111 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidG_Text_0
# 112 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 113 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidD::
# 117 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 118 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 119 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 120 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidD_Text_0
# 121 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 122 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidB::
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 127 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 128 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 129 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidB_Text_0
# 130 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 131 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidM::
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 137 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidM_Text_0
# 139 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 140 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidE::
# 144 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49E, MaidE_1
# 152 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 153 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 154 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 155 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 156 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 157 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 2, exclam
# 158 "data/maps/LuxuraIndoor/scripts.pory"
	namebox felicia
# 159 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_1
# 160 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 165 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 166 "data/maps/LuxuraIndoor/scripts.pory"
	release
# 167 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 7
# 168 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE103_STATE, 1
	return

MaidE_1:
# 145 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 147 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 149 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 150 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


MaidC::
# 173 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 174 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 175 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidC_Text_0
# 177 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 178 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Minccino::
# 182 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Minccino_Text_0
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Minccino_Text_1
# 187 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 188 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 189 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Grumpig::
# 193 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, Grumpig_1
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 208 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 209 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 210 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 211 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 212 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 213 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 214 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return

Grumpig_1:
# 194 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 195 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 196 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 198 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 200 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 201 "data/maps/LuxuraIndoor/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 1
# 202 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 203 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 204 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


Blissey::
# 218 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 219 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Blissey_Text_0
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Blissey_Text_1
# 223 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 224 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 225 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


strol::
# 234 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 235 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 236 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox strol_Text_0
# 237 "data/maps/LuxuraIndoor/scripts.pory"
	release
	return


tragedy::
# 241 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt tragedy_1
# 250 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq tragedy_2
# 259 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq tragedy_3
# 268 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq tragedy_4
# 328 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt tragedy_14
tragedy_13:
# 390 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_lt tragedy_6
# 458 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_eq tragedy_7
# 529 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_eq tragedy_8
# 600 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 23
	goto_if_gt tragedy_9
	return

tragedy_1:
# 242 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 243 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 244 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 245 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 246 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 247 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 248 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_2:
# 251 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 252 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 253 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 254 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 255 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 256 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 257 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_3:
# 260 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 261 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 262 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 263 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 264 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 265 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 266 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_4:
# 269 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 270 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 271 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 272 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 273 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 274 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 275 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 276 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 277 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 278 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 279 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 280 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 281 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 282 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 283 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 284 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 285 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 286 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 287 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 288 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 289 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 290 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 291 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 292 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 293 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 294 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 295 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 296 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 297 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 298 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 299 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 301 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 302 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 303 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 304 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 305 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 306 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 307 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 308 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 309 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 310 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 311 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 312 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 313 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 314 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 315 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 316 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 317 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 318 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 319 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 320 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 321 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 322 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 323 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 324 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 325 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 326 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_5:
# 329 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 330 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 331 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 332 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 333 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 334 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 335 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 336 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 337 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 338 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 339 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 340 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 341 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 342 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 343 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 344 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 345 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 346 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 347 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 348 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 349 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 350 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 351 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 352 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 353 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 354 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 355 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 356 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 357 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 358 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 359 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 360 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 361 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 362 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 363 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 364 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 365 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 366 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 367 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 368 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 369 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 370 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 371 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 372 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 373 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 374 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 375 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 376 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 377 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 378 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 379 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 380 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 381 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 382 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 383 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 384 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 385 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 386 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 387 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
	return

tragedy_6:
# 391 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 392 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 393 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 394 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 395 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 396 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 397 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 398 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 399 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 400 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 401 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 402 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 403 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 404 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 405 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 406 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 407 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 408 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 409 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 410 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 411 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 412 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 413 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 414 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 415 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 416 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 417 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 418 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 419 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 420 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 421 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 422 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 423 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 424 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 425 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 426 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 427 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 428 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 429 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 430 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 431 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 432 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 433 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 434 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 435 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 436 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 437 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 438 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 439 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 440 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 441 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 442 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 443 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 444 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 445 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 446 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 447 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 448 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 449 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 450 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 451 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 452 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 453 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 454 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 455 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 456 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_7:
# 459 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 460 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 461 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 462 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 463 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 464 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 465 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 466 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 467 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 468 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 469 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 470 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10
# 471 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11
# 472 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 473 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 474 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 475 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 476 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 477 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 478 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 479 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 480 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 481 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 482 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 483 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 484 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 485 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 486 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 487 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 488 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 489 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 490 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 491 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 492 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 493 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 494 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 495 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 496 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 497 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 498 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 499 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 500 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 501 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 502 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 503 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 504 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 505 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 506 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 507 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 508 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 509 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 510 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 511 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 512 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 513 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 514 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 515 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 516 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 517 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 518 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 519 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 520 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 521 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 522 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 523 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 524 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 525 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 526 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 527 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_8:
# 530 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 531 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 532 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 533 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 534 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 535 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 536 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 537 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 538 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 539 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 540 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 541 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 10
# 542 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 11
# 543 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_ALISTAIR_ARRIVE
# 544 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 545 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 546 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 547 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 548 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 549 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 550 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 551 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 552 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 553 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 554 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 555 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 556 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 557 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 558 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 559 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 560 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 561 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 562 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 563 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 564 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 565 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 566 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 567 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 568 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 569 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 570 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 571 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 572 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 573 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 574 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 575 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 576 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 577 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 578 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 579 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 580 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 581 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 582 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 583 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 584 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 585 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 586 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 587 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 588 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 589 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 590 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 591 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 592 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 593 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 594 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 595 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 596 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 597 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 598 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_9:
# 601 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 602 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 603 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 604 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 605 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 606 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 607 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 608 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 609 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 610 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 611 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 612 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 613 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 614 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 615 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 616 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 617 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 618 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 619 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 620 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 621 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 622 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 623 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 624 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 625 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 626 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 627 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 628 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 629 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 630 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 631 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 632 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 633 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 634 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 635 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 636 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 637 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 638 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 639 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 640 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 641 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 642 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 643 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 644 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 645 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 646 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 647 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 648 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 649 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 650 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 651 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 652 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 653 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 654 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 655 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 656 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 657 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 658 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 659 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 660 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 661 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 662 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 663 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 664 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 665 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 666 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 667 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 668 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 669 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_14:
# 328 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt tragedy_5
	goto tragedy_13


caprun::
# 673 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 674 "data/maps/LuxuraIndoor/scripts.pory"
	facefollower
# 675 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 676 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_0
# 677 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 678 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Xylar
# 679 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_1
# 680 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 681 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 682 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_2
# 683 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 684 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Xylar
# 685 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_3, MSGBOX_AUTOCLOSE
# 686 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 687 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 688 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_4
# 689 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 690 "data/maps/LuxuraIndoor/scripts.pory"
	release
# 691 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


# 693 "data/maps/LuxuraIndoor/scripts.pory"
rop:
# 694 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 695 "data/maps/LuxuraIndoor/scripts.pory"
	walk_right
	step_end

# 698 "data/maps/LuxuraIndoor/scripts.pory"
rope:
# 699 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

alistairarrive4::
# 703 "data/maps/LuxuraIndoor/scripts.pory"
	lock
# 704 "data/maps/LuxuraIndoor/scripts.pory"
	special HealPlayerParty
# 705 "data/maps/LuxuraIndoor/scripts.pory"
	namebox unknown
# 706 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_0, MSGBOX_AUTOCLOSE
# 707 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 708 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 709 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 11, exclam
# 710 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 10, traces1
# 711 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_1, MSGBOX_AUTOCLOSE
# 712 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 10, exclam
# 713 "data/maps/LuxuraIndoor/scripts.pory"
	namebox unknown
# 714 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox alistairarrive4_Text_2, MSGBOX_AUTOCLOSE
# 715 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 716 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0xFF, alistairgone3
# 717 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 10, alistairgone
# 718 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 11, alistairgone1
# 719 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 720 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 10
# 721 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 11
# 722 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_ALISTAIR_ARRIVE
# 723 "data/maps/LuxuraIndoor/scripts.pory"
	playbgm MUS_PL_TITLE, FALSE
# 724 "data/maps/LuxuraIndoor/scripts.pory"
	special SpawnCameraObject
# 725 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 0x7F, alistairgone2
# 726 "data/maps/LuxuraIndoor/scripts.pory"
	waitmovement 0
# 727 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 6
# 728 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 729 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 730 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_0x8000, 7
# 731 "data/maps/LuxuraIndoor/scripts.pory"
	special DrawMugshot
# 732 "data/maps/LuxuraIndoor/scripts.pory"
	waitbuttonpress
# 733 "data/maps/LuxuraIndoor/scripts.pory"
	special ClearMugshot
# 734 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 24
# 735 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_AFTERTRAGEDY_MUSIC
# 736 "data/maps/LuxuraIndoor/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
	return


# 738 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone3:
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 739 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

# 742 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone:
# 743 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 744 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 745 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 747 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone1:
# 748 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 749 "data/maps/LuxuraIndoor/scripts.pory"
	walk_left
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 750 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 751 "data/maps/LuxuraIndoor/scripts.pory"
	set_invisible
	step_end

# 753 "data/maps/LuxuraIndoor/scripts.pory"
alistairgone2:
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 754 "data/maps/LuxuraIndoor/scripts.pory"
	walk_up
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 755 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

alistairarrive3_Text_0:
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther.....Elysia....where are you?$"

alistairarrive3_Text_1:
# 19 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's that?$"

alistairarrive3_Text_2:
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Aurther.......Xylar....$"

alistairarrive3_Text_3:
# 33 "data/maps/LuxuraIndoor/scripts.pory"
	.string "(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This place is filled with grief and\n"
	.string "violence.\p"
	.string "There are faint traces of memories\n"
	.string "lingering here.\p"
	.string "Shall I show you?$"

alistairarrive3_Text_4:
# 35 "data/maps/LuxuraIndoor/scripts.pory"
	.string "(Nods)$"

MaidZ_Text_0:
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Maid$"

MaidZ_Text_1:
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Young master, please let me know if you\n"
	.string "need anything.$"

MaidZ_Text_2:
# 81 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your shoes?\p"
	.string "I'll go get it right away.$"

MaidZ_Text_3:
# 86 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Here you go!$"

MaidZ_Text_4:
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Recieved {COLOR BLUE}{SHADOW LIGHT_GRAY}RUNNING SHOES$"

MaidG_Text_0:
# 111 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Grumpig helps us by using its psychic\n"
	.string "powers to precisely measure and mix the\l"
	.string "ingredients, ensuring perfect results\l"
	.string "every time.$"

MaidD_Text_0:
# 120 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just finishing up the dishes and\n"
	.string "will have everything cleaned and put\l"
	.string "away shortly.$"

MaidB_Text_0:
# 129 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Having Blissey in the kitchen ensures\n"
	.string "that every dish is prepared with care\l"
	.string "and has a touch of healing energy,\l"
	.string "making meals not only delicious but also\l"
	.string "comforting.$"

MaidM_Text_0:
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} With Minccino around, cleaning is a\n"
	.string "breeze, its Swift Swipes keep\l"
	.string "everything spotless and organized in\l"
	.string "no time.$"

MaidE_Text_0:
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Lady Elysia is so considerate, she\n"
	.string "knows I love reading, so she's given me\l"
	.string "a break in the library to enjoy my book.$"

MaidE_Text_1:
# 159 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What? Lady Elysia is asking for me?\p"
	.string "I'll be on my way.$"

MaidC_Text_0:
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just dusting the shelves in the\n"
	.string "library to keep everything neat.$"

Minccino_Text_0:
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Minccino$"

Minccino_Text_1:
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Chii,chii! Min-min!$"

Grumpig_Text_0:
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Grumpig$"

Grumpig_Text_1:
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Pii, pii! Grrum, grrum!$"

Blissey_Text_0:
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Blissey$"

Blissey_Text_1:
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Hoo, hoo! Blii, bliiss!$"

strol_Text_0:
# 236 "data/maps/LuxuraIndoor/scripts.pory"
	.string "It's time for my stroll with Mira.\p"
	.string "I should go tell her.$"

caprun_Text_0:
# 676 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, Master Xylar we have to go\n"
	.string "quickly.$"

caprun_Text_1:
# 679 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But what about Mom? and Dad, he's hurt!\n"
	.string "I can't leave them behind.$"

caprun_Text_2:
# 682 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}We don't have time Master Xylar.\p"
	.string "Your Mom and Dad...\p"
	.string "they're strong.They'll be okay.\p"
	.string "But you need to live! For them!$"

caprun_Text_3:
# 685 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No! I can't leave Mom and Dad. I can't..$"

caprun_Text_4:
# 688 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Please, Master Xylar, for your\n"
	.string "parents....run!$"

alistairarrive4_Text_0:
# 706 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No...This wasn't supposed to happen.\p"
	.string "Aurther, Elysia.......How could this......!\p"
	.string "$"

alistairarrive4_Text_1:
# 711 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}The boy......he escaped. His emotions are\n"
	.string "vivid, almost overwhelming.\p"
	.string "Rage, sorrow, despair.\n"
	.string "I can sense where he went.$"

alistairarrive4_Text_2:
# 714 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar survived?\p"
	.string "That's all that matters now.\n"
	.string "If he is out there I'll find him no\l"
	.string "matter what happens!\p"
	.string "Let's go!$"

felicia::
# 228 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Felicia$"
