AstralisAcademy_Floor1_MapScripts::
# 2 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_Floor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AstralisAcademy_Floor1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 10, Receptionaftertrial1
	.2byte 0


Receptionaftertrial1::
# 8 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 9 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	special SpawnCameraObject
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0x7F, Receptionaftertrial1_Movement_0
# 11 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 12 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	playse SE_PIN
# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Receptionaftertrial1_Movement_1
# 14 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Receptionaftertrial1_Text_0
# 15 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 1, Receptionaftertrial1_Movement_2
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Receptionaftertrial1_Movement_3
# 18 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovementall
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0x7F, Receptionaftertrial1_Movement_4
# 20 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 21 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Receptionaftertrial1_Text_1
# 22 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 23 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername Xylar1
# 24 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Receptionaftertrial1_Text_2
# 25 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 26 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	release
# 28 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	pausefakertc
# 29 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	setvar VAR_ACADEMY_START, 11
	return


Ishouldgoseethehead::
# 33 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 34 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Ishouldgoseethehead_Movement_0
# 35 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 36 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox Ishouldgoseethehead_Text_0
# 37 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 38 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	release
	return


leafletsgotodojo::
# 42 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 43 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	playse SE_PIN
# 44 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, leafletsgotodojo_Movement_0
# 45 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	facefollowernpc
# 46 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername leafletsgotodojo_Text_0
# 47 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox leafletsgotodojo_Text_1
# 48 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 49 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, Ishouldgoseethehead_Movement_0
# 50 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 51 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	release
	return


# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Receptionaftertrial1_Movement_0:
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
	step_end

# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Receptionaftertrial1_Movement_1:
# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	emote_exclamation_mark
# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_up
	step_end

# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Receptionaftertrial1_Movement_2:
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_left
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	delay_16
# 16 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_down
	step_end

# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Receptionaftertrial1_Movement_3:
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_left
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_left
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_left
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_left
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_left
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	face_up
	step_end

# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Receptionaftertrial1_Movement_4:
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
# 19 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/AstralisAcademy_Floor1/scripts.pory"
Ishouldgoseethehead_Movement_0:
# 34 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/AstralisAcademy_Floor1/scripts.pory"
leafletsgotodojo_Movement_0:
# 44 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	emote_exclamation_mark
	step_end

Receptionaftertrial1_Text_0:
# 14 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar!$"

Receptionaftertrial1_Text_1:
# 21 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The Headmaster wants to see you in his\n"
	.string "office.$"

Receptionaftertrial1_Text_2:
# 24 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Summoned already?\p"
	.string "…Great. Guess I'll hear what the old man\n"
	.string "wants.$"

Ishouldgoseethehead_Text_0:
# 36 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "The headmaster wants me.\p"
	.string "Whatever this is, avoiding it won't\n"
	.string "change the outcome.$"

leafletsgotodojo_Text_0:
# 46 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "Leaf$"

leafletsgotodojo_Text_1:
# 47 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Dojo is downstairs.\p"
	.string "Let's go before the trial starts.$"
