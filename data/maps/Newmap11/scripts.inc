Newmap11_MapScripts::
# 2 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 2, Alistairarrive
	.2byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 0, NihilFirstVisit
# 8 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 2, alis
# 9 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 1, mewtwogone
	.2byte 0


NihilFirstVisit::
# 14 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 15 "data/maps/Newmap11/scripts.pory"
	doweather
# 16 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 17 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NIHIL_FIRST
	return


mewtwogone::
# 20 "data/maps/Newmap11/scripts.pory"
	addobject 3, MAP_NEWMAP11
# 21 "data/maps/Newmap11/scripts.pory"
	setobjectxy 3, 11, 1
	return


alis::
# 24 "data/maps/Newmap11/scripts.pory"
	hideobjectat 1, MAP_NEWMAP11
# 25 "data/maps/Newmap11/scripts.pory"
	hideobjectat 2, MAP_NEWMAP11
# 26 "data/maps/Newmap11/scripts.pory"
	hideobjectat 3, MAP_NEWMAP11
	return


NihilFirstVisit0::
# 31 "data/maps/Newmap11/scripts.pory"
	lock
# 32 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit0_Movement_0
# 33 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 34 "data/maps/Newmap11/scripts.pory"
	goto NihilFirstVisit1
	return


NihilFirstVisit1::
# 38 "data/maps/Newmap11/scripts.pory"
	lock
# 39 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 40 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_0
# 41 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 42 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 43 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_1
# 44 "data/maps/Newmap11/scripts.pory"
	closemessage
# 45 "data/maps/Newmap11/scripts.pory"
	removefieldmugshot
# 46 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 47 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_1
# 48 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 49 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 50 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_2
# 51 "data/maps/Newmap11/scripts.pory"
	closemessage
# 52 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_2
# 53 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 54 "data/maps/Newmap11/scripts.pory"
	playfirstmoncry
# 55 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 56 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_4
# 57 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 58 "data/maps/Newmap11/scripts.pory"
	closemessage
# 59 "data/maps/Newmap11/scripts.pory"
	waitbuttonpress
# 60 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 61 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_3
# 62 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 63 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_5
# 64 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 65 "data/maps/Newmap11/scripts.pory"
	closemessage
# 66 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 67 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_7
# 68 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 69 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_4
# 70 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 71 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 72 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ROAR_2
# 73 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 74 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_8
# 75 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 76 "data/maps/Newmap11/scripts.pory"
	closemessage
# 77 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 78 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_9
# 79 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 80 "data/maps/Newmap11/scripts.pory"
	closemessage
# 81 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_4
# 82 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 83 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 84 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_10
# 85 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 86 "data/maps/Newmap11/scripts.pory"
	closemessage
# 87 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 88 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_11
# 89 "data/maps/Newmap11/scripts.pory"
	closemessage
# 90 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 91 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_12
# 92 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 93 "data/maps/Newmap11/scripts.pory"
	closemessage
# 94 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 95 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_13
# 96 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 97 "data/maps/Newmap11/scripts.pory"
	closemessage
# 98 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 99 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 100 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_14
# 101 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 102 "data/maps/Newmap11/scripts.pory"
	closemessage
# 103 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_7
# 104 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 105 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_15
# 106 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 107 "data/maps/Newmap11/scripts.pory"
	closemessage
# 108 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 109 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_16
# 110 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 111 "data/maps/Newmap11/scripts.pory"
	closemessage
# 112 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 113 "data/maps/Newmap11/scripts.pory"
	doweather
# 114 "data/maps/Newmap11/scripts.pory"
	playse SE_M_BLIZZARD
# 115 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_8
# 116 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalopen
# 117 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 118 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_17
# 119 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 120 "data/maps/Newmap11/scripts.pory"
	closemessage
# 121 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_9
# 122 "data/maps/Newmap11/scripts.pory"
	removeobject 4
# 123 "data/maps/Newmap11/scripts.pory"
	playse SE_WARP_IN
# 124 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_6
# 125 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_18
# 126 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 127 "data/maps/Newmap11/scripts.pory"
	closemessage
# 128 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 129 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalclose
# 130 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 131 "data/maps/Newmap11/scripts.pory"
	removeobject 5
