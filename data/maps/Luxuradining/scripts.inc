# 1 "data/maps/Luxuradining/scripts.pory"

# 2 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts::
# 3 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/Luxuradining/scripts.pory"
	.byte 0
# 6 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Luxuradining/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 3, Youwake
# 8 "data/maps/Luxuradining/scripts.pory"
	.2byte 0

Youwake::
# 11 "data/maps/Luxuradining/scripts.pory"
	lock
# 12 "data/maps/Luxuradining/scripts.pory"
	fwdmonth 1
# 13 "data/maps/Luxuradining/scripts.pory"
	initclock 10, 00
# 14 "data/maps/Luxuradining/scripts.pory"
	pausefakertc
# 15 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera2
# 17 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 18 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, mom
# 19 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 20 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Luxuradining/scripts.pory"
	speakername name3
# 22 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_1, MSGBOX_AUTOCLOSE
# 23 "data/maps/Luxuradining/scripts.pory"
	removefieldmugshot
# 24 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera3
# 25 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 26 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dining
# 28 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 29 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 30 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 31 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 32 "data/maps/Luxuradining/scripts.pory"
	speakername name2
# 33 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 35 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_3, MSGBOX_AUTOCLOSE
# 36 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mlq
# 37 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 38 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_4, MSGBOX_AUTOCLOSE
# 39 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mlo
# 40 "data/maps/Luxuradining/scripts.pory"
	speakername name3
# 41 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_5, MSGBOX_AUTOCLOSE
# 42 "data/maps/Luxuradining/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mol
# 44 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 45 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 46 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_6, MSGBOX_AUTOCLOSE
# 47 "data/maps/Luxuradining/scripts.pory"
	playse SE_PIN
# 48 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, happy
# 49 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, happy
# 50 "data/maps/Luxuradining/scripts.pory"
	speakername name3
# 51 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_7, MSGBOX_AUTOCLOSE
# 52 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 53 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_8, MSGBOX_AUTOCLOSE
# 54 "data/maps/Luxuradining/scripts.pory"
	speakername name2
# 55 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_9
# 56 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 57 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_10, MSGBOX_AUTOCLOSE
# 58 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, upset
# 59 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 60 "data/maps/Luxuradining/scripts.pory"
	speakername name3
# 61 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_11
# 62 "data/maps/Luxuradining/scripts.pory"
	speakername name2
# 63 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_12, MSGBOX_AUTOCLOSE
# 64 "data/maps/Luxuradining/scripts.pory"
	waitmessage
# 65 "data/maps/Luxuradining/scripts.pory"
	applymovement 3, Youwake_Movement_0
# 66 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 67 "data/maps/Luxuradining/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Luxuradining/scripts.pory"
	applymovement 0xFF, Youwake_Movement_1
# 70 "data/maps/Luxuradining/scripts.pory"
	addobject 5
# 71 "data/maps/Luxuradining/scripts.pory"
	addobject 4
# 72 "data/maps/Luxuradining/scripts.pory"
	applymovement 5, Youwake_Movement_2
# 73 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 74 "data/maps/Luxuradining/scripts.pory"
	applymovement 4, Youwake_Movement_3
# 75 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 76 "data/maps/Luxuradining/scripts.pory"
	playse SE_USE_ITEM
# 77 "data/maps/Luxuradining/scripts.pory"
	waitse
# 78 "data/maps/Luxuradining/scripts.pory"
	playse SE_M_BITE
# 79 "data/maps/Luxuradining/scripts.pory"
	waitse
# 80 "data/maps/Luxuradining/scripts.pory"
	applymovement 0xFF, Youwake_Movement_1
# 81 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 82 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/Luxuradining/scripts.pory"
	applymovement 3, Youwake_Movement_4
# 84 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 85 "data/maps/Luxuradining/scripts.pory"
	removeobject 3
# 86 "data/maps/Luxuradining/scripts.pory"
	playse SE_EXIT
# 87 "data/maps/Luxuradining/scripts.pory"
	applymovement 5, Youwake_Movement_5
# 88 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 89 "data/maps/Luxuradining/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/Luxuradining/scripts.pory"
	applymovement 4, Youwake_Movement_6
# 91 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 92 "data/maps/Luxuradining/scripts.pory"
	playse SE_EXIT
# 93 "data/maps/Luxuradining/scripts.pory"
	speakername Xylar1
# 94 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_13
# 95 "data/maps/Luxuradining/scripts.pory"
	speakername name2
# 96 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_14
# 97 "data/maps/Luxuradining/scripts.pory"
	removefieldmugshot
# 98 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 99 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 100 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 101 "data/maps/Luxuradining/scripts.pory"
	release
# 102 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 4
	return


# 104 "data/maps/Luxuradining/scripts.pory"
happy:
# 105 "data/maps/Luxuradining/scripts.pory"
	emote_happy
	step_end

# 107 "data/maps/Luxuradining/scripts.pory"
camera5:
# 108 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 108 "data/maps/Luxuradining/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/Luxuradining/scripts.pory"
camera2:
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

