Harborac_MapScripts::
# 8 "data/maps/Harborac/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 2 "data/maps/Harborac/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Harborac_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/Harborac/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Harborac_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Harborac_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Harborac/scripts.pory"
	map_script_2 ACADEMY_START, 2, ONHARBOR
	.2byte 0

Harborac_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Harborac/scripts.pory"
	map_script_2 ACADEMY_START, 2, ONHARBOR1
	.2byte 0


ONHARBOR1::
# 11 "data/maps/Harborac/scripts.pory"
	playbgm MUS_HG_KIMONO_GIRL_DANCE, FALSE
# 12 "data/maps/Harborac/scripts.pory"
	lock
# 13 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 14 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_0
# 15 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 16 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 17 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 18 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 19 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 20 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_2
# 21 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 22 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 23 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 24 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 25 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 26 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_4, MSGBOX_AUTOCLOSE
# 27 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 28 "data/maps/Harborac/scripts.pory"
	waitmessage
# 29 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Harborac/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 31 "data/maps/Harborac/scripts.pory"
	removeobject 4
# 32 "data/maps/Harborac/scripts.pory"
	removeobject 11
# 33 "data/maps/Harborac/scripts.pory"
	setflag FLAG_OLDMAN_GONE
# 34 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 35 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE2
# 36 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 37 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_5
# 38 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 39 "data/maps/Harborac/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 3
# 41 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR::
# 47 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE1
	return


# 50 "data/maps/Harborac/scripts.pory"
MOVE1:
# 51 "data/maps/Harborac/scripts.pory"
	face_left
	step_end

# 53 "data/maps/Harborac/scripts.pory"
MOVE2:
# 54 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

Fionamet3::
# 57 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 58 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 59 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 61 "data/maps/Harborac/scripts.pory"
mov5:
# 62 "data/maps/Harborac/scripts.pory"
	walk_down
# 62 "data/maps/Harborac/scripts.pory"
	walk_down
	step_end

Fionamet::
# 66 "data/maps/Harborac/scripts.pory"
	lock
# 67 "data/maps/Harborac/scripts.pory"
	special SpawnCameraObject
# 68 "data/maps/Harborac/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 69 "data/maps/Harborac/scripts.pory"
	applymovement 0x7F, MOVE6
# 70 "data/maps/Harborac/scripts.pory"
	applymovement 12, MOVE4
# 71 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE3
# 72 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 73 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 74 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 75 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 76 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE5
# 77 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_1
# 78 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 79 "data/maps/Harborac/scripts.pory"
	applymovement 13, mov1
# 80 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_2
# 81 "data/maps/Harborac/scripts.pory"
	waitmessage
# 82 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE1
# 83 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 84 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 85 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 86 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 87 "data/maps/Harborac/scripts.pory"
	waitmessage
# 88 "data/maps/Harborac/scripts.pory"
	applymovement 12, mov1
# 89 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 90 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5, MSGBOX_AUTOCLOSE
# 91 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 92 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/Harborac/scripts.pory"
	removeobject 12
# 94 "data/maps/Harborac/scripts.pory"
	removeobject 13
# 95 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 96 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 1, 21
# 97 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 100 "data/maps/Harborac/scripts.pory"
mov1:
# 101 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 103 "data/maps/Harborac/scripts.pory"
MOVE6:
# 104 "data/maps/Harborac/scripts.pory"
	walk_right
# 104 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 106 "data/maps/Harborac/scripts.pory"
MOVE3:
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
# 107 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/Harborac/scripts.pory"
MOVE4:
# 110 "data/maps/Harborac/scripts.pory"
	walk_left
# 110 "data/maps/Harborac/scripts.pory"
	walk_left
# 110 "data/maps/Harborac/scripts.pory"
	walk_left
# 110 "data/maps/Harborac/scripts.pory"
	walk_left
# 111 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 112 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 113 "data/maps/Harborac/scripts.pory"
	face_down
