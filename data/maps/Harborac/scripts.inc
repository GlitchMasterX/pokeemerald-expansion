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
# 14 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 15 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_0
# 17 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 18 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 20 "data/maps/Harborac/scripts.pory"
	speakername oldman
# 21 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_2, MSGBOX_AUTOCLOSE
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
# 31 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE2
# 32 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 33 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 35 "data/maps/Harborac/scripts.pory"
	pausefakertc
# 36 "data/maps/Harborac/scripts.pory"
	fadedefaultbgm
# 37 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 3
# 38 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR::
# 45 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE1
	return


# 48 "data/maps/Harborac/scripts.pory"
MOVE1:
# 49 "data/maps/Harborac/scripts.pory"
	face_left
	step_end

# 51 "data/maps/Harborac/scripts.pory"
MOVE2:
# 52 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

Fionamet3::
# 55 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 56 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 57 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 59 "data/maps/Harborac/scripts.pory"
mov5:
# 60 "data/maps/Harborac/scripts.pory"
	walk_down
# 60 "data/maps/Harborac/scripts.pory"
	walk_down
	step_end

Fionamet::
# 64 "data/maps/Harborac/scripts.pory"
	lock
# 65 "data/maps/Harborac/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/Harborac/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 67 "data/maps/Harborac/scripts.pory"
	applymovement 0x7F, MOVE6
# 68 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE3
# 69 "data/maps/Harborac/scripts.pory"
	applymovement 12, Fionamet_Movement_0
# 70 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 71 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Harborac/scripts.pory"
	applymovement 12, Fionamet_Movement_1
# 73 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 74 "data/maps/Harborac/scripts.pory"
	playse SE_LEDGE
# 75 "data/maps/Harborac/scripts.pory"
	applymovement 12, Fionamet_Movement_2
# 76 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 77 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 78 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 79 "data/maps/Harborac/scripts.pory"
	closemessage
# 80 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE5
# 81 "data/maps/Harborac/scripts.pory"
	speakername Fionamet_Text_1
# 82 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_2
# 83 "data/maps/Harborac/scripts.pory"
	closemessage
# 84 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 85 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 86 "data/maps/Harborac/scripts.pory"
	applymovement 13, mov1
# 87 "data/maps/Harborac/scripts.pory"
	speakername Fionamet_Text_1
# 88 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 89 "data/maps/Harborac/scripts.pory"
	waitmessage
# 90 "data/maps/Harborac/scripts.pory"
	applymovement 13, Fionamet_Movement_3
# 91 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 92 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 93 "data/maps/Harborac/scripts.pory"
	closemessage
# 94 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Harborac/scripts.pory"
	applymovement 13, Fionamet_Movement_4
# 96 "data/maps/Harborac/scripts.pory"
	speakername Fionamet_Text_1
# 97 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5
# 98 "data/maps/Harborac/scripts.pory"
	waitmessage
# 99 "data/maps/Harborac/scripts.pory"
	closemessage
# 100 "data/maps/Harborac/scripts.pory"
	applymovement 12, Fionamet_Movement_5
# 101 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 102 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_6, MSGBOX_AUTOCLOSE
# 103 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/Harborac/scripts.pory"
	removeobject 12
# 105 "data/maps/Harborac/scripts.pory"
	removeobject 13
# 106 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 107 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 1, 21
# 108 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 111 "data/maps/Harborac/scripts.pory"
mov1:
# 112 "data/maps/Harborac/scripts.pory"
	emote_upset
# 113 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 115 "data/maps/Harborac/scripts.pory"
MOVE6:
# 116 "data/maps/Harborac/scripts.pory"
	walk_right
# 116 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 118 "data/maps/Harborac/scripts.pory"
MOVE3:
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
# 119 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 121 "data/maps/Harborac/scripts.pory"
MOVE4:
# 122 "data/maps/Harborac/scripts.pory"
	walk_left
# 122 "data/maps/Harborac/scripts.pory"
	walk_left
# 122 "data/maps/Harborac/scripts.pory"
	walk_left
# 122 "data/maps/Harborac/scripts.pory"
	walk_left
# 123 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 124 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 125 "data/maps/Harborac/scripts.pory"
	face_down
# 126 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 128 "data/maps/Harborac/scripts.pory"
MOVE5:
# 129 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 129 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 129 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 129 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 129 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 130 "data/maps/Harborac/scripts.pory"
	face_down
	step_end

Fionamet1::
# 133 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov3
# 134 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 135 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


Fionamet2::
# 138 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 139 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 140 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 142 "data/maps/Harborac/scripts.pory"
mov4:
# 143 "data/maps/Harborac/scripts.pory"
	walk_up
# 144 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 146 "data/maps/Harborac/scripts.pory"
mov3:
# 147 "data/maps/Harborac/scripts.pory"
	walk_down
# 148 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 151 "data/maps/Harborac/scripts.pory"
	lock
# 152 "data/maps/Harborac/scripts.pory"
	faceplayer
# 153 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 154 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 157 "data/maps/Harborac/scripts.pory"
	lock
# 158 "data/maps/Harborac/scripts.pory"
	faceplayer
# 159 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 160 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 164 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 166 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 161 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 169 "data/maps/Harborac/scripts.pory"
	lock
# 170 "data/maps/Harborac/scripts.pory"
	faceplayer
# 171 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 172 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 175 "data/maps/Harborac/scripts.pory"
	lock
# 176 "data/maps/Harborac/scripts.pory"
	faceplayer
# 177 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 178 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 181 "data/maps/Harborac/scripts.pory"
	lock
