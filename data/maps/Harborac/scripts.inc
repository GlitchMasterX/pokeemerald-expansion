Harborac_MapScripts::
	.byte 0


Fionamet::
# 6 "data/maps/Harborac/scripts.pory"
	lock
# 7 "data/maps/Harborac/scripts.pory"
	special SpawnCameraObject
# 8 "data/maps/Harborac/scripts.pory"
	addobject 3
# 9 "data/maps/Harborac/scripts.pory"
	applymovement 0x7F, MOVE6
# 10 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fionamet_Movement_0
# 11 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_1
# 12 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 13 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 14 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_2
# 15 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 16 "data/maps/Harborac/scripts.pory"
	playse SE_LEDGE
# 17 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_3
# 18 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 19 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 20 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 21 "data/maps/Harborac/scripts.pory"
	closemessage
# 22 "data/maps/Harborac/scripts.pory"
	applymovement 4, MOVE5
# 23 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 24 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_1
# 25 "data/maps/Harborac/scripts.pory"
	closemessage
# 26 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Harborac/scripts.pory"
	applymovement 4, mov1
# 28 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_2
# 29 "data/maps/Harborac/scripts.pory"
	waitmessage
# 30 "data/maps/Harborac/scripts.pory"
	applymovement 4, Fionamet_Movement_4
# 31 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 32 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 33 "data/maps/Harborac/scripts.pory"
	closemessage
# 34 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 35 "data/maps/Harborac/scripts.pory"
	applymovement 4, Fionamet_Movement_5
# 36 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 37 "data/maps/Harborac/scripts.pory"
	waitmessage
# 38 "data/maps/Harborac/scripts.pory"
	closemessage
# 39 "data/maps/Harborac/scripts.pory"
	delay 110
# 40 "data/maps/Harborac/scripts.pory"
	applymovement 3, Fionamet_Movement_6
# 41 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 42 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5, MSGBOX_AUTOCLOSE
# 43 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/Harborac/scripts.pory"
	removeobject 3
# 45 "data/maps/Harborac/scripts.pory"
	removeobject 4
# 46 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 47 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_HARBORAC, 22, 28
# 48 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 51 "data/maps/Harborac/scripts.pory"
mov1:
# 52 "data/maps/Harborac/scripts.pory"
	emote_upset
# 53 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 55 "data/maps/Harborac/scripts.pory"
MOVE6:
# 56 "data/maps/Harborac/scripts.pory"
	walk_up
# 56 "data/maps/Harborac/scripts.pory"
	walk_up
# 56 "data/maps/Harborac/scripts.pory"
	walk_up
# 56 "data/maps/Harborac/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/Harborac/scripts.pory"
MOVE3:
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
# 59 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/Harborac/scripts.pory"
MOVE4:
# 62 "data/maps/Harborac/scripts.pory"
	walk_left
# 62 "data/maps/Harborac/scripts.pory"
	walk_left
# 62 "data/maps/Harborac/scripts.pory"
	walk_left
# 62 "data/maps/Harborac/scripts.pory"
	walk_left
# 63 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 65 "data/maps/Harborac/scripts.pory"
	face_down
# 66 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 68 "data/maps/Harborac/scripts.pory"
MOVE5:
# 69 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 69 "data/maps/Harborac/scripts.pory"
	walk_fast_down
# 70 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

Fionamet1::
# 73 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fionamet1_Movement_0
# 74 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 75 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 77 "data/maps/Harborac/scripts.pory"
mov4:
# 78 "data/maps/Harborac/scripts.pory"
	walk_up
# 79 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 81 "data/maps/Harborac/scripts.pory"
mov3:
# 82 "data/maps/Harborac/scripts.pory"
	walk_down
# 83 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 86 "data/maps/Harborac/scripts.pory"
	lock
# 87 "data/maps/Harborac/scripts.pory"
	faceplayer
# 88 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 89 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 92 "data/maps/Harborac/scripts.pory"
	lock
# 93 "data/maps/Harborac/scripts.pory"
	faceplayer
# 94 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 95 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 99 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 101 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 96 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 104 "data/maps/Harborac/scripts.pory"
	lock
# 105 "data/maps/Harborac/scripts.pory"
	faceplayer
# 106 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 107 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 110 "data/maps/Harborac/scripts.pory"
	lock
# 111 "data/maps/Harborac/scripts.pory"
	faceplayer
# 112 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 113 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 116 "data/maps/Harborac/scripts.pory"
	lock
# 117 "data/maps/Harborac/scripts.pory"
	faceplayer
# 118 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 119 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 122 "data/maps/Harborac/scripts.pory"
	lock
# 123 "data/maps/Harborac/scripts.pory"
	faceplayer
# 124 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 125 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 128 "data/maps/Harborac/scripts.pory"
	lock
# 129 "data/maps/Harborac/scripts.pory"
	faceplayer
# 130 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 131 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 134 "data/maps/Harborac/scripts.pory"
	lock
# 135 "data/maps/Harborac/scripts.pory"
	faceplayer
# 136 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 137 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 138 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 142 "data/maps/Harborac/scripts.pory"
	lock
# 143 "data/maps/Harborac/scripts.pory"
	faceplayer
# 144 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 145 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 148 "data/maps/Harborac/scripts.pory"
	lock
# 149 "data/maps/Harborac/scripts.pory"
	faceplayer
# 150 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 151 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Harborac/scripts.pory"
	applymovement 8, Fionamet_Movement_2
# 153 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_1
# 154 "data/maps/Harborac/scripts.pory"
	playse SE_PIN
# 155 "data/maps/Harborac/scripts.pory"
	applymovement 8, scinerd_Movement_0
# 156 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_2
# 157 "data/maps/Harborac/scripts.pory"
	release
	return


elias::
# 161 "data/maps/Harborac/scripts.pory"
	lock
# 162 "data/maps/Harborac/scripts.pory"
	faceplayer
# 163 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 164 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 165 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_0
# 166 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 167 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_1
# 168 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 169 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_2
# 170 "data/maps/Harborac/scripts.pory"
	applymovement 1, goin
# 171 "data/maps/Harborac/scripts.pory"
	playse SE_WARP_IN
# 172 "data/maps/Harborac/scripts.pory"
	waitse
# 173 "data/maps/Harborac/scripts.pory"
	speakername Xylar1
# 174 "data/maps/Harborac/scripts.pory"
	msgbox elias_Text_3
# 176 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, goin
# 177 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 178 "data/maps/Harborac/scripts.pory"
	removeobject 1
# 179 "data/maps/Harborac/scripts.pory"
	setflag FLAG_ELIASMET
