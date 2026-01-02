AstralisAcademy_Floor1_MapScripts::
	.byte 0


leafletsgotodojo::
# 5 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	lock
# 6 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	playse SE_PIN
# 7 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, leafletsgotodojo_Movement_0
# 8 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	facefollowernpc
# 9 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	speakername leafletsgotodojo_Text_0
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	msgbox leafletsgotodojo_Text_1
# 11 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	closemessage
# 12 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	applymovement 0xFF, leafletsgotodojo_Movement_1
# 13 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	waitmovement 0
# 14 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	release
	return


# 7 "data/maps/AstralisAcademy_Floor1/scripts.pory"
leafletsgotodojo_Movement_0:
# 7 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 12 "data/maps/AstralisAcademy_Floor1/scripts.pory"
leafletsgotodojo_Movement_1:
# 12 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	walk_up
	step_end

leafletsgotodojo_Text_0:
# 9 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "Leaf$"

leafletsgotodojo_Text_1:
# 10 "data/maps/AstralisAcademy_Floor1/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Dojo is downstairs.\p"
	.string "Let's go before the trial starts.$"
