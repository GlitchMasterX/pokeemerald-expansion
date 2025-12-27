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
	applymovement 3, Fionamet_Movement_0
# 70 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 71 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_1
# 73 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 74 "data/maps/Harborac/scripts.pory"
	playse SE_LEDGE
# 75 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_2
# 76 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 77 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 78 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 79 "data/maps/Harborac/scripts.pory"
	closemessage
# 80 "data/maps/Harborac/scripts.pory"
	applymovement 4, MOVE5
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
	applymovement 4, mov1
# 87 "data/maps/Harborac/scripts.pory"
	speakername Fionamet_Text_1
# 88 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 89 "data/maps/Harborac/scripts.pory"
	waitmessage
# 90 "data/maps/Harborac/scripts.pory"
	applymovement 4, Fionamet_Movement_3
# 91 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 92 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 93 "data/maps/Harborac/scripts.pory"
	closemessage
# 94 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Harborac/scripts.pory"
	applymovement 4, Fionamet_Movement_4
# 96 "data/maps/Harborac/scripts.pory"
	speakername Fionamet_Text_1
# 97 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5
# 98 "data/maps/Harborac/scripts.pory"
	waitmessage
# 99 "data/maps/Harborac/scripts.pory"
	closemessage
# 100 "data/maps/Harborac/scripts.pory"
	delay 110
# 101 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_5
# 102 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 103 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_6, MSGBOX_AUTOCLOSE
# 104 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/Harborac/scripts.pory"
	removeobject 3
# 106 "data/maps/Harborac/scripts.pory"
	removeobject 4
# 107 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 108 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_HARBORAC, 22, 28
# 109 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 112 "data/maps/Harborac/scripts.pory"
mov1:
# 113 "data/maps/Harborac/scripts.pory"
	emote_upset
# 114 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 116 "data/maps/Harborac/scripts.pory"
MOVE6:
# 117 "data/maps/Harborac/scripts.pory"
	walk_right
# 117 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/Harborac/scripts.pory"
MOVE3:
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
# 120 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/Harborac/scripts.pory"
MOVE4:
# 123 "data/maps/Harborac/scripts.pory"
	walk_left
# 123 "data/maps/Harborac/scripts.pory"
	walk_left
# 123 "data/maps/Harborac/scripts.pory"
	walk_left
# 123 "data/maps/Harborac/scripts.pory"
	walk_left
# 124 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 125 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 126 "data/maps/Harborac/scripts.pory"
	face_down
# 127 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 129 "data/maps/Harborac/scripts.pory"
MOVE5:
# 130 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 130 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 130 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 130 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 130 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 131 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

Fionamet1::
# 134 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fionamet1_Movement_0
# 135 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 136 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 138 "data/maps/Harborac/scripts.pory"
mov4:
# 139 "data/maps/Harborac/scripts.pory"
	walk_up
# 140 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 142 "data/maps/Harborac/scripts.pory"
mov3:
# 143 "data/maps/Harborac/scripts.pory"
	walk_down
# 144 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 147 "data/maps/Harborac/scripts.pory"
	lock
# 148 "data/maps/Harborac/scripts.pory"
	faceplayer
# 149 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 150 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 153 "data/maps/Harborac/scripts.pory"
	lock
# 154 "data/maps/Harborac/scripts.pory"
	faceplayer
# 155 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 156 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 160 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 162 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 157 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 165 "data/maps/Harborac/scripts.pory"
	lock
# 166 "data/maps/Harborac/scripts.pory"
	faceplayer
# 167 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 168 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 171 "data/maps/Harborac/scripts.pory"
	lock
# 172 "data/maps/Harborac/scripts.pory"
	faceplayer
# 173 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 174 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 177 "data/maps/Harborac/scripts.pory"
	lock
# 178 "data/maps/Harborac/scripts.pory"
	faceplayer
# 179 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 180 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 183 "data/maps/Harborac/scripts.pory"
	lock
# 184 "data/maps/Harborac/scripts.pory"
	faceplayer
# 185 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 186 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 189 "data/maps/Harborac/scripts.pory"
	lock
# 190 "data/maps/Harborac/scripts.pory"
	faceplayer
# 191 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 192 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 195 "data/maps/Harborac/scripts.pory"
	lock
# 196 "data/maps/Harborac/scripts.pory"
	faceplayer
# 197 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 198 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 199 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 203 "data/maps/Harborac/scripts.pory"
	lock
# 204 "data/maps/Harborac/scripts.pory"
	faceplayer
# 205 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 206 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 209 "data/maps/Harborac/scripts.pory"
	lock
# 210 "data/maps/Harborac/scripts.pory"
	faceplayer
# 211 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 212 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 213 "data/maps/Harborac/scripts.pory"
	applymovement 8, Fionamet_Movement_1
# 214 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_1
# 215 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 216 "data/maps/Harborac/scripts.pory"
	applymovement 8, scinerd_Movement_0
# 217 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_2
# 218 "data/maps/Harborac/scripts.pory"
	release
	return


elias::
# 222 "data/maps/Harborac/scripts.pory"
	lock
# 223 "data/maps/Harborac/scripts.pory"
	faceplayer
# 224 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 225 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 226 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 227 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 228 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 229 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 230 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 231 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 232 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 233 "data/maps/Harborac/scripts.pory"
	waitse
# 234 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 235 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_3
# 237 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, goin
# 238 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 239 "data/maps/Harborac/scripts.pory"
	removeobject 1
# 240 "data/maps/Harborac/scripts.pory"
	setflag FLAG_ELIASMET
