Newmap11_MapScripts::
# 2 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 0, Alistairarrive
	.2byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 0, alis
# 7 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 1, mewtwogone
	.2byte 0


mewtwogone::
# 12 "data/maps/Newmap11/scripts.pory"
	addobject 3, MAP_NEWMAP11
# 13 "data/maps/Newmap11/scripts.pory"
	setobjectxy 3, 11, 1
	return


alis::
# 16 "data/maps/Newmap11/scripts.pory"
	hideobjectat 1, MAP_NEWMAP11
# 17 "data/maps/Newmap11/scripts.pory"
	hideobjectat 2, MAP_NEWMAP11
# 18 "data/maps/Newmap11/scripts.pory"
	hideobjectat 3, MAP_NEWMAP11
	return


Alistairarrive::
# 22 "data/maps/Newmap11/scripts.pory"
	lockall
# 23 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 24 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 25 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 26 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 27 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 28 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 29 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 30 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 31 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 32 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 33 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 34 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 35 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 36 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 37 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 38 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 39 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 40 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/Newmap11/scripts.pory"
	speakername unknown
# 42 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 43 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces1
# 44 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 45 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 46 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 47 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 48 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4, MSGBOX_AUTOCLOSE
# 50 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 51 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5, MSGBOX_AUTOCLOSE
# 53 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 54 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6, MSGBOX_AUTOCLOSE
# 56 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 57 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7, MSGBOX_AUTOCLOSE
# 59 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 60 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8, MSGBOX_AUTOCLOSE
# 62 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 63 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 64 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 65 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9, MSGBOX_AUTOCLOSE
# 67 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 68 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10, MSGBOX_AUTOCLOSE
# 70 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 71 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11, MSGBOX_AUTOCLOSE
# 73 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 74 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12, MSGBOX_AUTOCLOSE
# 76 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 77 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13, MSGBOX_AUTOCLOSE
# 79 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 80 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14, MSGBOX_AUTOCLOSE
# 82 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 83 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15, MSGBOX_AUTOCLOSE
# 85 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 86 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16, MSGBOX_AUTOCLOSE
# 88 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 89 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17, MSGBOX_AUTOCLOSE
# 91 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 92 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 94 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 95 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19, MSGBOX_AUTOCLOSE
# 96 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 97 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 98 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 99 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 100 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 101 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 102 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20, MSGBOX_AUTOCLOSE
# 103 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 104 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 105 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 106 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 107 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 108 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 109 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 111 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 112 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22, MSGBOX_AUTOCLOSE
# 114 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 115 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 117 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 118 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 120 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 122 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 123 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 124 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 125 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces2
# 126 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 127 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 129 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 130 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 131 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 132 "data/maps/Newmap11/scripts.pory"
	releaseall
# 133 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 134 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 139 "data/maps/Newmap11/scripts.pory"
traces2:
# 140 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 142 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 143 "data/maps/Newmap11/scripts.pory"
	walk_down
# 144 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 146 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 147 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 153 "data/maps/Newmap11/scripts.pory"
	walk_down
# 154 "data/maps/Newmap11/scripts.pory"
	walk_left
# 155 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 158 "data/maps/Newmap11/scripts.pory"
	walk_right
# 158 "data/maps/Newmap11/scripts.pory"
	walk_right
# 158 "data/maps/Newmap11/scripts.pory"
	walk_right
# 158 "data/maps/Newmap11/scripts.pory"
	walk_right
# 159 "data/maps/Newmap11/scripts.pory"
	walk_up
# 159 "data/maps/Newmap11/scripts.pory"
	walk_up
# 159 "data/maps/Newmap11/scripts.pory"
	walk_up
# 160 "data/maps/Newmap11/scripts.pory"
	delay_16
# 161 "data/maps/Newmap11/scripts.pory"
	delay_16
# 162 "data/maps/Newmap11/scripts.pory"
	face_right
# 163 "data/maps/Newmap11/scripts.pory"
	delay_16
# 164 "data/maps/Newmap11/scripts.pory"
	delay_16
# 165 "data/maps/Newmap11/scripts.pory"
	delay_16
# 166 "data/maps/Newmap11/scripts.pory"
	delay_16
# 167 "data/maps/Newmap11/scripts.pory"
	walk_up
# 167 "data/maps/Newmap11/scripts.pory"
	walk_up
# 167 "data/maps/Newmap11/scripts.pory"
	walk_up
# 167 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 169 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 170 "data/maps/Newmap11/scripts.pory"
	delay_16
# 171 "data/maps/Newmap11/scripts.pory"
	walk_right
# 171 "data/maps/Newmap11/scripts.pory"
	walk_right
# 171 "data/maps/Newmap11/scripts.pory"
	walk_right
# 171 "data/maps/Newmap11/scripts.pory"
	walk_right
# 172 "data/maps/Newmap11/scripts.pory"
	walk_up
# 172 "data/maps/Newmap11/scripts.pory"
	walk_up
# 173 "data/maps/Newmap11/scripts.pory"
	delay_16
# 174 "data/maps/Newmap11/scripts.pory"
	delay_16
# 175 "data/maps/Newmap11/scripts.pory"
	face_right
# 176 "data/maps/Newmap11/scripts.pory"
	delay_16
# 177 "data/maps/Newmap11/scripts.pory"
	delay_16
# 178 "data/maps/Newmap11/scripts.pory"
	delay_16
# 179 "data/maps/Newmap11/scripts.pory"
	delay_16
# 180 "data/maps/Newmap11/scripts.pory"
	walk_up
# 180 "data/maps/Newmap11/scripts.pory"
	walk_up