# 113 "data/maps/Luxuradining/scripts.pory"
camera4:
# 114 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 114 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/Luxuradining/scripts.pory"
camera3:
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 117 "data/maps/Luxuradining/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/Luxuradining/scripts.pory"
mom:
# 120 "data/maps/Luxuradining/scripts.pory"
	face_right
# 121 "data/maps/Luxuradining/scripts.pory"
	emote_heart
# 122 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 124 "data/maps/Luxuradining/scripts.pory"
dining:
# 125 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 125 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 125 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 126 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 127 "data/maps/Luxuradining/scripts.pory"
	face_up
	step_end

# 129 "data/maps/Luxuradining/scripts.pory"
mlq:
# 130 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
	step_end

# 132 "data/maps/Luxuradining/scripts.pory"
mlo:
# 133 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
# 134 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 136 "data/maps/Luxuradining/scripts.pory"
mol:
# 137 "data/maps/Luxuradining/scripts.pory"
	face_right
	step_end

# 139 "data/maps/Luxuradining/scripts.pory"
upset:
# 140 "data/maps/Luxuradining/scripts.pory"
	emote_upset
	step_end

Mom::
# 143 "data/maps/Luxuradining/scripts.pory"
	lock
# 144 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 145 "data/maps/Luxuradining/scripts.pory"
	speakername name2
# 146 "data/maps/Luxuradining/scripts.pory"
	msgbox Mom_Text_0
# 147 "data/maps/Luxuradining/scripts.pory"
	removefieldmugshot
# 148 "data/maps/Luxuradining/scripts.pory"
	release
	return


Dad::
# 151 "data/maps/Luxuradining/scripts.pory"
	lock
# 152 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 153 "data/maps/Luxuradining/scripts.pory"
	speakername name3
# 154 "data/maps/Luxuradining/scripts.pory"
	msgbox Dad_Text_0
# 155 "data/maps/Luxuradining/scripts.pory"
	removefieldmugshot
# 156 "data/maps/Luxuradining/scripts.pory"
	release
	return


waiting::
# 159 "data/maps/Luxuradining/scripts.pory"
	lock
# 160 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 161 "data/maps/Luxuradining/scripts.pory"
	msgbox waiting_Text_0
# 162 "data/maps/Luxuradining/scripts.pory"
	release
	return


Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD::
# 166 "data/maps/Luxuradining/scripts.pory"
	compare LUXURA_TRAGEDY, 4
	goto_if_gt Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 167 "data/maps/Luxuradining/scripts.pory"
	removeobject 1
# 168 "data/maps/Luxuradining/scripts.pory"
	removeobject 2
# 169 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 170 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x499
	return


garden::
# 176 "data/maps/Luxuradining/scripts.pory"
	lock
# 177 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 178 "data/maps/Luxuradining/scripts.pory"
	speakername gardener
# 179 "data/maps/Luxuradining/scripts.pory"
	msgbox garden_Text_0
# 181 "data/maps/Luxuradining/scripts.pory"
	release
	return


rest::
# 184 "data/maps/Luxuradining/scripts.pory"
	lock
# 185 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 186 "data/maps/Luxuradining/scripts.pory"
	speakername rest_Text_0
# 187 "data/maps/Luxuradining/scripts.pory"
	msgbox rest_Text_1
# 188 "data/maps/Luxuradining/scripts.pory"
	release
	return


nurse::
# 191 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, nurse_10
nurse_8:
# 198 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_7
nurse_5:
# 211 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_4
	return

nurse_1:
# 192 "data/maps/Luxuradining/scripts.pory"
	lock
# 193 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 194 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_0
# 195 "data/maps/Luxuradining/scripts.pory"
	release
	return

nurse_2:
# 199 "data/maps/Luxuradining/scripts.pory"
	lock
# 200 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 201 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_1, MSGBOX_AUTOCLOSE
# 202 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_2, MSGBOX_AUTOCLOSE
# 203 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_3, MSGBOX_AUTOCLOSE
# 204 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_POTION, 2
# 205 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 3
# 206 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x4B7
# 207 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 20
# 208 "data/maps/Luxuradining/scripts.pory"
	release
	return

nurse_3:
# 212 "data/maps/Luxuradining/scripts.pory"
	lock
# 213 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_4
# 214 "data/maps/Luxuradining/scripts.pory"
	setvar VAR_0x800B, 1
# 215 "data/maps/Luxuradining/scripts.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 216 "data/maps/Luxuradining/scripts.pory"
	waitmessage
# 217 "data/maps/Luxuradining/scripts.pory"
	waitbuttonpress
# 218 "data/maps/Luxuradining/scripts.pory"
	release
	end

nurse_4:
# 211 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B7, nurse_3
	return

nurse_7:
# 198 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_2
	goto nurse_5

nurse_10:
# 191 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_1
	goto nurse_8


checknurse::
# 223 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 224 "data/maps/Luxuradining/scripts.pory"
	msgbox checknurse_Text_0
# 225 "data/maps/Luxuradining/scripts.pory"
	release
	return


atkspark::
# 229 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, luspark
# 230 "data/maps/Luxuradining/scripts.pory"
	msgbox atkspark_Text_0
# 231 "data/maps/Luxuradining/scripts.pory"
	release
	return


