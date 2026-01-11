AstralisAcademy_Hallway_MapScripts::
	.byte 0


Timetable::
# 6 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	lock
# 7 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	getday
# 8 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	compare VAR_CURRENT_DAY_OF_WEEK, 1
	goto_if_eq Timetable_1
# 12 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	msgbox Timetable_Text_0
	return

Timetable_1:
# 9 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	helpwindow ACADEMY_TIMETABLE_MONDAY
	return


Timetable_Text_0:
# 12 "data/maps/AstralisAcademy_Hallway/scripts.pory"
	.string "Sorry.$"
