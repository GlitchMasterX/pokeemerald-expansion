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
# 269 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 270 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 271 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 272 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 273 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 274 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 275 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 276 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 277 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 278 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 279 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 280 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 281 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1, MSGBOX_AUTOCLOSE
# 282 "data/maps/Newmap11/scripts.pory"
	speakername unknown
# 283 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2, MSGBOX_AUTOCLOSE
# 284 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces1
# 285 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 286 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 287 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3, MSGBOX_AUTOCLOSE
# 288 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 289 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4, MSGBOX_AUTOCLOSE
# 291 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 292 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_5, MSGBOX_AUTOCLOSE
# 294 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 295 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6, MSGBOX_AUTOCLOSE
# 297 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 298 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7, MSGBOX_AUTOCLOSE
# 300 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 301 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8, MSGBOX_AUTOCLOSE
# 303 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 304 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 305 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 306 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9, MSGBOX_AUTOCLOSE
# 308 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 309 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10, MSGBOX_AUTOCLOSE
# 311 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 312 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11, MSGBOX_AUTOCLOSE
# 314 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 315 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12, MSGBOX_AUTOCLOSE
# 317 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 318 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13, MSGBOX_AUTOCLOSE
# 320 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 321 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14, MSGBOX_AUTOCLOSE
# 323 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 324 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15, MSGBOX_AUTOCLOSE
# 326 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 327 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16, MSGBOX_AUTOCLOSE
# 329 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 330 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17, MSGBOX_AUTOCLOSE
# 332 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 333 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 335 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 336 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19, MSGBOX_AUTOCLOSE
# 337 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 338 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 339 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 340 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 341 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 342 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 343 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_20, MSGBOX_AUTOCLOSE
# 344 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 345 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 346 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 347 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 348 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 349 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 350 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21, MSGBOX_AUTOCLOSE
# 352 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 353 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22, MSGBOX_AUTOCLOSE
# 355 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 356 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 358 "data/maps/Newmap11/scripts.pory"
	speakername alistair
# 359 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 361 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 362 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 363 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 364 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 365 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 366 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, traces2
# 367 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 368 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 370 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 371 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 372 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 373 "data/maps/Newmap11/scripts.pory"
	releaseall
# 374 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 375 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 1
	return


# 380 "data/maps/Newmap11/scripts.pory"
traces2:
# 381 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 383 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 384 "data/maps/Newmap11/scripts.pory"
	walk_down
# 385 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 387 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 388 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 393 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 394 "data/maps/Newmap11/scripts.pory"
	walk_down
# 395 "data/maps/Newmap11/scripts.pory"
	walk_left
# 396 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 398 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 399 "data/maps/Newmap11/scripts.pory"
	walk_right
# 399 "data/maps/Newmap11/scripts.pory"
	walk_right
# 399 "data/maps/Newmap11/scripts.pory"
	walk_right
# 399 "data/maps/Newmap11/scripts.pory"
	walk_right
# 400 "data/maps/Newmap11/scripts.pory"
	walk_up
# 400 "data/maps/Newmap11/scripts.pory"
	walk_up
# 400 "data/maps/Newmap11/scripts.pory"
	walk_up
# 401 "data/maps/Newmap11/scripts.pory"
	delay_16
# 402 "data/maps/Newmap11/scripts.pory"
	delay_16
# 403 "data/maps/Newmap11/scripts.pory"
	face_right
# 404 "data/maps/Newmap11/scripts.pory"
	delay_16
# 405 "data/maps/Newmap11/scripts.pory"
	delay_16
# 406 "data/maps/Newmap11/scripts.pory"
	delay_16
# 407 "data/maps/Newmap11/scripts.pory"
	delay_16
# 408 "data/maps/Newmap11/scripts.pory"
	walk_up
# 408 "data/maps/Newmap11/scripts.pory"
	walk_up
# 408 "data/maps/Newmap11/scripts.pory"
	walk_up
# 408 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 410 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 411 "data/maps/Newmap11/scripts.pory"
	delay_16
# 412 "data/maps/Newmap11/scripts.pory"
	walk_right
# 412 "data/maps/Newmap11/scripts.pory"
	walk_right