# 182 "data/maps/Harborac/scripts.pory"
	faceplayer
# 183 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 184 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 187 "data/maps/Harborac/scripts.pory"
	lock
# 188 "data/maps/Harborac/scripts.pory"
	faceplayer
# 189 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 190 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 193 "data/maps/Harborac/scripts.pory"
	lock
# 194 "data/maps/Harborac/scripts.pory"
	faceplayer
# 195 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 196 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 199 "data/maps/Harborac/scripts.pory"
	lock
# 200 "data/maps/Harborac/scripts.pory"
	faceplayer
# 201 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 202 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 203 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 207 "data/maps/Harborac/scripts.pory"
	lock
# 208 "data/maps/Harborac/scripts.pory"
	faceplayer
# 209 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 210 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 213 "data/maps/Harborac/scripts.pory"
	lock
# 214 "data/maps/Harborac/scripts.pory"
	faceplayer
# 215 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 216 "data/maps/Harborac/scripts.pory"
	release
	return


elias::
# 220 "data/maps/Harborac/scripts.pory"
	lock
# 221 "data/maps/Harborac/scripts.pory"
	faceplayer
# 222 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 223 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 224 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 225 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 226 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 227 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 228 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 229 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 230 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 231 "data/maps/Harborac/scripts.pory"
	waitse
# 232 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 233 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_3
# 235 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, goin
# 236 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 237 "data/maps/Harborac/scripts.pory"
	removeobject 1
# 238 "data/maps/Harborac/scripts.pory"
	setflag FLAG_ELIASMET
# 239 "data/maps/Harborac/scripts.pory"
	warp MAP_HEADOFFICE, 7, 12
	return


# 241 "data/maps/Harborac/scripts.pory"
goin:
# 242 "data/maps/Harborac/scripts.pory"
	walk_up
# 243 "data/maps/Harborac/scripts.pory"
	set_invisible
	step_end

notnowdorm::
# 249 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, mov5
# 250 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 251 "data/maps/Harborac/scripts.pory"
	msgbox notnowdorm_Text_0
# 252 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc::
# 256 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc_1
# 262 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc_4
AcademyNpc_3:
# 269 "data/maps/Harborac/scripts.pory"
	lock
# 270 "data/maps/Harborac/scripts.pory"
	faceplayer
# 271 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_2
# 272 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_1:
# 257 "data/maps/Harborac/scripts.pory"
	lock
# 258 "data/maps/Harborac/scripts.pory"
	faceplayer
# 259 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_0
# 260 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_2:
# 263 "data/maps/Harborac/scripts.pory"
	lock
# 264 "data/maps/Harborac/scripts.pory"
	faceplayer
# 265 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 266 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_4:
# 262 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc_2
	goto AcademyNpc_3


AcademyNpc1::
# 277 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 283 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc1_4
AcademyNpc1_3:
# 290 "data/maps/Harborac/scripts.pory"
	lock
# 291 "data/maps/Harborac/scripts.pory"
	faceplayer
# 292 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_2
# 293 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 278 "data/maps/Harborac/scripts.pory"
	lock
# 279 "data/maps/Harborac/scripts.pory"
	faceplayer
# 280 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 281 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_2:
# 284 "data/maps/Harborac/scripts.pory"
	lock
# 285 "data/maps/Harborac/scripts.pory"
	faceplayer
# 286 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 287 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_4:
# 283 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc1_2
	goto AcademyNpc1_3


AcademyNpc2::
# 297 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 305 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc2_4
AcademyNpc2_3:
# 314 "data/maps/Harborac/scripts.pory"
	lock
# 315 "data/maps/Harborac/scripts.pory"
	faceplayer
# 316 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 317 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_2
# 319 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 298 "data/maps/Harborac/scripts.pory"
	lock
# 299 "data/maps/Harborac/scripts.pory"
	faceplayer
# 300 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 301 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 303 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_2:
# 306 "data/maps/Harborac/scripts.pory"
	lock
# 307 "data/maps/Harborac/scripts.pory"
	faceplayer
# 308 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 309 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 311 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_4:
# 305 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc2_2
	goto AcademyNpc2_3


AcademyNpc3::
# 324 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 330 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc3_4
AcademyNpc3_3:
# 337 "data/maps/Harborac/scripts.pory"
	lock
# 338 "data/maps/Harborac/scripts.pory"
	faceplayer
# 339 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_2
# 340 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 325 "data/maps/Harborac/scripts.pory"
	lock
# 326 "data/maps/Harborac/scripts.pory"
	faceplayer
# 327 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 328 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_2:
# 331 "data/maps/Harborac/scripts.pory"
	lock
# 332 "data/maps/Harborac/scripts.pory"
	faceplayer
# 333 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 334 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_4:
# 330 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc3_2
	goto AcademyNpc3_3


AcademyNpc4::
# 345 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 351 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc4_4
AcademyNpc4_3:
# 359 "data/maps/Harborac/scripts.pory"
	lock
# 360 "data/maps/Harborac/scripts.pory"
	faceplayer
# 361 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_2
# 362 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 346 "data/maps/Harborac/scripts.pory"
	lock
# 347 "data/maps/Harborac/scripts.pory"
	faceplayer
# 348 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 349 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_2:
# 352 "data/maps/Harborac/scripts.pory"
	lock
# 353 "data/maps/Harborac/scripts.pory"
	faceplayer
# 354 "data/maps/Harborac/scripts.pory"
	applymovement 2, Fionamet_Movement_1
# 355 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 356 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_4:
# 351 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc4_2
	goto AcademyNpc4_3


