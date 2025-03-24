AstralisAcademy_House1_MapScripts::
# 2 "data/maps/AstralisAcademy_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
	.byte 0


Fionanight::
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT, Fionanight_9
Fionanight_5:
# 121 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_set FLAG_FIONA_NIGHT, Fionanight_4
Fionanight_3:
	end

Fionanight_1:
# 6 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_0
# 10 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 11 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 12 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 15 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 19 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 20 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_2, MSGBOX_AUTOCLOSE
# 22 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 23 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 25 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 27 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 28 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_4, MSGBOX_AUTOCLOSE
# 30 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 31 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 36 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 37 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 38 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_5, MSGBOX_AUTOCLOSE
# 40 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 41 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_6, MSGBOX_AUTOCLOSE
# 43 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 44 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_7, MSGBOX_AUTOCLOSE
# 46 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 47 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 53 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 54 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 55 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_8, MSGBOX_AUTOCLOSE
# 57 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 58 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_9, MSGBOX_AUTOCLOSE
# 60 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 61 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 67 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 68 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 69 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_10, MSGBOX_AUTOCLOSE
# 71 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 72 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_11, MSGBOX_AUTOCLOSE
# 74 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 75 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 79 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 80 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 81 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 82 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_12, MSGBOX_AUTOCLOSE
# 84 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 85 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_13, MSGBOX_AUTOCLOSE
# 87 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 88 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 89 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 90 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_14, MSGBOX_AUTOCLOSE
# 92 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 93 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_15, MSGBOX_AUTOCLOSE
# 95 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 96 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_16, MSGBOX_AUTOCLOSE
# 98 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 102 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 103 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 104 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 105 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_17, MSGBOX_AUTOCLOSE
# 107 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/AstralisAcademy_House1/scripts.pory"
	removeobject 1
# 109 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 113 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 114 "data/maps/AstralisAcademy_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 115 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 116 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_18, MSGBOX_AUTOCLOSE
# 118 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 119 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT
	return

Fionanight_2:
# 122 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 123 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 124 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 125 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 126 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_19, MSGBOX_AUTOCLOSE
# 128 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 129 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_20, MSGBOX_AUTOCLOSE
# 131 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 132 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 133 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 134 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_21, MSGBOX_AUTOCLOSE
# 136 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 137 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 139 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 140 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 141 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 142 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_22, MSGBOX_AUTOCLOSE
# 144 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 145 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_6
# 149 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 150 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 151 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_23, MSGBOX_AUTOCLOSE
# 153 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 154 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_24, MSGBOX_AUTOCLOSE
# 156 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 157 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 158 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_25, MSGBOX_AUTOCLOSE
# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 161 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_21
Fionanight_19:
# 165 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_18
Fionanight_17:
# 169 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_9
# 170 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_14:
# 171 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 172 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_26, MSGBOX_AUTOCLOSE
# 174 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 175 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_31
Fionanight_29:
# 184 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_28
Fionanight_27:
# 194 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_12
# 200 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_24:
# 201 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 202 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_27, MSGBOX_AUTOCLOSE
# 204 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 205 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_28, MSGBOX_AUTOCLOSE
# 207 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 208 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_29, MSGBOX_AUTOCLOSE
# 210 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 211 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_13
# 212 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_30, MSGBOX_AUTOCLOSE
# 215 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 216 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 222 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 223 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 224 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_31, MSGBOX_AUTOCLOSE
# 226 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 227 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_32, MSGBOX_AUTOCLOSE
# 229 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 230 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_33, MSGBOX_AUTOCLOSE
# 232 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 233 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 234 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_34, MSGBOX_AUTOCLOSE
# 236 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 237 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 242 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 243 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 244 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 245 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_35, MSGBOX_AUTOCLOSE
# 247 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 248 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_36, MSGBOX_AUTOCLOSE
# 250 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 251 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 252 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 253 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_37, MSGBOX_AUTOCLOSE
# 255 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 256 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_38, MSGBOX_AUTOCLOSE
# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_14
# 260 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 261 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_39, MSGBOX_AUTOCLOSE
# 263 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 267 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 268 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_40, MSGBOX_AUTOCLOSE
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_15
# 272 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 274 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT_1
	return

