AstralisAcademy_Classroom_MapScripts::
# 2 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script_2 ACADEMY_START, 12, trial2
	.2byte 0

AstralisAcademy_Classroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	map_script_2 ACADEMY_START, 12, FracturedMask
	.2byte 0


trial2::
# 10 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	clearflag FLAG_TRIAL_SERENA
# 11 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 4, 41, 11
# 12 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 2, 44, 11
# 13 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectxyperm 8, 35, 14
# 14 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 9
# 16 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 6
# 17 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 10
# 18 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 8
# 19 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 4
# 20 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	addobject 2
# 21 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_F, 24, 35, 8, 3, DIR_NORTH
# 22 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GIRL_2, 25, 38, 8, 3, DIR_NORTH
# 23 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GIRL_1, 26, 41, 8, 3, DIR_NORTH
# 24 "data/maps/AstralisAcademy_Classroom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GAMEBOY_KID, 23, 44, 8, 3, DIR_NORTH
	return

