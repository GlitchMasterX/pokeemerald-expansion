Harborac_MapScripts::
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
# 15 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 16 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 17 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 18 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_2
# 19 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 20 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 21 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 22 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_4, MSGBOX_AUTOCLOSE
# 23 "data/maps/Harborac/scripts.pory"
	waitmessage
# 24 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Harborac/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 26 "data/maps/Harborac/scripts.pory"
	removeobject 4
# 27 "data/maps/Harborac/scripts.pory"
	removeobject 11
# 28 "data/maps/Harborac/scripts.pory"
	setflag FLAG_OLDMAN_GONE
# 29 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE2
# 31 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 32 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_5
# 33 "data/maps/Harborac/scripts.pory"
	pausefakertc
# 34 "data/maps/Harborac/scripts.pory"
	fadedefaultbgm
# 35 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 3
# 36 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR::
# 42 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE1
	return


# 45 "data/maps/Harborac/scripts.pory"
MOVE1:
# 46 "data/maps/Harborac/scripts.pory"
	face_left
	step_end

# 48 "data/maps/Harborac/scripts.pory"
MOVE2:
# 49 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

Fionamet3::
# 52 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 53 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 54 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 56 "data/maps/Harborac/scripts.pory"
mov5:
# 57 "data/maps/Harborac/scripts.pory"
	walk_down
# 57 "data/maps/Harborac/scripts.pory"
	walk_down
	step_end

Fionamet::
# 61 "data/maps/Harborac/scripts.pory"
	lock
# 62 "data/maps/Harborac/scripts.pory"
	special SpawnCameraObject
# 63 "data/maps/Harborac/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 64 "data/maps/Harborac/scripts.pory"
	applymovement 0x7F, MOVE6
# 65 "data/maps/Harborac/scripts.pory"
	applymovement 12, MOVE4
# 66 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE3
# 67 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 68 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 69 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 71 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE5
# 72 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_1
# 73 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 74 "data/maps/Harborac/scripts.pory"
	applymovement 13, mov1
# 75 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_2
# 76 "data/maps/Harborac/scripts.pory"
	waitmessage
# 77 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE1
# 78 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 79 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 81 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 82 "data/maps/Harborac/scripts.pory"
	waitmessage
# 83 "data/maps/Harborac/scripts.pory"
	applymovement 12, mov1
# 84 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 85 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5, MSGBOX_AUTOCLOSE
# 87 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/Harborac/scripts.pory"
	removeobject 12
# 89 "data/maps/Harborac/scripts.pory"
	removeobject 13
# 90 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 91 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 1, 21
# 92 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 95 "data/maps/Harborac/scripts.pory"
mov1:
# 96 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 98 "data/maps/Harborac/scripts.pory"
MOVE6:
# 99 "data/maps/Harborac/scripts.pory"
	walk_right
# 99 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/Harborac/scripts.pory"
MOVE3:
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
# 102 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 104 "data/maps/Harborac/scripts.pory"
MOVE4:
# 105 "data/maps/Harborac/scripts.pory"
	walk_left
# 105 "data/maps/Harborac/scripts.pory"
	walk_left
# 105 "data/maps/Harborac/scripts.pory"
	walk_left
# 105 "data/maps/Harborac/scripts.pory"
	walk_left
# 106 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 107 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 108 "data/maps/Harborac/scripts.pory"
	face_down
# 109 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 111 "data/maps/Harborac/scripts.pory"
MOVE5:
# 112 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 112 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 112 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 112 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 112 "data/maps/Harborac/scripts.pory"
	walk_fast_left
	step_end

Fionamet1::
# 115 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov3
# 116 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 117 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


Fionamet2::
# 120 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 121 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 122 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 124 "data/maps/Harborac/scripts.pory"
mov4:
# 125 "data/maps/Harborac/scripts.pory"
	walk_up
# 126 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 128 "data/maps/Harborac/scripts.pory"
mov3:
# 129 "data/maps/Harborac/scripts.pory"
	walk_down
# 130 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 133 "data/maps/Harborac/scripts.pory"
	lock
# 134 "data/maps/Harborac/scripts.pory"
	faceplayer
# 135 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 136 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 139 "data/maps/Harborac/scripts.pory"
	lock
# 140 "data/maps/Harborac/scripts.pory"
	faceplayer
# 141 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 142 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 146 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 148 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 143 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 151 "data/maps/Harborac/scripts.pory"
	lock
# 152 "data/maps/Harborac/scripts.pory"
	faceplayer
# 153 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 154 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 157 "data/maps/Harborac/scripts.pory"
	lock
# 158 "data/maps/Harborac/scripts.pory"
	faceplayer
# 159 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 160 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 163 "data/maps/Harborac/scripts.pory"
	lock
# 164 "data/maps/Harborac/scripts.pory"
	faceplayer
# 165 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 166 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 169 "data/maps/Harborac/scripts.pory"
	lock
# 170 "data/maps/Harborac/scripts.pory"
	faceplayer
# 171 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 172 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 175 "data/maps/Harborac/scripts.pory"
	lock
# 176 "data/maps/Harborac/scripts.pory"
	faceplayer
# 177 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 178 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 181 "data/maps/Harborac/scripts.pory"
	lock
# 182 "data/maps/Harborac/scripts.pory"
	faceplayer
# 183 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 184 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 185 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 189 "data/maps/Harborac/scripts.pory"
	lock