# 180 "data/maps/Harborac/scripts.pory"
	warp MAP_HEADOFFICE, 7, 12
	return


# 182 "data/maps/Harborac/scripts.pory"
goin:
# 183 "data/maps/Harborac/scripts.pory"
	walk_up
# 184 "data/maps/Harborac/scripts.pory"
	set_invisible
	step_end

notnowdorm::
# 190 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, notnowdorm_Movement_0
# 191 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 192 "data/maps/Harborac/scripts.pory"
	msgbox notnowdorm_Text_0
# 193 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc::
# 197 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc_1
# 203 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc_4
AcademyNpc_3:
# 210 "data/maps/Harborac/scripts.pory"
	lock
# 211 "data/maps/Harborac/scripts.pory"
	faceplayer
# 212 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_2
# 213 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_1:
# 198 "data/maps/Harborac/scripts.pory"
	lock
# 199 "data/maps/Harborac/scripts.pory"
	faceplayer
# 200 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_0
# 201 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_2:
# 204 "data/maps/Harborac/scripts.pory"
	lock
# 205 "data/maps/Harborac/scripts.pory"
	faceplayer
# 206 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc_Text_1
# 207 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc_4:
# 203 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc_2
	goto AcademyNpc_3


AcademyNpc1::
# 218 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc1_1
# 224 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc1_4
AcademyNpc1_3:
# 231 "data/maps/Harborac/scripts.pory"
	lock
# 232 "data/maps/Harborac/scripts.pory"
	faceplayer
# 233 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_2
# 234 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_1:
# 219 "data/maps/Harborac/scripts.pory"
	lock
# 220 "data/maps/Harborac/scripts.pory"
	faceplayer
# 221 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_0
# 222 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_2:
# 225 "data/maps/Harborac/scripts.pory"
	lock
# 226 "data/maps/Harborac/scripts.pory"
	faceplayer
# 227 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc1_Text_1
# 228 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc1_4:
# 224 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc1_2
	goto AcademyNpc1_3


AcademyNpc2::
# 238 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc2_1
# 246 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc2_4
AcademyNpc2_3:
# 255 "data/maps/Harborac/scripts.pory"
	lock
# 256 "data/maps/Harborac/scripts.pory"
	faceplayer
# 257 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 258 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_2
# 260 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_1:
# 239 "data/maps/Harborac/scripts.pory"
	lock
# 240 "data/maps/Harborac/scripts.pory"
	faceplayer
# 241 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 242 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_0
# 244 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_2:
# 247 "data/maps/Harborac/scripts.pory"
	lock
# 248 "data/maps/Harborac/scripts.pory"
	faceplayer
# 249 "data/maps/Harborac/scripts.pory"
	speakername eliasn
# 250 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc2_Text_1
# 252 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc2_4:
# 246 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc2_2
	goto AcademyNpc2_3


AcademyNpc3::
# 265 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc3_1
# 271 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc3_4
AcademyNpc3_3:
# 278 "data/maps/Harborac/scripts.pory"
	lock
# 279 "data/maps/Harborac/scripts.pory"
	faceplayer
# 280 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_2
# 281 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_1:
# 266 "data/maps/Harborac/scripts.pory"
	lock
# 267 "data/maps/Harborac/scripts.pory"
	faceplayer
# 268 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_0
# 269 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_2:
# 272 "data/maps/Harborac/scripts.pory"
	lock
# 273 "data/maps/Harborac/scripts.pory"
	faceplayer
# 274 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc3_Text_1
# 275 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc3_4:
# 271 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc3_2
	goto AcademyNpc3_3


AcademyNpc4::
# 286 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc4_1
# 292 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc4_4
AcademyNpc4_3:
# 301 "data/maps/Harborac/scripts.pory"
	lock
# 302 "data/maps/Harborac/scripts.pory"
	faceplayer
# 303 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_2
# 304 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_1:
# 287 "data/maps/Harborac/scripts.pory"
	lock
# 288 "data/maps/Harborac/scripts.pory"
	faceplayer
# 289 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_0
# 290 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_2:
# 293 "data/maps/Harborac/scripts.pory"
	lock
# 294 "data/maps/Harborac/scripts.pory"
	faceplayer
# 295 "data/maps/Harborac/scripts.pory"
	applymovement 2, AcademyNpc4_Movement_0
# 296 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 297 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc4_Text_1
# 298 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc4_4:
# 292 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc4_2
	goto AcademyNpc4_3


AcademyNpc5::
# 310 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc5_1
# 318 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc5_4
AcademyNpc5_3:
# 327 "data/maps/Harborac/scripts.pory"
	lock
# 328 "data/maps/Harborac/scripts.pory"
	faceplayer
# 329 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 330 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_2
# 332 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_1:
# 311 "data/maps/Harborac/scripts.pory"
	lock
# 312 "data/maps/Harborac/scripts.pory"
	faceplayer
# 313 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 314 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_0
# 316 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_2:
# 319 "data/maps/Harborac/scripts.pory"
	lock
# 320 "data/maps/Harborac/scripts.pory"
	faceplayer
# 321 "data/maps/Harborac/scripts.pory"
	speakername maribel
# 322 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc5_Text_1
# 324 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc5_4:
# 318 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc5_2
	goto AcademyNpc5_3


AcademyNpc6::
# 340 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc6_1
# 346 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc6_4
AcademyNpc6_3:
# 353 "data/maps/Harborac/scripts.pory"
	lock
# 354 "data/maps/Harborac/scripts.pory"
	faceplayer
# 355 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_2
# 356 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_1:
# 341 "data/maps/Harborac/scripts.pory"
	lock
# 342 "data/maps/Harborac/scripts.pory"
	faceplayer
# 343 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_0
# 344 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_2:
# 347 "data/maps/Harborac/scripts.pory"
	lock
# 348 "data/maps/Harborac/scripts.pory"
	faceplayer
# 349 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc6_Text_1
# 350 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc6_4:
# 346 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc6_2
	goto AcademyNpc6_3


AcademyNpc7::
# 361 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc7_1
# 369 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc7_4
AcademyNpc7_3:
# 378 "data/maps/Harborac/scripts.pory"
	lock
# 379 "data/maps/Harborac/scripts.pory"
	faceplayer
# 380 "data/maps/Harborac/scripts.pory"
	speakername orson
# 381 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_2
# 383 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_1:
# 362 "data/maps/Harborac/scripts.pory"
	lock
# 363 "data/maps/Harborac/scripts.pory"
	faceplayer
# 364 "data/maps/Harborac/scripts.pory"
	speakername orson
# 365 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_0
# 367 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_2:
# 370 "data/maps/Harborac/scripts.pory"
	lock
