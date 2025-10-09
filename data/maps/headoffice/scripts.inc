headoffice_MapScripts::
# 7 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HEADMET1
# 2 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, HEADMET
# 4 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 12, HEADMET2
	.2byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, Head
# 10 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 12, FracturedMask1
	.2byte 0


HEADMET1::
# 15 "data/maps/headoffice/scripts.pory"
	compare ACADEMY_START, 4
	goto_if_eq HEADMET1_1
	return

HEADMET1_1:
# 16 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 17 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET::
# 22 "data/maps/headoffice/scripts.pory"
	addobject 1
# 23 "data/maps/headoffice/scripts.pory"
	setobjectxy 1, 7, 9
# 24 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 25 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET2::
# 28 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
	return


Head::
# 33 "data/maps/headoffice/scripts.pory"
	lock
# 34 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 35 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 36 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_0
# 38 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 39 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_1
# 41 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 42 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_2
# 44 "data/maps/headoffice/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 45 "data/maps/headoffice/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 46 "data/maps/headoffice/scripts.pory"
	waitmoncry
# 47 "data/maps/headoffice/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
# 48 "data/maps/headoffice/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 49 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 50 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_3
# 51 "data/maps/headoffice/scripts.pory"
	hidemonpic
# 52 "data/maps/headoffice/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 53 "data/maps/headoffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Head_1
# 57 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 58 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 59 "data/maps/headoffice/scripts.pory"
	goto Head1
	return

Head_1:
# 54 "data/maps/headoffice/scripts.pory"
	goto Head1
	return


girlsdorm::
# 64 "data/maps/headoffice/scripts.pory"
	lock
# 65 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 66 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 67 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 68 "data/maps/headoffice/scripts.pory"
	msgbox girlsdorm_Text_0
# 69 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 70 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 71 "data/maps/headoffice/scripts.pory"
	release
	return


Head1::
# 75 "data/maps/headoffice/scripts.pory"
	lock
# 76 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 77 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 78 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_0
# 80 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 81 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_1
# 82 "data/maps/headoffice/scripts.pory"
	initclock 10, 30
# 83 "data/maps/headoffice/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 85 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 5
# 86 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 12, 1
	return


Leafmet1::
# 90 "data/maps/headoffice/scripts.pory"
	lockall
# 91 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 92 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 93 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 94 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 95 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_1
# 96 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 97 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 98 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 99 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 100 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 101 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_2
# 102 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 103 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_3
# 104 "data/maps/headoffice/scripts.pory"
	waitmessage
# 105 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 106 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 107 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_4
# 108 "data/maps/headoffice/scripts.pory"
	waitmessage
# 109 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 110 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 111 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, mov1
# 112 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 113 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_5
# 114 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 115 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_6
# 116 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 117 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_7
# 118 "data/maps/headoffice/scripts.pory"
	closemessage
# 119 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 120 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_8
# 121 "data/maps/headoffice/scripts.pory"
	closemessage
# 122 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 123 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_9
# 124 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 125 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 126 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 127 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_10, MSGBOX_AUTOCLOSE
# 128 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 129 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_11
# 130 "data/maps/headoffice/scripts.pory"
	closemessage
# 131 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 132 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 133 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 134 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_12, MSGBOX_AUTOCLOSE
# 135 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 136 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 137 "data/maps/headoffice/scripts.pory"
	closemessage
# 138 "data/maps/headoffice/scripts.pory"
	waitse
# 139 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 140 "data/maps/headoffice/scripts.pory"
	setfollowernpc 1, FNPC_LEAVE_ROUTE, serenafollow
# 141 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAF_FOLLOW
# 142 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 143 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 6
# 144 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 148 "data/maps/headoffice/scripts.pory"
	lock
# 149 "data/maps/headoffice/scripts.pory"
	facefollowernpc
# 150 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 151 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 152 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 153 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_11
# 155 "data/maps/headoffice/scripts.pory"
	release
	return


