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
	playbgm MUS_DP_TITLE, FALSE
# 40 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_0
# 41 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 42 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_1
# 44 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 45 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_1
# 46 "data/maps/Newmap11/scripts.pory"
	closemessage
# 47 "data/maps/Newmap11/scripts.pory"
	removefieldmugshot
# 48 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 49 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_2
# 50 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 51 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 52 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_2
# 53 "data/maps/Newmap11/scripts.pory"
	closemessage
# 54 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_3
# 55 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 56 "data/maps/Newmap11/scripts.pory"
	playfirstmoncry
# 57 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 58 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_4
# 59 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 60 "data/maps/Newmap11/scripts.pory"
	closemessage
# 61 "data/maps/Newmap11/scripts.pory"
	waitbuttonpress
# 62 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 63 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_4
# 64 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 65 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 67 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 68 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_5
# 69 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 70 "data/maps/Newmap11/scripts.pory"
	closemessage
# 71 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 72 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_6
# 73 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 74 "data/maps/Newmap11/scripts.pory"
	closemessage
# 75 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 76 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_8
# 77 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 78 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 79 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_7
# 80 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 81 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ROAR_2
# 82 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 83 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_9
# 84 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 85 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_8
# 86 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 87 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_10
# 88 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 89 "data/maps/Newmap11/scripts.pory"
	closemessage
# 90 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 91 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_11
# 92 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 93 "data/maps/Newmap11/scripts.pory"
	closemessage
# 94 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 95 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 96 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 97 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_12
# 98 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_9
# 99 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_13
# 100 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 101 "data/maps/Newmap11/scripts.pory"
	closemessage
# 102 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 103 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, upset
# 104 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 105 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_14
# 106 "data/maps/Newmap11/scripts.pory"
	closemessage
# 107 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 109 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 110 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_15
# 111 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 112 "data/maps/Newmap11/scripts.pory"
	closemessage
# 113 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_10
# 114 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 115 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 116 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_16
# 117 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 118 "data/maps/Newmap11/scripts.pory"
	closemessage
# 119 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_11
# 120 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 121 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 122 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_17
# 123 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 124 "data/maps/Newmap11/scripts.pory"
	closemessage
# 125 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_12
# 126 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 127 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_18
# 128 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 129 "data/maps/Newmap11/scripts.pory"
	closemessage
# 130 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 131 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_19
# 132 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 133 "data/maps/Newmap11/scripts.pory"
	closemessage
# 134 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 135 "data/maps/Newmap11/scripts.pory"
	doweather
# 136 "data/maps/Newmap11/scripts.pory"
	playse SE_M_BLIZZARD
# 137 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_13
# 138 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalopen
# 139 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 140 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_20
# 141 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 142 "data/maps/Newmap11/scripts.pory"
	closemessage
# 143 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_14
# 144 "data/maps/Newmap11/scripts.pory"
	removeobject 4
# 145 "data/maps/Newmap11/scripts.pory"
	playse SE_FU_ZAKU
# 146 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 147 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_21
# 148 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 149 "data/maps/Newmap11/scripts.pory"
	closemessage
# 150 "data/maps/Newmap11/scripts.pory"
	waitmovement 5
# 151 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 152 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalclose
# 153 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 154 "data/maps/Newmap11/scripts.pory"
	removeobject 5
# 155 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_DP_TITLE, FALSE
# 156 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_NONE
# 157 "data/maps/Newmap11/scripts.pory"
	doweather
# 158 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_15
# 159 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 160 "data/maps/Newmap11/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 161 "data/maps/Newmap11/scripts.pory"
	waitse
# 162 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 163 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 164 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 165 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_22
# 166 "data/maps/Newmap11/scripts.pory"
	closemessage
# 167 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 168 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 169 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_23
# 170 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 171 "data/maps/Newmap11/scripts.pory"
	closemessage
# 172 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_12
# 173 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 174 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_24
# 175 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 176 "data/maps/Newmap11/scripts.pory"
	closemessage
# 177 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 178 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 179 "data/maps/Newmap11/scripts.pory"
	special RemoveCameraObject
# 180 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NIHIL_FIRST
# 181 "data/maps/Newmap11/scripts.pory"
	release
# 182 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 50
	return


# 185 "data/maps/Newmap11/scripts.pory"
distortionportalclose:
# 186 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 187 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 189 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 190 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 191 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 192 "data/maps/Newmap11/scripts.pory"
	face_left