# 114 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 116 "data/maps/Harborac/scripts.pory"
MOVE5:
# 117 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 117 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 117 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 117 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 117 "data/maps/Harborac/scripts.pory"
	walk_fast_left
	step_end

Fionamet1::
# 120 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov3
# 121 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 122 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


Fionamet2::
# 125 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 126 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 127 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 129 "data/maps/Harborac/scripts.pory"
mov4:
# 130 "data/maps/Harborac/scripts.pory"
	walk_up
# 131 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 133 "data/maps/Harborac/scripts.pory"
mov3:
# 134 "data/maps/Harborac/scripts.pory"
	walk_down
# 135 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 138 "data/maps/Harborac/scripts.pory"
	lock
# 139 "data/maps/Harborac/scripts.pory"
	faceplayer
# 140 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 141 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 144 "data/maps/Harborac/scripts.pory"
	lock
# 145 "data/maps/Harborac/scripts.pory"
	faceplayer
# 146 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 147 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 151 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 153 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 148 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 156 "data/maps/Harborac/scripts.pory"
	lock
# 157 "data/maps/Harborac/scripts.pory"
	faceplayer
# 158 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 159 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 162 "data/maps/Harborac/scripts.pory"
	lock
# 163 "data/maps/Harborac/scripts.pory"
	faceplayer
# 164 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 165 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 168 "data/maps/Harborac/scripts.pory"
	lock
# 169 "data/maps/Harborac/scripts.pory"
	faceplayer
# 170 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 171 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 174 "data/maps/Harborac/scripts.pory"
	lock
# 175 "data/maps/Harborac/scripts.pory"
	faceplayer
# 176 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 177 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 180 "data/maps/Harborac/scripts.pory"
	lock
# 181 "data/maps/Harborac/scripts.pory"
	faceplayer
# 182 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 183 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 186 "data/maps/Harborac/scripts.pory"
	lock
# 187 "data/maps/Harborac/scripts.pory"
	faceplayer
# 188 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 189 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 190 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 194 "data/maps/Harborac/scripts.pory"
	lock
# 195 "data/maps/Harborac/scripts.pory"
	faceplayer
# 196 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 197 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 200 "data/maps/Harborac/scripts.pory"
	lock
# 201 "data/maps/Harborac/scripts.pory"
	faceplayer
# 202 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 203 "data/maps/Harborac/scripts.pory"
	release
	return


elias::
# 207 "data/maps/Harborac/scripts.pory"
	lock
# 208 "data/maps/Harborac/scripts.pory"
	faceplayer
# 209 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 210 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 211 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 212 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 213 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 214 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 215 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 216 "data/maps/Harborac/scripts.pory"
	namebox eliasn
# 217 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 218 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 219 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 220 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 221 "data/maps/Harborac/scripts.pory"
	waitse
# 222 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 223 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 224 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 225 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, goin
# 226 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 227 "data/maps/Harborac/scripts.pory"
	removeobject 1
# 228 "data/maps/Harborac/scripts.pory"
	setflag FLAG_ELIASMET
# 229 "data/maps/Harborac/scripts.pory"
	warp MAP_HEADOFFICE, 7, 12
	return


# 231 "data/maps/Harborac/scripts.pory"
goin:
# 232 "data/maps/Harborac/scripts.pory"
	walk_up
# 233 "data/maps/Harborac/scripts.pory"
	set_invisible
	step_end

notnowdorm::
# 239 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, mov5
# 240 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 241 "data/maps/Harborac/scripts.pory"
	msgbox notnowdorm_Text_0
# 242 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc::
# 246 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc_1
# 253 "data/maps/Harborac/scripts.pory"
	lock
# 254 "data/maps/Harborac/scripts.pory"
	faceplayer
# 255 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 256 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_1:
# 247 "data/maps/Harborac/scripts.pory"
	lock
# 248 "data/maps/Harborac/scripts.pory"
	faceplayer
# 249 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_0
# 250 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc1::
# 261 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 268 "data/maps/Harborac/scripts.pory"
	lock