AcademyNpc5::
# 368 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 376 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc5_4
AcademyNpc5_3:
# 385 "data/maps/Harborac/scripts.pory"
	lock
# 386 "data/maps/Harborac/scripts.pory"
	faceplayer
# 387 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 388 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_2
# 390 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 369 "data/maps/Harborac/scripts.pory"
	lock
# 370 "data/maps/Harborac/scripts.pory"
	faceplayer
# 371 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 372 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 374 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_2:
# 377 "data/maps/Harborac/scripts.pory"
	lock
# 378 "data/maps/Harborac/scripts.pory"
	faceplayer
# 379 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 380 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 382 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_4:
# 376 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc5_2
	goto AcademyNpc5_3


AcademyNpc6::
# 398 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 404 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc6_4
AcademyNpc6_3:
# 411 "data/maps/Harborac/scripts.pory"
	lock
# 412 "data/maps/Harborac/scripts.pory"
	faceplayer
# 413 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_2
# 414 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 399 "data/maps/Harborac/scripts.pory"
	lock
# 400 "data/maps/Harborac/scripts.pory"
	faceplayer
# 401 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 402 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_2:
# 405 "data/maps/Harborac/scripts.pory"
	lock
# 406 "data/maps/Harborac/scripts.pory"
	faceplayer
# 407 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 408 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_4:
# 404 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc6_2
	goto AcademyNpc6_3


AcademyNpc7::
# 419 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 427 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc7_4
AcademyNpc7_3:
# 436 "data/maps/Harborac/scripts.pory"
	lock
# 437 "data/maps/Harborac/scripts.pory"
	faceplayer
# 438 "data/maps/Harborac/scripts.pory"
	speakername orson
# 439 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_2
# 441 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 420 "data/maps/Harborac/scripts.pory"
	lock
# 421 "data/maps/Harborac/scripts.pory"
	faceplayer
# 422 "data/maps/Harborac/scripts.pory"
	speakername orson
# 423 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 425 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_2:
# 428 "data/maps/Harborac/scripts.pory"
	lock
# 429 "data/maps/Harborac/scripts.pory"
	faceplayer
# 430 "data/maps/Harborac/scripts.pory"
	speakername orson
# 431 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 433 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_4:
# 427 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc7_2
	goto AcademyNpc7_3


AcademyNpc8::
# 449 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 455 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc8_4
AcademyNpc8_3:
# 462 "data/maps/Harborac/scripts.pory"
	lock
# 463 "data/maps/Harborac/scripts.pory"
	faceplayer
# 464 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_2
# 465 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 450 "data/maps/Harborac/scripts.pory"
	lock
# 451 "data/maps/Harborac/scripts.pory"
	faceplayer
# 452 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 453 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_2:
# 456 "data/maps/Harborac/scripts.pory"
	lock
# 457 "data/maps/Harborac/scripts.pory"
	faceplayer
# 458 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 459 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_4:
# 455 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc8_2
	goto AcademyNpc8_3


AcademyNpc9::
# 471 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 480 "data/maps/Harborac/scripts.pory"
	lock
# 481 "data/maps/Harborac/scripts.pory"
	faceplayer
# 482 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 483 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_2
# 485 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 472 "data/maps/Harborac/scripts.pory"
	lock
# 473 "data/maps/Harborac/scripts.pory"
	faceplayer
# 474 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 475 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 477 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 489 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 498 "data/maps/Harborac/scripts.pory"
	lock
# 499 "data/maps/Harborac/scripts.pory"
	faceplayer
# 500 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 501 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 503 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 490 "data/maps/Harborac/scripts.pory"
	lock
# 491 "data/maps/Harborac/scripts.pory"
	faceplayer
# 492 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 493 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 495 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 511 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 517 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc11_4
AcademyNpc11_3:
# 524 "data/maps/Harborac/scripts.pory"
	lock
# 525 "data/maps/Harborac/scripts.pory"
	faceplayer
# 526 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_2
# 527 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 512 "data/maps/Harborac/scripts.pory"
	lock
# 513 "data/maps/Harborac/scripts.pory"
	faceplayer
# 514 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 515 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_2:
# 518 "data/maps/Harborac/scripts.pory"
	lock
# 519 "data/maps/Harborac/scripts.pory"
	faceplayer
# 520 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 521 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_4:
# 517 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc11_2
	goto AcademyNpc11_3


AcademyNpc12::
# 532 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 538 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc12_4
AcademyNpc12_3:
# 544 "data/maps/Harborac/scripts.pory"
	lock
# 545 "data/maps/Harborac/scripts.pory"
	faceplayer
# 546 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_2
# 547 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 533 "data/maps/Harborac/scripts.pory"
	lock
# 534 "data/maps/Harborac/scripts.pory"
	faceplayer
# 535 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0
# 536 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_2:
# 539 "data/maps/Harborac/scripts.pory"
	lock
# 540 "data/maps/Harborac/scripts.pory"
	faceplayer
# 541 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 542 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_4:
# 538 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc12_2
	goto AcademyNpc12_3


AcademyNpc13::
# 551 "data/maps/Harborac/scripts.pory"
	lock
# 552 "data/maps/Harborac/scripts.pory"
	faceplayer
# 553 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 554 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 558 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_13
AcademyNpc14_11:
# 564 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_LEAFMET, AcademyNpc14_10
AcademyNpc14_6:
# 577 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc14_5
AcademyNpc14_4:
# 584 "data/maps/Harborac/scripts.pory"
	lock
# 585 "data/maps/Harborac/scripts.pory"
	faceplayer
# 586 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_5
# 587 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 559 "data/maps/Harborac/scripts.pory"
	lock
