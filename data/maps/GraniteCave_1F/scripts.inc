# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawoodsmewtwo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Mewtworecover
# 5 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION,newheal
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_1F/scripts.pory"
Luxurawoodsmewtwo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/GraniteCave_1F/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 15, herb
# 9 "data/maps/GraniteCave_1F/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 18, mewrt
# 10 "data/maps/GraniteCave_1F/scripts.pory"
.2byte 0
# 11 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 16 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 20 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 21 "data/maps/GraniteCave_1F/scripts.pory"

# 22 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 26 "data/maps/GraniteCave_1F/scripts.pory"

# 27 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 32 "data/maps/GraniteCave_1F/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "to be all right, but…\p"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 38 "data/maps/GraniteCave_1F/scripts.pory"

# 39 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 41 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a POKéMON and use it.\p"
# 42 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	.string "of caves.\p"
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"

herb::
# 49 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 50 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	removefieldmugshot
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 59 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_3, MSGBOX_AUTOCLOSE
# 61 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
# 62 "data/maps/GraniteCave_1F/scripts.pory"
	setvar LUXURA_TRAGEDY, 16
# 63 "data/maps/GraniteCave_1F/scripts.pory"
	fwdmonth 2
	return


Mewtworecover::
# 67 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_eq Mewtworecover_1
# 74 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_lt Mewtworecover_2
# 80 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt Mewtworecover_3
	return

Mewtworecover_1:
# 68 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 2
# 69 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B4
# 70 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 3
# 71 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x4B5
	return

Mewtworecover_2:
# 75 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 76 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 77 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 2
# 78 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x4B4
	return

Mewtworecover_3:
# 81 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 82 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 83 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 2
# 84 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B4
	return


mewrt::
# 88 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 89 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 90 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 92 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/GraniteCave_1F/scripts.pory"
	speakername mewtwo
# 94 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_1, MSGBOX_AUTOCLOSE
# 95 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 96 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_2, MSGBOX_AUTOCLOSE
# 97 "data/maps/GraniteCave_1F/scripts.pory"
	speakername mewtwo
# 98 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_3, MSGBOX_AUTOCLOSE
# 99 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 100 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_4, MSGBOX_AUTOCLOSE
# 101 "data/maps/GraniteCave_1F/scripts.pory"
	speakername mewtwo
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_5, MSGBOX_AUTOCLOSE
# 103 "data/maps/GraniteCave_1F/scripts.pory"
	speakername Xylar1
# 104 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_6, MSGBOX_AUTOCLOSE
# 105 "data/maps/GraniteCave_1F/scripts.pory"
	speakername mewtwo
# 106 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_7, MSGBOX_AUTOCLOSE
# 107 "data/maps/GraniteCave_1F/scripts.pory"
	removefieldmugshot
# 108 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 109 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 110 "data/maps/GraniteCave_1F/scripts.pory"
	givemon SPECIES_MEWTWO, 5, ITEM_NONE, ITEM_POKE_BALL, NATURE_HASTY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYBEAM, MOVE_FIRE_BLAST, MOVE_RECOVER, MOVE_HYPNOSIS
# 111 "data/maps/GraniteCave_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 112 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_8
# 113 "data/maps/GraniteCave_1F/scripts.pory"
	waitfanfare
# 114 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 115 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
# 116 "data/maps/GraniteCave_1F/scripts.pory"
	setvar LUXURA_TRAGEDY, 19
# 117 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x26B
	return


newheal::
# 122 "data/maps/GraniteCave_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LUXURA_VEILWOOD
	end


spark1::
# 127 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_single SPARK_GRUNT_1, Grunt1_Intro, Grunt1_Outro
# 128 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox PostBattle_Grunt1, MSGBOX_AUTOCLOSE
# 129 "data/maps/GraniteCave_1F/scripts.pory"
	waitmessage
	end


herb_Text_0:
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}These cuts... they're deep.\p"
	.string "I don't know how to fix this!$"

herb_Text_1:
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait…\p"
	.string "Mira. She said something about herbs\n"
	.string "before...\p"
	.string "Yeah, herbs can help heal wounds!$"

herb_Text_2:
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there. I'll find something.\p"
	.string "Mira always knew which ones to pick…\n"
	.string "I just have to remember.$"

herb_Text_3:
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I won't let you down, not like this.\p"
	.string "You'll make it. You have to.$"

mewrt_Text_0:
# 92 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Why?$"

mewrt_Text_1:
# 94 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Because you... saved me.\p"
	.string "I sense no malice in your thoughts.$"

mewrt_Text_2:
# 96 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I didn't do much.\p"
	.string "I just didn't want to lose someone\n"
	.string "else... like I lost my family.$"

mewrt_Text_3:
# 98 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}........\p"
	.string "Your pain... is like mine.\p"
	.string "Perhaps... we are not so different.$"

mewrt_Text_4:
# 100 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Does that mean... you'll trust me?$"

mewrt_Text_5:
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}For now. You have proven yourself...\p"
	.string "different from the others.\p"
	.string "But know this..\p"
	.string "if you betray me, the consequences will\n"
	.string "be dire.$"

mewrt_Text_6:
# 104 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Consequences?\p"
	.string "There's nothing left to lose. No one\n"
	.string "left to face...\p"
	.string "except the ones who took everything\n"
	.string "from me.$"

mewrt_Text_7:
# 106 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I sense your resolve, human.\p"
	.string "Perhaps... our goals align. I will join\n"
	.string "you.\p"
	.string "But remember, my trust is not easily\n"
	.string "earned.$"

mewrt_Text_8:
# 112 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Mewtwo decided to join you.$"

Grunt1_Intro::
# 134 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Feel the strikes of Sparks power!!$"

Grunt1_Outro::
# 138 "data/maps/GraniteCave_1F/scripts.pory"
	.string "No way! How could you withstand our\n"
	.string "lightning strikes?$"

PostBattle_Grunt1::
# 142 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"
