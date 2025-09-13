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
	playse SE_PIN
# 161 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 162 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 163 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_22
# 164 "data/maps/Newmap11/scripts.pory"
	closemessage
# 165 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 166 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 167 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_23
# 168 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 169 "data/maps/Newmap11/scripts.pory"
	closemessage
# 170 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_12
# 171 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 172 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_24
# 173 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 174 "data/maps/Newmap11/scripts.pory"
	closemessage
# 175 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 176 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 177 "data/maps/Newmap11/scripts.pory"
	special RemoveCameraObject
# 178 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_12
# 179 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 180 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_25, MSGBOX_YESNO
# 181 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_2
# 186 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 187 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_27, MSGBOX_AUTOCLOSE
NihilFirstVisit1_1:
# 190 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 191 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_28, MSGBOX_YESNO
# 192 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_6
# 197 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 198 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_30, MSGBOX_AUTOCLOSE
NihilFirstVisit1_5:
# 201 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 202 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_31, MSGBOX_YESNO
# 203 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_10
# 208 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 209 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_33, MSGBOX_AUTOCLOSE
NihilFirstVisit1_9:
# 212 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NIHIL_FIRST
# 213 "data/maps/Newmap11/scripts.pory"
	release
# 214 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 50
	return

NihilFirstVisit1_2:
# 182 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 183 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_26, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_1

NihilFirstVisit1_6:
# 193 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 194 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_29, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_5

NihilFirstVisit1_10:
# 204 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 205 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_32, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_9


# 216 "data/maps/Newmap11/scripts.pory"
distortionportalclose:
# 217 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 218 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 219 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 220 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 221 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 222 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 223 "data/maps/Newmap11/scripts.pory"
	face_left
# 224 "data/maps/Newmap11/scripts.pory"
	face_up
# 225 "data/maps/Newmap11/scripts.pory"
	face_down
# 226 "data/maps/Newmap11/scripts.pory"
	set_invisible
	step_end

# 228 "data/maps/Newmap11/scripts.pory"
distortionportalopen:
# 229 "data/maps/Newmap11/scripts.pory"
	set_visible
# 230 "data/maps/Newmap11/scripts.pory"
	face_down
# 231 "data/maps/Newmap11/scripts.pory"
	face_up
# 232 "data/maps/Newmap11/scripts.pory"
	face_left
# 233 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 234 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 235 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 236 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 237 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 238 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 239 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 240 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 241 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 242 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 243 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 244 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 245 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 246 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 247 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 248 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 249 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 250 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 251 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 252 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 253 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 254 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 255 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 256 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 257 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 258 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 259 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
	step_end

Alistairarrive::
# 263 "data/maps/Newmap11/scripts.pory"
	lockall
# 264 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 265 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 266 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 267 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 268 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 270 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 271 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 272 "data/maps/Newmap11/scripts.pory"
	closemessage
# 274 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 275 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 276 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 277 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 278 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 279 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 281 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 283 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 284 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1
# 285 "data/maps/Newmap11/scripts.pory"
	closemessage
# 287 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 288 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 289 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 291 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 292 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2
# 294 "data/maps/Newmap11/scripts.pory"
	speakername unknown
# 295 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3
# 296 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_12
# 297 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 298 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4
# 300 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 301 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5
# 303 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 304 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6
# 306 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 307 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7
# 309 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 310 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8
# 312 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 313 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9
# 315 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 316 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 318 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 319 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10
# 321 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 322 "data/maps/Newmap11/scripts.pory"
	applymovement 1, NihilFirstVisit1_Movement_5
# 323 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 324 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11
# 326 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_0
# 327 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 328 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12
# 330 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 331 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13
# 332 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 333 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 334 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_1
# 335 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 336 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14
# 337 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 338 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15
# 339 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 340 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16
# 341 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 342 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17
# 343 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 344 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18
# 345 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 346 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19
# 347 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 348 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20
# 349 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 350 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 351 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 352 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 353 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 354 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 355 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 356 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 357 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 358 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1
# 359 "data/maps/Newmap11/scripts.pory"
	closemessage
# 360 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_ENCOUNTER
# 361 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_22
# 362 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23
# 363 "data/maps/Newmap11/scripts.pory"
	closemessage
