Newmap11_MapScripts::
# 2 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/Newmap11/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Newmap11/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 40, Alistairarrive
	.2byte 0

Newmap11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Newmap11/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 0, NihilFirstVisit
# 8 "data/maps/Newmap11/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 40, alis
# 9 "data/maps/Newmap11/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 1, mewtwogone
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
	speakername NihilFirstVisit1_Text_7
# 83 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_9
# 84 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 85 "data/maps/Newmap11/scripts.pory"
	closemessage
# 86 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ROAR_2
# 87 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 88 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_10
# 89 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 90 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_8
# 91 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 92 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_11
# 93 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 94 "data/maps/Newmap11/scripts.pory"
	closemessage
# 95 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 96 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_12
# 97 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 98 "data/maps/Newmap11/scripts.pory"
	closemessage
# 99 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_6
# 100 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 101 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 102 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_13
# 103 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_9
# 104 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_14
# 105 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 106 "data/maps/Newmap11/scripts.pory"
	closemessage
# 107 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, upset
# 109 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 110 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_15
# 111 "data/maps/Newmap11/scripts.pory"
	closemessage
# 112 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_5
# 114 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 115 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_16
# 116 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 117 "data/maps/Newmap11/scripts.pory"
	closemessage
# 118 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_10
# 119 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 120 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 121 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_17
# 122 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 123 "data/maps/Newmap11/scripts.pory"
	closemessage
# 124 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_11
# 125 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 126 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 127 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_18
# 128 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 129 "data/maps/Newmap11/scripts.pory"
	closemessage
# 130 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_12
# 131 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 132 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_19
# 133 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 134 "data/maps/Newmap11/scripts.pory"
	closemessage
# 135 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 136 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_20
# 137 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 138 "data/maps/Newmap11/scripts.pory"
	closemessage
# 139 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 140 "data/maps/Newmap11/scripts.pory"
	doweather
# 141 "data/maps/Newmap11/scripts.pory"
	playse SE_M_BLIZZARD
# 142 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_13
# 143 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalopen
# 144 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 145 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_21
# 146 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 147 "data/maps/Newmap11/scripts.pory"
	closemessage
# 148 "data/maps/Newmap11/scripts.pory"
	applymovement 4, NihilFirstVisit1_Movement_14
# 149 "data/maps/Newmap11/scripts.pory"
	removeobject 4
# 150 "data/maps/Newmap11/scripts.pory"
	playse SE_FU_ZAKU
# 151 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 152 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_22
# 153 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 154 "data/maps/Newmap11/scripts.pory"
	closemessage
# 155 "data/maps/Newmap11/scripts.pory"
	waitmovement 5
# 156 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 157 "data/maps/Newmap11/scripts.pory"
	applymovement 5, distortionportalclose
# 158 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 159 "data/maps/Newmap11/scripts.pory"
	removeobject 5
# 160 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_DP_TITLE, FALSE
# 161 "data/maps/Newmap11/scripts.pory"
	setweather WEATHER_NONE
# 162 "data/maps/Newmap11/scripts.pory"
	doweather
# 163 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_15
# 164 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 165 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 166 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 167 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 168 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_23
# 169 "data/maps/Newmap11/scripts.pory"
	closemessage
# 170 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 171 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 172 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_24
# 173 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 174 "data/maps/Newmap11/scripts.pory"
	closemessage
# 175 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, NihilFirstVisit1_Movement_12
# 176 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 177 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_25
# 178 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 179 "data/maps/Newmap11/scripts.pory"
	closemessage
# 180 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 181 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 182 "data/maps/Newmap11/scripts.pory"
	special RemoveCameraObject
# 183 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, NihilFirstVisit1_Movement_12
# 184 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 185 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_26, MSGBOX_YESNO
# 186 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_2
# 191 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 192 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_28, MSGBOX_AUTOCLOSE
NihilFirstVisit1_1:
# 195 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 196 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_29, MSGBOX_YESNO
# 197 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_6
# 202 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 203 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_31, MSGBOX_AUTOCLOSE
NihilFirstVisit1_5:
# 206 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 207 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_32, MSGBOX_YESNO
# 208 "data/maps/Newmap11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NihilFirstVisit1_10
# 213 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 214 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_34, MSGBOX_AUTOCLOSE
NihilFirstVisit1_9:
# 217 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NIHIL_FIRST
# 218 "data/maps/Newmap11/scripts.pory"
	release
