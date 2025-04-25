# 1 "data/maps/LuxuraIsland1/scripts.pory"

# 2 "data/maps/LuxuraIsland1/scripts.pory"
LuxuraIsland1_MapScripts::
# 3 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 4 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD,explosion
# 5 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_RESUME, outfit
# 6 "data/maps/LuxuraIsland1/scripts.pory"
	.byte 0

luxuraisland::
# 8 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 10 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox luxuraisland_Text_0
# 11 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 14 "data/maps/LuxuraIsland1/scripts.pory"
notal:
# 15 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 15 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 15 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
	step_end

officer::
# 18 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	faceplayer
# 20 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox officer_Text_0
# 21 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


forest::
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 26 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 5, exclam
# 27 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 28 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 30 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_0
# 31 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 32 "data/maps/LuxuraIsland1/scripts.pory"
	delay 60
# 33 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8004, 4
# 34 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8005, 6
# 35 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8006, 7
# 36 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8007, 7
# 37 "data/maps/LuxuraIsland1/scripts.pory"
	special ShakeCamera
# 38 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_THUNDERBOLT
# 39 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 40 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 41 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 42 "data/maps/LuxuraIsland1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 43 "data/maps/LuxuraIsland1/scripts.pory"
	doweather
# 44 "data/maps/LuxuraIsland1/scripts.pory"
	playse MUS_DUMMY
# 45 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AA
# 46 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 47 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_1
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_2
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 53 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, notal
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_3
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 58 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_AFTERTRAGEDY_MUSIC
# 59 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 11
# 60 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE103_STATE, 3
	return


hurry::
# 65 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox hurry_Text_0
# 68 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


explosion::
# 71 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_lt explosion_1
# 93 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_eq explosion_2
# 114 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt explosion_6
explosion_5:
# 135 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq explosion_4
	return

explosion_1:
# 72 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 6
# 73 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 7
# 74 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 8
# 75 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 9
# 76 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 10
# 77 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 78 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 79 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 80 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 14
# 81 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 1
# 82 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 2
# 83 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 3
# 84 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 4
# 85 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 5
# 86 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AD
# 87 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AC
# 88 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
# 89 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 90 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_2:
# 94 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 95 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 96 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 97 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 98 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 99 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 100 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 101 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 102 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 103 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 104 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 11
# 105 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 12
# 106 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 13
# 107 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 108 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 109 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AE
# 110 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 111 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 112 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_3:
# 115 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 117 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 118 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 119 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 120 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 121 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 122 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 123 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 124 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 125 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 126 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 127 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 128 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 129 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 130 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
# 131 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 132 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 133 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_4:
# 136 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 137 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 138 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 139 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 141 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 143 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 144 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 145 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 146 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 147 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 149 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 15
# 151 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4B6
# 152 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 153 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 154 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_6:
# 114 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt explosion_3
	goto explosion_5


miraded::
# 159 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 160 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, invisible
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 162 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, boo
# 163 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, boo
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_0
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_1
# 168 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_2
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_3, MSGBOX_AUTOCLOSE
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, run
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	special SpawnCameraObject
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, bo
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_5, MSGBOX_AUTOCLOSE
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_7, MSGBOX_AUTOCLOSE
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, players
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, players
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 190 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, backes
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, backes
# 192 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, backes
# 193 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_8, MSGBOX_AUTOCLOSE
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_9, MSGBOX_AUTOCLOSE
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_10, MSGBOX_AUTOCLOSE
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_11, MSGBOX_AUTOCLOSE
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_12, MSGBOX_AUTOCLOSE
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_13, MSGBOX_AUTOCLOSE
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_14, MSGBOX_AUTOCLOSE
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_15, MSGBOX_AUTOCLOSE
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_16, MSGBOX_AUTOCLOSE
# 216 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_17, MSGBOX_AUTOCLOSE
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_18
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_19, MSGBOX_AUTOCLOSE
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lok
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, heart
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_20, MSGBOX_AUTOCLOSE
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_21, MSGBOX_AUTOCLOSE
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_22, MSGBOX_AUTOCLOSE
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_23, MSGBOX_AUTOCLOSE
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_24, MSGBOX_AUTOCLOSE
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 245 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_25, MSGBOX_AUTOCLOSE
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_26
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_27, MSGBOX_AUTOCLOSE
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_FLEE
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, byee
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_28, MSGBOX_AUTOCLOSE
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_29, MSGBOX_AUTOCLOSE
# 263 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 264 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_PIN
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, exclam
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_30
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_31, MSGBOX_AUTOCLOSE
# 270 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_BALL_OPEN
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_32
# 273 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, visible
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, miraded_Movement_0
# 276 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, miraded_Movement_1
# 278 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_33
# 280 "data/maps/LuxuraIsland1/scripts.pory"
	closemessage