# 241 "data/maps/Harborac/scripts.pory"
	warp MAP_HEADOFFICE, 7, 12
	return


# 243 "data/maps/Harborac/scripts.pory"
goin:
# 244 "data/maps/Harborac/scripts.pory"
	walk_up
# 245 "data/maps/Harborac/scripts.pory"
	set_invisible
	step_end

notnowdorm::
# 251 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, notnowdorm_Movement_0
# 252 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 253 "data/maps/Harborac/scripts.pory"
	msgbox notnowdorm_Text_0
# 254 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc::
# 258 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc_1
# 264 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc_4
AcademyNpc_3:
# 271 "data/maps/Harborac/scripts.pory"
	lock
# 272 "data/maps/Harborac/scripts.pory"
	faceplayer
# 273 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_2
# 274 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_1:
# 259 "data/maps/Harborac/scripts.pory"
	lock
# 260 "data/maps/Harborac/scripts.pory"
	faceplayer
# 261 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_0
# 262 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_2:
# 265 "data/maps/Harborac/scripts.pory"
	lock
# 266 "data/maps/Harborac/scripts.pory"
	faceplayer
# 267 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 268 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_4:
# 264 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc_2
	goto AcademyNpc_3


AcademyNpc1::
# 279 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 285 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc1_4
AcademyNpc1_3:
# 292 "data/maps/Harborac/scripts.pory"
	lock
# 293 "data/maps/Harborac/scripts.pory"
	faceplayer
# 294 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_2
# 295 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 280 "data/maps/Harborac/scripts.pory"
	lock
# 281 "data/maps/Harborac/scripts.pory"
	faceplayer
# 282 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 283 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_2:
# 286 "data/maps/Harborac/scripts.pory"
	lock
# 287 "data/maps/Harborac/scripts.pory"
	faceplayer
# 288 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 289 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_4:
# 285 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc1_2
	goto AcademyNpc1_3


AcademyNpc2::
# 299 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 307 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc2_4
AcademyNpc2_3:
# 316 "data/maps/Harborac/scripts.pory"
	lock
# 317 "data/maps/Harborac/scripts.pory"
	faceplayer
# 318 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 319 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_2
# 321 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 300 "data/maps/Harborac/scripts.pory"
	lock
# 301 "data/maps/Harborac/scripts.pory"
	faceplayer
# 302 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 303 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 305 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_2:
# 308 "data/maps/Harborac/scripts.pory"
	lock
# 309 "data/maps/Harborac/scripts.pory"
	faceplayer
# 310 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 311 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 313 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_4:
# 307 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc2_2
	goto AcademyNpc2_3


AcademyNpc3::
# 326 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 332 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc3_4
AcademyNpc3_3:
# 339 "data/maps/Harborac/scripts.pory"
	lock
# 340 "data/maps/Harborac/scripts.pory"
	faceplayer
# 341 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_2
# 342 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 327 "data/maps/Harborac/scripts.pory"
	lock
# 328 "data/maps/Harborac/scripts.pory"
	faceplayer
# 329 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 330 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_2:
# 333 "data/maps/Harborac/scripts.pory"
	lock
# 334 "data/maps/Harborac/scripts.pory"
	faceplayer
# 335 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 336 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_4:
# 332 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc3_2
	goto AcademyNpc3_3


AcademyNpc4::
# 347 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 353 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc4_4
AcademyNpc4_3:
# 362 "data/maps/Harborac/scripts.pory"
	lock
# 363 "data/maps/Harborac/scripts.pory"
	faceplayer
# 364 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_2
# 365 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 348 "data/maps/Harborac/scripts.pory"
	lock
# 349 "data/maps/Harborac/scripts.pory"
	faceplayer
# 350 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 351 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_2:
# 354 "data/maps/Harborac/scripts.pory"
	lock
# 355 "data/maps/Harborac/scripts.pory"
	faceplayer
# 356 "data/maps/Harborac/scripts.pory"
	applymovement 2, AcademyNpc4_Movement_0
# 357 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 358 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 359 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_4:
# 353 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc4_2
	goto AcademyNpc4_3


AcademyNpc5::
# 371 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 379 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc5_4
AcademyNpc5_3:
# 388 "data/maps/Harborac/scripts.pory"
	lock
# 389 "data/maps/Harborac/scripts.pory"
	faceplayer
# 390 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 391 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_2
# 393 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 372 "data/maps/Harborac/scripts.pory"
	lock
# 373 "data/maps/Harborac/scripts.pory"
	faceplayer
# 374 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 375 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 377 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_2:
# 380 "data/maps/Harborac/scripts.pory"
	lock
# 381 "data/maps/Harborac/scripts.pory"
	faceplayer
# 382 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 383 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 385 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_4:
# 379 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc5_2
	goto AcademyNpc5_3


AcademyNpc6::
# 401 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 407 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc6_4
AcademyNpc6_3:
# 414 "data/maps/Harborac/scripts.pory"
	lock
# 415 "data/maps/Harborac/scripts.pory"
	faceplayer
# 416 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_2
# 417 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 402 "data/maps/Harborac/scripts.pory"
	lock
# 403 "data/maps/Harborac/scripts.pory"
	faceplayer
# 404 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 405 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_2:
# 408 "data/maps/Harborac/scripts.pory"
	lock
# 409 "data/maps/Harborac/scripts.pory"
	faceplayer
# 410 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 411 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_4:
# 407 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc6_2
	goto AcademyNpc6_3


