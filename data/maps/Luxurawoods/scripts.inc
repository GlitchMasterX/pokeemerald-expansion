Luxurawoods_MapScripts::
# 2 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, mewtwofind
	.byte 0


mewtwofind::
# 5 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_eq mewtwofind_1
# 20 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 16
	goto_if_eq mewtwofind_2
# 44 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_eq mewtwofind_3
# 68 "data/maps/Luxurawoods/scripts.pory"
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
	removeobject 10
# 12 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 13 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 14 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 15 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 16 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 17 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 18 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
	return

mewtwofind_2:
# 21 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 22 "data/maps/Luxurawoods/scripts.pory"
	addobject 2
# 23 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 24 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 25 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 26 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 27 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 28 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 29 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 30 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
# 31 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 32 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_102_POTION
# 33 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 34 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 35 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 36 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 37 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 38 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 39 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 40 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 41 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 42 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_3:
# 45 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 46 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 47 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 48 "data/maps/Luxurawoods/scripts.pory"
	addobject 4
# 49 "data/maps/Luxurawoods/scripts.pory"
	addobject 5
# 50 "data/maps/Luxurawoods/scripts.pory"
	addobject 6
# 51 "data/maps/Luxurawoods/scripts.pory"
	addobject 10
# 52 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B2
# 53 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 54 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 55 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 56 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 57 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 58 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 59 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 60 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 61 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 62 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 63 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 64 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 65 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 66 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_4:
# 69 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 70 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 71 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 72 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 73 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 74 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 75 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 76 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 77 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 78 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 79 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 80 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 81 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 82 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 83 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 84 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 85 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 86 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 87 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 88 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 89 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 90 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return


mewtwotend::
# 95 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 96 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 97 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 98 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_0
# 99 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 100 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 101 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 102 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mw
# 104 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 106 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 108 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mw
# 109 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 110 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwotend_Text_2
# 112 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_3, MSGBOX_AUTOCLOSE
# 113 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_FAINT
# 114 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 115 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 116 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 117 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_4, MSGBOX_AUTOCLOSE
# 118 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 119 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_5, MSGBOX_AUTOCLOSE
# 120 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 121 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 122 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 124 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_6, MSGBOX_AUTOCLOSE
# 125 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 126 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 127 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 128 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 15
	return


nocave::
# 132 "data/maps/Luxurawoods/scripts.pory"
	lock
# 133 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, nol
# 134 "data/maps/Luxurawoods/scripts.pory"
	msgbox nocave_Text_0
# 135 "data/maps/Luxurawoods/scripts.pory"
	release
	return


mewtwotendq::
# 138 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 139 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, thuddd
# 140 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 141 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


mewtwotende::
# 144 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 145 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mq
# 146 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 147 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


# 149 "data/maps/Luxurawoods/scripts.pory"
mq:
# 150 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 150 "data/maps/Luxurawoods/scripts.pory"
	walk_left
	step_end

miradr::
# 153 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 154 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 155 "data/maps/Luxurawoods/scripts.pory"
	msgbox miradr_Text_0, MSGBOX_AUTOCLOSE
# 156 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 158 "data/maps/Luxurawoods/scripts.pory"
nol:
# 159 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewherb::
# 163 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, mewherb_10
mewherb_8:
# 169 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_7
mewherb_5:
# 175 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_4
	return

mewherb_1:
# 164 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 165 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 166 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_2:
# 170 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 171 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 172 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_1, MSGBOX_AUTOCLOSE
# 173 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_3:
# 176 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 177 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 178 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 179 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_4:
# 175 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, mewherb_3
	return

mewherb_7:
# 169 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_2
	goto mewherb_5

mewherb_10:
# 163 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_1
	goto mewherb_8


mewrev::
# 183 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 184 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 185 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 188 "data/maps/Luxurawoods/scripts.pory"
no:
# 189 "data/maps/Luxurawoods/scripts.pory"
	walk_right
	step_end

# 191 "data/maps/Luxurawoods/scripts.pory"
mw:
# 192 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 192 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 192 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 192 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 192 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

revivalherb::
# 195 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 196 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 197 "data/maps/Luxurawoods/scripts.pory"
	msgbox revivalherb_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/maps/Luxurawoods/scripts.pory"
	finditem ITEM_REVIVAL_HERB, 1
