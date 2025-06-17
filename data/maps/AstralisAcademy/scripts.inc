AstralisAcademy_MapScripts::
# 2 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 3 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, TrialAnnouncement
	.2byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial
	.2byte 0


fwdmonth::
# 11 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 1
	return


fwdmonth1::
# 14 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 6
	return


fwdmonth3::
# 17 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 11
	return


trial1::
# 20 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 21 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 22 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 23 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 24 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 25 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 26 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 27 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 33 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 34 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 35 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 36 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 37 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 38 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 39 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 40 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 41 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 42 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 43 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 47 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 48 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 49 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 50 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 51 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 52 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 53 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 54 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 55 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 56 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 57 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 58 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 59 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 60 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 61 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 62 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 63 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 64 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 67 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 68 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 69 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 70 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


TrialAnnouncement::
# 74 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 75 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 76 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 77 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 78 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 79 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 80 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 81 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 82 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 83 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 84 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 85 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 86 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 87 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 88 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 89 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 90 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 91 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 92 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 93 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 94 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
# 95 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 96 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 97 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 99 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 100 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 101 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 102 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 103 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 104 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_0, MSGBOX_AUTOCLOSE
# 105 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 106 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 108 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 109 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 110 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 111 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 112 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 115 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 118 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 119 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 120 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 121 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 122 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 123 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 124 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 125 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_4, MSGBOX_AUTOCLOSE
# 126 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 127 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 128 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 129 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 130 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 131 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 132 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 133 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 134 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 135 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 136 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 137 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 138 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 139 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 140 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 141 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 10, 45, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 148 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 149 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_0
# 150 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 151 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 152 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 153 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 155 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 156 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 157 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 158 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 159 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 160 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 161 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_1
# 162 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 163 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 164 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 165 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 166 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 167 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 168 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 169 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 171 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 172 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 173 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 174 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 175 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 176 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 177 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 178 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 179 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 180 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 181 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 182 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_4
# 183 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 184 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 185 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 186 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_5
# 187 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 188 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_6
# 190 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 191 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 192 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 193 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 194 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 195 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 196 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 197 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 198 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 199 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 200 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 201 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 202 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 203 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 204 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 205 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 206 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 207 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 208 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 209 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 210 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 211 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 212 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_8
# 213 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 214 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 215 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 216 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 217 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 218 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 219 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 220 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 221 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 222 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 223 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 224 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 225 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 226 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 227 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 228 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 229 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 230 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 231 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 232 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 233 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 234 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 235 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 236 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 237 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 238 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 239 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 240 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 241 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 242 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 243 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 244 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 245 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 246 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 247 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 248 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 249 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_10
# 250 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 251 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 252 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 253 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 254 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 255 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 256 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 257 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_12
# 258 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 259 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 260 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 261 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 262 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 263 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 264 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
	return


FracturedMask::
# 272 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 273 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 379 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 387 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 396 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 397 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 398 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 399 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 400 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 401 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 274 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 275 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 276 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 277 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 278 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 279 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 280 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 281 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 282 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 283 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 284 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 285 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 286 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 287 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 288 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 289 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 290 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 291 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 292 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 293 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 294 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, TrialAnnouncement_Movement_13
# 295 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 299 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 300 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
FracturedMask_20:
# 302 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 303 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 304 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 305 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 306 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_12
# 307 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_13
# 308 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 309 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 310 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 311 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 312 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 313 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_10
# 314 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_10
# 315 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 316 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 317 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_8
# 318 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 319 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 320 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 321 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 322 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 323 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 324 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 325 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 326 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 327 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 328 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 329 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 330 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 331 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 332 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 333 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_6
# 334 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 335 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 336 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 337 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_9
# 338 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_8
# 339 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 340 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 341 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 342 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 343 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 344 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 345 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 346 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 347 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 348 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 349 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 350 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 351 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_10
# 352 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 353 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_11
# 354 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 355 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 356 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_15, MSGBOX_AUTOCLOSE
# 357 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_12
# 358 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 359 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 360 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 361 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 362 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_13
# 363 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 364 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_14
# 365 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 366 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 367 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 368 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 370 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 371 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 372 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 373 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 374 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 375 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 376 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 377 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 12
	return

FracturedMask_2:
# 380 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 381 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 382 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 383 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 384 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 385 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 388 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 389 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 390 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 391 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 392 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 393 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 387 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 387 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 379 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 379 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 273 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 273 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 296 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_3
# 297 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
	goto FracturedMask_20


# 97 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 98 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 101 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 101 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 101 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 101 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 101 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 101 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 110 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 112 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 114 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 117 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 117 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 117 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 120 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 127 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 127 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 129 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 130 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 131 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 131 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 132 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 132 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 134 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 134 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 140 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 149 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 149 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 161 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 169 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 170 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 182 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 186 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 188 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 188 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 189 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 205 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 205 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 212 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 212 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 212 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 219 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_9:
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

# 249 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_10:
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 249 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 251 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 251 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 251 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 251 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 251 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 251 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 251 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 257 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_12:
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 257 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 277 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 277 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 279 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 279 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 279 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 285 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 285 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 285 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 296 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 296 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 296 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 299 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 299 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 299 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 320 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 320 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 320 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 333 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 333 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 333 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 335 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 335 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 335 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 335 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 338 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 338 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 338 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 338 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 338 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 338 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 342 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 342 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 342 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 342 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 342 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 351 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 351 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 351 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 351 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 353 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 353 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 353 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 357 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 357 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 357 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 357 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 357 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 362 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 362 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 362 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 364 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 364 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 364 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 364 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 364 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 364 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 364 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 364 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 364 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 364 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

TrialAnnouncement_Text_0:
# 104 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_1:
# 106 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_2:
# 108 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_3:
# 124 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement_Text_4:
# 125 "data/maps/AstralisAcademy/scripts.pory"
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

TrialAnnouncement_Text_5:
# 137 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 153 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 155 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 158 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 160 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 163 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 165 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 174 "data/maps/AstralisAcademy/scripts.pory"
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
# 179 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 191 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 194 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 195 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Serena is cheering for him?$"

TrialAnnouncement1_Text_11:
# 198 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 199 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 202 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 203 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 209 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 215 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 218 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 239 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 241 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 246 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 254 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 255 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 256 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 260 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 284 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 288 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 292 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_3:
# 304 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_4:
# 308 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_5:
# 309 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_6:
# 310 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_7:
# 311 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_8:
# 319 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_9:
# 323 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_10:
# 325 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_11:
# 332 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_12:
# 341 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_13:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_14:
# 349 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_15:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_16:
# 360 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_17:
# 367 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_18:
# 372 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_19:
# 373 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_20:
# 382 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 143 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 267 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