# 193 "data/maps/Newmap11/scripts.pory"
	face_up
# 194 "data/maps/Newmap11/scripts.pory"
	face_down
# 195 "data/maps/Newmap11/scripts.pory"
	set_invisible
	step_end

# 197 "data/maps/Newmap11/scripts.pory"
distortionportalopen:
# 198 "data/maps/Newmap11/scripts.pory"
	set_visible
# 199 "data/maps/Newmap11/scripts.pory"
	face_down
# 200 "data/maps/Newmap11/scripts.pory"
	face_up
# 201 "data/maps/Newmap11/scripts.pory"
	face_left
# 202 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 203 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 204 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 205 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 206 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 207 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 208 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 209 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 210 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 211 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 212 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 213 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 214 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 215 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 216 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 217 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 218 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 219 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 220 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 221 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 222 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 223 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 224 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 225 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 226 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 227 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 228 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
	step_end

Alistairarrive::
# 232 "data/maps/Newmap11/scripts.pory"
	lockall
# 233 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 234 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 235 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 236 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 237 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 238 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 239 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 240 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 241 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 242 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 243 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 244 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 245 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 246 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 247 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 248 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 249 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 250 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 251 "data/maps/Newmap11/scripts.pory"
	speakername unknown
# 252 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 253 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces1
# 254 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 255 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 256 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 257 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 258 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4, MSGBOX_AUTOCLOSE
# 260 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 261 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5, MSGBOX_AUTOCLOSE
# 263 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 264 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6, MSGBOX_AUTOCLOSE
# 266 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 267 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7, MSGBOX_AUTOCLOSE
# 269 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 270 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8, MSGBOX_AUTOCLOSE
# 272 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 273 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 274 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 275 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9, MSGBOX_AUTOCLOSE
# 277 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 278 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10, MSGBOX_AUTOCLOSE
# 280 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 281 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11, MSGBOX_AUTOCLOSE
# 283 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 284 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12, MSGBOX_AUTOCLOSE
# 286 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 287 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13, MSGBOX_AUTOCLOSE
# 289 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 290 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14, MSGBOX_AUTOCLOSE
# 292 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 293 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15, MSGBOX_AUTOCLOSE
# 295 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 296 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16, MSGBOX_AUTOCLOSE
# 298 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 299 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17, MSGBOX_AUTOCLOSE
# 301 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 302 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 304 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 305 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19, MSGBOX_AUTOCLOSE
# 306 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 307 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 308 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 309 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 310 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 311 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 312 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20, MSGBOX_AUTOCLOSE
# 313 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 314 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 315 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 316 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 317 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 318 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 319 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 321 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 322 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22, MSGBOX_AUTOCLOSE
# 324 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 325 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 327 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 328 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 330 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 331 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 332 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 333 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 334 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 335 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces2
# 336 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 337 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 339 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 340 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 341 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 342 "data/maps/Newmap11/scripts.pory"
	releaseall
# 343 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 344 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 349 "data/maps/Newmap11/scripts.pory"
traces2:
# 350 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 352 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 353 "data/maps/Newmap11/scripts.pory"
	walk_down
# 354 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 356 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 357 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 363 "data/maps/Newmap11/scripts.pory"
	walk_down
# 364 "data/maps/Newmap11/scripts.pory"
	walk_left
# 365 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 367 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 368 "data/maps/Newmap11/scripts.pory"
	walk_right
# 368 "data/maps/Newmap11/scripts.pory"
	walk_right
# 368 "data/maps/Newmap11/scripts.pory"
	walk_right
# 368 "data/maps/Newmap11/scripts.pory"
	walk_right
# 369 "data/maps/Newmap11/scripts.pory"
	walk_up
# 369 "data/maps/Newmap11/scripts.pory"
	walk_up
# 369 "data/maps/Newmap11/scripts.pory"
	walk_up
# 370 "data/maps/Newmap11/scripts.pory"
	delay_16
# 371 "data/maps/Newmap11/scripts.pory"
	delay_16
# 372 "data/maps/Newmap11/scripts.pory"
	face_right
# 373 "data/maps/Newmap11/scripts.pory"
	delay_16
# 374 "data/maps/Newmap11/scripts.pory"
	delay_16
# 375 "data/maps/Newmap11/scripts.pory"
	delay_16
# 376 "data/maps/Newmap11/scripts.pory"
	delay_16