# 199 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 200 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 201 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


revive::
# 207 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, revive_20
revive_16:
# 233 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_15
revive_11:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_10
revive_6:
# 290 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_5
	return

revive_1:
# 208 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 209 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_REVIVAL_HERB, 1
# 210 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_26
# 226 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 227 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_3, MSGBOX_AUTOCLOSE
revive_25:
# 229 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_2:
# 234 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 235 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 236 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_30
# 255 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 256 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_9, MSGBOX_AUTOCLOSE
revive_29:
# 258 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_3:
# 263 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 264 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 265 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_10, MSGBOX_AUTOCLOSE
# 266 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 267 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_11, MSGBOX_AUTOCLOSE
# 268 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 269 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_12, MSGBOX_AUTOCLOSE
# 270 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_WHITE
# 271 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_PSYBEAM2
# 272 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 273 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_13, MSGBOX_AUTOCLOSE
# 274 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 275 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 276 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_14, MSGBOX_AUTOCLOSE
# 277 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 278 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_15, MSGBOX_AUTOCLOSE
# 279 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_WHITE
# 280 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 281 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_16, MSGBOX_AUTOCLOSE
# 282 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 283 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 284 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x479
# 285 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 286 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 17
	return

revive_4:
# 291 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 292 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 293 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_17, MSGBOX_AUTOCLOSE
# 294 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_5:
# 290 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_7
	return

revive_7:
# 290 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, revive_4
	return

revive_10:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_12
	goto revive_6

revive_12:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_3
	goto revive_6

revive_15:
# 233 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_17
	goto revive_11

revive_17:
# 233 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_2
	goto revive_11

revive_20:
# 207 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_22
	goto revive_16

revive_22:
# 207 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_1
	goto revive_16

revive_26:
# 211 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 212 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_0, MSGBOX_AUTOCLOSE
# 213 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_WHITE
# 214 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_REVIVAL_HERB, 1
# 215 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 216 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 217 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 218 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 219 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_1, MSGBOX_AUTOCLOSE
# 220 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 221 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 222 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_2, MSGBOX_AUTOCLOSE
# 223 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B0
	goto revive_25

revive_30:
# 237 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 238 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_4, MSGBOX_AUTOCLOSE
# 239 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_WHITE
# 240 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 241 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 242 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 243 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 244 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 245 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_5, MSGBOX_AUTOCLOSE
# 246 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_WHITE
# 247 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_6, MSGBOX_AUTOCLOSE
# 248 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_7, MSGBOX_AUTOCLOSE
# 249 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 250 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 251 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_8, MSGBOX_AUTOCLOSE
# 252 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B1
	goto revive_29


gruntsded::
# 303 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 304 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, invisible
# 305 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, invisible
# 306 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, invisible
# 307 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, invisible
# 308 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, invisible
# 309 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dd
# 310 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 311 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_0, MSGBOX_AUTOCLOSE
# 312 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 313 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 314 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 315 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 316 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, in
# 317 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 318 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 319 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_2, MSGBOX_AUTOCLOSE
# 320 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 321 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_4, MSGBOX_AUTOCLOSE
# 322 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 323 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_5, MSGBOX_AUTOCLOSE
# 324 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 325 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_6, MSGBOX_AUTOCLOSE
# 326 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 327 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_7, MSGBOX_AUTOCLOSE
# 328 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 329 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 330 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_8, MSGBOX_AUTOCLOSE
# 331 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 332 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_9, MSGBOX_AUTOCLOSE
# 333 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 334 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_10, MSGBOX_AUTOCLOSE
# 335 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 336 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, dds
# 337 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 338 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_11, MSGBOX_AUTOCLOSE
# 339 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 340 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_12, MSGBOX_AUTOCLOSE
# 341 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 342 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_13, MSGBOX_AUTOCLOSE
# 343 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 344 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_14, MSGBOX_AUTOCLOSE
# 345 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 346 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_15, MSGBOX_AUTOCLOSE
# 347 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 348 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 349 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_16, MSGBOX_AUTOCLOSE
# 350 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 351 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_17, MSGBOX_AUTOCLOSE
# 352 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 353 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_18, MSGBOX_AUTOCLOSE
# 354 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 355 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 356 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19, MSGBOX_AUTOCLOSE
# 357 "data/maps/Luxurawoods/scripts.pory"
	playse SE_BALL_THROW
