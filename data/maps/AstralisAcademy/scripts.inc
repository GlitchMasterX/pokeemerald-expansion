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
# 14 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 15 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 10, 57
# 16 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 6, 55
# 17 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 6, 59
# 18 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 4, 53
# 19 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 10, 4, 57
# 20 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 6, 51
# 21 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 27 "data/maps/AstralisAcademy/scripts.pory"
	addobject 21
# 28 "data/maps/AstralisAcademy/scripts.pory"
	addobject 22
# 29 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 30 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 31 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 32 "data/maps/AstralisAcademy/scripts.pory"
	addobject 2
# 33 "data/maps/AstralisAcademy/scripts.pory"
	addobject 10
# 34 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 35 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 36 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 37 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
	return


trial::
# 41 "data/maps/AstralisAcademy/scripts.pory"
	addobject 3
# 42 "data/maps/AstralisAcademy/scripts.pory"
	addobject 6
# 43 "data/maps/AstralisAcademy/scripts.pory"
	addobject 5
# 44 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/AstralisAcademy/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 47 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 2, 25, 16
# 48 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 3, 24, 17
# 49 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ALISTAIR, 30, 21, 10, 4, DIR_SOUTH
# 50 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 19, 18, 4, DIR_NORTH
# 51 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 22, 17, 19, 4, DIR_NORTH
# 52 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 5, 21, 19
# 53 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_F, 23, 17, 20, 4, DIR_NORTH
# 54 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 19, 20
# 55 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 22, 20, 4, DIR_NORTH
# 56 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 25, 20, 4, DIR_NORTH
# 57 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 26, 22, 21, 4, DIR_NORTH
# 58 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 19, 22, 4, DIR_NORTH
# 59 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 28, 17, 22, 4, DIR_NORTH
# 60 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_NERD, 29, 22, 22, 4, DIR_NORTH
	return


TrialAnnouncement::
# 64 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 65 "data/maps/AstralisAcademy/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 66 "data/maps/AstralisAcademy/scripts.pory"
	addobject 20
# 67 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_0
# 69 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 70 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 71 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_1
# 72 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 73 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 74 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 76 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_1, MSGBOX_AUTOCLOSE
# 77 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 78 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 80 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 81 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 82 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_3
# 85 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_4
# 88 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 89 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 90 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_5
# 91 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 92 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_HG_BUG_CONTEST_PREP
# 93 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 20, 21, 24
# 94 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 95 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_4, MSGBOX_AUTOCLOSE
# 96 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 97 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_6
# 98 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 99 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_7
# 100 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_8
# 101 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 102 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_10
# 103 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 104 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_11
# 105 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 106 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 107 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement_Text_5, MSGBOX_AUTOCLOSE
# 108 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 109 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_12
# 110 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_13
# 111 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 10, 56
# 112 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 10
# 113 "data/maps/AstralisAcademy/scripts.pory"
	release
	return


TrialAnnouncement1::
# 120 "data/maps/AstralisAcademy/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 121 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 122 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 124 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_1, MSGBOX_AUTOCLOSE
# 125 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement_Movement_9
# 126 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 127 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_2, MSGBOX_AUTOCLOSE
# 128 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 129 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_3, MSGBOX_AUTOCLOSE
# 130 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_0
# 131 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 132 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_4, MSGBOX_AUTOCLOSE
# 133 "data/maps/AstralisAcademy/scripts.pory"
	speakername Xylar1
# 134 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 135 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 136 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 137 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 138 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_1
# 140 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 141 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_CONTEST
# 142 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 143 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_6, MSGBOX_AUTOCLOSE
# 144 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 145 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 146 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_7
# 147 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 148 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_7, MSGBOX_AUTOCLOSE
# 149 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 150 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 151 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_3
# 152 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 153 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_3
# 154 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 155 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_4
# 156 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 157 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 20, TrialAnnouncement1_Movement_5
# 159 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 160 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_8, MSGBOX_AUTOCLOSE
# 161 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 162 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 163 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 164 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_10, MSGBOX_AUTOCLOSE
# 165 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 166 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_2
# 167 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 168 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_12, MSGBOX_AUTOCLOSE
# 169 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 170 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_2
# 171 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_13
# 172 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_14, MSGBOX_AUTOCLOSE
# 173 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 174 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 175 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 176 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_8
# 177 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 178 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_15, MSGBOX_AUTOCLOSE
# 179 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 180 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_APPLAUSE
# 181 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement1_Movement_7
# 182 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 183 "data/maps/AstralisAcademy/scripts.pory"
	speakername damien
