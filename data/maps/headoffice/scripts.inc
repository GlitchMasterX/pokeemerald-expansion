headoffice_MapScripts::
# 5 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HEADMET1
# 9 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
# 2 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, HEADMET
	.2byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, Head
	.2byte 0


HEADMET1::
# 12 "data/maps/headoffice/scripts.pory"
	compare ACADEMY_START, 4
	goto_if_eq HEADMET1_1
	return

HEADMET1_1:
# 13 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 14 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET::
# 19 "data/maps/headoffice/scripts.pory"
	addobject 1
# 20 "data/maps/headoffice/scripts.pory"
	setobjectxy 1, 7, 9
# 21 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 22 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


Head::
# 26 "data/maps/headoffice/scripts.pory"
	lock
# 27 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 28 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 29 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_0
# 31 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 32 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_1
# 34 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 35 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_2
# 37 "data/maps/headoffice/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 38 "data/maps/headoffice/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 39 "data/maps/headoffice/scripts.pory"
	waitmoncry
# 40 "data/maps/headoffice/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
# 41 "data/maps/headoffice/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 42 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 43 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_3
# 44 "data/maps/headoffice/scripts.pory"
	hidemonpic
# 45 "data/maps/headoffice/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 46 "data/maps/headoffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Head_1
# 50 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 51 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 52 "data/maps/headoffice/scripts.pory"
	goto Head1
	return

Head_1:
# 47 "data/maps/headoffice/scripts.pory"
	goto Head1
	return


girlsdorm::
# 57 "data/maps/headoffice/scripts.pory"
	lock
# 58 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 59 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 60 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 61 "data/maps/headoffice/scripts.pory"
	msgbox girlsdorm_Text_0
# 62 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 63 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 64 "data/maps/headoffice/scripts.pory"
	release
	return


Head1::
# 68 "data/maps/headoffice/scripts.pory"
	lock
# 69 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 70 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 71 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_0
# 73 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 74 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_1
# 76 "data/maps/headoffice/scripts.pory"
	initclock 10, 30
# 77 "data/maps/headoffice/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 78 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 5
# 79 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HOUSE2, 12, 1
	return


serenamet::
# 83 "data/maps/headoffice/scripts.pory"
	lockall
# 84 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 85 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 86 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 87 "data/maps/headoffice/scripts.pory"
	speakername serena
# 88 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_0
# 90 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 91 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 92 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 93 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 94 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_1
# 96 "data/maps/headoffice/scripts.pory"
	speakername serena
# 97 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_2
# 99 "data/maps/headoffice/scripts.pory"
	waitmessage
# 100 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 101 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 102 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_3
# 104 "data/maps/headoffice/scripts.pory"
	waitmessage
# 105 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 106 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 107 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, mov1
# 108 "data/maps/headoffice/scripts.pory"
	speakername serena
# 109 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_4
# 111 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 112 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_5
# 114 "data/maps/headoffice/scripts.pory"
	speakername serena
# 115 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_6
# 117 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 118 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_7
# 120 "data/maps/headoffice/scripts.pory"
	speakername serena
# 121 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_8
# 123 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 124 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 125 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_9, MSGBOX_AUTOCLOSE
# 127 "data/maps/headoffice/scripts.pory"
	speakername serena
# 128 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_10
# 130 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 131 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 132 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_11, MSGBOX_AUTOCLOSE
# 134 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 135 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_12
# 136 "data/maps/headoffice/scripts.pory"
	waitse
# 137 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 138 "data/maps/headoffice/scripts.pory"
	setfollower 1, CAN_LEAVE_ROUTE, serenafollow
# 139 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 140 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 6
# 141 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 144 "data/maps/headoffice/scripts.pory"
	lock
# 145 "data/maps/headoffice/scripts.pory"
	facefollower
# 146 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 147 "data/maps/headoffice/scripts.pory"
	speakername serena
# 148 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_10
# 150 "data/maps/headoffice/scripts.pory"
	release
	return


# 152 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 153 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 155 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 156 "data/maps/headoffice/scripts.pory"
	walk_right
# 157 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 160 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 161 "data/maps/headoffice/scripts.pory"
	walk_down
# 161 "data/maps/headoffice/scripts.pory"
	walk_down
# 161 "data/maps/headoffice/scripts.pory"
	walk_down
# 161 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 164 "data/maps/headoffice/scripts.pory"
	walk_down
# 164 "data/maps/headoffice/scripts.pory"
	walk_down