# 560 "data/maps/Harborac/scripts.pory"
	faceplayer
# 561 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 562 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 566 "data/maps/Harborac/scripts.pory"
	lock
# 567 "data/maps/Harborac/scripts.pory"
	faceplayer
# 568 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 569 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 570 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 571 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 572 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 573 "data/maps/Harborac/scripts.pory"
	release
# 574 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_LEAFMET
# 575 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_3:
# 578 "data/maps/Harborac/scripts.pory"
	lock
# 579 "data/maps/Harborac/scripts.pory"
	faceplayer
# 580 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 581 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_5:
# 577 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc14_7
	goto AcademyNpc14_4

AcademyNpc14_7:
# 577 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_3
	goto AcademyNpc14_4

AcademyNpc14_10:
# 564 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_6

AcademyNpc14_13:
# 558 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_11


AcademyNpc15::
# 592 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 600 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc15_4
AcademyNpc15_3:
# 609 "data/maps/Harborac/scripts.pory"
	lock
# 610 "data/maps/Harborac/scripts.pory"
	faceplayer
# 611 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 612 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_2
# 614 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 593 "data/maps/Harborac/scripts.pory"
	lock
# 594 "data/maps/Harborac/scripts.pory"
	faceplayer
# 595 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 596 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 598 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_2:
# 601 "data/maps/Harborac/scripts.pory"
	lock
# 602 "data/maps/Harborac/scripts.pory"
	faceplayer
# 603 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 604 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 606 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_4:
# 600 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc15_2
	goto AcademyNpc15_3


AcademyNpc16::
# 619 "data/maps/Harborac/scripts.pory"
	lock
# 620 "data/maps/Harborac/scripts.pory"
	faceplayer
# 621 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 622 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 626 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 633 "data/maps/Harborac/scripts.pory"
	lock
# 634 "data/maps/Harborac/scripts.pory"
	faceplayer
# 635 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 636 "data/maps/Harborac/scripts.pory"
	applymovement 4, AcademyNpc17_Movement_0
# 637 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 638 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 627 "data/maps/Harborac/scripts.pory"
	lock
# 628 "data/maps/Harborac/scripts.pory"
	faceplayer
# 629 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 630 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 643 "data/maps/Harborac/scripts.pory"
	lock
# 644 "data/maps/Harborac/scripts.pory"
	faceplayer
# 645 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 646 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 650 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 656 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc19_4
AcademyNpc19_3:
# 663 "data/maps/Harborac/scripts.pory"
	lock
# 664 "data/maps/Harborac/scripts.pory"
	faceplayer
# 665 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_2
# 666 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 651 "data/maps/Harborac/scripts.pory"
	lock
# 652 "data/maps/Harborac/scripts.pory"
	faceplayer
# 653 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 654 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_2:
# 657 "data/maps/Harborac/scripts.pory"
	lock
# 658 "data/maps/Harborac/scripts.pory"
	faceplayer
# 659 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 660 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_4:
# 656 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc19_2
	goto AcademyNpc19_3


AcademyNpc20::
# 672 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 678 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc20_4
AcademyNpc20_3:
# 685 "data/maps/Harborac/scripts.pory"
	lock
# 686 "data/maps/Harborac/scripts.pory"
	faceplayer
# 687 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_2
# 688 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 673 "data/maps/Harborac/scripts.pory"
	lock
# 674 "data/maps/Harborac/scripts.pory"
	faceplayer
# 675 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 676 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_2:
# 679 "data/maps/Harborac/scripts.pory"
	lock
# 680 "data/maps/Harborac/scripts.pory"
	faceplayer
# 681 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 682 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_4:
# 678 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc20_2
	goto AcademyNpc20_3


AcademyNpc21::
# 694 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 700 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc21_4
AcademyNpc21_3:
# 707 "data/maps/Harborac/scripts.pory"
	lock
# 708 "data/maps/Harborac/scripts.pory"
	faceplayer
# 709 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_2
# 710 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 695 "data/maps/Harborac/scripts.pory"
	lock
# 696 "data/maps/Harborac/scripts.pory"
	faceplayer
# 697 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 698 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_2:
# 701 "data/maps/Harborac/scripts.pory"
	lock
# 702 "data/maps/Harborac/scripts.pory"
	faceplayer
# 703 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 704 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_4:
# 700 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc21_2
	goto AcademyNpc21_3


AcademyNpc22::
# 716 "data/maps/Harborac/scripts.pory"
	lock
# 717 "data/maps/Harborac/scripts.pory"
	faceplayer
# 718 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 719 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 720 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 721 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 722 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 726 "data/maps/Harborac/scripts.pory"
	lock
# 727 "data/maps/Harborac/scripts.pory"
	faceplayer
# 728 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 729 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 730 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 731 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 732 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 735 "data/maps/Harborac/scripts.pory"
	lock
# 736 "data/maps/Harborac/scripts.pory"
	faceplayer
# 737 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 738 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 739 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 740 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 741 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 744 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 750 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc25_4
AcademyNpc25_3:
# 757 "data/maps/Harborac/scripts.pory"
	lock
# 758 "data/maps/Harborac/scripts.pory"
	faceplayer
# 759 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_2
# 760 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 745 "data/maps/Harborac/scripts.pory"
	lock
# 746 "data/maps/Harborac/scripts.pory"
	faceplayer
# 747 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 748 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_2:
# 751 "data/maps/Harborac/scripts.pory"
	lock
# 752 "data/maps/Harborac/scripts.pory"
	faceplayer
