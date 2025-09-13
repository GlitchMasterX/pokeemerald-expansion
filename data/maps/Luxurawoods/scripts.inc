Luxurawoods_MapScripts::
# 2 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, mewtwofind
	.byte 0


mewtwofind::
# 5 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_eq mewtwofind_1
# 27 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 16
	goto_if_eq mewtwofind_2
# 41 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_eq mewtwofind_3
# 55 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_gt mewtwofind_4
	return

mewtwofind_1:
# 6 "data/maps/Luxurawoods/scripts.pory"
	addobject 1
# 7 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4AF
# 8 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 9 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 10 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 11 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 12 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 13 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 14 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 15 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 16 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 17 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 18 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 19 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 20 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 21 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 22 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 23 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 24 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 25 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_2:
# 28 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 29 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_102_POTION
# 30 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 31 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 32 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 33 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 34 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 35 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 36 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 37 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 38 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 39 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_3:
# 42 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 43 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B2
# 44 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 45 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 46 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 47 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 48 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 49 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 50 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 51 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 52 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 53 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_4:
# 56 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 57 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 58 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 59 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 60 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 61 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 62 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 63 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 64 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 65 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 66 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 67 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
# 68 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 1, 0x371, 0
# 69 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 2, 0x379, 0
# 70 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 3, 0x381, 0
# 71 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 1, 0x372, 0
# 72 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 2, 0x37A, 0
# 73 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 3, 0x382, 0
# 74 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 1, 0x373, 0
# 75 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 2, 0x37B, 0
# 76 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 3, 0x383, 0
	return


mewtwotend::
# 81 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 82 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 83 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 84 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_0
# 85 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 86 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 87 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 88 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 89 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mw
# 90 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 92 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_1, MSGBOX_AUTOCLOSE
# 93 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 94 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mw
# 95 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwotend_Text_2
# 98 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_3, MSGBOX_AUTOCLOSE
# 99 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_FAINT
# 100 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 101 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 102 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 103 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_4, MSGBOX_AUTOCLOSE
# 104 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 105 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_5, MSGBOX_AUTOCLOSE
# 106 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 107 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 108 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 110 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_6, MSGBOX_AUTOCLOSE
# 111 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 112 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 113 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 114 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 15
	return


nocave::
# 118 "data/maps/Luxurawoods/scripts.pory"
	lock
# 119 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, nol
# 120 "data/maps/Luxurawoods/scripts.pory"
	msgbox nocave_Text_0
# 121 "data/maps/Luxurawoods/scripts.pory"
	release
	return


mewtwotendq::
# 124 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 125 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, thuddd
# 126 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 127 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


mewtwotende::
# 130 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 131 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mq
# 132 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 133 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


# 135 "data/maps/Luxurawoods/scripts.pory"
mq:
# 136 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 136 "data/maps/Luxurawoods/scripts.pory"
	walk_left
	step_end

miradr::
# 139 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 140 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 141 "data/maps/Luxurawoods/scripts.pory"
	msgbox miradr_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 144 "data/maps/Luxurawoods/scripts.pory"
nol:
# 145 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewherb::
# 149 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, mewherb_10
mewherb_8:
# 155 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_7
mewherb_5:
# 161 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_4
	return

mewherb_1:
# 150 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 151 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 152 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_2:
# 156 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 157 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 158 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_3:
# 162 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 163 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 164 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_4:
# 161 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, mewherb_3
	return

mewherb_7:
# 155 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_2
	goto mewherb_5

mewherb_10:
# 149 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_1
	goto mewherb_8


mewrev::
# 169 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 170 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 171 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 172 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 174 "data/maps/Luxurawoods/scripts.pory"
no:
# 175 "data/maps/Luxurawoods/scripts.pory"
	walk_right
	step_end

# 177 "data/maps/Luxurawoods/scripts.pory"
mw:
# 178 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 178 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 178 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 178 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 178 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

revivalherb::
# 181 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 182 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 183 "data/maps/Luxurawoods/scripts.pory"
	msgbox revivalherb_Text_0, MSGBOX_AUTOCLOSE
# 184 "data/maps/Luxurawoods/scripts.pory"
	finditem ITEM_REVIVAL_HERB, 1
# 185 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 186 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 187 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


revive::
# 193 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, revive_20
revive_16:
# 219 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_15
revive_11:
# 248 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_10
revive_6:
# 276 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_5
	return