# 412 "data/maps/Newmap11/scripts.pory"
	walk_right
# 412 "data/maps/Newmap11/scripts.pory"
	walk_right
# 413 "data/maps/Newmap11/scripts.pory"
	walk_up
# 413 "data/maps/Newmap11/scripts.pory"
	walk_up
# 414 "data/maps/Newmap11/scripts.pory"
	delay_16
# 415 "data/maps/Newmap11/scripts.pory"
	delay_16
# 416 "data/maps/Newmap11/scripts.pory"
	face_right
# 417 "data/maps/Newmap11/scripts.pory"
	delay_16
# 418 "data/maps/Newmap11/scripts.pory"
	delay_16
# 419 "data/maps/Newmap11/scripts.pory"
	delay_16
# 420 "data/maps/Newmap11/scripts.pory"
	delay_16
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 421 "data/maps/Newmap11/scripts.pory"
	walk_up
# 422 "data/maps/Newmap11/scripts.pory"
	walk_right
# 423 "data/maps/Newmap11/scripts.pory"
	walk_up
# 423 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 425 "data/maps/Newmap11/scripts.pory"
alistai:
# 426 "data/maps/Newmap11/scripts.pory"
	walk_up
# 426 "data/maps/Newmap11/scripts.pory"
	walk_up
# 426 "data/maps/Newmap11/scripts.pory"
	walk_up
# 426 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 428 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 429 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 430 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 434 "data/maps/Newmap11/scripts.pory"
	lock
# 435 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 436 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 437 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 438 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 440 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 441 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 443 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 444 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 446 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 447 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 449 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 450 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 452 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 453 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 455 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 456 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 458 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 459 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 461 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 462 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 464 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 465 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 466 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 468 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 469 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 471 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 472 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 474 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 475 "data/maps/Newmap11/scripts.pory"
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
# 487 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 488 "data/maps/Newmap11/scripts.pory"
	release
	return


# 490 "data/maps/Newmap11/scripts.pory"
pay:
# 491 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 493 "data/maps/Newmap11/scripts.pory"
question:
# 494 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 497 "data/maps/Newmap11/scripts.pory"
	compare ACADEMY_START, 50
	goto_if_eq grave_2
grave_1:
# 520 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_4
# 532 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_2:
# 498 "data/maps/Newmap11/scripts.pory"
	lock
# 499 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 500 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0
# 501 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_1, MSGBOX_AUTOCLOSE
# 502 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, grave_Movement_0
# 503 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 504 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 505 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_2
# 506 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 507 "data/maps/Newmap11/scripts.pory"
	closemessage
# 508 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 509 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_3
# 510 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 511 "data/maps/Newmap11/scripts.pory"
	closemessage
# 512 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, grave_Movement_1
# 513 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 514 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_4
# 515 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 516 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_ACADEMY_START
# 517 "data/maps/Newmap11/scripts.pory"
	setvar ACADEMY_START, 51
	goto grave_1

grave_4:
# 521 "data/maps/Newmap11/scripts.pory"
	lock
# 522 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 523 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_5, MSGBOX_AUTOCLOSE
# 525 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 526 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 527 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 528 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 529 "data/maps/Newmap11/scripts.pory"
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

# 502 "data/maps/Newmap11/scripts.pory"
grave_Movement_0:
# 502 "data/maps/Newmap11/scripts.pory"
	walk_in_place_up
	step_end

# 512 "data/maps/Newmap11/scripts.pory"
grave_Movement_1:
# 512 "data/maps/Newmap11/scripts.pory"
	delay_16
# 512 "data/maps/Newmap11/scripts.pory"
	delay_16
# 512 "data/maps/Newmap11/scripts.pory"
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
# 270 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}........\p"
	.string "..What....\p"
	.string "What should we do now?$"

Alistairarrive_Text_1:
# 281 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're wasting your time.\p"
	.string "Whoever you are, I don't need your\n"
	.string "company.$"

Alistairarrive_Text_2:
# 283 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I expected as much,\n"
	.string "Xylar I presume?$"

Alistairarrive_Text_3:
# 287 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And who are you?\p"
	.string "Another one of their pawns?\p"
	.string "Did they send you here to finish what\n"
	.string "they started?$"

