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
	speakername oldman
# 14 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_0
# 16 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 17 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 19 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 20 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_2
# 22 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 23 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 25 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 26 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_4, MSGBOX_AUTOCLOSE
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
	speakername Xylar1
# 37 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_5
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
	speakername unknown
# 74 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
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
	speakername unknown
# 84 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 86 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 87 "data/maps/Harborac/scripts.pory"
	waitmessage
# 88 "data/maps/Harborac/scripts.pory"
	applymovement 12, mov1
# 89 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 90 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5, MSGBOX_AUTOCLOSE
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
	speakername unknown
# 211 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 213 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 214 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 216 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 217 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 219 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 220 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 221 "data/maps/Harborac/scripts.pory"
	waitse
# 222 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 223 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
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
# 252 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc_4
AcademyNpc_3:
# 259 "data/maps/Harborac/scripts.pory"
	lock
# 260 "data/maps/Harborac/scripts.pory"
	faceplayer
# 261 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_2
# 262 "data/maps/Harborac/scripts.pory"
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

AcademyNpc_2:
# 253 "data/maps/Harborac/scripts.pory"
	lock
# 254 "data/maps/Harborac/scripts.pory"
	faceplayer
# 255 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 256 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_4:
# 252 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc_2
	goto AcademyNpc_3


AcademyNpc1::
# 267 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 273 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc1_4
AcademyNpc1_3:
# 280 "data/maps/Harborac/scripts.pory"
	lock
# 281 "data/maps/Harborac/scripts.pory"
	faceplayer
# 282 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_2
# 283 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 268 "data/maps/Harborac/scripts.pory"
	lock
# 269 "data/maps/Harborac/scripts.pory"
	faceplayer
# 270 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 271 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_2:
# 274 "data/maps/Harborac/scripts.pory"
	lock
# 275 "data/maps/Harborac/scripts.pory"
	faceplayer
# 276 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 277 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_4:
# 273 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc1_2
	goto AcademyNpc1_3


AcademyNpc2::
# 287 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 295 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc2_4
AcademyNpc2_3:
# 304 "data/maps/Harborac/scripts.pory"
	lock
# 305 "data/maps/Harborac/scripts.pory"
	faceplayer
# 306 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 307 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_2
# 309 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 288 "data/maps/Harborac/scripts.pory"
	lock
# 289 "data/maps/Harborac/scripts.pory"
	faceplayer
# 290 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 291 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 293 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_2:
# 296 "data/maps/Harborac/scripts.pory"
	lock
# 297 "data/maps/Harborac/scripts.pory"
	faceplayer
# 298 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 299 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 301 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_4:
# 295 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc2_2
	goto AcademyNpc2_3


AcademyNpc3::
# 314 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 320 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc3_4
AcademyNpc3_3:
# 327 "data/maps/Harborac/scripts.pory"
	lock
# 328 "data/maps/Harborac/scripts.pory"
	faceplayer
# 329 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_2
# 330 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 315 "data/maps/Harborac/scripts.pory"
	lock
# 316 "data/maps/Harborac/scripts.pory"
	faceplayer
# 317 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 318 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_2:
# 321 "data/maps/Harborac/scripts.pory"
	lock
# 322 "data/maps/Harborac/scripts.pory"
	faceplayer
# 323 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 324 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_4:
# 320 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc3_2
	goto AcademyNpc3_3


AcademyNpc4::
# 335 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 341 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc4_4
AcademyNpc4_3:
# 349 "data/maps/Harborac/scripts.pory"
	lock
# 350 "data/maps/Harborac/scripts.pory"
	faceplayer
# 351 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_2
# 352 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 336 "data/maps/Harborac/scripts.pory"
	lock
# 337 "data/maps/Harborac/scripts.pory"
	faceplayer
# 338 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 339 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_2:
# 342 "data/maps/Harborac/scripts.pory"
	lock
# 343 "data/maps/Harborac/scripts.pory"
	faceplayer
# 344 "data/maps/Harborac/scripts.pory"
	applymovement 2, AcademyNpc4_Movement_0
# 345 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 346 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_4:
# 341 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc4_2
	goto AcademyNpc4_3


AcademyNpc5::
# 358 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 366 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc5_4
AcademyNpc5_3:
# 375 "data/maps/Harborac/scripts.pory"
	lock
# 376 "data/maps/Harborac/scripts.pory"
	faceplayer
# 377 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 378 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_2
# 380 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 359 "data/maps/Harborac/scripts.pory"
	lock