# 219 "data/maps/Newmap11/scripts.pory"
	setvar VAR_ACADEMY_START, 50
	return

NihilFirstVisit1_2:
# 187 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 188 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_27, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_1

NihilFirstVisit1_6:
# 198 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 199 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_30, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_5

NihilFirstVisit1_10:
# 209 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 210 "data/maps/Newmap11/scripts.pory"
	msgbox NihilFirstVisit1_Text_33, MSGBOX_AUTOCLOSE
	goto NihilFirstVisit1_9


# 221 "data/maps/Newmap11/scripts.pory"
distortionportalclose:
# 222 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 223 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 224 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 225 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 226 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 227 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 228 "data/maps/Newmap11/scripts.pory"
	face_left
# 229 "data/maps/Newmap11/scripts.pory"
	face_up
# 230 "data/maps/Newmap11/scripts.pory"
	face_down
# 231 "data/maps/Newmap11/scripts.pory"
	set_invisible
	step_end

# 233 "data/maps/Newmap11/scripts.pory"
distortionportalopen:
# 234 "data/maps/Newmap11/scripts.pory"
	set_visible
# 235 "data/maps/Newmap11/scripts.pory"
	face_down
# 236 "data/maps/Newmap11/scripts.pory"
	face_up
# 237 "data/maps/Newmap11/scripts.pory"
	face_left
# 238 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 239 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 240 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 241 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 242 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 243 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 244 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 245 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 246 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 247 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 248 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 249 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 250 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 251 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 252 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 253 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 254 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 255 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 256 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 257 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 258 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 259 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 260 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 261 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
# 262 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_down
# 263 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_up
# 264 "data/maps/Newmap11/scripts.pory"
	walk_in_place_fast_left
	step_end

Alistairarrive::
# 268 "data/maps/Newmap11/scripts.pory"
	lockall
# 269 "data/maps/Newmap11/scripts.pory"
	hidefollower
# 270 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, alistairarrive5
# 271 "data/maps/Newmap11/scripts.pory"
	showobjectat 3, MAP_NEWMAP11
# 272 "data/maps/Newmap11/scripts.pory"
	applymovement 3, mewtwobeside
# 273 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 275 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 276 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_0
# 277 "data/maps/Newmap11/scripts.pory"
	closemessage
# 279 "data/maps/Newmap11/scripts.pory"
	special SpawnCameraObject
# 280 "data/maps/Newmap11/scripts.pory"
	showobjectat 1, MAP_NEWMAP11
# 281 "data/maps/Newmap11/scripts.pory"
	showobjectat 2, MAP_NEWMAP11
# 282 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alistai
# 283 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alistai
# 284 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 286 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 287 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alistairdailogue1
# 288 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 289 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_1
# 290 "data/maps/Newmap11/scripts.pory"
	closemessage
# 292 "data/maps/Newmap11/scripts.pory"
	applymovement 0x7F, NihilFirstVisit1_Movement_16
# 293 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 294 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_HG_LIGHTHOUSE, TRUE
# 296 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 297 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_2
# 299 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_7
# 300 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_3
# 302 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 303 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_4
# 305 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 306 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_6
# 307 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 308 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 309 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 310 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_7
# 312 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 313 "data/maps/Newmap11/scripts.pory"
	applymovement 1, NihilFirstVisit1_Movement_5
# 314 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 315 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_8
# 317 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_0
# 318 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 319 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_9
# 321 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 322 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_10
# 323 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 324 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 325 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_1
# 326 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 327 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_11
# 328 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 329 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_12
# 330 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 331 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_13
# 332 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 333 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_14
# 334 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 335 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_15
# 336 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 337 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_16
# 338 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 339 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_17
# 340 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 341 "data/maps/Newmap11/scripts.pory"
	applymovement 3, alisbattle
# 342 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 343 "data/maps/Newmap11/scripts.pory"
	applymovement 1, alisbattle1
# 344 "data/maps/Newmap11/scripts.pory"
	applymovement 2, alisbattle2
# 345 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 346 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_18, MSGBOX_AUTOCLOSE
# 347 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 348 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 349 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_19
# 350 "data/maps/Newmap11/scripts.pory"
	closemessage
# 351 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_ENCOUNTER
# 352 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_20
# 353 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_21
# 354 "data/maps/Newmap11/scripts.pory"
	closemessage
