Luxurawoods_MapScripts::
# 2 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, mewtwofind
	.byte 0


mewtwofind::
# 5 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_eq mewtwofind_1
# 18 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 16
	goto_if_eq mewtwofind_2
# 32 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_eq mewtwofind_3
# 46 "data/maps/Luxurawoods/scripts.pory"
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
	return

mewtwofind_2:
# 19 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 20 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_102_POTION
# 21 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 22 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 23 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 24 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 25 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 26 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 27 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 28 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 29 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 30 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_3:
# 33 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 34 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B2
# 35 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 36 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 37 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 38 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 39 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 40 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 41 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 42 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 43 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 44 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_4:
# 47 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 48 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 49 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 50 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 51 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 52 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 53 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 54 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 55 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 56 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 57 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 58 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
# 59 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 1, 0x371, 0
# 60 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 2, 0x379, 0
# 61 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 3, 0x381, 0
# 62 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 1, 0x372, 0
# 63 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 2, 0x37A, 0
# 64 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 3, 0x382, 0
# 65 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 1, 0x373, 0
# 66 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 2, 0x37B, 0
# 67 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 3, 0x383, 0
	return


mewtwotend::
# 72 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 73 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 74 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 75 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_0
# 76 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 77 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 78 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 79 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mw
# 81 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 83 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 85 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mw
# 86 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 88 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwotend_Text_2
# 89 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_3, MSGBOX_AUTOCLOSE
# 90 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_FAINT
# 91 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 92 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 93 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 94 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_4, MSGBOX_AUTOCLOSE
# 95 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 96 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_5, MSGBOX_AUTOCLOSE
# 97 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 98 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 99 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 101 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_6, MSGBOX_AUTOCLOSE
# 102 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 103 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 104 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 15
	return


nocave::
# 109 "data/maps/Luxurawoods/scripts.pory"
	lock
# 110 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, nol
# 111 "data/maps/Luxurawoods/scripts.pory"
	msgbox nocave_Text_0
# 112 "data/maps/Luxurawoods/scripts.pory"
	release
	return


mewtwotendq::
# 115 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 116 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, thuddd
# 117 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 118 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


mewtwotende::
# 121 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 122 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mq
# 123 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 124 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


# 126 "data/maps/Luxurawoods/scripts.pory"
mq:
# 127 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 127 "data/maps/Luxurawoods/scripts.pory"
	walk_left
	step_end

miradr::
# 130 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 131 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 132 "data/maps/Luxurawoods/scripts.pory"
	msgbox miradr_Text_0, MSGBOX_AUTOCLOSE
# 133 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 135 "data/maps/Luxurawoods/scripts.pory"
nol:
# 136 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewherb::
# 140 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, mewherb_10
mewherb_8:
# 146 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_7
mewherb_5:
# 152 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_4
	return

mewherb_1:
# 141 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 142 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 143 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_2:
# 147 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 148 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 149 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_1, MSGBOX_AUTOCLOSE
# 150 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_3:
# 153 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 154 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 155 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 156 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_4:
# 152 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, mewherb_3
	return

mewherb_7:
# 146 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_2
	goto mewherb_5

mewherb_10:
# 140 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_1
	goto mewherb_8


mewrev::
# 160 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 161 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 162 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 163 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 165 "data/maps/Luxurawoods/scripts.pory"
no:
# 166 "data/maps/Luxurawoods/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/Luxurawoods/scripts.pory"
mw:
# 169 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 169 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 169 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 169 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 169 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

revivalherb::
# 172 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 173 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 174 "data/maps/Luxurawoods/scripts.pory"
	msgbox revivalherb_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/Luxurawoods/scripts.pory"
	finditem ITEM_REVIVAL_HERB, 1
# 176 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 177 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 178 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


revive::
# 184 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, revive_20
revive_16:
# 210 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_15
revive_11:
# 239 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_10
revive_6:
# 267 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_5
	return

revive_1:
# 185 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 186 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_REVIVAL_HERB, 1
# 187 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_26
# 203 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 204 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_3, MSGBOX_AUTOCLOSE
revive_25:
# 206 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_2:
# 211 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 212 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 213 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_30
# 232 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 233 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_9, MSGBOX_AUTOCLOSE
revive_29:
# 235 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_3:
# 240 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 241 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 242 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_10, MSGBOX_AUTOCLOSE
# 243 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 244 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_11, MSGBOX_AUTOCLOSE
# 245 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 246 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_12, MSGBOX_AUTOCLOSE
# 247 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 248 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_PSYBEAM2
# 249 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 250 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_13, MSGBOX_AUTOCLOSE
# 251 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 252 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 253 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_14, MSGBOX_AUTOCLOSE
# 254 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 255 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_15, MSGBOX_AUTOCLOSE
# 256 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 257 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 258 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_16, MSGBOX_AUTOCLOSE
# 259 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 260 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x479
# 262 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 263 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 17
	return