revive_1:
# 194 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 195 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_REVIVAL_HERB, 1
# 196 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_26
# 212 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 213 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_3, MSGBOX_AUTOCLOSE
revive_25:
# 215 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_2:
# 220 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 221 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 222 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_30
# 241 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 242 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_9, MSGBOX_AUTOCLOSE
revive_29:
# 244 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_3:
# 249 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 250 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 251 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_10, MSGBOX_AUTOCLOSE
# 252 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 253 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_11, MSGBOX_AUTOCLOSE
# 254 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 255 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_12, MSGBOX_AUTOCLOSE
# 256 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 257 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_PSYBEAM2
# 258 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 259 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_13, MSGBOX_AUTOCLOSE
# 260 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 262 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_14, MSGBOX_AUTOCLOSE
# 263 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 264 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_15, MSGBOX_AUTOCLOSE
# 265 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 267 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_16, MSGBOX_AUTOCLOSE
# 268 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 269 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 270 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x479
# 271 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 272 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 17
	return

revive_4:
# 277 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 278 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 279 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_17, MSGBOX_AUTOCLOSE
# 280 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_5:
# 276 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_7
	return

revive_7:
# 276 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, revive_4
	return

revive_10:
# 248 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_12
	goto revive_6

revive_12:
# 248 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_3
	goto revive_6

revive_15:
# 219 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_17
	goto revive_11

revive_17:
# 219 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_2
	goto revive_11

revive_20:
# 193 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_22
	goto revive_16

revive_22:
# 193 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_1
	goto revive_16

revive_26:
# 197 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 198 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_0, MSGBOX_AUTOCLOSE
# 199 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_REVIVAL_HERB, 1
# 201 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 202 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 203 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 204 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 205 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_1, MSGBOX_AUTOCLOSE
# 206 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 207 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 208 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_2, MSGBOX_AUTOCLOSE
# 209 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B0
	goto revive_25

revive_30:
# 223 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 224 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_4, MSGBOX_AUTOCLOSE
# 225 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 227 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 228 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 229 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 230 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 231 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_5, MSGBOX_AUTOCLOSE
# 232 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_6, MSGBOX_AUTOCLOSE
# 234 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_7, MSGBOX_AUTOCLOSE
# 235 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 236 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 237 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_8, MSGBOX_AUTOCLOSE
# 238 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B1
	goto revive_29


gruntsded::
# 289 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 290 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, invisible
# 291 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, invisible
# 292 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dd
# 294 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 295 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_0, MSGBOX_AUTOCLOSE
# 296 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 298 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 299 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 300 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 301 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, in
# 302 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 303 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 304 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_2, MSGBOX_AUTOCLOSE
# 305 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 306 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_4, MSGBOX_AUTOCLOSE
# 307 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 308 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_5, MSGBOX_AUTOCLOSE
# 310 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 311 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_6, MSGBOX_AUTOCLOSE
# 312 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 313 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 314 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_7, MSGBOX_AUTOCLOSE
# 315 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 316 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_8, MSGBOX_AUTOCLOSE
# 317 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 318 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_9, MSGBOX_AUTOCLOSE
# 319 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 320 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, dds
# 321 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 322 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 323 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_10, MSGBOX_AUTOCLOSE
# 324 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 325 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_11, MSGBOX_AUTOCLOSE
# 326 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 327 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_12, MSGBOX_AUTOCLOSE
# 329 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 330 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_13, MSGBOX_AUTOCLOSE
# 331 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 332 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 333 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_14, MSGBOX_AUTOCLOSE
# 334 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 335 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_15, MSGBOX_AUTOCLOSE
# 336 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 337 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_16, MSGBOX_AUTOCLOSE
# 338 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 340 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 341 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_17, MSGBOX_AUTOCLOSE
# 342 "data/maps/Luxurawoods/scripts.pory"
	playse SE_BALL_THROW
