AstralisAcademy_House1_MapScripts::
# 2 "data/maps/AstralisAcademy_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
	.byte 0


Fionanight::
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT, Fionanight_9
Fionanight_5:
# 119 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_set FLAG_FIONA_NIGHT, Fionanight_4
Fionanight_3:
	end

Fionanight_1:
# 6 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_0
# 8 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 9 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 10 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 12 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 13 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_1, MSGBOX_AUTOCLOSE
# 14 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 15 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 17 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 20 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 21 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 23 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 24 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 25 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_4, MSGBOX_AUTOCLOSE
# 27 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 28 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 29 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 34 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 35 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 36 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_5, MSGBOX_AUTOCLOSE
# 37 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 38 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 39 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_6, MSGBOX_AUTOCLOSE
# 40 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 41 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 42 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_7, MSGBOX_AUTOCLOSE
# 43 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 44 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 45 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 51 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 52 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 53 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_8, MSGBOX_AUTOCLOSE
# 54 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 55 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 56 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_9, MSGBOX_AUTOCLOSE
# 57 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 58 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 59 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 65 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 66 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 67 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_10, MSGBOX_AUTOCLOSE
# 68 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 69 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 70 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_11, MSGBOX_AUTOCLOSE
# 71 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 72 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 73 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 77 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 78 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 79 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 80 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_12, MSGBOX_AUTOCLOSE
# 81 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 82 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 83 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_13, MSGBOX_AUTOCLOSE
# 84 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 85 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 86 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 87 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 88 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_14, MSGBOX_AUTOCLOSE
# 89 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 90 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 91 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_15, MSGBOX_AUTOCLOSE
# 92 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 93 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 94 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_16, MSGBOX_AUTOCLOSE
# 95 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 96 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 100 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 101 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 102 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 103 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_17, MSGBOX_AUTOCLOSE
# 104 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 105 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/AstralisAcademy_House1/scripts.pory"
	removeobject 1
# 107 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 111 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 112 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 113 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 114 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_18, MSGBOX_AUTOCLOSE
# 115 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 116 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 117 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT
	return

Fionanight_2:
# 120 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 121 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_0
# 122 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 123 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 124 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_19, MSGBOX_AUTOCLOSE
# 125 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 126 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 127 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_20, MSGBOX_AUTOCLOSE
# 128 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 129 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 130 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 131 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 132 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_21, MSGBOX_AUTOCLOSE
# 133 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 134 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 135 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 136 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 137 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 138 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 139 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 140 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_22, MSGBOX_AUTOCLOSE
# 141 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 142 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 143 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 147 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 148 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 149 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_23, MSGBOX_AUTOCLOSE
# 150 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 151 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 152 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_24, MSGBOX_AUTOCLOSE
# 153 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 154 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 155 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 156 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_25, MSGBOX_AUTOCLOSE
# 157 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 158 "data/maps/AstralisAcademy_House1/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 159 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_21
Fionanight_19:
# 163 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_18
Fionanight_17:
# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_8
# 168 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_14:
# 169 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 170 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_26, MSGBOX_AUTOCLOSE
# 171 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 172 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 173 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_31
Fionanight_29:
# 182 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_28
Fionanight_27:
# 192 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_11
# 198 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_24:
# 199 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 200 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_27, MSGBOX_AUTOCLOSE
# 201 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 202 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 203 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_28, MSGBOX_AUTOCLOSE
# 204 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 205 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 206 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_29, MSGBOX_AUTOCLOSE
# 207 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 208 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 209 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_12
# 210 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 211 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_30, MSGBOX_AUTOCLOSE
# 212 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 214 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 220 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 221 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 222 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_31, MSGBOX_AUTOCLOSE
# 223 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 224 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 225 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_32, MSGBOX_AUTOCLOSE
# 226 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 227 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 228 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_33, MSGBOX_AUTOCLOSE
# 229 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 230 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 231 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 232 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_34, MSGBOX_AUTOCLOSE
# 233 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 234 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 235 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 240 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 241 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 242 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 243 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_35, MSGBOX_AUTOCLOSE
# 244 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 245 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 246 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_36, MSGBOX_AUTOCLOSE
# 247 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 248 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_0
# 249 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 250 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 251 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_37, MSGBOX_AUTOCLOSE
# 252 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 253 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 254 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_38, MSGBOX_AUTOCLOSE
# 255 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 256 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_13
# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox unknown
# 259 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_39, MSGBOX_AUTOCLOSE
# 260 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 261 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 265 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 266 "data/maps/AstralisAcademy_House1/scripts.pory"
	namebox Xylar
