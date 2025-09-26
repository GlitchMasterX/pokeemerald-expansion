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
# 14 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 15 "data/maps/Playerroom/scripts.pory"
	waitse
# 16 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 17 "data/maps/Playerroom/scripts.pory"
	waitse
# 18 "data/maps/Playerroom/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 19 "data/maps/Playerroom/scripts.pory"
	waitse
# 21 "data/maps/Playerroom/scripts.pory"
	delay 120
# 23 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 25 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_0
# 26 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 27 "data/maps/Playerroom/scripts.pory"
	playse SE_DOOR
# 28 "data/maps/Playerroom/scripts.pory"
	waitse
# 29 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 30 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 32 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 33 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 34 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 35 "data/maps/Playerroom/scripts.pory"
	closemessage
# 37 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 38 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 39 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 40 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 42 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 43 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 44 "data/maps/Playerroom/scripts.pory"
	closemessage
# 46 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 47 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 48 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 49 "data/maps/Playerroom/scripts.pory"
	delay 60
# 50 "data/maps/Playerroom/scripts.pory"
	waitbuttonpress
# 52 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 53 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 54 "data/maps/Playerroom/scripts.pory"
	waitmessage
# 55 "data/maps/Playerroom/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 58 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 59 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 60 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 62 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 63 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 64 "data/maps/Playerroom/scripts.pory"
	closemessage
# 66 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 67 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 68 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 69 "data/maps/Playerroom/scripts.pory"
	closemessage
# 71 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 72 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 73 "data/maps/Playerroom/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 75 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_1
# 76 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 77 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 78 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_7
# 79 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 80 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_8
# 81 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 82 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_9
# 83 "data/maps/Playerroom/scripts.pory"
	closemessage
# 85 "data/maps/Playerroom/scripts.pory"
	releaseall
# 86 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 87 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 90 "data/maps/Playerroom/scripts.pory"
miramove:
# 91 "data/maps/Playerroom/scripts.pory"
	face_up
# 92 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 95 "data/maps/Playerroom/scripts.pory"
miramove2:
# 96 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 97 "data/maps/Playerroom/scripts.pory"
	walk_right
# 97 "data/maps/Playerroom/scripts.pory"
	walk_right
# 98 "data/maps/Playerroom/scripts.pory"
	walk_down
# 98 "data/maps/Playerroom/scripts.pory"
	walk_down
# 98 "data/maps/Playerroom/scripts.pory"
	walk_down
# 98 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 101 "data/maps/Playerroom/scripts.pory"
miramove1:
# 102 "data/maps/Playerroom/scripts.pory"
	walk_up
# 102 "data/maps/Playerroom/scripts.pory"
	walk_up
# 102 "data/maps/Playerroom/scripts.pory"
	walk_up
# 102 "data/maps/Playerroom/scripts.pory"
	walk_up
# 103 "data/maps/Playerroom/scripts.pory"
	walk_left
# 103 "data/maps/Playerroom/scripts.pory"
	walk_left
# 104 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 106 "data/maps/Playerroom/scripts.pory"
xylar:
# 107 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 108 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 110 "data/maps/Playerroom/scripts.pory"
xylar1:
# 111 "data/maps/Playerroom/scripts.pory"
	delay_1
# 112 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 118 "data/maps/Playerroom/scripts.pory"
camera1:
# 119 "data/maps/Playerroom/scripts.pory"
	delay_2
# 120 "data/maps/Playerroom/scripts.pory"
	walk_down
# 120 "data/maps/Playerroom/scripts.pory"
	walk_down
# 120 "data/maps/Playerroom/scripts.pory"
	walk_down
# 120 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/Playerroom/scripts.pory"
camera:
# 123 "data/maps/Playerroom/scripts.pory"
	walk_up
# 123 "data/maps/Playerroom/scripts.pory"
	walk_up
# 123 "data/maps/Playerroom/scripts.pory"
	walk_up
# 123 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 127 "data/maps/Playerroom/scripts.pory"
	lockall
# 128 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 129 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 130 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 131 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 133 "data/maps/Playerroom/scripts.pory"
notp:
# 134 "data/maps/Playerroom/scripts.pory"
	walk_up
# 134 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 138 "data/maps/Playerroom/scripts.pory"
	lockall
# 139 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 140 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 141 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 143 "data/maps/Playerroom/scripts.pory"
not:
# 144 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 148 "data/maps/Playerroom/scripts.pory"
	lockall
# 149 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 150 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 151 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 154 "data/maps/Playerroom/scripts.pory"
	lockall
# 155 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 156 "data/maps/Playerroom/scripts.pory"
	releaseall
# 157 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


# 25 "data/maps/Playerroom/scripts.pory"
mira_Movement_0:
# 25 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 75 "data/maps/Playerroom/scripts.pory"
mira_Movement_1:
# 75 "data/maps/Playerroom/scripts.pory"
	face_down
	step_end

mira_Text_0:
# 33 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning! Breakfast\n"
	.string "is waiting. Lord Aurther and Lady Elysia\l"
	.string "are already at the table.$"

mira_Text_1:
# 43 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed? You can't hide under those\n"
	.string "blankets forever.\p"
	.string "Come on now, young master.$"

mira_Text_2:
# 48 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mmm... five more minutes...$"

mira_Text_3:
# 53 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, or I'll yank those covers\n"
	.string "off myself.\p"
	.string "Oh-and I may have made your favorite\n"
	.string "pancakes this morning…$"

mira_Text_4:
# 59 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait! Pancakes? But Dad said I wasn't\n"
	.string "allowed! He always says no.$"

mira_Text_5:
# 63 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Technically, yes… but Lady Elysia may\n"
	.string "have convinced him this once.\p"
	.string "She thought it might cheer you up.\p"
	.string "But if you stay in bed too long, I'll just\n"
	.string "give your pancakes to Hoopa.$"

mira_Text_6:
# 67 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, alright! I'm up!$"

mira_Text_7:
# 78 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}…Mira's not just our maid. My parents\n"
	.string "adopted her before I was born, so she's\l"
	.string "been family all my life.\p"
	.string "She still insists on working, even\n"
	.string "though they've told her countless\l"
	.string "times she doesn't need to.$"

mira_Text_8:
# 80 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}……\p"
	.string "She's kind, smart, a little sneaky… and\n"
	.string "honestly, she's always felt like the big\l"
	.string "sister I never asked for, but I'm glad I\l"
	.string "have.$"

mira_Text_9:
# 82 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}I want to become strong-not just for\n"
	.string "myself, but so I can protect her too.\p"
	.string "That's what a brother should do.$"

clock_Text_0:
# 129 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 140 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 150 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 155 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar1::
# 114 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
