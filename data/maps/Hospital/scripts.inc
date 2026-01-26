# 1 "data/maps/Hospital/scripts.pory"

# 2 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts::
# 3 "data/maps/Hospital/scripts.pory"
.byte 0

test1::
# 21 "data/maps/Hospital/scripts.pory"
	lock
# 22 "data/maps/Hospital/scripts.pory"
	applymovement 23, move23
# 23 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 24 "data/maps/Hospital/scripts.pory"
	playse SE_PIN
# 25 "data/maps/Hospital/scripts.pory"
	msgbox test1_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/Hospital/scripts.pory"
	applymovement 0xFF, move25
# 27 "data/maps/Hospital/scripts.pory"
	msgbox test1_Text_0
# 28 "data/maps/Hospital/scripts.pory"
	release
	return


# 30 "data/maps/Hospital/scripts.pory"
move23:
# 31 "data/maps/Hospital/scripts.pory"
	face_down
# 32 "data/maps/Hospital/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/Hospital/scripts.pory"
move25:
# 35 "data/maps/Hospital/scripts.pory"
	walk_up
	step_end

test1_Text_0:
# 25 "data/maps/Hospital/scripts.pory"
	.string "Glad to see you$"

name1::
# 5 "data/maps/Hospital/scripts.pory"
	.string "Nurse$"

name2::
# 9 "data/maps/Hospital/scripts.pory"
	.string "Elysia$"

name3::
# 12 "data/maps/Hospital/scripts.pory"
	.string "Aurther$"

name4::
# 16 "data/maps/Hospital/scripts.pory"
	.string "Mira$"
