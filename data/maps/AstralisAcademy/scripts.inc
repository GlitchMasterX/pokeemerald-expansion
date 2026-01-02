AstralisAcademy_MapScripts::
# 2 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial
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
	applymovement 20, AcademyNpc41_Movement_0
# 32 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 33 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc41_Text_1
# 34 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 35 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


AcademyNpc42::
# 39 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 40 "data/maps/AstralisAcademy/scripts.pory"
	faceplayer
# 41 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_0
# 42 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 43 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, AcademyNpc42_Movement_0
# 44 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 45 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_1
# 46 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 47 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


trial::
# 51 "data/maps/AstralisAcademy/scripts.pory"
	setweather WEATHER_SUNNY
# 52 "data/maps/AstralisAcademy/scripts.pory"
	doweather
# 53 "data/maps/AstralisAcademy/scripts.pory"
	turnobject 0xFF, DIR_NORTH
# 54 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 55 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 56 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 57 "data/maps/AstralisAcademy/scripts.pory"
	removeobject 2
# 58 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 61 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 38
# 62 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 39
# 63 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 24, 32, 4, DIR_SOUTH
# 64 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 26, 40, 3, DIR_NORTH
# 65 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 25, 41, 3, DIR_NORTH
# 66 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 23, 38
# 67 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 20, 40, 3, DIR_NORTH
# 68 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 22, 40
# 69 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 27, 41, 3, DIR_NORTH
# 70 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 21, 42, 3, DIR_NORTH
# 71 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 24, 42, 3, DIR_NORTH
# 72 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 26, 43, 3, DIR_NORTH
# 73 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 21, 43, 3, DIR_NORTH
	return


TrialAnnouncement::
# 77 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 78 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 79 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 80 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 7, TrialAnnouncement_Movement_0
# 81 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 83 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 84 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 85 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 86 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 88 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_3, MSGBOX_AUTOCLOSE
# 89 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 90 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 91 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 92 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 93 "data/maps/AstralisAcademy/scripts.pory"
	delay 30
# 94 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 24, 43, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 101 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 102 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFD, TrialAnnouncement1_Movement_0
# 104 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 105 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 106 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_1
# 107 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 108 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 109 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 110 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 111 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 112 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 113 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 114 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 115 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 116 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement1_Movement_3
# 117 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement1_Movement_3
# 118 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement1_Movement_3
# 119 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement1_Movement_3
# 120 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 121 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 122 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 123 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 124 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 125 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 126 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 127 "data/maps/AstralisAcademy/scripts.pory"
	setfollowernpc 21, FNPC_LEAVE_ROUTE, serenafollow
# 128 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR1, 13, 26
	return


FracturedMask::
# 132 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 133 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 239 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 247 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 256 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 257 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 258 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 259 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_19
# 260 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 261 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 134 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 135 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 136 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 137 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 138 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 139 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 140 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 141 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 142 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 143 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 144 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 146 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 147 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 148 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 149 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 150 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 152 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_4, MSGBOX_AUTOCLOSE
# 153 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 154 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_3
# 155 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 159 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 160 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_4
FracturedMask_20:
# 162 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 163 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 164 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 165 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 166 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_6
# 167 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_3
# 168 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 169 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 170 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_8
# 171 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 172 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 173 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement1_Movement_3
# 174 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement1_Movement_3
# 175 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 176 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 177 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_7
# 178 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 179 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 180 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_8
# 181 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 182 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 183 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 184 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 185 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 186 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 187 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 188 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 189 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 190 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 191 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 192 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_13, MSGBOX_AUTOCLOSE
# 193 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 194 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 195 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_10
# 196 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 197 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, FracturedMask_Movement_11
# 198 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_12
# 199 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 200 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 201 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 202 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_13
# 203 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 204 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_10
# 205 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 206 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_1
# 207 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 208 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_15
# 209 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 210 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 211 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_14
# 212 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 213 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_15
# 214 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 215 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_15
# 216 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 217 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_16
# 218 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 219 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 220 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 221 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 222 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_17
# 223 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 224 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_18
# 225 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 226 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 227 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 228 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 230 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 231 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_0
# 232 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 233 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_21, MSGBOX_AUTOCLOSE
# 234 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 235 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 236 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 237 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 12
	return

FracturedMask_2:
# 240 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 241 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 242 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 243 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 244 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 245 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 249 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_2
# 250 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_22, MSGBOX_AUTOCLOSE
# 251 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 252 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 253 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 247 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 247 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 239 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 239 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 133 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 133 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 156 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 157 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_4
	goto FracturedMask_20


# 31 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc41_Movement_0:
# 31 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 31 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_right
	step_end

# 43 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc42_Movement_0:
# 43 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 43 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_left
	step_end

# 80 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 80 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 80 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 80 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 80 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 80 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 80 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 80 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 91 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 103 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 103 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 103 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 106 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 106 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 116 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 121 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 121 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 121 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 121 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 121 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 121 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 137 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 137 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 139 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 139 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 139 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 145 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 145 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 145 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 154 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 154 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 156 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 156 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 159 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 159 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 166 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 166 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 166 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 166 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 166 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 177 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 177 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 180 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 180 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 180 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 193 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 193 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 193 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 195 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 195 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 195 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 195 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 197 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 197 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 198 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 198 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 198 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 198 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 198 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 198 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 202 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 211 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 211 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 211 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 211 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_15:
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 217 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_16:
# 217 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 217 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 217 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 217 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 222 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_17:
# 222 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 222 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 224 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_18:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 224 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 224 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 224 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 224 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 224 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 224 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 224 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 259 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_19:
# 259 "data/maps/AstralisAcademy/scripts.pory"
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
# 41 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This kid really believes Bug Pokémon\n"
	.string "can hold their own in a tournament.\p"
	.string "I'll knock her down now so she can stand\n"
	.string "taller later.\p"
	.string "That's what a mentor does.$"

AcademyNpc42_Text_1:
# 45 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Staravia, let's wrap this up!$"

TrialAnnouncement_Text_0:
# 83 "data/maps/AstralisAcademy/scripts.pory"
	.string "Leaf$"

TrialAnnouncement_Text_1:
# 84 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_2:
# 86 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_3:
# 88 "data/maps/AstralisAcademy/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement1_Text_0:
# 110 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement1_Text_1:
# 111 "data/maps/AstralisAcademy/scripts.pory"
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
# 124 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

FracturedMask_Text_0:
# 144 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 148 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 149 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

FracturedMask_Text_3:
# 150 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

FracturedMask_Text_4:
# 152 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_5:
# 164 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_6:
# 168 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_7:
# 169 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_8:
# 170 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_9:
# 171 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_10:
# 179 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_11:
# 183 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_12:
# 185 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_13:
# 192 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_14:
# 201 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_15:
# 208 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_16:
# 209 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_17:
# 216 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_18:
# 220 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_19:
# 227 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_20:
# 232 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_21:
# 233 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_22:
# 242 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 96 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"
