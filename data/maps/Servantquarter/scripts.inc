Servantquarter_MapScripts::
# 2 "data/maps/Servantquarter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, trag
# 3 "data/maps/Servantquarter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, newheal1
	.byte 0


newheal1::
# 7 "data/maps/Servantquarter/scripts.pory"
	setrespawn HEAL_LOCATION_LUXURA_ISLAND
	end


trag::
# 11 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 12
	goto_if_eq trag_1
# 23 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 12
	goto_if_gt trag_2
# 34 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt trag_3
	return

trag_1:
# 12 "data/maps/Servantquarter/scripts.pory"
	removeobject 1
# 13 "data/maps/Servantquarter/scripts.pory"
	setflag FLAG_UNUSED_0x4A9
# 14 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 15 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 16 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 17 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 18 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 19 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 20 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 21 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

trag_2:
# 24 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 25 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 26 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 27 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 28 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 29 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 30 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 31 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

trag_3:
# 35 "data/maps/Servantquarter/scripts.pory"
	addobject 1
# 36 "data/maps/Servantquarter/scripts.pory"
	clearflag FLAG_UNUSED_0x4A9
# 37 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 38 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 39 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 40 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 41 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 42 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 43 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 44 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

