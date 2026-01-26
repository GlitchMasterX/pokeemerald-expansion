AstraveilCity_MapScripts::
# 2 "data/maps/AstraveilCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AstraveilCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AstraveilCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/AstraveilCity/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 0, Flashback_1
	.2byte 0


Flashback_1::
# 8 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 1, 26, 38
# 9 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 2, 26, 40
# 10 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 3, 26, 42
# 11 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 4, 34, 38
# 12 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 5, 34, 40
# 13 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 6, 34, 42
# 14 "data/maps/AstraveilCity/scripts.pory"
	setobjectxyperm 7, 25, 39
# 15 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 17 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 20 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 21 "data/maps/AstraveilCity/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 22 "data/maps/AstraveilCity/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACTOR_M, 30, 25, 41, 3, DIR_EAST
# 23 "data/maps/AstraveilCity/scripts.pory"
	createvobject OBJ_EVENT_GFX_ACE_M, 30, 35, 41, 3, DIR_WEST
# 24 "data/maps/AstraveilCity/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 30, 35, 39, 3, DIR_WEST
# 25 "data/maps/AstraveilCity/scripts.pory"
	addobject 1
# 26 "data/maps/AstraveilCity/scripts.pory"
	addobject 2
# 27 "data/maps/AstraveilCity/scripts.pory"
	addobject 3
# 28 "data/maps/AstraveilCity/scripts.pory"
	addobject 4
# 29 "data/maps/AstraveilCity/scripts.pory"
	addobject 5
# 30 "data/maps/AstraveilCity/scripts.pory"
	addobject 6
# 31 "data/maps/AstraveilCity/scripts.pory"
	addobject 7
	return