Alistairarrive_Text_4:
# 289 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I am not.\p"
	.string "My name is Alistair Caelum.\n"
	.string "I am the headmaster of the Astralis\l"
	.string "Academy.$"

Alistairarrive_Text_5:
# 292 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And what does a headmaster want from\n"
	.string "me?$"

Alistairarrive_Text_6:
# 295 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I came here because I heard about what\n"
	.string "happened.....your family, your home.$"

Alistairarrive_Text_7:
# 298 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So what?\p"
	.string "You're here to give me some lecture\n"
	.string "about life and moving on?\p"
	.string "Save it.\n"
	.string "I don't need your pity.$"

Alistairarrive_Text_8:
# 301 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm not here to pity you.\n"
	.string "I am here because I'm worried about you.\l"
	.string "Aurther was my best friend and you're\l"
	.string "his son. He wanted to leave you in my\l"
	.string "care once the academy started so I'm\l"
	.string "here to take you there.$"

Alistairarrive_Text_9:
# 306 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Best Friend?\p"
	.string "Then why weren't you there to help him?$"

Alistairarrive_Text_10:
# 309 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........$"

Alistairarrive_Text_11:
# 312 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And I don't have time for academy.\n"
	.string "I'm already strong enough and I just\l"
	.string "want to kill every single one of them.$"

Alistairarrive_Text_12:
# 315 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't solve anything.$"

Alistairarrive_Text_13:
# 318 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you know?\n"
	.string "You can say that because you don't\l"
	.string "know what I've been through.$"

Alistairarrive_Text_14:
# 321 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're right, I don't.\n"
	.string "But what I do know is that\p"
	.string "Revenge is not the right path, it won't\n"
	.string "lead you where you think it will.\p"
	.string "It will blind you and eventually destroy\n"
	.string "you.$"

Alistairarrive_Text_15:
# 324 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't preach to me! I've already taken\n"
	.string "down one of their strongest. If you\l"
	.string "think you can change my mind, you're\l"
	.string "wasting your breath.$"

Alistairarrive_Text_16:
# 327 "data/maps/Newmap11/scripts.pory"
	.string "(Sighs)\p"
	.string "(He's just as stubborn as Aurther.)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that but\n"
	.string "strength isn't about winning one fight.\l"
	.string "It's about being ready for the next no\l"
	.string "matter how hard it gets.$"

Alistairarrive_Text_17:
# 330 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need advice from someone I just\n"
	.string "met. If you think you're so wise, why\l"
	.string "don't you prove yourself?$"

Alistairarrive_Text_18:
# 333 "data/maps/Newmap11/scripts.pory"
	.string "(Smirks)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, Here's the deal. We'll battle. If\n"
	.string "you win. I'll leave and you can do\l"
	.string "whatever you want.\p"
	.string "But if I win you'll come to the academy\n"
	.string "and train there for at least two years.$"

Alistairarrive_Text_19:
# 336 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine I'll take your little challange. But\n"
	.string "don't cry when I crush you.$"

Alistairarrive_Text_20:
# 343 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_21:
# 350 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_22:
# 353 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_23:
# 356 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_24:
# 359 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_25:
# 368 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 438 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 441 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 444 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 447 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 450 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 453 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 456 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 459 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 462 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 466 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 469 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 472 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 475 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 485 "data/maps/Newmap11/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 500 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom…… I'm sorry.\p"
	.string "I couldn't save you. I couldn't save\n"
	.string "anyone.\p"
	.string "I wasn't strong enough.{PAUSE_UNTIL_PRESS} I wasn't\n"
	.string "anything.\p"
	.string "I ran-like a coward-while they took\n"
	.string "everything from us.$"

grave_Text_1:
# 501 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I won't let the world forget you.\p"
	.string "I won't let it move on like nothing\n"
	.string "happened.\p"
	.string "I'll carve your name into this world.\p"
	.string "I'll have my revenge.$"

grave_Text_2:
# 505 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar……$"

grave_Text_3:
# 509 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You should rest……You haven't slept\n"
	.string "properly for days.$"

grave_Text_4:
# 514 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmmm……$"

grave_Text_5:
# 523 "data/maps/Newmap11/scripts.pory"
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
# 377 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 390 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