# 190 "data/maps/Harborac/scripts.pory"
	faceplayer
# 191 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 192 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 195 "data/maps/Harborac/scripts.pory"
	lock
# 196 "data/maps/Harborac/scripts.pory"
	faceplayer
# 197 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 198 "data/maps/Harborac/scripts.pory"
	release
	return


elias::
# 202 "data/maps/Harborac/scripts.pory"
	lock
# 203 "data/maps/Harborac/scripts.pory"
	faceplayer
# 204 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 205 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 206 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 208 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 209 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 211 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 212 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 214 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 215 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 216 "data/maps/Harborac/scripts.pory"
	waitse
# 217 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 218 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 220 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, goin
# 221 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 222 "data/maps/Harborac/scripts.pory"
	removeobject 1
# 223 "data/maps/Harborac/scripts.pory"
	setflag FLAG_ELIASMET
# 224 "data/maps/Harborac/scripts.pory"
	warp MAP_HEADOFFICE, 7, 12
	return


# 226 "data/maps/Harborac/scripts.pory"
goin:
# 227 "data/maps/Harborac/scripts.pory"
	walk_up
# 228 "data/maps/Harborac/scripts.pory"
	set_invisible
	step_end

notnowdorm::
# 234 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, mov5
# 235 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 236 "data/maps/Harborac/scripts.pory"
	msgbox notnowdorm_Text_0
# 237 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc::
# 241 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc_1
# 247 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc_4
AcademyNpc_3:
# 254 "data/maps/Harborac/scripts.pory"
	lock
# 255 "data/maps/Harborac/scripts.pory"
	faceplayer
# 256 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_2
# 257 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_1:
# 242 "data/maps/Harborac/scripts.pory"
	lock
# 243 "data/maps/Harborac/scripts.pory"
	faceplayer
# 244 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_0
# 245 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_2:
# 248 "data/maps/Harborac/scripts.pory"
	lock
# 249 "data/maps/Harborac/scripts.pory"
	faceplayer
# 250 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 251 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_4:
# 247 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc_2
	goto AcademyNpc_3


AcademyNpc1::
# 262 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 268 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc1_4
AcademyNpc1_3:
# 275 "data/maps/Harborac/scripts.pory"
	lock
# 276 "data/maps/Harborac/scripts.pory"
	faceplayer
# 277 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_2
# 278 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 263 "data/maps/Harborac/scripts.pory"
	lock
# 264 "data/maps/Harborac/scripts.pory"
	faceplayer
# 265 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 266 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_2:
# 269 "data/maps/Harborac/scripts.pory"
	lock
# 270 "data/maps/Harborac/scripts.pory"
	faceplayer
# 271 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 272 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_4:
# 268 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc1_2
	goto AcademyNpc1_3


AcademyNpc2::
# 282 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 290 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc2_4
AcademyNpc2_3:
# 299 "data/maps/Harborac/scripts.pory"
	lock
# 300 "data/maps/Harborac/scripts.pory"
	faceplayer
# 301 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 302 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_2
# 304 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 283 "data/maps/Harborac/scripts.pory"
	lock
# 284 "data/maps/Harborac/scripts.pory"
	faceplayer
# 285 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 286 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 288 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_2:
# 291 "data/maps/Harborac/scripts.pory"
	lock
# 292 "data/maps/Harborac/scripts.pory"
	faceplayer
# 293 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 294 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 296 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_4:
# 290 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc2_2
	goto AcademyNpc2_3


AcademyNpc3::
# 309 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 315 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc3_4
AcademyNpc3_3:
# 322 "data/maps/Harborac/scripts.pory"
	lock
# 323 "data/maps/Harborac/scripts.pory"
	faceplayer
# 324 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_2
# 325 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 310 "data/maps/Harborac/scripts.pory"
	lock
# 311 "data/maps/Harborac/scripts.pory"
	faceplayer
# 312 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 313 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_2:
# 316 "data/maps/Harborac/scripts.pory"
	lock
# 317 "data/maps/Harborac/scripts.pory"
	faceplayer
# 318 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 319 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_4:
# 315 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc3_2
	goto AcademyNpc3_3


AcademyNpc4::
# 330 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 336 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc4_4
AcademyNpc4_3:
# 344 "data/maps/Harborac/scripts.pory"
	lock
# 345 "data/maps/Harborac/scripts.pory"
	faceplayer
# 346 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_2
# 347 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 331 "data/maps/Harborac/scripts.pory"
	lock
# 332 "data/maps/Harborac/scripts.pory"
	faceplayer
# 333 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 334 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_2:
# 337 "data/maps/Harborac/scripts.pory"
	lock
# 338 "data/maps/Harborac/scripts.pory"
	faceplayer
# 339 "data/maps/Harborac/scripts.pory"
	applymovement 2, AcademyNpc4_Movement_0
# 340 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 341 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_4:
# 336 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc4_2
	goto AcademyNpc4_3


AcademyNpc5::
# 353 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 361 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc5_4
AcademyNpc5_3:
# 370 "data/maps/Harborac/scripts.pory"
	lock
# 371 "data/maps/Harborac/scripts.pory"
	faceplayer
# 372 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 373 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_2
# 375 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 354 "data/maps/Harborac/scripts.pory"
	lock
# 355 "data/maps/Harborac/scripts.pory"
	faceplayer
# 356 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 357 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 359 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_2:
# 362 "data/maps/Harborac/scripts.pory"
	lock