# 269 "data/maps/Harborac/scripts.pory"
	faceplayer
# 270 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 271 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 262 "data/maps/Harborac/scripts.pory"
	lock
# 263 "data/maps/Harborac/scripts.pory"
	faceplayer
# 264 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 265 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc2::
# 275 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 284 "data/maps/Harborac/scripts.pory"
	lock
# 285 "data/maps/Harborac/scripts.pory"
	faceplayer
# 286 "data/maps/Harborac/scripts.pory"
	namebox eliasn
# 287 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 288 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 289 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 276 "data/maps/Harborac/scripts.pory"
	lock
# 277 "data/maps/Harborac/scripts.pory"
	faceplayer
# 278 "data/maps/Harborac/scripts.pory"
	namebox eliasn
# 279 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 280 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 281 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc3::
# 293 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 300 "data/maps/Harborac/scripts.pory"
	lock
# 301 "data/maps/Harborac/scripts.pory"
	faceplayer
# 302 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 303 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 294 "data/maps/Harborac/scripts.pory"
	lock
# 295 "data/maps/Harborac/scripts.pory"
	faceplayer
# 296 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 297 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc4::
# 308 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 315 "data/maps/Harborac/scripts.pory"
	lock
# 316 "data/maps/Harborac/scripts.pory"
	faceplayer
# 317 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 318 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 309 "data/maps/Harborac/scripts.pory"
	lock
# 310 "data/maps/Harborac/scripts.pory"
	faceplayer
# 311 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 312 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc5::
# 323 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 332 "data/maps/Harborac/scripts.pory"
	lock
# 333 "data/maps/Harborac/scripts.pory"
	faceplayer
# 334 "data/maps/Harborac/scripts.pory"
	namebox maribel
# 335 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 336 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 337 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 324 "data/maps/Harborac/scripts.pory"
	lock
# 325 "data/maps/Harborac/scripts.pory"
	faceplayer
# 326 "data/maps/Harborac/scripts.pory"
	namebox maribel
# 327 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 328 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 329 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc6::
# 344 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 351 "data/maps/Harborac/scripts.pory"
	lock
# 352 "data/maps/Harborac/scripts.pory"
	faceplayer
# 353 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 354 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 345 "data/maps/Harborac/scripts.pory"
	lock
# 346 "data/maps/Harborac/scripts.pory"
	faceplayer
# 347 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 348 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc7::
# 358 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 367 "data/maps/Harborac/scripts.pory"
	lock
# 368 "data/maps/Harborac/scripts.pory"
	faceplayer
# 369 "data/maps/Harborac/scripts.pory"
	namebox orson
# 370 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 371 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 372 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 359 "data/maps/Harborac/scripts.pory"
	lock
# 360 "data/maps/Harborac/scripts.pory"
	faceplayer
# 361 "data/maps/Harborac/scripts.pory"
	namebox orson
# 362 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 363 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 364 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc8::
# 379 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 386 "data/maps/Harborac/scripts.pory"
	lock
# 387 "data/maps/Harborac/scripts.pory"
	faceplayer
# 388 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 389 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 380 "data/maps/Harborac/scripts.pory"
	lock
# 381 "data/maps/Harborac/scripts.pory"
	faceplayer
# 382 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 383 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc9::
# 394 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 403 "data/maps/Harborac/scripts.pory"
	lock
# 404 "data/maps/Harborac/scripts.pory"
	faceplayer
# 405 "data/maps/Harborac/scripts.pory"
	namebox serena
# 406 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 407 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 408 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 395 "data/maps/Harborac/scripts.pory"
	lock
# 396 "data/maps/Harborac/scripts.pory"
	faceplayer
# 397 "data/maps/Harborac/scripts.pory"
	namebox serena
# 398 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_0
# 399 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 400 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 412 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 421 "data/maps/Harborac/scripts.pory"
	lock
# 422 "data/maps/Harborac/scripts.pory"
	faceplayer
