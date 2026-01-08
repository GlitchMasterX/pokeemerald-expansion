# 1 "data/maps/AcademyView/scripts.pory"

# 2 "data/maps/AcademyView/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/AcademyView/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/AcademyView/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/AcademyView/scripts.pory"

# 6 "data/maps/AcademyView/scripts.pory"
AcademyView_MapScripts::
# 7 "data/maps/AcademyView/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Fiona
# 8 "data/maps/AcademyView/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/AcademyView/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/AcademyView/scripts.pory"
	.byte 0
# 11 "data/maps/AcademyView/scripts.pory"

# 12 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/AcademyView/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/AcademyView/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/AcademyView/scripts.pory"
	end
# 16 "data/maps/AcademyView/scripts.pory"

# 17 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/AcademyView/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/AcademyView/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/AcademyView/scripts.pory"
	return
# 21 "data/maps/AcademyView/scripts.pory"

# 22 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/AcademyView/scripts.pory"
	checkplayergender
# 24 "data/maps/AcademyView/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/AcademyView/scripts.pory"
	return
# 26 "data/maps/AcademyView/scripts.pory"

# 27 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/AcademyView/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/AcademyView/scripts.pory"
	return
# 30 "data/maps/AcademyView/scripts.pory"

# 31 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 32 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/AcademyView/scripts.pory"
	end
# 36 "data/maps/AcademyView/scripts.pory"

# 37 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 38 "data/maps/AcademyView/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 39 "data/maps/AcademyView/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/AcademyView/scripts.pory"
	return
# 41 "data/maps/AcademyView/scripts.pory"

# 42 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 43 "data/maps/AcademyView/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 44 "data/maps/AcademyView/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/AcademyView/scripts.pory"
	return
# 46 "data/maps/AcademyView/scripts.pory"

# 47 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 48 "data/maps/AcademyView/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 49 "data/maps/AcademyView/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/AcademyView/scripts.pory"
	return
# 51 "data/maps/AcademyView/scripts.pory"

# 52 "data/maps/AcademyView/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 53 "data/maps/AcademyView/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 54 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 55 "data/maps/AcademyView/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 56 "data/maps/AcademyView/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 57 "data/maps/AcademyView/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 58 "data/maps/AcademyView/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 59 "data/maps/AcademyView/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 60 "data/maps/AcademyView/scripts.pory"
	.2byte 0
# 61 "data/maps/AcademyView/scripts.pory"

# 62 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 63 "data/maps/AcademyView/scripts.pory"
	lockall
# 64 "data/maps/AcademyView/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 65 "data/maps/AcademyView/scripts.pory"
	closemessage
# 66 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 67 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 68 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 69 "data/maps/AcademyView/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 7, 1
# 70 "data/maps/AcademyView/scripts.pory"
	waitstate
# 71 "data/maps/AcademyView/scripts.pory"
	releaseall
# 72 "data/maps/AcademyView/scripts.pory"
	end
# 73 "data/maps/AcademyView/scripts.pory"

# 74 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 75 "data/maps/AcademyView/scripts.pory"
	walk_up
# 76 "data/maps/AcademyView/scripts.pory"
	step_end
# 77 "data/maps/AcademyView/scripts.pory"

# 78 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 79 "data/maps/AcademyView/scripts.pory"
	lockall
# 80 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 81 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8005, MALE
# 82 "data/maps/AcademyView/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 83 "data/maps/AcademyView/scripts.pory"
	end
# 84 "data/maps/AcademyView/scripts.pory"

# 85 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 86 "data/maps/AcademyView/scripts.pory"
	lockall
# 87 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8004, MALE
# 88 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 89 "data/maps/AcademyView/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 90 "data/maps/AcademyView/scripts.pory"
	end
# 91 "data/maps/AcademyView/scripts.pory"

# 92 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 93 "data/maps/AcademyView/scripts.pory"
	lockall
# 94 "data/maps/AcademyView/scripts.pory"
	playse SE_PIN
# 95 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 96 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 97 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 98 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 99 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 101 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 102 "data/maps/AcademyView/scripts.pory"
	special GetRivalSonDaughterString
# 103 "data/maps/AcademyView/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 104 "data/maps/AcademyView/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 105 "data/maps/AcademyView/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 106 "data/maps/AcademyView/scripts.pory"
	releaseall
# 107 "data/maps/AcademyView/scripts.pory"
	end