# 363 "data/maps/Harborac/scripts.pory"
	faceplayer
# 364 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 365 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 367 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_4:
# 361 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc5_2
	goto AcademyNpc5_3


AcademyNpc6::
# 383 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 389 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc6_4
AcademyNpc6_3:
# 396 "data/maps/Harborac/scripts.pory"
	lock
# 397 "data/maps/Harborac/scripts.pory"
	faceplayer
# 398 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_2
# 399 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 384 "data/maps/Harborac/scripts.pory"
	lock
# 385 "data/maps/Harborac/scripts.pory"
	faceplayer
# 386 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 387 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_2:
# 390 "data/maps/Harborac/scripts.pory"
	lock
# 391 "data/maps/Harborac/scripts.pory"
	faceplayer
# 392 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 393 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_4:
# 389 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc6_2
	goto AcademyNpc6_3


AcademyNpc7::
# 404 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 412 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc7_4
AcademyNpc7_3:
# 421 "data/maps/Harborac/scripts.pory"
	lock
# 422 "data/maps/Harborac/scripts.pory"
	faceplayer
# 423 "data/maps/Harborac/scripts.pory"
	speakername orson
# 424 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_2
# 426 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 405 "data/maps/Harborac/scripts.pory"
	lock
# 406 "data/maps/Harborac/scripts.pory"
	faceplayer
# 407 "data/maps/Harborac/scripts.pory"
	speakername orson
# 408 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 410 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_2:
# 413 "data/maps/Harborac/scripts.pory"
	lock
# 414 "data/maps/Harborac/scripts.pory"
	faceplayer
# 415 "data/maps/Harborac/scripts.pory"
	speakername orson
# 416 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 418 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_4:
# 412 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc7_2
	goto AcademyNpc7_3


AcademyNpc8::
# 434 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 440 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc8_4
AcademyNpc8_3:
# 447 "data/maps/Harborac/scripts.pory"
	lock
# 448 "data/maps/Harborac/scripts.pory"
	faceplayer
# 449 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_2
# 450 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 435 "data/maps/Harborac/scripts.pory"
	lock
# 436 "data/maps/Harborac/scripts.pory"
	faceplayer
# 437 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 438 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_2:
# 441 "data/maps/Harborac/scripts.pory"
	lock
# 442 "data/maps/Harborac/scripts.pory"
	faceplayer
# 443 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 444 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_4:
# 440 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc8_2
	goto AcademyNpc8_3


AcademyNpc9::
# 456 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 465 "data/maps/Harborac/scripts.pory"
	lock
# 466 "data/maps/Harborac/scripts.pory"
	faceplayer
# 467 "data/maps/Harborac/scripts.pory"
	speakername serena
# 468 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 470 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 457 "data/maps/Harborac/scripts.pory"
	lock
# 458 "data/maps/Harborac/scripts.pory"
	faceplayer
# 459 "data/maps/Harborac/scripts.pory"
	speakername serena
# 460 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_0
# 462 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 474 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 483 "data/maps/Harborac/scripts.pory"
	lock
# 484 "data/maps/Harborac/scripts.pory"
	faceplayer
# 485 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 486 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 488 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 475 "data/maps/Harborac/scripts.pory"
	lock
# 476 "data/maps/Harborac/scripts.pory"
	faceplayer
# 477 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 478 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 480 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 496 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 502 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc11_4
AcademyNpc11_3:
# 509 "data/maps/Harborac/scripts.pory"
	lock
# 510 "data/maps/Harborac/scripts.pory"
	faceplayer
# 511 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_2
# 512 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 497 "data/maps/Harborac/scripts.pory"
	lock
# 498 "data/maps/Harborac/scripts.pory"
	faceplayer
# 499 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 500 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_2:
# 503 "data/maps/Harborac/scripts.pory"
	lock
# 504 "data/maps/Harborac/scripts.pory"
	faceplayer
# 505 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 506 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_4:
# 502 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc11_2
	goto AcademyNpc11_3


AcademyNpc12::
# 517 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 523 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc12_4
AcademyNpc12_3:
# 529 "data/maps/Harborac/scripts.pory"
	lock
# 530 "data/maps/Harborac/scripts.pory"
	faceplayer
# 531 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_2
# 532 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 518 "data/maps/Harborac/scripts.pory"
	lock
# 519 "data/maps/Harborac/scripts.pory"
	faceplayer
# 520 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0
# 521 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_2:
# 524 "data/maps/Harborac/scripts.pory"
	lock
# 525 "data/maps/Harborac/scripts.pory"
	faceplayer
# 526 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 527 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_4:
# 523 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc12_2
	goto AcademyNpc12_3


AcademyNpc13::
# 536 "data/maps/Harborac/scripts.pory"
	lock
# 537 "data/maps/Harborac/scripts.pory"
	faceplayer
# 538 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 539 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 543 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_13
AcademyNpc14_11:
# 549 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_LEAFMET, AcademyNpc14_10
AcademyNpc14_6:
# 562 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc14_5
AcademyNpc14_4:
# 569 "data/maps/Harborac/scripts.pory"
	lock
# 570 "data/maps/Harborac/scripts.pory"
	faceplayer
# 571 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_5
# 572 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 544 "data/maps/Harborac/scripts.pory"
	lock
# 545 "data/maps/Harborac/scripts.pory"
	faceplayer
# 546 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 547 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 551 "data/maps/Harborac/scripts.pory"
	lock
