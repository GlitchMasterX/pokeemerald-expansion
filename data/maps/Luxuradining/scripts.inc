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
	initclock 10, 00
# 13 "data/maps/Luxuradining/scripts.pory"
	pausefakertc
# 14 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera2
# 16 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 17 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, mom
# 18 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 19 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 21 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 22 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_1, MSGBOX_AUTOCLOSE
# 23 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
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
	namebox name2
# 33 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 35 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 36 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_3, MSGBOX_AUTOCLOSE
# 37 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 38 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mlq
# 39 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 40 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_4, MSGBOX_AUTOCLOSE
# 41 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 42 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mlo
# 43 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 44 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_5, MSGBOX_AUTOCLOSE
# 45 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 46 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mol
# 47 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 48 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 49 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_6, MSGBOX_AUTOCLOSE
# 50 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 51 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, happy
# 52 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, happy
# 53 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 54 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_7, MSGBOX_AUTOCLOSE
# 55 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 56 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 57 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_8, MSGBOX_AUTOCLOSE
# 58 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 59 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 60 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_9
# 61 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 62 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, upset
# 63 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 64 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 65 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_10
# 66 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 67 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 68 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_11, MSGBOX_AUTOCLOSE
# 69 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 70 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Luxuradining/scripts.pory"
	playse SE_USE_ITEM
# 72 "data/maps/Luxuradining/scripts.pory"
	waitse
# 73 "data/maps/Luxuradining/scripts.pory"
	playse SE_M_BITE
# 74 "data/maps/Luxuradining/scripts.pory"
	waitse
# 75 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 77 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_12
# 78 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 79 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 80 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_13
# 81 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 82 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 83 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 84 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/Luxuradining/scripts.pory"
	release
# 86 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 4
	return


# 88 "data/maps/Luxuradining/scripts.pory"
happy:
# 89 "data/maps/Luxuradining/scripts.pory"
	emote_happy
	step_end

# 91 "data/maps/Luxuradining/scripts.pory"
camera5:
# 92 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 92 "data/maps/Luxuradining/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/Luxuradining/scripts.pory"
camera2:
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 95 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/Luxuradining/scripts.pory"
camera4:
# 98 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 98 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/Luxuradining/scripts.pory"
camera3:
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 101 "data/maps/Luxuradining/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/Luxuradining/scripts.pory"
mom:
# 104 "data/maps/Luxuradining/scripts.pory"
	face_right
# 105 "data/maps/Luxuradining/scripts.pory"
	emote_heart
# 106 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 108 "data/maps/Luxuradining/scripts.pory"
dining:
# 109 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 109 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 109 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 110 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 111 "data/maps/Luxuradining/scripts.pory"
	face_up
	step_end

# 113 "data/maps/Luxuradining/scripts.pory"
mlq:
# 114 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
	step_end

# 116 "data/maps/Luxuradining/scripts.pory"
mlo:
# 117 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
# 118 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 120 "data/maps/Luxuradining/scripts.pory"
mol:
# 121 "data/maps/Luxuradining/scripts.pory"
	face_right
	step_end

# 123 "data/maps/Luxuradining/scripts.pory"
upset:
# 124 "data/maps/Luxuradining/scripts.pory"
	emote_upset
	step_end

Mom::
# 127 "data/maps/Luxuradining/scripts.pory"
	lock
# 128 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 129 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 130 "data/maps/Luxuradining/scripts.pory"
	msgbox Mom_Text_0
# 131 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 132 "data/maps/Luxuradining/scripts.pory"
	release
	return


Dad::
# 135 "data/maps/Luxuradining/scripts.pory"
	lock
# 136 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 137 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 138 "data/maps/Luxuradining/scripts.pory"
	msgbox Dad_Text_0
# 139 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 140 "data/maps/Luxuradining/scripts.pory"
	release
	return


waiting::
# 143 "data/maps/Luxuradining/scripts.pory"
	lock
# 144 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 145 "data/maps/Luxuradining/scripts.pory"
	msgbox waiting_Text_0
# 146 "data/maps/Luxuradining/scripts.pory"
	release
	return


Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD::
# 150 "data/maps/Luxuradining/scripts.pory"
	compare LUXURA_TRAGEDY, 4
	goto_if_gt Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 151 "data/maps/Luxuradining/scripts.pory"
	removeobject 1
# 152 "data/maps/Luxuradining/scripts.pory"
	removeobject 2
# 153 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 154 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x499
	return


garden::
# 160 "data/maps/Luxuradining/scripts.pory"
	lock
# 161 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 162 "data/maps/Luxuradining/scripts.pory"
	namebox gardener
# 163 "data/maps/Luxuradining/scripts.pory"
	msgbox garden_Text_0
# 164 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 165 "data/maps/Luxuradining/scripts.pory"
	release
	return


rest::
# 168 "data/maps/Luxuradining/scripts.pory"
	lock
# 169 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 170 "data/maps/Luxuradining/scripts.pory"
	namebox rest_Text_0