# 377 "data/maps/Newmap11/scripts.pory"
	walk_up
# 377 "data/maps/Newmap11/scripts.pory"
	walk_up
# 377 "data/maps/Newmap11/scripts.pory"
	walk_up
# 377 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 379 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 380 "data/maps/Newmap11/scripts.pory"
	delay_16
# 381 "data/maps/Newmap11/scripts.pory"
	walk_right
# 381 "data/maps/Newmap11/scripts.pory"
	walk_right
# 381 "data/maps/Newmap11/scripts.pory"
	walk_right
# 381 "data/maps/Newmap11/scripts.pory"
	walk_right
# 382 "data/maps/Newmap11/scripts.pory"
	walk_up
# 382 "data/maps/Newmap11/scripts.pory"
	walk_up
# 383 "data/maps/Newmap11/scripts.pory"
	delay_16
# 384 "data/maps/Newmap11/scripts.pory"
	delay_16
# 385 "data/maps/Newmap11/scripts.pory"
	face_right
# 386 "data/maps/Newmap11/scripts.pory"
	delay_16
# 387 "data/maps/Newmap11/scripts.pory"
	delay_16
# 388 "data/maps/Newmap11/scripts.pory"
	delay_16
# 389 "data/maps/Newmap11/scripts.pory"
	delay_16
# 390 "data/maps/Newmap11/scripts.pory"
	walk_up
# 390 "data/maps/Newmap11/scripts.pory"
	walk_up
# 390 "data/maps/Newmap11/scripts.pory"
	walk_up
# 391 "data/maps/Newmap11/scripts.pory"
	walk_right
# 392 "data/maps/Newmap11/scripts.pory"
	walk_up
# 392 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 394 "data/maps/Newmap11/scripts.pory"
alistai:
# 395 "data/maps/Newmap11/scripts.pory"
	walk_up
# 395 "data/maps/Newmap11/scripts.pory"
	walk_up
# 395 "data/maps/Newmap11/scripts.pory"
	walk_up
# 395 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 397 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 398 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 399 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 403 "data/maps/Newmap11/scripts.pory"
	lock
# 404 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 405 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 406 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 407 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 409 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 410 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 412 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 413 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 415 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 416 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 418 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 419 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 421 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 422 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 424 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 425 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 427 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 428 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 430 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 431 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 433 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 434 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 435 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 437 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 438 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 440 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 441 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 443 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 444 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 446 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 447 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 448 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 449 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 450 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 451 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 452 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 453 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 454 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 456 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 457 "data/maps/Newmap11/scripts.pory"
	release
	return


# 459 "data/maps/Newmap11/scripts.pory"
pay:
# 460 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 462 "data/maps/Newmap11/scripts.pory"
question:
# 463 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 466 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_1
# 478 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_1:
# 467 "data/maps/Newmap11/scripts.pory"
	lock
# 468 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 469 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0, MSGBOX_AUTOCLOSE
# 471 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 472 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 473 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 474 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 475 "data/maps/Newmap11/scripts.pory"
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
# 40 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_1:
# 43 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

# 49 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_2:
# 49 "data/maps/Newmap11/scripts.pory"
	walk_up
# 49 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_3:
# 54 "data/maps/Newmap11/scripts.pory"
	walk_right
# 54 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_4:
# 63 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 63 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 63 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
	step_end

# 66 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_5:
# 66 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
	step_end

# 78 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_6:
# 78 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 79 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_7:
# 79 "data/maps/Newmap11/scripts.pory"
	walk_fast_up
# 79 "data/maps/Newmap11/scripts.pory"
	walk_fast_left
# 79 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 85 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_8:
# 85 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 85 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 85 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 85 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 85 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
	step_end

# 98 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_9:
# 98 "data/maps/Newmap11/scripts.pory"
	face_left
	step_end

# 113 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_10:
# 113 "data/maps/Newmap11/scripts.pory"
	face_down
# 113 "data/maps/Newmap11/scripts.pory"
	delay_8
# 113 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 119 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_11:
# 119 "data/maps/Newmap11/scripts.pory"
	delay_8
# 119 "data/maps/Newmap11/scripts.pory"
	face_up
# 119 "data/maps/Newmap11/scripts.pory"
	delay_8
# 119 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 125 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_12:
# 125 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 137 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_13:
# 137 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 143 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_14:
# 143 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 143 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 158 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_15:
# 158 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 158 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 158 "data/maps/Newmap11/scripts.pory"
	shake_vertical
	step_end