# 552 "data/maps/Harborac/scripts.pory"
	faceplayer
# 553 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 554 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 555 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 556 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 557 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 558 "data/maps/Harborac/scripts.pory"
	release
# 559 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_LEAFMET
# 560 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_3:
# 563 "data/maps/Harborac/scripts.pory"
	lock
# 564 "data/maps/Harborac/scripts.pory"
	faceplayer
# 565 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 566 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_5:
# 562 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc14_7
	goto AcademyNpc14_4

AcademyNpc14_7:
# 562 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_3
	goto AcademyNpc14_4

AcademyNpc14_10:
# 549 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_6

AcademyNpc14_13:
# 543 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_11


AcademyNpc15::
# 577 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 585 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc15_4
AcademyNpc15_3:
# 594 "data/maps/Harborac/scripts.pory"
	lock
# 595 "data/maps/Harborac/scripts.pory"
	faceplayer
# 596 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 597 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_2
# 599 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 578 "data/maps/Harborac/scripts.pory"
	lock
# 579 "data/maps/Harborac/scripts.pory"
	faceplayer
# 580 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 581 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 583 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_2:
# 586 "data/maps/Harborac/scripts.pory"
	lock
# 587 "data/maps/Harborac/scripts.pory"
	faceplayer
# 588 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 589 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 591 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_4:
# 585 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc15_2
	goto AcademyNpc15_3


AcademyNpc16::
# 604 "data/maps/Harborac/scripts.pory"
	lock
# 605 "data/maps/Harborac/scripts.pory"
	faceplayer
# 606 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 607 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 611 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 618 "data/maps/Harborac/scripts.pory"
	lock
# 619 "data/maps/Harborac/scripts.pory"
	faceplayer
# 620 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 621 "data/maps/Harborac/scripts.pory"
	applymovement 4, AcademyNpc17_Movement_0
# 622 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 623 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 612 "data/maps/Harborac/scripts.pory"
	lock
# 613 "data/maps/Harborac/scripts.pory"
	faceplayer
# 614 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 615 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 628 "data/maps/Harborac/scripts.pory"
	lock
# 629 "data/maps/Harborac/scripts.pory"
	faceplayer
# 630 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 631 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 635 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 641 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc19_4
AcademyNpc19_3:
# 648 "data/maps/Harborac/scripts.pory"
	lock
# 649 "data/maps/Harborac/scripts.pory"
	faceplayer
# 650 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_2
# 651 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 636 "data/maps/Harborac/scripts.pory"
	lock
# 637 "data/maps/Harborac/scripts.pory"
	faceplayer
# 638 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 639 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_2:
# 642 "data/maps/Harborac/scripts.pory"
	lock
# 643 "data/maps/Harborac/scripts.pory"
	faceplayer
# 644 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 645 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_4:
# 641 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc19_2
	goto AcademyNpc19_3


AcademyNpc20::
# 657 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 663 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc20_4
AcademyNpc20_3:
# 670 "data/maps/Harborac/scripts.pory"
	lock
# 671 "data/maps/Harborac/scripts.pory"
	faceplayer
# 672 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_2
# 673 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 658 "data/maps/Harborac/scripts.pory"
	lock
# 659 "data/maps/Harborac/scripts.pory"
	faceplayer
# 660 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 661 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_2:
# 664 "data/maps/Harborac/scripts.pory"
	lock
# 665 "data/maps/Harborac/scripts.pory"
	faceplayer
# 666 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 667 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_4:
# 663 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc20_2
	goto AcademyNpc20_3


AcademyNpc21::
# 679 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 685 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc21_4
AcademyNpc21_3:
# 692 "data/maps/Harborac/scripts.pory"
	lock
# 693 "data/maps/Harborac/scripts.pory"
	faceplayer
# 694 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_2
# 695 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 680 "data/maps/Harborac/scripts.pory"
	lock
# 681 "data/maps/Harborac/scripts.pory"
	faceplayer
# 682 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 683 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_2:
# 686 "data/maps/Harborac/scripts.pory"
	lock
# 687 "data/maps/Harborac/scripts.pory"
	faceplayer
# 688 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 689 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_4:
# 685 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc21_2
	goto AcademyNpc21_3


AcademyNpc22::
# 701 "data/maps/Harborac/scripts.pory"
	lock
# 702 "data/maps/Harborac/scripts.pory"
	faceplayer
# 703 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 704 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 705 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 706 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 707 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 711 "data/maps/Harborac/scripts.pory"
	lock
# 712 "data/maps/Harborac/scripts.pory"
	faceplayer
# 713 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 714 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 715 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 716 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 717 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 720 "data/maps/Harborac/scripts.pory"
	lock
# 721 "data/maps/Harborac/scripts.pory"
	faceplayer
# 722 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 723 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 724 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 725 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 726 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 729 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 735 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc25_4
AcademyNpc25_3:
# 742 "data/maps/Harborac/scripts.pory"
	lock
# 743 "data/maps/Harborac/scripts.pory"
	faceplayer
# 744 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_2
# 745 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 730 "data/maps/Harborac/scripts.pory"
	lock
# 731 "data/maps/Harborac/scripts.pory"
	faceplayer
# 732 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 733 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_2:
# 736 "data/maps/Harborac/scripts.pory"
	lock
# 737 "data/maps/Harborac/scripts.pory"
	faceplayer