# 371 "data/maps/Harborac/scripts.pory"
	faceplayer
# 372 "data/maps/Harborac/scripts.pory"
	speakername orson
# 373 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc7_Text_1
# 375 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc7_4:
# 369 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc7_2
	goto AcademyNpc7_3


AcademyNpc8::
# 391 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc8_1
# 397 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc8_4
AcademyNpc8_3:
# 404 "data/maps/Harborac/scripts.pory"
	lock
# 405 "data/maps/Harborac/scripts.pory"
	faceplayer
# 406 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_2
# 407 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_1:
# 392 "data/maps/Harborac/scripts.pory"
	lock
# 393 "data/maps/Harborac/scripts.pory"
	faceplayer
# 394 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_0
# 395 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_2:
# 398 "data/maps/Harborac/scripts.pory"
	lock
# 399 "data/maps/Harborac/scripts.pory"
	faceplayer
# 400 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc8_Text_1
# 401 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc8_4:
# 397 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc8_2
	goto AcademyNpc8_3


AcademyNpc9::
# 413 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc9_1
# 422 "data/maps/Harborac/scripts.pory"
	lock
# 423 "data/maps/Harborac/scripts.pory"
	faceplayer
# 424 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 425 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_2
# 427 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc9_1:
# 414 "data/maps/Harborac/scripts.pory"
	lock
# 415 "data/maps/Harborac/scripts.pory"
	faceplayer
# 416 "data/maps/Harborac/scripts.pory"
	speakername AcademyNpc9_Text_0
# 417 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc9_Text_1
# 419 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc10::
# 431 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc10_1
# 440 "data/maps/Harborac/scripts.pory"
	lock
# 441 "data/maps/Harborac/scripts.pory"
	faceplayer
# 442 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 443 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_1
# 445 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc10_1:
# 432 "data/maps/Harborac/scripts.pory"
	lock
# 433 "data/maps/Harborac/scripts.pory"
	faceplayer
# 434 "data/maps/Harborac/scripts.pory"
	speakername evelyn
# 435 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc10_Text_0
# 437 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc11::
# 453 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc11_1
# 459 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc11_4
AcademyNpc11_3:
# 466 "data/maps/Harborac/scripts.pory"
	lock
# 467 "data/maps/Harborac/scripts.pory"
	faceplayer
# 468 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_2
# 469 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_1:
# 454 "data/maps/Harborac/scripts.pory"
	lock
# 455 "data/maps/Harborac/scripts.pory"
	faceplayer
# 456 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_0
# 457 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_2:
# 460 "data/maps/Harborac/scripts.pory"
	lock
# 461 "data/maps/Harborac/scripts.pory"
	faceplayer
# 462 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc11_Text_1
# 463 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc11_4:
# 459 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc11_2
	goto AcademyNpc11_3


AcademyNpc12::
# 474 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc12_1
# 491 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc12_4
AcademyNpc12_3:
# 497 "data/maps/Harborac/scripts.pory"
	lock
# 498 "data/maps/Harborac/scripts.pory"
	faceplayer
# 499 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_4
# 500 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_1:
# 475 "data/maps/Harborac/scripts.pory"
	lock
# 476 "data/maps/Harborac/scripts.pory"
	faceplayer
# 477 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_0, MSGBOX_YESNO
# 479 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AcademyNpc12_8
# 485 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_2
# 486 "data/maps/Harborac/scripts.pory"
	closemessage
# 487 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_2:
# 492 "data/maps/Harborac/scripts.pory"
	lock
# 493 "data/maps/Harborac/scripts.pory"
	faceplayer
# 494 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_3
# 495 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc12_4:
# 491 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc12_2
	goto AcademyNpc12_3

AcademyNpc12_8:
# 480 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc12_Text_1
# 481 "data/maps/Harborac/scripts.pory"
	closemessage
# 482 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc13::
# 504 "data/maps/Harborac/scripts.pory"
	lock
# 505 "data/maps/Harborac/scripts.pory"
	faceplayer
# 506 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc13_Text_0
# 507 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc14::
# 511 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_13
AcademyNpc14_11:
# 517 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_LEAFMET, AcademyNpc14_10
AcademyNpc14_6:
# 530 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc14_5
AcademyNpc14_4:
# 537 "data/maps/Harborac/scripts.pory"
	lock
# 538 "data/maps/Harborac/scripts.pory"
	faceplayer
# 539 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_5
# 540 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_1:
# 512 "data/maps/Harborac/scripts.pory"
	lock
# 513 "data/maps/Harborac/scripts.pory"
	faceplayer
# 514 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_0
# 515 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_2:
# 519 "data/maps/Harborac/scripts.pory"
	lock
# 520 "data/maps/Harborac/scripts.pory"
	faceplayer
# 521 "data/maps/Harborac/scripts.pory"
	applymovement 1, exclam
# 522 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_1
# 523 "data/maps/Harborac/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 524 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_2
# 525 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_3
# 526 "data/maps/Harborac/scripts.pory"
	release
# 527 "data/maps/Harborac/scripts.pory"
	clearflag FLAG_LEAFMET
# 528 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 8
	return

AcademyNpc14_3:
# 531 "data/maps/Harborac/scripts.pory"
	lock
# 532 "data/maps/Harborac/scripts.pory"
	faceplayer
# 533 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc14_Text_4
# 534 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc14_5:
# 530 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc14_7
	goto AcademyNpc14_4

AcademyNpc14_7:
# 530 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_LEAFMET, AcademyNpc14_3
	goto AcademyNpc14_4

AcademyNpc14_10:
# 517 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_2
	goto AcademyNpc14_6

AcademyNpc14_13:
# 511 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc14_1
	goto AcademyNpc14_11


AcademyNpc15::
# 545 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc15_1
# 553 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc15_4
AcademyNpc15_3:
# 562 "data/maps/Harborac/scripts.pory"
	lock
# 563 "data/maps/Harborac/scripts.pory"
	faceplayer
# 564 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 565 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_2
# 567 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_1:
# 546 "data/maps/Harborac/scripts.pory"
	lock
# 547 "data/maps/Harborac/scripts.pory"
	faceplayer
# 548 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 549 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_0
# 551 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_2:
# 554 "data/maps/Harborac/scripts.pory"
	lock
# 555 "data/maps/Harborac/scripts.pory"
	faceplayer
# 556 "data/maps/Harborac/scripts.pory"
	speakername alistair
# 557 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc15_Text_1
# 559 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc15_4:
# 553 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc15_2
	goto AcademyNpc15_3


AcademyNpc16::
# 572 "data/maps/Harborac/scripts.pory"
	lock
# 573 "data/maps/Harborac/scripts.pory"
	faceplayer