# 423 "data/maps/Harborac/scripts.pory"
	namebox evelyn
# 424 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 425 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 426 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 413 "data/maps/Harborac/scripts.pory"
	lock
# 414 "data/maps/Harborac/scripts.pory"
	faceplayer
# 415 "data/maps/Harborac/scripts.pory"
	namebox evelyn
# 416 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 417 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 418 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 434 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 441 "data/maps/Harborac/scripts.pory"
	lock
# 442 "data/maps/Harborac/scripts.pory"
	faceplayer
# 443 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 444 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 435 "data/maps/Harborac/scripts.pory"
	lock
# 436 "data/maps/Harborac/scripts.pory"
	faceplayer
# 437 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 438 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc12::
# 448 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 455 "data/maps/Harborac/scripts.pory"
	lock
# 456 "data/maps/Harborac/scripts.pory"
	faceplayer
# 457 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 458 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 449 "data/maps/Harborac/scripts.pory"
	lock
# 450 "data/maps/Harborac/scripts.pory"
	faceplayer
# 451 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0
# 452 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc13::
# 461 "data/maps/Harborac/scripts.pory"
	lock
# 462 "data/maps/Harborac/scripts.pory"
	faceplayer
# 463 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 464 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 468 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_SERENAMET, AcademyNpc14_7
AcademyNpc14_5:
# 474 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_SERENAMET, AcademyNpc14_4
AcademyNpc14_3:
# 488 "data/maps/Harborac/scripts.pory"
	lock
# 489 "data/maps/Harborac/scripts.pory"
	faceplayer
# 490 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 491 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 469 "data/maps/Harborac/scripts.pory"
	lock
# 470 "data/maps/Harborac/scripts.pory"
	faceplayer
# 471 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 472 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 476 "data/maps/Harborac/scripts.pory"
	lock
# 477 "data/maps/Harborac/scripts.pory"
	faceplayer
# 478 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 479 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 480 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 481 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 482 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 483 "data/maps/Harborac/scripts.pory"
	release
# 484 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_SERENAMET
# 485 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_4:
# 474 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_3

AcademyNpc14_7:
# 468 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_5


AcademyNpc15::
# 496 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 505 "data/maps/Harborac/scripts.pory"
	lock
# 506 "data/maps/Harborac/scripts.pory"
	faceplayer
# 507 "data/maps/Harborac/scripts.pory"
	namebox alistair
# 508 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 509 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 510 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 497 "data/maps/Harborac/scripts.pory"
	lock
# 498 "data/maps/Harborac/scripts.pory"
	faceplayer
# 499 "data/maps/Harborac/scripts.pory"
	namebox alistair
# 500 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 501 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 502 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc16::
# 515 "data/maps/Harborac/scripts.pory"
	lock
# 516 "data/maps/Harborac/scripts.pory"
	faceplayer
# 517 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 518 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 522 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 529 "data/maps/Harborac/scripts.pory"
	lock
# 530 "data/maps/Harborac/scripts.pory"
	faceplayer
# 531 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 532 "data/maps/Harborac/scripts.pory"
	applymovement 4, heart
# 533 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 523 "data/maps/Harborac/scripts.pory"
	lock
# 524 "data/maps/Harborac/scripts.pory"
	faceplayer
# 525 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 526 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 538 "data/maps/Harborac/scripts.pory"
	lock
# 539 "data/maps/Harborac/scripts.pory"
	faceplayer
# 540 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 541 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 545 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 552 "data/maps/Harborac/scripts.pory"
	lock
# 553 "data/maps/Harborac/scripts.pory"
	faceplayer
# 554 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 555 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 546 "data/maps/Harborac/scripts.pory"
	lock
# 547 "data/maps/Harborac/scripts.pory"
	faceplayer
# 548 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 549 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc20::
# 560 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 567 "data/maps/Harborac/scripts.pory"
	lock
# 568 "data/maps/Harborac/scripts.pory"
	faceplayer