# 267 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_40, MSGBOX_AUTOCLOSE
# 268 "data/maps/AstralisAcademy_House1/scripts.pory"
	hidenamebox
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_14
# 270 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 272 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT_1
	return

Fionanight_4:
# 119 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_6
	goto Fionanight_3

Fionanight_6:
# 119 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_2, Fionanight_2
	goto Fionanight_3

Fionanight_9:
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_11
	goto Fionanight_5

Fionanight_11:
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_2, Fionanight_1
	goto Fionanight_5

Fionanight_15:
# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_6
# 161 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_16:
# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_7
# 165 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_18:
# 163 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_16
	goto Fionanight_17

Fionanight_21:
# 159 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_15
	goto Fionanight_19

Fionanight_25:
# 174 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_9
# 180 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_26:
# 183 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_10
# 189 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_28:
# 182 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_26
	goto Fionanight_27

Fionanight_31:
# 173 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_25
	goto Fionanight_29


# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_0:
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_1:
# 16 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
	step_end

# 29 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_2:
# 30 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 31 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 32 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 33 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 45 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_3:
# 46 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 47 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 48 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 49 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 50 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 73 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_4:
# 74 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 75 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 76 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 143 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_5:
# 144 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 145 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 146 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
	step_end

# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_6:
# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_7:
# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_8:
# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 174 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_9:
# 175 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 176 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 177 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 178 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 179 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 183 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_10:
# 184 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 185 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 186 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 187 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 188 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 192 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_11:
# 193 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 194 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 195 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 196 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 197 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 209 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_12:
# 209 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 256 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_13:
# 256 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
# 257 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_14:
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
	step_end

Fionanight_Text_0:
# 10 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....You're quiet.$"

Fionanight_Text_1:
# 13 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Fionanight_Text_2:
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not used to company?$"

Fionanight_Text_3:
# 21 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........\p"
	.string "No.$"

Fionanight_Text_4:
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Same.$"

Fionanight_Text_5:
# 36 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You come here often?$"

Fionanight_Text_6:
# 39 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "First time.$"

Fionanight_Text_7:
# 42 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Figured.$"

Fionanight_Text_8:
# 53 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You?$"

Fionanight_Text_9:
# 56 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..A lot.$"

Fionanight_Text_10:
# 67 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...It's peaceful.$"

Fionanight_Text_11:
# 70 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....Yeah.$"

Fionanight_Text_12:
# 80 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...What's your name?$"

Fionanight_Text_13:
# 83 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Xylar.$"

Fionanight_Text_14:
# 88 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You don't talk much, huh?$"

Fionanight_Text_15:
# 91 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess not.$"

Fionanight_Text_16:
# 94 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..That's fine.$"

Fionanight_Text_17:
# 103 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Xylar.$"

Fionanight_Text_18:
# 114 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...I should also go.\p"
	.string "It's getting late.$"

Fionanight_Text_19:
# 124 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You came back.$"

Fionanight_Text_20:
# 127 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Yeah.$"

Fionanight_Text_21:
# 132 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Couldn't sleep?$"

Fionanight_Text_22:
# 140 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Me neither.$"

Fionanight_Text_23:
# 149 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You always this quiet?$"

Fionanight_Text_24:
# 152 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "Depends.$"

Fionanight_Text_25:
# 156 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}On what?$"

Fionanight_Text_26:
# 170 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who I'm talking to.$"

Fionanight_Text_27:
# 200 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You're blind.$"

Fionanight_Text_28:
# 203 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You just noticed?$"

Fionanight_Text_29:
# 206 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.$"

Fionanight_Text_30:
# 211 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Took you long enough.$"

Fionanight_Text_31:
# 222 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....How do you get around?$"

Fionanight_Text_32:
# 225 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...I manage.$"

Fionanight_Text_33:
# 228 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's not an answer.$"

Fionanight_Text_34:
# 232 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Maybe.$"

Fionanight_Text_35:
# 243 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You think it changes anything?$"

Fionanight_Text_36:
# 246 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Fionanight_Text_37:
# 251 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Good.$"

Fionanight_Text_38:
# 254 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's your name?$"

Fionanight_Text_39:
# 259 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Finally interested?\p"
	.string "Fiona....\p"
	.string "Fiona Everhart.$"

Fionanight_Text_40:
# 267 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Fiona.$"