# 574 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc16_Text_0
# 575 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc17::
# 579 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc17_1
# 586 "data/maps/Harborac/scripts.pory"
	lock
# 587 "data/maps/Harborac/scripts.pory"
	faceplayer
# 588 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_1
# 589 "data/maps/Harborac/scripts.pory"
	applymovement 4, AcademyNpc17_Movement_0
# 590 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 591 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc17_1:
# 580 "data/maps/Harborac/scripts.pory"
	lock
# 581 "data/maps/Harborac/scripts.pory"
	faceplayer
# 582 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc17_Text_0
# 583 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc18::
# 596 "data/maps/Harborac/scripts.pory"
	lock
# 597 "data/maps/Harborac/scripts.pory"
	faceplayer
# 598 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc18_Text_0
# 599 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc19::
# 603 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc19_1
# 609 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc19_4
AcademyNpc19_3:
# 616 "data/maps/Harborac/scripts.pory"
	lock
# 617 "data/maps/Harborac/scripts.pory"
	faceplayer
# 618 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_2
# 619 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_1:
# 604 "data/maps/Harborac/scripts.pory"
	lock
# 605 "data/maps/Harborac/scripts.pory"
	faceplayer
# 606 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_0
# 607 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_2:
# 610 "data/maps/Harborac/scripts.pory"
	lock
# 611 "data/maps/Harborac/scripts.pory"
	faceplayer
# 612 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc19_Text_1
# 613 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc19_4:
# 609 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc19_2
	goto AcademyNpc19_3


AcademyNpc20::
# 625 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc20_1
# 631 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc20_4
AcademyNpc20_3:
# 638 "data/maps/Harborac/scripts.pory"
	lock
# 639 "data/maps/Harborac/scripts.pory"
	faceplayer
# 640 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_2
# 641 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_1:
# 626 "data/maps/Harborac/scripts.pory"
	lock
# 627 "data/maps/Harborac/scripts.pory"
	faceplayer
# 628 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_0
# 629 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_2:
# 632 "data/maps/Harborac/scripts.pory"
	lock
# 633 "data/maps/Harborac/scripts.pory"
	faceplayer
# 634 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc20_Text_1
# 635 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc20_4:
# 631 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc20_2
	goto AcademyNpc20_3


AcademyNpc21::
# 647 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc21_1
# 653 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc21_4
AcademyNpc21_3:
# 660 "data/maps/Harborac/scripts.pory"
	lock
# 661 "data/maps/Harborac/scripts.pory"
	faceplayer
# 662 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_2
# 663 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_1:
# 648 "data/maps/Harborac/scripts.pory"
	lock
# 649 "data/maps/Harborac/scripts.pory"
	faceplayer
# 650 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_0
# 651 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_2:
# 654 "data/maps/Harborac/scripts.pory"
	lock
# 655 "data/maps/Harborac/scripts.pory"
	faceplayer
# 656 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc21_Text_1
# 657 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc21_4:
# 653 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc21_2
	goto AcademyNpc21_3


AcademyNpc22::
# 669 "data/maps/Harborac/scripts.pory"
	lock
# 670 "data/maps/Harborac/scripts.pory"
	faceplayer
# 671 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 672 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 673 "data/maps/Harborac/scripts.pory"
	applymovement 16, heart
# 674 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 675 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc23::
# 679 "data/maps/Harborac/scripts.pory"
	lock
# 680 "data/maps/Harborac/scripts.pory"
	faceplayer
# 681 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 682 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 683 "data/maps/Harborac/scripts.pory"
	applymovement 15, heart
# 684 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 685 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc24::
# 688 "data/maps/Harborac/scripts.pory"
	lock
# 689 "data/maps/Harborac/scripts.pory"
	faceplayer
# 690 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 691 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc22_Text_0
# 692 "data/maps/Harborac/scripts.pory"
	applymovement 14, heart
# 693 "data/maps/Harborac/scripts.pory"
	waitmoncry
# 694 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc25::
# 697 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc25_1
# 703 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc25_4
AcademyNpc25_3:
# 710 "data/maps/Harborac/scripts.pory"
	lock
# 711 "data/maps/Harborac/scripts.pory"
	faceplayer
# 712 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_2
# 713 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_1:
# 698 "data/maps/Harborac/scripts.pory"
	lock
# 699 "data/maps/Harborac/scripts.pory"
	faceplayer
# 700 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_0
# 701 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_2:
# 704 "data/maps/Harborac/scripts.pory"
	lock
# 705 "data/maps/Harborac/scripts.pory"
	faceplayer
# 706 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc25_Text_1
# 707 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc25_4:
# 703 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc25_2
	goto AcademyNpc25_3


AcademyNpc26::
# 719 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc26_1
# 725 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc26_4
AcademyNpc26_3:
# 732 "data/maps/Harborac/scripts.pory"
	lock
# 733 "data/maps/Harborac/scripts.pory"
	faceplayer
# 734 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_2
# 735 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_1:
# 720 "data/maps/Harborac/scripts.pory"
	lock
# 721 "data/maps/Harborac/scripts.pory"
	faceplayer
# 722 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_0
# 723 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_2:
# 726 "data/maps/Harborac/scripts.pory"
	lock
# 727 "data/maps/Harborac/scripts.pory"
	faceplayer
# 728 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc26_Text_1
# 729 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc26_4:
# 725 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc26_2
	goto AcademyNpc26_3


AcademyNpc27::
# 740 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc27_1
# 748 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc27_4
AcademyNpc27_3:
# 757 "data/maps/Harborac/scripts.pory"
	lock
# 758 "data/maps/Harborac/scripts.pory"
	faceplayer
# 759 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 760 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_2
# 762 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_1:
# 741 "data/maps/Harborac/scripts.pory"
	lock
# 742 "data/maps/Harborac/scripts.pory"
	faceplayer
# 743 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 744 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_0
# 746 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_2:
# 749 "data/maps/Harborac/scripts.pory"
	lock
# 750 "data/maps/Harborac/scripts.pory"
	faceplayer
# 751 "data/maps/Harborac/scripts.pory"
	speakername unknown
# 752 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc27_Text_1
# 754 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc27_4:
# 748 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc27_2
	goto AcademyNpc27_3


AcademyNpc28::
# 767 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc28_1
# 773 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc28_4
AcademyNpc28_3:
# 780 "data/maps/Harborac/scripts.pory"
	lock
# 781 "data/maps/Harborac/scripts.pory"
	faceplayer
# 782 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_2
# 783 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_1:
# 768 "data/maps/Harborac/scripts.pory"
	lock
# 769 "data/maps/Harborac/scripts.pory"
	faceplayer
