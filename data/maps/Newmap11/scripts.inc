Newmap11_MapScripts::
# 2 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 51, Alistairarrive
	.2byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 0, NihilFirstVisit
# 8 "data/maps/Newmap11/scripts.pory"
	map_script_2 ACADEMY_START, 51, alis
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
# 44 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_1
# 45 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 46 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_1
# 47 "data/maps/Newmap11/scripts.pory"
	closemessage
# 48 "data/maps/Newmap11/scripts.pory"
	removefieldmugshot
# 49 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 50 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_2
# 51 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 52 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 53 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_2
# 54 "data/maps/Newmap11/scripts.pory"
	closemessage
# 55 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_3
# 56 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 57 "data/maps/Newmap11/scripts.pory"
	playfirstmoncry
# 58 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 59 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_4
# 60 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 61 "data/maps/Newmap11/scripts.pory"
	closemessage
# 62 "data/maps/Newmap11/scripts.pory"
	waitbuttonpress
# 63 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 64 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_4
# 65 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 66 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 67 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 68 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 69 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_5
# 70 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 71 "data/maps/Newmap11/scripts.pory"
	closemessage
# 72 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 73 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_6
# 74 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 75 "data/maps/Newmap11/scripts.pory"
	closemessage
# 76 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 77 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_8
# 78 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 79 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 80 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_7
# 81 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 82 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ROAR_2
# 83 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 84 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_9
# 85 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 86 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_8
# 87 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 88 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_10
# 89 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 90 "data/maps/Newmap11/scripts.pory"
	closemessage
# 91 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 92 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_11
# 93 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 94 "data/maps/Newmap11/scripts.pory"
	closemessage
# 95 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 96 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 97 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 98 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_12
# 99 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_9
# 100 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_13
# 101 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 102 "data/maps/Newmap11/scripts.pory"
	closemessage
# 103 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 104 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, upset
# 105 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 106 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_14
# 107 "data/maps/Newmap11/scripts.pory"
	closemessage
# 108 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 109 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 110 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 111 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_15
# 112 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 113 "data/maps/Newmap11/scripts.pory"
	closemessage
# 114 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_10
# 115 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 116 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 117 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_16
# 118 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 119 "data/maps/Newmap11/scripts.pory"
	closemessage
# 120 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_11
# 121 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 122 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 123 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_17
# 124 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 125 "data/maps/Newmap11/scripts.pory"
	closemessage
# 126 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_12
# 127 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 128 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_18
# 129 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 130 "data/maps/Newmap11/scripts.pory"
	closemessage
# 131 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 132 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_19
# 133 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 134 "data/maps/Newmap11/scripts.pory"
	closemessage
# 135 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 136 "data/maps/Newmap11/scripts.pory"
	doweather
# 137 "data/maps/Newmap11/scripts.pory"
	playse SE_M_BLIZZARD
# 138 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_13
# 139 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalopen
# 140 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 141 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_20
# 142 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 143 "data/maps/Newmap11/scripts.pory"
	closemessage
# 144 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_14
# 145 "data/maps/Newmap11/scripts.pory"
	removeobject 4
# 146 "data/maps/Newmap11/scripts.pory"
	playse SE_FU_ZAKU
# 147 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 148 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_21
# 149 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 150 "data/maps/Newmap11/scripts.pory"
	closemessage
# 151 "data/maps/Newmap11/scripts.pory"
	waitmovement 5
# 152 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 153 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalclose
# 154 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 155 "data/maps/Newmap11/scripts.pory"
	removeobject 5
# 156 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_DP_TITLE, FALSE
# 157 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_NONE
# 158 "data/maps/Newmap11/scripts.pory"
	doweather
# 159 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_15
# 160 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 161 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 162 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 163 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 164 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_22
# 165 "data/maps/Newmap11/scripts.pory"
	closemessage
# 166 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 167 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 168 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_23
# 169 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 170 "data/maps/Newmap11/scripts.pory"
	closemessage
# 171 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_12
# 172 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 173 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_24
# 174 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 175 "data/maps/Newmap11/scripts.pory"
	closemessage
# 176 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 177 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 178 "data/maps/Newmap11/scripts.pory"
	special RemoveCameraObject