# 180 "data/maps/Newmap11/scripts.pory"
	walk_up
# 181 "data/maps/Newmap11/scripts.pory"
	walk_right
# 182 "data/maps/Newmap11/scripts.pory"
	walk_up
# 182 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/Newmap11/scripts.pory"
alistai:
# 185 "data/maps/Newmap11/scripts.pory"
	walk_up
# 185 "data/maps/Newmap11/scripts.pory"
	walk_up
# 185 "data/maps/Newmap11/scripts.pory"
	walk_up
# 185 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 188 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 189 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 193 "data/maps/Newmap11/scripts.pory"
	lock
# 194 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 195 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 196 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 197 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 199 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 200 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 202 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 203 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 206 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 208 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 209 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 211 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 212 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 214 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 215 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 217 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 218 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 220 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 221 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 223 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 224 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 225 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 227 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 228 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 230 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 231 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 233 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 234 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 236 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 237 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 238 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 239 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 240 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 241 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 242 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 243 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 244 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 246 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 247 "data/maps/Newmap11/scripts.pory"
	release
	return


# 249 "data/maps/Newmap11/scripts.pory"
pay:
# 250 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 252 "data/maps/Newmap11/scripts.pory"
question:
# 253 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 256 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_1
# 268 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_1:
# 257 "data/maps/Newmap11/scripts.pory"
	lock
# 258 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 259 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0, MSGBOX_AUTOCLOSE
# 261 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 263 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 264 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 265 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_HARBORAC, 22, 27
	return


Alistairarrive_Text_0:
# 29 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........\p"
	.string "..What....\p"
	.string "What should we do now?$"

Alistairarrive_Text_1:
# 40 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are, I don't need your\n"
	.string "company.$"

Alistairarrive_Text_2:
# 42 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much,\n"
	.string "Xylar I presume?$"

Alistairarrive_Text_3:
# 46 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another one of their pawns?\p"
	.string "Did they send you here to finish what\n"
	.string "they started?$"

Alistairarrive_Text_4:
# 48 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I am not.\p"
	.string "My name is Alistair Caelum.\n"
	.string "I am the headmaster of the Astralis\l"
	.string "Academy.$"

Alistairarrive_Text_5:
# 51 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And what does a headmaster want from\n"
	.string "me?$"

Alistairarrive_Text_6:
# 54 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I came here because I heard about what\n"
	.string "happened.....your family, your home.$"

Alistairarrive_Text_7:
# 57 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You're here to give me some lecture\n"
	.string "about life and moving on?\p"
	.string "Save it.\n"
	.string "I don't need your pity.$"

Alistairarrive_Text_8:
# 60 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here to pity you.\n"
	.string "I am here because I'm worried about you.\l"
	.string "Aurther was my best friend and you're\l"
	.string "his son. He wanted to leave you in my\l"
	.string "care once the academy started so I'm\l"
	.string "here to take you there.$"

Alistairarrive_Text_9:
# 65 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Best Friend?\p"
	.string "Then why weren't you there to help him?$"

Alistairarrive_Text_10:
# 68 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........$"

Alistairarrive_Text_11:
# 71 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And I don't have time for academy.\n"
	.string "I'm already strong enough and I just\l"
	.string "want to kill every single one of them.$"

Alistairarrive_Text_12:
# 74 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't solve anything.$"

Alistairarrive_Text_13:
# 77 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you know?\n"
	.string "You can say that because you don't\l"
	.string "know what I've been through.$"

Alistairarrive_Text_14:
# 80 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're right, I don't.\n"
	.string "But what I do know is that\p"
	.string "Revenge is not the right path, it won't\n"
	.string "lead you where you think it will.\p"
	.string "It will blind you and eventually destroy\n"
	.string "you.$"

Alistairarrive_Text_15:
# 83 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't preach to me! I've already taken\n"
	.string "down one of their strongest. If you\l"
	.string "think you can change my mind, you're\l"
	.string "wasting your breath.$"

Alistairarrive_Text_16:
# 86 "data/maps/Newmap11/scripts.pory"
	.string "(Sighs)\p"
	.string "(He's just as stubborn as Aurther.)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that but\n"
	.string "strength isn't about winning one fight.\l"
	.string "It's about being ready for the next no\l"
	.string "matter how hard it gets.$"

Alistairarrive_Text_17:
# 89 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need advice from someone I just\n"
	.string "met. If you think you're so wise, why\l"
	.string "don't you prove yourself?$"

Alistairarrive_Text_18:
# 92 "data/maps/Newmap11/scripts.pory"
	.string "(Smirks)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, Here's the deal. We'll battle. If\n"
	.string "you win. I'll leave and you can do\l"
	.string "whatever you want.\p"
	.string "But if I win you'll come to the academy\n"
	.string "and train there for at least two years.$"

Alistairarrive_Text_19:
# 95 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine I'll take your little challange. But\n"
	.string "don't cry when I crush you.$"

Alistairarrive_Text_20:
# 102 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_21:
# 109 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_22:
# 112 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_23:
# 115 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_24:
# 118 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_25:
# 127 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 197 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 200 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 203 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 206 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 209 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 212 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 215 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 218 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 221 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 225 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 228 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 231 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 234 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 244 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 259 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom, I'll be leaving for the academy\n"
	.string "now.....\p"
	.string "They think it's a place to learn and\n"
	.string "grow but all I'll find there will be the\l"
	.string "strength to avenge you.\p"
	.string "I won't forget why I'm doing this.\p"
	.string "I'll make sure your death isn't\n"
	.string "forgotten.\p"
	.string "..........\p"
	.string "I'll make them all pay.$"

alistair::
# 136 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 149 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