# 355 "data/maps/Newmap11/scripts.pory"
	settotemboost B_SIDE_OPPONENT, 0, 0, 2, 2, 0, 0, 0
# 356 "data/maps/Newmap11/scripts.pory"
	trainerbattle_no_intro ACADEMY_HEAD, alislose
# 357 "data/maps/Newmap11/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 358 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 359 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 360 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_22
# 361 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 362 "data/maps/Newmap11/scripts.pory"
	closemessage
# 363 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 364 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 365 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, exclam
# 366 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 367 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_23, MSGBOX_AUTOCLOSE
# 369 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 370 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_24, MSGBOX_AUTOCLOSE
# 372 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 373 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_25, MSGBOX_AUTOCLOSE
# 375 "data/maps/Newmap11/scripts.pory"
	speakername Alistairarrive_Text_5
# 376 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_26, MSGBOX_AUTOCLOSE
# 378 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 379 "data/maps/Newmap11/scripts.pory"
	removeobject 1
# 380 "data/maps/Newmap11/scripts.pory"
	removeobject 2
# 381 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_ACADEMY_START
# 382 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 383 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_2
# 384 "data/maps/Newmap11/scripts.pory"
	waitmovement 0
# 385 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 386 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, Alistairarrive_Movement_3
# 387 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 388 "data/maps/Newmap11/scripts.pory"
	msgbox Alistairarrive_Text_27, MSGBOX_AUTOCLOSE
# 389 "data/maps/Newmap11/scripts.pory"
	special HealPlayerParty
# 390 "data/maps/Newmap11/scripts.pory"
	callnative ZeroPlayerPartyMons
# 391 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_NEWHOUSE, 2, 24
# 392 "data/maps/Newmap11/scripts.pory"
	releaseall
# 393 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 394 "data/maps/Newmap11/scripts.pory"
	setvar VAR_ACADEMY_START, 1
	return


# 399 "data/maps/Newmap11/scripts.pory"
traces2:
# 400 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 402 "data/maps/Newmap11/scripts.pory"
alisbattle1:
# 403 "data/maps/Newmap11/scripts.pory"
	walk_down
# 404 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 406 "data/maps/Newmap11/scripts.pory"
alisbattle2:
# 407 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 412 "data/maps/Newmap11/scripts.pory"
alisbattle:
# 413 "data/maps/Newmap11/scripts.pory"
	walk_down
# 414 "data/maps/Newmap11/scripts.pory"
	walk_left
# 415 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 417 "data/maps/Newmap11/scripts.pory"
alistairarrive5:
# 418 "data/maps/Newmap11/scripts.pory"
	walk_right
# 418 "data/maps/Newmap11/scripts.pory"
	walk_right
# 418 "data/maps/Newmap11/scripts.pory"
	walk_right
# 418 "data/maps/Newmap11/scripts.pory"
	walk_right
# 419 "data/maps/Newmap11/scripts.pory"
	walk_up
# 419 "data/maps/Newmap11/scripts.pory"
	walk_up
# 419 "data/maps/Newmap11/scripts.pory"
	walk_up
# 419 "data/maps/Newmap11/scripts.pory"
	walk_up
# 419 "data/maps/Newmap11/scripts.pory"
	walk_up
# 420 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 420 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 420 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 422 "data/maps/Newmap11/scripts.pory"
mewtwobeside:
# 423 "data/maps/Newmap11/scripts.pory"
	delay_16
# 424 "data/maps/Newmap11/scripts.pory"
	walk_right
# 424 "data/maps/Newmap11/scripts.pory"
	walk_right
# 424 "data/maps/Newmap11/scripts.pory"
	walk_right
# 424 "data/maps/Newmap11/scripts.pory"
	walk_right
# 425 "data/maps/Newmap11/scripts.pory"
	walk_up
# 425 "data/maps/Newmap11/scripts.pory"
	walk_up
# 425 "data/maps/Newmap11/scripts.pory"
	walk_up
# 425 "data/maps/Newmap11/scripts.pory"
	walk_up
# 425 "data/maps/Newmap11/scripts.pory"
	walk_up
# 426 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 426 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 427 "data/maps/Newmap11/scripts.pory"
	walk_slow_right
# 428 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 430 "data/maps/Newmap11/scripts.pory"
alistai:
# 431 "data/maps/Newmap11/scripts.pory"
	walk_up