# 184 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_16, MSGBOX_AUTOCLOSE
# 185 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 21, TrialAnnouncement_Movement_13
# 186 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 187 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_17, MSGBOX_AUTOCLOSE
# 188 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_8
# 189 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 190 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 22, 28, 56
# 191 "data/maps/AstralisAcademy/scripts.pory"
	special RemoveCameraObject
# 192 "data/maps/AstralisAcademy/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 193 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 194 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_AROMA, 24, 6, 53, 4, DIR_EAST
# 195 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 25, 6, 57, 4, DIR_EAST
# 196 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_TENNIS, 26, 4, 55, 4, DIR_EAST
# 197 "data/maps/AstralisAcademy/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 27, 4, 59, 4, DIR_EAST
# 198 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 199 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_2
# 200 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 201 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 202 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 2, TrialAnnouncement_Movement_9
# 203 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 3, TrialAnnouncement_Movement_9
# 204 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 5, TrialAnnouncement_Movement_9
# 205 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, TrialAnnouncement_Movement_9
# 206 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 207 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_9
# 208 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_18, MSGBOX_AUTOCLOSE
# 209 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_11
# 210 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_19, MSGBOX_AUTOCLOSE
# 211 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 212 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_6
# 213 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 214 "data/maps/AstralisAcademy/scripts.pory"
	speakername eliasn
# 215 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_20, MSGBOX_AUTOCLOSE
# 216 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 22, TrialAnnouncement_Movement_2
# 217 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 218 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement1_Movement_9
# 219 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 220 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_10
# 221 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 222 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 223 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_21, MSGBOX_AUTOCLOSE
# 224 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 225 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_23, MSGBOX_AUTOCLOSE
# 226 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement1_Movement_11
# 227 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 228 "data/maps/AstralisAcademy/scripts.pory"
	speakername serena
# 229 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_24, MSGBOX_AUTOCLOSE
# 230 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 231 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_DORMINDOOR1, 4, 7
# 232 "data/maps/AstralisAcademy/scripts.pory"
	initclock 23, 53
# 233 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 11
	return


FracturedMask::
# 241 "data/maps/AstralisAcademy/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 242 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 31
	goto_if_eq FracturedMask_15
FracturedMask_11:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_10
FracturedMask_6:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_eq FracturedMask_5
FracturedMask_4:
# 365 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 366 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 367 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 368 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_7
# 369 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 14, 45
# 370 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_1:
# 243 "data/maps/AstralisAcademy/scripts.pory"
	lockall
# 244 "data/maps/AstralisAcademy/scripts.pory"
	fadenewbgm MUS_DUMMY
# 245 "data/maps/AstralisAcademy/scripts.pory"
	special SpawnCameraObject
# 246 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_0
# 247 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 248 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_1
# 249 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 250 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 251 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 252 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 253 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_0, MSGBOX_AUTOCLOSE
# 254 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_2
# 255 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 256 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 257 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_1, MSGBOX_AUTOCLOSE
# 258 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 259 "data/maps/AstralisAcademy/scripts.pory"
	msgbox TrialAnnouncement1_Text_5, MSGBOX_AUTOCLOSE
# 260 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 261 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_2, MSGBOX_AUTOCLOSE
# 262 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 263 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, TrialAnnouncement_Movement_13
# 264 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq FracturedMask_21
# 268 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_4
# 269 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
FracturedMask_20:
# 271 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 272 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 273 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_3, MSGBOX_AUTOCLOSE
# 274 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 275 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, TrialAnnouncement_Movement_12
# 276 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_13
# 277 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 278 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_5, MSGBOX_AUTOCLOSE
# 279 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_6
# 280 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_7, MSGBOX_AUTOCLOSE
# 281 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 282 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_10
# 283 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_10
# 284 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 285 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 286 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, TrialAnnouncement_Movement_8
# 287 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 288 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_8, MSGBOX_AUTOCLOSE
# 289 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_5
# 290 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 291 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 292 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_9, MSGBOX_AUTOCLOSE
# 293 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_4
# 294 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_10, MSGBOX_AUTOCLOSE
# 295 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 296 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 6, 33, 8
# 297 "data/maps/AstralisAcademy/scripts.pory"
	setobjectxyperm 9, 32, 8
