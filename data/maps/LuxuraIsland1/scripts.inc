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
# 77 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_eq explosion_2
# 90 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt explosion_6
explosion_5:
# 118 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq explosion_4
	return

explosion_1:
# 71 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AD
# 72 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
# 73 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 74 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_2:
# 78 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 32, 17, 0x3D1, 0
# 79 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 31, 17, 0x3D0, 0
# 80 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 39, 16, 0x3D1, 0
# 81 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 38, 16, 0x3D0, 0
# 82 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 35, 10, 0x3D1, 0
# 83 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 34, 10, 0x3D0, 0
# 84 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 43, 23, 0x3D1, 0
# 85 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 42, 23, 0x3D0, 0
# 86 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AE
# 87 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 88 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_3:
# 91 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 92 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 93 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 94 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 95 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 96 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 97 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 98 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 99 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 100 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 101 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 102 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 103 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 104 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 105 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 106 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
# 107 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 32, 17, 0x3D1, 0
# 108 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 31, 17, 0x3D0, 0
# 109 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 39, 16, 0x3D1, 0
# 110 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 38, 16, 0x3D0, 0
# 111 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 35, 10, 0x3D1, 0
# 112 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 34, 10, 0x3D0, 0
# 113 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 43, 23, 0x3D1, 0
# 114 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 42, 23, 0x3D0, 0
# 115 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_4:
# 119 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4B6
# 120 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 34, 24, 0x3D3, 0
# 121 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 33, 24, 0x3D2, 0
# 122 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 32, 17, 0x3D1, 0
# 123 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 31, 17, 0x3D0, 0
# 124 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 39, 16, 0x3D1, 0
# 125 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 38, 16, 0x3D0, 0
# 126 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 35, 10, 0x3D1, 0
# 127 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 34, 10, 0x3D0, 0
# 128 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 43, 23, 0x3D1, 0
# 129 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 42, 23, 0x3D0, 0
# 130 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 131 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_6:
# 90 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt explosion_3
	goto explosion_5


miraded::
# 136 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 137 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, boo
# 138 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, boo
# 139 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_0
# 141 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_1
# 143 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_PIN
# 144 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 145 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, exclam
# 146 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 147 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_2
# 149 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 152 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 153 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, run
# 154 "data/maps/LuxuraIsland1/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, bo
# 156 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 157 "data/maps/LuxuraIsland1/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 158 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 159 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_5, MSGBOX_AUTOCLOSE
# 160 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_7, MSGBOX_AUTOCLOSE
# 162 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 163 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, players
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, players
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, backes
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, backes
# 168 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, backes
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_8, MSGBOX_AUTOCLOSE
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_9, MSGBOX_AUTOCLOSE
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_10, MSGBOX_AUTOCLOSE
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_11, MSGBOX_AUTOCLOSE
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_12, MSGBOX_AUTOCLOSE
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_13, MSGBOX_AUTOCLOSE
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_14, MSGBOX_AUTOCLOSE
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, talk
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, tak
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_15, MSGBOX_AUTOCLOSE
# 190 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_16, MSGBOX_AUTOCLOSE
# 192 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, innnn
# 193 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, innnn
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	facefollowernpc
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_17, MSGBOX_AUTOCLOSE
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_18
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_19, MSGBOX_AUTOCLOSE
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lok
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_PIN
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, heart
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_20, MSGBOX_AUTOCLOSE
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_21, MSGBOX_AUTOCLOSE
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, talk
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, tak
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_22, MSGBOX_AUTOCLOSE
# 216 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_23, MSGBOX_AUTOCLOSE
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_24, MSGBOX_AUTOCLOSE
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, innnn
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 6, innnn
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	facefollowernpc
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_25, MSGBOX_AUTOCLOSE
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	speakername Xylar1
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_26
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_27, MSGBOX_AUTOCLOSE
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_FLEE
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, byee
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, lok
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_28, MSGBOX_AUTOCLOSE
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	speakername name4
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_29, MSGBOX_AUTOCLOSE
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	removefieldmugshot
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_PIN
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 7, exclam
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_30
# 245 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_31, MSGBOX_AUTOCLOSE
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_BALL_OPEN
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_32
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 8, visible
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_33
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 8, back
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_34
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	waitmoncry
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 263 "data/maps/LuxuraIsland1/scripts.pory"
	destroyfollowernpc
# 264 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 8, invisible
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 34, 24, 0x3D3, 0
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	setmetatile 33, 24, 0x3D2, 0
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	delay 120
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 270 "data/maps/LuxuraIsland1/scripts.pory"
	fadenewbgm MUS_DUMMY
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_6
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_35, MSGBOX_AUTOCLOSE
# 273 "data/maps/LuxuraIsland1/scripts.pory"
	speakername miraded_Text_4
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_36, MSGBOX_AUTOCLOSE
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 276 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 14
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x26B
# 278 "data/maps/LuxuraIsland1/scripts.pory"
	warp MAP_LUXURAWOODS, 3, 35
	return


# 280 "data/maps/LuxuraIsland1/scripts.pory"
lok:
# 281 "data/maps/LuxuraIsland1/scripts.pory"
	face_up
	step_end

# 283 "data/maps/LuxuraIsland1/scripts.pory"
backes:
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 284 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 287 "data/maps/LuxuraIsland1/scripts.pory"
backe:
# 288 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 288 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 288 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 291 "data/maps/LuxuraIsland1/scripts.pory"
byee:
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 292 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	set_invisible
	step_end