# 770 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_0
# 771 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_2:
# 774 "data/maps/Harborac/scripts.pory"
	lock
# 775 "data/maps/Harborac/scripts.pory"
	faceplayer
# 776 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc28_Text_1
# 777 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc28_4:
# 773 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc28_2
	goto AcademyNpc28_3


AcademyNpc29::
# 789 "data/maps/Harborac/scripts.pory"
	lock
# 790 "data/maps/Harborac/scripts.pory"
	faceplayer
# 791 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc29_Text_0
# 792 "data/maps/Harborac/scripts.pory"
	release
	return


AcademyNpc30::
# 796 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc30_1
# 802 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc30_4
AcademyNpc30_3:
# 809 "data/maps/Harborac/scripts.pory"
	lock
# 810 "data/maps/Harborac/scripts.pory"
	faceplayer
# 811 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_2
# 812 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_1:
# 797 "data/maps/Harborac/scripts.pory"
	lock
# 798 "data/maps/Harborac/scripts.pory"
	faceplayer
# 799 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_0
# 800 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_2:
# 803 "data/maps/Harborac/scripts.pory"
	lock
# 804 "data/maps/Harborac/scripts.pory"
	faceplayer
# 805 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc30_Text_1
# 806 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc30_4:
# 802 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc30_2
	goto AcademyNpc30_3


AcademyNpc31::
# 817 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc31_1
# 823 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc31_4
AcademyNpc31_3:
# 830 "data/maps/Harborac/scripts.pory"
	lock
# 831 "data/maps/Harborac/scripts.pory"
	faceplayer
# 832 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_2
# 833 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_1:
# 818 "data/maps/Harborac/scripts.pory"
	lock
# 819 "data/maps/Harborac/scripts.pory"
	faceplayer
# 820 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_0
# 821 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_2:
# 824 "data/maps/Harborac/scripts.pory"
	lock
# 825 "data/maps/Harborac/scripts.pory"
	faceplayer
# 826 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc31_Text_1
# 827 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc31_4:
# 823 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc31_2
	goto AcademyNpc31_3


AcademyNpc32::
# 839 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc32_1
# 845 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc32_4
AcademyNpc32_3:
# 852 "data/maps/Harborac/scripts.pory"
	lock
# 853 "data/maps/Harborac/scripts.pory"
	faceplayer
# 854 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_2
# 855 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_1:
# 840 "data/maps/Harborac/scripts.pory"
	lock
# 841 "data/maps/Harborac/scripts.pory"
	faceplayer
# 842 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_0
# 843 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_2:
# 846 "data/maps/Harborac/scripts.pory"
	lock
# 847 "data/maps/Harborac/scripts.pory"
	faceplayer
# 848 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc32_Text_1
# 849 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc32_4:
# 845 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc32_2
	goto AcademyNpc32_3


AcademyNpc33::
# 861 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc33_1
# 867 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc33_4
AcademyNpc33_3:
# 874 "data/maps/Harborac/scripts.pory"
	lock
# 875 "data/maps/Harborac/scripts.pory"
	faceplayer
# 876 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_2
# 877 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_1:
# 862 "data/maps/Harborac/scripts.pory"
	lock
# 863 "data/maps/Harborac/scripts.pory"
	faceplayer
# 864 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_0
# 865 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_2:
# 868 "data/maps/Harborac/scripts.pory"
	lock
# 869 "data/maps/Harborac/scripts.pory"
	faceplayer
# 870 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc33_Text_1
# 871 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc33_4:
# 867 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc33_2
	goto AcademyNpc33_3


AcademyNpc34::
# 883 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc34_1
# 889 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc34_4
AcademyNpc34_3:
# 896 "data/maps/Harborac/scripts.pory"
	lock
# 897 "data/maps/Harborac/scripts.pory"
	faceplayer
# 898 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_2
# 899 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_1:
# 884 "data/maps/Harborac/scripts.pory"
	lock
# 885 "data/maps/Harborac/scripts.pory"
	faceplayer
# 886 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_0
# 887 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_2:
# 890 "data/maps/Harborac/scripts.pory"
	lock
# 891 "data/maps/Harborac/scripts.pory"
	faceplayer
# 892 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc34_Text_1
# 893 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc34_4:
# 889 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc34_2
	goto AcademyNpc34_3


AcademyNpc35::
# 904 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc35_1
# 910 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc35_4
AcademyNpc35_3:
# 917 "data/maps/Harborac/scripts.pory"
	lock
# 918 "data/maps/Harborac/scripts.pory"
	faceplayer
# 919 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_2
# 920 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_1:
# 905 "data/maps/Harborac/scripts.pory"
	lock
# 906 "data/maps/Harborac/scripts.pory"
	faceplayer
# 907 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_0
# 908 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_2:
# 911 "data/maps/Harborac/scripts.pory"
	lock
# 912 "data/maps/Harborac/scripts.pory"
	faceplayer
# 913 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc35_Text_1
# 914 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc35_4:
# 910 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc35_2
	goto AcademyNpc35_3


AcademyNpc36::
# 925 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc36_1
# 931 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc36_4
AcademyNpc36_3:
# 938 "data/maps/Harborac/scripts.pory"
	lock
# 939 "data/maps/Harborac/scripts.pory"
	faceplayer
# 940 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_2
# 941 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_1:
# 926 "data/maps/Harborac/scripts.pory"
	lock
# 927 "data/maps/Harborac/scripts.pory"
	faceplayer
# 928 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_0
# 929 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_2:
# 932 "data/maps/Harborac/scripts.pory"
	lock
# 933 "data/maps/Harborac/scripts.pory"
	faceplayer
# 934 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc36_Text_1
# 935 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc36_4:
# 931 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc36_2
	goto AcademyNpc36_3


AcademyNpc37::
# 946 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc37_1
# 952 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc37_4
AcademyNpc37_3:
# 959 "data/maps/Harborac/scripts.pory"
	lock
# 960 "data/maps/Harborac/scripts.pory"
	faceplayer
# 961 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_2
# 962 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_1:
# 947 "data/maps/Harborac/scripts.pory"
	lock
# 948 "data/maps/Harborac/scripts.pory"
	faceplayer
# 949 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_0
# 950 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_2:
# 953 "data/maps/Harborac/scripts.pory"
	lock
# 954 "data/maps/Harborac/scripts.pory"
	faceplayer
# 955 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc37_Text_1
# 956 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc37_4:
# 952 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc37_2
	goto AcademyNpc37_3


AcademyNpc38::
# 967 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_AFTER_OUTBURST, AcademyNpc38_1
# 973 "data/maps/Harborac/scripts.pory"
	goto_if_set FLAG_AFTER_OUTBURST, AcademyNpc38_4