# 234 "data/maps/Luxuradining/scripts.pory"
luspark:
# 235 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

# 65 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_0:
# 65 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 65 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 65 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 65 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 65 "data/maps/Luxuradining/scripts.pory"
	face_right
	step_end

# 69 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_1:
# 69 "data/maps/Luxuradining/scripts.pory"
	delay_16
# 69 "data/maps/Luxuradining/scripts.pory"
	delay_16
# 69 "data/maps/Luxuradining/scripts.pory"
	delay_16
	step_end

# 72 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_2:
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 72 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_3:
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_faster_left
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 74 "data/maps/Luxuradining/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_4:
# 83 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 83 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 83 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 83 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_5:
# 87 "data/maps/Luxuradining/scripts.pory"
	face_left
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 90 "data/maps/Luxuradining/scripts.pory"
Youwake_Movement_6:
# 90 "data/maps/Luxuradining/scripts.pory"
	face_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

Youwake_Text_0:
# 20 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Morning, Mom. Morning, Dad. Sorry I'm\n"
	.string "late.$"

Youwake_Text_1:
# 22 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No need to apologize. We were just\n"
	.string "talking about today's plans.\p"
	.string "Come, sit with us.$"

Youwake_Text_2:
# 33 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Did you sleep well, sweetheart?$"

Youwake_Text_3:
# 35 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, I slept fine.$"

Youwake_Text_4:
# 38 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey… where are the pancakes Mira\n"
	.string "promised?$"

Youwake_Text_5:
# 41 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Pancakes? Pretty sure I said no sweets\n"
	.string "this week.$"

Youwake_Text_6:
# 46 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What? But Mira told me you said it was\n"
	.string "okay today!$"

Youwake_Text_7:
# 51 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Did she now?\l"
	.string "Looks like she fooled you again.$"

Youwake_Text_8:
# 53 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait-what?! What do you mean?$"

Youwake_Text_9:
# 55 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}You got tricked, love. Mira was just\n"
	.string "trying to get you out of bed.$"

Youwake_Text_10:
# 57 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}…I can't believe I fell for that.$"

Youwake_Text_11:
# 61 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Come on, let's eat before breakfast\n"
	.string "gets cold.\p"
	.string "There may not be pancakes, but the\n"
	.string "eggs turned out perfect.$"

Youwake_Text_12:
# 63 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Sounds good.\l"
	.string "Maids-please bring in the food!$"

Youwake_Text_13:
# 94 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_QUESTION}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom… where's Mira?\p"
	.string "I need to have a word with her.$"

Youwake_Text_14:
# 96 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}She's out in the garden helping the\n"
	.string "groundskeeper.\p"
	.string "You can go find her if you're still\n"
	.string "feeling betrayed.$"

Mom_Text_0:
# 146 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ELYSIA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}She's always successful in tricking you$"

Dad_Text_0:
# 154 "data/maps/Luxuradining/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_JOY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess you guys are really close.\p"
	.string "She always knows how to trick you.$"

waiting_Text_0:
# 161 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, I don't want to make Mom\n"
	.string "and Dad wait!$"

garden_Text_0:
# 179 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This garden has never looked better,\n"
	.string "thanks to Lady Mira.$"

rest_Text_0:
# 186 "data/maps/Luxuradining/scripts.pory"
	.string "Maid$"

rest_Text_1:
# 187 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day, Young Master! It's my rest\n"
	.string "day so I'm taking it easy.\p"
	.string "But if you need anything, just let me\n"
	.string "know.$"

nurse_Text_0:
# 194 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day,Master Xylar.$"

nurse_Text_1:
# 201 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}When they attacked the mansion... they\n"
	.string "didn't kill me. They kept me alive. Not\l"
	.string "out of mercy, but because they needed\l"
	.string "someone to heal their Pokémon. I... I\l"
	.string "didn't have a choice.\p"
	.string "I was just a tool to them, a way to keep\n"
	.string "their strength up. Every time I patched\l"
	.string "them up, I felt like I was betraying\l"
	.string "everyone in that house.\p"
	.string "But seeing you alive... it's a small relief\n"
	.string "in all this darkness. I'm so glad you\l"
	.string "made it, Master Xylar.\p"
	.string "But it's dangerous here ,you should\n"
	.string "hide.$"

nurse_Text_2:
# 202 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I survived for a reason. I'll get my\n"
	.string "revenge, every last one of them will pay\l"
	.string "for what they've done.\p"
	.string "Don't worry about me. I know what I have\n"
	.string "to do.$"

nurse_Text_3:
# 203 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}If your Pokémon need healing, don't\n"
	.string "hesitate to come to me. No matter what\l"
	.string "happens, I'll be here to help them\l"
	.string "recover.\p"
	.string "Here are some items that will help you.$"

nurse_Text_4:
# 213 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Let me heal your pokemon.$"

checknurse_Text_0:
# 224 "data/maps/Luxuradining/scripts.pory"
	.string "I should look for some healing supplies\n"
	.string "in the servant's quarter.$"

atkspark_Text_0:
# 230 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, mom is in danger.$"
