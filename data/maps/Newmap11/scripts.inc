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
	ballfollowingmon
# 24 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 25 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 26 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 27 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 28 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 29 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 30 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 31 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 32 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 33 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 34 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 35 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 36 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 37 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 38 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 39 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 40 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 41 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 43 "data/maps/Newmap11/scripts.pory"
	namebox unknown
# 44 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 46 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces1
# 47 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 48 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 49 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 51 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 52 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4, MSGBOX_AUTOCLOSE
# 53 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 54 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 55 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5, MSGBOX_AUTOCLOSE
# 56 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 57 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 58 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6, MSGBOX_AUTOCLOSE
# 59 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 60 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 61 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7, MSGBOX_AUTOCLOSE
# 62 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 63 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 64 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8, MSGBOX_AUTOCLOSE
# 65 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 66 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 67 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 68 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 69 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9, MSGBOX_AUTOCLOSE
# 70 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 71 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 72 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10, MSGBOX_AUTOCLOSE
# 73 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 74 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 75 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11, MSGBOX_AUTOCLOSE
# 76 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 77 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 78 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12, MSGBOX_AUTOCLOSE
# 79 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 80 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 81 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13, MSGBOX_AUTOCLOSE
# 82 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 83 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 84 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14, MSGBOX_AUTOCLOSE
# 85 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 86 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 87 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15, MSGBOX_AUTOCLOSE
# 88 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 89 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 90 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16, MSGBOX_AUTOCLOSE
# 91 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 92 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 93 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17, MSGBOX_AUTOCLOSE
# 94 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 95 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 96 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 97 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 98 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 99 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19, MSGBOX_AUTOCLOSE
# 100 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 101 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 102 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 103 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 104 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 105 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 106 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20, MSGBOX_AUTOCLOSE
# 107 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 108 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 109 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro_no_whiteout ACADEMY_HEAD, alislose
# 110 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 111 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 112 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 113 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 114 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 115 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 116 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 117 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22, MSGBOX_AUTOCLOSE
# 118 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 119 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 120 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 121 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 122 "data/maps/Newmap11/scripts.pory"
	namebox alistair
# 123 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 124 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 125 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 127 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 128 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 129 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 130 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces2
# 131 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 132 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 133 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 134 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 135 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 136 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 137 "data/maps/Newmap11/scripts.pory"
	releaseall
# 138 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 143 "data/maps/Newmap11/scripts.pory"
traces2:
# 144 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 146 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 147 "data/maps/Newmap11/scripts.pory"
	walk_down
# 148 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 150 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 151 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 156 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 157 "data/maps/Newmap11/scripts.pory"
	walk_down
# 158 "data/maps/Newmap11/scripts.pory"
	walk_left
# 159 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 161 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 162 "data/maps/Newmap11/scripts.pory"
	walk_right
# 162 "data/maps/Newmap11/scripts.pory"
	walk_right
# 162 "data/maps/Newmap11/scripts.pory"
	walk_right
# 162 "data/maps/Newmap11/scripts.pory"
	walk_right
# 163 "data/maps/Newmap11/scripts.pory"
	walk_up
# 163 "data/maps/Newmap11/scripts.pory"
	walk_up
# 163 "data/maps/Newmap11/scripts.pory"
	walk_up
# 164 "data/maps/Newmap11/scripts.pory"
	delay_16
# 165 "data/maps/Newmap11/scripts.pory"
	delay_16
# 166 "data/maps/Newmap11/scripts.pory"
	face_right
# 167 "data/maps/Newmap11/scripts.pory"
	delay_16
# 168 "data/maps/Newmap11/scripts.pory"
	delay_16
# 169 "data/maps/Newmap11/scripts.pory"
	delay_16
# 170 "data/maps/Newmap11/scripts.pory"
	delay_16
# 171 "data/maps/Newmap11/scripts.pory"
	walk_up
# 171 "data/maps/Newmap11/scripts.pory"
	walk_up
# 171 "data/maps/Newmap11/scripts.pory"
	walk_up
# 171 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 173 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 174 "data/maps/Newmap11/scripts.pory"
	delay_16
# 175 "data/maps/Newmap11/scripts.pory"
	walk_right
# 175 "data/maps/Newmap11/scripts.pory"
	walk_right
# 175 "data/maps/Newmap11/scripts.pory"
	walk_right
# 175 "data/maps/Newmap11/scripts.pory"
	walk_right
# 176 "data/maps/Newmap11/scripts.pory"
	walk_up
# 176 "data/maps/Newmap11/scripts.pory"
	walk_up
# 177 "data/maps/Newmap11/scripts.pory"
	delay_16
# 178 "data/maps/Newmap11/scripts.pory"
	delay_16
# 179 "data/maps/Newmap11/scripts.pory"
	face_right
# 180 "data/maps/Newmap11/scripts.pory"
	delay_16
# 181 "data/maps/Newmap11/scripts.pory"
	delay_16
# 182 "data/maps/Newmap11/scripts.pory"
	delay_16
# 183 "data/maps/Newmap11/scripts.pory"
	delay_16
# 184 "data/maps/Newmap11/scripts.pory"
	walk_up
# 184 "data/maps/Newmap11/scripts.pory"
	walk_up
# 184 "data/maps/Newmap11/scripts.pory"
	walk_up
# 185 "data/maps/Newmap11/scripts.pory"
	walk_right
# 186 "data/maps/Newmap11/scripts.pory"
	walk_up
