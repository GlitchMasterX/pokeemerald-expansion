OldaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Flashback_0
	.byte 0


Flashback_0::
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_FLASHBACK_MUSIC, Flashback_0_1
	return

Flashback_0_1:
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removeobject 0xFF
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removeobject 5
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	addobject 1
	return

