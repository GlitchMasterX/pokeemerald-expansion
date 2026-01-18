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
	fwdweekday 1
# 23 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 24 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_0
# 25 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 26 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_1
# 27 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 28 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 29 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_1
# 30 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_2
# 31 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_3
# 32 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 33 "data/maps/Academy_Lib/scripts.pory"
	playse SE_BIKE_HOP
# 34 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_2
# 35 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 36 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_5
# 37 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 38 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 39 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_6
# 40 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 41 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 43 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 44 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_7
# 45 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 46 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_4
# 47 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 48 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 49 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_5
# 50 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_5
# 51 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_5
# 52 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_8
# 53 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_9
# 54 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 55 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 56 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_10
# 57 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 58 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_6
# 60 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_7
# 61 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_8
# 62 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 63 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_3
# 65 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 66 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_12
# 67 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 68 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 69 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_13
# 70 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 71 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_9
# 72 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 73 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_14
# 74 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 75 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 76 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_10
# 77 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 78 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_15
# 79 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 80 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_11
# 81 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 82 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_16
# 83 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 84 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_12
# 85 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 86 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_17
# 87 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 88 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 90 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 91 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_18
# 92 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 93 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 94 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_13
# 95 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 96 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_19
# 97 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 98 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_14
# 99 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 100 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_15
# 101 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_16
# 102 "data/maps/Academy_Lib/scripts.pory"
	waitmovement 0
# 103 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 104 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_20
# 105 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 106 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 107 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_17
# 108 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_17
# 109 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 110 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_21
# 111 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 112 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_18
# 114 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 115 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_22
# 116 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 117 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 118 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_19
# 119 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 120 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_23
# 121 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 122 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 123 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_20
# 124 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_2
# 125 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_24
# 126 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 127 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_21
# 128 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 129 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_25
# 130 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 131 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 132 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_26
# 133 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 134 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 135 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_9
# 136 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_0
# 137 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_27
# 138 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 139 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 140 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_22
# 141 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 142 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_28
# 143 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 144 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 145 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_3
# 146 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_11
# 147 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_29
# 148 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 149 "data/maps/Academy_Lib/scripts.pory"
	playse SE_DING_DONG
# 150 "data/maps/Academy_Lib/scripts.pory"
	waitse
# 151 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_22
# 153 "data/maps/Academy_Lib/scripts.pory"
	applymovement 1, KaelFriendsTableScene_Movement_22
# 154 "data/maps/Academy_Lib/scripts.pory"
	applymovement 6, KaelFriendsTableScene_Movement_22
# 155 "data/maps/Academy_Lib/scripts.pory"
	applymovement 7, KaelFriendsTableScene_Movement_22
# 156 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_30
# 157 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_31
# 158 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 159 "data/maps/Academy_Lib/scripts.pory"
	playse SE_PIN
# 160 "data/maps/Academy_Lib/scripts.pory"
	applymovement 0xFF, KaelFriendsTableScene_Movement_3
# 161 "data/maps/Academy_Lib/scripts.pory"
	speakername KaelFriendsTableScene_Text_4
# 162 "data/maps/Academy_Lib/scripts.pory"
	msgbox KaelFriendsTableScene_Text_32
# 163 "data/maps/Academy_Lib/scripts.pory"
	closemessage
# 164 "data/maps/Academy_Lib/scripts.pory"
	setvar VAR_KAEL_CHARCTER, 2
# 165 "data/maps/Academy_Lib/scripts.pory"
	release
	return


# 24 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_0:
# 24 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 24 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 24 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 24 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 24 "data/maps/Academy_Lib/scripts.pory"
	face_left
# 24 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 24 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 29 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_1:
# 29 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 29 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 29 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 29 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 29 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 34 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_2:
# 34 "data/maps/Academy_Lib/scripts.pory"
	jump_in_place_right
	step_end

# 42 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_3:
# 42 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
	step_end

# 46 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_4:
# 46 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 46 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 46 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 46 "data/maps/Academy_Lib/scripts.pory"
	walk_up
# 46 "data/maps/Academy_Lib/scripts.pory"
	walk_up
	step_end

# 49 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_5:
# 49 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 59 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_6:
# 59 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 59 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 59 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 59 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 59 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 60 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_7:
# 60 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 60 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 60 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 60 "data/maps/Academy_Lib/scripts.pory"
	delay_16
# 60 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 61 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_8:
# 61 "data/maps/Academy_Lib/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_9:
# 71 "data/maps/Academy_Lib/scripts.pory"
	emote_upset
	step_end

# 76 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_10:
# 76 "data/maps/Academy_Lib/scripts.pory"
	emote_happy
# 76 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 80 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_11:
# 80 "data/maps/Academy_Lib/scripts.pory"
	jump_in_place_down
	step_end

# 84 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_12:
# 84 "data/maps/Academy_Lib/scripts.pory"
	face_up
	step_end

# 94 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_13:
# 94 "data/maps/Academy_Lib/scripts.pory"
	emote_heart
	step_end

# 98 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_14:
# 98 "data/maps/Academy_Lib/scripts.pory"
	shake_horizontal
# 98 "data/maps/Academy_Lib/scripts.pory"
	shake_horizontal
	step_end

# 100 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_15:
# 100 "data/maps/Academy_Lib/scripts.pory"
	face_down
# 100 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 101 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_16:
# 101 "data/maps/Academy_Lib/scripts.pory"
	face_up
# 101 "data/maps/Academy_Lib/scripts.pory"
	face_left
	step_end

# 107 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_17:
# 107 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
# 107 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 113 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_18:
# 113 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
# 113 "data/maps/Academy_Lib/scripts.pory"
	face_up
	step_end