# 179 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_12
# 180 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 181 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_25, MSGBOX_YESNO
# 182 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_2
# 187 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 188 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_27, MSGBOX_AUTOCLOSE
NihilFirstVisit1_1:
# 191 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 192 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_28, MSGBOX_YESNO
# 193 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_6
# 198 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 199 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_30, MSGBOX_AUTOCLOSE
NihilFirstVisit1_5:
# 202 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 203 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_31, MSGBOX_YESNO
# 204 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_10
# 209 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 210 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_33, MSGBOX_AUTOCLOSE
NihilFirstVisit1_9:
# 213 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NIHIL_FIRST
# 214 "data/maps/Newmap11/scripts.pory"
	release
# 215 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 50
	return

NihilFirstVisit1_2:
# 183 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 184 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_26, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_1

NihilFirstVisit1_6:
# 194 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 195 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_29, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_5

NihilFirstVisit1_10:
# 205 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 206 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_32, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_9


# 217 "data/maps/Newmap11/scripts.pory"
distortionportalclose:
# 218 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 219 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 220 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 222 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 223 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 224 "data/maps/Newmap11/scripts.pory"
	face_left
# 225 "data/maps/Newmap11/scripts.pory"
	face_up
# 226 "data/maps/Newmap11/scripts.pory"
	face_down
# 227 "data/maps/Newmap11/scripts.pory"
	set_invisible
	step_end

# 229 "data/maps/Newmap11/scripts.pory"
distortionportalopen:
# 230 "data/maps/Newmap11/scripts.pory"
	set_visible
# 231 "data/maps/Newmap11/scripts.pory"
	face_down
# 232 "data/maps/Newmap11/scripts.pory"
	face_up
# 233 "data/maps/Newmap11/scripts.pory"
	face_left
# 234 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 235 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 236 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 237 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 238 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 239 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 240 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 241 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 242 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 243 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 244 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 245 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 246 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 247 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 248 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 249 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 250 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 251 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 252 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 253 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 254 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 255 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 256 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 257 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 258 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 259 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 260 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
	step_end

Alistairarrive::
# 264 "data/maps/Newmap11/scripts.pory"
	lockall
# 265 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 266 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 267 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 268 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 269 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 271 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 272 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 273 "data/maps/Newmap11/scripts.pory"
	closemessage
# 275 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 277 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 278 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 279 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 280 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 282 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 283 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 284 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 285 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1
# 286 "data/maps/Newmap11/scripts.pory"
	closemessage
# 288 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 289 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 290 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 292 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 293 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2
# 295 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 296 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3
# 298 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 299 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4
# 301 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 302 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6
# 303 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 304 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 305 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 306 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7
# 308 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 309 "data/maps/Newmap11/scripts.pory"
	applymovement 1, NihilFirstVisit1_Movement_5
# 310 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 311 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8
# 313 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_0
# 314 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 315 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9
# 317 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 318 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10
# 319 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 320 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 321 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_1
# 322 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 323 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11
# 324 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 325 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12
# 326 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 327 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13
# 328 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 329 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14
# 330 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 331 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15
# 332 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 333 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16
# 334 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 335 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17
# 336 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 337 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 338 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 339 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 340 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 341 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 342 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 343 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 344 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 345 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19
# 346 "data/maps/Newmap11/scripts.pory"
	closemessage
# 347 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_ENCOUNTER
# 348 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_20
# 349 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21
# 350 "data/maps/Newmap11/scripts.pory"
	closemessage
# 351 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 352 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 353 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 354 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 355 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 356 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22
# 357 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 358 "data/maps/Newmap11/scripts.pory"
	closemessage
# 359 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 360 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 361 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 362 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 363 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 365 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 366 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 368 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 369 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 371 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 372 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_26, MSGBOX_AUTOCLOSE
# 374 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 375 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 376 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 377 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 378 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 379 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_2
# 380 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 381 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_3
# 383 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 384 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_27, MSGBOX_AUTOCLOSE
# 385 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 386 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 387 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 388 "data/maps/Newmap11/scripts.pory"
	releaseall
# 389 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 390 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 395 "data/maps/Newmap11/scripts.pory"
traces2:
# 396 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 398 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 399 "data/maps/Newmap11/scripts.pory"
	walk_down