AcademyNpc38_3:
# 980 "data/maps/Harborac/scripts.pory"
	lock
# 981 "data/maps/Harborac/scripts.pory"
	faceplayer
# 982 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_2
# 983 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_1:
# 968 "data/maps/Harborac/scripts.pory"
	lock
# 969 "data/maps/Harborac/scripts.pory"
	faceplayer
# 970 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_0
# 971 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_2:
# 974 "data/maps/Harborac/scripts.pory"
	lock
# 975 "data/maps/Harborac/scripts.pory"
	faceplayer
# 976 "data/maps/Harborac/scripts.pory"
	msgbox AcademyNpc38_Text_1
# 977 "data/maps/Harborac/scripts.pory"
	release
	return

AcademyNpc38_4:
# 973 "data/maps/Harborac/scripts.pory"
	goto_if_unset FLAG_OUTBURST_SETTLED, AcademyNpc38_2
	goto AcademyNpc38_3


Doorlock::
# 988 "data/maps/Harborac/scripts.pory"
	lock
# 989 "data/maps/Harborac/scripts.pory"
	faceplayer
# 990 "data/maps/Harborac/scripts.pory"
	msgbox Doorlock_Text_0
# 991 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, Fionamet_Movement_6
# 992 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 993 "data/maps/Harborac/scripts.pory"
	release
	return


# 10 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_0:
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
# 10 "data/maps/Harborac/scripts.pory"
	walk_up
	step_end

# 11 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_1:
# 11 "data/maps/Harborac/scripts.pory"
	walk_down
# 11 "data/maps/Harborac/scripts.pory"
	walk_down
# 11 "data/maps/Harborac/scripts.pory"
	walk_down
	step_end

# 14 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_2:
# 14 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_3:
# 17 "data/maps/Harborac/scripts.pory"
	jump_right
# 17 "data/maps/Harborac/scripts.pory"
	face_left
# 17 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 30 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_4:
# 30 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 35 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_5:
# 35 "data/maps/Harborac/scripts.pory"
	emote_question_mark
	step_end

# 40 "data/maps/Harborac/scripts.pory"
Fionamet_Movement_6:
# 40 "data/maps/Harborac/scripts.pory"
	face_down
	step_end

# 73 "data/maps/Harborac/scripts.pory"
Fionamet1_Movement_0:
# 73 "data/maps/Harborac/scripts.pory"
	walk_left
# 73 "data/maps/Harborac/scripts.pory"
	face_up
	step_end

# 155 "data/maps/Harborac/scripts.pory"
scinerd_Movement_0:
# 155 "data/maps/Harborac/scripts.pory"
	emote_upset
	step_end

# 190 "data/maps/Harborac/scripts.pory"
notnowdorm_Movement_0:
# 190 "data/maps/Harborac/scripts.pory"
	walk_left
	step_end

# 295 "data/maps/Harborac/scripts.pory"
AcademyNpc4_Movement_0:
# 295 "data/maps/Harborac/scripts.pory"
	emote_exclamation_mark
# 295 "data/maps/Harborac/scripts.pory"
	shake_horizontal
# 295 "data/maps/Harborac/scripts.pory"
	shake_horizontal
	step_end

# 589 "data/maps/Harborac/scripts.pory"
AcademyNpc17_Movement_0:
# 589 "data/maps/Harborac/scripts.pory"
	emote_heart
	step_end

Fionamet_Text_0:
# 20 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My apologies……$"

Fionamet_Text_1:
# 24 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Are you alright, my lady?$"

Fionamet_Text_2:
# 28 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How rude of him, he didn't even stop to\n"
	.string "apologize.$"

Fionamet_Text_3:
# 32 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}……$"

Fionamet_Text_4:
# 36 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What happened?$"

Fionamet_Text_5:
# 42 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}……\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 88 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 94 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 96 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 99 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 106 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 112 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 118 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 124 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 130 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 137 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 144 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 150 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could...$"

scinerd_Text_1:
# 153 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

scinerd_Text_2:
# 156 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh, I need more data.$"

elias_Text_0:
# 165 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're late Xylar.\p"
	.string "My name is Elias.\p"
	.string "I'm a professor and the headmaster\n"
	.string "made it clear that I was to ensure your\l"
	.string "arrival.\p"
	.string "Come with me, the headmaster is waiting\n"
	.string "for you.$"

elias_Text_1:
# 167 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need an escort.\p"
	.string "Just tell me where I have to go.$"

elias_Text_2:
# 169 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll soon find that attitude won't get\n"
	.string "you far here.\p"
	.string "Respect is earned, young man.\n"
	.string "Now follow me.$"

elias_Text_3:
# 174 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

notnowdorm_Text_0:
# 192 "data/maps/Harborac/scripts.pory"
	.string "Not now.$"

AcademyNpc_Text_0:
# 200 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You look tough! Battle me sometime!$"

AcademyNpc_Text_1:
# 206 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I thought Xylar was just a quiet,\n"
	.string "strong guy… but after that? Damn. He's\l"
	.string "terrifying.$"

AcademyNpc_Text_2:
# 212 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I still wanna battle him, though. Maybe\n"
	.string "that rage is what makes him strong.$"

AcademyNpc1_Text_0:
# 221 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ugh, I hate battling.\p"
	.string "I'd rather be in the library learning\n"
	.string "about Pokemon history.$"

AcademyNpc1_Text_1:
# 227 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}See? This is why I hate battling. People\n"
	.string "get too caught up in their emotions.$"

AcademyNpc1_Text_2:
# 233 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I actually feel bad for him. Something's\n"
	.string "clearly wrong, but no one's helping.$"

AcademyNpc2_Text_0:
# 242 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Focus on control, not just power.$"

AcademyNpc2_Text_1:
# 250 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You lost control, Xylar. That is\n"
	.string "unacceptable. You may have skill, but if\l"
	.string "you cannot control yourself, you will\l"
	.string "not last here.$"

AcademyNpc2_Text_2:
# 258 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Power means nothing without restraint.\n"
	.string "Learn that before it's too late.$"

AcademyNpc3_Text_0:
# 268 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I train every day!\p"
	.string "Someday, I'll become the strongest in\n"
	.string "this academy.$"

AcademyNpc3_Text_1:
# 274 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Man, I respected Xylar… but now I don't\n"
	.string "know. That wasn't just rage.$"

AcademyNpc3_Text_2:
# 280 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If he ever loses it in a match… will he\n"
	.string "stop?$"

AcademyNpc4_Text_0:
# 289 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}U-um... hello...$"

