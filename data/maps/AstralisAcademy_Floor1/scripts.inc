AstralisAcademy_Floor1_MapScripts::
	.byte 0


Fionanight::
# 4 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT, Fionanight_9
Fionanight_5:
# 122 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_set FLAG_FIONA_NIGHT, Fionanight_4
Fionanight_3:
	end

Fionanight_1:
# 5 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 6 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_0
# 9 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 11 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 14 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 18 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 22 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 24 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 25 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 26 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 27 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_4, MSGBOX_AUTOCLOSE
# 29 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 30 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 35 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 36 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 37 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_5, MSGBOX_AUTOCLOSE
# 39 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 40 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_6, MSGBOX_AUTOCLOSE
# 42 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 43 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_7, MSGBOX_AUTOCLOSE
# 45 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 46 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 52 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 53 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 54 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_8, MSGBOX_AUTOCLOSE
# 56 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 57 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_9, MSGBOX_AUTOCLOSE
# 59 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 60 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 66 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 67 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 68 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_10, MSGBOX_AUTOCLOSE
# 70 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 71 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_11, MSGBOX_AUTOCLOSE
# 73 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 74 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 78 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 79 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 80 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 81 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_12, MSGBOX_AUTOCLOSE
# 83 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 84 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_13, MSGBOX_AUTOCLOSE
# 86 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 87 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 88 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 89 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_14, MSGBOX_AUTOCLOSE
# 91 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 92 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_15, MSGBOX_AUTOCLOSE
# 94 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 95 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_16, MSGBOX_AUTOCLOSE
# 97 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 101 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 102 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 103 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 104 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_17, MSGBOX_AUTOCLOSE
# 106 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	removeobject 1
# 108 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 112 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 113 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 114 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 115 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_18, MSGBOX_AUTOCLOSE
# 117 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 118 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	initclock 10, 00
# 119 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	pausefakertc
# 120 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	setflag FLAG_FIONA_NIGHT
	return

Fionanight_2:
# 123 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 124 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 125 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 126 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 127 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_19, MSGBOX_AUTOCLOSE
# 129 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 130 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_20, MSGBOX_AUTOCLOSE
# 132 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 133 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 134 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 135 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_21, MSGBOX_AUTOCLOSE
# 137 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 138 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 140 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 141 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 142 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 143 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_22, MSGBOX_AUTOCLOSE
# 145 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 146 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_6
# 150 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 151 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 152 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_23, MSGBOX_AUTOCLOSE
# 154 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 155 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_24, MSGBOX_AUTOCLOSE
# 157 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 158 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 159 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_25, MSGBOX_AUTOCLOSE
# 161 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 162 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_21
Fionanight_19:
# 166 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_18
Fionanight_17:
# 170 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_9
# 171 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
Fionanight_14:
# 172 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 173 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_26, MSGBOX_AUTOCLOSE
# 175 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 176 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_31
Fionanight_29:
# 185 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_28
Fionanight_27:
# 195 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_12
# 201 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
Fionanight_24:
# 202 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 203 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_27, MSGBOX_AUTOCLOSE
# 205 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 206 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_28, MSGBOX_AUTOCLOSE
# 208 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 209 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_29, MSGBOX_AUTOCLOSE
# 211 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 212 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_13
# 213 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 214 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_30, MSGBOX_AUTOCLOSE
# 216 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 217 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 223 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 224 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 225 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_31, MSGBOX_AUTOCLOSE
# 227 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 228 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_32, MSGBOX_AUTOCLOSE
# 230 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 231 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_33, MSGBOX_AUTOCLOSE
# 233 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 234 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 235 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_34, MSGBOX_AUTOCLOSE
# 237 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmessage
# 238 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 243 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 244 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 245 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 246 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_35, MSGBOX_AUTOCLOSE
# 248 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 249 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_36, MSGBOX_AUTOCLOSE
# 251 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 252 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 253 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 254 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_37, MSGBOX_AUTOCLOSE
# 256 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 257 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_38, MSGBOX_AUTOCLOSE
# 259 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Fionanight_Movement_14
# 261 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername unknown
# 262 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_39, MSGBOX_AUTOCLOSE
# 264 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 268 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 269 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 270 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Fionanight_Text_40, MSGBOX_AUTOCLOSE
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_15
# 273 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 274 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 275 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	setflag FLAG_FIONA_NIGHT_1
	return

Fionanight_4:
# 122 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_6
	goto Fionanight_3

Fionanight_6:
# 122 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_2, Fionanight_2
	goto Fionanight_3