# 360 "data/maps/Harborac/scripts.pory"
	faceplayer
# 361 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 362 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 364 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_2:
# 367 "data/maps/Harborac/scripts.pory"
	lock
# 368 "data/maps/Harborac/scripts.pory"
	faceplayer
# 369 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 370 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 372 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_4:
# 366 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc5_2
	goto AcademyNpc5_3


AcademyNpc6::
# 388 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 394 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc6_4
AcademyNpc6_3:
# 401 "data/maps/Harborac/scripts.pory"
	lock
# 402 "data/maps/Harborac/scripts.pory"
	faceplayer
# 403 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_2
# 404 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 389 "data/maps/Harborac/scripts.pory"
	lock
# 390 "data/maps/Harborac/scripts.pory"
	faceplayer
# 391 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 392 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_2:
# 395 "data/maps/Harborac/scripts.pory"
	lock
# 396 "data/maps/Harborac/scripts.pory"
	faceplayer
# 397 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 398 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_4:
# 394 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc6_2
	goto AcademyNpc6_3


AcademyNpc7::
# 409 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 417 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc7_4
AcademyNpc7_3:
# 426 "data/maps/Harborac/scripts.pory"
	lock
# 427 "data/maps/Harborac/scripts.pory"
	faceplayer
# 428 "data/maps/Harborac/scripts.pory"
	speakername orson
# 429 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_2
# 431 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 410 "data/maps/Harborac/scripts.pory"
	lock
# 411 "data/maps/Harborac/scripts.pory"
	faceplayer
# 412 "data/maps/Harborac/scripts.pory"
	speakername orson
# 413 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 415 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_2:
# 418 "data/maps/Harborac/scripts.pory"
	lock
# 419 "data/maps/Harborac/scripts.pory"
	faceplayer
# 420 "data/maps/Harborac/scripts.pory"
	speakername orson
# 421 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 423 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_4:
# 417 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc7_2
	goto AcademyNpc7_3


AcademyNpc8::
# 439 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 445 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc8_4
AcademyNpc8_3:
# 452 "data/maps/Harborac/scripts.pory"
	lock
# 453 "data/maps/Harborac/scripts.pory"
	faceplayer
# 454 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_2
# 455 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 440 "data/maps/Harborac/scripts.pory"
	lock
# 441 "data/maps/Harborac/scripts.pory"
	faceplayer
# 442 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 443 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_2:
# 446 "data/maps/Harborac/scripts.pory"
	lock
# 447 "data/maps/Harborac/scripts.pory"
	faceplayer
# 448 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 449 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_4:
# 445 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc8_2
	goto AcademyNpc8_3


AcademyNpc9::
# 461 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 470 "data/maps/Harborac/scripts.pory"
	lock
# 471 "data/maps/Harborac/scripts.pory"
	faceplayer
# 472 "data/maps/Harborac/scripts.pory"
	speakername serena
# 473 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 475 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 462 "data/maps/Harborac/scripts.pory"
	lock
# 463 "data/maps/Harborac/scripts.pory"
	faceplayer
# 464 "data/maps/Harborac/scripts.pory"
	speakername serena
# 465 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_0
# 467 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 479 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 488 "data/maps/Harborac/scripts.pory"
	lock
# 489 "data/maps/Harborac/scripts.pory"
	faceplayer
# 490 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 491 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 493 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 480 "data/maps/Harborac/scripts.pory"
	lock
# 481 "data/maps/Harborac/scripts.pory"
	faceplayer
# 482 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 483 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 485 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 501 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 507 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc11_4
AcademyNpc11_3:
# 514 "data/maps/Harborac/scripts.pory"
	lock
# 515 "data/maps/Harborac/scripts.pory"
	faceplayer
# 516 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_2
# 517 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 502 "data/maps/Harborac/scripts.pory"
	lock
# 503 "data/maps/Harborac/scripts.pory"
	faceplayer
# 504 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 505 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_2:
# 508 "data/maps/Harborac/scripts.pory"
	lock
# 509 "data/maps/Harborac/scripts.pory"
	faceplayer
# 510 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 511 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_4:
# 507 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc11_2
	goto AcademyNpc11_3


AcademyNpc12::
# 522 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 528 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc12_4
AcademyNpc12_3:
# 534 "data/maps/Harborac/scripts.pory"
	lock
# 535 "data/maps/Harborac/scripts.pory"
	faceplayer