# 358 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, visible
# 359 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 360 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_20, MSGBOX_AUTOCLOSE
# 361 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 362 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21
# 363 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 364 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 365 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_22, MSGBOX_AUTOCLOSE
# 366 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 367 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 368 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 369 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 370 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 371 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_23, MSGBOX_AUTOCLOSE
# 372 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 373 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 374 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_24, MSGBOX_AUTOCLOSE
# 375 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 376 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_25, MSGBOX_AUTOCLOSE
# 377 "data/maps/Luxurawoods/scripts.pory"
	speakername unknown
# 378 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_26, MSGBOX_AUTOCLOSE
# 379 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_PL_GIRATINA_APPEARS_1, TRUE
# 380 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 381 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 382 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, visible
# 383 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 384 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 385 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_27, MSGBOX_AUTOCLOSE
# 386 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 387 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21
# 388 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 389 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_COSMIC_POWER
# 390 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 391 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_28
# 392 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 393 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_29, MSGBOX_AUTOCLOSE
# 394 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 395 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_30, MSGBOX_AUTOCLOSE
# 396 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, ee
# 397 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 398 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 399 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 400 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 401 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_31, MSGBOX_AUTOCLOSE
# 402 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 403 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_32, MSGBOX_AUTOCLOSE
# 404 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 405 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 406 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_33, MSGBOX_AUTOCLOSE
# 407 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 408 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_EXPLOSION
# 409 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 410 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 411 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 412 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 413 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, visible
# 414 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, visible
# 415 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, visible
# 416 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 417 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, strp
# 418 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 419 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, sss
# 420 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, exclam
# 421 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 422 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 423 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_34, MSGBOX_AUTOCLOSE
# 424 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 425 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 426 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 427 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 428 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 429 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 430 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 431 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 18
	return


# 435 "data/maps/Luxurawoods/scripts.pory"
sss:
# 436 "data/maps/Luxurawoods/scripts.pory"
	face_down
	step_end

# 439 "data/maps/Luxurawoods/scripts.pory"
dds:
# 440 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 440 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 440 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 440 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 441 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 441 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 442 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 444 "data/maps/Luxurawoods/scripts.pory"
ss:
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 447 "data/maps/Luxurawoods/scripts.pory"
dd:
# 448 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 451 "data/maps/Luxurawoods/scripts.pory"
ee:
# 452 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

gruntded::
# 456 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 457 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rr
# 458 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 459 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


# 461 "data/maps/Luxurawoods/scripts.pory"
rr:
# 462 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 463 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 466 "data/maps/Luxurawoods/scripts.pory"
cm:
# 467 "data/maps/Luxurawoods/scripts.pory"
	walk_right
# 468 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

grut::
# 471 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 472 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cm
# 473 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 474 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


nio::
# 478 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 479 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, csm
# 480 "data/maps/Luxurawoods/scripts.pory"
	msgbox nio_Text_0, MSGBOX_AUTOCLOSE
# 481 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 484 "data/maps/Luxurawoods/scripts.pory"
csm:
# 485 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewtwotend_Text_0:
# 98 "data/maps/Luxurawoods/scripts.pory"
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
# 106 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?\p"
	.string "That's… a Pokémon?\p"
	.string "It's hurt... badly.$"

mewtwotend_Text_2:
# 111 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"

mewtwotend_Text_3:
# 112 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}………$"

mewtwotend_Text_4:
# 117 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're barely hanging on…\p"
	.string "Don't worry. I won't leave you.$"

mewtwotend_Text_5:
# 119 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't know if you understand me, but...\p"
	.string "I'll save you. No matter what.$"

mewtwotend_Text_6:
# 124 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I've already lost too much…\p"
	.string "I won't let you be another loss.$"

nocave_Text_0:
# 134 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should not go into the cave alone.$"

miradr_Text_0:
# 155 "data/maps/Luxurawoods/scripts.pory"
	.string "No! I have to get away.$"

