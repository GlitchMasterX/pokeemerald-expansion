# 1 "data/maps/LuxuraIsland1/scripts.pory"

# 2 "data/maps/LuxuraIsland1/scripts.pory"
LuxuraIsland1_MapScripts::
# 3 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 4 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD,explosion
# 5 "data/maps/LuxuraIsland1/scripts.pory"
	.byte 0

luxuraisland::
# 7 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 8 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox luxuraisland_Text_0
# 10 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 13 "data/maps/LuxuraIsland1/scripts.pory"
notal:
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
	step_end

officer::
# 17 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 18 "data/maps/LuxuraIsland1/scripts.pory"
	faceplayer
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox officer_Text_0
# 20 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


forest::
# 24 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 5, forest_Movement_0
# 26 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 27 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 28 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_0
# 30 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 31 "data/maps/LuxuraIsland1/scripts.pory"
	delay 60
# 32 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8004, 4
# 33 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8005, 6
# 34 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8006, 7
# 35 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8007, 7
# 36 "data/maps/LuxuraIsland1/scripts.pory"
	special ShakeCamera
# 37 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_THUNDERBOLT
# 38 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 39 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 40 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 41 "data/maps/LuxuraIsland1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 42 "data/maps/LuxuraIsland1/scripts.pory"
	doweather
# 43 "data/maps/LuxuraIsland1/scripts.pory"
	playse MUS_DUMMY
# 44 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AA
# 45 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 46 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 47 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_1
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_2
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 53 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, notal
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_3
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_AFTERTRAGEDY_MUSIC
# 58 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 11
# 59 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE103_STATE, 3
	return


hurry::
# 64 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 65 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox hurry_Text_0
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


explosion::
# 70 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_lt explosion_1
# 92 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_eq explosion_2
# 113 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt explosion_6
explosion_5:
# 134 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq explosion_4
	return

explosion_1:
# 71 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 6
# 72 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 7
# 73 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 8
# 74 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 9
# 75 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 10
# 76 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 77 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 78 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 79 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 14
# 80 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 1
# 81 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 2
# 82 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 3
# 83 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 4
# 84 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 5
# 85 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AD
# 86 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AC
# 87 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
# 88 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 89 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_2:
# 93 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 94 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 95 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 96 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 97 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 98 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 99 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 100 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 101 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 102 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 103 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 11
# 104 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 12
# 105 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 13
# 106 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 107 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 108 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AE
# 109 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 110 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 111 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_3:
# 114 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 115 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 117 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 118 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 119 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 120 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 121 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 122 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 123 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 124 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 125 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 126 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 127 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 128 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 129 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
# 130 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 131 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 132 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_4:
# 135 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 136 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 137 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 138 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 139 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 141 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 143 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 144 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 145 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 146 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 147 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 149 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 15
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4B6
# 151 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 152 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 153 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_6:
# 113 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt explosion_3
	goto explosion_5


miraded::
# 158 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 159 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, invisible
# 160 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, boo
# 162 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, boo
# 163 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_0
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_1
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 168 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_2
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_3, MSGBOX_AUTOCLOSE
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, run
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	special SpawnCameraObject
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, bo
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_5, MSGBOX_AUTOCLOSE
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_7, MSGBOX_AUTOCLOSE
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, players
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, players
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, backes
# 190 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, backes
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, backes
# 192 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 193 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_8, MSGBOX_AUTOCLOSE
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_9, MSGBOX_AUTOCLOSE
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_10, MSGBOX_AUTOCLOSE
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_11, MSGBOX_AUTOCLOSE
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_12, MSGBOX_AUTOCLOSE
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_13, MSGBOX_AUTOCLOSE
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_14, MSGBOX_AUTOCLOSE
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_15, MSGBOX_AUTOCLOSE
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_16, MSGBOX_AUTOCLOSE
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 216 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	facefollowernpc
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_17, MSGBOX_AUTOCLOSE
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_18
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_19, MSGBOX_AUTOCLOSE
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lok
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, heart
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_20, MSGBOX_AUTOCLOSE
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_21, MSGBOX_AUTOCLOSE
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_22, MSGBOX_AUTOCLOSE
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_23, MSGBOX_AUTOCLOSE
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_24, MSGBOX_AUTOCLOSE
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 245 "data/maps/LuxuraIsland1/scripts.pory"
	facefollowernpc
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_25, MSGBOX_AUTOCLOSE
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_26
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_27, MSGBOX_AUTOCLOSE
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_FLEE
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, byee
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_28, MSGBOX_AUTOCLOSE
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_29, MSGBOX_AUTOCLOSE
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 263 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_PIN
# 264 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, exclam
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_30
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_31, MSGBOX_AUTOCLOSE
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_BALL_OPEN
# 270 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_32
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, visible
# 273 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_33
# 276 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, back
# 278 "data/maps/LuxuraIsland1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_34
# 280 "data/maps/LuxuraIsland1/scripts.pory"
	waitmoncry
# 281 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 282 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 283 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	destroyfollowernpc
# 286 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, invisible
# 287 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, visible
# 288 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 289 "data/maps/LuxuraIsland1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 291 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_35, MSGBOX_AUTOCLOSE
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_36, MSGBOX_AUTOCLOSE
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 295 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 14
# 296 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x26B
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	warp MAP_LUXURAWOODS, 3, 35
	return


# 299 "data/maps/LuxuraIsland1/scripts.pory"
lok:
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	face_up
	step_end

# 302 "data/maps/LuxuraIsland1/scripts.pory"
backes:
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/LuxuraIsland1/scripts.pory"
backe:
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 310 "data/maps/LuxuraIsland1/scripts.pory"
byee:
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 312 "data/maps/LuxuraIsland1/scripts.pory"
	set_invisible
	step_end