# 400 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 402 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 403 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 409 "data/maps/Newmap11/scripts.pory"
	walk_down
# 410 "data/maps/Newmap11/scripts.pory"
	walk_left
# 411 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 413 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 414 "data/maps/Newmap11/scripts.pory"
	walk_right
# 414 "data/maps/Newmap11/scripts.pory"
	walk_right
# 414 "data/maps/Newmap11/scripts.pory"
	walk_right
# 414 "data/maps/Newmap11/scripts.pory"
	walk_right
# 415 "data/maps/Newmap11/scripts.pory"
	walk_up
# 415 "data/maps/Newmap11/scripts.pory"
	walk_up
# 415 "data/maps/Newmap11/scripts.pory"
	walk_up
# 415 "data/maps/Newmap11/scripts.pory"
	walk_up
# 415 "data/maps/Newmap11/scripts.pory"
	walk_up
# 416 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 416 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 416 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 418 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 419 "data/maps/Newmap11/scripts.pory"
	delay_16
# 420 "data/maps/Newmap11/scripts.pory"
	walk_right
# 420 "data/maps/Newmap11/scripts.pory"
	walk_right
# 420 "data/maps/Newmap11/scripts.pory"
	walk_right
# 420 "data/maps/Newmap11/scripts.pory"
	walk_right
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 422 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 422 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 423 "data/maps/Newmap11/scripts.pory"
	walk_slow_right
# 424 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 426 "data/maps/Newmap11/scripts.pory"
alistai:
# 427 "data/maps/Newmap11/scripts.pory"
	walk_up
# 427 "data/maps/Newmap11/scripts.pory"
	walk_up
# 427 "data/maps/Newmap11/scripts.pory"
	walk_up
# 427 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 429 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 430 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 431 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 435 "data/maps/Newmap11/scripts.pory"
	lock
# 436 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 437 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 438 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 439 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 442 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 444 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 445 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 447 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 448 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 450 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 451 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 453 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 454 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 456 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 457 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 459 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 460 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 462 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 463 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 464 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 465 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 466 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 467 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 469 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 470 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 472 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 473 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 475 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 476 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 477 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 478 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 479 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 480 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 481 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 482 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 483 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 484 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 485 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 486 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 487 "data/maps/Newmap11/scripts.pory"
	release
	return


# 489 "data/maps/Newmap11/scripts.pory"
pay:
# 490 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 492 "data/maps/Newmap11/scripts.pory"
question:
# 493 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 496 "data/maps/Newmap11/scripts.pory"
	compare ACADEMY_START, 50
	goto_if_eq grave_2
grave_1:
# 522 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_4
# 534 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_2:
# 497 "data/maps/Newmap11/scripts.pory"
	lock
# 498 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 499 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0
# 500 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_1, MSGBOX_AUTOCLOSE
# 501 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, grave_Movement_0
# 502 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 503 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 504 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_2
# 505 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 506 "data/maps/Newmap11/scripts.pory"
	closemessage
# 507 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 508 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_3
# 509 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 510 "data/maps/Newmap11/scripts.pory"
	closemessage
# 511 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, grave_Movement_1
# 512 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 513 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_4
# 514 "data/maps/Newmap11/scripts.pory"
	closemessage
# 515 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 516 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_ACADEMY_START
# 517 "data/maps/Newmap11/scripts.pory"
	resumefakertc
# 518 "data/maps/Newmap11/scripts.pory"
	fwdtime 21, 21
# 519 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 51
	goto grave_1

grave_4:
# 523 "data/maps/Newmap11/scripts.pory"
	lock
# 524 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 525 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_5, MSGBOX_AUTOCLOSE
# 526 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 527 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 528 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 529 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 530 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 531 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_ROUTE109, 21, 43
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

# 44 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_1:
# 44 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

# 50 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_2:
# 50 "data/maps/Newmap11/scripts.pory"
	walk_up
# 50 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_3:
# 55 "data/maps/Newmap11/scripts.pory"
	walk_right
# 55 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_4:
# 64 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 64 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 64 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
	step_end

# 67 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_5:
# 67 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_6:
# 79 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 80 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_7:
# 80 "data/maps/Newmap11/scripts.pory"
	walk_fast_up
