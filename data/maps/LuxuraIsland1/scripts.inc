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
	namebox Xylar
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_1
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_2
# 53 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, notal
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_3
# 58 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 59 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 60 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_AFTERTRAGEDY_MUSIC
# 61 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 11
# 62 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE103_STATE, 3
	return


hurry::
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 68 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 69 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox hurry_Text_0
# 70 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


explosion::
# 73 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_lt explosion_1
# 95 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_eq explosion_2
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt explosion_6
explosion_5:
# 137 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq explosion_4
	return

explosion_1:
# 74 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 6
# 75 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 7
# 76 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 8
# 77 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 9
# 78 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 10
# 79 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 80 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 81 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 82 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 14
# 83 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 1
# 84 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 2
# 85 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 3
# 86 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 4
# 87 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 5
# 88 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AD
# 89 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AC
# 90 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
# 91 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 92 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_2:
# 96 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 97 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 98 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 99 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 100 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 101 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 102 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 103 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 104 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 105 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 106 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 11
# 107 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 12
# 108 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 13
# 109 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 110 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 111 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AE
# 112 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 113 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 114 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_3:
# 117 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 118 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 119 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 120 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 121 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 122 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 123 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 124 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 125 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 126 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 127 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 128 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 129 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 130 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 131 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 132 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
# 133 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 134 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 135 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_4:
# 138 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 139 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 141 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 143 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 144 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 145 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 146 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 147 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 149 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 151 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 152 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 15
# 153 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4B6
# 154 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 155 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 156 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_6:
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt explosion_3
	goto explosion_5


miraded::
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 162 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, invisible
# 163 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, boo
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, boo
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_0
# 168 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_1
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_2
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_3
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, run
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	special SpawnCameraObject
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, bo
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_4, MSGBOX_AUTOCLOSE
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_5, MSGBOX_AUTOCLOSE
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 190 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, players
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, players
# 192 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 193 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, backes
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, backes
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, backes
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_6, MSGBOX_AUTOCLOSE
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_7, MSGBOX_AUTOCLOSE
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_8, MSGBOX_AUTOCLOSE
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_9
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_10, MSGBOX_AUTOCLOSE
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_11, MSGBOX_AUTOCLOSE
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_12, MSGBOX_AUTOCLOSE
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_13, MSGBOX_AUTOCLOSE
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_14, MSGBOX_AUTOCLOSE
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 216 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_15, MSGBOX_AUTOCLOSE
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_16
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_17, MSGBOX_AUTOCLOSE
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lok
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, heart
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_18, MSGBOX_AUTOCLOSE
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_19, MSGBOX_AUTOCLOSE
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_20, MSGBOX_AUTOCLOSE
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_21, MSGBOX_AUTOCLOSE
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_22, MSGBOX_AUTOCLOSE
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_23, MSGBOX_AUTOCLOSE
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 245 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_24
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_25, MSGBOX_AUTOCLOSE
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, byee
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_26, MSGBOX_AUTOCLOSE
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_27, MSGBOX_AUTOCLOSE
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, exclam
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_28
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_29, MSGBOX_AUTOCLOSE
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_30
# 263 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, visible
# 264 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_31
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, back
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_32
# 270 "data/maps/LuxuraIsland1/scripts.pory"
	waitmoncry
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 273 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	destroyfollower
# 276 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, invisible
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, visible
# 278 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 280 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_33, MSGBOX_AUTOCLOSE
# 281 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 282 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 14
# 283 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x26B
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	warp MAP_LUXURAWOODS, 3, 35
	return


# 286 "data/maps/LuxuraIsland1/scripts.pory"
lok:
# 287 "data/maps/LuxuraIsland1/scripts.pory"
	face_up
	step_end

# 289 "data/maps/LuxuraIsland1/scripts.pory"
backes:
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 290 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 293 "data/maps/LuxuraIsland1/scripts.pory"
backe:
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 297 "data/maps/LuxuraIsland1/scripts.pory"
byee:
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 299 "data/maps/LuxuraIsland1/scripts.pory"
	set_invisible
	step_end

# 302 "data/maps/LuxuraIsland1/scripts.pory"
bo:
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
	step_end

# 305 "data/maps/LuxuraIsland1/scripts.pory"
boo:
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
	step_end