revive_4:
# 268 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 269 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 270 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_17, MSGBOX_AUTOCLOSE
# 271 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_5:
# 267 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_7
	return

revive_7:
# 267 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, revive_4
	return

revive_10:
# 239 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_12
	goto revive_6

revive_12:
# 239 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_3
	goto revive_6

revive_15:
# 210 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_17
	goto revive_11

revive_17:
# 210 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_2
	goto revive_11

revive_20:
# 184 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_22
	goto revive_16

revive_22:
# 184 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_1
	goto revive_16

revive_26:
# 188 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 189 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_REVIVAL_HERB, 1
# 192 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 193 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 194 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 195 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 196 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_1, MSGBOX_AUTOCLOSE
# 197 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 198 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 199 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B0
	goto revive_25

revive_30:
# 214 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 215 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_4, MSGBOX_AUTOCLOSE
# 216 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 217 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 218 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_DP_HEAL
# 219 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 220 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 221 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 222 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_5, MSGBOX_AUTOCLOSE
# 223 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_6, MSGBOX_AUTOCLOSE
# 225 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_7, MSGBOX_AUTOCLOSE
# 226 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 227 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 228 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_8, MSGBOX_AUTOCLOSE
# 229 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B1
	goto revive_29


gruntsded::
# 280 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 281 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, invisible
# 282 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, invisible
# 283 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dd
# 285 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 286 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_0, MSGBOX_AUTOCLOSE
# 287 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 289 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 290 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 291 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 292 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, in
# 293 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
# 294 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 295 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_2, MSGBOX_AUTOCLOSE
# 296 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 297 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_4, MSGBOX_AUTOCLOSE
# 298 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 299 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_5, MSGBOX_AUTOCLOSE
# 301 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 302 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_6, MSGBOX_AUTOCLOSE
# 303 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 304 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 305 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_7, MSGBOX_AUTOCLOSE
# 306 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 307 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_8, MSGBOX_AUTOCLOSE
# 308 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 309 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_9, MSGBOX_AUTOCLOSE
# 310 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 311 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, dds
# 312 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 313 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 314 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_10, MSGBOX_AUTOCLOSE
# 315 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 316 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_11, MSGBOX_AUTOCLOSE
# 317 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 318 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_12, MSGBOX_AUTOCLOSE
# 320 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 321 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_13, MSGBOX_AUTOCLOSE
# 322 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 323 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 324 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_14, MSGBOX_AUTOCLOSE
# 325 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 326 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_15, MSGBOX_AUTOCLOSE
# 327 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 328 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_16, MSGBOX_AUTOCLOSE
# 329 "data/maps/Luxurawoods/scripts.pory"
	removefieldmugshot
# 331 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 332 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_17, MSGBOX_AUTOCLOSE
# 333 "data/maps/Luxurawoods/scripts.pory"
	playse SE_BALL_THROW
# 334 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, visible
# 335 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 336 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_18, MSGBOX_AUTOCLOSE
# 337 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 338 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 339 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 341 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 342 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19, MSGBOX_AUTOCLOSE
# 343 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 344 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 345 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, gruntsded_Movement_0
# 346 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 347 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_20, MSGBOX_AUTOCLOSE
# 348 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, gruntsded_Movement_1
# 349 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 350 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21, MSGBOX_AUTOCLOSE
# 351 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 352 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 353 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 354 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 355 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, gruntsded_Movement_1
# 356 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 357 "data/maps/Luxurawoods/scripts.pory"
	speakername Xylar1
# 358 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_22, MSGBOX_AUTOCLOSE
# 359 "data/maps/Luxurawoods/scripts.pory"
	closemessage
# 360 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 361 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_23, MSGBOX_AUTOCLOSE
# 362 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 363 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_24, MSGBOX_AUTOCLOSE
# 365 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_25
# 366 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_26, MSGBOX_AUTOCLOSE
# 367 "data/maps/Luxurawoods/scripts.pory"
	playbgm MUS_PL_GIRATINA_APPEARS_1, TRUE
# 368 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/Luxurawoods/scripts.pory"
	delay 180
# 370 "data/maps/Luxurawoods/scripts.pory"
	waitbuttonpress
