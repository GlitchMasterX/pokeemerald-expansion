AstralisAcademy_MapScripts::
# 2 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 9, trial
	.2byte 0


fwdmonth::
# 7 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 1
	return


fwdmonth1::
# 10 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 6
	return


fwdmonth3::
# 13 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 11
	return


AcademyNpc39::
# 17 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 18 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
	return


AcademyNpc40::
# 22 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_STARAVIA, CRY_MODE_ENCOUNTER
# 23 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
	return


AcademyNpc41::
# 27 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 28 "data/maps/AstralisAcademy/scripts.pory"
	faceplayer
# 29 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc41_Text_0
# 30 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 31 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 19, AcademyNpc41_Movement_0
# 32 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 33 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc41_Text_1
# 34 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 35 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 36 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
# 37 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


AcademyNpc42::
# 41 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 42 "data/maps/AstralisAcademy/scripts.pory"
	faceplayer
# 43 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_0
# 44 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 45 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, AcademyNpc42_Movement_0
# 46 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 47 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_1
# 48 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 49 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_STARAVIA, CRY_MODE_ENCOUNTER
# 50 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
# 51 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


trial::
# 55 "data/maps/AstralisAcademy/scripts.pory"
	setweather WEATHER_SUNNY
# 56 "data/maps/AstralisAcademy/scripts.pory"
	doweather
# 57 "data/maps/AstralisAcademy/scripts.pory"
	turnobject 0xFF, DIR_NORTH
# 58 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 59 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 60 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 61 "data/maps/AstralisAcademy/scripts.pory"
	removeobject 2
# 62 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 63 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 64 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 65 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 38
# 66 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 39
# 67 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 24, 32, 4, DIR_SOUTH
# 68 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 26, 40, 3, DIR_NORTH
# 69 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 25, 41, 3, DIR_NORTH
# 70 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 23, 38
# 71 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 20, 40, 3, DIR_NORTH
# 72 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 22, 40
# 73 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 27, 41, 3, DIR_NORTH
# 74 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 21, 42, 3, DIR_NORTH
# 75 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 24, 42, 3, DIR_NORTH
# 76 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 26, 43, 3, DIR_NORTH
# 77 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 21, 43, 3, DIR_NORTH
	return


TrialAnnouncement::
# 81 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 82 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 83 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 84 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 7, TrialAnnouncement_Movement_0
# 85 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 87 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 88 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 89 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 90 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 91 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 92 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_3, MSGBOX_AUTOCLOSE
# 93 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 94 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 95 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 96 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 97 "data/maps/AstralisAcademy/scripts.pory"
	delay 30
# 98 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 24, 43, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 105 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 106 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFD, TrialAnnouncement1_Movement_0
# 108 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 109 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_1
# 111 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 112 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 113 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 114 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 115 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 117 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 118 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 119 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 120 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement1_Movement_3
# 121 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement1_Movement_3
# 122 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement1_Movement_3
# 123 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement1_Movement_3
# 124 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 125 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 126 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 127 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 128 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 129 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 130 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 131 "data/maps/AstralisAcademy/scripts.pory"
	setfollowernpc 21, FNPC_LEAVE_ROUTE, serenafollow
# 132 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR1, 13, 26
	return


FracturedMask::
# 136 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 137 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 243 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 251 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 260 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 261 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 262 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 263 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_19
# 264 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 265 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 138 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 139 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 140 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 142 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 143 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 144 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 145 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 146 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 147 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 148 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 150 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 151 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 152 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 153 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 154 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 155 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 156 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_4, MSGBOX_AUTOCLOSE
# 157 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 158 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_3
# 159 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 163 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 164 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_4
FracturedMask_20:
# 166 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 167 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 168 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 169 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 170 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_6
# 171 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_3
# 172 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 173 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 174 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_8
# 175 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 176 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 177 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement1_Movement_3
# 178 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement1_Movement_3
# 179 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 180 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 181 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_7
# 182 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 183 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 184 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_8
# 185 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 186 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 187 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 188 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 189 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 190 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 191 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 192 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 193 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 194 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 195 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 196 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_13, MSGBOX_AUTOCLOSE
# 197 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 198 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 199 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_10
# 200 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 201 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, FracturedMask_Movement_11
# 202 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_12
# 203 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 204 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 205 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 206 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_13
# 207 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 208 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_10
# 209 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 210 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 211 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 212 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_15
# 213 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 214 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 215 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_14
# 216 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 217 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_15
# 218 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 219 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_15
# 220 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 221 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_16
# 222 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 223 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 224 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 225 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 226 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_17
# 227 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 228 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_18
# 229 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 230 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 231 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 232 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 234 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 235 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 236 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 237 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_21, MSGBOX_AUTOCLOSE
# 238 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 239 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 240 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 241 "data/maps/AstralisAcademy/scripts.pory"
	setvar VAR_ACADEMY_START, 12
	return