# 108 "data/maps/AcademyView/scripts.pory"

# 109 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 110 "data/maps/AcademyView/scripts.pory"
	walk_down
# 111 "data/maps/AcademyView/scripts.pory"
	walk_right
# 112 "data/maps/AcademyView/scripts.pory"
	walk_right
# 113 "data/maps/AcademyView/scripts.pory"
	walk_right
# 114 "data/maps/AcademyView/scripts.pory"
	walk_right
# 115 "data/maps/AcademyView/scripts.pory"
	walk_right
# 116 "data/maps/AcademyView/scripts.pory"
	step_end
# 117 "data/maps/AcademyView/scripts.pory"

# 118 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 119 "data/maps/AcademyView/scripts.pory"
	lockall
# 120 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 121 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8005, MALE
# 122 "data/maps/AcademyView/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 124 "data/maps/AcademyView/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 125 "data/maps/AcademyView/scripts.pory"
	end
# 126 "data/maps/AcademyView/scripts.pory"

# 127 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 128 "data/maps/AcademyView/scripts.pory"
	lockall
# 129 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8008, 0
# 130 "data/maps/AcademyView/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 131 "data/maps/AcademyView/scripts.pory"
	end
# 132 "data/maps/AcademyView/scripts.pory"

# 133 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 134 "data/maps/AcademyView/scripts.pory"
	lockall
# 135 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8008, 1
# 136 "data/maps/AcademyView/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 137 "data/maps/AcademyView/scripts.pory"
	end
# 138 "data/maps/AcademyView/scripts.pory"

# 139 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 140 "data/maps/AcademyView/scripts.pory"
	lockall
# 141 "data/maps/AcademyView/scripts.pory"
	setvar VAR_0x8008, 2
# 142 "data/maps/AcademyView/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 143 "data/maps/AcademyView/scripts.pory"
	end
# 144 "data/maps/AcademyView/scripts.pory"

# 145 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 146 "data/maps/AcademyView/scripts.pory"
	playse SE_EXIT
# 147 "data/maps/AcademyView/scripts.pory"
	delay 10
# 148 "data/maps/AcademyView/scripts.pory"
	addobject LOCALID_RIVAL
# 149 "data/maps/AcademyView/scripts.pory"
	delay 30
# 150 "data/maps/AcademyView/scripts.pory"
	playse SE_PIN
# 151 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 152 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 153 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 154 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 155 "data/maps/AcademyView/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 156 "data/maps/AcademyView/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 157 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 158 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 159 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 160 "data/maps/AcademyView/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 161 "data/maps/AcademyView/scripts.pory"
	closemessage
# 162 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 163 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 164 "data/maps/AcademyView/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 165 "data/maps/AcademyView/scripts.pory"
	playse SE_EXIT
# 166 "data/maps/AcademyView/scripts.pory"
	removeobject LOCALID_RIVAL
# 167 "data/maps/AcademyView/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 168 "data/maps/AcademyView/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 169 "data/maps/AcademyView/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 170 "data/maps/AcademyView/scripts.pory"
	delay 30
# 171 "data/maps/AcademyView/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 172 "data/maps/AcademyView/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 173 "data/maps/AcademyView/scripts.pory"
	savebgm MUS_DUMMY
# 174 "data/maps/AcademyView/scripts.pory"
	fadedefaultbgm
# 175 "data/maps/AcademyView/scripts.pory"
	releaseall
# 176 "data/maps/AcademyView/scripts.pory"
	end
# 177 "data/maps/AcademyView/scripts.pory"

# 178 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 179 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 180 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 181 "data/maps/AcademyView/scripts.pory"
	return
# 182 "data/maps/AcademyView/scripts.pory"

# 183 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 184 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 185 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 186 "data/maps/AcademyView/scripts.pory"
	return
# 187 "data/maps/AcademyView/scripts.pory"

# 188 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 189 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 190 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 191 "data/maps/AcademyView/scripts.pory"
	return
# 192 "data/maps/AcademyView/scripts.pory"

# 193 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 194 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 195 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 196 "data/maps/AcademyView/scripts.pory"
	return
# 197 "data/maps/AcademyView/scripts.pory"

# 198 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 199 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_left
# 200 "data/maps/AcademyView/scripts.pory"
	walk_left
# 201 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/AcademyView/scripts.pory"
	walk_up
