Harborac_MapScripts::
# 2 "data/maps/Harborac/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Harborac_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/Harborac/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Harborac_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Harborac_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Harborac/scripts.pory"
	map_script_2 ACADEMY_START, 2, ONHARBOR
	.2byte 0

Harborac_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Harborac/scripts.pory"
	map_script_2 ACADEMY_START, 2, ONHARBOR1
	.2byte 0


ONHARBOR1::
# 10 "data/maps/Harborac/scripts.pory"
	playbgm MUS_HG_KIMONO_GIRL_DANCE, FALSE
# 11 "data/maps/Harborac/scripts.pory"
	lock
# 12 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 13 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_0
# 14 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 15 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 16 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_1
# 17 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 18 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 19 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_2
# 20 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 21 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 22 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_3
# 23 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 24 "data/maps/Harborac/scripts.pory"
	namebox oldman
# 25 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_4
# 26 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 27 "data/maps/Harborac/scripts.pory"
	waitmessage
# 28 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/Harborac/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 30 "data/maps/Harborac/scripts.pory"
	removeobject 4
# 31 "data/maps/Harborac/scripts.pory"
	removeobject 11
# 32 "data/maps/Harborac/scripts.pory"
	setflag FLAG_OLDMAN_GONE
# 33 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE2
# 35 "data/maps/Harborac/scripts.pory"
	namebox Xylar
# 36 "data/maps/Harborac/scripts.pory"
	msgbox ONHARBOR1_Text_5
# 37 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 38 "data/maps/Harborac/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 3
# 40 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR::
# 46 "data/maps/Harborac/scripts.pory"
	applymovement 0xFF, MOVE1
	return


# 49 "data/maps/Harborac/scripts.pory"
MOVE1:
# 50 "data/maps/Harborac/scripts.pory"
	face_left
	step_end

# 52 "data/maps/Harborac/scripts.pory"
MOVE2:
# 53 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

Fionamet::
# 57 "data/maps/Harborac/scripts.pory"
	lock
# 58 "data/maps/Harborac/scripts.pory"
	special SpawnCameraObject
# 59 "data/maps/Harborac/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 60 "data/maps/Harborac/scripts.pory"
	applymovement 0x7F, MOVE6
# 61 "data/maps/Harborac/scripts.pory"
	applymovement 12, MOVE4
# 62 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE3
# 63 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 64 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 65 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_0
# 66 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 67 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE5
# 68 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_1
# 69 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 70 "data/maps/Harborac/scripts.pory"
	applymovement 13, mov1
# 71 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_2
# 72 "data/maps/Harborac/scripts.pory"
	waitmessage
# 73 "data/maps/Harborac/scripts.pory"
	applymovement 13, MOVE1
# 74 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 75 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_3
# 76 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 77 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_4
# 78 "data/maps/Harborac/scripts.pory"
	waitmessage
# 79 "data/maps/Harborac/scripts.pory"
	applymovement 12, mov1
# 80 "data/maps/Harborac/scripts.pory"
	namebox unknown
# 81 "data/maps/Harborac/scripts.pory"
	msgbox Fionamet_Text_5
# 82 "data/maps/Harborac/scripts.pory"
	hidenamebox
# 83 "data/maps/Harborac/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/Harborac/scripts.pory"
	removeobject 12
# 85 "data/maps/Harborac/scripts.pory"
	removeobject 13
# 86 "data/maps/Harborac/scripts.pory"
	setflag FLAG_FIONAMET
# 87 "data/maps/Harborac/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 1, 21
# 88 "data/maps/Harborac/scripts.pory"
	setvar ACADEMY_START, 4
	return


# 91 "data/maps/Harborac/scripts.pory"
mov1:
# 92 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 94 "data/maps/Harborac/scripts.pory"
MOVE6:
# 95 "data/maps/Harborac/scripts.pory"
	walk_right
# 95 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/Harborac/scripts.pory"
MOVE3:
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
# 98 "data/maps/Harborac/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/Harborac/scripts.pory"
MOVE4:
# 101 "data/maps/Harborac/scripts.pory"
	walk_left
# 101 "data/maps/Harborac/scripts.pory"
	walk_left
# 101 "data/maps/Harborac/scripts.pory"
	walk_left
# 101 "data/maps/Harborac/scripts.pory"
	walk_left