# 536 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_2
# 537 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 523 "data/maps/Harborac/scripts.pory"
	lock
# 524 "data/maps/Harborac/scripts.pory"
	faceplayer
# 525 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0
# 526 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_2:
# 529 "data/maps/Harborac/scripts.pory"
	lock
# 530 "data/maps/Harborac/scripts.pory"
	faceplayer
# 531 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 532 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_4:
# 528 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc12_2
	goto AcademyNpc12_3


AcademyNpc13::
# 541 "data/maps/Harborac/scripts.pory"
	lock
# 542 "data/maps/Harborac/scripts.pory"
	faceplayer
# 543 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 544 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 548 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_SERENAMET, AcademyNpc14_13
AcademyNpc14_11:
# 554 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_SERENAMET, AcademyNpc14_10
AcademyNpc14_6:
# 567 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc14_5
AcademyNpc14_4:
# 574 "data/maps/Harborac/scripts.pory"
	lock
# 575 "data/maps/Harborac/scripts.pory"
	faceplayer
# 576 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_5
# 577 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 549 "data/maps/Harborac/scripts.pory"
	lock
# 550 "data/maps/Harborac/scripts.pory"
	faceplayer
# 551 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 552 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 556 "data/maps/Harborac/scripts.pory"
	lock
# 557 "data/maps/Harborac/scripts.pory"
	faceplayer
# 558 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 559 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 560 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 561 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 562 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 563 "data/maps/Harborac/scripts.pory"
	release
# 564 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_SERENAMET
# 565 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_3:
# 568 "data/maps/Harborac/scripts.pory"
	lock
# 569 "data/maps/Harborac/scripts.pory"
	faceplayer
# 570 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 571 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_5:
# 567 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc14_7
	goto AcademyNpc14_4

AcademyNpc14_7:
# 567 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_SERENAMET, AcademyNpc14_3
	goto AcademyNpc14_4

AcademyNpc14_10:
# 554 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_6

AcademyNpc14_13:
# 548 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_11


AcademyNpc15::
# 582 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 590 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc15_4
AcademyNpc15_3:
# 599 "data/maps/Harborac/scripts.pory"
	lock
# 600 "data/maps/Harborac/scripts.pory"
	faceplayer
# 601 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 602 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_2
# 604 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 583 "data/maps/Harborac/scripts.pory"
	lock
# 584 "data/maps/Harborac/scripts.pory"
	faceplayer
# 585 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 586 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 588 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_2:
# 591 "data/maps/Harborac/scripts.pory"
	lock
# 592 "data/maps/Harborac/scripts.pory"
	faceplayer
# 593 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 594 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 596 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_4:
# 590 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc15_2
	goto AcademyNpc15_3


AcademyNpc16::
# 609 "data/maps/Harborac/scripts.pory"
	lock
# 610 "data/maps/Harborac/scripts.pory"
	faceplayer
# 611 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 612 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 616 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 623 "data/maps/Harborac/scripts.pory"
	lock
# 624 "data/maps/Harborac/scripts.pory"
	faceplayer
# 625 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 626 "data/maps/Harborac/scripts.pory"
	applymovement 4, AcademyNpc17_Movement_0
# 627 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 628 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 617 "data/maps/Harborac/scripts.pory"
	lock
# 618 "data/maps/Harborac/scripts.pory"
	faceplayer
# 619 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 620 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 633 "data/maps/Harborac/scripts.pory"
	lock
# 634 "data/maps/Harborac/scripts.pory"
	faceplayer
# 635 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 636 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 640 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 646 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc19_4
AcademyNpc19_3:
# 653 "data/maps/Harborac/scripts.pory"
	lock
# 654 "data/maps/Harborac/scripts.pory"
	faceplayer
# 655 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_2
# 656 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 641 "data/maps/Harborac/scripts.pory"
	lock
# 642 "data/maps/Harborac/scripts.pory"
	faceplayer
# 643 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 644 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_2:
# 647 "data/maps/Harborac/scripts.pory"
	lock
# 648 "data/maps/Harborac/scripts.pory"
	faceplayer
# 649 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 650 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_4:
# 646 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc19_2
	goto AcademyNpc19_3


AcademyNpc20::
# 662 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 668 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc20_4
AcademyNpc20_3:
# 675 "data/maps/Harborac/scripts.pory"
	lock
# 676 "data/maps/Harborac/scripts.pory"
	faceplayer