# 298 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 299 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 300 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 301 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_11, MSGBOX_AUTOCLOSE
# 302 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_6
# 303 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 304 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 305 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 306 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 8, TrialAnnouncement_Movement_9
# 307 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 10, FracturedMask_Movement_8
# 308 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 309 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 310 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_12, MSGBOX_AUTOCLOSE
# 311 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_9
# 312 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 313 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_7
# 314 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_VICEGRIP
# 315 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_2
# 316 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 317 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 318 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_14, MSGBOX_AUTOCLOSE
# 319 "data/maps/AstralisAcademy/scripts.pory"
	waitmessage
# 320 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_10
# 321 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 322 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 6, FracturedMask_Movement_11
# 323 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 324 "data/maps/AstralisAcademy/scripts.pory"
	speakername FracturedMask_Text_13
# 325 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_15, MSGBOX_AUTOCLOSE
# 326 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_12
# 327 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 328 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 329 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_16, MSGBOX_AUTOCLOSE
# 330 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_PIN
# 331 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 9, FracturedMask_Movement_13
# 332 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 333 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_14
# 334 "data/maps/AstralisAcademy/scripts.pory"
	waitmovement 0
# 335 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 336 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_17, MSGBOX_AUTOCLOSE
# 337 "data/maps/AstralisAcademy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data/maps/AstralisAcademy/scripts.pory"
	playse SE_M_STRENGTH
# 339 "data/maps/AstralisAcademy/scripts.pory"
	waitse
# 340 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement_Text_3
# 341 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_18, MSGBOX_AUTOCLOSE
# 342 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_19, MSGBOX_AUTOCLOSE
# 343 "data/maps/AstralisAcademy/scripts.pory"
	initclock 14, 43
# 344 "data/maps/AstralisAcademy/scripts.pory"
	resumefakertc
# 345 "data/maps/AstralisAcademy/scripts.pory"
	warpsilent MAP_HEADOFFICE, 7, 8
# 346 "data/maps/AstralisAcademy/scripts.pory"
	setvar ACADEMY_START, 13
	return

FracturedMask_2:
# 349 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 350 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 351 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 352 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 353 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 17
# 354 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_3:
# 357 "data/maps/AstralisAcademy/scripts.pory"
	lock
# 358 "data/maps/AstralisAcademy/scripts.pory"
	speakername TrialAnnouncement1_Text_22
# 359 "data/maps/AstralisAcademy/scripts.pory"
	msgbox FracturedMask_Text_20, MSGBOX_AUTOCLOSE
# 360 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, TrialAnnouncement_Movement_8
# 361 "data/maps/AstralisAcademy/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 0, 32
# 362 "data/maps/AstralisAcademy/scripts.pory"
	release
	return

FracturedMask_5:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 32
	goto_if_gt FracturedMask_7
	goto FracturedMask_4

FracturedMask_7:
# 356 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 35
	goto_if_lt FracturedMask_3
	goto FracturedMask_4

FracturedMask_10:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_12
	goto FracturedMask_6

FracturedMask_12:
# 348 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_2
	goto FracturedMask_6

FracturedMask_15:
# 242 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_gt FracturedMask_17
	goto FracturedMask_11

FracturedMask_17:
# 242 "data/maps/AstralisAcademy/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_lt FracturedMask_1
	goto FracturedMask_11

FracturedMask_21:
# 265 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0xFF, FracturedMask_Movement_3
# 266 "data/maps/AstralisAcademy/scripts.pory"
	applymovement 0x7F, FracturedMask_Movement_3
	goto FracturedMask_20


# 67 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_0:
# 67 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 67 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 67 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 67 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 68 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 71 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_1:
# 71 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 71 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 71 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 71 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 71 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 80 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_2:
# 80 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 82 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_3:
# 82 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 82 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 82 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 82 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 82 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 83 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 84 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_4:
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 85 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 86 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 87 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 90 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_5:
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 90 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_6:
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 97 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_7:
# 99 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 100 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_8:
# 100 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 101 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_9:
# 101 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 102 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_10:
# 102 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 104 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_11:
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