Mira::
# 309 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 310 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms
# 312 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 313 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 314 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 316 "data/maps/LuxuraIsland1/scripts.pory"
ms:
# 317 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 318 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira2::
# 323 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 324 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms1
# 325 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms1
# 326 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 328 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 331 "data/maps/LuxuraIsland1/scripts.pory"
ms1:
# 332 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 332 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 333 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira3::
# 338 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 339 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms2
# 340 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms2
# 341 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 342 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 343 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 346 "data/maps/LuxuraIsland1/scripts.pory"
ms2:
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 348 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira1::
# 351 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 352 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m1
# 353 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m1
# 354 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 355 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 356 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 359 "data/maps/LuxuraIsland1/scripts.pory"
m1:
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 361 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira2::
# 364 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 365 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m2
# 366 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m2
# 367 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 369 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 372 "data/maps/LuxuraIsland1/scripts.pory"
m2:
# 373 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 374 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
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
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that?$"

forest_Text_2:
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, did you hear that? It\n"
	.string "sounded like a voice coming from the\l"
	.string "direction of the mansion.\p"
	.string "We should go check it out!$"

forest_Text_3:
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom and Dad are in the Mansion.$"

hurry_Text_0:
# 69 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry.$"

miraded_Text_0:
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's ask the officer and sailors for\n"
	.string "help.\p"
	.string "They'll surely help us.$"

miraded_Text_1:
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Okay, Master Xylar.$"

miraded_Text_2:
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What happened here?$"

miraded_Text_3:
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's horrible.\p"
	.string "Why would they resort to this?$"

miraded_Text_4:
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Shadow Slayers sure work fast.$"

miraded_Text_5:
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah, they killed everyone on the island\n"
	.string "in an instant.$"

miraded_Text_6:
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We really are lucky today.$"

miraded_Text_7:
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah.\p"
	.string "We were ordered to capture you two but\n"
	.string "you two came running to us on your own.$"

miraded_Text_8:
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Now , Let's head back peacefully since\n"
	.string "I'm in a good mood today.$"

miraded_Text_9:
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not gonna happen.$"

miraded_Text_10:
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do you guys really think you can\n"
	.string "escape?$"

miraded_Text_11:
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...$"

miraded_Text_12:
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You're joking? right?$"

miraded_Text_13:
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They actually think they can escape.\p"
	.string "HAHAHAHA\p"
	.string "How stupid.$"

miraded_Text_14:
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's ridiculous.\p"
	.string "HAHAHAHA!$"

miraded_Text_15:
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(If we both try to escape we will end up\n"
	.string "getting captured.)\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'll slow them down.\p"
	.string "You should run towards the forest\n"
	.string "quickly.$"

miraded_Text_16:
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I'm not gonna leave you behind.$"

miraded_Text_17:
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'll join you soon. So, trust me and run.$"

miraded_Text_18:
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at the hero,trying to protect the\n"
	.string "little boy.\p"
	.string "How cute.$"

miraded_Text_19:
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But it's not gonna work since we are\n"
	.string "gonna kill her and take the child.$"

miraded_Text_20:
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}YEAH YEAH, make her explode like BOOM!\p"
	.string "Make her bleed.\p"
	.string "Make her scream.\p"
	.string "Oh, I can already hear it.$"

miraded_Text_21:
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And kid's reaction...priceless i would\n"
	.string "say.$"

miraded_Text_22:
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now I'm really excited.$"

miraded_Text_23:
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Listen to me, from now no\n"
	.string "matter what happens don't look back\l"
	.string "and run as fast as you can\p"
	.string "Go! and remember it's not your fault.$"

miraded_Text_24:
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, why are you talking like this?$"

miraded_Text_25:
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}XYLAR!$"

miraded_Text_26:
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Aww, how touching, He's running away.\p"
	.string "Too bad you won't get to see him grow up$"

miraded_Text_27:
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}And too bad for you since you won't be\n"
	.string "able to capture him.$"

miraded_Text_28:
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What?\p"
	.string "You dare mock me.\p"
	.string "Kill her this instant.$"

miraded_Text_29:
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Say goodbye, lady. This is the end of\n"
	.string "the road for you.$"

miraded_Text_30:
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Electrode!$"

miraded_Text_31:
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use EXPLOSION!$"

miraded_Text_32:
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Bzzz$"

miraded_Text_33:
# 280 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh, look at that beautiful red... It's\n"
	.string "so vibrant, so alive!\p"
	.string "Blood always gets my heart racing. Don't\n"
	.string "you just love the smell?\p"
	.string "It's like... the essence of life\n"
	.string "escaping. I can't get enough of it.$"

Mira_Text_0:
# 312 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry and ask for help.$"