# 157 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 158 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 160 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 161 "data/maps/headoffice/scripts.pory"
	walk_right
# 162 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 163 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 165 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 166 "data/maps/headoffice/scripts.pory"
	walk_down
# 166 "data/maps/headoffice/scripts.pory"
	walk_down
# 166 "data/maps/headoffice/scripts.pory"
	walk_down
# 166 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 169 "data/maps/headoffice/scripts.pory"
	walk_down
# 169 "data/maps/headoffice/scripts.pory"
	walk_down
# 169 "data/maps/headoffice/scripts.pory"
	walk_down
# 170 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

serenaextend::
# 174 "data/maps/headoffice/scripts.pory"
	lock
# 175 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov5
# 176 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov6
# 177 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 178 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 179 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, backes
# 180 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 181 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 184 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_1, MSGBOX_AUTOCLOSE
# 186 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 187 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_2, MSGBOX_AUTOCLOSE
# 189 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 190 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3
# 192 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 193 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_4, MSGBOX_AUTOCLOSE
# 195 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 196 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3, MSGBOX_AUTOCLOSE
# 198 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 199 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 200 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 201 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 202 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_5, MSGBOX_AUTOCLOSE
# 204 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 205 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 206 "data/maps/headoffice/scripts.pory"
	destroyfollowernpc
# 207 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAFMET
# 208 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 7
# 209 "data/maps/headoffice/scripts.pory"
	release
	return


serenaextend1::
# 213 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, MOVE2
# 214 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, MOVE2
# 215 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 216 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


serenaextend2::
# 219 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 220 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, strrp
# 221 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 222 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


# 224 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
# 225 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 229 "data/maps/headoffice/scripts.pory"
	walk_left
# 230 "data/maps/headoffice/scripts.pory"
	walk_down
# 230 "data/maps/headoffice/scripts.pory"
	walk_down
# 230 "data/maps/headoffice/scripts.pory"
	walk_down
# 230 "data/maps/headoffice/scripts.pory"
	walk_down
# 230 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 233 "data/maps/headoffice/scripts.pory"
	delay_16
# 234 "data/maps/headoffice/scripts.pory"
	walk_down
# 234 "data/maps/headoffice/scripts.pory"
	walk_down
# 234 "data/maps/headoffice/scripts.pory"
	walk_down
# 234 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

FracturedMask1::
# 238 "data/maps/headoffice/scripts.pory"
	lock
# 239 "data/maps/headoffice/scripts.pory"
	fadenewbgm MUS_DUMMY
# 240 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 241 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_1, MSGBOX_AUTOCLOSE
# 242 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 243 "data/maps/headoffice/scripts.pory"
	applymovement 1, FracturedMask1_Movement_0
# 244 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 245 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_2, MSGBOX_AUTOCLOSE
# 246 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 247 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, FracturedMask1_Movement_1
# 248 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 249 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_4, MSGBOX_AUTOCLOSE
# 250 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 251 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_5, MSGBOX_AUTOCLOSE
# 252 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 253 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_6, MSGBOX_AUTOCLOSE
# 254 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 255 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_7, MSGBOX_AUTOCLOSE
# 256 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 257 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, FracturedMask1_Movement_1
# 258 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 259 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_8, MSGBOX_AUTOCLOSE
# 260 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, FracturedMask1_Movement_2
# 261 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 262 "data/maps/headoffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_9, MSGBOX_AUTOCLOSE
# 264 "data/maps/headoffice/scripts.pory"
	setflag FLAG_AFTER_OUTBURST
# 265 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 12, 2
# 266 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 13
# 267 "data/maps/headoffice/scripts.pory"
	releaseall
	return


# 243 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_0:
# 243 "data/maps/headoffice/scripts.pory"
	emote_question_mark
	step_end

# 247 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_1:
# 247 "data/maps/headoffice/scripts.pory"
	emote_upset
	step_end

# 260 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_2:
# 260 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 260 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 260 "data/maps/headoffice/scripts.pory"
	walk_fast_down
	step_end