AcademyNpc7::
# 422 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 430 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc7_4
AcademyNpc7_3:
# 439 "data/maps/Harborac/scripts.pory"
	lock
# 440 "data/maps/Harborac/scripts.pory"
	faceplayer
# 441 "data/maps/Harborac/scripts.pory"
	speakername orson
# 442 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_2
# 444 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 423 "data/maps/Harborac/scripts.pory"
	lock
# 424 "data/maps/Harborac/scripts.pory"
	faceplayer
# 425 "data/maps/Harborac/scripts.pory"
	speakername orson
# 426 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 428 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_2:
# 431 "data/maps/Harborac/scripts.pory"
	lock
# 432 "data/maps/Harborac/scripts.pory"
	faceplayer
# 433 "data/maps/Harborac/scripts.pory"
	speakername orson
# 434 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 436 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_4:
# 430 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc7_2
	goto AcademyNpc7_3


AcademyNpc8::
# 452 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 458 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc8_4
AcademyNpc8_3:
# 465 "data/maps/Harborac/scripts.pory"
	lock
# 466 "data/maps/Harborac/scripts.pory"
	faceplayer
# 467 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_2
# 468 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 453 "data/maps/Harborac/scripts.pory"
	lock
# 454 "data/maps/Harborac/scripts.pory"
	faceplayer
# 455 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 456 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_2:
# 459 "data/maps/Harborac/scripts.pory"
	lock
# 460 "data/maps/Harborac/scripts.pory"
	faceplayer
# 461 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 462 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_4:
# 458 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc8_2
	goto AcademyNpc8_3


AcademyNpc9::
# 474 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 483 "data/maps/Harborac/scripts.pory"
	lock
# 484 "data/maps/Harborac/scripts.pory"
	faceplayer
# 485 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 486 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_2
# 488 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 475 "data/maps/Harborac/scripts.pory"
	lock
# 476 "data/maps/Harborac/scripts.pory"
	faceplayer
# 477 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 478 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 480 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 492 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 501 "data/maps/Harborac/scripts.pory"
	lock
# 502 "data/maps/Harborac/scripts.pory"
	faceplayer
# 503 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 504 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 506 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 493 "data/maps/Harborac/scripts.pory"
	lock
# 494 "data/maps/Harborac/scripts.pory"
	faceplayer
# 495 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 496 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 498 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 514 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 520 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc11_4
AcademyNpc11_3:
# 527 "data/maps/Harborac/scripts.pory"
	lock
# 528 "data/maps/Harborac/scripts.pory"
	faceplayer
# 529 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_2
# 530 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 515 "data/maps/Harborac/scripts.pory"
	lock
# 516 "data/maps/Harborac/scripts.pory"
	faceplayer
# 517 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 518 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_2:
# 521 "data/maps/Harborac/scripts.pory"
	lock
# 522 "data/maps/Harborac/scripts.pory"
	faceplayer
# 523 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 524 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_4:
# 520 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc11_2
	goto AcademyNpc11_3


AcademyNpc12::
# 535 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 552 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc12_4
AcademyNpc12_3:
# 558 "data/maps/Harborac/scripts.pory"
	lock
# 559 "data/maps/Harborac/scripts.pory"
	faceplayer
# 560 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_4
# 561 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 536 "data/maps/Harborac/scripts.pory"
	lock
# 537 "data/maps/Harborac/scripts.pory"
	faceplayer
# 538 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0, MSGBOX_YESNO
# 540 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AcademyNpc12_8
# 546 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_2
# 547 "data/maps/Harborac/scripts.pory"
	closemessage
# 548 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_2:
# 553 "data/maps/Harborac/scripts.pory"
	lock
# 554 "data/maps/Harborac/scripts.pory"
	faceplayer
# 555 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_3
# 556 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_4:
# 552 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc12_2
	goto AcademyNpc12_3

AcademyNpc12_8:
# 541 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 542 "data/maps/Harborac/scripts.pory"
	closemessage
# 543 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc13::
# 565 "data/maps/Harborac/scripts.pory"
	lock
# 566 "data/maps/Harborac/scripts.pory"
	faceplayer
# 567 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 568 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 572 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_13
AcademyNpc14_11:
# 578 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_LEAFMET, AcademyNpc14_10
AcademyNpc14_6:
# 591 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc14_5
AcademyNpc14_4:
# 598 "data/maps/Harborac/scripts.pory"
	lock
# 599 "data/maps/Harborac/scripts.pory"
	faceplayer
# 600 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_5
# 601 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 573 "data/maps/Harborac/scripts.pory"
	lock
# 574 "data/maps/Harborac/scripts.pory"
	faceplayer
# 575 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 576 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 580 "data/maps/Harborac/scripts.pory"
	lock
# 581 "data/maps/Harborac/scripts.pory"
	faceplayer
# 582 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 583 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 584 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 585 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 586 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 587 "data/maps/Harborac/scripts.pory"
	release
# 588 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_LEAFMET
# 589 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_3:
# 592 "data/maps/Harborac/scripts.pory"
	lock
# 593 "data/maps/Harborac/scripts.pory"
	faceplayer
# 594 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 595 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_5:
# 591 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc14_7
	goto AcademyNpc14_4

AcademyNpc14_7:
# 591 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_3
	goto AcademyNpc14_4

AcademyNpc14_10:
# 578 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_6

AcademyNpc14_13:
# 572 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_11


AcademyNpc15::
# 606 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 614 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc15_4
AcademyNpc15_3:
# 623 "data/maps/Harborac/scripts.pory"
	lock