mewherb_Text_0:
# 166 "data/maps/Luxurawoods/scripts.pory"
	.string "I should search for the herbs.$"

mewherb_Text_1:
# 172 "data/maps/Luxurawoods/scripts.pory"
	.string "I should look for water.$"

mewherb_Text_2:
# 178 "data/maps/Luxurawoods/scripts.pory"
	.string "I can't leave him alone.$"

revivalherb_Text_0:
# 197 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found it... This is it!\p"
	.string "Mira, you were right, these herbs really\n"
	.string "do grow everywhere.$"

revive_Text_0:
# 212 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This herb should help stop the\n"
	.string "bleeding...$"

revive_Text_1:
# 219 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It's working... but not enough.\p"
	.string "You'll need water too.$"

revive_Text_2:
# 222 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there. I'll be back soon.$"

revive_Text_3:
# 227 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The wound's too deep...\p"
	.string "I need herbs, fast.$"

revive_Text_4:
# 238 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found water-hang on.$"

revive_Text_5:
# 245 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There... that should do.\p"
	.string "You've been through so much... Just a\n"
	.string "little longer.\p"
	.string "We'll get through this together.$"

revive_Text_6:
# 247 "data/maps/Luxurawoods/scripts.pory"
	.string "Xylar continued to tend to the Pokémon\n"
	.string "for several days, hoping it would open\l"
	.string "its eyes...$"

revive_Text_7:
# 248 "data/maps/Luxurawoods/scripts.pory"
	.string "A few days later...$"

revive_Text_8:
# 251 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't... keep going like this.\p"
	.string "How many days has it been since I last\n"
	.string "ate?\p"
	.string "These plants barely keep me standing...\p"
	.string "But he looks stronger than before.$"

revive_Text_9:
# 256 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He needs water... I have to find some.$"

revive_Text_10:
# 265 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Who... are you?$"

revive_Text_11:
# 267 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}(Telepathy...?)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I...\p"
	.string "I found you bleeding, barely alive.\p"
	.string "I couldn't just walk away.$"

revive_Text_12:
# 269 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Why... would you help me?\p"
	.string "Humans are liars... deceivers...$"

revive_Text_13:
# 273 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo's psychic power probed Xylar's\n"
	.string "mind...$"

revive_Text_14:
# 276 "data/maps/Luxurawoods/scripts.pory"
	.string "(His memories... pain... loss... yet his\n"
	.string "concern is... real...)$"

revive_Text_15:
# 278 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fainted again...\p"
	.string "That must have drained what little\n"
	.string "strength he had left.\p"
	.string "I should rest too.$"

revive_Text_16:
# 281 "data/maps/Luxurawoods/scripts.pory"
	.string "Zzzzzz...$"

revive_Text_17:
# 293 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He's still recovering...\p"
	.string "I'll need more herbs to keep his\n"
	.string "strength up.$"

gruntsded_Text_0:
# 311 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}It's a relief i remembered about the\n"
	.string "herbs.\p"
	.string "I'm worried about Mira, It's been almost\n"
	.string "a week.\p"
	.string "I hope she is okay.$"

gruntsded_Text_1:
# 318 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt M$"

gruntsded_Text_2:
# 319 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look who we have here...$"

gruntsded_Text_3:
# 320 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt F$"

gruntsded_Text_4:
# 321 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The little runaway.\p"
	.string "And all alone this time...$"

gruntsded_Text_5:
# 323 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Poor little rich boy... you think you can\n"
	.string "run? Think you can hide? No, no, no...\l"
	.string "your fate is written, carved in the same\l"
	.string "blood as your family's.$"

gruntsded_Text_6:
# 325 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at him... so lost, so angry.\p"
	.string "We can almost taste it, can't we?$"

gruntsded_Text_7:
# 327 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira? What did you do to her?$"

gruntsded_Text_8:
# 330 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira... such a sweet girl.\p"
	.string "Brave.\p"
	.string "Too brave for her own good.$"

gruntsded_Text_9:
# 332 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She fought so hard.\p"
	.string "But do you know what broke her? It\n"
	.string "wasn't the pain\p"
	.string "...\p"
	.string "It was You.\p"
	.string "Her hope in you... shattered like glass.\n"
	.string "She screamed for you, right before we\l"
	.string "made her...\p"
	.string "Disappear.$"