Head_Text_0:
# 36 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, I trust your journey here was\n"
	.string "uneventful.\p"
	.string "I understand this is all new for you,\n"
	.string "but it's time to start fresh.$"

Head_Text_1:
# 39 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Head_Text_2:
# 42 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We have a tradition of giving every\n"
	.string "first year a starter pokemon of their\l"
	.string "choice on the first day.\p"
	.string "But since you arrived late there's only\n"
	.string "one left.\p"
	.string "Here you go.$"

Head_Text_3:
# 50 "data/maps/headoffice/scripts.pory"
	.string "Xylar recieved {STR_VAR_1}.$"

girlsdorm_Text_0:
# 68 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This way leads to the girl's dorm.\p"
	.string "Boys are not allowed there.$"

Head1_Text_0:
# 78 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is it? I thought I was supposed to\n"
	.string "grow stronger, not babysit a chicken.$"

Head1_Text_1:
# 81 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't always obvious at first\n"
	.string "glance.\p"
	.string "Give it time.\n"
	.string "Torchic may surprise you.$"

Leafmet1_Text_0:
# 94 "data/maps/headoffice/scripts.pory"
	.string "Leaf$"

Leafmet1_Text_1:
# 95 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Leaf, your assigned mentor.\p"
	.string "Lucky you, right?$"

Leafmet1_Text_2:
# 101 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

Leafmet1_Text_3:
# 103 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

Leafmet1_Text_4:
# 107 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

Leafmet1_Text_5:
# 113 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.\p"
	.string "Look, I don't care if you think you don't\n"
	.string "need help.\p"
	.string "I'm here to make sure you don't blow\n"
	.string "something up.$"

Leafmet1_Text_6:
# 115 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

Leafmet1_Text_7:
# 117 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

Leafmet1_Text_8:
# 120 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

Leafmet1_Text_9:
# 123 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

Leafmet1_Text_10:
# 127 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

Leafmet1_Text_11:
# 129 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

Leafmet1_Text_12:
# 134 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

Leafmet1_Text_13:
# 136 "data/maps/headoffice/scripts.pory"
	.string "Leaf decided to join you!$"

serenaextend_Text_0:
# 181 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

serenaextend_Text_1:
# 184 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

serenaextend_Text_2:
# 187 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

serenaextend_Text_3:
# 190 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...................$"

serenaextend_Text_4:
# 193 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

serenaextend_Text_5:
# 202 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

FracturedMask1_Text_0:
# 240 "data/maps/headoffice/scripts.pory"
	.string "Alistair$"

FracturedMask1_Text_1:
# 241 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, expulsion is on the table.\p"
	.string "This kind of behavior is unacceptable.\p"
	.string "All the teachers wanted you expelled,\n"
	.string "but I convinced them to give you one\l"
	.string "more chance.$"

FracturedMask1_Text_2:
# 245 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tell me, why did you beat him so badly?$"

FracturedMask1_Text_3:
# 248 "data/maps/headoffice/scripts.pory"
	.string "Xylar$"

FracturedMask1_Text_4:
# 249 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He wouldn't stop running his mouth, so I\n"
	.string "shut it for him.$"

FracturedMask1_Text_5:
# 251 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Violence isn't the answer, Xylar.\p"
	.string "Next time, there won't be a second\n"
	.string "chance.$"

FracturedMask1_Text_6:
# 253 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Then maybe people should learn when to\n"
	.string "keep their mouths shut.$"

FracturedMask1_Text_7:
# 255 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This isn't the path your father would\n"
	.string "have wanted for you.$"

FracturedMask1_Text_8:
# 259 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't.\p"
	.string "Talk.\p"
	.string "About.\p"
	.string "Him.$"

FracturedMask1_Text_9:
# 263 "data/maps/headoffice/scripts.pory"
	.string "After this incident, the students\n"
	.string "began to fear Xylar, treating him as an\l"
	.string "outcast.$"