# 343 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, visible
# 344 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 345 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_18, MSGBOX_AUTOCLOSE
# 346 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 347 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 349 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 350 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19, MSGBOX_AUTOCLOSE
# 351 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 352 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 353 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, gruntsded_Movement_0
# 354 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 355 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_20, MSGBOX_AUTOCLOSE
# 356 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, gruntsded_Movement_1
# 357 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 358 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21, MSGBOX_AUTOCLOSE
# 359 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 360 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 361 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 362 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 363 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, gruntsded_Movement_1
# 364 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 365 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 366 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_22, MSGBOX_AUTOCLOSE
# 367 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 368 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 369 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 370 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_23, MSGBOX_AUTOCLOSE
# 371 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 372 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_24, MSGBOX_AUTOCLOSE
# 374 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_25
# 375 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_26, MSGBOX_AUTOCLOSE
# 376 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_PL_GIRATINA_APPEARS_1, TRUE
# 377 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 378 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 379 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, visible
# 380 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 381 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 382 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_27, MSGBOX_AUTOCLOSE
# 383 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 384 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, gruntsded_Movement_2
# 385 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_COSMIC_POWER
# 386 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 387 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_28, MSGBOX_AUTOCLOSE
# 388 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 389 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_29, MSGBOX_AUTOCLOSE
# 390 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 391 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_30, MSGBOX_AUTOCLOSE
# 392 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 393 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 394 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, ee
# 395 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 396 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 397 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 398 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 399 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 400 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_31, MSGBOX_AUTOCLOSE
# 401 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 402 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_32, MSGBOX_AUTOCLOSE
# 403 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 404 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 405 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_33, MSGBOX_AUTOCLOSE
# 406 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 407 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_EXPLOSION
# 408 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 409 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 410 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 411 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 412 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 1, 0x371, 0
# 413 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 2, 0x379, 0
# 414 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 3, 0x381, 0
# 415 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 1, 0x372, 0
# 416 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 2, 0x37A, 0
# 417 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 3, 0x382, 0
# 418 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 1, 0x373, 0
# 419 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 2, 0x37B, 0
# 420 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 3, 0x383, 0
# 421 "data/maps/Luxurawoods/scripts.pory"
	special DrawWholeMapView
# 422 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 424 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, strp
# 425 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 426 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, sss
# 427 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, exclam
# 428 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 429 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 430 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_34, MSGBOX_AUTOCLOSE
# 431 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 432 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 433 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 434 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 435 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 436 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 437 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 438 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 18
	return


# 440 "data/maps/Luxurawoods/scripts.pory"
sss:
# 441 "data/maps/Luxurawoods/scripts.pory"
	face_down
	step_end

# 444 "data/maps/Luxurawoods/scripts.pory"
dds:
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 446 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 446 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 447 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 449 "data/maps/Luxurawoods/scripts.pory"
ss:
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 452 "data/maps/Luxurawoods/scripts.pory"
dd:
# 453 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 456 "data/maps/Luxurawoods/scripts.pory"
ee:
# 457 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

gruntded::
# 461 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 462 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rr
# 463 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 464 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


# 466 "data/maps/Luxurawoods/scripts.pory"
rr:
# 467 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 468 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 471 "data/maps/Luxurawoods/scripts.pory"
cm:
# 472 "data/maps/Luxurawoods/scripts.pory"
	walk_right
# 473 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

grut::
# 476 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 477 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cm
# 478 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 479 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


nio::
# 483 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 484 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, csm
# 485 "data/maps/Luxurawoods/scripts.pory"
	msgbox nio_Text_0, MSGBOX_AUTOCLOSE
# 486 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 489 "data/maps/Luxurawoods/scripts.pory"
csm:
# 490 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

portal::
# 495 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 496 "data/maps/Luxurawoods/scripts.pory"
	applymovement 21, portal_Movement_0
# 497 "data/maps/Luxurawoods/scripts.pory"
	msgbox portal_Text_0
# 498 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_BLIZZARD
# 499 "data/maps/Luxurawoods/scripts.pory"
	applymovement 21, portal_Movement_1
# 500 "data/maps/Luxurawoods/scripts.pory"
	msgbox portal_Text_0, MSGBOX_AUTOCLOSE
# 501 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, portal_Movement_2
# 502 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 503 "data/maps/Luxurawoods/scripts.pory"
	release
	return


# 506 "data/maps/Luxurawoods/scripts.pory"
portal_open:
# 507 "data/maps/Luxurawoods/scripts.pory"
	set_visible
# 508 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 509 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 510 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 511 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 512 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 513 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 513 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 514 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 515 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
	step_end

# 518 "data/maps/Luxurawoods/scripts.pory"
portal_close:
# 519 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 521 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 521 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 522 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 523 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 524 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 525 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 526 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 527 "data/maps/Luxurawoods/scripts.pory"
	face_down
# 528 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 529 "data/maps/Luxurawoods/scripts.pory"
	set_invisible
	step_end

# 353 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_0:
# 353 "data/maps/Luxurawoods/scripts.pory"
	emote_question_mark
	step_end

# 356 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_1:
# 356 "data/maps/Luxurawoods/scripts.pory"
	walk_slow_up
	step_end

# 384 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_2:
# 384 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
# 384 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
# 384 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
	step_end

