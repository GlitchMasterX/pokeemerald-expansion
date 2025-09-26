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


trial1::
# 19 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 20 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 21 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 22 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 23 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 24 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 25 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 26 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 32 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 33 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 34 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 35 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 36 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 37 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 38 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 39 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 40 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 41 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 42 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 46 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 47 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 48 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 49 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 50 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 51 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 52 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 53 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 54 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 55 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 56 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 57 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 58 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 59 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 60 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 61 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 62 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 63 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 64 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 67 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 68 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 69 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


TrialAnnouncement::
# 73 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 74 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 75 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 76 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 77 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 78 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 79 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 80 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 81 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 82 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 83 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 84 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 85 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 86 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 87 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 88 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 89 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 90 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 91 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 92 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 93 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
# 94 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 95 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 96 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 98 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 99 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 100 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 101 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 102 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 103 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 104 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 105 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 106 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 107 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_3, MSGBOX_AUTOCLOSE
# 108 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 109 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 110 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 111 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 114 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 117 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 118 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 119 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 120 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 121 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 122 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 123 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 124 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 125 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 126 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 127 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 128 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 129 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 130 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 131 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 132 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 133 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 134 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 135 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 136 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_6, MSGBOX_AUTOCLOSE
# 137 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 138 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 139 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 140 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 10, 45, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 147 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 148 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_0
# 149 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 150 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 151 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 152 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 154 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 155 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 156 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 157 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 158 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 159 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 160 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_1
# 161 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 162 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 163 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 164 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 165 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 166 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 167 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 168 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 170 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 171 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 172 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 173 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 174 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 175 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 176 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 177 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 178 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 179 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 180 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 181 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_4
# 182 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 183 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 184 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 185 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_5
# 186 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 187 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_6
# 189 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 190 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 191 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 192 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 193 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 194 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 195 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 196 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 197 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 198 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 199 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 200 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 201 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 202 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 203 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 204 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 205 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 206 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 207 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 208 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 209 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 210 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 211 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_8
# 212 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 213 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 214 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 215 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 216 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 217 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 218 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 219 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 220 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 221 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 222 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 223 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 224 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 225 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 226 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 227 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 228 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 229 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 230 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 231 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 232 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 233 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 234 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 235 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 236 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 237 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 238 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 239 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 240 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 241 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 242 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_7
# 243 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 244 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 245 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 246 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 247 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 248 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_10
# 249 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 250 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 251 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 252 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 253 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 254 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 255 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 256 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_12
# 257 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 258 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_0
# 259 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 260 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 261 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 262 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 263 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
	return


FracturedMask::
# 271 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 272 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 378 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 386 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 395 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 396 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 397 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 398 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 399 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 400 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 273 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 274 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 275 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 277 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 278 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 279 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 280 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 281 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 282 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 283 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 284 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 285 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 286 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 287 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 288 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 289 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 290 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 291 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 292 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 293 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, TrialAnnouncement_Movement_13
# 294 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 298 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 299 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
FracturedMask_20:
# 301 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 302 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 303 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 304 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 305 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_12
# 306 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_13
# 307 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 308 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 309 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 310 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 311 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 312 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_10
# 313 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_10
# 314 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 315 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 316 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_8
# 317 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 318 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 319 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 320 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 321 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 322 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 323 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 324 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 325 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 326 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 327 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 328 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 329 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 330 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 331 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 332 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_6
# 333 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 334 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 335 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 336 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_9
# 337 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_8
# 338 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 339 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 340 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 341 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 342 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 343 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 344 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 345 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 346 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 347 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 348 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 349 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 350 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_10
# 351 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 352 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_11
# 353 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 354 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 355 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_15, MSGBOX_AUTOCLOSE
# 356 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_12
# 357 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 358 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 359 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 360 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 361 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_13
# 362 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 363 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_14
# 364 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 365 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 366 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 367 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 368 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 369 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 370 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_4
# 371 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 372 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 373 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 374 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 375 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 376 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 12
	return

FracturedMask_2:
# 379 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 380 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 381 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 382 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 383 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 384 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 387 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 388 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 389 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 390 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 391 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 392 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 386 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 386 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 378 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 378 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 272 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 272 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 295 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_3
# 296 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
	goto FracturedMask_20


# 96 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 96 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 96 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 96 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 96 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 97 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 100 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 100 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 100 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 100 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 100 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 100 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 109 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 111 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 111 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 111 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 111 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 111 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 111 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 112 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 113 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
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
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 115 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 119 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 126 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 126 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 128 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 129 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 129 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 130 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 131 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 131 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 133 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
# 133 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 133 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 133 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 133 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 133 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 138 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 139 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 148 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
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
	step_end

# 160 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 160 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 168 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 168 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 169 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 179 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 179 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 179 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 179 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 179 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 179 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 181 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 187 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 187 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 188 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 204 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 204 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 211 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 211 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 211 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 218 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_9:
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 218 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 248 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_10:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 250 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 250 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 250 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 250 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 250 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 250 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 250 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 256 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_12:
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 256 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 276 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 276 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 278 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 278 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 278 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 284 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 284 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 284 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 295 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 295 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 295 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 298 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 298 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 298 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 319 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 319 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 319 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 332 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 334 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 334 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 334 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 334 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 337 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 337 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 337 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 337 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 337 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 337 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 341 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 341 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 341 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 341 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 341 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 350 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 350 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 350 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 350 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 352 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 352 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 352 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 356 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 356 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 356 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 356 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 361 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 361 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 361 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 363 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 363 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 363 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 363 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 363 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 363 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 363 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 363 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 363 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 363 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

TrialAnnouncement_Text_0:
# 102 "data/maps/AstralisAcademy/scripts.pory"
	.string "Leaf$"

TrialAnnouncement_Text_1:
# 103 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_2:
# 105 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_3:
# 107 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_4:
# 123 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement_Text_5:
# 124 "data/maps/AstralisAcademy/scripts.pory"
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
# 136 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 152 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 154 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 157 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 159 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 162 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 164 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 173 "data/maps/AstralisAcademy/scripts.pory"
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
# 178 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 190 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 193 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 194 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Leaf is cheering for him?$"

TrialAnnouncement1_Text_11:
# 197 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 198 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 201 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 202 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 208 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 214 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 217 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 238 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 240 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 245 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 253 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 254 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 255 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 259 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 283 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 287 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 291 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_3:
# 303 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_4:
# 307 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_5:
# 308 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_6:
# 309 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_7:
# 310 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_8:
# 318 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_9:
# 322 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_10:
# 324 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_11:
# 331 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_12:
# 340 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_13:
# 347 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_14:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_15:
# 355 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_16:
# 359 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_17:
# 366 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_18:
# 371 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_19:
# 372 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_20:
# 381 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 142 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 266 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