# 738 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 739 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_4:
# 735 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc25_2
	goto AcademyNpc25_3


AcademyNpc26::
# 751 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 757 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc26_4
AcademyNpc26_3:
# 764 "data/maps/Harborac/scripts.pory"
	lock
# 765 "data/maps/Harborac/scripts.pory"
	faceplayer
# 766 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_2
# 767 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 752 "data/maps/Harborac/scripts.pory"
	lock
# 753 "data/maps/Harborac/scripts.pory"
	faceplayer
# 754 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 755 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_2:
# 758 "data/maps/Harborac/scripts.pory"
	lock
# 759 "data/maps/Harborac/scripts.pory"
	faceplayer
# 760 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 761 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_4:
# 757 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc26_2
	goto AcademyNpc26_3


AcademyNpc27::
# 772 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 780 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc27_4
AcademyNpc27_3:
# 789 "data/maps/Harborac/scripts.pory"
	lock
# 790 "data/maps/Harborac/scripts.pory"
	faceplayer
# 791 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 792 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_2
# 794 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 773 "data/maps/Harborac/scripts.pory"
	lock
# 774 "data/maps/Harborac/scripts.pory"
	faceplayer
# 775 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 776 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 778 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_2:
# 781 "data/maps/Harborac/scripts.pory"
	lock
# 782 "data/maps/Harborac/scripts.pory"
	faceplayer
# 783 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 784 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 786 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_4:
# 780 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc27_2
	goto AcademyNpc27_3


AcademyNpc28::
# 799 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 805 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc28_4
AcademyNpc28_3:
# 812 "data/maps/Harborac/scripts.pory"
	lock
# 813 "data/maps/Harborac/scripts.pory"
	faceplayer
# 814 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_2
# 815 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 800 "data/maps/Harborac/scripts.pory"
	lock
# 801 "data/maps/Harborac/scripts.pory"
	faceplayer
# 802 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 803 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_2:
# 806 "data/maps/Harborac/scripts.pory"
	lock
# 807 "data/maps/Harborac/scripts.pory"
	faceplayer
# 808 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 809 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_4:
# 805 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc28_2
	goto AcademyNpc28_3


AcademyNpc29::
# 821 "data/maps/Harborac/scripts.pory"
	lock
# 822 "data/maps/Harborac/scripts.pory"
	faceplayer
# 823 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 824 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 828 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 834 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc30_4
AcademyNpc30_3:
# 841 "data/maps/Harborac/scripts.pory"
	lock
# 842 "data/maps/Harborac/scripts.pory"
	faceplayer
# 843 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_2
# 844 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 829 "data/maps/Harborac/scripts.pory"
	lock
# 830 "data/maps/Harborac/scripts.pory"
	faceplayer
# 831 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 832 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_2:
# 835 "data/maps/Harborac/scripts.pory"
	lock
# 836 "data/maps/Harborac/scripts.pory"
	faceplayer
# 837 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 838 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_4:
# 834 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc30_2
	goto AcademyNpc30_3


AcademyNpc31::
# 849 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 855 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc31_4
AcademyNpc31_3:
# 862 "data/maps/Harborac/scripts.pory"
	lock
# 863 "data/maps/Harborac/scripts.pory"
	faceplayer
# 864 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_2
# 865 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 850 "data/maps/Harborac/scripts.pory"
	lock
# 851 "data/maps/Harborac/scripts.pory"
	faceplayer
# 852 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 853 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_2:
# 856 "data/maps/Harborac/scripts.pory"
	lock
# 857 "data/maps/Harborac/scripts.pory"
	faceplayer
# 858 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 859 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_4:
# 855 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc31_2
	goto AcademyNpc31_3


AcademyNpc32::
# 871 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 877 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc32_4
AcademyNpc32_3:
# 884 "data/maps/Harborac/scripts.pory"
	lock
# 885 "data/maps/Harborac/scripts.pory"
	faceplayer
# 886 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_2
# 887 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 872 "data/maps/Harborac/scripts.pory"
	lock
# 873 "data/maps/Harborac/scripts.pory"
	faceplayer
# 874 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 875 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_2:
# 878 "data/maps/Harborac/scripts.pory"
	lock
# 879 "data/maps/Harborac/scripts.pory"
	faceplayer
# 880 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 881 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_4:
# 877 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc32_2
	goto AcademyNpc32_3


AcademyNpc33::
# 893 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 899 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc33_4
AcademyNpc33_3:
# 906 "data/maps/Harborac/scripts.pory"
	lock
# 907 "data/maps/Harborac/scripts.pory"
	faceplayer
# 908 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_2
# 909 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 894 "data/maps/Harborac/scripts.pory"
	lock
# 895 "data/maps/Harborac/scripts.pory"
	faceplayer
# 896 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 897 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_2:
# 900 "data/maps/Harborac/scripts.pory"
	lock
# 901 "data/maps/Harborac/scripts.pory"
	faceplayer
# 902 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 903 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_4:
# 899 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc33_2
	goto AcademyNpc33_3


AcademyNpc34::
# 915 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 921 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc34_4
AcademyNpc34_3:
# 928 "data/maps/Harborac/scripts.pory"
	lock
# 929 "data/maps/Harborac/scripts.pory"
	faceplayer
# 930 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_2
# 931 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 916 "data/maps/Harborac/scripts.pory"
	lock
# 917 "data/maps/Harborac/scripts.pory"
	faceplayer
