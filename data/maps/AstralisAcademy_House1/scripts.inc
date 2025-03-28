AstralisAcademy_House1_MapScripts::
# 2 "data/maps/AstralisAcademy_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DAYNIGHT_NPC
	.byte 0


Fionanight::
# 5 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT, Fionanight_9
Fionanight_5:
# 123 "data/maps/AstralisAcademy_House1/scripts.pory"
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
	initclock 10, 00
# 120 "data/maps/AstralisAcademy_House1/scripts.pory"
	pausefakertc
# 121 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT
	return

Fionanight_2:
# 124 "data/maps/AstralisAcademy_House1/scripts.pory"
	lock
# 125 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_2
# 126 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 127 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 128 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_19, MSGBOX_AUTOCLOSE
# 130 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 131 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_20, MSGBOX_AUTOCLOSE
# 133 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 134 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 135 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 136 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_21, MSGBOX_AUTOCLOSE
# 138 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 139 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_3, MSGBOX_AUTOCLOSE
# 141 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 142 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 143 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 144 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_22, MSGBOX_AUTOCLOSE
# 146 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 147 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_6
# 151 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 152 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 153 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_23, MSGBOX_AUTOCLOSE
# 155 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 156 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_24, MSGBOX_AUTOCLOSE
# 158 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 159 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_25, MSGBOX_AUTOCLOSE
# 162 "data/maps/AstralisAcademy_House1/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 163 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_21
Fionanight_19:
# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_18
Fionanight_17:
# 171 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_9
# 172 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_14:
# 173 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 174 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_26, MSGBOX_AUTOCLOSE
# 176 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 177 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 39
	goto_if_eq Fionanight_31
Fionanight_29:
# 186 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Fionanight_28
Fionanight_27:
# 196 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_12
# 202 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
Fionanight_24:
# 203 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 204 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_27, MSGBOX_AUTOCLOSE
# 206 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 207 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_28, MSGBOX_AUTOCLOSE
# 209 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 210 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_29, MSGBOX_AUTOCLOSE
# 212 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_13
# 214 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 215 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_30, MSGBOX_AUTOCLOSE
# 217 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 218 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_4
# 224 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 225 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 226 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_31, MSGBOX_AUTOCLOSE
# 228 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 229 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_32, MSGBOX_AUTOCLOSE
# 231 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 232 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_33, MSGBOX_AUTOCLOSE
# 234 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 235 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 236 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_34, MSGBOX_AUTOCLOSE
# 238 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmessage
# 239 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_3
# 244 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 245 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_1
# 246 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 247 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_35, MSGBOX_AUTOCLOSE
# 249 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 250 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_36, MSGBOX_AUTOCLOSE
# 252 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_2
# 253 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 254 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 255 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_37, MSGBOX_AUTOCLOSE
# 257 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_38, MSGBOX_AUTOCLOSE
# 260 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 1, Fionanight_Movement_14
# 262 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername unknown
# 263 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_39, MSGBOX_AUTOCLOSE
# 265 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_5
# 269 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 270 "data/maps/AstralisAcademy_House1/scripts.pory"
	speakername Xylar1
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	msgbox Fionanight_Text_40, MSGBOX_AUTOCLOSE
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_15
# 274 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
# 275 "data/maps/AstralisAcademy_House1/scripts.pory"
	warp MAP_DORMINDOOR1, 3, 7
# 276 "data/maps/AstralisAcademy_House1/scripts.pory"
	setflag FLAG_FIONA_NIGHT_1
	return

Fionanight_4:
# 123 "data/maps/AstralisAcademy_House1/scripts.pory"
	goto_if_unset FLAG_FIONA_NIGHT_1, Fionanight_6
	goto Fionanight_3

Fionanight_6:
# 123 "data/maps/AstralisAcademy_House1/scripts.pory"
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
# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_7
# 165 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_16:
# 168 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_8
# 169 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_14

Fionanight_18:
# 167 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_16
	goto Fionanight_17

Fionanight_21:
# 163 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_15
	goto Fionanight_19

Fionanight_25:
# 178 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_10
# 184 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_26:
# 187 "data/maps/AstralisAcademy_House1/scripts.pory"
	applymovement 0xFF, Fionanight_Movement_11
# 193 "data/maps/AstralisAcademy_House1/scripts.pory"
	waitmovement 0
	goto Fionanight_24

Fionanight_28:
# 186 "data/maps/AstralisAcademy_House1/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq Fionanight_26
	goto Fionanight_27

Fionanight_31:
# 177 "data/maps/AstralisAcademy_House1/scripts.pory"
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

# 147 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_6:
# 148 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 149 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 150 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
	step_end

# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_7:
# 164 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 168 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_8:
# 168 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 171 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_9:
# 171 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 178 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_10:
# 179 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 180 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 181 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 182 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 183 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_right
	step_end

# 187 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_11:
# 188 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 189 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 190 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 191 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 192 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_left
	step_end

# 196 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_12:
# 197 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 198 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 199 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_16
# 200 "data/maps/AstralisAcademy_House1/scripts.pory"
	delay_8
# 201 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_original_direction
	step_end

# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_13:
# 213 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 260 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_14:
# 260 "data/maps/AstralisAcademy_House1/scripts.pory"
	face_player
# 261 "data/maps/AstralisAcademy_House1/scripts.pory"
	emote_happy
	step_end

# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
Fionanight_Movement_15:
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
	walk_up
# 273 "data/maps/AstralisAcademy_House1/scripts.pory"
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
# 128 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You came back.$"

Fionanight_Text_20:
# 131 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...Yeah.$"

Fionanight_Text_21:
# 136 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Couldn't sleep?$"

Fionanight_Text_22:
# 144 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Me neither.$"

Fionanight_Text_23:
# 153 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..You always this quiet?$"

Fionanight_Text_24:
# 156 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....\p"
	.string "Depends.$"

Fionanight_Text_25:
# 160 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}On what?$"

Fionanight_Text_26:
# 174 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Who I'm talking to.$"

Fionanight_Text_27:
# 204 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}...You're blind.$"

Fionanight_Text_28:
# 207 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You just noticed?$"

Fionanight_Text_29:
# 210 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.$"

Fionanight_Text_30:
# 215 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Took you long enough.$"

Fionanight_Text_31:
# 226 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}....How do you get around?$"

Fionanight_Text_32:
# 229 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...I manage.$"

Fionanight_Text_33:
# 232 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's not an answer.$"

Fionanight_Text_34:
# 236 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...Maybe.$"

Fionanight_Text_35:
# 247 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...You think it changes anything?$"

Fionanight_Text_36:
# 250 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No.$"

Fionanight_Text_37:
# 255 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Good.$"

Fionanight_Text_38:
# 258 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What's your name?$"

Fionanight_Text_39:
# 263 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}..Finally interested?\p"
	.string "Fiona....\p"
	.string "Fiona Everhart.$"

Fionanight_Text_40:
# 271 "data/maps/AstralisAcademy_House1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...See you around, Fiona.$"
