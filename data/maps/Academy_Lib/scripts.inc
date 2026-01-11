Academy_Lib_MapScripts::
# 2 "data/maps/Academy_Lib/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Academy_Lib_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Academy_Lib/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Academy_Lib_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Academy_Lib_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Academy_Lib/scripts.pory"
	map_script_2 VAR_KAEL_CHARCTER, 1, KaelFriendsTableScene
	.2byte 0

Academy_Lib_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Academy_Lib/scripts.pory"
	map_script_2 VAR_KAEL_CHARCTER, 1, KaelFriendsTableScene1
	.2byte 0


KaelFriendsTableScene1::
# 10 "data/maps/Academy_Lib/scripts.pory"
	clearflag FLAG_IRIS_ACADEMY
# 11 "data/maps/Academy_Lib/scripts.pory"
	setobjectxyperm 1, 16, 10
# 12 "data/maps/Academy_Lib/scripts.pory"
	setobjectxyperm 6, 16, 12
# 13 "data/maps/Academy_Lib/scripts.pory"
	setobjectxyperm 7, 13, 18
# 14 "data/maps/Academy_Lib/scripts.pory"
	turnobject 0xFF, DIR_EAST
# 15 "data/maps/Academy_Lib/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 16 "data/maps/Academy_Lib/scripts.pory"
	addobject 1
# 17 "data/maps/Academy_Lib/scripts.pory"
	addobject 6
# 18 "data/maps/Academy_Lib/scripts.pory"
	addobject 7
	return


KaelFriendsTableScene::
# 21 "data/maps/Academy_Lib/scripts.pory"
	lock
# 22 "data/maps/Academy_Lib/scripts.pory"
	initclock 9, 00
# 23 "data/maps/Academy_Lib/scripts.pory"
	pausefakertc
# 24 "data/maps/Academy_Lib/scripts.pory"
	fwdweekday WEEKDAY_MON
# 25 "data/maps/Academy_Lib/scripts.pory"
	setvar VAR_CURRENT_DAY_OF_WEEK, 1
# 26 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_0
# 28 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 29 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_1
# 30 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 31 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_1
# 33 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_2
# 34 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_3
# 35 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 36 "data/maps/Academy_Lib/scripts.pory"
	playse SE_BIKE_HOP
# 37 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_2
# 38 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 39 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_5
# 40 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 41 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 42 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_6
# 43 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 44 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 46 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 47 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_7
# 48 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 49 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_4
# 50 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 51 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_5
# 53 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_5
# 54 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_5
# 55 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_8
# 56 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_9
# 57 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 58 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 59 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_10
# 60 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 61 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_6
# 63 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_7
# 64 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_8
# 65 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 66 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 67 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_3
# 68 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 69 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_12
# 70 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 71 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 72 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_13
# 73 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 74 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_9
# 75 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 76 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_14
# 77 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 78 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_10
# 80 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 81 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_15
# 82 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 83 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_11
# 84 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 85 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_16
# 86 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 87 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_12
# 88 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 89 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_17
# 90 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 91 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 93 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 94 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_18
# 95 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 96 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_13
# 98 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 99 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_19
# 100 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 101 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_14
# 102 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 103 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_15
# 104 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_16
# 105 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 106 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 107 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_20
# 108 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 109 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 110 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_17
# 111 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_17
# 112 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 113 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_21
# 114 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 115 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_18
# 117 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 118 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_22
# 119 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 120 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 121 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_19
# 122 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 123 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_23
# 124 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 125 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_20
# 127 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_2
# 128 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_24
# 129 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 130 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_21
# 131 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 132 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_25
# 133 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 134 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 135 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_26
# 136 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 137 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 138 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_9
# 139 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 140 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_27
# 141 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 142 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_22
# 144 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 145 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_28
# 146 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 147 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 148 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_3
# 149 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 150 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_29
# 151 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 152 "data/maps/Academy_Lib/scripts.pory"
	playse SE_DING_DONG
# 153 "data/maps/Academy_Lib/scripts.pory"
	waitse
# 154 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 155 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_22
# 156 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_22
# 157 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_22
# 158 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_22
# 159 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_30
# 160 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_31
# 161 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 162 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 163 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 164 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 165 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_32
# 166 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 167 "data/maps/Academy_Lib/scripts.pory"
	setvar VAR_KAEL_CHARCTER, 2
# 168 "data/maps/Academy_Lib/scripts.pory"
	release
	return


# 27 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_0:
# 27 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 27 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 27 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 27 "data/maps/Academy_Lib/scripts.pory"
	face_left
# 27 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 27 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 32 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_1:
# 32 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 32 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 32 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 32 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 32 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 37 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_2:
# 37 "data/maps/Academy_Lib/scripts.pory"
	jump_in_place_right
	step_end

# 45 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_3:
# 45 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
	step_end

# 49 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_4:
# 49 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 49 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 49 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 49 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 49 "data/maps/Academy_Lib/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_5:
# 52 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 52 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 62 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_6:
# 62 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 62 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 62 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 62 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 62 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 63 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_7:
# 63 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 63 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 63 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 63 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 63 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 64 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_8:
# 64 "data/maps/Academy_Lib/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_9:
# 74 "data/maps/Academy_Lib/scripts.pory"
	emote_upset
	step_end

# 79 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_10:
# 79 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 79 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 83 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_11:
# 83 "data/maps/Academy_Lib/scripts.pory"
	jump_in_place_down
	step_end

# 87 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_12:
# 87 "data/maps/Academy_Lib/scripts.pory"
	face_up
	step_end