# 496 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_0:
# 496 "data/maps/Luxurawoods/scripts.pory"
	set_visible
# 496 "data/maps/Luxurawoods/scripts.pory"
	delay_16
	step_end

# 499 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_1:
# 499 "data/maps/Luxurawoods/scripts.pory"
	face_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 499 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 501 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_2:
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
	step_end

mewtwotend_Text_0:
# 84 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira... where are you?\p"
	.string "You said you'd catch up… Did something\n"
	.string "happen?\p"
	.string "No. She's strong. She can handle\n"
	.string "herself.\p"
	.string "...Right?\p"
	.string "I can't stop now. She told me to run.\n"
	.string "She'll be fine.\p"
	.string "She has to be fine.$"

mewtwotend_Text_1:
# 92 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?\p"
	.string "That's… a Pokémon?\p"
	.string "It's hurt... badly.$"

mewtwotend_Text_2:
# 97 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"

mewtwotend_Text_3:
# 98 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}………$"

mewtwotend_Text_4:
# 103 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're barely hanging on…\p"
	.string "Don't worry. I won't leave you.$"

mewtwotend_Text_5:
# 105 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't know if you understand me, but...\p"
	.string "I'll save you. No matter what.$"

mewtwotend_Text_6:
# 110 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I've already lost too much…\p"
	.string "I won't let you be another loss.$"

nocave_Text_0:
# 120 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should not go into the cave alone.$"

miradr_Text_0:
# 141 "data/maps/Luxurawoods/scripts.pory"
	.string "No! I have to get away.$"

mewherb_Text_0:
# 152 "data/maps/Luxurawoods/scripts.pory"
	.string "I should search for the herbs.$"

mewherb_Text_1:
# 158 "data/maps/Luxurawoods/scripts.pory"
	.string "I should look for water.$"

mewherb_Text_2:
# 164 "data/maps/Luxurawoods/scripts.pory"
	.string "I can't leave him alone.$"

revivalherb_Text_0:
# 183 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found it... This is it!\p"
	.string "Mira, you were right, these herbs really\n"
	.string "do grow everywhere.$"

revive_Text_0:
# 198 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This herb should help stop the\n"
	.string "bleeding...$"

revive_Text_1:
# 205 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It's working... but not enough.\p"
	.string "You'll need water too.$"

revive_Text_2:
# 208 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there. I'll be back soon.$"

revive_Text_3:
# 213 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The wound's too deep...\p"
	.string "I need herbs, fast.$"

revive_Text_4:
# 224 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found water-hang on.$"

revive_Text_5:
# 231 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There... that should do.\p"
	.string "You've been through so much... Just a\n"
	.string "little longer.\p"
	.string "We'll get through this together.$"

revive_Text_6:
# 233 "data/maps/Luxurawoods/scripts.pory"
	.string "Xylar continued to tend to the Pokémon\n"
	.string "for several days, hoping it would open\l"
	.string "its eyes...$"

revive_Text_7:
# 234 "data/maps/Luxurawoods/scripts.pory"
	.string "A few days later...$"

revive_Text_8:
# 237 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't... keep going like this.\p"
	.string "How many days has it been since I last\n"
	.string "ate?\p"
	.string "These plants barely keep me standing...\p"
	.string "But he looks stronger than before.$"

revive_Text_9:
# 242 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He needs water... I have to find some.$"

revive_Text_10:
# 251 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Who... are you?$"

revive_Text_11:
# 253 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}(Telepathy...?)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I...\p"
	.string "I found you bleeding, barely alive.\p"
	.string "I couldn't just walk away.$"

revive_Text_12:
# 255 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Why... would you help me?\p"
	.string "Humans are liars... deceivers...$"

revive_Text_13:
# 259 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo’s psychic power probed Xylar's\n"
	.string "mind...$"

revive_Text_14:
# 262 "data/maps/Luxurawoods/scripts.pory"
	.string "(His memories... pain... loss... yet his\n"
	.string "concern is... real...)$"

revive_Text_15:
# 264 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fainted again...\p"
	.string "That must have drained what little\n"
	.string "strength he had left.\p"
	.string "I should rest too.$"

revive_Text_16:
# 267 "data/maps/Luxurawoods/scripts.pory"
	.string "Zzzzzz...$"

revive_Text_17:
# 279 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He's still recovering...\p"
	.string "I'll need more herbs to keep his\n"
	.string "strength up.$"

gruntsded_Text_0:
# 295 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good thing I remembered the herbs...\p"
	.string "It's been almost a week since I saw\n"
	.string "Mira.\p"
	.string "She's tough... she has to be okay.$"

