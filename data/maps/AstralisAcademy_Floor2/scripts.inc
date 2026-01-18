AstralisAcademy_Floor2_MapScripts::
# 2 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_Floor2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_Floor2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 5, Leafmet
# 4 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	map_script_2 VAR_ACADEMY_CLASS, 1, BattletheoryClass
	.2byte 0


Leafmet::
# 10 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 1, MAP_ASTRALIS_ACADEMY_FLOOR2
# 11 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxy 1, 26, 21
	return


BattletheoryClass::
# 15 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	clearflag FLAG_IRIS_ACADEMY
# 16 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	clearflag FLAG_KAEL_ACADEMY
# 17 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxyperm 15, 7, 58
# 18 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxyperm 14, 10, 58
# 19 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxyperm 2, 7, 61
# 20 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxyperm 8, 17, 58
# 21 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 22 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 23 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 24 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 14, 58, 3, DIR_NORTH
# 26 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_M, 22, 10, 61, 3, DIR_NORTH
# 27 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 2
# 28 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 15
# 29 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 14
# 30 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 8
	return


BattletheoryClass1::
# 35 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	lock
# 36 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_0
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0xFF, BattletheoryClass1_Movement_1
# 39 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 40 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0x7F, BattletheoryClass1_Movement_2
# 42 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_3
# 44 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadenewbgm MUS_SCHOOL
# 45 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 46 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_1
# 47 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 48 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 49 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_4
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_5
# 51 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 52 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_2
# 53 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 54 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 55 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_6
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0x7F, BattletheoryClass1_Movement_7
# 57 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 58 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 59 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_3
# 60 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 61 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 62 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_8
# 63 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 64 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitse
# 65 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	helpwindow GRADING_SYSTEM
# 66 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnobject 9, DIR_SOUTH
# 67 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 68 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_4
# 69 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 70 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 71 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_9
# 72 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_9
# 73 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_9
# 74 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_9
# 75 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0x7F, BattletheoryClass1_Movement_10
# 77 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_11
# 78 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 79 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_5
# 80 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 81 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_12
# 82 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 83 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_6
# 84 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 85 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay 30
# 86 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitbuttonpress
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_13
# 88 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 89 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 90 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_7
# 91 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 92 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 93 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_9
# 94 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 95 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_8
# 96 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 97 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_9
# 98 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_10
# 99 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 100 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_14
# 101 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 102 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_11
# 103 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 104 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_15
# 105 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 106 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_12
# 107 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 108 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 109 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 110 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_9
# 111 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_13
# 112 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_14
# 113 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 114 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_16
# 115 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 116 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_15
# 117 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_17
# 119 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 120 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_16
# 121 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 122 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 123 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_17
# 124 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 125 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_13
# 126 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 127 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 128 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_18
# 129 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 130 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay 20
# 131 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 132 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_20
# 133 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 134 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 135 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_18
# 136 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_18
# 137 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_18
# 138 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_19
# 139 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 140 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 22, DIR_EAST
# 141 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 142 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 143 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_21
# 144 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 145 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 146 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_22
# 147 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 148 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 149 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_20
# 150 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 151 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_23
# 152 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 153 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_21
# 154 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_21
# 155 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_21
# 156 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_21
# 157 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 21, DIR_NORTH
# 158 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 22, DIR_NORTH
# 159 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_22
# 160 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 161 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_24
# 162 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 163 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 164 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_25
# 165 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 166 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_21
# 167 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_23
# 168 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_23
# 169 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_23
# 170 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_23
# 171 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 172 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 173 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_26
# 174 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 175 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 176 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_4
# 177 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_4
# 178 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_4
# 179 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_4
# 180 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 181 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 182 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_27
# 183 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 184 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_16
# 185 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_24
# 186 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_24
# 187 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_24
# 188 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_24
# 189 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovementall
# 190 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 191 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_28
# 192 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_25
# 194 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0x7F, BattletheoryClass1_Movement_7
# 195 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 196 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_8
# 197 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 198 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitse
# 199 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	helpwindow BATTLE_THEORY_CLASS_1
# 200 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 201 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1_Text_29, MSGBOX_YESNO
# 202 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 203 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattletheoryClass1_2
# 207 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	goto BattletheoryClass1No
BattletheoryClass1_1:
# 209 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	release
	return