# 203 "data/maps/AcademyView/scripts.pory"
	walk_up
# 204 "data/maps/AcademyView/scripts.pory"
	walk_up
# 205 "data/maps/AcademyView/scripts.pory"
	walk_up
# 206 "data/maps/AcademyView/scripts.pory"
	step_end
# 207 "data/maps/AcademyView/scripts.pory"

# 208 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 209 "data/maps/AcademyView/scripts.pory"
	walk_up
# 210 "data/maps/AcademyView/scripts.pory"
	walk_up
# 211 "data/maps/AcademyView/scripts.pory"
	walk_up
# 212 "data/maps/AcademyView/scripts.pory"
	step_end
# 213 "data/maps/AcademyView/scripts.pory"

# 214 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 215 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_right
# 216 "data/maps/AcademyView/scripts.pory"
	walk_right
# 217 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/AcademyView/scripts.pory"
	walk_up
# 219 "data/maps/AcademyView/scripts.pory"
	walk_up
# 220 "data/maps/AcademyView/scripts.pory"
	walk_up
# 221 "data/maps/AcademyView/scripts.pory"
	walk_up
# 222 "data/maps/AcademyView/scripts.pory"
	step_end
# 223 "data/maps/AcademyView/scripts.pory"

# 224 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 225 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 226 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 227 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 228 "data/maps/AcademyView/scripts.pory"
	return
# 229 "data/maps/AcademyView/scripts.pory"

# 230 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 231 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 232 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 233 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 234 "data/maps/AcademyView/scripts.pory"
	return
# 235 "data/maps/AcademyView/scripts.pory"

# 236 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 237 "data/maps/AcademyView/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 238 "data/maps/AcademyView/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 239 "data/maps/AcademyView/scripts.pory"
	waitmovement 0
# 240 "data/maps/AcademyView/scripts.pory"
	return
# 241 "data/maps/AcademyView/scripts.pory"

# 242 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 243 "data/maps/AcademyView/scripts.pory"
	delay_16
# 244 "data/maps/AcademyView/scripts.pory"
	delay_8
# 245 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_right
# 246 "data/maps/AcademyView/scripts.pory"
	step_end
# 247 "data/maps/AcademyView/scripts.pory"

# 248 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 249 "data/maps/AcademyView/scripts.pory"
	delay_16
# 250 "data/maps/AcademyView/scripts.pory"
	delay_8
# 251 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/AcademyView/scripts.pory"
	delay_16
# 253 "data/maps/AcademyView/scripts.pory"
	delay_16
# 254 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/AcademyView/scripts.pory"
	step_end
# 256 "data/maps/AcademyView/scripts.pory"

# 257 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 258 "data/maps/AcademyView/scripts.pory"
	delay_16
# 259 "data/maps/AcademyView/scripts.pory"
	delay_8
# 260 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_left
# 261 "data/maps/AcademyView/scripts.pory"
	step_end
# 262 "data/maps/AcademyView/scripts.pory"

# 263 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 264 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_right
# 265 "data/maps/AcademyView/scripts.pory"
	walk_right
# 266 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 267 "data/maps/AcademyView/scripts.pory"
	walk_up
# 268 "data/maps/AcademyView/scripts.pory"
	walk_up
# 269 "data/maps/AcademyView/scripts.pory"
	step_end
# 270 "data/maps/AcademyView/scripts.pory"

# 271 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 272 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_right
# 273 "data/maps/AcademyView/scripts.pory"
	walk_right
# 274 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 275 "data/maps/AcademyView/scripts.pory"
	walk_up
# 276 "data/maps/AcademyView/scripts.pory"
	walk_up
# 277 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_left
# 278 "data/maps/AcademyView/scripts.pory"
	walk_left
# 279 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/AcademyView/scripts.pory"
	walk_up
# 281 "data/maps/AcademyView/scripts.pory"
	step_end
# 282 "data/maps/AcademyView/scripts.pory"

# 283 "data/maps/AcademyView/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 284 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/AcademyView/scripts.pory"
	walk_left
# 286 "data/maps/AcademyView/scripts.pory"
	walk_in_place_faster_up
# 287 "data/maps/AcademyView/scripts.pory"
	walk_up
# 288 "data/maps/AcademyView/scripts.pory"
	walk_up
# 289 "data/maps/AcademyView/scripts.pory"
	step_end