# 624 "data/maps/Harborac/scripts.pory"
	faceplayer
# 625 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 626 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_2
# 628 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 607 "data/maps/Harborac/scripts.pory"
	lock
# 608 "data/maps/Harborac/scripts.pory"
	faceplayer
# 609 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 610 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 612 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_2:
# 615 "data/maps/Harborac/scripts.pory"
	lock
# 616 "data/maps/Harborac/scripts.pory"
	faceplayer
# 617 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 618 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 620 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_4:
# 614 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc15_2
	goto AcademyNpc15_3


AcademyNpc16::
# 633 "data/maps/Harborac/scripts.pory"
	lock
# 634 "data/maps/Harborac/scripts.pory"
	faceplayer
# 635 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 636 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 640 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 647 "data/maps/Harborac/scripts.pory"
	lock
# 648 "data/maps/Harborac/scripts.pory"
	faceplayer
# 649 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 650 "data/maps/Harborac/scripts.pory"
	applymovement 4, AcademyNpc17_Movement_0
# 651 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 652 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 641 "data/maps/Harborac/scripts.pory"
	lock
# 642 "data/maps/Harborac/scripts.pory"
	faceplayer
# 643 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 644 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 657 "data/maps/Harborac/scripts.pory"
	lock
# 658 "data/maps/Harborac/scripts.pory"
	faceplayer
# 659 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 660 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 664 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 670 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc19_4
AcademyNpc19_3:
# 677 "data/maps/Harborac/scripts.pory"
	lock
# 678 "data/maps/Harborac/scripts.pory"
	faceplayer
# 679 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_2
# 680 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 665 "data/maps/Harborac/scripts.pory"
	lock
# 666 "data/maps/Harborac/scripts.pory"
	faceplayer
# 667 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 668 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_2:
# 671 "data/maps/Harborac/scripts.pory"
	lock
# 672 "data/maps/Harborac/scripts.pory"
	faceplayer
# 673 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 674 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_4:
# 670 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc19_2
	goto AcademyNpc19_3


AcademyNpc20::
# 686 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 692 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc20_4
AcademyNpc20_3:
# 699 "data/maps/Harborac/scripts.pory"
	lock
# 700 "data/maps/Harborac/scripts.pory"
	faceplayer
# 701 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_2
# 702 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 687 "data/maps/Harborac/scripts.pory"
	lock
# 688 "data/maps/Harborac/scripts.pory"
	faceplayer
# 689 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 690 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_2:
# 693 "data/maps/Harborac/scripts.pory"
	lock
# 694 "data/maps/Harborac/scripts.pory"
	faceplayer
# 695 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 696 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_4:
# 692 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc20_2
	goto AcademyNpc20_3


AcademyNpc21::
# 708 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 714 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc21_4
AcademyNpc21_3:
# 721 "data/maps/Harborac/scripts.pory"
	lock
# 722 "data/maps/Harborac/scripts.pory"
	faceplayer
# 723 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_2
# 724 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 709 "data/maps/Harborac/scripts.pory"
	lock
# 710 "data/maps/Harborac/scripts.pory"
	faceplayer
# 711 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 712 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_2:
# 715 "data/maps/Harborac/scripts.pory"
	lock
# 716 "data/maps/Harborac/scripts.pory"
	faceplayer
# 717 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 718 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_4:
# 714 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc21_2
	goto AcademyNpc21_3


AcademyNpc22::
# 730 "data/maps/Harborac/scripts.pory"
	lock
# 731 "data/maps/Harborac/scripts.pory"
	faceplayer
# 732 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 733 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 734 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 735 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 736 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 740 "data/maps/Harborac/scripts.pory"
	lock
# 741 "data/maps/Harborac/scripts.pory"
	faceplayer
# 742 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 743 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 744 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 745 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 746 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 749 "data/maps/Harborac/scripts.pory"
	lock
# 750 "data/maps/Harborac/scripts.pory"
	faceplayer
# 751 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 752 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 753 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 754 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 755 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 758 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 764 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc25_4
AcademyNpc25_3:
# 771 "data/maps/Harborac/scripts.pory"
	lock
# 772 "data/maps/Harborac/scripts.pory"
	faceplayer
# 773 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_2
# 774 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 759 "data/maps/Harborac/scripts.pory"
	lock
# 760 "data/maps/Harborac/scripts.pory"
	faceplayer
# 761 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 762 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_2:
# 765 "data/maps/Harborac/scripts.pory"
	lock
# 766 "data/maps/Harborac/scripts.pory"
	faceplayer
# 767 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 768 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_4:
# 764 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc25_2
	goto AcademyNpc25_3


AcademyNpc26::
# 780 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 786 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc26_4
AcademyNpc26_3:
# 793 "data/maps/Harborac/scripts.pory"
	lock
# 794 "data/maps/Harborac/scripts.pory"
	faceplayer
# 795 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_2
# 796 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 781 "data/maps/Harborac/scripts.pory"
	lock
# 782 "data/maps/Harborac/scripts.pory"
	faceplayer
# 783 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 784 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_2:
# 787 "data/maps/Harborac/scripts.pory"
	lock
# 788 "data/maps/Harborac/scripts.pory"
	faceplayer
# 789 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 790 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_4:
# 786 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc26_2
	goto AcademyNpc26_3


AcademyNpc27::
# 801 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 809 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc27_4
AcademyNpc27_3:
# 818 "data/maps/Harborac/scripts.pory"
	lock
