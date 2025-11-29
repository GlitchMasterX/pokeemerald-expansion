AstralisAcademy_MapScripts::
# 2 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, TrialAnnouncement
	.2byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial
	.2byte 0


fwdmonth::
# 10 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 1
	return


fwdmonth1::
# 13 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 6
	return


fwdmonth3::
# 16 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 11
	return


AcademyNpc39::
# 20 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 21 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
	return


AcademyNpc40::
# 25 "data/maps/AstralisAcademy/scripts.pory"
	playmoncry SPECIES_STARAVIA, CRY_MODE_ENCOUNTER
# 26 "data/maps/AstralisAcademy/scripts.pory"
	waitmoncry
	return


AcademyNpc41::
# 30 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 31 "data/maps/AstralisAcademy/scripts.pory"
	faceplayer
# 32 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc41_Text_0
# 33 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 34 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, AcademyNpc41_Movement_0
# 35 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 36 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc41_Text_1
# 37 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 38 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


AcademyNpc42::
# 42 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 43 "data/maps/AstralisAcademy/scripts.pory"
	faceplayer
# 44 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_0
# 45 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 46 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, AcademyNpc42_Movement_0
# 47 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 48 "data/maps/AstralisAcademy/scripts.pory"
	msgbox AcademyNpc42_Text_1
# 49 "data/maps/AstralisAcademy/scripts.pory"
	closemessage
# 50 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


trial1::
# 53 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 54 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 55 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 56 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 57 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 58 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 59 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 60 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 61 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 62 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 63 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 64 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 66 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 67 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 68 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 69 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 70 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 71 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 72 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 73 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 74 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 75 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 76 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 80 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 81 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 82 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 83 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 84 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 85 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 86 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 87 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 88 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 89 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 90 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 91 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 92 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 93 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 94 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 95 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 96 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 97 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 98 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 99 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 100 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 101 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 102 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 103 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


TrialAnnouncement::
# 107 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 108 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 109 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 110 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 111 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 112 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 113 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 114 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 115 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 116 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 117 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 118 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 119 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 120 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 121 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 122 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 123 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 124 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 125 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 126 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 127 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
# 128 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 129 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 130 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 132 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 133 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 134 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 135 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 136 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 137 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 138 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 139 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 141 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_3, MSGBOX_AUTOCLOSE
# 142 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 143 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 144 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 145 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 148 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 151 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 152 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 153 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 154 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 155 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 156 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 157 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 158 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 159 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 160 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 161 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 162 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 163 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 164 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 165 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 166 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 167 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 168 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 169 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 170 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_6, MSGBOX_AUTOCLOSE
# 171 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 172 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 173 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 174 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 10, 45, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 181 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 182 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_0
# 183 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 184 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 185 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 186 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 187 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 188 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 189 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 190 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 191 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 192 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 193 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 194 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_1
# 195 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 196 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 197 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 198 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 199 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 200 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 201 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 202 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 204 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 205 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 206 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 207 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 208 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 209 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 210 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 211 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 212 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 213 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 214 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 215 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_4
# 216 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 217 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 218 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 219 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_5
# 220 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 221 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_6
# 223 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 224 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 225 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 226 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 227 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 228 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 229 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 230 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 231 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 232 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 233 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 234 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 235 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 236 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 237 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 238 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 239 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 240 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 241 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 242 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 243 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 244 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 245 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_8
# 246 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 247 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 248 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 249 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 250 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 251 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 252 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 253 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 254 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 255 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 256 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 257 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 258 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 259 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 260 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 261 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 262 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 263 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 264 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 265 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 266 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 267 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 268 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 269 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 270 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 271 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 272 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 273 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 274 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 275 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 276 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 277 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 278 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 279 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 280 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 281 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 282 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_10
# 283 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 284 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 285 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 286 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 287 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 288 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 289 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 290 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_12
# 291 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 292 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 293 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 294 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 295 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 296 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 297 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
	return


FracturedMask::
# 305 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 306 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 412 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 420 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 429 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 430 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 431 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 432 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 433 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 434 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 307 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 308 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 309 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 310 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 311 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 312 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 313 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 314 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 315 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 316 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 317 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 318 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 319 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 320 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 321 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 322 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 323 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 324 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 325 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 326 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 327 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, TrialAnnouncement_Movement_13
# 328 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 332 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 333 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
FracturedMask_20:
# 335 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 336 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 337 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 338 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 339 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_12
# 340 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_13
# 341 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 342 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 343 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 344 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 345 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 346 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_10
# 347 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_10
# 348 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 349 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 350 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_8
# 351 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 352 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 353 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 354 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 355 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 356 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 357 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 358 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 359 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 360 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 361 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 362 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 363 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 364 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 365 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 366 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_6
# 367 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 368 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 369 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 370 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_9
# 371 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_8
# 372 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 373 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 374 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 375 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 376 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 377 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 378 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 379 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 380 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 381 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 382 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 383 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 384 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_10
# 385 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 386 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_11
# 387 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 388 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 389 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_15, MSGBOX_AUTOCLOSE
# 390 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_12
# 391 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 392 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 393 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 394 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 395 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_13
# 396 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 397 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_14
# 398 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 399 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 400 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 401 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 402 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 403 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 404 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 405 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 406 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 407 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 408 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 409 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 410 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 12
	return