# 753 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 754 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_4:
# 750 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc25_2
	goto AcademyNpc25_3


AcademyNpc26::
# 766 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 772 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc26_4
AcademyNpc26_3:
# 779 "data/maps/Harborac/scripts.pory"
	lock
# 780 "data/maps/Harborac/scripts.pory"
	faceplayer
# 781 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_2
# 782 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 767 "data/maps/Harborac/scripts.pory"
	lock
# 768 "data/maps/Harborac/scripts.pory"
	faceplayer
# 769 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 770 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_2:
# 773 "data/maps/Harborac/scripts.pory"
	lock
# 774 "data/maps/Harborac/scripts.pory"
	faceplayer
# 775 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 776 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_4:
# 772 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc26_2
	goto AcademyNpc26_3


AcademyNpc27::
# 787 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 795 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc27_4
AcademyNpc27_3:
# 804 "data/maps/Harborac/scripts.pory"
	lock
# 805 "data/maps/Harborac/scripts.pory"
	faceplayer
# 806 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 807 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_2
# 809 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 788 "data/maps/Harborac/scripts.pory"
	lock
# 789 "data/maps/Harborac/scripts.pory"
	faceplayer
# 790 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 791 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 793 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_2:
# 796 "data/maps/Harborac/scripts.pory"
	lock
# 797 "data/maps/Harborac/scripts.pory"
	faceplayer
# 798 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 799 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 801 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_4:
# 795 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc27_2
	goto AcademyNpc27_3


AcademyNpc28::
# 814 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 820 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc28_4
AcademyNpc28_3:
# 827 "data/maps/Harborac/scripts.pory"
	lock
# 828 "data/maps/Harborac/scripts.pory"
	faceplayer
# 829 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_2
# 830 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 815 "data/maps/Harborac/scripts.pory"
	lock
# 816 "data/maps/Harborac/scripts.pory"
	faceplayer
# 817 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 818 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_2:
# 821 "data/maps/Harborac/scripts.pory"
	lock
# 822 "data/maps/Harborac/scripts.pory"
	faceplayer
# 823 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 824 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_4:
# 820 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc28_2
	goto AcademyNpc28_3


AcademyNpc29::
# 836 "data/maps/Harborac/scripts.pory"
	lock
# 837 "data/maps/Harborac/scripts.pory"
	faceplayer
# 838 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 839 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 843 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 849 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc30_4
AcademyNpc30_3:
# 856 "data/maps/Harborac/scripts.pory"
	lock
# 857 "data/maps/Harborac/scripts.pory"
	faceplayer
# 858 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_2
# 859 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 844 "data/maps/Harborac/scripts.pory"
	lock
# 845 "data/maps/Harborac/scripts.pory"
	faceplayer
# 846 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 847 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_2:
# 850 "data/maps/Harborac/scripts.pory"
	lock
# 851 "data/maps/Harborac/scripts.pory"
	faceplayer
# 852 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 853 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_4:
# 849 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc30_2
	goto AcademyNpc30_3


AcademyNpc31::
# 864 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 870 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc31_4
AcademyNpc31_3:
# 877 "data/maps/Harborac/scripts.pory"
	lock
# 878 "data/maps/Harborac/scripts.pory"
	faceplayer
# 879 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_2
# 880 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 865 "data/maps/Harborac/scripts.pory"
	lock
# 866 "data/maps/Harborac/scripts.pory"
	faceplayer
# 867 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 868 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_2:
# 871 "data/maps/Harborac/scripts.pory"
	lock
# 872 "data/maps/Harborac/scripts.pory"
	faceplayer
# 873 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 874 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_4:
# 870 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc31_2
	goto AcademyNpc31_3


AcademyNpc32::
# 886 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 892 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc32_4
AcademyNpc32_3:
# 899 "data/maps/Harborac/scripts.pory"
	lock
# 900 "data/maps/Harborac/scripts.pory"
	faceplayer
# 901 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_2
# 902 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 887 "data/maps/Harborac/scripts.pory"
	lock
# 888 "data/maps/Harborac/scripts.pory"
	faceplayer
# 889 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 890 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_2:
# 893 "data/maps/Harborac/scripts.pory"
	lock
# 894 "data/maps/Harborac/scripts.pory"
	faceplayer
# 895 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 896 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_4:
# 892 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc32_2
	goto AcademyNpc32_3


AcademyNpc33::
# 908 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 914 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc33_4
AcademyNpc33_3:
# 921 "data/maps/Harborac/scripts.pory"
	lock
# 922 "data/maps/Harborac/scripts.pory"
	faceplayer
# 923 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_2
# 924 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 909 "data/maps/Harborac/scripts.pory"
	lock
# 910 "data/maps/Harborac/scripts.pory"
	faceplayer
# 911 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 912 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_2:
# 915 "data/maps/Harborac/scripts.pory"
	lock
# 916 "data/maps/Harborac/scripts.pory"
	faceplayer
# 917 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 918 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_4:
# 914 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc33_2
	goto AcademyNpc33_3


AcademyNpc34::
# 930 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 936 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc34_4
AcademyNpc34_3:
# 943 "data/maps/Harborac/scripts.pory"
	lock
# 944 "data/maps/Harborac/scripts.pory"
	faceplayer
# 945 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_2
# 946 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 931 "data/maps/Harborac/scripts.pory"
	lock
# 932 "data/maps/Harborac/scripts.pory"
	faceplayer
# 933 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 934 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_2:
# 937 "data/maps/Harborac/scripts.pory"
	lock
# 938 "data/maps/Harborac/scripts.pory"
	faceplayer