# 177 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_16:
# 177 "data/maps/Newmap11/scripts.pory"
	walk_down
# 177 "data/maps/Newmap11/scripts.pory"
	walk_down
# 177 "data/maps/Newmap11/scripts.pory"
	walk_down
	step_end

NihilFirstVisit1_Text_0:
# 44 "data/maps/Newmap11/scripts.pory"
	.string "Xylar$"

NihilFirstVisit1_Text_1:
# 45 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you.....?$"

NihilFirstVisit1_Text_2:
# 52 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You-!{PAUSE_UNTIL_PRESS} Get away from there!\p"
	.string "Mewtwo!$"

NihilFirstVisit1_Text_3:
# 57 "data/maps/Newmap11/scripts.pory"
	.string "Mewtwo$"

NihilFirstVisit1_Text_4:
# 58 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}.......$"

NihilFirstVisit1_Text_5:
# 68 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SHOCK}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Wait.$"

NihilFirstVisit1_Text_6:
# 72 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SHOCK}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}{PLAY_BGM}{MUS_BW12_107}\p"
	.string "Something about him… is not normal.\p"
	.string "I…… can't sense…… anything from him\n"
	.string "yet…{PAUSE_UNTIL_PRESS} my instincts are screaming at me\l"
	.string "to run.$"

NihilFirstVisit1_Text_7:
# 75 "data/maps/Newmap11/scripts.pory"
	.string "???$"

NihilFirstVisit1_Text_8:
# 76 "data/maps/Newmap11/scripts.pory"
	.string "{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Human life is an illusion. Even at its\n"
	.string "longest, it is but a hundred fleeting\l"
	.string "years.\p"
	.string "Beauty withers, strength decays, every\n"
	.string "embrace turns to dust. Yet still, humans\l"
	.string "worship appearances, clinging to flesh\l"
	.string "as though it were eternal.\p"
	.string "That… is not love…{PAUSE_UNTIL_PRESS} it is obsession.$"

NihilFirstVisit1_Text_9:
# 83 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}……$"

NihilFirstVisit1_Text_10:
# 87 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Am I scared?……{PAUSE_UNTIL_PRESS} No, It's not possible.)$"

NihilFirstVisit1_Text_11:
# 91 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tell me…… if the body is so precious,\n"
	.string "then why does it rot in the earth, while\l"
	.string "only the soul ascends to heaven?$"

NihilFirstVisit1_Text_12:
# 97 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}She died, and the world moved on.$"

NihilFirstVisit1_Text_13:
# 99 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Graves are not for the dead.\p"
	.string "They are for the living…{PAUSE_UNTIL_PRESS} to lie to\n"
	.string "themselves.\p"
	.string "That is the harsh reality of the world\n"
	.string "yet…{PAUSE_UNTIL_PRESS} I find it beautiful.$"

NihilFirstVisit1_Text_14:
# 105 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{RESET_FONT}{COLOR BLUE}{SHADOW LIGHT_GRAY}Beautiful…?\p"
	.string "You dare stand over my mother's grave\n"
	.string "and call her death {COLOR RED}{SHADOW LIGHT_GRAY}beautiful!{COLOR BLUE}{SHADOW LIGHT_GRAY}\p"
	.string "I'll kill you where you stand!!$"

NihilFirstVisit1_Text_15:
# 110 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar! Stop.$"

NihilFirstVisit1_Text_16:
# 116 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Do not mistake me as your enemy, for\n"
	.string "you do not interest me in any way.$"

NihilFirstVisit1_Text_17:
# 122 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I came only to witness the grave of one\n"
	.string "who once stood against me\p"
	.string "and who, for a fleeting moment,{PAUSE_UNTIL_PRESS} shone\n"
	.string "brighter than all others.$"

NihilFirstVisit1_Text_18:
# 127 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}But brightness is fragile and so is\n"
	.string "anger.\p"
	.string "You cling to anger.{PAUSE_UNTIL_PRESS} That is natural.$"

NihilFirstVisit1_Text_19:
# 131 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Live as you wish.\p"
	.string "Burn, break, or build…… it won't matter\n"
	.string "to me.$"

NihilFirstVisit1_Text_20:
# 140 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}In the end, all things return to\n"
	.string "nothing.$"

NihilFirstVisit1_Text_21:
# 147 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That is the truth I carry.$"