# 371 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, visible
# 372 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 373 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 374 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_27, MSGBOX_AUTOCLOSE
# 375 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 376 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, gruntsded_Movement_2
# 377 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_COSMIC_POWER
# 378 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 379 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_28, MSGBOX_AUTOCLOSE
# 380 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 381 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_29, MSGBOX_AUTOCLOSE
# 382 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 383 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_30, MSGBOX_AUTOCLOSE
# 384 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 385 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 386 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, ee
# 387 "data/maps/Luxurawoods/scripts.pory"
	playse SE_PIN
# 388 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 389 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 390 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 391 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_1
# 392 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_31, MSGBOX_AUTOCLOSE
# 393 "data/maps/Luxurawoods/scripts.pory"
	speakername gruntsded_Text_3
# 394 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_32, MSGBOX_AUTOCLOSE
# 395 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 396 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 397 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_33, MSGBOX_AUTOCLOSE
# 398 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_EXPLOSION
# 400 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 401 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 402 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 403 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 404 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 1, 0x371, 0
# 405 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 2, 0x379, 0
# 406 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 40, 3, 0x381, 0
# 407 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 1, 0x372, 0
# 408 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 2, 0x37A, 0
# 409 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 41, 3, 0x382, 0
# 410 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 1, 0x373, 0
# 411 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 2, 0x37B, 0
# 412 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 42, 3, 0x383, 0
# 413 "data/maps/Luxurawoods/scripts.pory"
	special DrawWholeMapView
# 414 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 416 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, strp
# 417 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 418 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, sss
# 419 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, exclam
# 420 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 421 "data/maps/Luxurawoods/scripts.pory"
	speakername mewtwo
# 422 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_34, MSGBOX_AUTOCLOSE
# 423 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 424 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 425 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 426 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 427 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 428 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 429 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 430 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 18
	return


# 432 "data/maps/Luxurawoods/scripts.pory"
sss:
# 433 "data/maps/Luxurawoods/scripts.pory"
	face_down
	step_end

# 436 "data/maps/Luxurawoods/scripts.pory"
dds:
# 437 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 437 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 438 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 438 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 439 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 441 "data/maps/Luxurawoods/scripts.pory"
ss:
# 442 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 442 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 442 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 442 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 442 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 444 "data/maps/Luxurawoods/scripts.pory"
dd:
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 448 "data/maps/Luxurawoods/scripts.pory"
ee:
# 449 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

gruntded::
# 453 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 454 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rr
# 455 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 456 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


# 458 "data/maps/Luxurawoods/scripts.pory"
rr:
# 459 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 460 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 463 "data/maps/Luxurawoods/scripts.pory"
cm:
# 464 "data/maps/Luxurawoods/scripts.pory"
	walk_right
# 465 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

grut::
# 468 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 469 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cm
# 470 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 471 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


nio::
# 475 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 476 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, csm
# 477 "data/maps/Luxurawoods/scripts.pory"
	msgbox nio_Text_0, MSGBOX_AUTOCLOSE
# 478 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 481 "data/maps/Luxurawoods/scripts.pory"
csm:
# 482 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

portal::
# 487 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 488 "data/maps/Luxurawoods/scripts.pory"
	applymovement 21, portal_Movement_0
# 489 "data/maps/Luxurawoods/scripts.pory"
	msgbox portal_Text_0
# 490 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_BLIZZARD
# 491 "data/maps/Luxurawoods/scripts.pory"
	applymovement 21, portal_Movement_1
# 492 "data/maps/Luxurawoods/scripts.pory"
	msgbox portal_Text_0, MSGBOX_AUTOCLOSE
# 493 "data/maps/Luxurawoods/scripts.pory"
	applymovement 0xFF, portal_Movement_2
# 494 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 495 "data/maps/Luxurawoods/scripts.pory"
	release
	return


# 498 "data/maps/Luxurawoods/scripts.pory"
portal_open:
# 499 "data/maps/Luxurawoods/scripts.pory"
	set_visible
# 500 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 501 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 502 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 503 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 504 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 505 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 505 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 506 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 507 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
	step_end

# 510 "data/maps/Luxurawoods/scripts.pory"
portal_close:
# 511 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 512 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 513 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 513 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 514 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 515 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 516 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 517 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 518 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 519 "data/maps/Luxurawoods/scripts.pory"
	face_down
# 520 "data/maps/Luxurawoods/scripts.pory"
	delay_1
# 521 "data/maps/Luxurawoods/scripts.pory"
	set_invisible
	step_end

# 345 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_0:
# 345 "data/maps/Luxurawoods/scripts.pory"
	emote_question_mark
	step_end

# 348 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_1:
# 348 "data/maps/Luxurawoods/scripts.pory"
	walk_slow_up
	step_end