# 939 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 940 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_4:
# 936 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc34_2
	goto AcademyNpc34_3


AcademyNpc35::
# 951 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc35_1
# 957 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc35_4
AcademyNpc35_3:
# 964 "data/maps/Harborac/scripts.pory"
	lock
# 965 "data/maps/Harborac/scripts.pory"
	faceplayer
# 966 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_2
# 967 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_1:
# 952 "data/maps/Harborac/scripts.pory"
	lock
# 953 "data/maps/Harborac/scripts.pory"
	faceplayer
# 954 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_0
# 955 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_2:
# 958 "data/maps/Harborac/scripts.pory"
	lock
# 959 "data/maps/Harborac/scripts.pory"
	faceplayer
# 960 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_1
# 961 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_4:
# 957 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc35_2
	goto AcademyNpc35_3


AcademyNpc36::
# 972 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc36_1
# 978 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc36_4
AcademyNpc36_3:
# 985 "data/maps/Harborac/scripts.pory"
	lock
# 986 "data/maps/Harborac/scripts.pory"
	faceplayer
# 987 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_2
# 988 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_1:
# 973 "data/maps/Harborac/scripts.pory"
	lock
# 974 "data/maps/Harborac/scripts.pory"
	faceplayer
# 975 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_0
# 976 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_2:
# 979 "data/maps/Harborac/scripts.pory"
	lock
# 980 "data/maps/Harborac/scripts.pory"
	faceplayer
# 981 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_1
# 982 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_4:
# 978 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc36_2
	goto AcademyNpc36_3


AcademyNpc37::
# 993 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc37_1
# 999 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc37_4
AcademyNpc37_3:
# 1006 "data/maps/Harborac/scripts.pory"
	lock
# 1007 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1008 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_2
# 1009 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_1:
# 994 "data/maps/Harborac/scripts.pory"
	lock
# 995 "data/maps/Harborac/scripts.pory"
	faceplayer
# 996 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_0
# 997 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_2:
# 1000 "data/maps/Harborac/scripts.pory"
	lock
# 1001 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1002 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_1
# 1003 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_4:
# 999 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc37_2
	goto AcademyNpc37_3


AcademyNpc38::
# 1014 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc38_1
# 1020 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc38_4
AcademyNpc38_3:
# 1027 "data/maps/Harborac/scripts.pory"
	lock
# 1028 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1029 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_2
# 1030 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_1:
# 1015 "data/maps/Harborac/scripts.pory"
	lock
# 1016 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1017 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_0
# 1018 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_2:
# 1021 "data/maps/Harborac/scripts.pory"
	lock
# 1022 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1023 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_1
# 1024 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_4:
# 1020 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc38_2
	goto AcademyNpc38_3


Doorlock::
# 1035 "data/maps/Harborac/scripts.pory"
	lock
# 1036 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1037 "data/maps/Harborac/scripts.pory"
	msgbox Doorlock_Text_0
# 1038 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, Fionamet_Movement_3
# 1039 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 1040 "data/maps/Harborac/scripts.pory"
	release
	return


# 69 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_0:
# 69 "data/maps/Harborac/scripts.pory"
	walk_left
# 69 "data/maps/Harborac/scripts.pory"
	walk_left
# 69 "data/maps/Harborac/scripts.pory"
	walk_left
	step_end

# 72 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_1:
# 72 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_2:
# 75 "data/maps/Harborac/scripts.pory"
	jump_up
# 75 "data/maps/Harborac/scripts.pory"
	face_down
# 75 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 90 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_3:
# 90 "data/maps/Harborac/scripts.pory"
	face_down
	step_end

# 95 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_4:
# 95 "data/maps/Harborac/scripts.pory"
	emote_question_mark
	step_end

# 100 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_5:
# 100 "data/maps/Harborac/scripts.pory"
	delay_16
# 100 "data/maps/Harborac/scripts.pory"
	face_left
	step_end

# 636 "data/maps/Harborac/scripts.pory"
AcademyNpc17_Movement_0:
# 636 "data/maps/Harborac/scripts.pory"
	emote_heart
	step_end

ONHARBOR1_Text_0:
# 15 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here we are, young man.\p"
	.string "The Astralis Academy-the place where\n"
	.string "ordinary trainers become legends.$"

ONHARBOR1_Text_1:
# 18 "data/maps/Harborac/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

ONHARBOR1_Text_2:
# 21 "data/maps/Harborac/scripts.pory"
	.string "(His eyes... are not normal.)$"

ONHARBOR1_Text_3:
# 33 "data/maps/Harborac/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Legends don't matter to the dead.$"

Fionamet_Text_0:
# 78 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My apologies……$"

Fionamet_Text_1:
# 81 "data/maps/Harborac/scripts.pory"
	.string "Maid$"

Fionamet_Text_2:
# 82 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Are you alright, my lady?$"

Fionamet_Text_3:
# 88 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How rude of him, he didn't even stop to\n"
	.string "apologize.$"

Fionamet_Text_4:
# 92 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}……$"

Fionamet_Text_5:
# 97 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What happened?$"

Fionamet_Text_6:
# 102 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}……\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 153 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 159 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 161 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 164 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 171 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 177 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 183 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 189 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 195 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 202 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 209 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 215 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could......\p"
	.string "Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

elias_Text_0:
# 224 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're late Xylar.\p"
	.string "My name is Elias.\p"
	.string "I'm a professor and the headmaster\n"
	.string "made it clear that I was to ensure your\l"
	.string "arrival.\p"
	.string "Come with me, the headmaster is waiting\n"
	.string "for you.$"