# 569 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 570 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 561 "data/maps/Harborac/scripts.pory"
	lock
# 562 "data/maps/Harborac/scripts.pory"
	faceplayer
# 563 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 564 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc21::
# 575 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 582 "data/maps/Harborac/scripts.pory"
	lock
# 583 "data/maps/Harborac/scripts.pory"
	faceplayer
# 584 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 585 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 576 "data/maps/Harborac/scripts.pory"
	lock
# 577 "data/maps/Harborac/scripts.pory"
	faceplayer
# 578 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 579 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc22::
# 590 "data/maps/Harborac/scripts.pory"
	lock
# 591 "data/maps/Harborac/scripts.pory"
	faceplayer
# 592 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 593 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 594 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 595 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 596 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 600 "data/maps/Harborac/scripts.pory"
	lock
# 601 "data/maps/Harborac/scripts.pory"
	faceplayer
# 602 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 603 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 604 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 605 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 606 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 609 "data/maps/Harborac/scripts.pory"
	lock
# 610 "data/maps/Harborac/scripts.pory"
	faceplayer
# 611 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 612 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 613 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 614 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 615 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 618 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 625 "data/maps/Harborac/scripts.pory"
	lock
# 626 "data/maps/Harborac/scripts.pory"
	faceplayer
# 627 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 628 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 619 "data/maps/Harborac/scripts.pory"
	lock
# 620 "data/maps/Harborac/scripts.pory"
	faceplayer
# 621 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 622 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc26::
# 633 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 640 "data/maps/Harborac/scripts.pory"
	lock
# 641 "data/maps/Harborac/scripts.pory"
	faceplayer
# 642 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 643 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 634 "data/maps/Harborac/scripts.pory"
	lock
# 635 "data/maps/Harborac/scripts.pory"
	faceplayer
# 636 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 637 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc27::
# 648 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 657 "data/maps/Harborac/scripts.pory"
	lock
# 658 "data/maps/Harborac/scripts.pory"
	faceplayer
# 659 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 660 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 661 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 662 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 649 "data/maps/Harborac/scripts.pory"
	lock
# 650 "data/maps/Harborac/scripts.pory"
	faceplayer
# 651 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 652 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 653 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 654 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc28::
# 667 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 674 "data/maps/Harborac/scripts.pory"
	lock
# 675 "data/maps/Harborac/scripts.pory"
	faceplayer
# 676 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 677 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 668 "data/maps/Harborac/scripts.pory"
	lock
# 669 "data/maps/Harborac/scripts.pory"
	faceplayer
# 670 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 671 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc29::
# 682 "data/maps/Harborac/scripts.pory"
	lock
# 683 "data/maps/Harborac/scripts.pory"
	faceplayer
# 684 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 685 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 689 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 696 "data/maps/Harborac/scripts.pory"
	lock
# 697 "data/maps/Harborac/scripts.pory"
	faceplayer
# 698 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 699 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 690 "data/maps/Harborac/scripts.pory"
	lock
# 691 "data/maps/Harborac/scripts.pory"
	faceplayer
# 692 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 693 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc31::
# 703 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 710 "data/maps/Harborac/scripts.pory"
	lock
# 711 "data/maps/Harborac/scripts.pory"
	faceplayer
# 712 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 713 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 704 "data/maps/Harborac/scripts.pory"
	lock
# 705 "data/maps/Harborac/scripts.pory"
	faceplayer
# 706 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 707 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc32::
# 718 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 725 "data/maps/Harborac/scripts.pory"
	lock
# 726 "data/maps/Harborac/scripts.pory"
	faceplayer
# 727 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 728 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 719 "data/maps/Harborac/scripts.pory"
	lock
# 720 "data/maps/Harborac/scripts.pory"
	faceplayer
# 721 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 722 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc33::
# 733 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 740 "data/maps/Harborac/scripts.pory"
	lock
# 741 "data/maps/Harborac/scripts.pory"
	faceplayer