# 97 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_13:
# 97 "data/maps/Academy_Lib/scripts.pory"
	emote_heart
	step_end

# 101 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_14:
# 101 "data/maps/Academy_Lib/scripts.pory"
	shake_horizontal
# 101 "data/maps/Academy_Lib/scripts.pory"
	shake_horizontal
	step_end

# 103 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_15:
# 103 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 103 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 104 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_16:
# 104 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 104 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 110 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_17:
# 110 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 110 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 116 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_18:
# 116 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
# 116 "data/maps/Academy_Lib/scripts.pory"
	face_up
	step_end

# 121 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_19:
# 121 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
# 121 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 126 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_20:
# 126 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
	step_end

# 130 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_21:
# 130 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 143 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_22:
# 143 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
	step_end

KaelFriendsTableScene_Text_0:
# 28 "data/maps/Academy_Lib/scripts.pory"
	.string "Friend 1$"

KaelFriendsTableScene_Text_1:
# 29 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dude, I heard they're doing battle\n"
	.string "assessments today.\p"
	.string "I'm so nervous.$"

KaelFriendsTableScene_Text_2:
# 33 "data/maps/Academy_Lib/scripts.pory"
	.string "Friend 2$"

KaelFriendsTableScene_Text_3:
# 34 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Same. My Pokémon barely listens to me\n"
	.string "yet.$"

KaelFriendsTableScene_Text_4:
# 38 "data/maps/Academy_Lib/scripts.pory"
	.string "Kael$"

KaelFriendsTableScene_Text_5:
# 39 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll be fine! Just believe in your\n"
	.string "partner.\p"
	.string "That's what matters, right?$"

KaelFriendsTableScene_Text_6:
# 42 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Easy for you to say.\p"
	.string "You passed the entrance exam with\n"
	.string "decent scores.$"

KaelFriendsTableScene_Text_7:
# 47 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Barely! I got lucky.$"

KaelFriendsTableScene_Text_8:
# 55 "data/maps/Academy_Lib/scripts.pory"
	.string "???$"

KaelFriendsTableScene_Text_9:
# 56 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Mind if I sit here?\p"
	.string "Everywhere else is packed.$"

KaelFriendsTableScene_Text_10:
# 59 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! Uh, yeah! I mean, no!\p"
	.string "I mean...yes, please sit!$"

KaelFriendsTableScene_Text_11:
# 68 "data/maps/Academy_Lib/scripts.pory"
	.string "Iris$"

KaelFriendsTableScene_Text_12:
# 69 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Thanks.\p"
	.string "I'm Iris.\p"
	.string "I think we're in the same Battle Theory\n"
	.string "class?$"

KaelFriendsTableScene_Text_13:
# 72 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_BLUSH}{COLOR BLUE}{SHADOW LIGHT_GRAY}Y-yeah! I'm Kael.\p"
	.string "These are...{PAUSE} uh.{PAUSE_UNTIL_PRESS}.. my friends!$"

KaelFriendsTableScene_Text_14:
# 76 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Smooth.$"

KaelFriendsTableScene_Text_15:
# 81 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Nice to meet you all.\p"
	.string "Excited for the battle assessments?$"

KaelFriendsTableScene_Text_16:
# 85 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Totally! I mean, a little nervous, but\n"
	.string "that's normal, right?$"

KaelFriendsTableScene_Text_17:
# 89 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Definitely.\p"
	.string "I'm more worried about my partner. She's\n"
	.string "an Oddish.\p"
	.string "Not exactly built for intense battles.$"

KaelFriendsTableScene_Text_18:
# 94 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's okay! It's about the bond, not\n"
	.string "just strength.$"

KaelFriendsTableScene_Text_19:
# 99 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I like that perspective.$"

KaelFriendsTableScene_Text_20:
# 107 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Speaking of battles...{PAUSE_UNTIL_PRESS}did you guys hear\n"
	.string "about the mysterious student?\p"
	.string "Apparently didn't take the entrance\n"
	.string "exam but got in anyway.$"

KaelFriendsTableScene_Text_21:
# 113 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! That's my roommate!$"

KaelFriendsTableScene_Text_22:
# 118 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_QUESTION}{COLOR RED}{SHADOW LIGHT_GRAY}Really? What's he like?$"

KaelFriendsTableScene_Text_23:
# 123 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh... quiet. Very quiet.\p"
	.string "And kinda... intense?$"

KaelFriendsTableScene_Text_24:
# 128 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Intense how?$"

KaelFriendsTableScene_Text_25:
# 132 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't know.\p"
	.string "He just... doesn't talk much. Keeps to\n"
	.string "himself.$"

KaelFriendsTableScene_Text_26:
# 135 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Maybe he's shy?$"

KaelFriendsTableScene_Text_27:
# 140 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Or maybe he's just a jerk who thinks\n"
	.string "he's too good for everyone.$"

KaelFriendsTableScene_Text_28:
# 145 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}He's not a jerk! He's just... adjusting. I\n"
	.string "think.$"

KaelFriendsTableScene_Text_29:
# 150 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Give him time.\p"
	.string "First days are hard for everyone.$"

KaelFriendsTableScene_Text_30:
# 159 "data/maps/Academy_Lib/scripts.pory"
	.string "Announcement$"

KaelFriendsTableScene_Text_31:
# 160 "data/maps/Academy_Lib/scripts.pory"
	.string "All first years report to the Dojo for\n"
	.string "battle assessments.\p"
	.string "Repeat.\p"
	.string "All first years to the Dojo.$"

KaelFriendsTableScene_Text_32:
# 165 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's us! Let's go!$"
