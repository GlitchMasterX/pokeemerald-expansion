# 1 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 7 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown/scripts.pory"

# 9 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 23 "data/maps/LittlerootTown/scripts.pory"

# 24 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 25 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 31 "data/maps/LittlerootTown/scripts.pory"

# 32 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex

MyScript::
# 41 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 42 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, hello
# 43 "data/maps/LittlerootTown/scripts.pory"
	msgbox MyScript_Text_0
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x265
# 45 "data/maps/LittlerootTown/scripts.pory"
	removeobject 1
# 46 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 49 "data/maps/LittlerootTown/scripts.pory"
hello:
# 50 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

MyScript_Text_0:
# 43 "data/maps/LittlerootTown/scripts.pory"
	.string "Hahaha I am a ghost \nhahahahahaahahahahaahahahahaaaa\laaaaa$"