# 819 "data/maps/Harborac/scripts.pory"
	faceplayer
# 820 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 821 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_2
# 823 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 802 "data/maps/Harborac/scripts.pory"
	lock
# 803 "data/maps/Harborac/scripts.pory"
	faceplayer
# 804 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 805 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 807 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_2:
# 810 "data/maps/Harborac/scripts.pory"
	lock
# 811 "data/maps/Harborac/scripts.pory"
	faceplayer
# 812 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 813 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 815 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_4:
# 809 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc27_2
	goto AcademyNpc27_3


AcademyNpc28::
# 828 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 834 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc28_4
AcademyNpc28_3:
# 841 "data/maps/Harborac/scripts.pory"
	lock
# 842 "data/maps/Harborac/scripts.pory"
	faceplayer
# 843 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_2
# 844 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 829 "data/maps/Harborac/scripts.pory"
	lock
# 830 "data/maps/Harborac/scripts.pory"
	faceplayer
# 831 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 832 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_2:
# 835 "data/maps/Harborac/scripts.pory"
	lock
# 836 "data/maps/Harborac/scripts.pory"
	faceplayer
# 837 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 838 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_4:
# 834 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc28_2
	goto AcademyNpc28_3


AcademyNpc29::
# 850 "data/maps/Harborac/scripts.pory"
	lock
# 851 "data/maps/Harborac/scripts.pory"
	faceplayer
# 852 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 853 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 857 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 863 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc30_4
AcademyNpc30_3:
# 870 "data/maps/Harborac/scripts.pory"
	lock
# 871 "data/maps/Harborac/scripts.pory"
	faceplayer
# 872 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_2
# 873 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 858 "data/maps/Harborac/scripts.pory"
	lock
# 859 "data/maps/Harborac/scripts.pory"
	faceplayer
# 860 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 861 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_2:
# 864 "data/maps/Harborac/scripts.pory"
	lock
# 865 "data/maps/Harborac/scripts.pory"
	faceplayer
# 866 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 867 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_4:
# 863 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc30_2
	goto AcademyNpc30_3


AcademyNpc31::
# 878 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 884 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc31_4
AcademyNpc31_3:
# 891 "data/maps/Harborac/scripts.pory"
	lock
# 892 "data/maps/Harborac/scripts.pory"
	faceplayer
# 893 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_2
# 894 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 879 "data/maps/Harborac/scripts.pory"
	lock
# 880 "data/maps/Harborac/scripts.pory"
	faceplayer
# 881 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 882 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_2:
# 885 "data/maps/Harborac/scripts.pory"
	lock
# 886 "data/maps/Harborac/scripts.pory"
	faceplayer
# 887 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 888 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_4:
# 884 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc31_2
	goto AcademyNpc31_3


AcademyNpc32::
# 900 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 906 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc32_4
AcademyNpc32_3:
# 913 "data/maps/Harborac/scripts.pory"
	lock
# 914 "data/maps/Harborac/scripts.pory"
	faceplayer
# 915 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_2
# 916 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 901 "data/maps/Harborac/scripts.pory"
	lock
# 902 "data/maps/Harborac/scripts.pory"
	faceplayer
# 903 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 904 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_2:
# 907 "data/maps/Harborac/scripts.pory"
	lock
# 908 "data/maps/Harborac/scripts.pory"
	faceplayer
# 909 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 910 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_4:
# 906 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc32_2
	goto AcademyNpc32_3


AcademyNpc33::
# 922 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 928 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc33_4
AcademyNpc33_3:
# 935 "data/maps/Harborac/scripts.pory"
	lock
# 936 "data/maps/Harborac/scripts.pory"
	faceplayer
# 937 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_2
# 938 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 923 "data/maps/Harborac/scripts.pory"
	lock
# 924 "data/maps/Harborac/scripts.pory"
	faceplayer
# 925 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 926 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_2:
# 929 "data/maps/Harborac/scripts.pory"
	lock
# 930 "data/maps/Harborac/scripts.pory"
	faceplayer
# 931 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 932 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_4:
# 928 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc33_2
	goto AcademyNpc33_3


AcademyNpc34::
# 944 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 950 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc34_4
AcademyNpc34_3:
# 957 "data/maps/Harborac/scripts.pory"
	lock
# 958 "data/maps/Harborac/scripts.pory"
	faceplayer
# 959 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_2
# 960 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 945 "data/maps/Harborac/scripts.pory"
	lock
# 946 "data/maps/Harborac/scripts.pory"
	faceplayer
# 947 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 948 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_2:
# 951 "data/maps/Harborac/scripts.pory"
	lock
# 952 "data/maps/Harborac/scripts.pory"
	faceplayer
# 953 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 954 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_4:
# 950 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc34_2
	goto AcademyNpc34_3


AcademyNpc35::
# 965 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc35_1
# 971 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc35_4
AcademyNpc35_3:
# 978 "data/maps/Harborac/scripts.pory"
	lock
# 979 "data/maps/Harborac/scripts.pory"
	faceplayer
# 980 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_2
# 981 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_1:
# 966 "data/maps/Harborac/scripts.pory"
	lock
# 967 "data/maps/Harborac/scripts.pory"
	faceplayer
# 968 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_0
# 969 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_2:
# 972 "data/maps/Harborac/scripts.pory"
	lock
# 973 "data/maps/Harborac/scripts.pory"
	faceplayer
# 974 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_1
# 975 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_4:
# 971 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc35_2
	goto AcademyNpc35_3