# 364 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 365 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 366 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 367 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 368 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 369 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24
# 370 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 371 "data/maps/Newmap11/scripts.pory"
	closemessage
# 372 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 373 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 374 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 375 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 376 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 378 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 379 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_26, MSGBOX_AUTOCLOSE
# 381 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 382 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_27, MSGBOX_AUTOCLOSE
# 384 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 385 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_28, MSGBOX_AUTOCLOSE
# 387 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 388 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 389 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 390 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 391 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 392 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_2
# 393 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 394 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 395 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_3
# 396 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 397 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_29, MSGBOX_AUTOCLOSE
# 398 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 399 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 400 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 401 "data/maps/Newmap11/scripts.pory"
	releaseall
# 402 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 403 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 408 "data/maps/Newmap11/scripts.pory"
traces2:
# 409 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 411 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 412 "data/maps/Newmap11/scripts.pory"
	walk_down
# 413 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 415 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 416 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 421 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 422 "data/maps/Newmap11/scripts.pory"
	walk_down
# 423 "data/maps/Newmap11/scripts.pory"
	walk_left
# 424 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 426 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 427 "data/maps/Newmap11/scripts.pory"
	walk_right
# 427 "data/maps/Newmap11/scripts.pory"
	walk_right
# 427 "data/maps/Newmap11/scripts.pory"
	walk_right
# 427 "data/maps/Newmap11/scripts.pory"
	walk_right
# 428 "data/maps/Newmap11/scripts.pory"
	walk_up
# 428 "data/maps/Newmap11/scripts.pory"
	walk_up
# 428 "data/maps/Newmap11/scripts.pory"
	walk_up
# 428 "data/maps/Newmap11/scripts.pory"
	walk_up
# 428 "data/maps/Newmap11/scripts.pory"
	walk_up
# 429 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 429 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 429 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 431 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 432 "data/maps/Newmap11/scripts.pory"
	delay_16
# 433 "data/maps/Newmap11/scripts.pory"
	walk_right
# 433 "data/maps/Newmap11/scripts.pory"
	walk_right
# 433 "data/maps/Newmap11/scripts.pory"
	walk_right
# 433 "data/maps/Newmap11/scripts.pory"
	walk_right
# 434 "data/maps/Newmap11/scripts.pory"
	walk_up
# 434 "data/maps/Newmap11/scripts.pory"
	walk_up
# 434 "data/maps/Newmap11/scripts.pory"
	walk_up
# 434 "data/maps/Newmap11/scripts.pory"
	walk_up
# 434 "data/maps/Newmap11/scripts.pory"
	walk_up
# 435 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 435 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 436 "data/maps/Newmap11/scripts.pory"
	walk_slow_right
# 437 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 439 "data/maps/Newmap11/scripts.pory"
alistai:
# 440 "data/maps/Newmap11/scripts.pory"
	walk_up
# 440 "data/maps/Newmap11/scripts.pory"
	walk_up
# 440 "data/maps/Newmap11/scripts.pory"
	walk_up
# 440 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 442 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 443 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 444 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 448 "data/maps/Newmap11/scripts.pory"
	lock
# 449 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 450 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 451 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 452 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 454 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 455 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 457 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 458 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 460 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 461 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 463 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 464 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 466 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 467 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 469 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 470 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 472 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 473 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 475 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 476 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 478 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 479 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 480 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 482 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 483 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 485 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 486 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 488 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 489 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 490 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 491 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 492 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 493 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 2
# 494 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 495 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 496 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 497 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 498 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 500 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 501 "data/maps/Newmap11/scripts.pory"
	release
	return


# 503 "data/maps/Newmap11/scripts.pory"
pay:
# 504 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 506 "data/maps/Newmap11/scripts.pory"
question:
# 507 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 510 "data/maps/Newmap11/scripts.pory"
	compare ACADEMY_START, 50
	goto_if_eq grave_2
grave_1:
# 533 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_4
# 545 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_2:
# 511 "data/maps/Newmap11/scripts.pory"
	lock
# 512 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 513 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0
# 514 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_1, MSGBOX_AUTOCLOSE
# 515 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, grave_Movement_0
# 516 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 517 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 518 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_2
# 519 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 520 "data/maps/Newmap11/scripts.pory"
	closemessage