FracturedMask_2:
# 244 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 245 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 246 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 247 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 248 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 249 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 252 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 253 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 254 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 255 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 256 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 257 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 251 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 251 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 243 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 243 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 137 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 137 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 160 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 161 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_4
	goto FracturedMask_20


# 31 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc41_Movement_0:
# 31 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 31 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_right
	step_end

# 45 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc42_Movement_0:
# 45 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 45 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_left
	step_end

# 84 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 84 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 84 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 95 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 107 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 107 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 107 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 110 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 118 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 120 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 120 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 125 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 125 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 125 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 125 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 125 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 125 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 141 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 143 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 143 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 149 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 149 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 149 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 158 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 158 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 160 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 160 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 163 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 163 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 163 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 170 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 170 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 170 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 170 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 170 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 181 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 181 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 184 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 184 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 184 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 197 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 197 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 197 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 199 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 199 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 199 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 199 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 201 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 201 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 202 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 202 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 202 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 206 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 206 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 206 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 206 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 206 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 215 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 217 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_15:
# 217 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 217 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_16:
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 221 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 221 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 226 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_17:
# 226 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 226 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 228 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_18:
# 228 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 228 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 228 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 228 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 228 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 228 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 228 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 228 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 228 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 263 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_19:
# 263 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

AcademyNpc41_Text_0:
# 29 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day he'll see... my Bug Pokémon\n"
	.string "aren't weak. I'll battle him every day\l"
	.string "until I prove it!$"

AcademyNpc41_Text_1:
# 33 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Minty, let's show him what we've got!$"

AcademyNpc42_Text_0:
# 43 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This kid really believes Bug Pokémon\n"
	.string "can hold their own in a tournament.\p"
	.string "I'll knock her down now so she can stand\n"
	.string "taller later.\p"
	.string "That's what a mentor does.$"

AcademyNpc42_Text_1:
# 47 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Staravia, let's wrap this up!$"

TrialAnnouncement_Text_0:
# 87 "data/maps/AstralisAcademy/scripts.pory"
	.string "Leaf$"

TrialAnnouncement_Text_1:
# 88 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hi {PLAYER}!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_2:
# 90 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_3:
# 92 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement1_Text_0:
# 114 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement1_Text_1:
# 115 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}This academy values strength through\n"
	.string "experience...\p"
	.string "Before the semester begins, we must\n"
	.string "assess your current skills.\p"
	.string "Today, each first-year student will\n"
	.string "engage in a one-on-one Pokémon\l"
	.string "battle...\p"
	.string "Consider this your first trial.\p"
	.string "Now, make your way to the Dojo and\n"
	.string "prepare to face your opponent.$"

TrialAnnouncement1_Text_2:
# 128 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

FracturedMask_Text_0:
# 148 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}, You're late.$"

FracturedMask_Text_1:
# 152 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen {PLAYER}, punctuality is key\n"
	.string "to success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 153 "data/maps/AstralisAcademy/scripts.pory"
	.string "{PLAYER}$"

FracturedMask_Text_3:
# 154 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

FracturedMask_Text_4:
# 156 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_5:
# 168 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_6:
# 172 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_7:
# 173 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_8:
# 174 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_9:
# 175 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_10:
# 183 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_11:
# 187 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_12:
# 189 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_13:
# 196 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_14:
# 205 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_15:
# 212 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_16:
# 213 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}, STOP!$"

FracturedMask_Text_17:
# 220 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_18:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_19:
# 231 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_20:
# 236 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_21:
# 237 "data/maps/AstralisAcademy/scripts.pory"
	.string "{PLAYER} collapsed, throwing the room\n"
	.string "into chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_22:
# 246 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 100 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"