FracturedMask_2:
# 413 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 414 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 415 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 416 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 417 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 418 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 421 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 422 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 423 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 424 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 425 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 426 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 420 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 420 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 412 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 412 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 306 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 306 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 329 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_3
# 330 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
	goto FracturedMask_20


# 34 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc41_Movement_0:
# 34 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 34 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_right
	step_end

# 46 "data/maps/AstralisAcademy/scripts.pory"
AcademyNpc42_Movement_0:
# 46 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 46 "data/maps/AstralisAcademy/scripts.pory"
	walk_in_place_left
	step_end

# 130 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 130 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 130 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 130 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 131 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 134 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 143 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 145 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 146 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 147 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 147 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 147 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 148 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 153 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
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
	walk_down
# 160 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 162 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 162 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 163 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 163 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 164 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 164 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 165 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 165 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 167 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
# 167 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 167 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 167 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 167 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 167 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 172 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 172 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 172 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 172 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 172 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 173 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 182 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 194 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 202 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 202 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 203 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 213 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 215 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 215 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 219 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 219 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 221 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 222 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 238 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 238 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 245 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 245 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 245 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 252 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_9:
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 282 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_10:
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 282 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 284 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 284 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 284 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 284 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 284 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 284 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 284 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 290 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_12:
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 290 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 310 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 310 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 312 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 312 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 318 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 318 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 318 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 329 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 329 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 329 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 332 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 332 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 353 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 353 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 353 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 366 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 366 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 366 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 368 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 368 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 368 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 368 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 371 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 371 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 371 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 371 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 371 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 371 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 375 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 375 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 375 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 375 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 375 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 384 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 384 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 384 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 384 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 386 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 386 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 386 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 390 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 390 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 390 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 390 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 390 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 395 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 395 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 395 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 397 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 397 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 397 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 397 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 397 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 397 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 397 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 397 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 397 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 397 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

AcademyNpc41_Text_0:
# 32 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}One day he'll see... my Bug Pokémon\n"
	.string "aren't weak. I'll battle him every day\l"
	.string "until I prove it!$"

AcademyNpc41_Text_1:
# 36 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Minty, let's show him what we've got!$"

AcademyNpc42_Text_0:
# 44 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This kid really believes Bug Pokémon\n"
	.string "can hold their own in a tournament.\p"
	.string "I'll knock her down now so she can stand\n"
	.string "taller later.\p"
	.string "That's what a mentor does.$"

AcademyNpc42_Text_1:
# 48 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Staravia, let's wrap this up!$"

TrialAnnouncement_Text_0:
# 136 "data/maps/AstralisAcademy/scripts.pory"
	.string "Leaf$"

TrialAnnouncement_Text_1:
# 137 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_2:
# 139 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_3:
# 141 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_4:
# 157 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement_Text_5:
# 158 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This academy values strength through\n"
	.string "experience...\p"
	.string "Before the semester begins, we must\n"
	.string "assess your current skills.\p"
	.string "Today, each first-year student will\n"
	.string "engage in a one-on-one Pokémon\l"
	.string "battle...\p"
	.string "Consider this your first trial.\p"
	.string "Now, make your way to the training\n"
	.string "grounds and prepare to face your\l"
	.string "opponent.$"

TrialAnnouncement_Text_6:
# 170 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 186 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 188 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 191 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 193 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 196 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 198 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 207 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Attention, all first-year students...\p"
	.string "The time has come to prove your\n"
	.string "potential.\p"
	.string "In the spirit of growth and mastery,\n"
	.string "each of you will engage in a one-on-one\l"
	.string "Pokémon battle.\p"
	.string "This will serve as your first trial.\p"
	.string "Let us begin by calling forth the first\n"
	.string "two challengers.$"

TrialAnnouncement1_Text_7:
# 212 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 227 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 228 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Leaf is cheering for him?$"

TrialAnnouncement1_Text_11:
# 231 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 232 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 235 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 236 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 242 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 251 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 272 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 274 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 279 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 287 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 288 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 289 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 293 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 317 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 321 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 325 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_3:
# 337 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_4:
# 341 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_5:
# 342 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_6:
# 343 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_7:
# 344 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_8:
# 352 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_9:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_10:
# 358 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_11:
# 365 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_12:
# 374 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_13:
# 381 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_14:
# 382 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_15:
# 389 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_16:
# 393 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_17:
# 400 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_18:
# 405 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_19:
# 406 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_20:
# 415 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 176 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 300 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