# 521 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 522 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_3
# 523 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 524 "data/maps/Newmap11/scripts.pory"
	closemessage
# 525 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, grave_Movement_1
# 526 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 527 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_4
# 528 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 529 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_ACADEMY_START
# 530 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 51
	goto grave_1

grave_4:
# 534 "data/maps/Newmap11/scripts.pory"
	lock
# 535 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 536 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_5, MSGBOX_AUTOCLOSE
# 538 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 539 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 540 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 541 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 542 "data/maps/Newmap11/scripts.pory"
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

# 175 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_16:
# 175 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 175 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 175 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 326 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_0:
# 326 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 334 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_1:
# 334 "data/maps/Newmap11/scripts.pory"
	emote_upset
# 334 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 392 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_2:
# 392 "data/maps/Newmap11/scripts.pory"
	face_up
# 392 "data/maps/Newmap11/scripts.pory"
	delay_16
# 392 "data/maps/Newmap11/scripts.pory"
	delay_16
	step_end

# 395 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_3:
# 395 "data/maps/Newmap11/scripts.pory"
	emote_upset
	step_end

# 515 "data/maps/Newmap11/scripts.pory"
grave_Movement_0:
# 515 "data/maps/Newmap11/scripts.pory"
	walk_in_place_up
	step_end

# 525 "data/maps/Newmap11/scripts.pory"
grave_Movement_1:
# 525 "data/maps/Newmap11/scripts.pory"
	delay_16
# 525 "data/maps/Newmap11/scripts.pory"
	delay_16
# 525 "data/maps/Newmap11/scripts.pory"
	face_down
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
# 163 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo……?!\p"
	.string "What happened…?$"

NihilFirstVisit1_Text_23:
# 167 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}That person……{PAUSE_UNTIL_PRESS} His presence was\n"
	.string "overwhelming…\p"
	.string "It felt as if vast shadows were moving\n"
	.string "behind him…\p"
	.string "Silent, watching.…\p"
	.string "Something……{PAUSE_UNTIL_PRESS}ancient, boundless, and\n"
	.string "suffocating.$"

NihilFirstVisit1_Text_24:
# 172 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Whoever he was…… we should avoid him\n"
	.string "until we grow strong.\p"
	.string "Because if the presence I felt was\n"
	.string "truly his……{PAUSE_UNTIL_PRESS} then we stand no chance.$"

NihilFirstVisit1_Text_25:
# 180 "data/maps/Newmap11/scripts.pory"
	.string "Do you think Mewtwo was right? Were\n"
	.string "there really… shadows?$"

NihilFirstVisit1_Text_26:
# 183 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}I see…… So, you believe Mewtwo's\n"
	.string "instincts.$"

NihilFirstVisit1_Text_27:
# 187 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}I see…… So, you don't believe Mewtwo's\n"
	.string "instincts.\p"
	.string "I think otherwise.$"

NihilFirstVisit1_Text_28:
# 191 "data/maps/Newmap11/scripts.pory"
	.string "Then… what about his words?\p"
	.string "About life, beauty, and death… do you\n"
	.string "believe them?$"

NihilFirstVisit1_Text_29:
# 194 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}You do?……{PAUSE_UNTIL_PRESS} That's unexpected, but I\n"
	.string "understand.$"

NihilFirstVisit1_Text_30:
# 198 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}Hmmm…… I also refuse to consider life\n"
	.string "as something meaningless.$"

NihilFirstVisit1_Text_31:
# 202 "data/maps/Newmap11/scripts.pory"
	.string "Do you think he…… was a human?$"

NihilFirstVisit1_Text_32:
# 205 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}Human…?\p"
	.string "Maybe you're right.{PAUSE_UNTIL_PRESS} But if that's true…\p"
	.string "Then what kind of human carries a\n"
	.string "presence like that?$"

NihilFirstVisit1_Text_33:
# 209 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}No… you're right.\p"
	.string "No human could stand there and make\n"
	.string "even Mewtwo hesitate.{PAUSE_UNTIL_PRESS}\p"
	.string "Whatever he is… he's not like us.$"

Alistairarrive_Text_0:
# 271 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}……\p"
	.string "…What now?\p"
	.string "{PAUSE_UNTIL_PRESS}What am I supposed to do?$"