# 431 "data/maps/Newmap11/scripts.pory"
	walk_up
# 431 "data/maps/Newmap11/scripts.pory"
	walk_up
# 431 "data/maps/Newmap11/scripts.pory"
	walk_up
	step_end

# 433 "data/maps/Newmap11/scripts.pory"
alistairdailogue1:
# 434 "data/maps/Newmap11/scripts.pory"
	emote_exclamation_mark
# 435 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

mewtwogone1::
# 439 "data/maps/Newmap11/scripts.pory"
	lock
# 440 "data/maps/Newmap11/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 441 "data/maps/Newmap11/scripts.pory"
	faceplayer
# 442 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 443 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_0, MSGBOX_AUTOCLOSE
# 445 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 446 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_1, MSGBOX_AUTOCLOSE
# 448 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 449 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_2, MSGBOX_AUTOCLOSE
# 451 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 452 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_3, MSGBOX_AUTOCLOSE
# 454 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 455 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_4, MSGBOX_AUTOCLOSE
# 457 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 458 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_5, MSGBOX_AUTOCLOSE
# 460 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 461 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_6, MSGBOX_AUTOCLOSE
# 463 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 464 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_7, MSGBOX_AUTOCLOSE
# 466 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 467 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_8, MSGBOX_AUTOCLOSE
# 468 "data/maps/Newmap11/scripts.pory"
	playse SE_PIN
# 469 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, question
# 470 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 471 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_9, MSGBOX_AUTOCLOSE
# 473 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 474 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_10, MSGBOX_AUTOCLOSE
# 476 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 477 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_11, MSGBOX_AUTOCLOSE
# 479 "data/maps/Newmap11/scripts.pory"
	speakername mewtwo
# 480 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_12, MSGBOX_AUTOCLOSE
# 481 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 482 "data/maps/Newmap11/scripts.pory"
	playse SE_M_TELEPORT
# 483 "data/maps/Newmap11/scripts.pory"
	removeobject 3
# 484 "data/maps/Newmap11/scripts.pory"
	setvar VAR_ACADEMY_START, 2
# 485 "data/maps/Newmap11/scripts.pory"
	fadedefaultbgm
# 486 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 487 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, pay
# 488 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 489 "data/maps/Newmap11/scripts.pory"
	msgbox mewtwogone1_Text_13, MSGBOX_AUTOCLOSE
# 490 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TALK_GRAVE
# 491 "data/maps/Newmap11/scripts.pory"
	release
	return


# 493 "data/maps/Newmap11/scripts.pory"
pay:
# 494 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 496 "data/maps/Newmap11/scripts.pory"
question:
# 497 "data/maps/Newmap11/scripts.pory"
	emote_question_mark
	step_end

grave::
# 500 "data/maps/Newmap11/scripts.pory"
	compare VAR_ACADEMY_START, 50
	goto_if_eq grave_2
grave_1:
# 525 "data/maps/Newmap11/scripts.pory"
	goto_if_set FLAG_TALK_GRAVE, grave_4
# 537 "data/maps/Newmap11/scripts.pory"
	goto EventScript_M_Grave
	return

grave_2:
# 501 "data/maps/Newmap11/scripts.pory"
	lock
# 502 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 503 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_0
# 504 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_1, MSGBOX_AUTOCLOSE
# 505 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFE, grave_Movement_0
# 506 "data/maps/Newmap11/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_WEAK
# 507 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 508 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_2
# 509 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 510 "data/maps/Newmap11/scripts.pory"
	closemessage
# 511 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_3
# 512 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_3
# 513 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 514 "data/maps/Newmap11/scripts.pory"
	closemessage
# 515 "data/maps/Newmap11/scripts.pory"
	applymovement 0xFF, grave_Movement_1
# 516 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 517 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_4
# 518 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 519 "data/maps/Newmap11/scripts.pory"
	closemessage
# 520 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_ACADEMY_START
# 521 "data/maps/Newmap11/scripts.pory"
	setvar VAR_ACADEMY_START, 40
# 522 "data/maps/Newmap11/scripts.pory"
	warp_continue_script MAP_NEWHOUSE, 2, 24, shouldsleep
	goto grave_1

grave_4:
# 526 "data/maps/Newmap11/scripts.pory"
	lock