# 742 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 743 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 734 "data/maps/Harborac/scripts.pory"
	lock
# 735 "data/maps/Harborac/scripts.pory"
	faceplayer
# 736 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 737 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc34::
# 748 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 755 "data/maps/Harborac/scripts.pory"
	lock
# 756 "data/maps/Harborac/scripts.pory"
	faceplayer
# 757 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 758 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 749 "data/maps/Harborac/scripts.pory"
	lock
# 750 "data/maps/Harborac/scripts.pory"
	faceplayer
# 751 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 752 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR1_Text_0:
# 14 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There you go, young man.\p"
	.string "I never understood why you chose to\n"
	.string "travel with this old man when there were\l"
	.string "better means of transport available.\p"
	.string "You could've reached your destination\n"
	.string "on time, but I won't question your\l"
	.string "intentions.\p"
	.string "You must've had your reasons.$"

ONHARBOR1_Text_1:
# 17 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.................$"

ONHARBOR1_Text_2:
# 20 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well here it is,\p"
	.string "The Astralis Academy, the place where\n"
	.string "normal trainers become legends.$"

ONHARBOR1_Text_3:
# 23 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

ONHARBOR1_Text_4:
# 26 "data/maps/Harborac/scripts.pory"
	.string "(His eyes...They aren't normal.)$"

ONHARBOR1_Text_5:
# 37 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Legend?.... Become one?...\p"
	.string "I'm gonna destroy them all.$"

Fionamet_Text_0:
# 74 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My apologies....$"

Fionamet_Text_1:
# 77 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Are you alright, my lady?$"

Fionamet_Text_2:
# 80 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How rude of him, he didn't even stop to\n"
	.string "apologize.$"

Fionamet_Text_3:
# 84 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.........$"

Fionamet_Text_4:
# 86 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What happened?$"

Fionamet_Text_5:
# 90 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...........\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 140 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 146 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 148 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 151 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 158 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 164 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 170 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 176 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 182 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 189 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 196 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 202 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could......\p"
	.string "Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

elias_Text_0:
# 211 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're late Xylar.\p"
	.string "My name is David Elias.\p"
	.string "I'm a professor and the headmaster\n"
	.string "made it clear that i was to ensure your\l"
	.string "arrival.\p"
	.string "Come with me, the headmaster is waiting\n"
	.string "for you.$"

elias_Text_1:
# 214 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need an escort.\p"
	.string "Just tell me where I have to go.$"

elias_Text_2:
# 217 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll soon find that attitude won't get\n"
	.string "you far here.\p"
	.string "Respect is earned, young man.\n"
	.string "Now follow me.$"

notnowdorm_Text_0:
# 241 "data/maps/Harborac/scripts.pory"
	.string "Not now.$"

AcademyNpc_Text_0:
# 249 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is the start of my Academy life.\p"
	.string "I can't wait to challange some\n"
	.string "upperclassmen.$"

AcademyNpc_Text_1:
# 255 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the hell, man?\p"
	.string "That was'nt a battle, That was a\n"
	.string "beatdown.$"

AcademyNpc1_Text_0:
# 264 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 270 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was terrifying.\p"
	.string "That wasn't just anger, that was\n"
	.string "something else.$"

AcademyNpc2_Text_0:
# 279 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Academy values discipline.\p"
	.string "You may have talent but true strength\n"
	.string "comes from patience and understanding.$"

AcademyNpc2_Text_1:
# 287 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, this is unacceptable.\p"
	.string "If you can't control yourself you have\n"
	.string "no place in a structured environment\l"
	.string "like this.$"

AcademyNpc3_Text_0:
# 296 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 302 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dude, that was messed up...\p"
	.string "I love a good fight but that wasn't\n"
	.string "even a fight.$"

AcademyNpc4_Text_0:
# 311 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm.....not really good at battling.\p"
	.string "Maybe I should just study instead...$"

AcademyNpc4_Text_1:
# 317 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't wanna be anywhere near Xylar.$"