AcademyNpc4_Text_1:
# 297 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}…I-I shouldn't talk to you.$"

AcademyNpc4_Text_2:
# 303 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I know people say you're dangerous now,\n"
	.string "but… I think you're just hurt.$"

AcademyNpc5_Text_0:
# 314 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Art is expression!\p"
	.string "Pokemon battling is also an art, you\n"
	.string "know!$"

AcademyNpc5_Text_1:
# 322 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Such raw emotion! Such unfiltered\n"
	.string "intensity!\p"
	.string "…And yet, Xylar, this is not the place\n"
	.string "for a destructive masterpiece.$"

AcademyNpc5_Text_2:
# 330 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Art and battle both require control.\p"
	.string "I hope you learn that before your\n"
	.string "canvas turns to ruin.$"

AcademyNpc6_Text_0:
# 343 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love sketching Pokemon!\p"
	.string "Maybe I'll draw yours someday...$"

AcademyNpc6_Text_1:
# 349 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wanted to draw Xylar's Torchic before.\p"
	.string "Now, I'm not so sure I even want to be\n"
	.string "near him.$"

AcademyNpc6_Text_2:
# 355 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe I'll still draw him.\p"
	.string "Not as a trainer… but as a storm.$"

AcademyNpc7_Text_0:
# 365 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Science is the backbone of Pokemon\n"
	.string "research.\p"
	.string "Even trainers should understand the\n"
	.string "fundamentals.$"

AcademyNpc7_Text_1:
# 373 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uncontrolled power is a failure in\n"
	.string "understanding.\p"
	.string "You acted on instinct, but instinct\n"
	.string "without logic leads to destruction.$"

AcademyNpc7_Text_2:
# 381 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Were you even thinking? Or was it\n"
	.string "something deeper than that?$"

AcademyNpc8_Text_0:
# 394 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Studying type advantages wins battles!$"

AcademyNpc8_Text_1:
# 400 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't get it.\p"
	.string "Xylar's strategy was so calculated in\n"
	.string "battle, but outside of it… he was\l"
	.string "reckless.$"

AcademyNpc8_Text_2:
# 406 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Maybe his battles aren't about winning.\p"
	.string "Maybe they're about surviving.$"

AcademyNpc9_Text_0:
# 416 "data/maps/Harborac/scripts.pory"
	.string "Leaf$"

AcademyNpc9_Text_1:
# 417 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Everyone here has potential.\p"
	.string "It's up to them to decide how they use\n"
	.string "it.$"

AcademyNpc9_Text_2:
# 425 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar....\p"
	.string "I don't know what to say.\p"
	.string "That wasn't just anger.\p"
	.string "That was something else.$"

AcademyNpc10_Text_0:
# 435 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Battling is more than strength and\n"
	.string "speed.\p"
	.string "It's about understanding your\n"
	.string "opponent and yourself.$"

AcademyNpc10_Text_1:
# 443 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've studied battle psychology for\n"
	.string "years...\p"
	.string "But what I saw wasn't strategy.\p"
	.string "It was pure instinct.\p"
	.string "And that's dangerous$"

AcademyNpc11_Text_0:
# 456 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Shhh! Library rules!$"

AcademyNpc11_Text_1:
# 462 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't understand fighters… but that\n"
	.string "wasn't normal, was it?$"

AcademyNpc11_Text_2:
# 468 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd rather read about battles than\n"
	.string "witness them.\p"
	.string "Especially ones like that.$"

AcademyNpc12_Text_0:
# 477 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Have you ever heard the legend of the\n"
	.string "Jewel of Life?$"

AcademyNpc12_Text_1:
# 480 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Greed is the reason for our region's\n"
	.string "separation.$"

AcademyNpc12_Text_2:
# 485 "data/maps/Harborac/scripts.pory"
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
# 494 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There's a story about a warrior who lost\n"
	.string "control and became a monster.....\p"
	.string "Do you believe in fate, Xylar?$"

AcademyNpc12_Text_4:
# 499 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what are you really fighting\n"
	.string "against, Xylar?$"

AcademyNpc13_Text_0:
# 506 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Keep your voice down in the Library.$"

AcademyNpc14_Text_0:
# 514 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Welcome to Astralis Academy.\p"
	.string "If you have any questions feel free to\n"
	.string "ask.$"

AcademyNpc14_Text_1:
# 522 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You must be Xylar.\p"
	.string "Here's your room key.$"

AcademyNpc14_Text_2:
# 524 "data/maps/Harborac/scripts.pory"
	.string "Recieved room key.$"

AcademyNpc14_Text_3:
# 525 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's the room on the left side at the\n"
	.string "end.$"

AcademyNpc14_Text_4:
# 533 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....Xylar, what happened there?\p"
	.string "You looked completely different....$"

AcademyNpc14_Text_5:
# 539 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I've worked here for years… I can tell\n"
	.string "when someone's fighting more than just\l"
	.string "an opponent.$"

AcademyNpc15_Text_0:
# 549 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strive for excellence in all you do.$"

AcademyNpc15_Text_1:
# 557 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar… I see potential in you, but\n"
	.string "potential without control is dangerous.\p"
	.string "You need to understand that.$"

AcademyNpc15_Text_2:
# 565 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You fight like a man with nothing to\n"
	.string "lose.\p"
	.string "That still concerns me.$"

AcademyNpc16_Text_0:
# 574 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody's allowed to enter until the\n"
	.string "tournament.$"

AcademyNpc17_Text_0:
# 582 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm looking for a boyfriend.\p"
	.string "But he should be strong enough to\n"
	.string "protect me.$"

AcademyNpc17_Text_1:
# 588 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I don't mind getting a little rough.$"

AcademyNpc18_Text_0:
# 598 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Nobody can enter the lighthouse\n"
	.string "without headmaster's permission.$"

AcademyNpc19_Text_0:
# 606 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh. You're the quiet type, huh?\p"
	.string "Careful.\p"
	.string "Silence makes people uneasy.$"

AcademyNpc19_Text_1:
# 612 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh? So you do have a breaking point.\p"
	.string "About time.$"

AcademyNpc19_Text_2:
# 618 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're stronger now.\p"
	.string "Not in skill.\p"
	.string "In… presence.\p"
	.string "People notice when you walk into a room.$"

AcademyNpc20_Text_0:
# 628 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your fate is shrouded in shadow… but\n"
	.string "one thing is clear.\p"
	.string "You do not belong to the light.$"

AcademyNpc20_Text_1:
# 634 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The darkness inside you stirs. It was\n"
	.string "only a matter of time.$"

AcademyNpc20_Text_2:
# 640 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You seek control, but the storm within\n"
	.string "you does not wish to be tamed.$"