gruntsded_Text_1:
# 303 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt M$"

gruntsded_Text_2:
# 304 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well... look who wandered back.$"

gruntsded_Text_3:
# 305 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt F$"

gruntsded_Text_4:
# 306 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The runaway... all alone this time.$"

gruntsded_Text_5:
# 308 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Rich boy thought he could escape fate.\p"
	.string "But fate has your blood written all over\n"
	.string "it.$"

gruntsded_Text_6:
# 311 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira?! What did you do to her?!$"

gruntsded_Text_7:
# 314 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira...\p"
	.string "Such a brave little fool.$"

gruntsded_Text_8:
# 316 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She fought like hell.\p"
	.string "But in the end... it wasn't the pain that\n"
	.string "broke her.\p"
	.string "It was you.\p"
	.string "She screamed your name before she fell\n"
	.string "silent.$"

gruntsded_Text_9:
# 318 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}STOP LYING!$"

gruntsded_Text_10:
# 323 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lie? Oh no...\p"
	.string "Her last look said it all.\p"
	.string "She realized you'd never save her.\p"
	.string "Just like the others.$"

gruntsded_Text_11:
# 325 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Your father. Your mother. Mira.\p"
	.string "All of them, gone because of you.\p"
	.string "You bring death to everyone who trusts\n"
	.string "you.$"

gruntsded_Text_12:
# 327 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Alone in the dark...\p"
	.string "That's where you belong.$"

gruntsded_Text_13:
# 330 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'LL KILL YOU!\p"
	.string "I'LL KILL EVERY LAST ONE OF YOU!$"

gruntsded_Text_14:
# 333 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Listen to him crack...\p"
	.string "Drowning in guilt already.$"

gruntsded_Text_15:
# 335 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes... give in. Let the guilt eat you\n"
	.string "alive.\p"
	.string "You'll hear their voices soon... calling\n"
	.string "for you in the dark.$"

gruntsded_Text_16:
# 337 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I SAID SHUT UP!$"

gruntsded_Text_17:
# 341 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They died because of you.\p"
	.string "Now... join them.\p"
	.string "Electrode!$"

gruntsded_Text_18:
# 345 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}End this!\p"
	.string "Electrode, EXPLODE!$"

gruntsded_Text_19:
# 350 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}If Mira is dead,……{PAUSE_UNTIL_PRESS} then there is no\n"
	.string "reason to remain kind.\p"
	.string "Yeah I'll just kill all of them or die\n"
	.string "trying.\p"
	.string "Nothing better will happen even if I\n"
	.string "stay kind.\p"
	.string "I'll kill you both…… I'll kill you…… I'll\n"
	.string "kill you.$"

gruntsded_Text_20:
# 355 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What are you whispering?$"

gruntsded_Text_21:
# 358 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}Kill……{PAUSE_UNTIL_PRESS} Kill……$"

gruntsded_Text_22:
# 366 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}Kill…… all{PAUSE_UNTIL_PRESS}…… then I'll die myself……$"

gruntsded_Text_23:
# 370 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What... what's wrong with him?!$"

gruntsded_Text_24:
# 372 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's... completely broken.$"

gruntsded_Text_25:
# 374 "data/maps/Luxurawoods/scripts.pory"
	.string "???$"

gruntsded_Text_26:
# 375 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Enough!$"

gruntsded_Text_27:
# 382 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?!\p"
	.string "Electrode, blow them both apart!$"

gruntsded_Text_28:
# 387 "data/maps/Luxurawoods/scripts.pory"
	.string "Electrode froze in place, trembling\n"
	.string "under psychic power...$"

gruntsded_Text_29:
# 389 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What are you waiting for?! DO IT!$"

gruntsded_Text_30:
# 391 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You know what to do.$"

gruntsded_Text_31:
# 400 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}W-What?! No! What's happening?!$"

gruntsded_Text_32:
# 402 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Stop it, you stupid ball! Listen to us!$"

gruntsded_Text_33:
# 405 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Now.\p"
	.string "Explode.$"

gruntsded_Text_34:
# 430 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Let's go, Human.$"

gruntded_Text_0:
# 463 "data/maps/Luxurawoods/scripts.pory"
	.string "I'm glad he's fine.$"

nio_Text_0:
# 485 "data/maps/Luxurawoods/scripts.pory"
	.string "That's not where herbs grow.$"

portal_Text_0:
# 497 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}working?$"

mewtwo::
# 284 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"