NihilFirstVisit1_Text_22:
# 165 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo……?!\p"
	.string "What happened…?$"

NihilFirstVisit1_Text_23:
# 169 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}That person……{PAUSE_UNTIL_PRESS} His presence… was\n"
	.string "overwhelming…\p"
	.string "He was neither light nor shadow……{PAUSE_UNTIL_PRESS}Only\n"
	.string "nothing.$"

NihilFirstVisit1_Text_24:
# 174 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Whoever he was…… we should avoid him\n"
	.string "until we grow strong.$"

Alistairarrive_Text_0:
# 239 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........\p"
	.string "..What....\p"
	.string "What should we do now?$"

Alistairarrive_Text_1:
# 250 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are, I don't need your\n"
	.string "company.$"

Alistairarrive_Text_2:
# 252 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much,\n"
	.string "Xylar I presume?$"

Alistairarrive_Text_3:
# 256 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another one of their pawns?\p"
	.string "Did they send you here to finish what\n"
	.string "they started?$"

Alistairarrive_Text_4:
# 258 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I am not.\p"
	.string "My name is Alistair Caelum.\n"
	.string "I am the headmaster of the Astralis\l"
	.string "Academy.$"

Alistairarrive_Text_5:
# 261 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And what does a headmaster want from\n"
	.string "me?$"

Alistairarrive_Text_6:
# 264 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I came here because I heard about what\n"
	.string "happened.....your family, your home.$"

Alistairarrive_Text_7:
# 267 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You're here to give me some lecture\n"
	.string "about life and moving on?\p"
	.string "Save it.\n"
	.string "I don't need your pity.$"

Alistairarrive_Text_8:
# 270 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here to pity you.\n"
	.string "I am here because I'm worried about you.\l"
	.string "Aurther was my best friend and you're\l"
	.string "his son. He wanted to leave you in my\l"
	.string "care once the academy started so I'm\l"
	.string "here to take you there.$"

Alistairarrive_Text_9:
# 275 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Best Friend?\p"
	.string "Then why weren't you there to help him?$"

Alistairarrive_Text_10:
# 278 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........$"

Alistairarrive_Text_11:
# 281 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And I don't have time for academy.\n"
	.string "I'm already strong enough and I just\l"
	.string "want to kill every single one of them.$"

Alistairarrive_Text_12:
# 284 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't solve anything.$"

Alistairarrive_Text_13:
# 287 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you know?\n"
	.string "You can say that because you don't\l"
	.string "know what I've been through.$"

Alistairarrive_Text_14:
# 290 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're right, I don't.\n"
	.string "But what I do know is that\p"
	.string "Revenge is not the right path, it won't\n"
	.string "lead you where you think it will.\p"
	.string "It will blind you and eventually destroy\n"
	.string "you.$"

Alistairarrive_Text_15:
# 293 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't preach to me! I've already taken\n"
	.string "down one of their strongest. If you\l"
	.string "think you can change my mind, you're\l"
	.string "wasting your breath.$"

Alistairarrive_Text_16:
# 296 "data/maps/Newmap11/scripts.pory"
	.string "(Sighs)\p"
	.string "(He's just as stubborn as Aurther.)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that but\n"
	.string "strength isn't about winning one fight.\l"
	.string "It's about being ready for the next no\l"
	.string "matter how hard it gets.$"

Alistairarrive_Text_17:
# 299 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need advice from someone I just\n"
	.string "met. If you think you're so wise, why\l"
	.string "don't you prove yourself?$"

Alistairarrive_Text_18:
# 302 "data/maps/Newmap11/scripts.pory"
	.string "(Smirks)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, Here's the deal. We'll battle. If\n"
	.string "you win. I'll leave and you can do\l"
	.string "whatever you want.\p"
	.string "But if I win you'll come to the academy\n"
	.string "and train there for at least two years.$"

Alistairarrive_Text_19:
# 305 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine I'll take your little challange. But\n"
	.string "don't cry when I crush you.$"

Alistairarrive_Text_20:
# 312 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_21:
# 319 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_22:
# 322 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_23:
# 325 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_24:
# 328 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_25:
# 337 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 407 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 410 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 413 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 416 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 419 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 422 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 425 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 428 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 431 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 435 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 438 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 441 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 444 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 454 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 469 "data/maps/Newmap11/scripts.pory"
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
# 346 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 359 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