# 527 "data/maps/Newmap11/scripts.pory"
	speakername Xylar1
# 528 "data/maps/Newmap11/scripts.pory"
	msgbox grave_Text_5, MSGBOX_AUTOCLOSE
# 529 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 530 "data/maps/Newmap11/scripts.pory"
	clearflag FLAG_TALK_GRAVE
# 531 "data/maps/Newmap11/scripts.pory"
	setflag FLAG_TRIAL_SERENA
# 532 "data/maps/Newmap11/scripts.pory"
	initclock 10, 10
# 533 "data/maps/Newmap11/scripts.pory"
	fwdmonth 3
# 534 "data/maps/Newmap11/scripts.pory"
	warpsilent MAP_ROUTE109, 21, 43
	return


shouldsleep::
# 543 "data/maps/Newmap11/scripts.pory"
	lock
# 544 "data/maps/Newmap11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 545 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 546 "data/maps/Newmap11/scripts.pory"
	msgbox shouldsleep_Text_0
# 547 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 548 "data/maps/Newmap11/scripts.pory"
	closemessage
# 549 "data/maps/Newmap11/scripts.pory"
	speakername NihilFirstVisit1_Text_0
# 550 "data/maps/Newmap11/scripts.pory"
	msgbox shouldsleep_Text_1
# 551 "data/maps/Newmap11/scripts.pory"
	waitmessage
# 552 "data/maps/Newmap11/scripts.pory"
	release
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

# 90 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_8:
# 90 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 90 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 90 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 90 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
# 90 "data/maps/Newmap11/scripts.pory"
	shake_horizontal
	step_end

# 103 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_9:
# 103 "data/maps/Newmap11/scripts.pory"
	face_left
	step_end

# 118 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_10:
# 118 "data/maps/Newmap11/scripts.pory"
	face_down
# 118 "data/maps/Newmap11/scripts.pory"
	delay_8
# 118 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 124 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_11:
# 124 "data/maps/Newmap11/scripts.pory"
	delay_8
# 124 "data/maps/Newmap11/scripts.pory"
	face_up
# 124 "data/maps/Newmap11/scripts.pory"
	delay_8
# 124 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 130 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_12:
# 130 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 142 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_13:
# 142 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 148 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_14:
# 148 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
# 148 "data/maps/Newmap11/scripts.pory"
	walk_slow_up
	step_end

# 163 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_15:
# 163 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 163 "data/maps/Newmap11/scripts.pory"
	shake_vertical
# 163 "data/maps/Newmap11/scripts.pory"
	shake_vertical
	step_end

# 180 "data/maps/Newmap11/scripts.pory"
NihilFirstVisit1_Movement_16:
# 180 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 180 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
# 180 "data/maps/Newmap11/scripts.pory"
	walk_slow_down
	step_end

# 317 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_0:
# 317 "data/maps/Newmap11/scripts.pory"
	face_up
	step_end

# 325 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_1:
# 325 "data/maps/Newmap11/scripts.pory"
	emote_upset
# 325 "data/maps/Newmap11/scripts.pory"
	face_down
	step_end

# 383 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_2:
# 383 "data/maps/Newmap11/scripts.pory"
	face_up
# 383 "data/maps/Newmap11/scripts.pory"
	delay_16
# 383 "data/maps/Newmap11/scripts.pory"
	delay_16
	step_end

# 386 "data/maps/Newmap11/scripts.pory"
Alistairarrive_Movement_3:
# 386 "data/maps/Newmap11/scripts.pory"
	emote_upset
	step_end

# 505 "data/maps/Newmap11/scripts.pory"
grave_Movement_0:
# 505 "data/maps/Newmap11/scripts.pory"
	walk_in_place_up
	step_end

# 515 "data/maps/Newmap11/scripts.pory"
grave_Movement_1:
# 515 "data/maps/Newmap11/scripts.pory"
	delay_16
# 515 "data/maps/Newmap11/scripts.pory"
	delay_16
# 515 "data/maps/Newmap11/scripts.pory"
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
	.string "cling to ideals, chase ambitions,\l"
	.string "worship appearances as though it were\l"
	.string "eternal.\p"
	.string "That… is not love…{PAUSE_UNTIL_PRESS} it is obsession.$"