# 171 "data/maps/Luxuradining/scripts.pory"
	msgbox rest_Text_1
# 172 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 173 "data/maps/Luxuradining/scripts.pory"
	release
	return


nurse::
# 176 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, nurse_10
nurse_8:
# 183 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_7
nurse_5:
# 196 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_4
	return

nurse_1:
# 177 "data/maps/Luxuradining/scripts.pory"
	lock
# 178 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 179 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_0
# 180 "data/maps/Luxuradining/scripts.pory"
	release
	return

nurse_2:
# 184 "data/maps/Luxuradining/scripts.pory"
	lock
# 185 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 186 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_1, MSGBOX_AUTOCLOSE
# 187 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_2, MSGBOX_AUTOCLOSE
# 188 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_3, MSGBOX_AUTOCLOSE
# 189 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_POTION, 2
# 190 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 3
# 191 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x4B7
# 192 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 20
# 193 "data/maps/Luxuradining/scripts.pory"
	release
	return

nurse_3:
# 197 "data/maps/Luxuradining/scripts.pory"
	lock
# 198 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_4
# 199 "data/maps/Luxuradining/scripts.pory"
	setvar VAR_0x800B, 1
# 200 "data/maps/Luxuradining/scripts.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 201 "data/maps/Luxuradining/scripts.pory"
	waitmessage
# 202 "data/maps/Luxuradining/scripts.pory"
	waitbuttonpress
# 203 "data/maps/Luxuradining/scripts.pory"
	release
	end

nurse_4:
# 196 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B7, nurse_3
	return

nurse_7:
# 183 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_2
	goto nurse_5

nurse_10:
# 176 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_1
	goto nurse_8


checknurse::
# 208 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 209 "data/maps/Luxuradining/scripts.pory"
	msgbox checknurse_Text_0
# 210 "data/maps/Luxuradining/scripts.pory"
	release
	return


atkspark::
# 214 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, luspark
# 215 "data/maps/Luxuradining/scripts.pory"
	msgbox atkspark_Text_0
# 216 "data/maps/Luxuradining/scripts.pory"
	release
	return


# 219 "data/maps/Luxuradining/scripts.pory"
luspark:
# 220 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

Youwake_Text_0:
# 19 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good Morning, Mom,Dad.\p"
	.string "Sorry to keep you waiting.$"

Youwake_Text_1:
# 22 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No need to apologize.We were just\n"
	.string "discussing today's plans.\p"
	.string "Come sit next to me.$"

Youwake_Text_2:
# 33 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How did you sleep dear?$"

Youwake_Text_3:
# 36 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I slept well.$"

Youwake_Text_4:
# 40 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Ramen?$"

Youwake_Text_5:
# 44 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? I thought I forbade it.$"

Youwake_Text_6:
# 49 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But Mira told me you allowed it for\n"
	.string "today.$"

Youwake_Text_7:
# 54 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha..\p"
	.string "She got you again.$"

Youwake_Text_8:
# 57 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you mean?$"

Youwake_Text_9:
# 60 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You have been tricked my dear.$"

Youwake_Text_10:
# 65 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ok, now lets eat before the food gets\n"
	.string "cold.$"

Youwake_Text_11:
# 68 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Sure\p"
	.string "Maids!$"

Youwake_Text_12:
# 77 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira?\p"
	.string "I need to ask her something.$"

Youwake_Text_13:
# 80 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's out helping the gardener.$"

Mom_Text_0:
# 130 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's always successful in tricking you$"

Dad_Text_0:
# 138 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess you guys are really close.\p"
	.string "She always knows how to trick you.$"

waiting_Text_0:
# 145 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, I don't want to make Mom\n"
	.string "and Dad wait!$"

garden_Text_0:
# 163 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This garden has never looked better,\n"
	.string "thanks to Lady Mira.$"

rest_Text_0:
# 170 "data/maps/Luxuradining/scripts.pory"
	.string "Maid$"

rest_Text_1:
# 171 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day, Young Master! It's my rest\n"
	.string "day so I'm taking it easy.\p"
	.string "But if you need anything, just let me\n"
	.string "know.$"

nurse_Text_0:
# 179 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day,Master Xylar.$"

nurse_Text_1:
# 186 "data/maps/Luxuradining/scripts.pory"
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
# 187 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I survived for a reason. I'll get my\n"
	.string "revenge, every last one of them will pay\l"
	.string "for what they've done.\p"
	.string "Don't worry about me. I know what I have\n"
	.string "to do.$"

nurse_Text_3:
# 188 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}If your Pokémon need healing, don't\n"
	.string "hesitate to come to me. No matter what\l"
	.string "happens, I'll be here to help them\l"
	.string "recover.\p"
	.string "Here are some items that will help you.$"

nurse_Text_4:
# 198 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Let me heal your pokemon.$"

checknurse_Text_0:
# 209 "data/maps/Luxuradining/scripts.pory"
	.string "I should look for some healing supplies\n"
	.string "in the servant's quarter.$"

atkspark_Text_0:
# 215 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, mom is in danger.$"