# 677 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_2
# 678 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 663 "data/maps/Harborac/scripts.pory"
	lock
# 664 "data/maps/Harborac/scripts.pory"
	faceplayer
# 665 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 666 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_2:
# 669 "data/maps/Harborac/scripts.pory"
	lock
# 670 "data/maps/Harborac/scripts.pory"
	faceplayer
# 671 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 672 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_4:
# 668 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc20_2
	goto AcademyNpc20_3


AcademyNpc21::
# 684 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 690 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc21_4
AcademyNpc21_3:
# 697 "data/maps/Harborac/scripts.pory"
	lock
# 698 "data/maps/Harborac/scripts.pory"
	faceplayer
# 699 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_2
# 700 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 685 "data/maps/Harborac/scripts.pory"
	lock
# 686 "data/maps/Harborac/scripts.pory"
	faceplayer
# 687 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 688 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_2:
# 691 "data/maps/Harborac/scripts.pory"
	lock
# 692 "data/maps/Harborac/scripts.pory"
	faceplayer
# 693 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 694 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_4:
# 690 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc21_2
	goto AcademyNpc21_3


AcademyNpc22::
# 706 "data/maps/Harborac/scripts.pory"
	lock
# 707 "data/maps/Harborac/scripts.pory"
	faceplayer
# 708 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 709 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 710 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 711 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 712 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 716 "data/maps/Harborac/scripts.pory"
	lock
# 717 "data/maps/Harborac/scripts.pory"
	faceplayer
# 718 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 719 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 720 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 721 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 722 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 725 "data/maps/Harborac/scripts.pory"
	lock
# 726 "data/maps/Harborac/scripts.pory"
	faceplayer
# 727 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 728 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 729 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 730 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 731 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 734 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 740 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc25_4
AcademyNpc25_3:
# 747 "data/maps/Harborac/scripts.pory"
	lock
# 748 "data/maps/Harborac/scripts.pory"
	faceplayer
# 749 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_2
# 750 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 735 "data/maps/Harborac/scripts.pory"
	lock
# 736 "data/maps/Harborac/scripts.pory"
	faceplayer
# 737 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 738 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_2:
# 741 "data/maps/Harborac/scripts.pory"
	lock
# 742 "data/maps/Harborac/scripts.pory"
	faceplayer
# 743 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 744 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_4:
# 740 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc25_2
	goto AcademyNpc25_3


AcademyNpc26::
# 756 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 762 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc26_4
AcademyNpc26_3:
# 769 "data/maps/Harborac/scripts.pory"
	lock
# 770 "data/maps/Harborac/scripts.pory"
	faceplayer
# 771 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_2
# 772 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 757 "data/maps/Harborac/scripts.pory"
	lock
# 758 "data/maps/Harborac/scripts.pory"
	faceplayer
# 759 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 760 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_2:
# 763 "data/maps/Harborac/scripts.pory"
	lock
# 764 "data/maps/Harborac/scripts.pory"
	faceplayer
# 765 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 766 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_4:
# 762 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc26_2
	goto AcademyNpc26_3


AcademyNpc27::
# 777 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 785 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc27_4
AcademyNpc27_3:
# 794 "data/maps/Harborac/scripts.pory"
	lock
# 795 "data/maps/Harborac/scripts.pory"
	faceplayer
# 796 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 797 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_2
# 799 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 778 "data/maps/Harborac/scripts.pory"
	lock
# 779 "data/maps/Harborac/scripts.pory"
	faceplayer
# 780 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 781 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 783 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_2:
# 786 "data/maps/Harborac/scripts.pory"
	lock
# 787 "data/maps/Harborac/scripts.pory"
	faceplayer
# 788 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 789 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 791 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_4:
# 785 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc27_2
	goto AcademyNpc27_3


AcademyNpc28::
# 804 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 810 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc28_4
AcademyNpc28_3:
# 817 "data/maps/Harborac/scripts.pory"
	lock
# 818 "data/maps/Harborac/scripts.pory"
	faceplayer
# 819 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_2
# 820 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 805 "data/maps/Harborac/scripts.pory"
	lock
# 806 "data/maps/Harborac/scripts.pory"
	faceplayer
# 807 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 808 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_2:
# 811 "data/maps/Harborac/scripts.pory"
	lock
# 812 "data/maps/Harborac/scripts.pory"
	faceplayer
# 813 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 814 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_4:
# 810 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc28_2
	goto AcademyNpc28_3