# 102 "data/maps/Harborac/scripts.pory"
	jump_2_up
# 103 "data/maps/Harborac/scripts.pory"
	face_down
# 104 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 106 "data/maps/Harborac/scripts.pory"
MOVE5:
# 107 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 107 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 107 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 107 "data/maps/Harborac/scripts.pory"
	walk_fast_left
# 107 "data/maps/Harborac/scripts.pory"
	walk_fast_left
	step_end

Fionamet1::
# 110 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov3
# 111 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 112 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


Fionamet2::
# 115 "data/maps/Harborac/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 116 "data/maps/Harborac/scripts.pory"
	waitmovement 0
# 117 "data/maps/Harborac/scripts.pory"
	goto Fionamet
	return


# 119 "data/maps/Harborac/scripts.pory"
mov4:
# 120 "data/maps/Harborac/scripts.pory"
	walk_up
# 121 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

# 123 "data/maps/Harborac/scripts.pory"
mov3:
# 124 "data/maps/Harborac/scripts.pory"
	walk_down
# 125 "data/maps/Harborac/scripts.pory"
	face_right
	step_end

sailorac::
# 128 "data/maps/Harborac/scripts.pory"
	lock
# 129 "data/maps/Harborac/scripts.pory"
	faceplayer
# 130 "data/maps/Harborac/scripts.pory"
	msgbox sailorac_Text_0
# 131 "data/maps/Harborac/scripts.pory"
	release
	return


nerd::
# 134 "data/maps/Harborac/scripts.pory"
	lock
# 135 "data/maps/Harborac/scripts.pory"
	faceplayer
# 136 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_0, MSGBOX_YESNO
# 137 "data/maps/Harborac/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq nerd_2
# 141 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_2
nerd_1:
# 143 "data/maps/Harborac/scripts.pory"
	release
	return

nerd_2:
# 138 "data/maps/Harborac/scripts.pory"
	msgbox nerd_Text_1
	goto nerd_1


girlbencac::
# 146 "data/maps/Harborac/scripts.pory"
	lock
# 147 "data/maps/Harborac/scripts.pory"
	faceplayer
# 148 "data/maps/Harborac/scripts.pory"
	msgbox girlbencac_Text_0
# 149 "data/maps/Harborac/scripts.pory"
	release
	return


girlar::
# 152 "data/maps/Harborac/scripts.pory"
	lock
# 153 "data/maps/Harborac/scripts.pory"
	faceplayer
# 154 "data/maps/Harborac/scripts.pory"
	msgbox girlar_Text_0
# 155 "data/maps/Harborac/scripts.pory"
	release
	return


tennisgirl::
# 158 "data/maps/Harborac/scripts.pory"
	lock
# 159 "data/maps/Harborac/scripts.pory"
	faceplayer
# 160 "data/maps/Harborac/scripts.pory"
	msgbox tennisgirl_Text_0
# 161 "data/maps/Harborac/scripts.pory"
	release
	return


boyten::
# 164 "data/maps/Harborac/scripts.pory"
	lock
# 165 "data/maps/Harborac/scripts.pory"
	faceplayer
# 166 "data/maps/Harborac/scripts.pory"
	msgbox boyten_Text_0
# 167 "data/maps/Harborac/scripts.pory"
	release
	return


beltac::
# 170 "data/maps/Harborac/scripts.pory"
	lock
# 171 "data/maps/Harborac/scripts.pory"
	faceplayer
# 172 "data/maps/Harborac/scripts.pory"
	msgbox beltac_Text_0
# 173 "data/maps/Harborac/scripts.pory"
	release
	return


machopac::
# 176 "data/maps/Harborac/scripts.pory"
	lock
# 177 "data/maps/Harborac/scripts.pory"
	faceplayer
# 178 "data/maps/Harborac/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ROAR_1
# 179 "data/maps/Harborac/scripts.pory"
	msgbox machopac_Text_0
# 180 "data/maps/Harborac/scripts.pory"
	release
	return


aceac::
# 184 "data/maps/Harborac/scripts.pory"
	lock
# 185 "data/maps/Harborac/scripts.pory"
	faceplayer
# 186 "data/maps/Harborac/scripts.pory"
	msgbox aceac_Text_0
# 187 "data/maps/Harborac/scripts.pory"
	release
	return