# 109 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_12:
# 109 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 109 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 109 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 109 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement_Movement_13:
# 110 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 130 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_0:
# 130 "data/maps/AstralisAcademy/scripts.pory"
	emote_question_mark
	step_end

# 138 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_1:
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 138 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 139 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_2:
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
	step_end

# 151 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_3:
# 151 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 151 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 151 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 151 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 151 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 155 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_4:
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
# 155 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_5:
# 157 "data/maps/AstralisAcademy/scripts.pory"
	face_right
# 158 "data/maps/AstralisAcademy/scripts.pory"
	emote_happy
	step_end

# 174 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_6:
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 174 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
	step_end

# 181 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_7:
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 181 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
	step_end

# 188 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_8:
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 188 "data/maps/AstralisAcademy/scripts.pory"
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

# 220 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_10:
# 220 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 220 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 220 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 220 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 220 "data/maps/AstralisAcademy/scripts.pory"
	walk_left
# 220 "data/maps/AstralisAcademy/scripts.pory"
	face_down
	step_end

# 226 "data/maps/AstralisAcademy/scripts.pory"
TrialAnnouncement1_Movement_11:
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 226 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 246 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_0:
# 246 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_1:
# 248 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 248 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 254 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_2:
# 254 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 254 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 265 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_3:
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 265 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 265 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 268 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_4:
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 268 "data/maps/AstralisAcademy/scripts.pory"
	walk_right
# 268 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

# 289 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_5:
# 289 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 289 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 302 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_6:
# 302 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 302 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 304 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_7:
# 304 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 304 "data/maps/AstralisAcademy/scripts.pory"
	slide_right
# 304 "data/maps/AstralisAcademy/scripts.pory"
	face_left
	step_end

# 307 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_8:
# 307 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 307 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 307 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 307 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
# 307 "data/maps/AstralisAcademy/scripts.pory"
	slide_left
	step_end

# 311 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_9:
# 311 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 311 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 311 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
# 311 "data/maps/AstralisAcademy/scripts.pory"
	walk_fast_left
	step_end

# 320 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_10:
# 320 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 320 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
# 320 "data/maps/AstralisAcademy/scripts.pory"
	walk_up
	step_end

# 322 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_11:
# 322 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 322 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
	step_end

# 326 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_12:
# 326 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 326 "data/maps/AstralisAcademy/scripts.pory"
	walk_down
# 326 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 326 "data/maps/AstralisAcademy/scripts.pory"
	face_right
	step_end

# 331 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_13:
# 331 "data/maps/AstralisAcademy/scripts.pory"
	face_down
# 331 "data/maps/AstralisAcademy/scripts.pory"
	emote_upset
	step_end

# 333 "data/maps/AstralisAcademy/scripts.pory"
FracturedMask_Movement_14:
# 333 "data/maps/AstralisAcademy/scripts.pory"
	emote_exclamation_mark
# 333 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 333 "data/maps/AstralisAcademy/scripts.pory"
	face_up
# 333 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 333 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 333 "data/maps/AstralisAcademy/scripts.pory"
	face_left
# 333 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 333 "data/maps/AstralisAcademy/scripts.pory"
	delay_16
# 333 "data/maps/AstralisAcademy/scripts.pory"
	face_up
	step_end

TrialAnnouncement_Text_0:
# 74 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hi Xylar!\p"
	.string "The Headmaster is making an\n"
	.string "announcement right now.\p"
	.string "Let's go together.$"

TrialAnnouncement_Text_1:
# 76 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.$"

TrialAnnouncement_Text_2:
# 78 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, don't be shy.$"

TrialAnnouncement_Text_3:
# 94 "data/maps/AstralisAcademy/scripts.pory"
	.string "Alistair$"

TrialAnnouncement_Text_4:
# 95 "data/maps/AstralisAcademy/scripts.pory"
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
# 107 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

TrialAnnouncement1_Text_0:
# 122 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

TrialAnnouncement1_Text_1:
# 124 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

TrialAnnouncement1_Text_2:
# 127 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

TrialAnnouncement1_Text_3:
# 129 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

TrialAnnouncement1_Text_4:
# 132 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

TrialAnnouncement1_Text_5:
# 134 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