# 164 "data/maps/headoffice/scripts.pory"
	walk_down
# 165 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

serenaextend::
# 171 "data/maps/headoffice/scripts.pory"
	lock
# 172 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov5
# 173 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov6
# 174 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 175 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 176 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, backes
# 177 "data/maps/headoffice/scripts.pory"
	speakername serena
# 178 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 181 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_1, MSGBOX_AUTOCLOSE
# 183 "data/maps/headoffice/scripts.pory"
	speakername serena
# 184 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 187 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3
# 189 "data/maps/headoffice/scripts.pory"
	speakername serena
# 190 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_4, MSGBOX_AUTOCLOSE
# 192 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 193 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3, MSGBOX_AUTOCLOSE
# 195 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 196 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 197 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 198 "data/maps/headoffice/scripts.pory"
	speakername serena
# 199 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_5, MSGBOX_AUTOCLOSE
# 201 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 202 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 203 "data/maps/headoffice/scripts.pory"
	destroyfollower
# 204 "data/maps/headoffice/scripts.pory"
	setflag FLAG_SERENAMET
# 205 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 7
# 206 "data/maps/headoffice/scripts.pory"
	release
	return


serenaextend1::
# 210 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, MOVE2
# 211 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, MOVE2
# 212 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 213 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


serenaextend2::
# 216 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 217 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, strrp
# 218 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 219 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


# 221 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
# 222 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 226 "data/maps/headoffice/scripts.pory"
	walk_left
# 227 "data/maps/headoffice/scripts.pory"
	walk_down
# 227 "data/maps/headoffice/scripts.pory"
	walk_down
# 227 "data/maps/headoffice/scripts.pory"
	walk_down
# 227 "data/maps/headoffice/scripts.pory"
	walk_down
# 227 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 230 "data/maps/headoffice/scripts.pory"
	delay_16
# 231 "data/maps/headoffice/scripts.pory"
	walk_down
# 231 "data/maps/headoffice/scripts.pory"
	walk_down
# 231 "data/maps/headoffice/scripts.pory"
	walk_down
# 231 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

Head_Text_0:
# 29 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, I trust your journey here was\n"
	.string "uneventful.\p"
	.string "I understand this is all new for you,\n"
	.string "but it's time to start fresh.$"

Head_Text_1:
# 32 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Head_Text_2:
# 35 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We have a tradition of giving every\n"
	.string "first year a starter pokemon of their\l"
	.string "choice on the first day.\p"
	.string "But since you arrived late there's only\n"
	.string "one left.\p"
	.string "Here you go.$"

Head_Text_3:
# 43 "data/maps/headoffice/scripts.pory"
	.string "Xylar recieved {STR_VAR_1}.$"

girlsdorm_Text_0:
# 61 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This way leads to the girl's dorm.\p"
	.string "Boys are not allowed there.$"

Head1_Text_0:
# 71 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is it? I thought I was supposed to\n"
	.string "grow stronger, not babysit a chicken.$"

Head1_Text_1:
# 74 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't always obvious at first\n"
	.string "glance.\p"
	.string "Give it time.\n"
	.string "Torchic may surprise you.$"

serenamet_Text_0:
# 88 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Serena, your assigned mentor.\p"
	.string "Lucky you, right?$"

serenamet_Text_1:
# 94 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

serenamet_Text_2:
# 97 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

serenamet_Text_3:
# 102 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

serenamet_Text_4:
# 109 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.\p"
	.string "Look, I don't care if you think you don't\n"
	.string "need help.\p"
	.string "I'm here to make sure you don't blow\n"
	.string "something up.$"

serenamet_Text_5:
# 112 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

serenamet_Text_6:
# 115 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

serenamet_Text_7:
# 118 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

serenamet_Text_8:
# 121 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

serenamet_Text_9:
# 125 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

serenamet_Text_10:
# 128 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

serenamet_Text_11:
# 132 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

serenamet_Text_12:
# 135 "data/maps/headoffice/scripts.pory"
	.string "Serena decided to join you!$"

serenaextend_Text_0:
# 178 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

serenaextend_Text_1:
# 181 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

serenaextend_Text_2:
# 184 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

serenaextend_Text_3:
# 187 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...................$"

serenaextend_Text_4:
# 190 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

serenaextend_Text_5:
# 199 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

serena::
# 167 "data/maps/headoffice/scripts.pory"
	.string "Serena$"