scinerd::
# 190 "data/maps/Harborac/scripts.pory"
	lock
# 191 "data/maps/Harborac/scripts.pory"
	faceplayer
# 192 "data/maps/Harborac/scripts.pory"
	msgbox scinerd_Text_0
# 193 "data/maps/Harborac/scripts.pory"
	release
	return


ONHARBOR1_Text_0:
# 13 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There you go, young man.\p"
	.string "I never understood why you chose to\n"
	.string "travel with this old man when there were\l"
	.string "better means of transport available.\p"
	.string "You could've reached your destination\n"
	.string "on time, but I won't question your\l"
	.string "intentions.\p"
	.string "You must've had your reasons.$"

ONHARBOR1_Text_1:
# 16 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.................$"

ONHARBOR1_Text_2:
# 19 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well here it is,\p"
	.string "The Astralis Academey, the place where\n"
	.string "normal trainers become legends.$"

ONHARBOR1_Text_3:
# 22 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}.............$"

ONHARBOR1_Text_4:
# 25 "data/maps/Harborac/scripts.pory"
	.string "(His eyes...They aren't normal.)$"

ONHARBOR1_Text_5:
# 36 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Legend?.... Become one?...\p"
	.string "I'm gonna destroy them all.$"

Fionamet_Text_0:
# 65 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My apologies....$"

Fionamet_Text_1:
# 68 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Are you alright, my lady?$"

Fionamet_Text_2:
# 71 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How rude of him, he didn't even stop to\n"
	.string "apologize.$"

Fionamet_Text_3:
# 75 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.........$"

Fionamet_Text_4:
# 77 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What happened?$"

Fionamet_Text_5:
# 81 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...........\p"
	.string "Nothing.\p"
	.string "Let's go.$"

sailorac_Text_0:
# 130 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Be sure to enjoy your time at the\n"
	.string "academy, young one.$"

nerd_Text_0:
# 136 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They say this academy was built with\n"
	.string "the ideals of a great man....Lord\l"
	.string "Aurther.\p"
	.string "Most call him a hero, others a mystery.\p"
	.string "But nobody really knows what happened\n"
	.string "to him in the end.\p"
	.string "Show interest?$"

nerd_Text_1:
# 138 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh? You're interested?\p"
	.string "Well all I know is that headmaster\n"
	.string "Caelum was his closest friend.\p"
	.string "Maybe he knows more....but good luck\n"
	.string "getting him to talk about it.$"

nerd_Text_2:
# 141 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strange, isn't it?\p"
	.string "A man once admired by the entire world\n"
	.string "just....disappears.\p"
	.string "People barely talk about him anymore,\n"
	.string "it's like history itself forgot him$"

girlbencac_Text_0:
# 148 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The breeze here feels\n"
	.string "different....gentle, yet carrying\l"
	.string "whispers of something long forgotten.\p"
	.string "It's peaceful.$"

girlar_Text_0:
# 154 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They say Arceus shaped the world...But\n"
	.string "I wonder if it still cares about what\l"
	.string "happens to us.$"

tennisgirl_Text_0:
# 160 "data/maps/Harborac/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I signed up thinking there would be\n"
	.string "tennis tournaments, turns out the only\l"
	.string "thing they teach here is pokemon\l"
	.string "battles.\p"
	.string "Just my luck.$"

boyten_Text_0:
# 166 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I think I like her.\p"
	.string "But every time I try to talk to her my\n"
	.string "body freezes, what if I mess up?$"

beltac_Text_0:
# 172 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Age doesn't matter if you have the will\n"
	.string "to become the greatest of all time.$"

machopac_Text_0:
# 179 "data/maps/Harborac/scripts.pory"
	.string "Mach....Mach$"

aceac_Text_0:
# 186 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I will become the very best like no one\n"
	.string "ever was.$"

scinerd_Text_0:
# 192 "data/maps/Harborac/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmm...If a Pokemon's base stats\n"
	.string "correlate with EV training efficiency,\l"
	.string "then theoratically a properly optimized\l"
	.string "held item could......\p"
	.string "Oh! A new variable! What if nature\n"
	.string "modifiers...No that would require more\l"
	.string "feild testing...\p"
	.string "Ugh, I need more data.$"

oldman::
# 42 "data/maps/Harborac/scripts.pory"
	.string "Oldman$"
