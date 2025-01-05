# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Luxurawork/scripts.pory"

# 6 "data/maps/Luxurawork/scripts.pory"
	.byte 0
# 7 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 11, trage
# 9 "data/maps/Luxurawork/scripts.pory"
.2byte 0

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 12 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 31 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 49 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 14 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 15 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 16 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 17 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 18 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 19 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 20 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 21 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 22 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 23 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 24 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 25 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 26 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 27 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 28 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 29 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 32 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 33 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 34 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 35 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 36 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 37 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 38 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 39 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 40 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 41 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 42 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 43 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 44 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 45 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 46 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 47 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 48 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 50 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 51 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 52 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 53 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 54 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 55 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 56 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 57 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 58 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 59 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 60 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 61 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 62 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 63 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 64 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 65 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 66 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 67 "data/maps/Luxurawork/scripts.pory"
	addobject 18
# 68 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 69 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 70 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 71 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 31 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 77 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 115 "data/maps/Luxurawork/scripts.pory"
	lockall
# 116 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 117 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 118 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 119 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 120 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 78 "data/maps/Luxurawork/scripts.pory"
	lockall
# 79 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 80 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 81 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 82 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 83 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 84 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 85 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 86 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 87 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 88 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 89 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 90 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 91 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 92 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 93 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 94 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 95 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 96 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 97 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 98 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 99 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 100 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 101 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 102 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 103 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 104 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 105 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 106 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 107 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 108 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 109 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 110 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 111 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 112 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 113 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 123 "data/maps/Luxurawork/scripts.pory"
exclam:
# 124 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 128 "data/maps/Luxurawork/scripts.pory"
	lockall
# 129 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, players
# 130 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 131 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 132 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 133 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 134 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 135 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 136 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 138 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 139 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 140 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1, MSGBOX_AUTOCLOSE
# 141 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 142 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 143 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 144 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 145 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 146 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 147 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 148 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 149 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, finish
# 150 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 151 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 152 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 153 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 154 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 155 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 156 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, atk
# 157 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 158 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, faint
# 159 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 160 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 161 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 162 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 163 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 164 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 165 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 166 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2, MSGBOX_AUTOCLOSE
# 167 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 168 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 169 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3, MSGBOX_AUTOCLOSE
# 170 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 171 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 172 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 173 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, run
# 174 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 175 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 176 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 177 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 178 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, visible
# 179 "data/maps/Luxurawork/scripts.pory"
	applymovement 18, invisible
# 180 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 181 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 182 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, exclam
# 183 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 184 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 185 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 186 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 187 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, ded
# 188 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 189 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6, MSGBOX_AUTOCLOSE
# 190 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 191 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 192 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 193 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 194 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, revert
# 195 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, reverte
# 196 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 197 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 198 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 199 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 200 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 201 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 202 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 203 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 204 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 205 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 206 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 207 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 208 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 209 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 210 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 211 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 212 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 213 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 214 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 215 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 216 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 217 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 218 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 219 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 220 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 221 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12, MSGBOX_AUTOCLOSE
# 222 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 223 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 224 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 225 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 226 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 227 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 228 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 229 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 230 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 231 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, capture
# 232 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 233 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 234 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 235 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 236 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 237 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 238 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 239 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 242 "data/maps/Luxurawork/scripts.pory"
capture:
# 243 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 243 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 253 "data/maps/Luxurawork/scripts.pory"
back:
# 254 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 254 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 254 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 254 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/Luxurawork/scripts.pory"
reverte:
# 257 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 258 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 259 "data/maps/Luxurawork/scripts.pory"
	face_up
# 260 "data/maps/Luxurawork/scripts.pory"
	face_left
# 261 "data/maps/Luxurawork/scripts.pory"
	face_down
# 262 "data/maps/Luxurawork/scripts.pory"
	face_right
# 263 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 267 "data/maps/Luxurawork/scripts.pory"
revert:
# 268 "data/maps/Luxurawork/scripts.pory"
	face_left
# 269 "data/maps/Luxurawork/scripts.pory"
	face_down
# 270 "data/maps/Luxurawork/scripts.pory"
	face_right
# 271 "data/maps/Luxurawork/scripts.pory"
	face_up
# 272 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 274 "data/maps/Luxurawork/scripts.pory"
moq:
# 275 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 275 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 275 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 277 "data/maps/Luxurawork/scripts.pory"
faint:
# 278 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 282 "data/maps/Luxurawork/scripts.pory"
players:
# 283 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 284 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 286 "data/maps/Luxurawork/scripts.pory"
atk:
# 287 "data/maps/Luxurawork/scripts.pory"
	face_right
# 288 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 291 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 293 "data/maps/Luxurawork/scripts.pory"
visible:
# 294 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 296 "data/maps/Luxurawork/scripts.pory"
invisible:
# 297 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 299 "data/maps/Luxurawork/scripts.pory"
mo:
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 300 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/Luxurawork/scripts.pory"
finish:
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/Luxurawork/scripts.pory"
ded:
# 307 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 307 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 307 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

dad_Text_0:
# 81 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 84 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 87 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 90 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 93 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 98 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in\n"
	.string "two days.$"

dad_Text_6:
# 101 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 104 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 107 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 110 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 118 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 136 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trage_Text_1:
# 140 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trage_Text_2:
# 166 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trage_Text_3:
# 169 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge.Pathetically so.\p"
	.string "Now it's the end for you.$"

trage_Text_4:
# 176 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

trage_Text_5:
# 184 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_6:
# 189 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_7:
# 192 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_8:
# 198 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_9:
# 201 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_10:
# 210 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_11:
# 215 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_12:
# 221 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_13:
# 224 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_14:
# 227 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_15:
# 229 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_16:
# 234 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 246 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 249 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
