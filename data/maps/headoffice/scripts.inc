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
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
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
	setvar ACADEMY_START, 5
# 63 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_HOUSE2, 12, 1
	return


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