# 118 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_19:
# 118 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
# 118 "data/maps/Academy_Lib/scripts.pory"
	face_down
	step_end

# 123 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_20:
# 123 "data/maps/Academy_Lib/scripts.pory"
	emote_question_mark
	step_end

# 127 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_21:
# 127 "data/maps/Academy_Lib/scripts.pory"
	face_right
	step_end

# 140 "data/maps/Academy_Lib/scripts.pory"
KaelFriendsTableScene_Movement_22:
# 140 "data/maps/Academy_Lib/scripts.pory"
	emote_exclamation_mark
	step_end

KaelFriendsTableScene_Text_0:
# 25 "data/maps/Academy_Lib/scripts.pory"
	.string "Friend 1$"

KaelFriendsTableScene_Text_1:
# 26 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dude, I heard they're doing battle\n"
	.string "assessments today.\p"
	.string "I'm so nervous.$"

KaelFriendsTableScene_Text_2:
# 30 "data/maps/Academy_Lib/scripts.pory"
	.string "Friend 2$"

KaelFriendsTableScene_Text_3:
# 31 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Same. My Pokémon barely listens to me\n"
	.string "yet.$"

KaelFriendsTableScene_Text_4:
# 35 "data/maps/Academy_Lib/scripts.pory"
	.string "Kael$"

KaelFriendsTableScene_Text_5:
# 36 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You'll be fine! Just believe in your\n"
	.string "partner.\p"
	.string "That's what matters, right?$"

KaelFriendsTableScene_Text_6:
# 39 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Easy for you to say.\p"
	.string "You passed the entrance exam with\n"
	.string "decent scores.$"

KaelFriendsTableScene_Text_7:
# 44 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Barely! I got lucky.$"

KaelFriendsTableScene_Text_8:
# 52 "data/maps/Academy_Lib/scripts.pory"
	.string "???$"

KaelFriendsTableScene_Text_9:
# 53 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Mind if I sit here?\p"
	.string "Everywhere else is packed.$"

KaelFriendsTableScene_Text_10:
# 56 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! Uh, yeah! I mean, no!\p"
	.string "I mean...yes, please sit!$"

KaelFriendsTableScene_Text_11:
# 65 "data/maps/Academy_Lib/scripts.pory"
	.string "Iris$"

KaelFriendsTableScene_Text_12:
# 66 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Thanks.\p"
	.string "I'm Iris.\p"
	.string "I think we're in the same Battle Theory\n"
	.string "class?$"

KaelFriendsTableScene_Text_13:
# 69 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_BLUSH}{COLOR BLUE}{SHADOW LIGHT_GRAY}Y-yeah! I'm Kael.\p"
	.string "These are...{PAUSE} uh.{PAUSE_UNTIL_PRESS}.. my friends!$"

KaelFriendsTableScene_Text_14:
# 73 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Smooth.$"

KaelFriendsTableScene_Text_15:
# 78 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Nice to meet you all.\p"
	.string "Excited for the battle assessments?$"

KaelFriendsTableScene_Text_16:
# 82 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Totally! I mean, a little nervous, but\n"
	.string "that's normal, right?$"

KaelFriendsTableScene_Text_17:
# 86 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Definitely.\p"
	.string "I'm more worried about my partner. She's\n"
	.string "an Oddish.\p"
	.string "Not exactly built for intense battles.$"

KaelFriendsTableScene_Text_18:
# 91 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's okay! It's about the bond, not\n"
	.string "just strength.$"

KaelFriendsTableScene_Text_19:
# 96 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}I like that perspective.$"

KaelFriendsTableScene_Text_20:
# 104 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Speaking of battles...{PAUSE_UNTIL_PRESS}did you guys hear\n"
	.string "about the mysterious student?\p"
	.string "Apparently didn't take the entrance\n"
	.string "exam but got in anyway.$"

KaelFriendsTableScene_Text_21:
# 110 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh! That's my roommate!$"

KaelFriendsTableScene_Text_22:
# 115 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_QUESTION}{COLOR RED}{SHADOW LIGHT_GRAY}Really? What's he like?$"

KaelFriendsTableScene_Text_23:
# 120 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Uh... quiet. Very quiet.\p"
	.string "And kinda... intense?$"

KaelFriendsTableScene_Text_24:
# 125 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Intense how?$"

KaelFriendsTableScene_Text_25:
# 129 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't know.\p"
	.string "He just... doesn't talk much. Keeps to\n"
	.string "himself.$"

KaelFriendsTableScene_Text_26:
# 132 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Maybe he's shy?$"

KaelFriendsTableScene_Text_27:
# 137 "data/maps/Academy_Lib/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Or maybe he's just a jerk who thinks\n"
	.string "he's too good for everyone.$"

KaelFriendsTableScene_Text_28:
# 142 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}He's not a jerk! He's just... adjusting. I\n"
	.string "think.$"

KaelFriendsTableScene_Text_29:
# 147 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_IRIS}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Give him time.\p"
	.string "First days are hard for everyone.$"

KaelFriendsTableScene_Text_30:
# 156 "data/maps/Academy_Lib/scripts.pory"
	.string "Announcement$"

KaelFriendsTableScene_Text_31:
# 157 "data/maps/Academy_Lib/scripts.pory"
	.string "All first years report to the Dojo for\n"
	.string "battle assessments.\p"
	.string "Repeat.\p"
	.string "All first years to the Dojo.$"

KaelFriendsTableScene_Text_32:
# 162 "data/maps/Academy_Lib/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's us! Let's go!$"