# 918 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 919 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_2:
# 922 "data/maps/Harborac/scripts.pory"
	lock
# 923 "data/maps/Harborac/scripts.pory"
	faceplayer
# 924 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 925 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_4:
# 921 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc34_2
	goto AcademyNpc34_3


AcademyNpc35::
# 936 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc35_1
# 942 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc35_4
AcademyNpc35_3:
# 949 "data/maps/Harborac/scripts.pory"
	lock
# 950 "data/maps/Harborac/scripts.pory"
	faceplayer
# 951 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_2
# 952 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_1:
# 937 "data/maps/Harborac/scripts.pory"
	lock
# 938 "data/maps/Harborac/scripts.pory"
	faceplayer
# 939 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_0
# 940 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_2:
# 943 "data/maps/Harborac/scripts.pory"
	lock
# 944 "data/maps/Harborac/scripts.pory"
	faceplayer
# 945 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_1
# 946 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_4:
# 942 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc35_2
	goto AcademyNpc35_3


AcademyNpc36::
# 957 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc36_1
# 963 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc36_4
AcademyNpc36_3:
# 970 "data/maps/Harborac/scripts.pory"
	lock
# 971 "data/maps/Harborac/scripts.pory"
	faceplayer
# 972 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_2
# 973 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_1:
# 958 "data/maps/Harborac/scripts.pory"
	lock
# 959 "data/maps/Harborac/scripts.pory"
	faceplayer
# 960 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_0
# 961 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_2:
# 964 "data/maps/Harborac/scripts.pory"
	lock
# 965 "data/maps/Harborac/scripts.pory"
	faceplayer
# 966 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_1
# 967 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_4:
# 963 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc36_2
	goto AcademyNpc36_3


AcademyNpc37::
# 978 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc37_1
# 984 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc37_4
AcademyNpc37_3:
# 991 "data/maps/Harborac/scripts.pory"
	lock
# 992 "data/maps/Harborac/scripts.pory"
	faceplayer
# 993 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_2
# 994 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_1:
# 979 "data/maps/Harborac/scripts.pory"
	lock
# 980 "data/maps/Harborac/scripts.pory"
	faceplayer
# 981 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_0
# 982 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_2:
# 985 "data/maps/Harborac/scripts.pory"
	lock
# 986 "data/maps/Harborac/scripts.pory"
	faceplayer
# 987 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_1
# 988 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_4:
# 984 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc37_2
	goto AcademyNpc37_3


AcademyNpc38::
# 999 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc38_1
# 1005 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc38_4
AcademyNpc38_3:
# 1012 "data/maps/Harborac/scripts.pory"
	lock
# 1013 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1014 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_2
# 1015 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_1:
# 1000 "data/maps/Harborac/scripts.pory"
	lock
# 1001 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1002 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_0
# 1003 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_2:
# 1006 "data/maps/Harborac/scripts.pory"
	lock
# 1007 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1008 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_1
# 1009 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_4:
# 1005 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc38_2
	goto AcademyNpc38_3


Doorlock::
# 1020 "data/maps/Harborac/scripts.pory"
	lock
# 1021 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1022 "data/maps/Harborac/scripts.pory"
	msgbox Doorlock_Text_0
# 1023 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, Doorlock_Movement_0
# 1024 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 1025 "data/maps/Harborac/scripts.pory"
	release
	return


# 339 "data/maps/Harborac/scripts.pory"
AcademyNpc4_Movement_0:
# 339 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
	step_end

# 621 "data/maps/Harborac/scripts.pory"
AcademyNpc17_Movement_0:
# 621 "data/maps/Harborac/scripts.pory"
	emote_heart
	step_end

# 1023 "data/maps/Harborac/scripts.pory"
Doorlock_Movement_0:
# 1023 "data/maps/Harborac/scripts.pory"
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
# 16 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.................$"

ONHARBOR1_Text_2:
# 18 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well here it is,\p"
	.string "The Astralis Academy, the place where\n"
	.string "normal trainers become legends.$"

ONHARBOR1_Text_3:
# 20 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

ONHARBOR1_Text_4:
# 22 "data/maps/Harborac/scripts.pory"
	.string "(His eyes...They aren't normal.)$"

ONHARBOR1_Text_5:
# 32 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Legend?.... Become one?...\p"
	.string "I'm gonna destroy them all.$"

Fionamet_Text_0:
# 69 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My apologies....$"

Fionamet_Text_1:
# 72 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Are you alright, my lady?$"

Fionamet_Text_2:
# 75 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How rude of him, he didn't even stop to\n"
	.string "apologize.$"

Fionamet_Text_3:
# 79 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.........$"

Fionamet_Text_4:
# 81 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What happened?$"

Fionamet_Text_5:
# 85 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...........\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 135 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 141 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 143 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 146 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 153 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 159 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 165 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 171 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 177 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 184 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 191 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 197 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could......\p"
	.string "Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

elias_Text_0:
# 206 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're late Xylar.\p"
	.string "My name is David Elias.\p"
	.string "I'm a professor and the headmaster\n"
	.string "made it clear that i was to ensure your\l"
	.string "arrival.\p"
	.string "Come with me, the headmaster is waiting\n"
	.string "for you.$"

elias_Text_1:
# 209 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need an escort.\p"
	.string "Just tell me where I have to go.$"

elias_Text_2:
# 212 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll soon find that attitude won't get\n"
	.string "you far here.\p"
	.string "Respect is earned, young man.\n"
	.string "Now follow me.$"