AcademyNpc36::
# 986 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc36_1
# 992 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc36_4
AcademyNpc36_3:
# 999 "data/maps/Harborac/scripts.pory"
	lock
# 1000 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1001 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_2
# 1002 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_1:
# 987 "data/maps/Harborac/scripts.pory"
	lock
# 988 "data/maps/Harborac/scripts.pory"
	faceplayer
# 989 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_0
# 990 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_2:
# 993 "data/maps/Harborac/scripts.pory"
	lock
# 994 "data/maps/Harborac/scripts.pory"
	faceplayer
# 995 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_1
# 996 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_4:
# 992 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc36_2
	goto AcademyNpc36_3


AcademyNpc37::
# 1007 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc37_1
# 1013 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc37_4
AcademyNpc37_3:
# 1020 "data/maps/Harborac/scripts.pory"
	lock
# 1021 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1022 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_2
# 1023 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_1:
# 1008 "data/maps/Harborac/scripts.pory"
	lock
# 1009 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1010 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_0
# 1011 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_2:
# 1014 "data/maps/Harborac/scripts.pory"
	lock
# 1015 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1016 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_1
# 1017 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_4:
# 1013 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc37_2
	goto AcademyNpc37_3


AcademyNpc38::
# 1028 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc38_1
# 1034 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc38_4
AcademyNpc38_3:
# 1041 "data/maps/Harborac/scripts.pory"
	lock
# 1042 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1043 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_2
# 1044 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_1:
# 1029 "data/maps/Harborac/scripts.pory"
	lock
# 1030 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1031 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_0
# 1032 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_2:
# 1035 "data/maps/Harborac/scripts.pory"
	lock
# 1036 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1037 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_1
# 1038 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_4:
# 1034 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc38_2
	goto AcademyNpc38_3


Doorlock::
# 1049 "data/maps/Harborac/scripts.pory"
	lock
# 1050 "data/maps/Harborac/scripts.pory"
	faceplayer
# 1051 "data/maps/Harborac/scripts.pory"
	msgbox Doorlock_Text_0
# 1052 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, Fionamet_Movement_5
# 1053 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 1054 "data/maps/Harborac/scripts.pory"
	release
	return


# 69 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_0:
# 69 "data/maps/Harborac/scripts.pory"
	walk_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_1:
# 72 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_2:
# 75 "data/maps/Harborac/scripts.pory"
	jump_right
# 75 "data/maps/Harborac/scripts.pory"
	face_left
# 75 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 90 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_3:
# 90 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 95 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_4:
# 95 "data/maps/Harborac/scripts.pory"
	emote_question_mark
	step_end

# 101 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_5:
# 101 "data/maps/Harborac/scripts.pory"
	face_down
	step_end

# 134 "data/maps/Harborac/scripts.pory"
Fionamet1_Movement_0:
# 134 "data/maps/Harborac/scripts.pory"
	walk_left
# 134 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 216 "data/maps/Harborac/scripts.pory"
scinerd_Movement_0:
# 216 "data/maps/Harborac/scripts.pory"
	emote_upset
	step_end

# 251 "data/maps/Harborac/scripts.pory"
notnowdorm_Movement_0:
# 251 "data/maps/Harborac/scripts.pory"
	walk_left
	step_end

# 356 "data/maps/Harborac/scripts.pory"
AcademyNpc4_Movement_0:
# 356 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 356 "data/maps/Harborac/scripts.pory"
	shake_horizontal
# 356 "data/maps/Harborac/scripts.pory"
	shake_horizontal
	step_end

# 650 "data/maps/Harborac/scripts.pory"
AcademyNpc17_Movement_0:
# 650 "data/maps/Harborac/scripts.pory"
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
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Legends don't matter to the dead.$"

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
# 103 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}……\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 149 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 155 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 157 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 160 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 167 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 173 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 179 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 185 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 191 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 198 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 205 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 211 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could...$"

scinerd_Text_1:
# 214 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

scinerd_Text_2:
# 217 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh, I need more data.$"

elias_Text_0:
# 226 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're late Xylar.\p"
	.string "My name is Elias.\p"
	.string "I'm a professor and the headmaster\n"
	.string "made it clear that I was to ensure your\l"
	.string "arrival.\p"
	.string "Come with me, the headmaster is waiting\n"
	.string "for you.$"

elias_Text_1:
# 228 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need an escort.\p"
	.string "Just tell me where I have to go.$"

elias_Text_2:
# 230 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll soon find that attitude won't get\n"
	.string "you far here.\p"
	.string "Respect is earned, young man.\n"
	.string "Now follow me.$"

elias_Text_3:
# 235 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

notnowdorm_Text_0:
# 253 "data/maps/Harborac/scripts.pory"
	.string "Not now.$"

AcademyNpc_Text_0:
# 261 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You look tough! Battle me sometime!$"

AcademyNpc_Text_1:
# 267 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I thought Xylar was just a quiet,\n"
	.string "strong guy… but after that? Damn. He's\l"
	.string "terrifying.$"

AcademyNpc_Text_2:
# 273 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I still wanna battle him, though. Maybe\n"
	.string "that rage is what makes him strong.$"

AcademyNpc1_Text_0:
# 282 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 288 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}See? This is why I hate battling. People\n"
	.string "get too caught up in their emotions.$"

AcademyNpc1_Text_2:
# 294 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I actually feel bad for him. Something's\n"
	.string "clearly wrong, but no one's helping.$"

AcademyNpc2_Text_0:
# 303 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Focus on control, not just power.$"

