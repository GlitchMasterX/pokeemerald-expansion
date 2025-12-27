AstralisAcademy_PokemonCenter_MapScripts::
# 5 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 2 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AstralisAcademy_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	map_script_2 ACADEMY_START, 6, LeaftourPokecentre
	.2byte 0


LeaftourPokecentre::
# 10 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	lock
# 11 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	applymovement 0x7F, LeaftourPokecentre_Movement_0
# 13 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmovement 0
# 14 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	speakername LeaftourPokecentre_Text_0
# 15 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	msgbox LeaftourPokecentre_Text_1
# 16 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	closemessage
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	applymovement 0x7F, LeaftourPokecentre_Movement_1
# 18 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmovement 0
# 19 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	speakername LeaftourPokecentre_Text_0
# 20 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	msgbox LeaftourPokecentre_Text_2
# 21 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	closemessage
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	applymovement 0x7F, LeaftourPokecentre_Movement_2
# 23 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmovement 0
# 24 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	speakername LeaftourPokecentre_Text_0
# 25 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	msgbox LeaftourPokecentre_Text_3
# 26 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	closemessage
# 27 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmessage
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	applymovement 0x7F, LeaftourPokecentre_Movement_3
# 29 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmovement 0
# 30 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	speakername LeaftourPokecentre_Text_0
# 31 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	msgbox LeaftourPokecentre_Text_4
# 32 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	closemessage
# 33 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR1, 26, 15
# 34 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	waitmovement 0
# 35 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	release
	return


# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
LeaftourPokecentre_Movement_0:
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
# 12 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
LeaftourPokecentre_Movement_1:
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
# 17 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
LeaftourPokecentre_Movement_2:
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 22 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
LeaftourPokecentre_Movement_3:
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_left
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
# 28 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	walk_down
	step_end

LeaftourPokecentre_Text_0:
# 14 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	.string "Leaf$"

LeaftourPokecentre_Text_1:
# 15 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Pokémon Center.\p"
	.string "Don't skip this.\p"
	.string "Even the strongest teams break if you\n"
	.string "don't care for them.$"

LeaftourPokecentre_Text_2:
# 20 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}PokéMart.\p"
	.string "Stock up when you can.\p"
	.string "Running out of items mid-battle is the\n"
	.string "worst feeling.$"

LeaftourPokecentre_Text_3:
# 25 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Nursing wing.\p"
	.string "For trainer injuries and major cases.\p"
	.string "I hope you don't end up there.$"

LeaftourPokecentre_Text_4:
# 31 "data/maps/AstralisAcademy_PokemonCenter/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Let's go.$"