Fionanight_9:
# 4 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_11
	goto Fionanight_5

Fionanight_11:
# 4 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_2, Fionanight_1
	goto Fionanight_5

Fionanight_15:
# 163 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_7
# 164 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_16:
# 167 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_8
# 168 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_18:
# 166 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_16
	goto Fionanight_17

Fionanight_21:
# 162 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_15
	goto Fionanight_19

Fionanight_25:
# 177 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_10
# 183 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_26:
# 186 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_11
# 192 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_28:
# 185 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_26
	goto Fionanight_27

Fionanight_31:
# 176 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_25
	goto Fionanight_29


# 6 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_0:
# 6 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
# 7 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 8 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
	step_end

# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_1:
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_player
	step_end

# 25 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_2:
# 25 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
	step_end

# 30 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_3:
# 31 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 32 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 33 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 34 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
	step_end

# 46 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_4:
# 47 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 48 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 49 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 50 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_8
# 51 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
	step_end

# 74 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_5:
# 75 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 76 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 77 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
	step_end

# 146 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_6:
# 147 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 148 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 149 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
	step_end

# 163 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_7:
# 163 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_right
	step_end

# 167 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_8:
# 167 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_left
	step_end

# 170 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_9:
# 170 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_original_direction
	step_end

# 177 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_10:
# 178 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 179 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 180 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 181 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_8
# 182 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_right
	step_end

# 186 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_11:
# 187 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 188 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 189 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 190 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_8
# 191 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_left
	step_end

# 195 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_12:
# 196 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 197 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 198 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 199 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_8
# 200 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_original_direction
	step_end

# 212 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_13:
# 212 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	emote_happy
	step_end

# 259 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_14:
# 259 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_player
# 260 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	emote_happy
	step_end

# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Fionanight_Movement_15:
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
# 272 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
	step_end

Fionanight_Text_0:
# 11 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}.....You're quiet.$"

Fionanight_Text_1:
# 14 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........$"

Fionanight_Text_2:
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not used to company?$"

Fionanight_Text_3:
# 22 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...........\p"
	.string "No.$"

Fionanight_Text_4:
# 27 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Same.$"

Fionanight_Text_5:
# 37 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You come here often?$"

Fionanight_Text_6:
# 40 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "First time.$"

Fionanight_Text_7:
# 43 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Figured.$"

Fionanight_Text_8:
# 54 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You?$"

Fionanight_Text_9:
# 57 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..A lot.$"

Fionanight_Text_10:
# 68 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...It's peaceful.$"

Fionanight_Text_11:
# 71 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....Yeah.$"

Fionanight_Text_12:
# 81 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...What's your name?$"

Fionanight_Text_13:
# 84 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Xylar.$"

Fionanight_Text_14:
# 89 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You don't talk much, huh?$"

Fionanight_Text_15:
# 92 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess not.$"

Fionanight_Text_16:
# 95 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..That's fine.$"

Fionanight_Text_17:
# 104 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Xylar.$"

Fionanight_Text_18:
# 115 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...I should also go.\p"
	.string "It's getting late.$"

Fionanight_Text_19:
# 127 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You came back.$"

Fionanight_Text_20:
# 130 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Yeah.$"

Fionanight_Text_21:
# 135 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Couldn't sleep?$"

Fionanight_Text_22:
# 143 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Me neither.$"

Fionanight_Text_23:
# 152 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You always this quiet?$"

Fionanight_Text_24:
# 155 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "Depends.$"

Fionanight_Text_25:
# 159 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}On what?$"

Fionanight_Text_26:
# 173 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who I'm talking to.$"

Fionanight_Text_27:
# 203 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You're blind.$"

Fionanight_Text_28:
# 206 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You just noticed?$"

Fionanight_Text_29:
# 209 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.$"

Fionanight_Text_30:
# 214 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Took you long enough.$"

Fionanight_Text_31:
# 225 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....How do you get around?$"

Fionanight_Text_32:
# 228 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...I manage.$"

Fionanight_Text_33:
# 231 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's not an answer.$"

Fionanight_Text_34:
# 235 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Maybe.$"

Fionanight_Text_35:
# 246 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You think it changes anything?$"

Fionanight_Text_36:
# 249 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Fionanight_Text_37:
# 254 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Good.$"

Fionanight_Text_38:
# 257 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's your name?$"

Fionanight_Text_39:
# 262 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Finally interested?\p"
	.string "Fiona....\p"
	.string "Fiona Everhart.$"

Fionanight_Text_40:
# 270 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Fiona.$"