# 80 "data/maps/Newmap11/scripts.pory"
	walk_fast_left
# 80 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 86 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_8:
# 86 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 86 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 86 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 86 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 86 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
	step_end

# 99 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_9:
# 99 "data/maps/Newmap11/scripts.pory"
	face_left
	step_end

# 114 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_10:
# 114 "data/maps/Newmap11/scripts.pory"
	face_down
# 114 "data/maps/Newmap11/scripts.pory"
	delay_8
# 114 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 120 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_11:
# 120 "data/maps/Newmap11/scripts.pory"
	delay_8
# 120 "data/maps/Newmap11/scripts.pory"
	face_up
# 120 "data/maps/Newmap11/scripts.pory"
	delay_8
# 120 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 126 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_12:
# 126 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 138 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_13:
# 138 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 144 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_14:
# 144 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 144 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 159 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_15:
# 159 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 159 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 159 "data/maps/Newmap11/scripts.pory"
	shake_vertical
	step_end

# 176 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_16:
# 176 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 176 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 176 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 313 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_0:
# 313 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 321 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_1:
# 321 "data/maps/Newmap11/scripts.pory"
	emote_upset
# 321 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 379 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_2:
# 379 "data/maps/Newmap11/scripts.pory"
	face_up
# 379 "data/maps/Newmap11/scripts.pory"
	delay_16
# 379 "data/maps/Newmap11/scripts.pory"
	delay_16
	step_end

# 382 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_3:
# 382 "data/maps/Newmap11/scripts.pory"
	emote_upset
	step_end

# 501 "data/maps/Newmap11/scripts.pory"
grave_Movement_0:
# 501 "data/maps/Newmap11/scripts.pory"
	walk_in_place_up
	step_end

# 511 "data/maps/Newmap11/scripts.pory"
grave_Movement_1:
# 511 "data/maps/Newmap11/scripts.pory"
	delay_16
# 511 "data/maps/Newmap11/scripts.pory"
	delay_16
# 511 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

NihilFirstVisit1_Text_0:
# 45 "data/maps/Newmap11/scripts.pory"
	.string "Xylar$"

NihilFirstVisit1_Text_1:
# 46 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you.....?$"

NihilFirstVisit1_Text_2:
# 53 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You-!{PAUSE_UNTIL_PRESS} Get away from there!\p"
	.string "Mewtwo!$"

NihilFirstVisit1_Text_3:
# 58 "data/maps/Newmap11/scripts.pory"
	.string "Mewtwo$"

NihilFirstVisit1_Text_4:
# 59 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}.......$"

NihilFirstVisit1_Text_5:
# 69 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SHOCK}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Wait.$"

NihilFirstVisit1_Text_6:
# 73 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SHOCK}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}{PLAY_BGM}{MUS_BW12_107}\p"
	.string "Something about him… is not normal.\p"
	.string "I…… can't sense…… anything from him\n"
	.string "yet…{PAUSE_UNTIL_PRESS} my instincts are screaming at me\l"
	.string "to run.$"

NihilFirstVisit1_Text_7:
# 76 "data/maps/Newmap11/scripts.pory"
	.string "???$"

NihilFirstVisit1_Text_8:
# 77 "data/maps/Newmap11/scripts.pory"
	.string "{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Human life is an illusion. Even at its\n"
	.string "longest, it is but a hundred fleeting\l"
	.string "years.\p"
	.string "Beauty withers, strength decays, every\n"
	.string "embrace turns to dust. Yet still, humans\l"
	.string "worship appearances, clinging to flesh\l"
	.string "as though it were eternal.\p"
	.string "That… is not love…{PAUSE_UNTIL_PRESS} it is obsession.$"

NihilFirstVisit1_Text_9:
# 84 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}……$"

NihilFirstVisit1_Text_10:
# 88 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Am I scared?……{PAUSE_UNTIL_PRESS} No, It's not possible.)$"

NihilFirstVisit1_Text_11:
# 92 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}The world does not keep her, nor does\n"
	.string "heaven.\p"
	.string "She exists only in your memory… and\n"
	.string "when you die,{PAUSE} not even that will remain.$"