BattletheoryClass1_2:
# 204 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	goto BattletheoryClass1end
	goto BattletheoryClass1_1


BattletheoryClass1No::
# 214 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 215 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1No_Text_0, MSGBOX_YESNO
# 216 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 217 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattletheoryClass1No_1
# 221 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	goto BattletheoryClass1No
	return

BattletheoryClass1No_1:
# 218 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	goto BattletheoryClass1end
	return


BattletheoryClass1end::
# 226 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1end_Movement_0
# 228 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 0x7F, BattletheoryClass1_Movement_10
# 229 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitmovement 0
# 230 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_0
# 231 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 232 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 233 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 21, 14, 58, 3, DIR_NORTH
# 234 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_M, 22, 10, 61, 3, DIR_NORTH
# 235 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1end_Movement_1
# 236 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 237 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_1
# 238 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 239 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 240 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1end_Movement_2
# 241 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_9
# 242 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_2
# 243 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 244 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 245 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_3
# 246 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 247 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay 20
# 248 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1end_Movement_3
# 249 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 250 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_1
# 251 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 252 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 253 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_19
# 254 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_9
# 255 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_4
# 256 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 257 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 258 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_5
# 259 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 260 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_16
# 261 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay 20
# 262 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 263 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 9, BattletheoryClass1_Movement_9
# 264 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 265 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_6
# 266 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 267 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 268 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_7
# 269 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 270 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playse SE_PIN
# 271 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 14, BattletheoryClass1_Movement_18
# 272 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 15, BattletheoryClass1_Movement_18
# 273 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 8, BattletheoryClass1_Movement_18
# 274 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	applymovement 2, BattletheoryClass1_Movement_19
# 275 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 276 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	turnvobject 22, DIR_EAST
# 277 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 278 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_8
# 279 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 280 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_19
# 281 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_9
# 282 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 283 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay 10
# 284 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 285 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_10
# 286 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 287 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_BATTLE_THEORY_GRADE, 1
# 288 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ACCESSORY
# 289 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_11
# 290 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitfanfare
# 291 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 292 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	speakername BattletheoryClass1_Text_0
# 293 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_12
# 294 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 295 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 296 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setflag FLAG_IRIS_ACADEMY
# 297 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setflag FLAG_KAEL_ACADEMY
# 298 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	initclock 16, 30
# 299 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	resumefakertc
# 300 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_BATTLE_THEORY, 0
# 301 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_ACADEMY_CLASS, 0
# 302 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_CHARACTER_CHANGE, 1
# 303 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox BattletheoryClass1end_Text_13
# 304 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	warpsilent MAP_ASTRALIS_ACADEMY_FLOOR2, 14, 61
	return


CharacterChange::
# 308 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	lock
# 309 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	compare VAR_CHARACTER_CHANGE, 1
	goto_if_eq CharacterChange_1
# 339 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	release
	return

CharacterChange_1:
# 310 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 311 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox CharacterChange_Text_0, MSGBOX_YESNO
# 312 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 313 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CharacterChange_4
# 333 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_CHARACTER_CHANGE, 0
# 334 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 335 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	release
	return

CharacterChange_4:
# 314 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 315 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addhours 17
# 316 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	pausefakertc
# 317 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox CharacterChange_Text_1
# 318 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	closemessage
# 319 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	special SaveGame
# 320 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	waitstate
# 321 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setflag FLAG_TEMPORARY_PARTY_CHANGE
# 322 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	special SavePlayerParty
# 323 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	callnative ZeroPlayerPartyMons
# 324 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 325 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_KAEL_CHARCTER, 1
# 326 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 327 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setvar VAR_0x8004, 4
# 328 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	special WearOutfit
# 329 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	msgbox CharacterChange_Text_2
# 330 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	warpsilent MAP_ACADEMY_LIB, 13, 10
	return


# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_0:
# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	jump_in_place_down
# 37 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	jump_in_place_down
	step_end

# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_1:
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
# 38 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_up
	step_end

# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_2:
# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 41 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_3:
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 43 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
	step_end

# 49 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_4:
# 49 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_up
	step_end

# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_5:
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 50 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 55 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_6:
# 55 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 55 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 55 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_7:
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 56 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_8:
# 62 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_in_place_up
# 62 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_in_place_up
# 62 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_in_place_up
	step_end

# 71 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_9:
# 71 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
	step_end

# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_10:
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 76 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_11:
# 77 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 77 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 77 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
	step_end

# 81 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_12:
# 81 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_right
# 81 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_right
# 81 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_13:
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_left
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_right
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_left
# 87 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 100 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_14:
# 100 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_down
# 100 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_down
# 100 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_down
	step_end

# 104 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_15:
# 104 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_up
# 104 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_up
# 104 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_up
	step_end

# 114 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_16:
# 114 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_17:
# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	delay_16
# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_down
# 118 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_down
	step_end

# 135 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_18:
# 135 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
# 135 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 138 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_19:
# 138 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
# 138 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_right
	step_end

# 149 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_20:
# 149 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_happy
	step_end

# 153 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_21:
# 153 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_up
	step_end

# 159 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_22:
# 159 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_up
# 159 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_slow_up
# 159 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_down
	step_end

# 167 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_23:
# 167 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_24:
# 185 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 185 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_up
	step_end

# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1_Movement_25:
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_left
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
# 193 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_up
	step_end

# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1end_Movement_0:
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_down
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
# 227 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1end_Movement_1:
# 235 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_right
	step_end

# 240 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1end_Movement_2:
# 240 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	emote_exclamation_mark
# 240 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_left
	step_end

# 248 "data/maps/AstralisAcademy_Floor2/scripts.pory"
BattletheoryClass1end_Movement_3:
# 248 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	face_left
	step_end

BattletheoryClass1_Text_0:
# 45 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Prof. Evelyn$"

BattletheoryClass1_Text_1:
# 46 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Sit properly.\p"
	.string "If you can't manage that, you won't\n"
	.string "survive field battles.$"

BattletheoryClass1_Text_2:
# 52 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}My name is Evelyn and I'll be teaching\n"
	.string "you Battle and Item Theory.\p"
	.string "This course determines whether you\n"
	.string "become competent trainers or future\l"
	.string "cautionary tales.$"

BattletheoryClass1_Text_3:
# 59 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your grade has three parts.$"

BattletheoryClass1_Text_4:
# 68 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Fail any single component below fifty\n"
	.string "percent, you fail the course.\p"
	.string "Fail two courses this year, and the\n"
	.string "Academy removes you.\p"
	.string "I don't negotiate with parents.$"

BattletheoryClass1_Text_5:
# 79 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Viva questions begin next class.\p"
	.string "Today's lecture is informational. Pay\n"
	.string "attention anyway.$"

BattletheoryClass1_Text_6:
# 83 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Scenario.\p"
	.string "Your Pokémon is faster. You attack\n"
	.string "first.\p"
	.string "Your opponent survives with a sliver of\n"
	.string "HP, then defeats you on the next turn\l"
	.string "with a priority move. You lose.\p"
	.string "Why?$"

BattletheoryClass1_Text_7:
# 90 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No volunteers? Fine.\p"
	.string "You!$"

BattletheoryClass1_Text_8:
# 95 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yes, You.\p"
	.string "Answer.$"

BattletheoryClass1_Text_9:
# 97 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Student$"

BattletheoryClass1_Text_10:
# 98 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...{PAUSE_UNTIL_PRESS}Bad luck?$"

BattletheoryClass1_Text_11:
# 102 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No. The answer is Assumption.\p"
	.string "You assumed your attack would knock\n"
	.string "them out. You ignored held items.\p"
	.string "A Focus Sash guarantees survival from\n"
	.string "full health. A Focus Band gives a chance\l"
	.string "to endure any hit. You didn't lose\l"
	.string "because of luck.\p"
	.string "You lost because you stopped thinking.$"

BattletheoryClass1_Text_12:
# 106 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Next.\p"
	.string "Your opponent switches Pokémon\n"
	.string "mid-battle. What does that tell you?$"

BattletheoryClass1_Text_13:
# 111 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Kael$"

BattletheoryClass1_Text_14:
# 112 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_KAEL}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}They're scared of the type\n"
	.string "disadvantage?$"

BattletheoryClass1_Text_15:
# 116 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Partially.\p"
	.string "But more importantly, they predicted\n"
	.string "your next move. That means you're being\l"
	.string "read.\p"
	.string "If you don't change your behavior\n"
	.string "immediately, you're already behind.$"

BattletheoryClass1_Text_16:
# 120 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}This is what separates competitive\n"
	.string "battles from playground ones.\p"
	.string "Information. Every move reveals\n"
	.string "something. Every hesitation is a signal.\p"
	.string "Battles are not won by type charts.\n"
	.string "They're won by control and momentum.$"