NihilFirstVisit1_Text_9:
# 83 "data/maps/Newmap11/scripts.pory"
	.string "{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tell me, child.\p"
	.string "Why chase after that which is doomed to\n"
	.string "fade?\p"
	.string "Why seek meaning in a world that will\n"
	.string "one day forget you?$"

NihilFirstVisit1_Text_10:
# 88 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}……$"

NihilFirstVisit1_Text_11:
# 92 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Am I scared?……{PAUSE_UNTIL_PRESS} No, It's not possible.)$"

NihilFirstVisit1_Text_12:
# 96 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}The world does not keep her, nor does\n"
	.string "heaven.\p"
	.string "She exists only in your memory… and\n"
	.string "when you die,{PAUSE} not even that will remain.$"

NihilFirstVisit1_Text_13:
# 102 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}She died, and the world moved on. That's\n"
	.string "just how the world is.\p"
	.string "It doesn't mourn for anyone.$"

NihilFirstVisit1_Text_14:
# 104 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Graves are not for the dead.\p"
	.string "They are for the living…{PAUSE_UNTIL_PRESS} to lie to\n"
	.string "themselves.\p"
	.string "That is the harsh reality of the world\n"
	.string "yet…{PAUSE_UNTIL_PRESS} I find it…{PAUSE_UNTIL_PRESS} beautiful.$"

NihilFirstVisit1_Text_15:
# 110 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{RESET_FONT}{COLOR BLUE}{SHADOW LIGHT_GRAY}Beautiful…?\p"
	.string "You dare stand over my mother's grave\n"
	.string "and call her death {COLOR RED}{SHADOW LIGHT_GRAY}beautiful!{COLOR BLUE}{SHADOW LIGHT_GRAY}\p"
	.string "I'll kill you where you stand!!$"

NihilFirstVisit1_Text_16:
# 115 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_MAD}(Telepathy)\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar! Stop.$"

NihilFirstVisit1_Text_17:
# 121 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Do not mistake me for your enemy.\p"
	.string "You do not interest me.$"

NihilFirstVisit1_Text_18:
# 127 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I came only as a sign of respect to\n"
	.string "someone who once stood against me\p"
	.string "and who, for a fleeting moment, shone\n"
	.string "brighter than all others.$"

NihilFirstVisit1_Text_19:
# 132 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}But brightness is fragile and so is\n"
	.string "anger.\p"
	.string "You cling to anger.{PAUSE_UNTIL_PRESS} That is natural.$"

NihilFirstVisit1_Text_20:
# 136 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Live as you wish.\p"
	.string "Burn, break, or build…… it won't matter\n"
	.string "to me.$"

NihilFirstVisit1_Text_21:
# 145 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}In the end, all things return to\n"
	.string "nothing.$"

NihilFirstVisit1_Text_22:
# 152 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_NIHIL}{EMOTE_NORMAL}{FONT_SMALL}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That is the truth I carry.$"

NihilFirstVisit1_Text_23:
# 168 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo……?!\p"
	.string "What happened…?$"

NihilFirstVisit1_Text_24:
# 172 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}\p"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}That person……{PAUSE_UNTIL_PRESS} His presence was\n"
	.string "overwhelming…\p"
	.string "It felt as if vast shadows were moving\n"
	.string "behind him…\p"
	.string "Silent, watching.…\p"
	.string "Something……{PAUSE_UNTIL_PRESS}ancient, boundless, and\n"
	.string "suffocating.$"

NihilFirstVisit1_Text_25:
# 177 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Whoever he was…… we should avoid him\n"
	.string "until we grow strong.\p"
	.string "Because if the presence I felt was\n"
	.string "truly his……{PAUSE_UNTIL_PRESS} then we stand no chance.$"

NihilFirstVisit1_Text_26:
# 185 "data/maps/Newmap11/scripts.pory"
	.string "Do you think Mewtwo was right? Were\n"
	.string "there really… shadows?$"

NihilFirstVisit1_Text_27:
# 188 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}I see…… So, you believe Mewtwo's\n"
	.string "instincts.$"

NihilFirstVisit1_Text_28:
# 192 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}I see…… So, you don't believe Mewtwo's\n"
	.string "instincts.\p"
	.string "I think otherwise.$"

NihilFirstVisit1_Text_29:
# 196 "data/maps/Newmap11/scripts.pory"
	.string "Then… what about his words?\p"
	.string "About life, beauty, and death… do you\n"
	.string "believe them?$"