NihilFirstVisit1_Text_12:
# 98 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}She died, and the world moved on. That's\n"
	.string "just how the world is.\p"
	.string "It doesn't mourn for anyone.$"

NihilFirstVisit1_Text_13:
# 100 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Graves are not for the dead.\p"
	.string "They are for the living…{PAUSE_UNTIL_PRESS} to lie to\n"
	.string "themselves.\p"
	.string "That is the harsh reality of the world\n"
	.string "yet…{PAUSE_UNTIL_PRESS} I find it beautiful.$"

NihilFirstVisit1_Text_14:
# 106 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{RESET_FONT}{COLOR BLUE}{SHADOW LIGHT_GRAY}Beautiful…?\p"
	.string "You dare stand over my mother's grave\n"
	.string "and call her death {COLOR RED}{SHADOW LIGHT_GRAY}beautiful!{COLOR BLUE}{SHADOW LIGHT_GRAY}\p"
	.string "I'll kill you where you stand!!$"

NihilFirstVisit1_Text_15:
# 111 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar! Stop.$"

NihilFirstVisit1_Text_16:
# 117 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Do not mistake me for your enemy.\p"
	.string "You do not interest me.$"

NihilFirstVisit1_Text_17:
# 123 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I came only as a sign of respect to\n"
	.string "someone who once stood against me\p"
	.string "and who, for a fleeting moment, shone\n"
	.string "brighter than all others.$"

NihilFirstVisit1_Text_18:
# 128 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}But brightness is fragile and so is\n"
	.string "anger.\p"
	.string "You cling to anger.{PAUSE_UNTIL_PRESS} That is natural.$"

NihilFirstVisit1_Text_19:
# 132 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Live as you wish.\p"
	.string "Burn, break, or build…… it won't matter\n"
	.string "to me.$"

NihilFirstVisit1_Text_20:
# 141 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}In the end, all things return to\n"
	.string "nothing.$"

NihilFirstVisit1_Text_21:
# 148 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That is the truth I carry.$"

NihilFirstVisit1_Text_22:
# 164 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo……?!\p"
	.string "What happened…?$"

NihilFirstVisit1_Text_23:
# 168 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}That person……{PAUSE_UNTIL_PRESS} His presence was\n"
	.string "overwhelming…\p"
	.string "It felt as if vast shadows were moving\n"
	.string "behind him…\p"
	.string "Silent, watching.…\p"
	.string "Something……{PAUSE_UNTIL_PRESS}ancient, boundless, and\n"
	.string "suffocating.$"

NihilFirstVisit1_Text_24:
# 173 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Whoever he was…… we should avoid him\n"
	.string "until we grow strong.\p"
	.string "Because if the presence I felt was\n"
	.string "truly his……{PAUSE_UNTIL_PRESS} then we stand no chance.$"

NihilFirstVisit1_Text_25:
# 181 "data/maps/Newmap11/scripts.pory"
	.string "Do you think Mewtwo was right? Were\n"
	.string "there really… shadows?$"

NihilFirstVisit1_Text_26:
# 184 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}I see…… So, you believe Mewtwo's\n"
	.string "instincts.$"

NihilFirstVisit1_Text_27:
# 188 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}I see…… So, you don't believe Mewtwo's\n"
	.string "instincts.\p"
	.string "I think otherwise.$"

NihilFirstVisit1_Text_28:
# 192 "data/maps/Newmap11/scripts.pory"
	.string "Then… what about his words?\p"
	.string "About life, beauty, and death… do you\n"
	.string "believe them?$"

NihilFirstVisit1_Text_29:
# 195 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}You do?……{PAUSE_UNTIL_PRESS} That's unexpected, but I\n"
	.string "understand.$"

NihilFirstVisit1_Text_30:
# 199 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}Hmmm…… I also refuse to consider life\n"
	.string "as something meaningless.$"

NihilFirstVisit1_Text_31:
# 203 "data/maps/Newmap11/scripts.pory"
	.string "Do you think he…… was a human?$"

NihilFirstVisit1_Text_32:
# 206 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}Human…?\p"
	.string "Maybe you're right.{PAUSE_UNTIL_PRESS} But if that's true…\p"
	.string "Then what kind of human carries a\n"
	.string "presence like that?$"