# 290 "data/maps/AcademyView/scripts.pory"

# 291 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 292 "data/maps/AcademyView/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 293 "data/maps/AcademyView/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 294 "data/maps/AcademyView/scripts.pory"

# 295 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 296 "data/maps/AcademyView/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 297 "data/maps/AcademyView/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 298 "data/maps/AcademyView/scripts.pory"
	.string "This is so convenient!\p"
# 299 "data/maps/AcademyView/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 300 "data/maps/AcademyView/scripts.pory"
	.string "Go check it out, dear!\p"
# 301 "data/maps/AcademyView/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 302 "data/maps/AcademyView/scripts.pory"
	.string "our move here.\l"
# 303 "data/maps/AcademyView/scripts.pory"
	.string "Don't forget to set it!$"
# 304 "data/maps/AcademyView/scripts.pory"

# 305 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 306 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 307 "data/maps/AcademyView/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 308 "data/maps/AcademyView/scripts.pory"
	.string "very own room?$"
# 309 "data/maps/AcademyView/scripts.pory"

# 310 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 311 "data/maps/AcademyView/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 312 "data/maps/AcademyView/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 313 "data/maps/AcademyView/scripts.pory"

# 314 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 315 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 316 "data/maps/AcademyView/scripts.pory"
	.string "Quick! Come quickly!$"
# 317 "data/maps/AcademyView/scripts.pory"

# 318 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 319 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 320 "data/maps/AcademyView/scripts.pory"
	.string "Maybe DAD will be on!$"
# 321 "data/maps/AcademyView/scripts.pory"

# 322 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 323 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 324 "data/maps/AcademyView/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 325 "data/maps/AcademyView/scripts.pory"
	.string "Too bad.$"
# 326 "data/maps/AcademyView/scripts.pory"

# 327 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 328 "data/maps/AcademyView/scripts.pory"
	.string "Oh, yes.\n"
# 329 "data/maps/AcademyView/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 330 "data/maps/AcademyView/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 331 "data/maps/AcademyView/scripts.pory"
	.string "He lives right next door, so you should\n"
# 332 "data/maps/AcademyView/scripts.pory"
	.string "go over and introduce yourself.$"
# 333 "data/maps/AcademyView/scripts.pory"

# 334 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 335 "data/maps/AcademyView/scripts.pory"
	.string "MOM: See you, honey!$"
# 336 "data/maps/AcademyView/scripts.pory"

# 337 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 338 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 339 "data/maps/AcademyView/scripts.pory"
	.string "PROF. BIRCH?$"
# 340 "data/maps/AcademyView/scripts.pory"

# 341 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 342 "data/maps/AcademyView/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 343 "data/maps/AcademyView/scripts.pory"
	.string "You look a little tired.\p"
# 344 "data/maps/AcademyView/scripts.pory"
	.string "I think you should rest a bit.$"
# 345 "data/maps/AcademyView/scripts.pory"

# 346 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 347 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Take care, honey!$"
# 348 "data/maps/AcademyView/scripts.pory"

# 349 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 350 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 351 "data/maps/AcademyView/scripts.pory"
	.string "Then here's something from your MOM!$"
# 352 "data/maps/AcademyView/scripts.pory"

# 353 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 354 "data/maps/AcademyView/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 355 "data/maps/AcademyView/scripts.pory"
	.string "You can always come home.\p"
# 356 "data/maps/AcademyView/scripts.pory"
	.string "Go for it, honey!$"
# 357 "data/maps/AcademyView/scripts.pory"

# 358 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 359 "data/maps/AcademyView/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 360 "data/maps/AcademyView/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 361 "data/maps/AcademyView/scripts.pory"
	.string "Well, honey, how about registering\n"
# 362 "data/maps/AcademyView/scripts.pory"
	.string "your mom?\p"
# 363 "data/maps/AcademyView/scripts.pory"
	.string "… … …$"
# 364 "data/maps/AcademyView/scripts.pory"

# 365 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 366 "data/maps/AcademyView/scripts.pory"
	.string "Registered MOM\n"
# 367 "data/maps/AcademyView/scripts.pory"
	.string "in the POKéNAV.$"
# 368 "data/maps/AcademyView/scripts.pory"

# 369 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 370 "data/maps/AcademyView/scripts.pory"
	.string "Fugiiiiih!$"
# 371 "data/maps/AcademyView/scripts.pory"