Alistairarrive_Text_1:
# 284 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_2:
# 292 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are-I don't need company.$"

Alistairarrive_Text_3:
# 295 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much.\n"
	.string "Xylar, isn't it?$"

Alistairarrive_Text_4:
# 298 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another pawn sent to finish me off?$"

Alistairarrive_Text_5:
# 301 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.\p"
	.string "My name is Alistair Caelum.\n"
	.string "Headmaster of the Astralis Academy.$"

Alistairarrive_Text_6:
# 304 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}A headmaster?\p"
	.string "What could you possibly want from me?$"

Alistairarrive_Text_7:
# 307 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I came because I know what happened\n"
	.string "here.\p"
	.string "Your family… your home.$"

Alistairarrive_Text_8:
# 310 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You here to preach about moving on?\p"
	.string "Save your pity.$"

Alistairarrive_Text_9:
# 313 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Not pity.\n"
	.string "Concern.\p"
	.string "Your father-Aurther-was my closest\n"
	.string "friend.\p"
	.string "He wanted me to look after you once the\n"
	.string "academy began.\p"
	.string "So I am to fulfill my promise.$"

Alistairarrive_Text_10:
# 319 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Closest friend?\p"
	.string "Then where were you when he needed you\n"
	.string "most?!$"

Alistairarrive_Text_11:
# 324 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_12:
# 328 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me alone.\p"
	.string "I don't need your academy.\n"
	.string "I'll get stronger on my own.\p"
	.string "Strong enough to wipe them all out.$"

Alistairarrive_Text_13:
# 331 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't bring them back.\p"
	.string "It won't heal you.$"

Alistairarrive_Text_14:
# 336 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't talk like you understand!\p"
	.string "You don't know what I've been through!$"

Alistairarrive_Text_15:
# 338 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I don't.\p"
	.string "But I do know where your path ends.\p"
	.string "Revenge blinds. It consumes. And it\n"
	.string "destroys.$"

Alistairarrive_Text_16:
# 340 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough preaching!\p"
	.string "I've already crushed one of their\n"
	.string "strongest.\p"
	.string "If you think words can stop me-you're\n"
	.string "wasting breath.$"

Alistairarrive_Text_17:
# 342 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}(He's just as stubborn as Aurther…)\p"
	.string "Strength isn't about one victory.\p"
	.string "It's about enduring every battle that\n"
	.string "follows.$"

Alistairarrive_Text_18:
# 344 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Then prove it.\p"
	.string "If you think you're so wise-show me!$"

Alistairarrive_Text_19:
# 346 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Very well.\p"
	.string "If you win, I'll leave and never bother\n"
	.string "you again.\p"
	.string "But if I win-you come to the academy.\p"
	.string "For two years.$"

Alistairarrive_Text_20:
# 348 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Two years?\p"
	.string "Fine. But don't cry when I crush you.$"

Alistairarrive_Text_21:
# 355 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_22:
# 361 "data/maps/Newmap11/scripts.pory"
	.string "Alakazam$"

Alistairarrive_Text_23:
# 362 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_24:
# 369 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_25:
# 376 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_26:
# 379 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_27:
# 382 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_28:
# 385 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_29:
# 397 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 452 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 455 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 458 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 461 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 464 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 467 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 470 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 473 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 476 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 480 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 483 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 486 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 489 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 498 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 513 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom…… I'm sorry.\p"
	.string "I couldn't save you. I couldn't save\n"
	.string "anyone.\p"
	.string "I wasn't strong enough.{PAUSE_UNTIL_PRESS} I wasn't\n"
	.string "anything.\p"
	.string "I ran-like a coward-while they took\n"
	.string "everything from us.$"

grave_Text_1:
# 514 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I won't let the world forget you.\p"
	.string "I won't let it move on like nothing\n"
	.string "happened.\p"
	.string "I'll carve your name into this world.\p"
	.string "I'll have my revenge.$"

grave_Text_2:
# 518 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar……$"

grave_Text_3:
# 522 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You should rest……You haven't slept\n"
	.string "properly for days.$"

grave_Text_4:
# 527 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmmm……$"

grave_Text_5:
# 536 "data/maps/Newmap11/scripts.pory"
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
# 405 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 418 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