AcademyNpc29::
# 826 "data/maps/Harborac/scripts.pory"
	lock
# 827 "data/maps/Harborac/scripts.pory"
	faceplayer
# 828 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 829 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 833 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 839 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc30_4
AcademyNpc30_3:
# 846 "data/maps/Harborac/scripts.pory"
	lock
# 847 "data/maps/Harborac/scripts.pory"
	faceplayer
# 848 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_2
# 849 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 834 "data/maps/Harborac/scripts.pory"
	lock
# 835 "data/maps/Harborac/scripts.pory"
	faceplayer
# 836 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 837 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_2:
# 840 "data/maps/Harborac/scripts.pory"
	lock
# 841 "data/maps/Harborac/scripts.pory"
	faceplayer
# 842 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 843 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_4:
# 839 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc30_2
	goto AcademyNpc30_3


AcademyNpc31::
# 854 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 860 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc31_4
AcademyNpc31_3:
# 867 "data/maps/Harborac/scripts.pory"
	lock
# 868 "data/maps/Harborac/scripts.pory"
	faceplayer
# 869 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_2
# 870 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 855 "data/maps/Harborac/scripts.pory"
	lock
# 856 "data/maps/Harborac/scripts.pory"
	faceplayer
# 857 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 858 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_2:
# 861 "data/maps/Harborac/scripts.pory"
	lock
# 862 "data/maps/Harborac/scripts.pory"
	faceplayer
# 863 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 864 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_4:
# 860 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc31_2
	goto AcademyNpc31_3


AcademyNpc32::
# 876 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 882 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc32_4
AcademyNpc32_3:
# 889 "data/maps/Harborac/scripts.pory"
	lock
# 890 "data/maps/Harborac/scripts.pory"
	faceplayer
# 891 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_2
# 892 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 877 "data/maps/Harborac/scripts.pory"
	lock
# 878 "data/maps/Harborac/scripts.pory"
	faceplayer
# 879 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 880 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_2:
# 883 "data/maps/Harborac/scripts.pory"
	lock
# 884 "data/maps/Harborac/scripts.pory"
	faceplayer
# 885 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 886 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_4:
# 882 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc32_2
	goto AcademyNpc32_3


AcademyNpc33::
# 898 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 904 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc33_4
AcademyNpc33_3:
# 911 "data/maps/Harborac/scripts.pory"
	lock
# 912 "data/maps/Harborac/scripts.pory"
	faceplayer
# 913 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_2
# 914 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 899 "data/maps/Harborac/scripts.pory"
	lock
# 900 "data/maps/Harborac/scripts.pory"
	faceplayer
# 901 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 902 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_2:
# 905 "data/maps/Harborac/scripts.pory"
	lock
# 906 "data/maps/Harborac/scripts.pory"
	faceplayer
# 907 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 908 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_4:
# 904 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc33_2
	goto AcademyNpc33_3


AcademyNpc34::
# 920 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 926 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc34_4
AcademyNpc34_3:
# 933 "data/maps/Harborac/scripts.pory"
	lock
# 934 "data/maps/Harborac/scripts.pory"
	faceplayer
# 935 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_2
# 936 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 921 "data/maps/Harborac/scripts.pory"
	lock
# 922 "data/maps/Harborac/scripts.pory"
	faceplayer
# 923 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 924 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_2:
# 927 "data/maps/Harborac/scripts.pory"
	lock
# 928 "data/maps/Harborac/scripts.pory"
	faceplayer
# 929 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 930 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_4:
# 926 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc34_2
	goto AcademyNpc34_3


AcademyNpc35::
# 941 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc35_1
# 947 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc35_4
AcademyNpc35_3:
# 954 "data/maps/Harborac/scripts.pory"
	lock
# 955 "data/maps/Harborac/scripts.pory"
	faceplayer
# 956 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_2
# 957 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_1:
# 942 "data/maps/Harborac/scripts.pory"
	lock
# 943 "data/maps/Harborac/scripts.pory"
	faceplayer
# 944 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_0
# 945 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_2:
# 948 "data/maps/Harborac/scripts.pory"
	lock
# 949 "data/maps/Harborac/scripts.pory"
	faceplayer
# 950 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_1
# 951 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_4:
# 947 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc35_2
	goto AcademyNpc35_3


AcademyNpc36::
# 962 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc36_1
# 968 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc36_4
AcademyNpc36_3:
# 975 "data/maps/Harborac/scripts.pory"
	lock
