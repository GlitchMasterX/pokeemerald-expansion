AstralisAcademy_Classroom_MapScripts::
# 2 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script_2 ACADEMY_START, 9, trial2
	.2byte 0


trial2::
# 8 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 9 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 3, 2, 8
# 10 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 5, 4, 9
# 11 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 12 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 13 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 3
# 14 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 4
# 15 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 5
# 16 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 24, 4, 7, 3, DIR_EAST
# 17 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FIONA_1, 25, 2, 5, 3, DIR_EAST
# 18 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GIRL_1, 26, 19, 10, 3, DIR_WEST
# 19 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GAMEBOY_KID, 23, 19, 8, 3, DIR_WEST
	return


Trialbattle::
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_0
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_1
# 25 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 26 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	facefollowernpc
# 27 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 28 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_2
# 29 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 30 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	closemessage
# 32 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_3
# 33 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_3
# 34 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 35 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	special SpawnCameraObject
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0x7F, Trialbattle_Movement_4
# 37 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 38 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	fadenewbgm MUS_CONTEST
# 39 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 1, Trialbattle_Movement_5
# 40 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername eliasn
# 41 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_2, MSGBOX_AUTOCLOSE
# 42 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 43 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 1, Trialbattle_Movement_6
# 44 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername eliasn
# 45 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_3
# 46 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitbuttonpress
# 47 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	closemessage
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0x7F, Trialbattle_Movement_7
# 49 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 50 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 51 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 52 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_2
# 53 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 54 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_4
# 55 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Xylar1
# 56 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_5
# 57 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 58 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_8
# 59 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 60 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_6
# 61 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 62 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	closemessage
# 63 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_9
# 64 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Xylar1
# 65 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_7, MSGBOX_AUTOCLOSE
# 66 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 67 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_10
# 68 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 69 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_8, MSGBOX_AUTOCLOSE
# 70 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Xylar1
# 71 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_9, MSGBOX_AUTOCLOSE
# 72 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_11
# 73 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 74 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 75 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_12
# 76 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 77 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_10, MSGBOX_AUTOCLOSE
# 78 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 79 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 80 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 3, Trialbattle_Movement_8
# 81 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_11
# 82 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_12, MSGBOX_AUTOCLOSE
# 83 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 84 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 85 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 5, Trialbattle_Movement_13
# 86 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_13
# 87 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_14, MSGBOX_AUTOCLOSE
# 88 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 89 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 90 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 4, Trialbattle_Movement_13
# 91 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_15
# 92 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_16, MSGBOX_AUTOCLOSE
# 93 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0x7F, Trialbattle_Movement_14
# 95 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 96 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 1, Trialbattle_Movement_15
# 97 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername eliasn
# 98 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_17, MSGBOX_AUTOCLOSE
# 99 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 100 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_APPLAUSE
# 101 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 2
# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 2, Trialbattle_Movement_16
# 103 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 104 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername damien
# 105 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_18, MSGBOX_AUTOCLOSE
# 106 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 1, Trialbattle_Movement_5
# 107 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername eliasn
# 108 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_19, MSGBOX_AUTOCLOSE
# 109 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 2, 16, 9
# 111 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	trainerbattle_no_intro DAMIEN_VOSS, damienlose
# 112 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	special SpawnCameraObject
# 113 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	fadenewbgm MUS_DUMMY
# 114 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SELENE, 24, 4, 7, 3, DIR_EAST
# 115 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FIONA_1, 25, 2, 5, 3, DIR_EAST
# 116 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GIRL_1, 26, 19, 10, 3, DIR_WEST
# 117 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GAMEBOY_KID, 23, 19, 8, 3, DIR_WEST
# 118 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername eliasn
# 119 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_20, MSGBOX_AUTOCLOSE
# 120 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 121 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 2, Trialbattle_Movement_13
# 122 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 123 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0x7F, Trialbattle_Movement_7
# 124 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 125 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 126 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 3, Trialbattle_Movement_8
# 127 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 4, Trialbattle_Movement_8
# 128 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 5, Trialbattle_Movement_8
# 129 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_8
# 130 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 131 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_11
# 132 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_21, MSGBOX_AUTOCLOSE
# 133 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_13
# 134 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_22, MSGBOX_AUTOCLOSE
# 135 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmessage
# 136 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_17
# 137 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_18
# 138 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 139 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 140 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_23, MSGBOX_AUTOCLOSE
# 141 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_24
# 142 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_25
# 143 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	closemessage
# 144 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	playse SE_PIN
# 145 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFD, Trialbattle_Movement_19
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	applymovement 0xFF, Trialbattle_Movement_20
# 147 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	waitmovement 0
# 148 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	speakername Trialbattle_Text_0
# 149 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	msgbox Trialbattle_Text_26
# 150 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	closemessage
# 151 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	resumefakertc
# 152 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HALLWAY, 2, 36
# 153 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	destroyfollowernpc
# 154 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	initclock 13, 53
# 155 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 156 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setvar ACADEMY_START, 10
	return


# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_0:
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
	step_end

# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_1:
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_up
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_left
	step_end

# 28 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_2:
# 28 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_up
# 28 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_happy
	step_end

# 32 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_3:
# 32 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 32 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_right
	step_end

# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_4:
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 36 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
	step_end

# 39 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_5:
# 39 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_down
	step_end

# 43 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_6:
# 43 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_left
	step_end

# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_7:
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 48 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_8:
# 58 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_9:
# 63 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_10:
# 67 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_question_mark
	step_end

# 72 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_11:
# 72 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 72 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_12:
# 75 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_right
# 75 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_happy
	step_end

# 85 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_13:
# 85 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_upset
	step_end

# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_14:
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 94 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_15:
# 96 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_right
	step_end

# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_16:
# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 102 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
	step_end

# 136 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_17:
# 136 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 136 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_left
# 136 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_down
	step_end

# 137 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_18:
# 137 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 137 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_up
	step_end

# 145 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_19:
# 145 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	emote_exclamation_mark
# 145 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_right
# 145 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	face_down
	step_end

# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
Trialbattle_Movement_20:
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_right
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
# 146 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	walk_down
	step_end

Trialbattle_Text_0:
# 29 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Leaf$"

Trialbattle_Text_1:
# 30 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Lucky... The first row is empty.\p"
	.string "Let's sit here.$"

Trialbattle_Text_2:
# 41 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Attention, all first-year students...\p"
	.string "The time has come to prove your\n"
	.string "potential.\p"
	.string "In the spirit of growth and mastery,\n"
	.string "each of you will engage in a one-on-one\l"
	.string "Pokémon battle.\p"
	.string "This will serve as your first trial.\p"
	.string "Let us begin by calling forth the first\n"
	.string "two challengers.$"

Trialbattle_Text_3:
# 45 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our first challenger,\p"
	.string "Xylar, step forward.\p"
	.string "Show us the strength that brought you\n"
	.string "to this academy.$"

Trialbattle_Text_4:
# 54 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Guess that means you're battling.\p"
	.string "Feeling nervous?$"

Trialbattle_Text_5:
# 56 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care.$"

Trialbattle_Text_6:
# 60 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You sure? This is your chance to show\n"
	.string "everyone what you're made of.$"

Trialbattle_Text_7:
# 65 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here for their approval.$"

Trialbattle_Text_8:
# 69 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_QUESTION}{COLOR RED}{SHADOW LIGHT_GRAY}Then why are you here?$"

Trialbattle_Text_9:
# 71 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}....$"

Trialbattle_Text_10:
# 77 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylaaar!, You can do it.$"

Trialbattle_Text_11:
# 81 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Student 1$"

Trialbattle_Text_12:
# 82 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the..\p"
	.string "Leaf is cheering for him?$"

Trialbattle_Text_13:
# 86 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Student 2$"

Trialbattle_Text_14:
# 87 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That lucky bastard.$"

Trialbattle_Text_15:
# 91 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Student 3$"

Trialbattle_Text_16:
# 92 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm so jealous of him.$"

Trialbattle_Text_17:
# 98 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And now, for our second challenger...\p"
	.string "Damien Voss, who earned the title of\n"
	.string "the strongest first-year through an\l"
	.string "exceptional performance in the\l"
	.string "entrance exam.$"

Trialbattle_Text_18:
# 105 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_DAMIEN}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Hah, so I'm up against you?\p"
	.string "The mystery student everyone's\n"
	.string "whispering about?\p"
	.string "Too bad. I was hoping for a real\n"
	.string "challenge.$"

Trialbattle_Text_19:
# 108 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY} Let this battle begin!$"

Trialbattle_Text_20:
# 119 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And that concludes the match!\p"
	.string "A well fought battle congratulations to\n"
	.string "the winner!$"

Trialbattle_Text_21:
# 132 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That was… precise.$"

Trialbattle_Text_22:
# 134 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He barely gave any commands… how did he\n"
	.string "do that?$"

Trialbattle_Text_23:
# 140 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}That was kinda impressive.\p"
	.string "But you barely spoke to your Torchic.\p"
	.string "No encouragement, no strategy\n"
	.string "discussion. What's the deal?$"

Trialbattle_Text_24:
# 141 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Xylar$"

Trialbattle_Text_25:
# 142 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't matter as long as I win.$"

Trialbattle_Text_26:
# 149 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}He fights like someone who's surviving,\n"
	.string "not like a student trying to prove\l"
	.string "himself.$"

damienlose::
# 159 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	.string "Tch… you just got lucky.$"