# 132 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_10
# 133 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 134 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_NONE
# 135 "data/maps/Newmap11/scripts.pory"
	doweather
# 136 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 137 "data/maps/Newmap11/scripts.pory"
	special RemoveCameraObject
# 138 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NIHIL_FIRST
# 139 "data/maps/Newmap11/scripts.pory"
	release
# 140 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 50
	return


# 143 "data/maps/Newmap11/scripts.pory"
distortionportalclose:
# 144 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 146 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 147 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 148 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 149 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 150 "data/maps/Newmap11/scripts.pory"
	face_left
# 151 "data/maps/Newmap11/scripts.pory"
	face_up
# 152 "data/maps/Newmap11/scripts.pory"
	face_down
# 153 "data/maps/Newmap11/scripts.pory"
	set_invisible
	step_end

# 155 "data/maps/Newmap11/scripts.pory"
distortionportalopen:
# 156 "data/maps/Newmap11/scripts.pory"
	set_visible
# 157 "data/maps/Newmap11/scripts.pory"
	face_down
# 158 "data/maps/Newmap11/scripts.pory"
	face_up
# 159 "data/maps/Newmap11/scripts.pory"
	face_left
# 160 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 161 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 162 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 163 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 164 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 165 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 166 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 167 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 168 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 169 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 170 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 171 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 172 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 173 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 174 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 175 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 176 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 177 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 178 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 179 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 180 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
	step_end

Alistairarrive::
# 184 "data/maps/Newmap11/scripts.pory"
	lockall
# 185 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 186 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 187 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 188 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 189 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 190 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 191 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 192 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 193 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 194 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 195 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 196 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 197 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 198 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 199 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 200 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 201 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 202 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 203 "data/maps/Newmap11/scripts.pory"
	speakername unknown
# 204 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces1
# 206 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 207 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 208 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 209 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 210 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4, MSGBOX_AUTOCLOSE
# 212 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 213 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5, MSGBOX_AUTOCLOSE
# 215 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 216 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6, MSGBOX_AUTOCLOSE
# 218 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 219 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7, MSGBOX_AUTOCLOSE
# 221 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 222 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8, MSGBOX_AUTOCLOSE
# 224 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 225 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 226 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 227 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9, MSGBOX_AUTOCLOSE
# 229 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 230 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10, MSGBOX_AUTOCLOSE
# 232 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 233 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11, MSGBOX_AUTOCLOSE
# 235 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 236 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12, MSGBOX_AUTOCLOSE
# 238 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 239 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13, MSGBOX_AUTOCLOSE
# 241 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 242 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14, MSGBOX_AUTOCLOSE
# 244 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 245 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15, MSGBOX_AUTOCLOSE
# 247 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 248 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16, MSGBOX_AUTOCLOSE
# 250 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 251 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17, MSGBOX_AUTOCLOSE
# 253 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 254 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 256 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 257 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19, MSGBOX_AUTOCLOSE
# 258 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 259 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 260 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 261 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 262 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 263 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 264 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20, MSGBOX_AUTOCLOSE
# 265 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 266 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 267 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 268 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 269 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 270 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 271 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 273 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 274 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22, MSGBOX_AUTOCLOSE
# 276 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 277 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 279 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 280 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 282 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 284 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 285 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 286 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 287 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces2
# 288 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 289 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 291 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 292 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 293 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 294 "data/maps/Newmap11/scripts.pory"
	releaseall
# 295 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 296 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 301 "data/maps/Newmap11/scripts.pory"
traces2:
# 302 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 304 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 305 "data/maps/Newmap11/scripts.pory"
	walk_down
# 306 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 308 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 309 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 314 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 315 "data/maps/Newmap11/scripts.pory"
	walk_down
# 316 "data/maps/Newmap11/scripts.pory"
	walk_left
# 317 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 319 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 320 "data/maps/Newmap11/scripts.pory"
	walk_right
# 320 "data/maps/Newmap11/scripts.pory"
	walk_right
# 320 "data/maps/Newmap11/scripts.pory"
	walk_right
# 320 "data/maps/Newmap11/scripts.pory"
	walk_right