elias_Text_1:
# 226 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need an escort.\p"
	.string "Just tell me where I have to go.$"

elias_Text_2:
# 228 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll soon find that attitude won't get\n"
	.string "you far here.\p"
	.string "Respect is earned, young man.\n"
	.string "Now follow me.$"

elias_Text_3:
# 233 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

notnowdorm_Text_0:
# 251 "data/maps/Harborac/scripts.pory"
	.string "Not now.$"

AcademyNpc_Text_0:
# 259 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You look tough! Battle me sometime!$"

AcademyNpc_Text_1:
# 265 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I thought Xylar was just a quiet,\n"
	.string "strong guy… but after that? Damn. He's\l"
	.string "terrifying.$"

AcademyNpc_Text_2:
# 271 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I still wanna battle him, though. Maybe\n"
	.string "that rage is what makes him strong.$"

AcademyNpc1_Text_0:
# 280 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 286 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}See? This is why I hate battling. People\n"
	.string "get too caught up in their emotions.$"

AcademyNpc1_Text_2:
# 292 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I actually feel bad for him. Something's\n"
	.string "clearly wrong, but no one's helping.$"

AcademyNpc2_Text_0:
# 301 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Focus on control, not just power.$"

AcademyNpc2_Text_1:
# 309 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You lost control, Xylar. That is\n"
	.string "unacceptable. You may have skill, but if\l"
	.string "you cannot control yourself, you will\l"
	.string "not last here.$"

AcademyNpc2_Text_2:
# 317 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Power means nothing without restraint.\n"
	.string "Learn that before it's too late.$"

AcademyNpc3_Text_0:
# 327 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 333 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Man, I respected Xylar… but now I don't\n"
	.string "know. That wasn't just rage.$"

AcademyNpc3_Text_2:
# 339 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If he ever loses it in a match… will he\n"
	.string "stop?$"

AcademyNpc4_Text_0:
# 348 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}U-um... hello...$"

AcademyNpc4_Text_1:
# 355 "data/maps/Harborac/scripts.pory"
	.string "(Flinches when Xylar approaches)\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}…I-I shouldn't talk to you.$"

AcademyNpc4_Text_2:
# 361 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I know people say you're dangerous now,\n"
	.string "but… I think you're just hurt.$"

AcademyNpc5_Text_0:
# 372 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 380 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Such raw emotion! Such unfiltered\n"
	.string "intensity!\p"
	.string "…And yet, Xylar, this is not the place\n"
	.string "for a destructive masterpiece.$"

AcademyNpc5_Text_2:
# 388 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Art and battle both require control.\p"
	.string "I hope you learn that before your\n"
	.string "canvas turns to ruin.$"

AcademyNpc6_Text_0:
# 401 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 407 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wanted to draw Xylar's Torchic before.\p"
	.string "Now, I'm not so sure I even want to be\n"
	.string "near him.$"

AcademyNpc6_Text_2:
# 413 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe I'll still draw him.\p"
	.string "Not as a trainer… but as a storm.$"

AcademyNpc7_Text_0:
# 423 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 431 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uncontrolled power is a failure in\n"
	.string "understanding.\p"
	.string "You acted on instinct, but instinct\n"
	.string "without logic leads to destruction.$"

AcademyNpc7_Text_2:
# 439 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Were you even thinking? Or was it\n"
	.string "something deeper than that?$"

AcademyNpc8_Text_0:
# 452 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Studying type advantages wins battles!$"

AcademyNpc8_Text_1:
# 458 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't get it.\p"
	.string "Xylar's strategy was so calculated in\n"
	.string "battle, but outside of it… he was\l"
	.string "reckless.$"

AcademyNpc8_Text_2:
# 464 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe his battles aren't about winning.\p"
	.string "Maybe they're about surviving.$"

AcademyNpc9_Text_0:
# 474 "data/maps/Harborac/scripts.pory"
	.string "Leaf$"

AcademyNpc9_Text_1:
# 475 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_2:
# 483 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 493 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 501 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 514 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shhh! Library rules!$"

AcademyNpc11_Text_1:
# 520 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't understand fighters… but that\n"
	.string "wasn't normal, was it?$"

AcademyNpc11_Text_2:
# 526 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd rather read about battles than\n"
	.string "witness them.\p"
	.string "Especially ones like that.$"

AcademyNpc12_Text_0:
# 535 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard of the legend of\n"
	.string "the Jewel of Life?$"

AcademyNpc12_Text_1:
# 541 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc12_Text_2:
# 546 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what are you really fighting\n"
	.string "against, Xylar?$"

AcademyNpc13_Text_0:
# 553 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 561 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 569 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 571 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 572 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 580 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc14_Text_5:
# 586 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've worked here for years… I can tell\n"
	.string "when someone's fighting more than just\l"
	.string "an opponent.$"

AcademyNpc15_Text_0:
# 596 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strive for excellence in all you do.$"

AcademyNpc15_Text_1:
# 604 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar… I see potential in you, but\n"
	.string "potential without control is dangerous.\p"
	.string "You need to understand that.$"

AcademyNpc15_Text_2:
# 612 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You fight like a man with nothing to\n"
	.string "lose.\p"
	.string "That still concerns me.$"

AcademyNpc16_Text_0:
# 621 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter unless they\n"
	.string "reach the semi-finals of the\l"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 629 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 635 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind getting a little rough.$"

AcademyNpc18_Text_0:
# 645 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 653 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 659 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.\p"
	.string "About time.$"

AcademyNpc19_Text_2:
# 665 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're stronger now.\p"
	.string "Not in skill.\p"
	.string "In… presence.\p"
	.string "People notice when you walk into a room.$"

