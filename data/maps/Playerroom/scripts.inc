# 1 "data/maps/Playerroom/scripts.pory"

# 2 "data/maps/Playerroom/scripts.pory"
Playerroom_MapScripts::
# 3 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Playerroom/scripts.pory"
	.byte 0
# 5 "data/maps/Playerroom/scripts.pory"
	Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Playerroom/scripts.pory"
     map_script_2 LUXURA_TRAGEDY, 0, mira
# 7 "data/maps/Playerroom/scripts.pory"
	 map_script_2 LUXURA_TRAGEDY, 5, metdad
# 8 "data/maps/Playerroom/scripts.pory"
	.2byte 0

mira::
# 11 "data/maps/Playerroom/scripts.pory"
	lockall
# 12 "data/maps/Playerroom/scripts.pory"
	fwdmonth 1
# 13 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 14 "data/maps/Playerroom/scripts.pory"
	waitse
# 15 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 16 "data/maps/Playerroom/scripts.pory"
	waitse
# 17 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 18 "data/maps/Playerroom/scripts.pory"
	waitse
# 19 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_0
# 20 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 21 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 22 "data/maps/Playerroom/scripts.pory"
	waitse
# 23 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 24 "data/maps/Playerroom/scripts.pory"
	waitse
# 25 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 26 "data/maps/Playerroom/scripts.pory"
	waitse
# 27 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 29 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_1
# 30 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 31 "data/maps/Playerroom/scripts.pory"
	playse SE_DOOR
# 32 "data/maps/Playerroom/scripts.pory"
	waitse
# 33 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 34 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 35 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 36 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 37 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 38 "data/maps/Playerroom/scripts.pory"
	closemessage
# 39 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 40 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 41 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 42 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 43 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 44 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 45 "data/maps/Playerroom/scripts.pory"
	closemessage
# 46 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 47 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 48 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 49 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_2
# 50 "data/maps/Playerroom/scripts.pory"
	waitbuttonpress
# 51 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 52 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 53 "data/maps/Playerroom/scripts.pory"
	waitmessage
# 54 "data/maps/Playerroom/scripts.pory"
	playse SE_PIN
# 55 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 56 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 57 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 58 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 59 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 60 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 61 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 62 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 63 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 64 "data/maps/Playerroom/scripts.pory"
	closemessage
# 65 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 66 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 67 "data/maps/Playerroom/scripts.pory"
	playse SE_EXIT
# 68 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 69 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFf, mira_Movement_3
# 70 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 71 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 72 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_7
# 73 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 74 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_8
# 75 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 76 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_9
# 77 "data/maps/Playerroom/scripts.pory"
	releaseall
# 78 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 79 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 82 "data/maps/Playerroom/scripts.pory"
miramove:
# 83 "data/maps/Playerroom/scripts.pory"
	face_up
# 84 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 87 "data/maps/Playerroom/scripts.pory"
miramove2:
# 88 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 89 "data/maps/Playerroom/scripts.pory"
	walk_right
# 89 "data/maps/Playerroom/scripts.pory"
	walk_right
# 90 "data/maps/Playerroom/scripts.pory"
	walk_down
# 90 "data/maps/Playerroom/scripts.pory"
	walk_down
# 90 "data/maps/Playerroom/scripts.pory"
	walk_down
# 90 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/Playerroom/scripts.pory"
miramove1:
# 94 "data/maps/Playerroom/scripts.pory"
	walk_up
# 94 "data/maps/Playerroom/scripts.pory"
	walk_up
# 94 "data/maps/Playerroom/scripts.pory"
	walk_up
# 94 "data/maps/Playerroom/scripts.pory"
	walk_up
# 95 "data/maps/Playerroom/scripts.pory"
	walk_left
# 95 "data/maps/Playerroom/scripts.pory"
	walk_left
# 96 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 98 "data/maps/Playerroom/scripts.pory"
xylar:
# 99 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 100 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 102 "data/maps/Playerroom/scripts.pory"
xylar1:
# 103 "data/maps/Playerroom/scripts.pory"
	delay_1