# 281 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 282 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 283 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_34
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, back
# 286 "data/maps/LuxuraIsland1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 287 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_35
# 288 "data/maps/LuxuraIsland1/scripts.pory"
	waitmoncry
# 289 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 291 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	destroyfollower
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, invisible
# 295 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, visible
# 296 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 299 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_36, MSGBOX_AUTOCLOSE
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_37, MSGBOX_AUTOCLOSE
# 302 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 14
# 304 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x26B
# 305 "data/maps/LuxuraIsland1/scripts.pory"
	warp MAP_LUXURAWOODS, 3, 35
	return


# 307 "data/maps/LuxuraIsland1/scripts.pory"
lok:
# 308 "data/maps/LuxuraIsland1/scripts.pory"
	face_up
	step_end

# 310 "data/maps/LuxuraIsland1/scripts.pory"
backes:
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 314 "data/maps/LuxuraIsland1/scripts.pory"
backe:
# 315 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 315 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 315 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 318 "data/maps/LuxuraIsland1/scripts.pory"
byee:
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 320 "data/maps/LuxuraIsland1/scripts.pory"
	set_invisible
	step_end

# 323 "data/maps/LuxuraIsland1/scripts.pory"
bo:
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
	step_end

# 326 "data/maps/LuxuraIsland1/scripts.pory"
boo:
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
	step_end

Mira::
# 330 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 331 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms
# 332 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms
# 333 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 334 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 335 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 337 "data/maps/LuxuraIsland1/scripts.pory"
ms:
# 338 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 339 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira2::
# 344 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 345 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms1
# 346 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms1
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 348 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 349 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 352 "data/maps/LuxuraIsland1/scripts.pory"
ms1:
# 353 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 353 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 354 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira3::
# 359 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms2
# 361 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms2
# 362 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 363 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 364 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 367 "data/maps/LuxuraIsland1/scripts.pory"
ms2:
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 369 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira1::
# 372 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 373 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m1
# 374 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m1
# 375 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 376 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 377 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 380 "data/maps/LuxuraIsland1/scripts.pory"
m1:
# 381 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 381 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 382 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira2::
# 385 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 386 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m2
# 387 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m2
# 388 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 389 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 390 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 393 "data/maps/LuxuraIsland1/scripts.pory"
m2:
# 394 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 395 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

# 275 "data/maps/LuxuraIsland1/scripts.pory"
miraded_Movement_0:
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

# 277 "data/maps/LuxuraIsland1/scripts.pory"
miraded_Movement_1:
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	emote_happy
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	delay_16
	step_end

luxuraisland_Text_0:
# 10 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I'm not allowed to go there alone.$"

officer_Text_0:
# 20 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, Young Master.$"

forest_Text_0:
# 30 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Young Master, you're not allowed to go\n"
	.string "the forest.\p"
	.string "It's filled with wild and dangerous\n"
	.string "Pokemon.$"

forest_Text_1:
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that?$"

forest_Text_2:
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, did you hear that? It\n"
	.string "sounded like a voice coming from the\l"
	.string "direction of the mansion.\p"
	.string "We should go check it out!$"