# 976 "data/maps/Harborac/scripts.pory"
	faceplayer
# 977 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_2
# 978 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_1:
# 963 "data/maps/Harborac/scripts.pory"
	lock
# 964 "data/maps/Harborac/scripts.pory"
	faceplayer
# 965 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_0
# 966 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_2:
# 969 "data/maps/Harborac/scripts.pory"
	lock
# 970 "data/maps/Harborac/scripts.pory"
	faceplayer
# 971 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_1
# 972 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_4:
# 968 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc36_2
	goto AcademyNpc36_3


AcademyNpc37::
# 983 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc37_1
# 989 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc37_4
AcademyNpc37_3:
# 996 "data/maps/Harborac/scripts.pory"
	lock
# 997 "data/maps/Harborac/scripts.pory"
	faceplayer
# 998 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_2
# 999 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_1:
# 984 "data/maps/Harborac/scripts.pory"
	lock
# 985 "data/maps/Harborac/scripts.pory"
	faceplayer
# 986 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_0
# 987 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_2:
# 990 "data/maps/Harborac/scripts.pory"
	lock
# 991 "data/maps/Harborac/scripts.pory"
	faceplayer
# 992 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_1
# 993 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_4:
# 989 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc37_2
	goto AcademyNpc37_3


AcademyNpc38::
# 1004 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc38_1
# 1010 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc38_4
AcademyNpc38_3:
# 1017 "data/maps/Harborac/scripts.pory"
	lock
# 1018 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1019 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_2
# 1020 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_1:
# 1005 "data/maps/Harborac/scripts.pory"
	lock
# 1006 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1007 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_0
# 1008 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_2:
# 1011 "data/maps/Harborac/scripts.pory"
	lock
# 1012 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1013 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_1
# 1014 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_4:
# 1010 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc38_2
	goto AcademyNpc38_3


Doorlock::
# 1025 "data/maps/Harborac/scripts.pory"
	lock
# 1026 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1027 "data/maps/Harborac/scripts.pory"
	msgbox Doorlock_Text_0
# 1028 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, Doorlock_Movement_0
# 1029 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 1030 "data/maps/Harborac/scripts.pory"
	release
	return


# 344 "data/maps/Harborac/scripts.pory"
AcademyNpc4_Movement_0:
# 344 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
	step_end

# 626 "data/maps/Harborac/scripts.pory"
AcademyNpc17_Movement_0:
# 626 "data/maps/Harborac/scripts.pory"
	emote_heart
	step_end

# 1028 "data/maps/Harborac/scripts.pory"
Doorlock_Movement_0:
# 1028 "data/maps/Harborac/scripts.pory"
	face_down
	step_end

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
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You look tough! Battle me sometime!$"

AcademyNpc_Text_1:
# 255 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I thought Xylar was just a quiet,\n"
	.string "strong guy… but after that? Damn. He's\l"
	.string "terrifying.$"

AcademyNpc_Text_2:
# 261 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I still wanna battle him, though. Maybe\n"
	.string "that rage is what makes him strong.$"

AcademyNpc1_Text_0:
# 270 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 276 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}See? This is why I hate battling. People\n"
	.string "get too caught up in their emotions.$"

AcademyNpc1_Text_2:
# 282 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I actually feel bad for him. Something's\n"
	.string "clearly wrong, but no one's helping.$"

AcademyNpc2_Text_0:
# 291 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Focus on control, not just power.$"

AcademyNpc2_Text_1:
# 299 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You lost control, Xylar. That is\n"
	.string "unacceptable. You may have skill, but if\l"
	.string "you cannot control yourself, you will\l"
	.string "not last here.$"

AcademyNpc2_Text_2:
# 307 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Power means nothing without restraint.\n"
	.string "Learn that before it's too late.$"

AcademyNpc3_Text_0:
# 317 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 323 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Man, I respected Xylar… but now I don't\n"
	.string "know. That wasn't just rage.$"

AcademyNpc3_Text_2:
# 329 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If he ever loses it in a match… will he\n"
	.string "stop?$"

AcademyNpc4_Text_0:
# 338 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}U-um... hello...$"

AcademyNpc4_Text_1:
# 345 "data/maps/Harborac/scripts.pory"
	.string "(Flinches when Xylar approaches)\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}…I-I shouldn't talk to you.$"

AcademyNpc4_Text_2:
# 351 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I know people say you're dangerous now,\n"
	.string "but… I think you're just hurt.$"