AcademyNpc20_Text_0:
# 675 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow… but\n"
	.string "one thing is clear.\p"
	.string "You do not belong to the light.$"

AcademyNpc20_Text_1:
# 681 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs. It was\n"
	.string "only a matter of time.$"

AcademyNpc20_Text_2:
# 687 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You seek control, but the storm within\n"
	.string "you does not wish to be tamed.$"

AcademyNpc21_Text_0:
# 697 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 703 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered since that\n"
	.string "incident.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc21_Text_2:
# 709 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They came back.\p"
	.string "Not because they trust you, but\n"
	.string "because they recognize what you are\l"
	.string "now.$"

AcademyNpc22_Text_0:
# 719 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 747 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 753 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You do not fear others, you fear\n"
	.string "yourself.$"

AcademyNpc25_Text_2:
# 759 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The path ahead is long.\p"
	.string "But you have not strayed as far as you\n"
	.string "think.$"

AcademyNpc26_Text_0:
# 769 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's in place for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 775 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You think you're untouchable? Losing\n"
	.string "control like that will put a target on\l"
	.string "your back.$"

AcademyNpc26_Text_2:
# 781 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're still young.\p"
	.string "Got time to fix what's broken… if you\n"
	.string "want to.$"

AcademyNpc27_Text_0:
# 791 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that, didn't you?$"

AcademyNpc27_Text_1:
# 799 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage… it suits you. Maybe more\n"
	.string "than you realize.$"

AcademyNpc27_Text_2:
# 807 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day, you'll have to stop pretending\n"
	.string "you can be normal.\p"
	.string "We both know it's not in your nature.$"

AcademyNpc28_Text_0:
# 817 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 823 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc28_Text_2:
# 829 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're different now.\p"
	.string "More… dangerous.$"

AcademyNpc29_Text_0:
# 838 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 846 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more… interesting than others.$"

AcademyNpc30_Text_1:
# 852 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc30_Text_2:
# 858 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your file is still growing.\p"
	.string "The question is what kind of story will\n"
	.string "it tell?$"

AcademyNpc31_Text_0:
# 867 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "Which do you think you'll be?$"

AcademyNpc31_Text_1:
# 873 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That moment back there… that's what I\n"
	.string "call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc31_Text_2:
# 879 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Every great tragedy starts somewhere.\p"
	.string "I wonder where yours began.$"

AcademyNpc32_Text_0:
# 889 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh.\p"
	.string "You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 895 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that ain't easy to clean up.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc32_Text_2:
# 901 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Trouble follows certain kinds of people.\p"
	.string "I'd say it follows you like a shadow.$"

AcademyNpc33_Text_0:
# 911 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The winds whisper secrets… and they\n"
	.string "speak your name.$"

AcademyNpc33_Text_1:
# 917 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc33_Text_2:
# 923 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You are not the first to carry such\n"
	.string "darkness.\p"
	.string "But you might be the last.$"

AcademyNpc34_Text_0:
# 933 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what drives certain Pokémon\n"
	.string "to evolve under extreme stress?$"

AcademyNpc34_Text_1:
# 939 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That kind of aggression… even some\n"
	.string "Pokémon only reach that state when\l"
	.string "pushed too far.$"

AcademyNpc34_Text_2:
# 945 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Survival instincts.\p"
	.string "That's what I see in you.\p"
	.string "You don't fight to win, you fight\n"
	.string "because you have to.$"

AcademyNpc35_Text_0:
# 954 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You don't talk much.\p"
	.string "That's fine.\p"
	.string "Words are just another way to lie.$"

AcademyNpc35_Text_1:
# 960 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough to snap.\p"
	.string "Thought it would happen sooner,\n"
	.string "honestly.$"

AcademyNpc35_Text_2:
# 966 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They're watching you now.\p"
	.string "Not just the teachers.\p"
	.string "Everyone.$"

AcademyNpc36_Text_0:
# 975 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The academy grounds are beautiful in\n"
	.string "the spring.\p"
	.string "It almost feels like a fresh start.$"

AcademyNpc36_Text_1:
# 981 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}H-Hey… um, I should get going.$"

AcademyNpc36_Text_2:
# 987 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's been… a weird few days, huh?$"

AcademyNpc37_Text_0:
# 996 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey, did you hear?\p"
	.string "Some of the seniors are already forming\n"
	.string "battle teams.$"

AcademyNpc37_Text_1:
# 1002 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That guy… there's something seriously\n"
	.string "wrong with him.$"

AcademyNpc37_Text_2:
# 1008 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess everyone has their moments…\n"
	.string "doesn't mean I'd wanna battle him.$"

AcademyNpc38_Text_0:
# 1017 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm just here to get stronger.\p"
	.string "Everything else is a distraction.$"

AcademyNpc38_Text_1:
# 1023 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… whatever. Just don't cross him.$"

AcademyNpc38_Text_2:
# 1029 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fights like a damn beast… I can\n"
	.string "respect that.$"

Doorlock_Text_0:
# 1037 "data/maps/Harborac/scripts.pory"
	.string "The door is locked.$"

oldman::
# 41 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"

eliasn::
# 245 "data/maps/Harborac/scripts.pory"
	.string "Prof.Elias$"

maribel::
# 394 "data/maps/Harborac/scripts.pory"
	.string "Prof.Dorne$"

orson::
# 445 "data/maps/Harborac/scripts.pory"
	.string "Prof.Orson$"

evelyn::
# 506 "data/maps/Harborac/scripts.pory"
	.string "Prof.Evelyn$"