gruntsded_Text_10:
# 334 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop... stop lying!$"

gruntsded_Text_11:
# 338 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lie? Why would we lie? It was beautiful.\p"
	.string "The way her eyes widened when she\n"
	.string "realized... you weren't coming.\p"
	.string "You couldn't save her, just like you\n"
	.string "couldn't save anyone!$"

gruntsded_Text_12:
# 340 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think this all started today? Oh,\n"
	.string "no... it's always been you, Xylar. Your\l"
	.string "weakness... your failure. They're dead\l"
	.string "because of you.$"

gruntsded_Text_13:
# 342 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your father... your mother... Mira... They\n"
	.string "all died... waiting for you.$"

gruntsded_Text_14:
# 344 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You couldn't save her. You couldn't save\n"
	.string "any of them.\p"
	.string "And now you're alone... Just like you\n"
	.string "were always meant to be.\p"
	.string "Alone in the dark, where no one will hear\n"
	.string "you scream.$"

gruntsded_Text_15:
# 346 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll kill you! I'll fucking kill you all!$"

gruntsded_Text_16:
# 349 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Kill us?\p"
	.string "You?\p"
	.string "You can't even save yourself! You're\n"
	.string "drowning in your own guilt.\p"
	.string "And the deeper you sink, the closer you\n"
	.string "get to her... to all of them, waiting for\l"
	.string "you in the dark.$"

gruntsded_Text_17:
# 351 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, join them! Let the guilt consume\n"
	.string "you. Soon... you'll hear their voices too,\l"
	.string "whispering your name. Waiting for you to\l"
	.string "fall... just like them.$"

gruntsded_Text_18:
# 353 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I SAID SHUT UP!$"

gruntsded_Text_19:
# 356 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They died because of you. And now...\n"
	.string "you'll join them.\p"
	.string "Let's see how strong you really are\n"
	.string "when you can't even save yourself.\p"
	.string "Electrode!$"

gruntsded_Text_20:
# 360 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's end this...\p"
	.string "Electrode, EXPLODE!$"

gruntsded_Text_21:
# 362 "data/maps/Luxurawoods/scripts.pory"
	.string "Bzzz$"

gruntsded_Text_22:
# 365 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}HAHAHAHAHAHAHA!$"

gruntsded_Text_23:
# 371 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What... what the hell is wrong with you?$"

gruntsded_Text_24:
# 374 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}You think I couldn't save her? You\n"
	.string "think it's over? It's never over!\p"
	.string "I'LL TEAR THIS WORLD APART! RIP EVERY\n"
	.string "ONE OF YOU TO SHREDS!\p"
	.string "YOU'RE DEAD! DEAD! DEAD!\p"
	.string "I'LL KILL EVERY LAST ONE OF YOU! I'LL\n"
	.string "MAKE YOU FEEL EVERYTHING I'VE FELT!\l"
	.string "YOU HEAR ME?!$"

gruntsded_Text_25:
# 376 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's... he's broken.$"

gruntsded_Text_26:
# 378 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This ends now!$"

gruntsded_Text_27:
# 385 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the...\p"
	.string "Electrode finish both of them.\p"
	.string "Use Explosion!$"

gruntsded_Text_28:
# 391 "data/maps/Luxurawoods/scripts.pory"
	.string "Electrode, frozen mid-charge, begins to\n"
	.string "tremble under Mewtwo's control.$"

gruntsded_Text_29:
# 393 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Do something you stupid ball.$"

gruntsded_Text_30:
# 395 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You know what to do.$"

gruntsded_Text_31:
# 401 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}W-What?! No! What's happening?!$"

gruntsded_Text_32:
# 403 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Stop it, you stupid ball! Listen to us!$"

gruntsded_Text_33:
# 406 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Now...\p"
	.string "Explode.$"

gruntsded_Text_34:
# 423 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Let's go, Human.$"

gruntded_Text_0:
# 458 "data/maps/Luxurawoods/scripts.pory"
	.string "I'm glad he's fine.$"

nio_Text_0:
# 480 "data/maps/Luxurawoods/scripts.pory"
	.string "That's not where herbs grow.$"

mewtwo::
# 298 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"