# 315 "data/maps/LuxuraIsland1/scripts.pory"
bo:
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 316 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
	step_end

# 318 "data/maps/LuxuraIsland1/scripts.pory"
boo:
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
	step_end

Mira::
# 322 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 323 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms
# 325 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 326 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 329 "data/maps/LuxuraIsland1/scripts.pory"
ms:
# 330 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 331 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira2::
# 336 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 337 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms1
# 338 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms1
# 339 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 340 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 341 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 344 "data/maps/LuxuraIsland1/scripts.pory"
ms1:
# 345 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 345 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 346 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira3::
# 351 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 352 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms2
# 353 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms2
# 354 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 355 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 356 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 359 "data/maps/LuxuraIsland1/scripts.pory"
ms2:
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 361 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira1::
# 364 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 365 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m1
# 366 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m1
# 367 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 369 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 372 "data/maps/LuxuraIsland1/scripts.pory"
m1:
# 373 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 373 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 374 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira2::
# 377 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 378 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m2
# 379 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m2
# 380 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 381 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 382 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 385 "data/maps/LuxuraIsland1/scripts.pory"
m2:
# 386 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 387 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

# 25 "data/maps/LuxuraIsland1/scripts.pory"
forest_Movement_0:
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	emote_exclamation_mark
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	face_down
	step_end

luxuraisland_Text_0:
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I'm not allowed to go there alone.$"

officer_Text_0:
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, Young Master.$"

forest_Text_0:
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Young Master, you're not allowed to go\n"
	.string "the forest.\p"
	.string "It's filled with wild and dangerous\n"
	.string "Pokemon.$"

forest_Text_1:
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that?$"

forest_Text_2:
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, did you hear that? It\n"
	.string "sounded like a voice coming from the\l"
	.string "direction of the mansion.\p"
	.string "We should go check it out!$"

forest_Text_3:
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom and Dad are in the Mansion.$"

hurry_Text_0:
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry.$"

miraded_Text_0:
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}If we find the officers, maybe they can\n"
	.string "help us…$"

miraded_Text_1:
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Yes, Master Xylar. I'll stay right beside\n"
	.string "you.$"

miraded_Text_2:
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What happened here?$"

miraded_Text_3:
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}That's horrible.\p"
	.string "Why would they resort to this?$"

miraded_Text_4:
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt M$"

miraded_Text_5:
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like the Shadow Slayers already\n"
	.string "did the dirty work.$"

miraded_Text_6:
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt F$"

miraded_Text_7:
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not a soul left breathing. This island\n"
	.string "belongs to Team Spark now.$"

miraded_Text_8:
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… luck's on our side today.$"

miraded_Text_9:
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah.\p"
	.string "We were ordered to capture you two, but\n"
	.string "you came straight to us.$"

miraded_Text_10:
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So let's not make this messy.\p"
	.string "Come quietly, and maybe I'll stay in a\n"
	.string "good mood.$"

miraded_Text_11:
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Not a chance.$"

miraded_Text_12:
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You actually think you can run from us?$"

miraded_Text_13:
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...$"

miraded_Text_14:
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Heh. You're not serious… right?$"

miraded_Text_15:
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They really believe it!\p"
	.string "HAHAHA-pathetic.$"

miraded_Text_16:
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's laughable.\p"
	.string "Truly laughable!$"

miraded_Text_17:
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(If we resist together, we'll both be\n"
	.string "taken.)\p"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar… I'll hold them off. You\n"
	.string "must run to the forest.$"

miraded_Text_18:
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No! I won't abandon you, Mira!$"

miraded_Text_19:
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Please-don't argue.\p"
	.string "I promise, I'll follow right after… but\n"
	.string "you have to trust me now. Go!$"

miraded_Text_20:
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at the hero, trying to protect the\n"
	.string "little boy.\p"
	.string "How cute.$"

miraded_Text_21:
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But it won't matter.\p"
	.string "She dies here… and the boy comes with\n"
	.string "us.$"

miraded_Text_22:
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's make her suffer. Draw it out-I\n"
	.string "want to hear her scream.$"

miraded_Text_23:
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The boy's face when she falls… that's\n"
	.string "the prize I'm waiting for.$"

miraded_Text_24:
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now I'm really excited.$"

miraded_Text_25:
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Xylar! From here on, no matter what you\n"
	.string "hear, don't look back.\p"
	.string "Run, and never think this was your\n"
	.string "fault.$"

miraded_Text_26:
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, please-don't say it like you're\n"
	.string "already gone!$"

miraded_Text_27:
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_MAD}{COLOR RED}{SHADOW LIGHT_GRAY}XYLAR!$"

miraded_Text_28:
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Aww, how touching, He's running away.\p"
	.string "Too bad you won't get to see him grow\n"
	.string "up.$"

miraded_Text_29:
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Too bad… you'll never lay a hand on him.$"

miraded_Text_30:
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What?!\p"
	.string "You think this is a game?\p"
	.string "Tear her apart this instant!$"

miraded_Text_31:
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Say goodbye, lady. This is the end of\n"
	.string "the road for you.$"

miraded_Text_32:
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Electrode!$"

miraded_Text_33:
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use EXPLOSION!$"

miraded_Text_34:
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Bzzz..$"

miraded_Text_35:
# 291 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh, look at that beautiful red... It's\n"
	.string "so vibrant, so alive!\p"
	.string "Blood always gets my heart racing. Don't\n"
	.string "you just love the smell?\p"
	.string "It's like... the essence of life\n"
	.string "escaping. I can't get enough of it.$"

miraded_Text_36:
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh… Did you see that smile? Even at\n"
	.string "the end, she defied us. It makes me\l"
	.string "sick.$"

Mira_Text_0:
# 325 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry and ask for help.$"
