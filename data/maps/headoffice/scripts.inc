headoffice_MapScripts::
# 5 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HEADMET1
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
# 11 "data/maps/headoffice/scripts.pory"
	compare ACADEMY_START, 4
	goto_if_eq HEADMET1_1
	return

HEADMET1_1:
# 12 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 13 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET::
# 18 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 19 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


Head::
# 23 "data/maps/headoffice/scripts.pory"
	lock
# 24 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 25 "data/maps/headoffice/scripts.pory"
	namebox alistair
# 26 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_0
# 27 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 28 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 29 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_1
# 30 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 31 "data/maps/headoffice/scripts.pory"
	namebox alistair
# 32 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_2
# 33 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 34 "data/maps/headoffice/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 35 "data/maps/headoffice/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 36 "data/maps/headoffice/scripts.pory"
	waitmoncry
# 37 "data/maps/headoffice/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
# 38 "data/maps/headoffice/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 39 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_OBTAIN_ITEM
# 40 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_3
# 41 "data/maps/headoffice/scripts.pory"
	hidemonpic
# 42 "data/maps/headoffice/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 43 "data/maps/headoffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Head_1
# 47 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 49 "data/maps/headoffice/scripts.pory"
	goto Head1
	return

Head_1:
# 44 "data/maps/headoffice/scripts.pory"
	goto Head1
	return


Head1::
# 54 "data/maps/headoffice/scripts.pory"
	lock
# 55 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 56 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 57 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_0
# 58 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 59 "data/maps/headoffice/scripts.pory"
	namebox alistair
# 60 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_1
# 61 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 62 "data/maps/headoffice/scripts.pory"
	initclock 10, 30
# 63 "data/maps/headoffice/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 64 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 5
# 65 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HOUSE2, 12, 1
	return


serenamet::
# 69 "data/maps/headoffice/scripts.pory"
	lockall
# 70 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 71 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 72 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 73 "data/maps/headoffice/scripts.pory"
	namebox serena
# 74 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_0
# 75 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 76 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 77 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 78 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 79 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 80 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_1
# 81 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 82 "data/maps/headoffice/scripts.pory"
	namebox serena
# 83 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_2
# 84 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 85 "data/maps/headoffice/scripts.pory"
	waitmessage
# 86 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 87 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 88 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_3
# 89 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 90 "data/maps/headoffice/scripts.pory"
	waitmessage
# 91 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 92 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 93 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, mov1
# 94 "data/maps/headoffice/scripts.pory"
	namebox serena
# 95 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_4
# 96 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 97 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 98 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_5
# 99 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 100 "data/maps/headoffice/scripts.pory"
	namebox serena
# 101 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_6
# 102 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 103 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 104 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_7
# 105 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 106 "data/maps/headoffice/scripts.pory"
	namebox serena
# 107 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_8
# 108 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 109 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 110 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 111 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_9, MSGBOX_AUTOCLOSE
# 112 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 113 "data/maps/headoffice/scripts.pory"
	namebox serena
# 114 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_10
# 115 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 116 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 117 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 118 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_11, MSGBOX_AUTOCLOSE
# 119 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 120 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 121 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_12
# 122 "data/maps/headoffice/scripts.pory"
	waitse
# 123 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 124 "data/maps/headoffice/scripts.pory"
	setfollower 1, CAN_LEAVE_ROUTE, serenafollow
# 125 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 126 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 6
# 127 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 130 "data/maps/headoffice/scripts.pory"
	lock
# 131 "data/maps/headoffice/scripts.pory"
	facefollower
# 132 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 133 "data/maps/headoffice/scripts.pory"
	namebox serena
# 134 "data/maps/headoffice/scripts.pory"
	msgbox serenamet_Text_10
# 135 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 136 "data/maps/headoffice/scripts.pory"
	release
	return


# 138 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 139 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 141 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 142 "data/maps/headoffice/scripts.pory"
	walk_right
# 143 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 144 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 146 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 147 "data/maps/headoffice/scripts.pory"
	walk_down
# 147 "data/maps/headoffice/scripts.pory"
	walk_down
# 147 "data/maps/headoffice/scripts.pory"
	walk_down
# 147 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 149 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 150 "data/maps/headoffice/scripts.pory"
	walk_down
# 150 "data/maps/headoffice/scripts.pory"
	walk_down
# 150 "data/maps/headoffice/scripts.pory"
	walk_down
# 151 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