# 372 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 373 "data/maps/AcademyView/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 374 "data/maps/AcademyView/scripts.pory"

# 375 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 376 "data/maps/AcademyView/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 377 "data/maps/AcademyView/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 378 "data/maps/AcademyView/scripts.pory"

# 379 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 380 "data/maps/AcademyView/scripts.pory"
	.string "There is a movie on TV.\p"
# 381 "data/maps/AcademyView/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 382 "data/maps/AcademyView/scripts.pory"
	.string "keyboard.\p"
# 383 "data/maps/AcademyView/scripts.pory"
	.string "Better get going!$"
# 384 "data/maps/AcademyView/scripts.pory"

# 385 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 386 "data/maps/AcademyView/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 387 "data/maps/AcademyView/scripts.pory"
	.string "RUNNING SHOES.\p"
# 388 "data/maps/AcademyView/scripts.pory"
	.string "“Press the B Button to run while\n"
# 389 "data/maps/AcademyView/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 390 "data/maps/AcademyView/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 391 "data/maps/AcademyView/scripts.pory"
	.string "the road running!”$"
# 392 "data/maps/AcademyView/scripts.pory"

# 393 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 394 "data/maps/AcademyView/scripts.pory"
	.string "DAD: Hm?\p"
# 395 "data/maps/AcademyView/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 396 "data/maps/AcademyView/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 397 "data/maps/AcademyView/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 398 "data/maps/AcademyView/scripts.pory"
	.string "That's the impression I get.\n"
# 399 "data/maps/AcademyView/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 400 "data/maps/AcademyView/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 401 "data/maps/AcademyView/scripts.pory"
	.string "This came to you from someone named\l"
# 402 "data/maps/AcademyView/scripts.pory"
	.string "MR. BRINEY.$"
# 403 "data/maps/AcademyView/scripts.pory"

# 404 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 405 "data/maps/AcademyView/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 406 "data/maps/AcademyView/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 407 "data/maps/AcademyView/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 408 "data/maps/AcademyView/scripts.pory"

# 409 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 410 "data/maps/AcademyView/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 411 "data/maps/AcademyView/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 412 "data/maps/AcademyView/scripts.pory"
	.string "while I'm away.$"
# 413 "data/maps/AcademyView/scripts.pory"

# 414 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 415 "data/maps/AcademyView/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 416 "data/maps/AcademyView/scripts.pory"
	.string "He comes home for the first time in a\n"
# 417 "data/maps/AcademyView/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 418 "data/maps/AcademyView/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 419 "data/maps/AcademyView/scripts.pory"

# 420 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 421 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 422 "data/maps/AcademyView/scripts.pory"

# 423 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 424 "data/maps/AcademyView/scripts.pory"
	.string "We bring you this emergency\n"
# 425 "data/maps/AcademyView/scripts.pory"
	.string "news flash!\p"
# 426 "data/maps/AcademyView/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 427 "data/maps/AcademyView/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 428 "data/maps/AcademyView/scripts.pory"
	.string "POKéMON in flight.\p"
# 429 "data/maps/AcademyView/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 430 "data/maps/AcademyView/scripts.pory"
	.string "currently unknown.\p"
# 431 "data/maps/AcademyView/scripts.pory"
	.string "We now return you to the regular\n"
# 432 "data/maps/AcademyView/scripts.pory"
	.string "movie program.$"
# 433 "data/maps/AcademyView/scripts.pory"

# 434 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 435 "data/maps/AcademyView/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 436 "data/maps/AcademyView/scripts.pory"
	.string "What color did the announcer say\n"
# 437 "data/maps/AcademyView/scripts.pory"
	.string "that POKéMON was?$"
# 438 "data/maps/AcademyView/scripts.pory"

# 439 "data/maps/AcademyView/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 440 "data/maps/AcademyView/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 441 "data/maps/AcademyView/scripts.pory"
	.string "There are still unknown POKéMON.$"

Fiona::
# 444 "data/maps/AcademyView/scripts.pory"
	compare VAR_CURRENT_TIME_OF_DAY, 3
	goto_if_gt Fiona_1
# 448 "data/maps/AcademyView/scripts.pory"
	clearflag FLAG_FIONA
	return

Fiona_1:
# 445 "data/maps/AcademyView/scripts.pory"
	setflag FLAG_FIONA
	return

