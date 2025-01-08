# 1 "data/maps/Playerroom/scripts.pory"

# 2 "data/maps/Playerroom/scripts.pory"
Playerroom_MapScripts::
# 3 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Playerroom/scripts.pory"

# 5 "data/maps/Playerroom/scripts.pory"
	.byte 0
# 6 "data/maps/Playerroom/scripts.pory"
	Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Playerroom/scripts.pory"
     map_script_2 LUXURA_TRAGEDY, 1, mira
# 8 "data/maps/Playerroom/scripts.pory"
	 map_script_2 LUXURA_TRAGEDY, 5, metdad
# 9 "data/maps/Playerroom/scripts.pory"
	.2byte 0

mira::
# 12 "data/maps/Playerroom/scripts.pory"
	lockall
# 13 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 14 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 16 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 17 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 18 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 19 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 20 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 21 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 22 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 23 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 24 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 26 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 27 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 28 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 29 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 30 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 31 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 32 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 33 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 34 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 35 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 36 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 37 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 38 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 39 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 40 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 41 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 42 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 43 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_7
# 44 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 45 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 46 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_8
# 47 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 48 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 49 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 50 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 51 "data/maps/Playerroom/scripts.pory"
	releaseall
# 52 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 53 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 56 "data/maps/Playerroom/scripts.pory"
miramove:
# 57 "data/maps/Playerroom/scripts.pory"
	face_up
# 58 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 61 "data/maps/Playerroom/scripts.pory"
miramove2:
# 62 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 63 "data/maps/Playerroom/scripts.pory"
	walk_right
# 63 "data/maps/Playerroom/scripts.pory"
	walk_right
# 64 "data/maps/Playerroom/scripts.pory"
	walk_down
# 64 "data/maps/Playerroom/scripts.pory"
	walk_down
# 64 "data/maps/Playerroom/scripts.pory"
	walk_down
# 64 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/Playerroom/scripts.pory"
miramove1:
# 68 "data/maps/Playerroom/scripts.pory"
	walk_up
# 68 "data/maps/Playerroom/scripts.pory"
	walk_up
# 68 "data/maps/Playerroom/scripts.pory"
	walk_up
# 68 "data/maps/Playerroom/scripts.pory"
	walk_up
# 69 "data/maps/Playerroom/scripts.pory"
	walk_left
# 69 "data/maps/Playerroom/scripts.pory"
	walk_left
# 70 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 72 "data/maps/Playerroom/scripts.pory"
xylar:
# 73 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 76 "data/maps/Playerroom/scripts.pory"
xylar1:
# 77 "data/maps/Playerroom/scripts.pory"
	delay_1
# 78 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 84 "data/maps/Playerroom/scripts.pory"
camera1:
# 85 "data/maps/Playerroom/scripts.pory"
	delay_2
# 86 "data/maps/Playerroom/scripts.pory"
	walk_down
# 86 "data/maps/Playerroom/scripts.pory"
	walk_down
# 86 "data/maps/Playerroom/scripts.pory"
	walk_down
# 86 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 88 "data/maps/Playerroom/scripts.pory"
camera:
# 89 "data/maps/Playerroom/scripts.pory"
	walk_up
# 89 "data/maps/Playerroom/scripts.pory"
	walk_up
# 89 "data/maps/Playerroom/scripts.pory"
	walk_up
# 89 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 93 "data/maps/Playerroom/scripts.pory"
	lockall
# 94 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 95 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 96 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 97 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 99 "data/maps/Playerroom/scripts.pory"
notp:
# 100 "data/maps/Playerroom/scripts.pory"
	walk_up
# 100 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 104 "data/maps/Playerroom/scripts.pory"
	lockall
# 105 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 106 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 107 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 109 "data/maps/Playerroom/scripts.pory"
not:
# 110 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 114 "data/maps/Playerroom/scripts.pory"
	lockall
# 115 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 116 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 117 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 120 "data/maps/Playerroom/scripts.pory"
	lockall
# 121 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 122 "data/maps/Playerroom/scripts.pory"
	releaseall
# 123 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


mira_Text_0:
# 13 "data/maps/Playerroom/scripts.pory"
	.string "KNOCK..KNOCK$"

mira_Text_1:
# 19 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning. It's time\n"
	.string "for breakfast. Lord Aurther and Lady\l"
	.string "Elysia are waiting for you at the table.$"

mira_Text_2:
# 26 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed, I see? You know you can't\n"
	.string "stay there all day, young master. Come\l"
	.string "now, you wouldn't want to keep Lord\l"
	.string "Aurther and Lady Elysia waiting, would\l"
	.string "you?$"

mira_Text_3:
# 30 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Umm..$"

mira_Text_4:
# 33 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, Master Xylar. If you don't\n"
	.string "hurry, I'll have to pull the covers off\l"
	.string "myself. Don't make me do it.$"

mira_Text_5:
# 36 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Besides, I made your favorite Ramen\n"
	.string "this morning. You wouldn't want it to\l"
	.string "get cold, would you?$"

mira_Text_6:
# 40 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? But didn't Dad say I shouldn't\n"
	.string "have it? He always forbids it.$"

mira_Text_7:
# 43 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ah, yes, Lord Aurther did mention that.\n"
	.string "But Lady Elysia insisted it was alright\l"
	.string "this morning. She thought it might be\l"
	.string "just the thing to brighten your day.$"

mira_Text_8:
# 46 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll be there in a sec.$"

clock_Text_0:
# 95 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 106 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 116 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 121 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar::
# 80 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR DARK_GRAY}Xylar$"