# 376 "data/maps/Luxurawoods/scripts.pory"
gruntsded_Movement_2:
# 376 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
# 376 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
# 376 "data/maps/Luxurawoods/scripts.pory"
	shake_horizontal
	step_end

# 488 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_0:
# 488 "data/maps/Luxurawoods/scripts.pory"
	set_visible
# 488 "data/maps/Luxurawoods/scripts.pory"
	delay_16
	step_end

# 491 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_1:
# 491 "data/maps/Luxurawoods/scripts.pory"
	face_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	face_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	face_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_up
# 491 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 493 "data/maps/Luxurawoods/scripts.pory"
portal_Movement_2:
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Luxurawoods/scripts.pory"
	walk_in_place_faster_down
	step_end

mewtwotend_Text_0:
# 75 "data/maps/Luxurawoods/scripts.pory"
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
# 83 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?\p"
	.string "That's… a Pokémon?\p"
	.string "It's hurt... badly.$"

mewtwotend_Text_2:
# 88 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"

mewtwotend_Text_3:
# 89 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}………$"

mewtwotend_Text_4:
# 94 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're barely hanging on…\p"
	.string "Don't worry. I won't leave you.$"

mewtwotend_Text_5:
# 96 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't know if you understand me, but...\p"
	.string "I'll save you. No matter what.$"

mewtwotend_Text_6:
# 101 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I've already lost too much…\p"
	.string "I won't let you be another loss.$"

nocave_Text_0:
# 111 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should not go into the cave alone.$"

miradr_Text_0:
# 132 "data/maps/Luxurawoods/scripts.pory"
	.string "No! I have to get away.$"

mewherb_Text_0:
# 143 "data/maps/Luxurawoods/scripts.pory"
	.string "I should search for the herbs.$"

mewherb_Text_1:
# 149 "data/maps/Luxurawoods/scripts.pory"
	.string "I should look for water.$"

mewherb_Text_2:
# 155 "data/maps/Luxurawoods/scripts.pory"
	.string "I can't leave him alone.$"

revivalherb_Text_0:
# 174 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found it... This is it!\p"
	.string "Mira, you were right, these herbs really\n"
	.string "do grow everywhere.$"

revive_Text_0:
# 189 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This herb should help stop the\n"
	.string "bleeding...$"

revive_Text_1:
# 196 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It's working... but not enough.\p"
	.string "You'll need water too.$"

revive_Text_2:
# 199 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there. I'll be back soon.$"

revive_Text_3:
# 204 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The wound's too deep...\p"
	.string "I need herbs, fast.$"

revive_Text_4:
# 215 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found water-hang on.$"

revive_Text_5:
# 222 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}There... that should do.\p"
	.string "You've been through so much... Just a\n"
	.string "little longer.\p"
	.string "We'll get through this together.$"

revive_Text_6:
# 224 "data/maps/Luxurawoods/scripts.pory"
	.string "Xylar continued to tend to the Pokémon\n"
	.string "for several days, hoping it would open\l"
	.string "its eyes...$"

revive_Text_7:
# 225 "data/maps/Luxurawoods/scripts.pory"
	.string "A few days later...$"

revive_Text_8:
# 228 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't... keep going like this.\p"
	.string "How many days has it been since I last\n"
	.string "ate?\p"
	.string "These plants barely keep me standing...\p"
	.string "But he looks stronger than before.$"

revive_Text_9:
# 233 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He needs water... I have to find some.$"

revive_Text_10:
# 242 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Who... are you?$"

revive_Text_11:
# 244 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}(Telepathy...?)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I...\p"
	.string "I found you bleeding, barely alive.\p"
	.string "I couldn't just walk away.$"

revive_Text_12:
# 246 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORM}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Why... would you help me?\p"
	.string "Humans are liars... deceivers...$"

revive_Text_13:
# 250 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo’s psychic power probed Xylar's\n"
	.string "mind...$"

revive_Text_14:
# 253 "data/maps/Luxurawoods/scripts.pory"
	.string "(His memories... pain... loss... yet his\n"
	.string "concern is... real...)$"

revive_Text_15:
# 255 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fainted again...\p"
	.string "That must have drained what little\n"
	.string "strength he had left.\p"
	.string "I should rest too.$"

revive_Text_16:
# 258 "data/maps/Luxurawoods/scripts.pory"
	.string "Zzzzzz...$"

revive_Text_17:
# 270 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He's still recovering...\p"
	.string "I'll need more herbs to keep his\n"
	.string "strength up.$"

gruntsded_Text_0:
# 286 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Good thing I remembered the herbs...\p"
	.string "It's been almost a week since I saw\n"
	.string "Mira.\p"
	.string "She's tough... she has to be okay.$"