# 186 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/Newmap11/scripts.pory"
alistai:
# 189 "data/maps/Newmap11/scripts.pory"
	walk_up
# 189 "data/maps/Newmap11/scripts.pory"
	walk_up
# 189 "data/maps/Newmap11/scripts.pory"
	walk_up
# 189 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 192 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 193 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 197 "data/maps/Newmap11/scripts.pory"
	lock
# 198 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 199 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 200 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 201 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 202 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 203 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 204 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 205 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 206 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 207 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 208 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 209 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 210 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 211 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 212 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 213 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 214 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 215 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 216 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 217 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 218 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 219 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 220 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 221 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 222 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 223 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 224 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 225 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 226 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 227 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 228 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 229 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 230 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 231 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 232 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 233 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 234 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 235 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 236 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 237 "data/maps/Newmap11/scripts.pory"
	namebox mewtwo
# 238 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 239 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 240 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 241 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 242 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 243 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 244 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 245 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 246 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 247 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 248 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 249 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 250 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 251 "data/maps/Newmap11/scripts.pory"
	release
	return


# 253 "data/maps/Newmap11/scripts.pory"
pay:
# 254 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 256 "data/maps/Newmap11/scripts.pory"
question:
# 257 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 260 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_1
# 270 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_1:
# 261 "data/maps/Newmap11/scripts.pory"
	lock
# 262 "data/maps/Newmap11/scripts.pory"
	namebox Xylar
# 263 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0, MSGBOX_AUTOCLOSE
# 264 "data/maps/Newmap11/scripts.pory"
	hidenamebox
# 265 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 267 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY, 22, 27
	return


Alistairarrive_Text_0:
# 29 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........\p"
	.string "..What....\p"
	.string "What should we do now?$"

Alistairarrive_Text_1:
# 41 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are, I don't need your\n"
	.string "company.$"

Alistairarrive_Text_2:
# 44 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much,\n"
	.string "Xylar I presume?$"

Alistairarrive_Text_3:
# 49 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another one of their pawns?\p"
	.string "Did they send you here to finish what\n"
	.string "they started?$"

Alistairarrive_Text_4:
# 52 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I am not.\p"
	.string "My name is Alistair Caelum.\n"
	.string "I am the headmaster of the Astralis\l"
	.string "Academy.$"

Alistairarrive_Text_5:
# 55 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And what does a headmaster want from\n"
	.string "me?$"

Alistairarrive_Text_6:
# 58 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I came here because I heard about what\n"
	.string "happened.....your family, your home.$"

Alistairarrive_Text_7:
# 61 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You're here to give me some lecture\n"
	.string "about life and moving on?\p"
	.string "Save it.\n"
	.string "I don't need your pity.$"

Alistairarrive_Text_8:
# 64 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here to pity you.\n"
	.string "I am here because I'm worried about you.\l"
	.string "Aurther was my best friend and you're\l"
	.string "his son. He wanted to leave you in my\l"
	.string "care once the academy started so I'm\l"
	.string "here to take you there.$"

Alistairarrive_Text_9:
# 69 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Best Friend?\p"
	.string "Then why weren't you there to help him?$"

Alistairarrive_Text_10:
# 72 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........$"

Alistairarrive_Text_11:
# 75 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And I don't have time for academy.\n"
	.string "I'm already strong enough and I just\l"
	.string "want to kill every single one of them.$"

Alistairarrive_Text_12:
# 78 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't solve anything.$"

Alistairarrive_Text_13:
# 81 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you know?\n"
	.string "You can say that because you don't\l"
	.string "know what I've been through.$"

Alistairarrive_Text_14:
# 84 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're right, I don't.\n"
	.string "But what I do know is that\p"
	.string "Revenge is not the right path, it won't\n"
	.string "lead you where you think it will.\p"
	.string "It will blind you and eventually destroy\n"
	.string "you.$"

Alistairarrive_Text_15:
# 87 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't preach to me! I've already taken\n"
	.string "down one of their strongest. If you\l"
	.string "think you can change my mind, you're\l"
	.string "wasting your breath.$"

Alistairarrive_Text_16:
# 90 "data/maps/Newmap11/scripts.pory"
	.string "(Sighs)\p"
	.string "(He's just as stubborn as Aurther.)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that but\n"
	.string "strength isn't about winning one fight.\l"
	.string "It's about being ready for the next no\l"
	.string "matter how hard it gets.$"

Alistairarrive_Text_17:
# 93 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need advice from someone I just\n"
	.string "met. If you think you're so wise, why\l"
	.string "don't you prove yourself?$"

Alistairarrive_Text_18:
# 96 "data/maps/Newmap11/scripts.pory"
	.string "(Smirks)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, Here's the deal. We'll battle. If\n"
	.string "you win. I'll leave and you can do\l"
	.string "whatever you want.\p"
	.string "But if I win you'll come to the academy\n"
	.string "and train there for at least two years.$"

Alistairarrive_Text_19:
# 99 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine I'll take your little challange. But\n"
	.string "don't cry when I crush you.$"

Alistairarrive_Text_20:
# 106 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_21:
# 114 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_22:
# 117 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_23:
# 120 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_24:
# 123 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_25:
# 132 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 201 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 204 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 207 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 210 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 213 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 216 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 219 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 222 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 225 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 229 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 232 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 235 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 238 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 248 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 263 "data/maps/Newmap11/scripts.pory"
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
# 140 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 153 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