# 321 "data/maps/Newmap11/scripts.pory"
	walk_up
# 321 "data/maps/Newmap11/scripts.pory"
	walk_up
# 321 "data/maps/Newmap11/scripts.pory"
	walk_up
# 322 "data/maps/Newmap11/scripts.pory"
	delay_16
# 323 "data/maps/Newmap11/scripts.pory"
	delay_16
# 324 "data/maps/Newmap11/scripts.pory"
	face_right
# 325 "data/maps/Newmap11/scripts.pory"
	delay_16
# 326 "data/maps/Newmap11/scripts.pory"
	delay_16
# 327 "data/maps/Newmap11/scripts.pory"
	delay_16
# 328 "data/maps/Newmap11/scripts.pory"
	delay_16
# 329 "data/maps/Newmap11/scripts.pory"
	walk_up
# 329 "data/maps/Newmap11/scripts.pory"
	walk_up
# 329 "data/maps/Newmap11/scripts.pory"
	walk_up
# 329 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 331 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 332 "data/maps/Newmap11/scripts.pory"
	delay_16
# 333 "data/maps/Newmap11/scripts.pory"
	walk_right
# 333 "data/maps/Newmap11/scripts.pory"
	walk_right
# 333 "data/maps/Newmap11/scripts.pory"
	walk_right
# 333 "data/maps/Newmap11/scripts.pory"
	walk_right
# 334 "data/maps/Newmap11/scripts.pory"
	walk_up
# 334 "data/maps/Newmap11/scripts.pory"
	walk_up
# 335 "data/maps/Newmap11/scripts.pory"
	delay_16
# 336 "data/maps/Newmap11/scripts.pory"
	delay_16
# 337 "data/maps/Newmap11/scripts.pory"
	face_right
# 338 "data/maps/Newmap11/scripts.pory"
	delay_16
# 339 "data/maps/Newmap11/scripts.pory"
	delay_16
# 340 "data/maps/Newmap11/scripts.pory"
	delay_16
# 341 "data/maps/Newmap11/scripts.pory"
	delay_16
# 342 "data/maps/Newmap11/scripts.pory"
	walk_up
# 342 "data/maps/Newmap11/scripts.pory"
	walk_up
# 342 "data/maps/Newmap11/scripts.pory"
	walk_up
# 343 "data/maps/Newmap11/scripts.pory"
	walk_right
# 344 "data/maps/Newmap11/scripts.pory"
	walk_up
# 344 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/Newmap11/scripts.pory"
alistai:
# 347 "data/maps/Newmap11/scripts.pory"
	walk_up
# 347 "data/maps/Newmap11/scripts.pory"
	walk_up
# 347 "data/maps/Newmap11/scripts.pory"
	walk_up
# 347 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 349 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 350 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 351 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 355 "data/maps/Newmap11/scripts.pory"
	lock
# 356 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 357 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 358 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 359 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 361 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 362 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 364 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 365 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 367 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 368 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 370 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 371 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 373 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 374 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 376 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 377 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 379 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 380 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 382 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 383 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 385 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 386 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 387 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 389 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 390 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 392 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 393 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 395 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 396 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 398 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 400 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 401 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 402 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 403 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 404 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 405 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 406 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 408 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 409 "data/maps/Newmap11/scripts.pory"
	release
	return


# 411 "data/maps/Newmap11/scripts.pory"
pay:
# 412 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 414 "data/maps/Newmap11/scripts.pory"
question:
# 415 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 418 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_1
# 430 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_1:
# 419 "data/maps/Newmap11/scripts.pory"
	lock
# 420 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 421 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0, MSGBOX_AUTOCLOSE
# 423 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 424 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 425 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 426 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 427 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_HARBORAC, 22, 27
	return


# 32 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit0_Movement_0:
# 32 "data/maps/Newmap11/scripts.pory"
	walk_right
	step_end

# 40 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_0:
# 40 "data/maps/Newmap11/scripts.pory"
	walk_up
# 40 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_1:
# 47 "data/maps/Newmap11/scripts.pory"
	walk_up
# 47 "data/maps/Newmap11/scripts.pory"
	walk_up