forest_Text_3:
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom and Dad are in the Mansion.$"

hurry_Text_0:
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry.$"

miraded_Text_0:
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's ask the officer and sailors for\n"
	.string "help.\p"
	.string "They'll surely help us.$"

miraded_Text_1:
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Okay, Master Xylar.$"

miraded_Text_2:
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What happened here?$"

miraded_Text_3:
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}That's horrible.\p"
	.string "Why would they resort to this?$"

miraded_Text_4:
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt M$"

miraded_Text_5:
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Shadow Slayers sure work fast.$"

miraded_Text_6:
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt F$"

miraded_Text_7:
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah, they killed everyone on the island\n"
	.string "in an instant.$"

miraded_Text_8:
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We really are lucky today.$"

miraded_Text_9:
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah.\p"
	.string "We were ordered to capture you two but\n"
	.string "you two came running to us on your own.$"

miraded_Text_10:
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Now , Let's head back peacefully since\n"
	.string "I'm in a good mood today.$"

miraded_Text_11:
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Not gonna happen.$"

miraded_Text_12:
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do you guys really think you can\n"
	.string "escape?$"

miraded_Text_13:
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...$"

miraded_Text_14:
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You're joking? right?$"

miraded_Text_15:
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They actually think they can escape.\p"
	.string "HAHAHAHA!\p"
	.string "How stupid.$"

miraded_Text_16:
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's ridiculous.\p"
	.string "HAHAHAHA!$"

miraded_Text_17:
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(If we both try to escape we will end up\n"
	.string "getting captured.)\p"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'll slow them down.\p"
	.string "You should run towards the forest\n"
	.string "quickly.$"

miraded_Text_18:
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I'm not gonna leave you behind.$"

miraded_Text_19:
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I'll join you soon. So, trust me and run.$"

miraded_Text_20:
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at the hero,trying to protect the\n"
	.string "little boy.\p"
	.string "How cute.$"

miraded_Text_21:
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But it's not gonna work since we are\n"
	.string "gonna kill her and take the child.$"

miraded_Text_22:
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}YEAH YEAH, make her explode like BOOM!\p"
	.string "Make her bleed.\p"
	.string "Make her scream.\p"
	.string "Oh, I can already hear it.$"

miraded_Text_23:
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And kid's reaction...priceless i would\n"
	.string "say.$"

miraded_Text_24:
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now I'm really excited.$"

miraded_Text_25:
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Listen to me, from now no\n"
	.string "matter what happens don't look back\l"
	.string "and run as fast as you can\p"
	.string "Go! and remember it's not your fault.$"

miraded_Text_26:
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, why are you talking like this?$"

miraded_Text_27:
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_MAD}{COLOR RED}{SHADOW LIGHT_GRAY}XYLAR!$"

miraded_Text_28:
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Aww, how touching, He's running away.\p"
	.string "Too bad you won't get to see him grow up$"

miraded_Text_29:
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}And too bad for you since you won't be\n"
	.string "able to capture him.$"

miraded_Text_30:
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What?\p"
	.string "You dare mock me.\p"
	.string "Kill her this instant.$"

miraded_Text_31:
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Say goodbye, lady. This is the end of\n"
	.string "the road for you.$"

miraded_Text_32:
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Electrode!$"

miraded_Text_33:
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_TEAR}{COLOR RED}{SHADOW LIGHT_GRAY}Told you, you'll become strong.$"

miraded_Text_34:
# 283 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use EXPLOSION!$"

miraded_Text_35:
# 287 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Bzzz$"

miraded_Text_36:
# 299 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh, look at that beautiful red... It's\n"
	.string "so vibrant, so alive!\p"
	.string "Blood always gets my heart racing. Don't\n"
	.string "you just love the smell?\p"
	.string "It's like... the essence of life\n"
	.string "escaping. I can't get enough of it.$"

miraded_Text_37:
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(But she was smiling right before the\n"
	.string "explosion and it really pissed me off.)$"

Mira_Text_0:
# 333 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry and ask for help.$"
