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
# 20 "data/maps/Playerroom/scripts.pory"
	delay 120
# 22 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 24 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_0
# 25 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 26 "data/maps/Playerroom/scripts.pory"
	playse SE_DOOR
# 27 "data/maps/Playerroom/scripts.pory"
	waitse
# 28 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 29 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 31 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 32 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 33 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 34 "data/maps/Playerroom/scripts.pory"
	closemessage
# 36 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 37 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 38 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 39 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 41 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 42 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 43 "data/maps/Playerroom/scripts.pory"
	closemessage
# 45 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 46 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 47 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 48 "data/maps/Playerroom/scripts.pory"
	delay 60
# 49 "data/maps/Playerroom/scripts.pory"
	waitbuttonpress
# 51 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 52 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 53 "data/maps/Playerroom/scripts.pory"
	waitmessage
# 54 "data/maps/Playerroom/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 57 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 58 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 59 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 61 "data/maps/Playerroom/scripts.pory"
	speakername name4
# 62 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 63 "data/maps/Playerroom/scripts.pory"
	closemessage
# 65 "data/maps/Playerroom/scripts.pory"
	speakername Xylar1
# 66 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 67 "data/maps/Playerroom/scripts.pory"
	removefieldmugshot
# 68 "data/maps/Playerroom/scripts.pory"
	closemessage
# 70 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 71 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 72 "data/maps/Playerroom/scripts.pory"
	playse SE_EXIT
# 73 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 74 "data/maps/Playerroom/scripts.pory"
	applymovement 0xFF, mira_Movement_1
# 75 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 76 "data/maps/Playerroom/scripts.pory"
	releaseall
# 77 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 78 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 81 "data/maps/Playerroom/scripts.pory"
miramove:
# 82 "data/maps/Playerroom/scripts.pory"
	face_up
# 83 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 86 "data/maps/Playerroom/scripts.pory"
miramove2:
# 87 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 88 "data/maps/Playerroom/scripts.pory"
	walk_right
# 88 "data/maps/Playerroom/scripts.pory"
	walk_right
# 89 "data/maps/Playerroom/scripts.pory"
	walk_down
# 89 "data/maps/Playerroom/scripts.pory"
	walk_down
# 89 "data/maps/Playerroom/scripts.pory"
	walk_down
# 89 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/Playerroom/scripts.pory"
miramove1:
# 93 "data/maps/Playerroom/scripts.pory"
	walk_up
# 93 "data/maps/Playerroom/scripts.pory"
	walk_up
# 93 "data/maps/Playerroom/scripts.pory"
	walk_up
# 93 "data/maps/Playerroom/scripts.pory"
	walk_up
# 94 "data/maps/Playerroom/scripts.pory"
	walk_left
# 94 "data/maps/Playerroom/scripts.pory"
	walk_left
# 95 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 97 "data/maps/Playerroom/scripts.pory"
xylar:
# 98 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 99 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 101 "data/maps/Playerroom/scripts.pory"
xylar1:
# 102 "data/maps/Playerroom/scripts.pory"
	delay_1
# 103 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 109 "data/maps/Playerroom/scripts.pory"
camera1:
# 110 "data/maps/Playerroom/scripts.pory"
	delay_2
# 111 "data/maps/Playerroom/scripts.pory"
	walk_down
# 111 "data/maps/Playerroom/scripts.pory"
	walk_down
# 111 "data/maps/Playerroom/scripts.pory"
	walk_down
# 111 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/Playerroom/scripts.pory"
camera:
# 114 "data/maps/Playerroom/scripts.pory"
	walk_up
# 114 "data/maps/Playerroom/scripts.pory"
	walk_up
# 114 "data/maps/Playerroom/scripts.pory"
	walk_up
# 114 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 118 "data/maps/Playerroom/scripts.pory"
	lockall
# 119 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 120 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 121 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 122 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 124 "data/maps/Playerroom/scripts.pory"
notp:
# 125 "data/maps/Playerroom/scripts.pory"
	walk_up
# 125 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 129 "data/maps/Playerroom/scripts.pory"
	lockall
# 130 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 131 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 132 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 134 "data/maps/Playerroom/scripts.pory"
not:
# 135 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 139 "data/maps/Playerroom/scripts.pory"
	lockall
# 140 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 141 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 142 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 145 "data/maps/Playerroom/scripts.pory"
	lockall
# 146 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 147 "data/maps/Playerroom/scripts.pory"
	releaseall
# 148 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


# 24 "data/maps/Playerroom/scripts.pory"
mira_Movement_0:
# 24 "data/maps/Playerroom/scripts.pory"
	delay_16
	step_end

# 74 "data/maps/Playerroom/scripts.pory"
mira_Movement_1:
# 74 "data/maps/Playerroom/scripts.pory"
	face_down
	step_end

mira_Text_0:
# 32 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning!\p"
	.string "Breakfast is waiting. Father and Mother\n"
	.string "are already at the table.$"

mira_Text_1:
# 42 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed? You can't hide under those\n"
	.string "blankets forever.\p"
	.string "Come on now, Young master.$"

mira_Text_2:
# 47 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mmm... five more minutes...$"

mira_Text_3:
# 52 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_SMILE}{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, or I'll yank those covers\n"
	.string "off myself.\p"
	.string "Oh-and I may have made your favorite\n"
	.string "pancakes this morning…$"

mira_Text_4:
# 58 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait! Pancakes? But Dad said I wasn't\n"
	.string "allowed! He always says no.$"

mira_Text_5:
# 62 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MIRA}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Technically, yes… but Mother may have\n"
	.string "convinced him this once.\p"
	.string "She thought it might cheer you up.\p"
	.string "But if you stay in bed too long, I'll just\n"
	.string "give your pancakes to Hoopa.$"

mira_Text_6:
# 66 "data/maps/Playerroom/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, alright! I'm up!$"

clock_Text_0:
# 120 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 131 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 141 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 146 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar1::
# 105 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