Fionanight_4:
# 121 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_6
	goto Fionanight_3

Fionanight_6:
# 121 "data/maps/AstralisAcademy_House1/scripts.pory"
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
# 162 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_7
# 163 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_16:
# 166 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_8
# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_18:
# 165 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_16
	goto Fionanight_17

Fionanight_21:
# 161 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_15
	goto Fionanight_19

Fionanight_25:
# 176 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_10
# 182 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_26:
# 185 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_11
# 191 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_28:
# 184 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_26
	goto Fionanight_27

Fionanight_31:
# 175 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_25
	goto Fionanight_29


# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_0:
# 7 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
# 8 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 9 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
	step_end

# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_1:
# 18 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
	step_end

# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_2:
# 26 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 31 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_3:
# 32 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 33 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 34 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 35 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 47 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_4:
# 48 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 49 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 50 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 51 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 52 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 75 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_5:
# 76 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 77 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 78 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_down
	step_end

# 145 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_6:
# 146 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 147 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 148 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
	step_end

# 162 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_7:
# 162 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 166 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_8:
# 166 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 169 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_9:
# 169 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 176 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_10:
# 177 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 178 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 179 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 180 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 181 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 185 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_11:
# 186 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 187 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 188 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 189 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 190 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 194 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_12:
# 195 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 196 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 197 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 198 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 199 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 211 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_13:
# 211 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_14:
# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
# 259 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_15:
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
	step_end

Fionanight_Text_0:
# 12 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....You're quiet.$"

Fionanight_Text_1:
# 15 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Fionanight_Text_2:
# 20 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not used to company?$"

Fionanight_Text_3:
# 23 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........\p"
	.string "No.$"

Fionanight_Text_4:
# 28 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Same.$"

Fionanight_Text_5:
# 38 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You come here often?$"

Fionanight_Text_6:
# 41 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "First time.$"

Fionanight_Text_7:
# 44 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Figured.$"

Fionanight_Text_8:
# 55 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You?$"

Fionanight_Text_9:
# 58 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..A lot.$"

Fionanight_Text_10:
# 69 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...It's peaceful.$"

Fionanight_Text_11:
# 72 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....Yeah.$"

Fionanight_Text_12:
# 82 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...What's your name?$"

Fionanight_Text_13:
# 85 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Xylar.$"

Fionanight_Text_14:
# 90 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You don't talk much, huh?$"

Fionanight_Text_15:
# 93 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess not.$"

Fionanight_Text_16:
# 96 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..That's fine.$"

Fionanight_Text_17:
# 105 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Xylar.$"

Fionanight_Text_18:
# 116 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...I should also go.\p"
	.string "It's getting late.$"

Fionanight_Text_19:
# 126 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You came back.$"

Fionanight_Text_20:
# 129 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Yeah.$"

Fionanight_Text_21:
# 134 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Couldn't sleep?$"

Fionanight_Text_22:
# 142 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Me neither.$"

Fionanight_Text_23:
# 151 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You always this quiet?$"

Fionanight_Text_24:
# 154 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "Depends.$"

Fionanight_Text_25:
# 158 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}On what?$"

Fionanight_Text_26:
# 172 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who I'm talking to.$"

Fionanight_Text_27:
# 202 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You're blind.$"

Fionanight_Text_28:
# 205 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You just noticed?$"

Fionanight_Text_29:
# 208 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.$"

Fionanight_Text_30:
# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Took you long enough.$"

Fionanight_Text_31:
# 224 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....How do you get around?$"

Fionanight_Text_32:
# 227 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...I manage.$"

Fionanight_Text_33:
# 230 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's not an answer.$"

Fionanight_Text_34:
# 234 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Maybe.$"

Fionanight_Text_35:
# 245 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You think it changes anything?$"

Fionanight_Text_36:
# 248 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Fionanight_Text_37:
# 253 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Good.$"

Fionanight_Text_38:
# 256 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's your name?$"

Fionanight_Text_39:
# 261 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Finally interested?\p"
	.string "Fiona....\p"
	.string "Fiona Everhart.$"

Fionanight_Text_40:
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Fiona.$"