BattletheoryClass1_Text_17:
# 123 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now.\p"
	.string "You're winning. Your Pokémon is at sixty\n"
	.string "percent HP. The opponent's last\l"
	.string "Pokémon is at thirty.\p"
	.string "Do you attack, or do you heal?$"

BattletheoryClass1_Text_18:
# 128 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Anyone?$"

BattletheoryClass1_Text_19:
# 131 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Xylar$"

BattletheoryClass1_Text_20:
# 132 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Attack.$"

BattletheoryClass1_Text_21:
# 143 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Why?$"

BattletheoryClass1_Text_22:
# 146 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Healing gives them a free turn.\p"
	.string "If they set up, you lose momentum.$"

BattletheoryClass1_Text_23:
# 151 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Correct.\p"
	.string "Most trainers heal because they're\n"
	.string "afraid of risk.\p"
	.string "Fear hands control to the opponent.$"

BattletheoryClass1_Text_24:
# 161 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your opponent's last Pokémon is never\n"
	.string "weak.\p"
	.string "It's either their ace or their comeback\n"
	.string "plan.\p"
	.string "Give them time, and they'll take the\n"
	.string "battle from you.$"

BattletheoryClass1_Text_25:
# 164 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Homework.\p"
	.string "Pick three held items. Explain how each\n"
	.string "one changes battle momentum.\p"
	.string "Not what it does but how it forces\n"
	.string "reactions.\p"
	.string "Dismissed.$"

BattletheoryClass1_Text_26:
# 173 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Actually…$"

BattletheoryClass1_Text_27:
# 182 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I said there would be no viva today.\p"
	.string "I changed my mind.$"

BattletheoryClass1_Text_28:
# 191 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Single question.\p"
	.string "Answer it, or don't. You'll be graded\n"
	.string "either way.$"

BattletheoryClass1_Text_29:
# 201 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I think there is no correct answer. Do\n"
	.string "you feel the same?$"

BattletheoryClass1No_Text_0:
# 215 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just believe me, okay?$"

BattletheoryClass1end_Text_0:
# 230 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Prof. Evelyn collects the answers.$"

BattletheoryClass1end_Text_1:
# 237 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You!$"

BattletheoryClass1end_Text_2:
# 242 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Ma'am.$"

BattletheoryClass1end_Text_3:
# 245 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You answered {COLOR BLUE}{SHADOW LIGHT_GRAY}B-Using Full Heal.\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Wrong answer.\p"
	.string "You wasted a turn fixing yourself\n"
	.string "instead of threatening them.$"

BattletheoryClass1end_Text_4:
# 255 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yes, Ma'am.$"

BattletheoryClass1end_Text_5:
# 258 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You answered {COLOR BLUE}{SHADOW LIGHT_GRAY}A-Switching out.\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Safer. Not smarter.$"

BattletheoryClass1end_Text_6:
# 265 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...\p"
	.string "Interesting.\p"
	.string "Xylar... why did you write there is no\n"
	.string "correct answer?$"

BattletheoryClass1end_Text_7:
# 268 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Because There isn't one.$"

BattletheoryClass1end_Text_8:
# 278 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Explain.$"

BattletheoryClass1end_Text_9:
# 281 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}If their Pokémon threatens my team, I\n"
	.string "switch.\p"
	.string "If it doesn't, I attack through\n"
	.string "paralysis and keep pressure.\p"
	.string "The status isn't the problem. Losing\n"
	.string "momentum is.$"

BattletheoryClass1end_Text_10:
# 285 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Correct.\p"
	.string "That raises your grade.$"

BattletheoryClass1end_Text_11:
# 289 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Battle Theory grade increased.$"

BattletheoryClass1end_Text_12:
# 293 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now you're dismissed.$"

BattletheoryClass1end_Text_13:
# 303 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "From now on, you can answer the\n"
	.string "questions yourself.$"

CharacterChange_Text_0:
# 311 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "This event will occur only once.\p"
	.string "Do you want to see yourself from Kael's\n"
	.string "prespective?$"

CharacterChange_Text_1:
# 317 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "You won't be able to save the game as\n"
	.string "Kael.$"

CharacterChange_Text_2:
# 329 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	.string "Early in the Morning.$"