notnowdorm_Text_0:
# 236 "data/maps/Harborac/scripts.pory"
	.string "Not now.$"

AcademyNpc_Text_0:
# 244 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You look tough! Battle me sometime!$"

AcademyNpc_Text_1:
# 250 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I thought Xylar was just a quiet,\n"
	.string "strong guy… but after that? Damn. He's\l"
	.string "terrifying.$"

AcademyNpc_Text_2:
# 256 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I still wanna battle him, though. Maybe\n"
	.string "that rage is what makes him strong.$"

AcademyNpc1_Text_0:
# 265 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 271 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}See? This is why I hate battling. People\n"
	.string "get too caught up in their emotions.$"

AcademyNpc1_Text_2:
# 277 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I actually feel bad for him. Something's\n"
	.string "clearly wrong, but no one's helping.$"

AcademyNpc2_Text_0:
# 286 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Focus on control, not just power.$"

AcademyNpc2_Text_1:
# 294 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You lost control, Xylar. That is\n"
	.string "unacceptable. You may have skill, but if\l"
	.string "you cannot control yourself, you will\l"
	.string "not last here.$"

AcademyNpc2_Text_2:
# 302 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Power means nothing without restraint.\n"
	.string "Learn that before it's too late.$"

AcademyNpc3_Text_0:
# 312 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 318 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Man, I respected Xylar… but now I don't\n"
	.string "know. That wasn't just rage.$"

AcademyNpc3_Text_2:
# 324 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If he ever loses it in a match… will he\n"
	.string "stop?$"

AcademyNpc4_Text_0:
# 333 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}U-um... hello...$"

AcademyNpc4_Text_1:
# 340 "data/maps/Harborac/scripts.pory"
	.string "(Flinches when Xylar approaches)\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}…I-I shouldn't talk to you.$"

AcademyNpc4_Text_2:
# 346 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I know people say you're dangerous now,\n"
	.string "but… I think you're just hurt.$"

AcademyNpc5_Text_0:
# 357 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 365 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Such raw emotion! Such unfiltered\n"
	.string "intensity!\p"
	.string "…And yet, Xylar, this is not the place\n"
	.string "for a destructive masterpiece.$"

AcademyNpc5_Text_2:
# 373 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Art and battle both require control.\p"
	.string "I hope you learn that before your\n"
	.string "canvas turns to ruin.$"

AcademyNpc6_Text_0:
# 386 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 392 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wanted to draw Xylar's Torchic before.\p"
	.string "Now, I'm not so sure I even want to be\n"
	.string "near him.$"

AcademyNpc6_Text_2:
# 398 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe I'll still draw him.\p"
	.string "Not as a trainer… but as a storm.$"

AcademyNpc7_Text_0:
# 408 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 416 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uncontrolled power is a failure in\n"
	.string "understanding.\p"
	.string "You acted on instinct, but instinct\n"
	.string "without logic leads to destruction.$"

AcademyNpc7_Text_2:
# 424 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Were you even thinking? Or was it\n"
	.string "something deeper than that?$"

AcademyNpc8_Text_0:
# 437 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Studying type advantages wins battles!$"

AcademyNpc8_Text_1:
# 443 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't get it.\p"
	.string "Xylar's strategy was so calculated in\n"
	.string "battle, but outside of it… he was\l"
	.string "reckless.$"

AcademyNpc8_Text_2:
# 449 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe his battles aren't about winning.\p"
	.string "Maybe they're about surviving.$"

AcademyNpc9_Text_0:
# 460 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_1:
# 468 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 478 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 486 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 499 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shhh! Library rules!$"

AcademyNpc11_Text_1:
# 505 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't understand fighters… but that\n"
	.string "wasn't normal, was it?$"

AcademyNpc11_Text_2:
# 511 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd rather read about battles than\n"
	.string "witness them.\p"
	.string "Especially ones like that.$"

AcademyNpc12_Text_0:
# 520 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard of the legend of\n"
	.string "the Jewel of Life?$"

AcademyNpc12_Text_1:
# 526 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc12_Text_2:
# 531 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what are you really fighting\n"
	.string "against, Xylar?$"

AcademyNpc13_Text_0:
# 538 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 546 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 554 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 556 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 557 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 565 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc14_Text_5:
# 571 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've worked here for years… I can tell\n"
	.string "when someone's fighting more than just\l"
	.string "an opponent.$"

AcademyNpc15_Text_0:
# 581 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strive for excellence in all you do.$"

AcademyNpc15_Text_1:
# 589 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar… I see potential in you, but\n"
	.string "potential without control is dangerous.\p"
	.string "You need to understand that.$"

AcademyNpc15_Text_2:
# 597 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You fight like a man with nothing to\n"
	.string "lose.\p"
	.string "That still concerns me.$"

AcademyNpc16_Text_0:
# 606 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter unless they\n"
	.string "reach the semi-finals of the\l"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 614 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 620 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind getting a little rough.$"

AcademyNpc18_Text_0:
# 630 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 638 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 644 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.\p"
	.string "About time.$"

AcademyNpc19_Text_2:
# 650 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're stronger now.\p"
	.string "Not in skill.\p"
	.string "In… presence.\p"
	.string "People notice when you walk into a room.$"

AcademyNpc20_Text_0:
# 660 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow… but\n"
	.string "one thing is clear.\p"
	.string "You do not belong to the light.$"

