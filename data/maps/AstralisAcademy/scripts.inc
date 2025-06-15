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
# 8 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial1
	.2byte 0


fwdmonth::
# 12 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 1
	return


fwdmonth1::
# 15 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 6
	return


fwdmonth3::
# 18 "data/maps/AstralisAcademy/scripts.pory"
	fwdmonth 11
	return


trial1::
# 21 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 22 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 23 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 24 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 25 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 26 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 27 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 28 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 34 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 35 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 36 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 37 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 38 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 39 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 40 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 41 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 42 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 43 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 44 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 48 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 49 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 50 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 51 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 52 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 55 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 56 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 57 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 58 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 59 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 60 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 61 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 62 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 63 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 64 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 65 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 66 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 67 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
	return


TrialAnnouncement::
# 71 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 72 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 73 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 74 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 76 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 77 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 78 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 79 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 80 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 81 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_0, MSGBOX_AUTOCLOSE
# 82 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 83 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 85 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 86 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 87 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 88 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 89 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 92 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 95 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 96 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 97 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 98 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 99 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 100 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 101 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 102 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_4, MSGBOX_AUTOCLOSE
# 103 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 104 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 105 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 106 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 107 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 108 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 109 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 110 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 111 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 112 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 113 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 114 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 115 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 116 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 117 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 118 "data/maps/AstralisAcademy/scripts.pory"
	warp_continue_script MAP_ASTRALIS_ACADEMY, 10, 56, TrialAnnouncement1, TRUE
	return


TrialAnnouncement1::
# 125 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 127 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 128 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 129 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 130 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 131 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 132 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 133 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 135 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 136 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_0
# 137 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 138 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 139 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 140 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 141 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 142 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 143 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_1
# 146 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 147 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 148 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 149 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 150 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 151 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 152 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 153 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 154 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 155 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 156 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 157 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_3
# 158 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 159 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 160 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 161 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 162 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 163 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_5
# 165 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 166 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 167 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 168 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 169 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 170 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 171 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 172 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 173 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 174 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 175 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 176 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 177 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 178 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 179 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 180 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 181 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 182 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 183 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 184 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 185 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 186 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 187 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_7
# 188 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 189 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 190 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 191 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 192 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 193 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 194 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_8
# 195 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 196 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 197 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 198 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 199 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 200 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 201 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 202 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 203 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 204 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 205 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 206 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 207 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 208 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 209 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 210 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 211 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 212 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 213 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 214 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 215 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 216 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 217 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 218 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 219 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 220 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 221 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 222 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 223 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 224 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 225 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 226 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_10
# 227 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 228 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 229 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 230 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 231 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 232 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 233 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 234 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 235 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 236 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 237 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 238 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 239 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
	return


FracturedMask::
# 247 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 248 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 354 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 362 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 371 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 372 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 373 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 374 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 375 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 376 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 249 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 250 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 251 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 252 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 253 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 254 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 255 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 256 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 257 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 258 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 259 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 260 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 261 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 262 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 263 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 264 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 265 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 266 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 267 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 268 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 269 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, TrialAnnouncement_Movement_13
# 270 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 274 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 275 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
FracturedMask_20:
# 277 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 278 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 279 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 280 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 281 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_12
# 282 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_13
# 283 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 284 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 285 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 286 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 287 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 288 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_10
# 289 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_10
# 290 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 291 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 292 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_8
# 293 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 294 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 295 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 296 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 297 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 298 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 299 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 300 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 301 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 302 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 303 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 304 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 305 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 306 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 307 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 308 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_6
# 309 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 310 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 311 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 312 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_9
# 313 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_8
# 314 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 315 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 316 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 317 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 318 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 319 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 320 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 321 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 322 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 323 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 324 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 325 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 326 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_10
# 327 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 328 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_11
# 329 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 330 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 331 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_15, MSGBOX_AUTOCLOSE
# 332 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_12
# 333 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 334 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 335 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 336 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 337 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_13
# 338 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 339 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_14
# 340 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 341 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 342 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 343 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 344 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 345 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 346 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 347 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 348 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 349 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 350 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 351 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 352 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 12
	return

FracturedMask_2:
# 355 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 356 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 357 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 358 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 359 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 360 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 363 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 364 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 365 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 366 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 367 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 368 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 362 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 362 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 354 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 354 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 271 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_3
# 272 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
	goto FracturedMask_20


# 74 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 74 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 74 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 74 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 74 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 75 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 78 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 78 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 78 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 78 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 78 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 78 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 87 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 89 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 89 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 89 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 89 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 89 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 89 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 92 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 93 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 94 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 94 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 94 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 104 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 106 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 107 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 107 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 108 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 108 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 109 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 109 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 111 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
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
	step_end

# 116 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 116 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 117 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 136 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 136 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 144 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 144 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 145 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 155 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 157 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 157 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 157 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 157 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 157 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 161 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 161 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 163 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 163 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 164 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 180 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 180 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 187 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 187 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 194 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 194 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 224 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_9:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 224 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 226 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_10:
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 226 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 232 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 232 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 252 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 252 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 254 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 254 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 260 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 260 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 260 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 271 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 271 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 271 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 274 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 274 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 274 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 295 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 295 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 295 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 308 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 308 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 308 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 310 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 310 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 310 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 310 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 313 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 313 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 313 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 313 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 313 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 313 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 317 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 317 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 317 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 317 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 317 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 326 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 326 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 326 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 326 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 328 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 328 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 328 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 332 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 332 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 337 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 337 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 337 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 339 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 339 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 339 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 339 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 339 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 339 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 339 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 339 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 339 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 339 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

TrialAnnouncement_Text_0:
# 81 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_1:
# 83 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_2:
# 85 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_3:
# 101 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement_Text_4:
# 102 "data/maps/AstralisAcademy/scripts.pory"
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
# 114 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 128 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 133 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 135 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 138 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 140 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 149 "data/maps/AstralisAcademy/scripts.pory"
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
# 154 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 166 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 169 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 170 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Serena is cheering for him?$"

TrialAnnouncement1_Text_11:
# 173 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 174 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 177 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 178 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 184 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 190 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 193 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 214 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 216 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 221 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 229 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 230 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 231 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 235 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 259 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 263 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 267 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_3:
# 279 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_4:
# 283 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_5:
# 284 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_6:
# 285 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_7:
# 286 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_8:
# 294 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_9:
# 298 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_10:
# 300 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_11:
# 307 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_12:
# 316 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_13:
# 323 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_14:
# 324 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_15:
# 331 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_16:
# 335 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_17:
# 342 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_18:
# 347 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_19:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_20:
# 357 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 120 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 242 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