NihilFirstVisit1_Text_30:
# 199 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}You do?……{PAUSE_UNTIL_PRESS} That's unexpected, but I\n"
	.string "understand.$"

NihilFirstVisit1_Text_31:
# 203 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}Hmmm…… I also refuse to consider life\n"
	.string "as something meaningless.$"

NihilFirstVisit1_Text_32:
# 207 "data/maps/Newmap11/scripts.pory"
	.string "Do you think he…… was a human?$"

NihilFirstVisit1_Text_33:
# 210 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}Human…?\p"
	.string "Maybe you're right.{PAUSE_UNTIL_PRESS} But if that's true…\p"
	.string "Then what kind of human carries a\n"
	.string "presence like that?$"

NihilFirstVisit1_Text_34:
# 214 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}No… you're right.\p"
	.string "No human could stand there and make\n"
	.string "even Mewtwo hesitate.{PAUSE_UNTIL_PRESS}\p"
	.string "Whatever he is… he's not like us.$"

Alistairarrive_Text_0:
# 276 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}……\p"
	.string "…What now?\p"
	.string "{PAUSE_UNTIL_PRESS}What am I supposed to do?$"

Alistairarrive_Text_1:
# 289 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_2:
# 297 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Who are you?\p"
	.string "Another one here to finish me off?$"

Alistairarrive_Text_3:
# 300 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.\n"
	.string "My name is Alistair Caelum.\p"
	.string "Headmaster of Astralis Academy.$"

Alistairarrive_Text_4:
# 303 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Headmaster?\p"
	.string "Then leave. I don't need you.$"

Alistairarrive_Text_5:
# 305 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

Alistairarrive_Text_6:
# 306 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I knew your father.\n"
	.string "Aurther was my closest friend.\p"
	.string "I promised to watch over you once you\n"
	.string "joined the Academy.$"

Alistairarrive_Text_7:
# 310 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Friend?\p"
	.string "Then where were you when he died?!$"

Alistairarrive_Text_8:
# 315 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_9:
# 319 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Leave me.\p"
	.string "I'll get stronger on my own.\p"
	.string "Strong enough to kill them all.$"

Alistairarrive_Text_10:
# 322 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Revenge won't bring them back.\p"
	.string "It won't heal you.$"

Alistairarrive_Text_11:
# 327 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't talk like you understand!\p"
	.string "You don't know what I've been through!$"

Alistairarrive_Text_12:
# 329 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I don't.\p"
	.string "But I do know where your path ends.\p"
	.string "Revenge blinds. It consumes. And it\n"
	.string "destroys.$"

Alistairarrive_Text_13:
# 331 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Enough preaching!\p"
	.string "I've already crushed one of their\n"
	.string "strongest.\p"
	.string "If you think words can stop me-you're\n"
	.string "wasting breath.$"

Alistairarrive_Text_14:
# 333 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}(He's just as stubborn as Aurther…)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't about one victory.\p"
	.string "It's about enduring every battle that\n"
	.string "follows.$"

Alistairarrive_Text_15:
# 335 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Then prove it.\p"
	.string "If you think you're so wise-show me!$"

Alistairarrive_Text_16:
# 337 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Very well.\p"
	.string "If you win, I'll leave and never bother\n"
	.string "you again.\p"
	.string "But if I win-you come to the academy.$"

Alistairarrive_Text_17:
# 339 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Academy?\p"
	.string "Fine. But don't cry when I crush you.$"

Alistairarrive_Text_18:
# 346 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I wouldn't dream of it.\p"
	.string "Let's see if your strength matches your\n"
	.string "confidence.$"

Alistairarrive_Text_19:
# 349 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}……$"

Alistairarrive_Text_20:
# 352 "data/maps/Newmap11/scripts.pory"
	.string "Alakazam$"

Alistairarrive_Text_21:
# 353 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}……$"

Alistairarrive_Text_22:
# 360 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}………$"

Alistairarrive_Text_23:
# 367 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}I....I lost?$"

Alistairarrive_Text_24:
# 370 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong, Xylar but you don't know\n"
	.string "the meaning of true strength and to\l"
	.string "learn that the academy is the best\l"
	.string "place to be.$"

Alistairarrive_Text_25:
# 373 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}It doesn't change anything, one battle\n"
	.string "doesn't change who I am.$"