AcademyNpc2_Text_1:
# 311 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You lost control, Xylar. That is\n"
	.string "unacceptable. You may have skill, but if\l"
	.string "you cannot control yourself, you will\l"
	.string "not last here.$"

AcademyNpc2_Text_2:
# 319 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Power means nothing without restraint.\n"
	.string "Learn that before it's too late.$"

AcademyNpc3_Text_0:
# 329 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 335 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Man, I respected Xylar… but now I don't\n"
	.string "know. That wasn't just rage.$"

AcademyNpc3_Text_2:
# 341 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If he ever loses it in a match… will he\n"
	.string "stop?$"

AcademyNpc4_Text_0:
# 350 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}U-um... hello...$"

AcademyNpc4_Text_1:
# 358 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}…I-I shouldn't talk to you.$"

AcademyNpc4_Text_2:
# 364 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I know people say you're dangerous now,\n"
	.string "but… I think you're just hurt.$"

AcademyNpc5_Text_0:
# 375 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 383 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Such raw emotion! Such unfiltered\n"
	.string "intensity!\p"
	.string "…And yet, Xylar, this is not the place\n"
	.string "for a destructive masterpiece.$"

AcademyNpc5_Text_2:
# 391 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Art and battle both require control.\p"
	.string "I hope you learn that before your\n"
	.string "canvas turns to ruin.$"

AcademyNpc6_Text_0:
# 404 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 410 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wanted to draw Xylar's Torchic before.\p"
	.string "Now, I'm not so sure I even want to be\n"
	.string "near him.$"

AcademyNpc6_Text_2:
# 416 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe I'll still draw him.\p"
	.string "Not as a trainer… but as a storm.$"

AcademyNpc7_Text_0:
# 426 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 434 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uncontrolled power is a failure in\n"
	.string "understanding.\p"
	.string "You acted on instinct, but instinct\n"
	.string "without logic leads to destruction.$"

AcademyNpc7_Text_2:
# 442 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Were you even thinking? Or was it\n"
	.string "something deeper than that?$"

AcademyNpc8_Text_0:
# 455 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Studying type advantages wins battles!$"

AcademyNpc8_Text_1:
# 461 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't get it.\p"
	.string "Xylar's strategy was so calculated in\n"
	.string "battle, but outside of it… he was\l"
	.string "reckless.$"

AcademyNpc8_Text_2:
# 467 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe his battles aren't about winning.\p"
	.string "Maybe they're about surviving.$"

AcademyNpc9_Text_0:
# 477 "data/maps/Harborac/scripts.pory"
	.string "Leaf$"

AcademyNpc9_Text_1:
# 478 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_2:
# 486 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 496 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 504 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 517 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shhh! Library rules!$"

AcademyNpc11_Text_1:
# 523 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't understand fighters… but that\n"
	.string "wasn't normal, was it?$"

AcademyNpc11_Text_2:
# 529 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd rather read about battles than\n"
	.string "witness them.\p"
	.string "Especially ones like that.$"

AcademyNpc12_Text_0:
# 538 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard the legend of the\n"
	.string "Jewel of Life?$"

AcademyNpc12_Text_1:
# 541 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Greed is the reason for our region's\n"
	.string "separation.$"

AcademyNpc12_Text_2:
# 546 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus once gifted the Jewel\n"
	.string "of Life to the King of Velanthis, so our\l"
	.string "region could flourish through its deep\l"
	.string "spirituality.\p"
	.string "But when the king passed away, his two\n"
	.string "sons fought over it.\p"
	.string "The elder wanted to use its power to\n"
	.string "advance technology, even if it meant\l"
	.string "destroying ancient shrines and\l"
	.string "abandoning tradition.\p"
	.string "The younger wished to preserve our\n"
	.string "spirituality and protect the old ways.\p"
	.string "Their conflict sparked the First Great\n"
	.string "Velanthis War.\p"
	.string "With advanced machines, the elder\n"
	.string "nearly won, until Arceus grew furious at\l"
	.string "how the sacred gift was misused.\p"
	.string "Arceus reclaimed the Jewel of Life and\n"
	.string "sealed it away, somewhere no mortal has\l"
	.string "ever found.\p"
	.string "The elder son was punished... and\n"
	.string "Velanthis was split forever.$"

AcademyNpc12_Text_3:
# 555 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc12_Text_4:
# 560 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what are you really fighting\n"
	.string "against, Xylar?$"

AcademyNpc13_Text_0:
# 567 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 575 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 583 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 585 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 586 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 594 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc14_Text_5:
# 600 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've worked here for years… I can tell\n"
	.string "when someone's fighting more than just\l"
	.string "an opponent.$"

AcademyNpc15_Text_0:
# 610 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strive for excellence in all you do.$"

AcademyNpc15_Text_1:
# 618 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar… I see potential in you, but\n"
	.string "potential without control is dangerous.\p"
	.string "You need to understand that.$"

AcademyNpc15_Text_2:
# 626 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You fight like a man with nothing to\n"
	.string "lose.\p"
	.string "That still concerns me.$"

AcademyNpc16_Text_0:
# 635 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter until the\n"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 643 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 649 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind getting a little rough.$"

AcademyNpc18_Text_0:
# 659 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 667 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 673 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.\p"
	.string "About time.$"

AcademyNpc19_Text_2:
# 679 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're stronger now.\p"
	.string "Not in skill.\p"
	.string "In… presence.\p"
	.string "People notice when you walk into a room.$"

