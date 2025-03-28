AstralisAcademy_MapScripts::
# 2 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 3 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/AstralisAcademy/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, TrialAnnouncement
# 5 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 10, TrialAnnouncement1
	.2byte 0

AstralisAcademy_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial
# 9 "data/maps/AstralisAcademy/scripts.pory"
	map_script_2 ACADEMY_START, 10, trial1
	.2byte 0


trial1::
# 15 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 16 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 17 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 18 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 19 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 20 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 21 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 22 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 28 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 29 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 30 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 31 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 32 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 33 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 34 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 35 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 36 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 37 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 38 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 42 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 43 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 44 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 45 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 47 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 49 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 50 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 51 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 52 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 53 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 54 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 55 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 56 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 57 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 58 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 59 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 60 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 61 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
	return


TrialAnnouncement::
# 65 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 66 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 67 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 68 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 70 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 71 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 72 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 73 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 74 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 75 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 77 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 78 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 79 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 81 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 82 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 83 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 86 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 89 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 90 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 91 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 92 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 93 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 94 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 95 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 96 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_4, MSGBOX_AUTOCLOSE
# 97 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 98 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 99 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 100 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 101 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 102 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 103 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 104 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 105 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 106 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 107 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 108 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 109 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 110 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 111 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 112 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 10, 56
# 113 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
# 114 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


TrialAnnouncement1::
# 121 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 122 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 123 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 125 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 126 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 127 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 128 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 129 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 130 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 131 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_0
# 132 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 133 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 134 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 135 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 136 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 137 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 138 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 139 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_1
# 141 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 142 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 143 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 144 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 145 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 146 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 147 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 148 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 149 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 150 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 151 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 152 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_3
# 153 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 154 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 155 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 156 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 157 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 158 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_5
# 160 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 161 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 162 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 163 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 164 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 165 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 166 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 167 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 168 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 169 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 170 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 171 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 172 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 173 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 174 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 175 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 176 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 177 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 178 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 179 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 180 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 181 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 182 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_7
# 183 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 184 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 185 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 186 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 187 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 188 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 189 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_8
# 190 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 191 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 192 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 193 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 194 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 195 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 196 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 197 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 198 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 199 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 200 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 201 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 202 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 203 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 204 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 205 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 206 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 207 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 208 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 209 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 210 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 211 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 212 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 213 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 214 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 215 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 216 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 217 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 218 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 219 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 220 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 221 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_10
# 222 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 223 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 224 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 225 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 226 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 227 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 228 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 229 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 230 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 231 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 232 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 233 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 234 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 11
	return


FracturedMask::
# 242 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 243 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 4, FracturedMask_Movement_0
# 244 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 245 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 246 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_0
# 247 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 248 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 249 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 250 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 251 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_0
# 252 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 253 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_DOOR
# 255 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 256 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_PSYBEAM
# 257 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 258 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 259 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 260 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_4, MSGBOX_AUTOCLOSE
# 261 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 4, TrialAnnouncement_Movement_2
# 262 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_1
# 263 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 264 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 265 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 4, TrialAnnouncement_Movement_2
# 266 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 267 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 268 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 269 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, FracturedMask_Movement_2
# 270 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 271 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 272 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 273 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_3
# 274 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 275 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 276 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 277 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 278 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 279 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PC_LOGIN
# 280 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 281 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 282 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 5, 8
# 284 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 285 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 286 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 287 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 288 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 289 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 290 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 291 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 292 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 293 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 294 "data/maps/AstralisAcademy/scripts.pory"
	removeobject 4
# 295 "data/maps/AstralisAcademy/scripts.pory"
	releaseall
	return


# 68 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 68 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 68 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 68 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 68 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 69 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 72 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 72 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 72 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 72 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 72 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 72 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 81 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 83 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 88 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 88 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 88 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 91 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 98 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 100 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 100 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 101 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 101 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 102 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 102 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 103 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 103 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 105 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
# 105 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 105 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 105 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 105 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 105 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 110 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 111 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 131 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 131 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 139 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 140 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 150 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 152 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 152 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 152 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 152 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 152 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 152 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 156 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 156 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 158 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 159 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 175 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 175 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 182 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 182 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 189 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 189 "data/maps/AstralisAcademy/scripts.pory"
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
TrialAnnouncement1_Movement_10:
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 221 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 221 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 227 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 227 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 243 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 243 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 243 "data/maps/AstralisAcademy/scripts.pory"
	face_player
	step_end

# 262 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 262 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_right
# 262 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_right
	step_end

# 269 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 269 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_down
# 269 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_down
	step_end

# 273 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 273 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 273 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

TrialAnnouncement_Text_0:
# 75 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_1:
# 77 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_2:
# 79 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_3:
# 95 "data/maps/AstralisAcademy/scripts.pory"
	.string "Headmaster Alistair$"

TrialAnnouncement_Text_4:
# 96 "data/maps/AstralisAcademy/scripts.pory"
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
# 108 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 123 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 125 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 128 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 133 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 135 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 144 "data/maps/AstralisAcademy/scripts.pory"
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
# 149 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 161 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 164 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 165 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Serena is cheering for him?$"

TrialAnnouncement1_Text_11:
# 168 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 169 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 172 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 173 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 179 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 185 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 188 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 209 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 211 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 216 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 225 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 226 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 230 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 246 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_1:
# 247 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_2:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Bet his family's even more messed up.$"

FracturedMask_Text_3:
# 252 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}What's wrong, rich boy? Daddy never\n"
	.string "taught...$"

FracturedMask_Text_4:
# 260 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}...What did you say?$"

FracturedMask_Text_5:
# 268 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}You know NOTHING!$"

FracturedMask_Text_6:
# 271 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_7:
# 272 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Xylar, STOP!$"

FracturedMask_Text_8:
# 276 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Enough.$"

FracturedMask_Text_9:
# 281 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}I... I didn't...$"

FracturedMask_Text_10:
# 286 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Expulsion is on the table...$"

FracturedMask_Text_11:
# 287 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}They don't know about Luther.$"

FracturedMask_Text_12:
# 291 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW DARK_GRAY}Don't say his name.$"

damien::
# 116 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 237 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