AcademyNpc5_Text_0:
# 362 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 370 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Such raw emotion! Such unfiltered\n"
	.string "intensity!\p"
	.string "…And yet, Xylar, this is not the place\n"
	.string "for a destructive masterpiece.$"

AcademyNpc5_Text_2:
# 378 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Art and battle both require control.\p"
	.string "I hope you learn that before your\n"
	.string "canvas turns to ruin.$"

AcademyNpc6_Text_0:
# 391 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 397 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wanted to draw Xylar's Torchic before.\p"
	.string "Now, I'm not so sure I even want to be\n"
	.string "near him.$"

AcademyNpc6_Text_2:
# 403 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe I'll still draw him.\p"
	.string "Not as a trainer… but as a storm.$"

AcademyNpc7_Text_0:
# 413 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 421 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uncontrolled power is a failure in\n"
	.string "understanding.\p"
	.string "You acted on instinct, but instinct\n"
	.string "without logic leads to destruction.$"

AcademyNpc7_Text_2:
# 429 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Were you even thinking? Or was it\n"
	.string "something deeper than that?$"

AcademyNpc8_Text_0:
# 442 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Studying type advantages wins battles!$"

AcademyNpc8_Text_1:
# 448 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't get it.\p"
	.string "Xylar's strategy was so calculated in\n"
	.string "battle, but outside of it… he was\l"
	.string "reckless.$"

AcademyNpc8_Text_2:
# 454 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe his battles aren't about winning.\p"
	.string "Maybe they're about surviving.$"

AcademyNpc9_Text_0:
# 465 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_1:
# 473 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 483 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 491 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 504 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shhh! Library rules!$"

AcademyNpc11_Text_1:
# 510 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't understand fighters… but that\n"
	.string "wasn't normal, was it?$"

AcademyNpc11_Text_2:
# 516 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd rather read about battles than\n"
	.string "witness them.\p"
	.string "Especially ones like that.$"

AcademyNpc12_Text_0:
# 525 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard of the legend of\n"
	.string "the Jewel of Life?$"

AcademyNpc12_Text_1:
# 531 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc12_Text_2:
# 536 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what are you really fighting\n"
	.string "against, Xylar?$"

AcademyNpc13_Text_0:
# 543 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 551 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 559 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 561 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 562 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 570 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc14_Text_5:
# 576 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've worked here for years… I can tell\n"
	.string "when someone's fighting more than just\l"
	.string "an opponent.$"

AcademyNpc15_Text_0:
# 586 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strive for excellence in all you do.$"

AcademyNpc15_Text_1:
# 594 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar… I see potential in you, but\n"
	.string "potential without control is dangerous.\p"
	.string "You need to understand that.$"

AcademyNpc15_Text_2:
# 602 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You fight like a man with nothing to\n"
	.string "lose.\p"
	.string "That still concerns me.$"

AcademyNpc16_Text_0:
# 611 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter unless they\n"
	.string "reach the semi-finals of the\l"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 619 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 625 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind getting a little rough.$"

AcademyNpc18_Text_0:
# 635 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 643 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 649 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.\p"
	.string "About time.$"

AcademyNpc19_Text_2:
# 655 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're stronger now.\p"
	.string "Not in skill.\p"
	.string "In… presence.\p"
	.string "People notice when you walk into a room.$"

AcademyNpc20_Text_0:
# 665 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow… but\n"
	.string "one thing is clear.\p"
	.string "You do not belong to the light.$"

AcademyNpc20_Text_1:
# 671 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs. It was\n"
	.string "only a matter of time.$"

AcademyNpc20_Text_2:
# 677 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You seek control, but the storm within\n"
	.string "you does not wish to be tamed.$"

AcademyNpc21_Text_0:
# 687 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 693 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered since that\n"
	.string "incident.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc21_Text_2:
# 699 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They came back.\p"
	.string "Not because they trust you, but\n"
	.string "because they recognize what you are\l"
	.string "now.$"

AcademyNpc22_Text_0:
# 709 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 737 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 743 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You do not fear others, you fear\n"
	.string "yourself.$"

AcademyNpc25_Text_2:
# 749 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The path ahead is long.\p"
	.string "But you have not strayed as far as you\n"
	.string "think.$"

AcademyNpc26_Text_0:
# 759 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's in place for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 765 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You think you're untouchable? Losing\n"
	.string "control like that will put a target on\l"
	.string "your back.$"