# 296 "data/maps/LuxuraIsland1/scripts.pory"
bo:
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 297 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
	step_end

# 299 "data/maps/LuxuraIsland1/scripts.pory"
boo:
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 300 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
	step_end

Mira::
# 303 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 304 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms
# 305 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 308 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 310 "data/maps/LuxuraIsland1/scripts.pory"
ms:
# 311 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 312 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira2::
# 317 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 318 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms1
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms1
# 320 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 321 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 322 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 325 "data/maps/LuxuraIsland1/scripts.pory"
ms1:
# 326 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 326 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira3::
# 332 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 333 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms2
# 334 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, ms2
# 335 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 336 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 337 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 340 "data/maps/LuxuraIsland1/scripts.pory"
ms2:
# 341 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 341 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 341 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 342 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira1::
# 345 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 346 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m1
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m1
# 348 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 349 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 350 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 353 "data/maps/LuxuraIsland1/scripts.pory"
m1:
# 354 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 354 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 355 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira2::
# 358 "data/maps/LuxuraIsland1/scripts.pory"
	lock
# 359 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m2
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 0xFD, m2
# 361 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 362 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 363 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 366 "data/maps/LuxuraIsland1/scripts.pory"
m2:
# 367 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 368 "data/maps/LuxuraIsland1/scripts.pory"
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
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}If we find the officers, maybe they can\n"
	.string "help us…$"

miraded_Text_1:
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Yes, Master Xylar. I'll stay right beside\n"
	.string "you.$"

miraded_Text_2:
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What happened here?$"

miraded_Text_3:
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}That's horrible.\p"
	.string "Why would they resort to this?$"

miraded_Text_4:
# 158 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt M$"

miraded_Text_5:
# 159 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like the Shadow Slayers already\n"
	.string "did the dirty work.$"

miraded_Text_6:
# 160 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Grunt F$"

miraded_Text_7:
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not a soul left breathing. This island\n"
	.string "belongs to Team Spark now.$"

miraded_Text_8:
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well… luck's on our side today.$"

miraded_Text_9:
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah.\p"
	.string "We were ordered to capture you two, but\n"
	.string "you came straight to us.$"

miraded_Text_10:
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So let's not make this messy.\p"
	.string "Come quietly, and maybe I'll stay in a\n"
	.string "good mood.$"

miraded_Text_11:
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Not a chance.$"

miraded_Text_12:
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You actually think you can run from us?$"

miraded_Text_13:
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...$"

miraded_Text_14:
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Heh. You're not serious… right?$"

miraded_Text_15:
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They really believe it!\p"
	.string "HAHAHA-pathetic.$"

miraded_Text_16:
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's laughable.\p"
	.string "Truly laughable!$"

miraded_Text_17:
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(If we resist together, we'll both be\n"
	.string "taken.)\p"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar… I'll hold them off. You\n"
	.string "must run to the forest.$"

miraded_Text_18:
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}No! I won't abandon you, Mira!$"

miraded_Text_19:
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Please-don't argue.\p"
	.string "I promise, I'll follow right after… but\n"
	.string "you have to trust me now. Go!$"

miraded_Text_20:
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at the hero, trying to protect the\n"
	.string "little boy.\p"
	.string "How cute.$"

miraded_Text_21:
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But it won't matter.\p"
	.string "She dies here… and the boy comes with\n"
	.string "us.$"

miraded_Text_22:
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's make her suffer. Draw it out-I\n"
	.string "want to hear her scream.$"

miraded_Text_23:
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The boy's face when she falls… that's\n"
	.string "the prize I'm waiting for.$"

miraded_Text_24:
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now I'm really excited.$"

miraded_Text_25:
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Xylar! From here on, no matter what you\n"
	.string "hear, don't look back.\p"
	.string "Run, and never think this was your\n"
	.string "fault.$"

miraded_Text_26:
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, please-don't say it like you're\n"
	.string "already gone!$"

miraded_Text_27:
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_MAD}{COLOR RED}{SHADOW LIGHT_GRAY}XYLAR!$"

miraded_Text_28:
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Aww, how touching, He's running away.\p"
	.string "Too bad you won't get to see him grow\n"
	.string "up.$"

miraded_Text_29:
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Too bad… you'll never lay a hand on him.$"

miraded_Text_30:
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What?!\p"
	.string "You think this is a game?\p"
	.string "Tear her apart this instant!$"

miraded_Text_31:
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Say goodbye, lady. This is the end of\n"
	.string "the road for you.$"

miraded_Text_32:
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Electrode!$"

miraded_Text_33:
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use EXPLOSION!$"

miraded_Text_34:
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Bzzz..$"

miraded_Text_35:
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh, look at that beautiful red... It's\n"
	.string "so vibrant, so alive!\p"
	.string "Blood always gets my heart racing. Don't\n"
	.string "you just love the smell?\p"
	.string "It's like... the essence of life\n"
	.string "escaping. I can't get enough of it.$"

miraded_Text_36:
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh… Did you see that smile? Even at\n"
	.string "the end, she defied us. It makes me\l"
	.string "sick.$"

Mira_Text_0:
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry and ask for help.$"