gruntsded_Text_1:
# 294 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt M$"

gruntsded_Text_2:
# 295 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Well, well... look who wandered back.$"

gruntsded_Text_3:
# 296 "data/maps/Luxurawoods/scripts.pory"
	.string "Grunt F$"

gruntsded_Text_4:
# 297 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The runaway... all alone this time.$"

gruntsded_Text_5:
# 299 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Rich boy thought he could escape fate.\p"
	.string "But fate has your blood written all over\n"
	.string "it.$"

gruntsded_Text_6:
# 302 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira?! What did you do to her?!$"

gruntsded_Text_7:
# 305 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira...\p"
	.string "Such a brave little fool.$"

gruntsded_Text_8:
# 307 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She fought like hell.\p"
	.string "But in the end... it wasn't the pain that\n"
	.string "broke her.\p"
	.string "It was you.\p"
	.string "She screamed your name before she fell\n"
	.string "silent.$"

gruntsded_Text_9:
# 309 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}STOP LYING!$"

gruntsded_Text_10:
# 314 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lie? Oh no...\p"
	.string "Her last look said it all.\p"
	.string "She realized you'd never save her.\p"
	.string "Just like the others.$"

gruntsded_Text_11:
# 316 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Your father. Your mother. Mira.\p"
	.string "All of them, gone because of you.\p"
	.string "You bring death to everyone who trusts\n"
	.string "you.$"

gruntsded_Text_12:
# 318 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Alone in the dark...\p"
	.string "That's where you belong.$"

gruntsded_Text_13:
# 321 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'LL KILL YOU!\p"
	.string "I'LL KILL EVERY LAST ONE OF YOU!$"

gruntsded_Text_14:
# 324 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Listen to him crack...\p"
	.string "Drowning in guilt already.$"

gruntsded_Text_15:
# 326 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes... give in. Let the guilt eat you\n"
	.string "alive.\p"
	.string "You'll hear their voices soon... calling\n"
	.string "for you in the dark.$"

gruntsded_Text_16:
# 328 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}I SAID SHUT UP!$"

gruntsded_Text_17:
# 332 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They died because of you.\p"
	.string "Now... join them.\p"
	.string "Electrode!$"

gruntsded_Text_18:
# 336 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}End this!\p"
	.string "Electrode, EXPLODE!$"

gruntsded_Text_19:
# 342 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}If Mira died too,……{PAUSE_UNTIL_PRESS} then there is no\n"
	.string "reason to remain kind.\p"
	.string "Yeah I'll just kill all of them or die\n"
	.string "trying.\p"
	.string "Nothing better will happen even if I\n"
	.string "stay kind.\p"
	.string "I'll kill you both…… I'll kill you…… I'll\n"
	.string "kill you.$"

gruntsded_Text_20:
# 347 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What are you whispering?$"

gruntsded_Text_21:
# 350 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}Kill……{PAUSE_UNTIL_PRESS} Kill……$"

gruntsded_Text_22:
# 358 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{FONT_SMALL}I'll Kill…… you all{PAUSE_UNTIL_PRESS}…… then I'll die\n"
	.string "myself……$"

gruntsded_Text_23:
# 361 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What... what's wrong with him?!$"

gruntsded_Text_24:
# 363 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's... completely broken.$"

gruntsded_Text_25:
# 365 "data/maps/Luxurawoods/scripts.pory"
	.string "???$"

gruntsded_Text_26:
# 366 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Enough!$"

gruntsded_Text_27:
# 374 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?!\p"
	.string "Electrode, blow them both apart!$"

gruntsded_Text_28:
# 379 "data/maps/Luxurawoods/scripts.pory"
	.string "Electrode froze in place, trembling\n"
	.string "under psychic power...$"

gruntsded_Text_29:
# 381 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What are you waiting for?! DO IT!$"

gruntsded_Text_30:
# 383 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You know what to do.$"

gruntsded_Text_31:
# 392 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}W-What?! No! What's happening?!$"

gruntsded_Text_32:
# 394 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Stop it, you stupid ball! Listen to us!$"

gruntsded_Text_33:
# 397 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Now.\p"
	.string "Explode.$"

gruntsded_Text_34:
# 422 "data/maps/Luxurawoods/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Let's go, Human.$"

gruntded_Text_0:
# 455 "data/maps/Luxurawoods/scripts.pory"
	.string "I'm glad he's fine.$"

nio_Text_0:
# 477 "data/maps/Luxurawoods/scripts.pory"
	.string "That's not where herbs grow.$"

portal_Text_0:
# 489 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}working?$"

mewtwo::
# 275 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"
