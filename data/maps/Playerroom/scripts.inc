# 1 "data/maps/Playerroom/scripts.pory"

# 2 "data/maps/Playerroom/scripts.pory"
Playerroom_MapScripts::
# 3 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Playerroom/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, playerroom
# 5 "data/maps/Playerroom/scripts.pory"
	.byte 0
# 6 "data/maps/Playerroom/scripts.pory"
	Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Playerroom/scripts.pory"
     map_script_2 LUXURA_TRAGEDY, 0, mira
# 8 "data/maps/Playerroom/scripts.pory"
	 map_script_2 LUXURA_TRAGEDY, 5, metdad
# 9 "data/maps/Playerroom/scripts.pory"
	.2byte 0

playerroom::
# 12 "data/maps/Playerroom/scripts.pory"
	goto_if_set FLAG_UNUSED_0x0E9, playerroom_1
	return

playerroom_1:
# 13 "data/maps/Playerroom/scripts.pory"
	special Overworld_PlaySpecialMapMusic
	return


mira::
# 17 "data/maps/Playerroom/scripts.pory"
	lockall
# 18 "data/maps/Playerroom/scripts.pory"
	fwdmonth 1
# 19 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 20 "data/maps/Playerroom/scripts.pory"
	waitse
# 21 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 22 "data/maps/Playerroom/scripts.pory"
	waitse
# 23 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 24 "data/maps/Playerroom/scripts.pory"
	waitse
# 25 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_0
# 26 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 27 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 28 "data/maps/Playerroom/scripts.pory"
	waitse
# 29 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 30 "data/maps/Playerroom/scripts.pory"
	waitse
# 31 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 32 "data/maps/Playerroom/scripts.pory"
	waitse
# 33 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 35 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_1
# 36 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 37 "data/maps/Playerroom/scripts.pory"
	playse SE_DOOR
# 38 "data/maps/Playerroom/scripts.pory"
	waitse
# 39 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 40 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 41 "data/maps/Playerroom/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 42 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 43 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 44 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 45 "data/maps/Playerroom/scripts.pory"
	closemessage
# 46 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 47 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 48 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 49 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 51 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 52 "data/maps/Playerroom/scripts.pory"
	closemessage
# 53 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 54 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 55 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 56 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_2
# 57 "data/maps/Playerroom/scripts.pory"
	waitbuttonpress
# 58 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 59 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 60 "data/maps/Playerroom/scripts.pory"
	waitmessage
# 61 "data/maps/Playerroom/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 63 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 64 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 65 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 66 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 67 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 68 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 69 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 70 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 71 "data/maps/Playerroom/scripts.pory"
	closemessage
# 72 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 73 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 74 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 75 "data/maps/Playerroom/scripts.pory"
	releaseall
# 76 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 77 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 80 "data/maps/Playerroom/scripts.pory"
miramove:
# 81 "data/maps/Playerroom/scripts.pory"
	face_up
# 82 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 85 "data/maps/Playerroom/scripts.pory"
miramove2:
# 86 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 87 "data/maps/Playerroom/scripts.pory"
	walk_right
# 87 "data/maps/Playerroom/scripts.pory"
	walk_right
# 88 "data/maps/Playerroom/scripts.pory"
	walk_down
# 88 "data/maps/Playerroom/scripts.pory"
	walk_down
# 88 "data/maps/Playerroom/scripts.pory"
	walk_down
# 88 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/Playerroom/scripts.pory"
miramove1:
# 92 "data/maps/Playerroom/scripts.pory"
	walk_up
# 92 "data/maps/Playerroom/scripts.pory"
	walk_up
# 92 "data/maps/Playerroom/scripts.pory"
	walk_up
# 92 "data/maps/Playerroom/scripts.pory"
	walk_up
# 93 "data/maps/Playerroom/scripts.pory"
	walk_left
# 93 "data/maps/Playerroom/scripts.pory"
	walk_left
# 94 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 96 "data/maps/Playerroom/scripts.pory"
xylar:
# 97 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 98 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 100 "data/maps/Playerroom/scripts.pory"
xylar1:
# 101 "data/maps/Playerroom/scripts.pory"
	delay_1
# 102 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 108 "data/maps/Playerroom/scripts.pory"
camera1:
# 109 "data/maps/Playerroom/scripts.pory"
	delay_2
# 110 "data/maps/Playerroom/scripts.pory"
	walk_down
# 110 "data/maps/Playerroom/scripts.pory"
	walk_down
# 110 "data/maps/Playerroom/scripts.pory"
	walk_down
# 110 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 112 "data/maps/Playerroom/scripts.pory"
camera:
# 113 "data/maps/Playerroom/scripts.pory"
	walk_up
# 113 "data/maps/Playerroom/scripts.pory"
	walk_up
# 113 "data/maps/Playerroom/scripts.pory"
	walk_up
# 113 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 117 "data/maps/Playerroom/scripts.pory"
	lockall
# 118 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 119 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 120 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 121 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 123 "data/maps/Playerroom/scripts.pory"
notp:
# 124 "data/maps/Playerroom/scripts.pory"
	walk_up
# 124 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 128 "data/maps/Playerroom/scripts.pory"
	lockall
# 129 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 130 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 131 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 133 "data/maps/Playerroom/scripts.pory"
not:
# 134 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 138 "data/maps/Playerroom/scripts.pory"
	lockall
# 139 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 140 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 141 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 144 "data/maps/Playerroom/scripts.pory"
	lockall
# 145 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 146 "data/maps/Playerroom/scripts.pory"
	releaseall
# 147 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


# 25 "data/maps/Playerroom/scripts.pory"
mira_Movement_0:
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 35 "data/maps/Playerroom/scripts.pory"
mira_Movement_1:
# 35 "data/maps/Playerroom/scripts.pory"
	delay_16
# 35 "data/maps/Playerroom/scripts.pory"
	delay_16
# 35 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 56 "data/maps/Playerroom/scripts.pory"
mira_Movement_2:
# 56 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

mira_Text_0:
# 43 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning. It's time\n"
	.string "for breakfast. Lord Aurther and Lady\l"
	.string "Elysia are waiting for you at the table.$"

mira_Text_1:
# 51 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed, I see? You know you can't\n"
	.string "stay there all day, young master. Come\l"
	.string "now, you wouldn't want to keep Lord\l"
	.string "Aurther and Lady Elysia waiting, would\l"
	.string "you?$"

mira_Text_2:
# 55 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Umm........$"

mira_Text_3:
# 59 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, Master Xylar. If you don't\n"
	.string "get up soon, I'm pulling the covers off\l"
	.string "myself, don't make me do it.\p"
	.string "And I made your favorite pancakes this\n"
	.string "morning. You don't want them getting\l"
	.string "cold, do you?$"

mira_Text_4:
# 64 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Pancakes? But I thought Dad said I\n"
	.string "wasn't allowed… He always forbids it.$"

mira_Text_5:
# 67 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Ah, yes, Lord Aurther did mention that.\n"
	.string "But Lady Elysia insisted it was alright\l"
	.string "this morning. She thought it might be\l"
	.string "just the thing to brighten your day.$"

mira_Text_6:
# 69 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll be there in a sec.$"

clock_Text_0:
# 119 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 130 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 140 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 145 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar1::
# 104 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