NihilFirstVisit1_Text_33:
# 210 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}No… you're right.\p"
	.string "No human could stand there and make\n"
	.string "even Mewtwo hesitate.{PAUSE_UNTIL_PRESS}\p"
	.string "Whatever he is… he's not like us.$"

Alistairarrive_Text_0:
# 272 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}……\p"
	.string "…What now?\p"
	.string "{PAUSE_UNTIL_PRESS}What am I supposed to do?$"

Alistairarrive_Text_1:
# 285 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_2:
# 293 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?\p"
	.string "Another one here to finish me off?$"

Alistairarrive_Text_3:
# 296 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.\n"
	.string "My name is Alistair Caelum.\p"
	.string "Headmaster of Astralis Academy.$"

Alistairarrive_Text_4:
# 299 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Headmaster?\p"
	.string "Then leave. I don't need you.$"

Alistairarrive_Text_5:
# 301 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

Alistairarrive_Text_6:
# 302 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I knew your father.\n"
	.string "Aurther was my closest friend.\p"
	.string "I promised to watch over you once you\n"
	.string "joined the Academy.$"

Alistairarrive_Text_7:
# 306 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Friend?\p"
	.string "Then where were you when he died?!$"

Alistairarrive_Text_8:
# 311 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_9:
# 315 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me.\p"
	.string "I'll get stronger on my own.\p"
	.string "Strong enough to kill them all.$"

Alistairarrive_Text_10:
# 318 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't bring them back.\p"
	.string "It won't heal you.$"

Alistairarrive_Text_11:
# 323 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't talk like you understand!\p"
	.string "You don't know what I've been through!$"

Alistairarrive_Text_12:
# 325 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I don't.\p"
	.string "But I do know where your path ends.\p"
	.string "Revenge blinds. It consumes. And it\n"
	.string "destroys.$"

Alistairarrive_Text_13:
# 327 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough preaching!\p"
	.string "I've already crushed one of their\n"
	.string "strongest.\p"
	.string "If you think words can stop me-you're\n"
	.string "wasting breath.$"

Alistairarrive_Text_14:
# 329 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}(He's just as stubborn as Aurther…)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't about one victory.\p"
	.string "It's about enduring every battle that\n"
	.string "follows.$"

Alistairarrive_Text_15:
# 331 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Then prove it.\p"
	.string "If you think you're so wise-show me!$"

Alistairarrive_Text_16:
# 333 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Very well.\p"
	.string "If you win, I'll leave and never bother\n"
	.string "you again.\p"
	.string "But if I win-you come to the academy.$"

Alistairarrive_Text_17:
# 335 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine. But don't cry when I crush you.$"

Alistairarrive_Text_18:
# 342 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_19:
# 345 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}……$"

Alistairarrive_Text_20:
# 348 "data/maps/Newmap11/scripts.pory"
	.string "Alakazam$"

Alistairarrive_Text_21:
# 349 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}……$"

Alistairarrive_Text_22:
# 356 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_23:
# 363 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_24:
# 366 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_25:
# 369 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_26:
# 372 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_27:
# 384 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 439 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 442 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 445 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 448 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 451 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 454 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 457 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 460 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 463 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 467 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 470 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 473 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 476 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SMILE}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 485 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 499 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom…… I'm sorry.\p"
	.string "I couldn't save you. I couldn't save\n"
	.string "anyone.\p"
	.string "I wasn't strong enough.{PAUSE_UNTIL_PRESS} I wasn't\n"
	.string "anything.\p"
	.string "I ran-like a coward-while they took\n"
	.string "everything from us.$"

grave_Text_1:
# 500 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I won't let the world forget you.\p"
	.string "I won't let it move on like nothing\n"
	.string "happened.\p"
	.string "I'll carve your name into this world.\p"
	.string "I'll have my revenge.$"

grave_Text_2:
# 504 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar……$"

grave_Text_3:
# 508 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You should rest……You haven't slept\n"
	.string "properly for days.$"

grave_Text_4:
# 513 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmmm……$"

grave_Text_5:
# 525 "data/maps/Newmap11/scripts.pory"
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
# 392 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 405 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