AcademyNpc26_Text_2:
# 771 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're still young.\p"
	.string "Got time to fix what's broken… if you\n"
	.string "want to.$"

AcademyNpc27_Text_0:
# 781 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that, didn't you?$"

AcademyNpc27_Text_1:
# 789 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage… it suits you. Maybe more\n"
	.string "than you realize.$"

AcademyNpc27_Text_2:
# 797 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day, you'll have to stop pretending\n"
	.string "you can be normal.\p"
	.string "We both know it's not in your nature.$"

AcademyNpc28_Text_0:
# 807 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 813 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc28_Text_2:
# 819 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're different now.\p"
	.string "More… dangerous.$"

AcademyNpc29_Text_0:
# 828 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 836 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more… interesting than others.$"

AcademyNpc30_Text_1:
# 842 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc30_Text_2:
# 848 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your file is still growing.\p"
	.string "The question is what kind of story will\n"
	.string "it tell?$"

AcademyNpc31_Text_0:
# 857 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "Which do you think you'll be?$"

AcademyNpc31_Text_1:
# 863 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That moment back there… that's what I\n"
	.string "call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc31_Text_2:
# 869 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Every great tragedy starts somewhere.\p"
	.string "I wonder where yours began.$"

AcademyNpc32_Text_0:
# 879 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh.\p"
	.string "You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 885 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that ain't easy to clean up.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc32_Text_2:
# 891 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Trouble follows certain kinds of people.\p"
	.string "I'd say it follows you like a shadow.$"

AcademyNpc33_Text_0:
# 901 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The winds whisper secrets… and they\n"
	.string "speak your name.$"

AcademyNpc33_Text_1:
# 907 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc33_Text_2:
# 913 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You are not the first to carry such\n"
	.string "darkness.\p"
	.string "But you might be the last.$"

AcademyNpc34_Text_0:
# 923 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what drives certain Pokémon\n"
	.string "to evolve under extreme stress?$"

AcademyNpc34_Text_1:
# 929 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That kind of aggression… even some\n"
	.string "Pokémon only reach that state when\l"
	.string "pushed too far.$"

AcademyNpc34_Text_2:
# 935 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Survival instincts.\p"
	.string "That's what I see in you.\p"
	.string "You don't fight to win, you fight\n"
	.string "because you have to.$"

AcademyNpc35_Text_0:
# 944 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You don't talk much.\p"
	.string "That's fine.\p"
	.string "Words are just another way to lie.$"

AcademyNpc35_Text_1:
# 950 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough to snap.\p"
	.string "Thought it would happen sooner,\n"
	.string "honestly.$"

AcademyNpc35_Text_2:
# 956 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They're watching you now.\p"
	.string "Not just the teachers.\p"
	.string "Everyone.$"

AcademyNpc36_Text_0:
# 965 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The academy grounds are beautiful in\n"
	.string "the spring.\p"
	.string "It almost feels like a fresh start.$"

AcademyNpc36_Text_1:
# 971 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}H-Hey… um, I should get going.$"

AcademyNpc36_Text_2:
# 977 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's been… a weird few days, huh?$"

AcademyNpc37_Text_0:
# 986 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey, did you hear?\p"
	.string "Some of the seniors are already forming\n"
	.string "battle teams.$"

AcademyNpc37_Text_1:
# 992 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That guy… there's something seriously\n"
	.string "wrong with him.$"

AcademyNpc37_Text_2:
# 998 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess everyone has their moments…\n"
	.string "doesn't mean I'd wanna battle him.$"

AcademyNpc38_Text_0:
# 1007 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm just here to get stronger.\p"
	.string "Everything else is a distraction.$"

AcademyNpc38_Text_1:
# 1013 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… whatever. Just don't cross him.$"

AcademyNpc38_Text_2:
# 1019 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fights like a damn beast… I can\n"
	.string "respect that.$"

Doorlock_Text_0:
# 1027 "data/maps/Harborac/scripts.pory"
	.string "The door is locked.$"

oldman::
# 43 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"

eliasn::
# 235 "data/maps/Harborac/scripts.pory"
	.string "Prof.Elias$"

maribel::
# 384 "data/maps/Harborac/scripts.pory"
	.string "Prof.Dorne$"

orson::
# 435 "data/maps/Harborac/scripts.pory"
	.string "Prof.Orson$"

evelyn::
# 496 "data/maps/Harborac/scripts.pory"
	.string "Prof.Evelyn$"