# 104 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 110 "data/maps/Playerroom/scripts.pory"
camera1:
# 111 "data/maps/Playerroom/scripts.pory"
	delay_2
# 112 "data/maps/Playerroom/scripts.pory"
	walk_down
# 112 "data/maps/Playerroom/scripts.pory"
	walk_down
# 112 "data/maps/Playerroom/scripts.pory"
	walk_down
# 112 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/Playerroom/scripts.pory"
camera:
# 115 "data/maps/Playerroom/scripts.pory"
	walk_up
# 115 "data/maps/Playerroom/scripts.pory"
	walk_up
# 115 "data/maps/Playerroom/scripts.pory"
	walk_up
# 115 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 119 "data/maps/Playerroom/scripts.pory"
	lockall
# 120 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 121 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 122 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 123 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 125 "data/maps/Playerroom/scripts.pory"
notp:
# 126 "data/maps/Playerroom/scripts.pory"
	walk_up
# 126 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 130 "data/maps/Playerroom/scripts.pory"
	lockall
# 131 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 132 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 133 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 135 "data/maps/Playerroom/scripts.pory"
not:
# 136 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 140 "data/maps/Playerroom/scripts.pory"
	lockall
# 141 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 142 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 143 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 146 "data/maps/Playerroom/scripts.pory"
	lockall
# 147 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 148 "data/maps/Playerroom/scripts.pory"
	releaseall
# 149 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


# 19 "data/maps/Playerroom/scripts.pory"
mira_Movement_0:
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
# 19 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 29 "data/maps/Playerroom/scripts.pory"
mira_Movement_1:
# 29 "data/maps/Playerroom/scripts.pory"
	delay_16
# 29 "data/maps/Playerroom/scripts.pory"
	delay_16
# 29 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 49 "data/maps/Playerroom/scripts.pory"
mira_Movement_2:
# 49 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 69 "data/maps/Playerroom/scripts.pory"
mira_Movement_3:
# 69 "data/maps/Playerroom/scripts.pory"
	face_down
	step_end

mira_Text_0:
# 36 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning! Time to get\n"
	.string "up. Breakfast is waiting, and Lord\l"
	.string "Aurther and Lady Elysia are already at\l"
	.string "the table.$"

mira_Text_1:
# 44 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed? Honestly… you can't hide\n"
	.string "under those blankets forever.\p"
	.string "You don't want to keep your parents\n"
	.string "waiting, do you?$"

mira_Text_2:
# 48 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mmm... five more minutes...$"

mira_Text_3:
# 52 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, young master. Or I will yank\n"
	.string "those covers off myself.\p"
	.string "Oh-and I may have made your favorite\n"
	.string "pancakes this morning…$"

mira_Text_4:
# 57 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait! pancakes? But Dad said I wasn't\n"
	.string "allowed! He always says no.$"

mira_Text_5:
# 60 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Well… technically, he did.\n"
	.string "But Lady Elysia might have looked the\l"
	.string "other way this once. She said it might\l"
	.string "cheer you up.\p"
	.string "But if you stay in bed too long, I'll just\n"
	.string "give your pancakes to Hoopa.$"

mira_Text_6:
# 62 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, alright! I'm up!$"

mira_Text_7:
# 72 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}…You know, Mira's not just our maid.\n"
	.string "She's actually the adopted daughter of\l"
	.string "my parents.\p"
	.string "They took her in a few years before my\n"
	.string "birth, but she insisted on working as a\l"
	.string "maid to repay them-no matter how many\l"
	.string "times they told her she didn't have to.\p"
	.string "That's just the kind of person she is.$"

mira_Text_8:
# 74 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORM}............\p"
	.string "She's kind, smart, a little sneaky… and,\n"
	.string "well-yeah.\p"
	.string "I.......\p"
	.string "I've had a bit of a crush on her for a\n"
	.string "while now.$"

mira_Text_9:
# 76 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}But I'm not going to tell her. Not yet.\p"
	.string "Not until I've become the strongest\n"
	.string "Trainer in the world.\p"
	.string "Not until I'm someone worthy of her.$"

clock_Text_0:
# 121 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 132 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 142 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 147 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar1::
# 106 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