serenaextend::
# 157 "data/maps/headoffice/scripts.pory"
	lock
# 158 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov5
# 159 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov6
# 160 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 161 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 162 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, backes
# 163 "data/maps/headoffice/scripts.pory"
	namebox serena
# 164 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_0, MSGBOX_AUTOCLOSE
# 165 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 166 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 167 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_1, MSGBOX_AUTOCLOSE
# 168 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 169 "data/maps/headoffice/scripts.pory"
	namebox serena
# 170 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 172 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 173 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3
# 174 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 175 "data/maps/headoffice/scripts.pory"
	namebox serena
# 176 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_4, MSGBOX_AUTOCLOSE
# 177 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 178 "data/maps/headoffice/scripts.pory"
	namebox Xylar
# 179 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_3
# 180 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 181 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 182 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 183 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 184 "data/maps/headoffice/scripts.pory"
	namebox serena
# 185 "data/maps/headoffice/scripts.pory"
	msgbox serenaextend_Text_5, MSGBOX_AUTOCLOSE
# 186 "data/maps/headoffice/scripts.pory"
	hidenamebox
# 187 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 188 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 189 "data/maps/headoffice/scripts.pory"
	destroyfollower
# 190 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 7
# 191 "data/maps/headoffice/scripts.pory"
	release
	return


serenaextend1::
# 195 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, MOVE2
# 196 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, MOVE2
# 197 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 198 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


serenaextend2::
# 201 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 202 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, strrp
# 203 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 204 "data/maps/headoffice/scripts.pory"
	goto serenaextend
	return


# 206 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
# 207 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 211 "data/maps/headoffice/scripts.pory"
	walk_left
# 212 "data/maps/headoffice/scripts.pory"
	walk_down
# 212 "data/maps/headoffice/scripts.pory"
	walk_down
# 212 "data/maps/headoffice/scripts.pory"
	walk_down
# 212 "data/maps/headoffice/scripts.pory"
	walk_down
# 212 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 215 "data/maps/headoffice/scripts.pory"
	delay_16
# 216 "data/maps/headoffice/scripts.pory"
	walk_down
# 216 "data/maps/headoffice/scripts.pory"
	walk_down
# 216 "data/maps/headoffice/scripts.pory"
	walk_down
# 216 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

Head_Text_0:
# 26 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, I trust your journey here was\n"
	.string "uneventful.\p"
	.string "I understand this is all new for you,\n"
	.string "but it's time to start fresh.$"

Head_Text_1:
# 29 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Head_Text_2:
# 32 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We have a tradition of giving every\n"
	.string "first year a starter pokemon of their\l"
	.string "choice on the first day.\p"
	.string "But since you arrived late there's only\n"
	.string "one left.\p"
	.string "Here you go.$"

Head_Text_3:
# 40 "data/maps/headoffice/scripts.pory"
	.string "Xylar recieved {STR_VAR_1}.$"

Head1_Text_0:
# 57 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is it? I thought I was supposed to\n"
	.string "grow stronger, not babysit a chicken.$"

Head1_Text_1:
# 60 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't always obvious at first\n"
	.string "glance.\p"
	.string "Give it time.\n"
	.string "Torchic may surprise you.$"

serenamet_Text_0:
# 74 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Serena, your assigned mentor.\p"
	.string "Lucky you, right?$"

serenamet_Text_1:
# 80 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

serenamet_Text_2:
# 83 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

serenamet_Text_3:
# 88 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

serenamet_Text_4:
# 95 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.\p"
	.string "Look, I don't care if you think you don't\n"
	.string "need help.\p"
	.string "I'm here to make sure you don't blow\n"
	.string "something up.$"

serenamet_Text_5:
# 98 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

serenamet_Text_6:
# 101 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

serenamet_Text_7:
# 104 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

serenamet_Text_8:
# 107 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

serenamet_Text_9:
# 111 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

serenamet_Text_10:
# 114 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

serenamet_Text_11:
# 118 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

serenamet_Text_12:
# 121 "data/maps/headoffice/scripts.pory"
	.string "Serena decided to join you!$"

serenaextend_Text_0:
# 164 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

serenaextend_Text_1:
# 167 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

serenaextend_Text_2:
# 170 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

serenaextend_Text_3:
# 173 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...................$"

serenaextend_Text_4:
# 176 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

serenaextend_Text_5:
# 185 "data/maps/headoffice/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

serena::
# 153 "data/maps/headoffice/scripts.pory"
	.string "Serena$"