Alistairarrive_Text_26:
# 376 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No it doesn't but it's a start.\p"
	.string "I'll see you at the academy.$"

Alistairarrive_Text_27:
# 388 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Damn it!$"

mewtwogone1_Text_0:
# 443 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You feel it, don't you?\p"
	.string "The sting of failure....the bitterness\n"
	.string "of knowing you're not strong enough.$"

mewtwogone1_Text_1:
# 446 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need you reminding me of it.\p"
	.string "I know what happened.\p"
	.string "I wasn't ready.....but I will be.$"

mewtwogone1_Text_2:
# 449 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You were not ready because you never\n"
	.string "had to be.\p"
	.string "Not until now.\p"
	.string "That man......\n"
	.string "He showed us both just how far we still\l"
	.string "have to go.$"

mewtwogone1_Text_3:
# 452 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't care how far it is.\p"
	.string "I'll go to the ends of this world if it\n"
	.string "means I can destroy them.\p"
	.string "All of them.$"

mewtwogone1_Text_4:
# 455 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good, Hold onto this hatred, it's the\n"
	.string "only thing that will keep you moving.\p"
	.string "But don't mistake your rage for power.\p"
	.string "That man....Alistair....He didn't beat us\n"
	.string "because he's stronger.\p"
	.string "He beat us beacause he has discipline\n"
	.string "and control.\p"
	.string "You have neither.$"

mewtwogone1_Text_5:
# 458 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need this control. I'll burn\n"
	.string "everything in my way if I have to!$"

mewtwogone1_Text_6:
# 461 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}And that's why you'll fail again.\p"
	.string "Blind rage can only take you so far.\p"
	.string "You need to sharpen your hatred into a\n"
	.string "weapon, not let it consume you.$"

mewtwogone1_Text_7:
# 464 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Fine.\p"
	.string "But what about you?\p"
	.string "What are you going to do while I'll be\n"
	.string "wasting my time at some academy?$"

mewtwogone1_Text_8:
# 467 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I'll find my own path.\p"
	.string "This place.....the academy...it won't make\n"
	.string "me stronger.\p"
	.string "But it will make you stronger.\p"
	.string "And when the time comes, we'll finish\n"
	.string "what we started together.$"

mewtwogone1_Text_9:
# 471 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're...going to leave me?$"

mewtwogone1_Text_10:
# 474 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Not leaving. Preparing.\n"
	.string "The next time we face them, it won't end\l"
	.string "like this.\p"
	.string "You'll become stronger here, and I'll\n"
	.string "find my own way to grow.\p"
	.string "We'll both be ready.\p"
	.string "Until then.....Don't forget why we\n"
	.string "started this.$"

mewtwogone1_Text_11:
# 477 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}..........\p"
	.string "I won't.\p"
	.string "I'll destroy them Mewtwo.\p"
	.string "All of them.$"

mewtwogone1_Text_12:
# 480 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SMILE}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Good. Keep that fire burning, when we\n"
	.string "meet again I expect nothing less.$"

mewtwogone1_Text_13:
# 489 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I should talk to mom before leaving.$"

grave_Text_0:
# 503 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom…… I'm sorry.\p"
	.string "I couldn't save you. I couldn't save\n"
	.string "anyone.\p"
	.string "I wasn't strong enough.{PAUSE_UNTIL_PRESS} I wasn't\n"
	.string "anything.\p"
	.string "I ran-like a coward-while they took\n"
	.string "everything from us.$"

grave_Text_1:
# 504 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}But I won't let the world forget you.\p"
	.string "I won't let it move on like nothing\n"
	.string "happened.\p"
	.string "I'll carve your name into this world.\p"
	.string "I'll have my revenge.$"

grave_Text_2:
# 508 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Xylar……$"

grave_Text_3:
# 512 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You should rest……You haven't slept\n"
	.string "properly for days.$"

grave_Text_4:
# 517 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hmmm……$"

grave_Text_5:
# 528 "data/maps/Newmap11/scripts.pory"
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

shouldsleep_Text_0:
# 546 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm exhausted……\p"
	.string "Maybe I should rest before...$"

shouldsleep_Text_1:
# 550 "data/maps/Newmap11/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}……$"

alistair::
# 396 "data/maps/Newmap11/scripts.pory"
	.string "Alistair$"

alislose::
# 409 "data/maps/Newmap11/scripts.pory"
	.string "Wow! You've become stronger$"
