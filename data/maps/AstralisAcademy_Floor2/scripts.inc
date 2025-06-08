AstralisAcademy_Floor2_MapScripts::
# 2 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_Floor2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstralisAcademy_Floor2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	map_script_2 ACADEMY_START, 5, Serenamet
	.2byte 0


Serenamet::
# 8 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	addobject 1, MAP_ASTRALIS_ACADEMY_FLOOR2
# 9 "data/maps/AstralisAcademy_Floor2/scripts.pory"
	setobjectxy 1, 12, 10
	return