# 47 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_2:
# 52 "data/maps/Newmap11/scripts.pory"
	walk_right
# 52 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_3:
# 61 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_4:
# 69 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 70 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_5:
# 70 "data/maps/Newmap11/scripts.pory"
	walk_fast_up
# 70 "data/maps/Newmap11/scripts.pory"
	walk_fast_left
# 70 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 98 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_6:
# 98 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 103 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_7:
# 103 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 115 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_8:
# 115 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 121 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_9:
# 121 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 121 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 132 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_10:
# 132 "data/maps/Newmap11/scripts.pory"
	walk_down
# 132 "data/maps/Newmap11/scripts.pory"
	walk_down
# 132 "data/maps/Newmap11/scripts.pory"
	walk_down
	step_end

NihilFirstVisit1_Text_0:
# 42 "data/maps/Newmap11/scripts.pory"
	.string "Xylar$"

NihilFirstVisit1_Text_1:
# 43 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you.....?$"

NihilFirstVisit1_Text_2:
# 50 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You-!{PAUSE_UNTIL_PRESS} Get away from there!\p"
	.string "Mewtwo!$"

NihilFirstVisit1_Text_3:
# 55 "data/maps/Newmap11/scripts.pory"
	.string "Mewtwo$"

NihilFirstVisit1_Text_4:
# 56 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}.......$"

NihilFirstVisit1_Text_5:
# 63 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SHOCK}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Wait.{PLAY_BGM}{MUS_BW12_107}\p"
	.string "Something about him… is not normal.\p"
	.string "I…… can't sense…… anything from him\n"
	.string "yet…{PAUSE_UNTIL_PRESS} my instincts are screaming at me\l"
	.string "to run.$"

NihilFirstVisit1_Text_6:
# 66 "data/maps/Newmap11/scripts.pory"
	.string "???$"

NihilFirstVisit1_Text_7:
# 67 "data/maps/Newmap11/scripts.pory"
	.string "{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Human life is an illusion. Even at its\n"
	.string "longest, it is but a hundred fleeting\l"
	.string "years.\p"
	.string "Beauty withers, strength decays, every\n"
	.string "embrace turns to dust. Yet still, humans\l"
	.string "worship appearances, clinging to flesh\l"
	.string "as though it were eternal.\p"
	.string "That… is not love…{PAUSE_UNTIL_PRESS} it is obsession.$"

NihilFirstVisit1_Text_8:
# 74 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}……$"

NihilFirstVisit1_Text_9:
# 78 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tell me…… if the body is so precious,\n"
	.string "then why does it rot in the earth, while\l"
	.string "only the soul ascends to heaven?$"

NihilFirstVisit1_Text_10:
# 84 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}She died, and the world moved on.\p"
	.string "Graves are not for the dead.\p"
	.string "They are for the living…{PAUSE_UNTIL_PRESS} to lie to\n"
	.string "themselves.\p"
	.string "That is the harsh reality of the world\n"
	.string "yet…{PAUSE_UNTIL_PRESS} I find it beautiful.$"

NihilFirstVisit1_Text_11:
# 88 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{RESET_FONT}{COLOR BLUE}{SHADOW LIGHT_GRAY}Beautiful…?\p"
	.string "You dare stand over my mother's grave\n"
	.string "and call her death {COLOR RED}{SHADOW LIGHT_GRAY}beautiful!{COLOR BLUE}{SHADOW LIGHT_GRAY}\p"
	.string "I'll kill you where you stand!!$"

NihilFirstVisit1_Text_12:
# 91 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar! Stop.$"

NihilFirstVisit1_Text_13:
# 95 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Do not mistake me as your enemy, for\n"
	.string "you do not interest me in any way.$"

NihilFirstVisit1_Text_14:
# 100 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I came only to witness the grave of one\n"
	.string "who stood against me\p"
	.string "and who, for a fleeting moment,{PAUSE_UNTIL_PRESS} shone\n"
	.string "brighter than all others.\p"
	.string "But brightness is fragile and so is\n"
	.string "anger.$"

NihilFirstVisit1_Text_15:
# 105 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You cling to anger. That is natural.$"