AcademyNpc20_Text_1:
# 666 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs. It was\n"
	.string "only a matter of time.$"

AcademyNpc20_Text_2:
# 672 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You seek control, but the storm within\n"
	.string "you does not wish to be tamed.$"

AcademyNpc21_Text_0:
# 682 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 688 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered since that\n"
	.string "incident.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc21_Text_2:
# 694 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They came back.\p"
	.string "Not because they trust you, but\n"
	.string "because they recognize what you are\l"
	.string "now.$"

AcademyNpc22_Text_0:
# 704 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 732 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 738 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You do not fear others, you fear\n"
	.string "yourself.$"

AcademyNpc25_Text_2:
# 744 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The path ahead is long.\p"
	.string "But you have not strayed as far as you\n"
	.string "think.$"

AcademyNpc26_Text_0:
# 754 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's in place for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 760 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You think you're untouchable? Losing\n"
	.string "control like that will put a target on\l"
	.string "your back.$"

AcademyNpc26_Text_2:
# 766 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're still young.\p"
	.string "Got time to fix what's broken… if you\n"
	.string "want to.$"

AcademyNpc27_Text_0:
# 776 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that, didn't you?$"

AcademyNpc27_Text_1:
# 784 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage… it suits you. Maybe more\n"
	.string "than you realize.$"

AcademyNpc27_Text_2:
# 792 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day, you'll have to stop pretending\n"
	.string "you can be normal.\p"
	.string "We both know it's not in your nature.$"

AcademyNpc28_Text_0:
# 802 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 808 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc28_Text_2:
# 814 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're different now.\p"
	.string "More… dangerous.$"

AcademyNpc29_Text_0:
# 823 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 831 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more… interesting than others.$"

AcademyNpc30_Text_1:
# 837 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc30_Text_2:
# 843 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your file is still growing.\p"
	.string "The question is what kind of story will\n"
	.string "it tell?$"

AcademyNpc31_Text_0:
# 852 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "Which do you think you'll be?$"

AcademyNpc31_Text_1:
# 858 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That moment back there… that's what I\n"
	.string "call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc31_Text_2:
# 864 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Every great tragedy starts somewhere.\p"
	.string "I wonder where yours began.$"

AcademyNpc32_Text_0:
# 874 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh.\p"
	.string "You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 880 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that ain't easy to clean up.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc32_Text_2:
# 886 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Trouble follows certain kinds of people.\p"
	.string "I'd say it follows you like a shadow.$"

AcademyNpc33_Text_0:
# 896 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The winds whisper secrets… and they\n"
	.string "speak your name.$"

AcademyNpc33_Text_1:
# 902 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc33_Text_2:
# 908 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You are not the first to carry such\n"
	.string "darkness.\p"
	.string "But you might be the last.$"

AcademyNpc34_Text_0:
# 918 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what drives certain Pokémon\n"
	.string "to evolve under extreme stress?$"

AcademyNpc34_Text_1:
# 924 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That kind of aggression… even some\n"
	.string "Pokémon only reach that state when\l"
	.string "pushed too far.$"

AcademyNpc34_Text_2:
# 930 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Survival instincts.\p"
	.string "That's what I see in you.\p"
	.string "You don't fight to win, you fight\n"
	.string "because you have to.$"

AcademyNpc35_Text_0:
# 939 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You don't talk much.\p"
	.string "That's fine.\p"
	.string "Words are just another way to lie.$"

AcademyNpc35_Text_1:
# 945 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough to snap.\p"
	.string "Thought it would happen sooner,\n"
	.string "honestly.$"

AcademyNpc35_Text_2:
# 951 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They're watching you now.\p"
	.string "Not just the teachers.\p"
	.string "Everyone.$"

AcademyNpc36_Text_0:
# 960 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The academy grounds are beautiful in\n"
	.string "the spring.\p"
	.string "It almost feels like a fresh start.$"

AcademyNpc36_Text_1:
# 966 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}H-Hey… um, I should get going.$"

AcademyNpc36_Text_2:
# 972 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's been… a weird few days, huh?$"

AcademyNpc37_Text_0:
# 981 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey, did you hear?\p"
	.string "Some of the seniors are already forming\n"
	.string "battle teams.$"

AcademyNpc37_Text_1:
# 987 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That guy… there's something seriously\n"
	.string "wrong with him.$"

AcademyNpc37_Text_2:
# 993 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess everyone has their moments…\n"
	.string "doesn't mean I'd wanna battle him.$"

AcademyNpc38_Text_0:
# 1002 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm just here to get stronger.\p"
	.string "Everything else is a distraction.$"

AcademyNpc38_Text_1:
# 1008 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… whatever. Just don't cross him.$"

AcademyNpc38_Text_2:
# 1014 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fights like a damn beast… I can\n"
	.string "respect that.$"

Doorlock_Text_0:
# 1022 "data/maps/Harborac/scripts.pory"
	.string "The door is locked.$"

oldman::
# 38 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"

eliasn::
# 230 "data/maps/Harborac/scripts.pory"
	.string "Prof.Elias$"

maribel::
# 379 "data/maps/Harborac/scripts.pory"
	.string "Prof.Dorne$"

orson::
# 430 "data/maps/Harborac/scripts.pory"
	.string "Prof.Orson$"

evelyn::
# 491 "data/maps/Harborac/scripts.pory"
	.string "Prof.Evelyn$"