AcademyNpc20_Text_0:
# 689 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow… but\n"
	.string "one thing is clear.\p"
	.string "You do not belong to the light.$"

AcademyNpc20_Text_1:
# 695 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs. It was\n"
	.string "only a matter of time.$"

AcademyNpc20_Text_2:
# 701 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You seek control, but the storm within\n"
	.string "you does not wish to be tamed.$"

AcademyNpc21_Text_0:
# 711 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 717 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered since that\n"
	.string "incident.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc21_Text_2:
# 723 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They came back.\p"
	.string "Not because they trust you, but\n"
	.string "because they recognize what you are\l"
	.string "now.$"

AcademyNpc22_Text_0:
# 733 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 761 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 767 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You do not fear others, you fear\n"
	.string "yourself.$"

AcademyNpc25_Text_2:
# 773 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The path ahead is long.\p"
	.string "But you have not strayed as far as you\n"
	.string "think.$"

AcademyNpc26_Text_0:
# 783 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's in place for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 789 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You think you're untouchable? Losing\n"
	.string "control like that will put a target on\l"
	.string "your back.$"

AcademyNpc26_Text_2:
# 795 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're still young.\p"
	.string "Got time to fix what's broken… if you\n"
	.string "want to.$"

AcademyNpc27_Text_0:
# 805 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that, didn't you?$"

AcademyNpc27_Text_1:
# 813 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage… it suits you. Maybe more\n"
	.string "than you realize.$"

AcademyNpc27_Text_2:
# 821 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day, you'll have to stop pretending\n"
	.string "you can be normal.\p"
	.string "We both know it's not in your nature.$"

AcademyNpc28_Text_0:
# 831 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 837 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc28_Text_2:
# 843 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're different now.\p"
	.string "More… dangerous.$"

AcademyNpc29_Text_0:
# 852 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 860 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more… interesting than others.$"

AcademyNpc30_Text_1:
# 866 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc30_Text_2:
# 872 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your file is still growing.\p"
	.string "The question is what kind of story will\n"
	.string "it tell?$"

AcademyNpc31_Text_0:
# 881 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "Which do you think you'll be?$"

AcademyNpc31_Text_1:
# 887 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That moment back there… that's what I\n"
	.string "call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc31_Text_2:
# 893 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Every great tragedy starts somewhere.\p"
	.string "I wonder where yours began.$"

AcademyNpc32_Text_0:
# 903 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh.\p"
	.string "You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 909 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that ain't easy to clean up.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc32_Text_2:
# 915 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Trouble follows certain kinds of people.\p"
	.string "I'd say it follows you like a shadow.$"

AcademyNpc33_Text_0:
# 925 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The winds whisper secrets… and they\n"
	.string "speak your name.$"

AcademyNpc33_Text_1:
# 931 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc33_Text_2:
# 937 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You are not the first to carry such\n"
	.string "darkness.\p"
	.string "But you might be the last.$"

AcademyNpc34_Text_0:
# 947 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what drives certain Pokémon\n"
	.string "to evolve under extreme stress?$"

AcademyNpc34_Text_1:
# 953 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That kind of aggression… even some\n"
	.string "Pokémon only reach that state when\l"
	.string "pushed too far.$"

AcademyNpc34_Text_2:
# 959 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Survival instincts.\p"
	.string "That's what I see in you.\p"
	.string "You don't fight to win, you fight\n"
	.string "because you have to.$"

AcademyNpc35_Text_0:
# 968 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You don't talk much.\p"
	.string "That's fine.\p"
	.string "Words are just another way to lie.$"

AcademyNpc35_Text_1:
# 974 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough to snap.\p"
	.string "Thought it would happen sooner,\n"
	.string "honestly.$"

AcademyNpc35_Text_2:
# 980 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They're watching you now.\p"
	.string "Not just the teachers.\p"
	.string "Everyone.$"

AcademyNpc36_Text_0:
# 989 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The academy grounds are beautiful in\n"
	.string "the spring.\p"
	.string "It almost feels like a fresh start.$"

AcademyNpc36_Text_1:
# 995 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}H-Hey… um, I should get going.$"

AcademyNpc36_Text_2:
# 1001 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's been… a weird few days, huh?$"

AcademyNpc37_Text_0:
# 1010 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey, did you hear?\p"
	.string "Some of the seniors are already forming\n"
	.string "battle teams.$"

AcademyNpc37_Text_1:
# 1016 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That guy… there's something seriously\n"
	.string "wrong with him.$"

AcademyNpc37_Text_2:
# 1022 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess everyone has their moments…\n"
	.string "doesn't mean I'd wanna battle him.$"

AcademyNpc38_Text_0:
# 1031 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm just here to get stronger.\p"
	.string "Everything else is a distraction.$"

AcademyNpc38_Text_1:
# 1037 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… whatever. Just don't cross him.$"

AcademyNpc38_Text_2:
# 1043 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fights like a damn beast… I can\n"
	.string "respect that.$"

Doorlock_Text_0:
# 1051 "data/maps/Harborac/scripts.pory"
	.string "The door is locked.$"

oldman::
# 41 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"

eliasn::
# 247 "data/maps/Harborac/scripts.pory"
	.string "Prof. Elias$"

maribel::
# 397 "data/maps/Harborac/scripts.pory"
	.string "Prof. Dorne$"

orson::
# 448 "data/maps/Harborac/scripts.pory"
	.string "Prof. Orson$"

evelyn::
# 509 "data/maps/Harborac/scripts.pory"
	.string "Prof.Evelyn$"