NihilFirstVisit1_Text_16:
# 109 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Live as you wish.\p"
	.string "Burn, break, or build…… it won't matter\n"
	.string "to me.$"

NihilFirstVisit1_Text_17:
# 118 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}In the end, all things return to\n"
	.string "nothing.$"

NihilFirstVisit1_Text_18:
# 125 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That is the truth I carry.$"

Alistairarrive_Text_0:
# 191 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........\p"
	.string "..What....\p"
	.string "What should we do now?$"

Alistairarrive_Text_1:
# 202 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are, I don't need your\n"
	.string "company.$"

Alistairarrive_Text_2:
# 204 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much,\n"
	.string "Xylar I presume?$"

Alistairarrive_Text_3:
# 208 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another one of their pawns?\p"
	.string "Did they send you here to finish what\n"
	.string "they started?$"

Alistairarrive_Text_4:
# 210 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I am not.\p"
	.string "My name is Alistair Caelum.\n"
	.string "I am the headmaster of the Astralis\l"
	.string "Academy.$"

Alistairarrive_Text_5:
# 213 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And what does a headmaster want from\n"
	.string "me?$"

Alistairarrive_Text_6:
# 216 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I came here because I heard about what\n"
	.string "happened.....your family, your home.$"

Alistairarrive_Text_7:
# 219 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You're here to give me some lecture\n"
	.string "about life and moving on?\p"
	.string "Save it.\n"
	.string "I don't need your pity.$"

Alistairarrive_Text_8:
# 222 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here to pity you.\n"
	.string "I am here because I'm worried about you.\l"
	.string "Aurther was my best friend and you're\l"
	.string "his son. He wanted to leave you in my\l"
	.string "care once the academy started so I'm\l"
	.string "here to take you there.$"

Alistairarrive_Text_9:
# 227 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Best Friend?\p"
	.string "Then why weren't you there to help him?$"

Alistairarrive_Text_10:
# 230 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........$"

Alistairarrive_Text_11:
# 233 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And I don't have time for academy.\n"
	.string "I'm already strong enough and I just\l"
	.string "want to kill every single one of them.$"

Alistairarrive_Text_12:
# 236 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't solve anything.$"

Alistairarrive_Text_13:
# 239 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you know?\n"
	.string "You can say that because you don't\l"
	.string "know what I've been through.$"

Alistairarrive_Text_14:
# 242 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're right, I don't.\n"
	.string "But what I do know is that\p"
	.string "Revenge is not the right path, it won't\n"
	.string "lead you where you think it will.\p"
	.string "It will blind you and eventually destroy\n"
	.string "you.$"

Alistairarrive_Text_15:
# 245 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't preach to me! I've already taken\n"
	.string "down one of their strongest. If you\l"
	.string "think you can change my mind, you're\l"
	.string "wasting your breath.$"

Alistairarrive_Text_16:
# 248 "data/maps/Newmap11/scripts.pory"
	.string "(Sighs)\p"
	.string "(He's just as stubborn as Aurther.)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that but\n"
	.string "strength isn't about winning one fight.\l"
	.string "It's about being ready for the next no\l"
	.string "matter how hard it gets.$"

Alistairarrive_Text_17:
# 251 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need advice from someone I just\n"
	.string "met. If you think you're so wise, why\l"
	.string "don't you prove yourself?$"

Alistairarrive_Text_18:
# 254 "data/maps/Newmap11/scripts.pory"
	.string "(Smirks)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, Here's the deal. We'll battle. If\n"
	.string "you win. I'll leave and you can do\l"
	.string "whatever you want.\p"
	.string "But if I win you'll come to the academy\n"
	.string "and train there for at least two years.$"

Alistairarrive_Text_19:
# 257 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine I'll take your little challange. But\n"
	.string "don't cry when I crush you.$"

Alistairarrive_Text_20:
# 264 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_21:
# 271 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_22:
# 274 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_23:
# 277 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_24:
# 280 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_25:
# 289 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 359 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 362 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 365 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 368 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 371 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 374 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 377 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 380 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 383 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 387 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 390 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 393 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 396 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 406 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 421 "data/maps/Newmap11/scripts.pory"
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
# 298 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 311 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