TrialAnnouncement1_Text_6:
# 143 "data/maps/AstralisAcademy/scripts.pory"
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
# 148 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

TrialAnnouncement1_Text_8:
# 160 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

TrialAnnouncement1_Text_9:
# 163 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 1$"

TrialAnnouncement1_Text_10:
# 164 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Serena is cheering for him?$"

TrialAnnouncement1_Text_11:
# 167 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 2$"

TrialAnnouncement1_Text_12:
# 168 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

TrialAnnouncement1_Text_13:
# 171 "data/maps/AstralisAcademy/scripts.pory"
	.string "Student 3$"

TrialAnnouncement1_Text_14:
# 172 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

TrialAnnouncement1_Text_15:
# 178 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

TrialAnnouncement1_Text_16:
# 184 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

TrialAnnouncement1_Text_17:
# 187 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

TrialAnnouncement1_Text_18:
# 208 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

TrialAnnouncement1_Text_19:
# 210 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

TrialAnnouncement1_Text_20:
# 215 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

TrialAnnouncement1_Text_21:
# 223 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

TrialAnnouncement1_Text_22:
# 224 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar$"

TrialAnnouncement1_Text_23:
# 225 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't waste words.$"

TrialAnnouncement1_Text_24:
# 229 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's used to\n"
	.string "surviving, not like a student trying to\l"
	.string "prove himself.\p"
	.string "Just what has this guy been through?$"

FracturedMask_Text_0:
# 253 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, You're late.$"

FracturedMask_Text_1:
# 257 "data/maps/AstralisAcademy/scripts.pory"
	.string "(Sigh)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Listen Xylar, punctuality is key to\n"
	.string "success.\p"
	.string "You should know that.$"

FracturedMask_Text_2:
# 261 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Find your seat.$"

FracturedMask_Text_3:
# 273 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So as I was saying.......$"

FracturedMask_Text_4:
# 277 "data/maps/AstralisAcademy/scripts.pory"
	.string "Liam$"

FracturedMask_Text_5:
# 278 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look at this guy. Acts like he's too\n"
	.string "good to talk to us...$"

FracturedMask_Text_6:
# 279 "data/maps/AstralisAcademy/scripts.pory"
	.string "Nerd$"

FracturedMask_Text_7:
# 280 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Bet his family's even more messed\n"
	.string "up.$"

FracturedMask_Text_8:
# 288 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's wrong, emo boy?\p"
	.string "Did Daddy never teach you anything\n"
	.string "about good manners?$"

FracturedMask_Text_9:
# 292 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...What the fuck did you say?$"

FracturedMask_Text_10:
# 294 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You deaf or something?\p"
	.string "I asked whether your dad ever taught\n"
	.string "you any manners.$"

FracturedMask_Text_11:
# 301 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't you dare say anything about my\n"
	.string "dad with that filthy mouth of yours!$"

FracturedMask_Text_12:
# 310 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You know NOTHING!\p"
	.string "NOTHING AT ALL.\p"
	.string "FUCK YOU.$"

FracturedMask_Text_13:
# 317 "data/maps/AstralisAcademy/scripts.pory"
	.string "Prof.Elias$"

FracturedMask_Text_14:
# 318 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, STOP!$"

FracturedMask_Text_15:
# 325 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough.$"

FracturedMask_Text_16:
# 329 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We should call the nurse.\p"
	.string "This boy is badly injured.$"

FracturedMask_Text_17:
# 336 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I.......\p"
	.string "I didn't.......$"

FracturedMask_Text_18:
# 341 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar!!\p"
	.string "Hurry call the nurse.$"

FracturedMask_Text_19:
# 342 "data/maps/AstralisAcademy/scripts.pory"
	.string "Xylar collapsed, throwing the room into\n"
	.string "chaos.\p"
	.string "Gasping for air, he hyperventilated,\n"
	.string "repeating the same words over and\l"
	.string "over:\p"
	.string "I'll kill you all.\p"
	.string "A few hours later...$"

FracturedMask_Text_20:
# 351 "data/maps/AstralisAcademy/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My class is not here.$"

damien::
# 115 "data/maps/AstralisAcademy/scripts.pory"
	.string "Damien$"

damienlose::
# 236 "data/maps/AstralisAcademy/scripts.pory"
	.string "Tch… you just got lucky.$"