AcademyNpc5_Text_0:
# 327 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 335 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That was raw.\p"
	.string "Unfiltered.\p"
	.string "The kind of passion that both creates\n"
	.string "and destroys.$"

AcademyNpc6_Text_0:
# 347 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 353 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I thought battles were supposed to be\n"
	.string "beautiful.\p"
	.string "That wasn't.$"

AcademyNpc7_Text_0:
# 362 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 370 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Psychological triggers...\p"
	.string "I've seen it in Pokemon before\p"
	.string "But in humans?\p"
	.string "Fascinating yet terrifying.$"

AcademyNpc8_Text_0:
# 382 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I want to discover new Pokemon\n"
	.string "abilities one day!$"

AcademyNpc8_Text_1:
# 388 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There was no hesitation...\p"
	.string "like it wasn't even you in control.$"

AcademyNpc9_Text_0:
# 398 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_1:
# 406 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 416 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 424 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 437 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shh...I'm reading.$"

AcademyNpc11_Text_1:
# 443 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Some books talk about rage like that.\p"
	.string "It never ends well.$"

AcademyNpc12_Text_0:
# 451 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard of the legend of\n"
	.string "the Jewel of Life?$"

AcademyNpc12_Text_1:
# 457 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc13_Text_0:
# 463 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 471 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 479 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 481 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 482 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 490 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc15_Text_0:
# 500 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't about battle.\p"
	.string "It's about what you do with it.$"

AcademyNpc15_Text_1:
# 508 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected struggle, but this?\p"
	.string "This was a glimpse into something far\n"
	.string "worse.$"

AcademyNpc16_Text_0:
# 517 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter unless they\n"
	.string "reach the semi-finals of the\l"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 525 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 531 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind a little violence.$"

AcademyNpc18_Text_0:
# 540 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 548 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 554 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.$"

AcademyNpc20_Text_0:
# 563 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow...\p"
	.string "but one thing is clear.\p"
	.string "You donot belong to light.$"

AcademyNpc20_Text_1:
# 569 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs.\p"
	.string "It was only a matter of time.$"

AcademyNpc21_Text_0:
# 578 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 584 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered that night.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc22_Text_0:
# 593 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 621 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 627 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You donot fear others,\p"
	.string "You fear yourself.$"

AcademyNpc26_Text_0:
# 636 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's there for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 642 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Losing control like that would only put\n"
	.string "a target on your back.$"

AcademyNpc27_Text_0:
# 652 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that.$"

AcademyNpc27_Text_1:
# 660 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage.....it suits you.\p"
	.string "Maybe more than you realize.$"

AcademyNpc28_Text_0:
# 670 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 676 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc29_Text_0:
# 684 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 692 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more interesting than others.$"

AcademyNpc30_Text_1:
# 698 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc31_Text_0:
# 706 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "What do you think you'll be?$"

AcademyNpc31_Text_1:
# 712 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The moment back there...\p"
	.string "that's what I call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc32_Text_0:
# 721 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 727 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that isn't easy to clean.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc33_Text_0:
# 736 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The wind whispers secrets.....\p"
	.string "and they speak your name.$"

AcademyNpc33_Text_1:
# 742 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has just begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc34_Text_0:
# 751 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wonder.......what drives certain\n"
	.string "pokemon to evolove under extreme\l"
	.string "stress?$"

AcademyNpc34_Text_1:
# 757 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The kind of aggression you have....\p"
	.string "even some pokemon only reach that\n"
	.string "state when pushed too far.$"

oldman::
# 43 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"

eliasn::
# 235 "data/maps/Harborac/scripts.pory"
	.string "Elias$"

maribel::
# 340 "data/maps/Harborac/scripts.pory"
	.string "Dorne$"

orson::
# 375 "data/maps/Harborac/scripts.pory"
	.string "Orson$"

evelyn::
# 429 "data/maps/Harborac/scripts.pory"
	.string "Evelyn$"