AcademyNpc21_Text_0:
# 650 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The murkrows like you.\p"
	.string "That's rare.\p"
	.string "They usually avoid those who carry\n"
	.string "heavy burdens.$"

AcademyNpc21_Text_1:
# 656 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Murkrow scattered since that\n"
	.string "incident.\p"
	.string "They fear rage more than darkness.$"

AcademyNpc21_Text_2:
# 662 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They came back.\p"
	.string "Not because they trust you, but\n"
	.string "because they recognize what you are\l"
	.string "now.$"

AcademyNpc22_Text_0:
# 672 "data/maps/Harborac/scripts.pory"
	.string "Murk...Murk....$"

AcademyNpc25_Text_0:
# 700 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Even those lost in the dark can find\n"
	.string "their way back to the light.$"

AcademyNpc25_Text_1:
# 706 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your soul trembles.\p"
	.string "You do not fear others, you fear\n"
	.string "yourself.$"

AcademyNpc25_Text_2:
# 712 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The path ahead is long.\p"
	.string "But you have not strayed as far as you\n"
	.string "think.$"

AcademyNpc26_Text_0:
# 722 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Curfew's in place for a reason, kid.\p"
	.string "No telling what's lurking out here at\n"
	.string "night.$"

AcademyNpc26_Text_1:
# 728 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You think you're untouchable? Losing\n"
	.string "control like that will put a target on\l"
	.string "your back.$"

AcademyNpc26_Text_2:
# 734 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're still young.\p"
	.string "Got time to fix what's broken… if you\n"
	.string "want to.$"

AcademyNpc27_Text_0:
# 744 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You don't belong here, Xylar.\p"
	.string "But you already knew that, didn't you?$"

AcademyNpc27_Text_1:
# 752 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That rage… it suits you. Maybe more\n"
	.string "than you realize.$"

AcademyNpc27_Text_2:
# 760 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day, you'll have to stop pretending\n"
	.string "you can be normal.\p"
	.string "We both know it's not in your nature.$"

AcademyNpc28_Text_0:
# 770 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.....$"

AcademyNpc28_Text_1:
# 776 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

AcademyNpc28_Text_2:
# 782 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're different now.\p"
	.string "More… dangerous.$"

AcademyNpc29_Text_0:
# 791 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Students are not permitted in this\n"
	.string "room.$"

AcademyNpc30_Text_0:
# 799 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I have files on every student.\p"
	.string "Some are more… interesting than others.$"

AcademyNpc30_Text_1:
# 805 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}So many complaints filed about you in\n"
	.string "one night.\p"
	.string "Impressive, really.$"

AcademyNpc30_Text_2:
# 811 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your file is still growing.\p"
	.string "The question is what kind of story will\n"
	.string "it tell?$"

AcademyNpc31_Text_0:
# 820 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say the academy has produced\n"
	.string "both heroes and villains.\p"
	.string "Which do you think you'll be?$"

AcademyNpc31_Text_1:
# 826 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That moment back there… that's what I\n"
	.string "call a turning point.\p"
	.string "You can't go back now.$"

AcademyNpc31_Text_2:
# 832 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Every great tragedy starts somewhere.\p"
	.string "I wonder where yours began.$"

AcademyNpc32_Text_0:
# 842 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh.\p"
	.string "You new kids don't know how much this\n"
	.string "academy has seen.$"

AcademyNpc32_Text_1:
# 848 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A mess like that ain't easy to clean up.\p"
	.string "And I don't mean just the floors.$"

AcademyNpc32_Text_2:
# 854 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Trouble follows certain kinds of people.\p"
	.string "I'd say it follows you like a shadow.$"

AcademyNpc33_Text_0:
# 864 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The winds whisper secrets… and they\n"
	.string "speak your name.$"

AcademyNpc33_Text_1:
# 870 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The storm inside you has begun.\p"
	.string "And storms rarely leave anything\n"
	.string "standing.$"

AcademyNpc33_Text_2:
# 876 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You are not the first to carry such\n"
	.string "darkness.\p"
	.string "But you might be the last.$"

AcademyNpc34_Text_0:
# 886 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I wonder… what drives certain Pokémon\n"
	.string "to evolve under extreme stress?$"

AcademyNpc34_Text_1:
# 892 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That kind of aggression… even some\n"
	.string "Pokémon only reach that state when\l"
	.string "pushed too far.$"

AcademyNpc34_Text_2:
# 898 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Survival instincts.\p"
	.string "That's what I see in you.\p"
	.string "You don't fight to win, you fight\n"
	.string "because you have to.$"

AcademyNpc35_Text_0:
# 907 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You don't talk much.\p"
	.string "That's fine.\p"
	.string "Words are just another way to lie.$"

AcademyNpc35_Text_1:
# 913 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Took you long enough to snap.\p"
	.string "Thought it would happen sooner,\n"
	.string "honestly.$"

AcademyNpc35_Text_2:
# 919 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They're watching you now.\p"
	.string "Not just the teachers.\p"
	.string "Everyone.$"

AcademyNpc36_Text_0:
# 928 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The academy grounds are beautiful in\n"
	.string "the spring.\p"
	.string "It almost feels like a fresh start.$"

AcademyNpc36_Text_1:
# 934 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}H-Hey… um, I should get going.$"

AcademyNpc36_Text_2:
# 940 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's been… a weird few days, huh?$"

AcademyNpc37_Text_0:
# 949 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey, did you hear?\p"
	.string "Some of the seniors are already forming\n"
	.string "battle teams.$"

AcademyNpc37_Text_1:
# 955 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That guy… there's something seriously\n"
	.string "wrong with him.$"

AcademyNpc37_Text_2:
# 961 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess everyone has their moments…\n"
	.string "doesn't mean I'd wanna battle him.$"

AcademyNpc38_Text_0:
# 970 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm just here to get stronger.\p"
	.string "Everything else is a distraction.$"

AcademyNpc38_Text_1:
# 976 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tch… whatever. Just don't cross him.$"

AcademyNpc38_Text_2:
# 982 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fights like a damn beast… I can\n"
	.string "respect that.$"

Doorlock_Text_0:
# 990 "data/maps/Harborac/scripts.pory"
	.string "The door is locked.$"

eliasn::
# 186 "data/maps/Harborac/scripts.pory"
	.string "Prof. Elias$"

maribel::
# 336 "data/maps/Harborac/scripts.pory"
	.string "Prof. Dorne$"

orson::
# 387 "data/maps/Harborac/scripts.pory"
	.string "Prof. Orson$"

evelyn::
# 448 "data/maps/Harborac/scripts.pory"
	.string "Prof.Evelyn$"
