headoffice_MapScripts::
# 7 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HEADMET1
# 2 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, HEADMET
# 4 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 12, HEADMET2
	.2byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 4, Head
# 10 "data/maps/headoffice/scripts.pory"
	map_script_2 ACADEMY_START, 12, FracturedMask1
	.2byte 0


HEADMET1::
# 15 "data/maps/headoffice/scripts.pory"
	compare ACADEMY_START, 4
	goto_if_eq HEADMET1_1
	return

HEADMET1_1:
# 16 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 17 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 11, 3, DIR_NORTH
	return


HEADMET::
# 22 "data/maps/headoffice/scripts.pory"
	addobject 1
# 23 "data/maps/headoffice/scripts.pory"
	setobjectxy 1, 7, 6
# 24 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 25 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 11, 3, DIR_NORTH
	return


HEADMET2::
# 28 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
	return


Head::
# 33 "data/maps/headoffice/scripts.pory"
	lock
# 34 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 35 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 36 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 37 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_0
# 38 "data/maps/headoffice/scripts.pory"
	closemessage
# 39 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 40 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_1
# 41 "data/maps/headoffice/scripts.pory"
	closemessage
# 42 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 43 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_2
# 44 "data/maps/headoffice/scripts.pory"
	closemessage
# 45 "data/maps/headoffice/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 46 "data/maps/headoffice/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 47 "data/maps/headoffice/scripts.pory"
	waitmoncry
# 48 "data/maps/headoffice/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
# 49 "data/maps/headoffice/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 50 "data/maps/headoffice/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 51 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_3
# 52 "data/maps/headoffice/scripts.pory"
	hidemonpic
# 53 "data/maps/headoffice/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 54 "data/maps/headoffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Head_1
# 58 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 59 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 60 "data/maps/headoffice/scripts.pory"
	goto Head1
	return

Head_1:
# 55 "data/maps/headoffice/scripts.pory"
	goto Head1
	return


girlsdorm::
# 65 "data/maps/headoffice/scripts.pory"
	lock
# 66 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 67 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 68 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 69 "data/maps/headoffice/scripts.pory"
	msgbox girlsdorm_Text_0
# 70 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 71 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 72 "data/maps/headoffice/scripts.pory"
	release
	return


Head1::
# 76 "data/maps/headoffice/scripts.pory"
	lock
# 77 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 78 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_0
# 79 "data/maps/headoffice/scripts.pory"
	closemessage
# 80 "data/maps/headoffice/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 81 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_1
# 82 "data/maps/headoffice/scripts.pory"
	waitfanfare
# 83 "data/maps/headoffice/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 84 "data/maps/headoffice/scripts.pory"
	special SetUnlockedPokedexFlags
# 85 "data/maps/headoffice/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 86 "data/maps/headoffice/scripts.pory"
	special EnableNationalPokedex
# 87 "data/maps/headoffice/scripts.pory"
	closemessage
# 88 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 89 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_2
# 90 "data/maps/headoffice/scripts.pory"
	closemessage
# 91 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 92 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 93 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 94 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_3
# 95 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 96 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_4
# 97 "data/maps/headoffice/scripts.pory"
	initclock 10, 30
# 98 "data/maps/headoffice/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 99 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 5
# 100 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 26, 12
	return


Leafmet1::
# 104 "data/maps/headoffice/scripts.pory"
	lockall
# 105 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 106 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 107 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 108 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 109 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_0
# 110 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 111 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_1
# 112 "data/maps/headoffice/scripts.pory"
	closemessage
# 113 "data/maps/headoffice/scripts.pory"
	waitmessage
# 114 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 115 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 116 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 117 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 118 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 119 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_2
# 120 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 121 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_3
# 122 "data/maps/headoffice/scripts.pory"
	waitmessage
# 123 "data/maps/headoffice/scripts.pory"
	closemessage
# 124 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_1
# 125 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 126 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_4
# 127 "data/maps/headoffice/scripts.pory"
	waitmessage
# 128 "data/maps/headoffice/scripts.pory"
	closemessage
# 129 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 130 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 131 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 132 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 133 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_3
# 134 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 135 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_5
# 136 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 137 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_4
# 138 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 139 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_6
# 140 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 141 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_7
# 142 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 143 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_8
# 144 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 145 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_9
# 146 "data/maps/headoffice/scripts.pory"
	closemessage
# 147 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 148 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_10
# 149 "data/maps/headoffice/scripts.pory"
	closemessage
# 150 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 151 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_11
# 152 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 153 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 154 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 155 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_12, MSGBOX_AUTOCLOSE
# 156 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 157 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 158 "data/maps/headoffice/scripts.pory"
	closemessage
# 159 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 160 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 161 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 162 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_14, MSGBOX_AUTOCLOSE
# 163 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 164 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_15
# 165 "data/maps/headoffice/scripts.pory"
	closemessage
# 166 "data/maps/headoffice/scripts.pory"
	waitse
# 167 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 168 "data/maps/headoffice/scripts.pory"
	setfollowernpc 1, FNPC_LEAVE_ROUTE, serenafollow
# 169 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAF_FOLLOW
# 170 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_16
# 172 "data/maps/headoffice/scripts.pory"
	closemessage
# 173 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 6
# 174 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 178 "data/maps/headoffice/scripts.pory"
	lock
# 179 "data/maps/headoffice/scripts.pory"
	facefollowernpc
# 180 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 181 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 182 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 183 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 184 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourBattleTheory::
# 188 "data/maps/headoffice/scripts.pory"
	lock
# 189 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 190 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 191 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 192 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 193 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourBattleTheory_Text_0
# 194 "data/maps/headoffice/scripts.pory"
	closemessage
# 195 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 196 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 197 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 198 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 199 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 200 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 201 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemTheory::
# 205 "data/maps/headoffice/scripts.pory"
	lock
# 206 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 207 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 208 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 209 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 210 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemTheory_Text_0
# 211 "data/maps/headoffice/scripts.pory"
	closemessage
# 212 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 213 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 214 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 215 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 216 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 217 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 218 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourArt::
# 222 "data/maps/headoffice/scripts.pory"
	lock
# 223 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 224 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 225 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 226 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 227 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourArt_Text_0
# 228 "data/maps/headoffice/scripts.pory"
	closemessage
# 229 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 230 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 231 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 232 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 233 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 234 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 235 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourLab::
# 239 "data/maps/headoffice/scripts.pory"
	lock
# 240 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 241 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 242 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 243 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 244 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourLab_Text_0
# 245 "data/maps/headoffice/scripts.pory"
	closemessage
# 246 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 247 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 248 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 249 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 250 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 251 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 252 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemstrategy::
# 256 "data/maps/headoffice/scripts.pory"
	lock
# 257 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 258 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 259 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 260 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 261 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemstrategy_Text_0
# 262 "data/maps/headoffice/scripts.pory"
	closemessage
# 263 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 264 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 265 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 266 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 267 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 268 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 269 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourbattlestrategy::
# 273 "data/maps/headoffice/scripts.pory"
	lock
# 274 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 275 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 276 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 277 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 278 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourbattlestrategy_Text_0
# 279 "data/maps/headoffice/scripts.pory"
	closemessage
# 280 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 281 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 282 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 283 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 284 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 285 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 286 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourdojo::
# 289 "data/maps/headoffice/scripts.pory"
	lock
# 290 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 291 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 292 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 293 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 294 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourdojo_Text_0
# 295 "data/maps/headoffice/scripts.pory"
	closemessage
# 296 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 297 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 298 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 299 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 300 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 301 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 302 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourlib::
# 307 "data/maps/headoffice/scripts.pory"
	lock
# 308 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 309 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_0
# 310 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 311 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 312 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourlib_Text_0
# 313 "data/maps/headoffice/scripts.pory"
	closemessage
# 314 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_1
# 315 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 316 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourlib_Movement_2
# 317 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourlib_Movement_3
# 318 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 319 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 320 "data/maps/headoffice/scripts.pory"
	release
	return


# 323 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 324 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 326 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 327 "data/maps/headoffice/scripts.pory"
	walk_right
# 328 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 329 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 331 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 332 "data/maps/headoffice/scripts.pory"
	walk_down
# 332 "data/maps/headoffice/scripts.pory"
	walk_down
# 332 "data/maps/headoffice/scripts.pory"
	walk_down
# 332 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 334 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 335 "data/maps/headoffice/scripts.pory"
	walk_down
# 335 "data/maps/headoffice/scripts.pory"
	walk_down
# 335 "data/maps/headoffice/scripts.pory"
	walk_down
# 336 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

Leaftourend::
# 340 "data/maps/headoffice/scripts.pory"
	lock
# 341 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_0
# 342 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_1
# 343 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 344 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leafmet1_Movement_2
# 345 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 346 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 347 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_0, MSGBOX_AUTOCLOSE
# 348 "data/maps/headoffice/scripts.pory"
	closemessage
# 349 "data/maps/headoffice/scripts.pory"
	waitmessage
# 350 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_2
# 351 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_2
# 352 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 353 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_1, MSGBOX_AUTOCLOSE
# 354 "data/maps/headoffice/scripts.pory"
	closemessage
# 355 "data/maps/headoffice/scripts.pory"
	waitmessage
# 356 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_3
# 357 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_3
# 358 "data/maps/headoffice/scripts.pory"
	waitmovementall
# 359 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 360 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourend_Movement_1
# 361 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 362 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_2, MSGBOX_AUTOCLOSE
# 363 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 364 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_3, MSGBOX_AUTOCLOSE
# 365 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 366 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_4, MSGBOX_AUTOCLOSE
# 367 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 368 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5
# 369 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 370 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_6, MSGBOX_AUTOCLOSE
# 371 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 372 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5, MSGBOX_AUTOCLOSE
# 373 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 374 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 375 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 376 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 377 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_7, MSGBOX_AUTOCLOSE
# 378 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 379 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 380 "data/maps/headoffice/scripts.pory"
	destroyfollowernpc
# 381 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAFMET
# 382 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 7
# 383 "data/maps/headoffice/scripts.pory"
	release
	return


# 387 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
# 388 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 391 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 392 "data/maps/headoffice/scripts.pory"
	walk_left
# 393 "data/maps/headoffice/scripts.pory"
	walk_down
# 393 "data/maps/headoffice/scripts.pory"
	walk_down
# 393 "data/maps/headoffice/scripts.pory"
	walk_down
# 393 "data/maps/headoffice/scripts.pory"
	walk_down
# 393 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 395 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 396 "data/maps/headoffice/scripts.pory"
	delay_16
# 397 "data/maps/headoffice/scripts.pory"
	walk_down
# 397 "data/maps/headoffice/scripts.pory"
	walk_down
# 397 "data/maps/headoffice/scripts.pory"
	walk_down
# 397 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

FracturedMask1::
# 401 "data/maps/headoffice/scripts.pory"
	lock
# 402 "data/maps/headoffice/scripts.pory"
	fadenewbgm MUS_DUMMY
# 403 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 404 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_1, MSGBOX_AUTOCLOSE
# 405 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 406 "data/maps/headoffice/scripts.pory"
	applymovement 1, FracturedMask1_Movement_0
# 407 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 408 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_2, MSGBOX_AUTOCLOSE
# 409 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 410 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_4
# 411 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 412 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_4, MSGBOX_AUTOCLOSE
# 413 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 414 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_5, MSGBOX_AUTOCLOSE
# 415 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 416 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_6, MSGBOX_AUTOCLOSE
# 417 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 418 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_7, MSGBOX_AUTOCLOSE
# 419 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 420 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_4
# 421 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 422 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_8, MSGBOX_AUTOCLOSE
# 423 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, FracturedMask1_Movement_1
# 424 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 425 "data/maps/headoffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 426 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_9, MSGBOX_AUTOCLOSE
# 427 "data/maps/headoffice/scripts.pory"
	setflag FLAG_AFTER_OUTBURST
# 428 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 12, 2
# 429 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 13
# 430 "data/maps/headoffice/scripts.pory"
	releaseall
	return


# 109 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_0:
# 109 "data/maps/headoffice/scripts.pory"
	emote_happy
	step_end

# 124 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_1:
# 124 "data/maps/headoffice/scripts.pory"
	face_up
	step_end

# 131 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_2:
# 131 "data/maps/headoffice/scripts.pory"
	face_right
	step_end

# 133 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_3:
# 133 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
	step_end

# 137 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_4:
# 137 "data/maps/headoffice/scripts.pory"
	emote_upset
	step_end

# 190 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_0:
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
# 190 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_1:
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
# 195 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_2:
# 197 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 258 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_0:
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
# 258 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_1:
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
# 263 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_0:
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_left
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
# 309 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 314 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_1:
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_down
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
# 314 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_2:
# 316 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 317 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_3:
# 317 "data/maps/headoffice/scripts.pory"
	walk_left
	step_end

# 341 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_0:
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
# 341 "data/maps/headoffice/scripts.pory"
	walk_left
# 341 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 342 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_1:
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_2:
# 350 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

# 356 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_3:
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
# 356 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 406 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_0:
# 406 "data/maps/headoffice/scripts.pory"
	emote_question_mark
	step_end

# 423 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_1:
# 423 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 423 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 423 "data/maps/headoffice/scripts.pory"
	walk_fast_down
	step_end

Head_Text_0:
# 37 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, I trust your journey here was\n"
	.string "uneventful.\p"
	.string "I understand this is all new for you,\n"
	.string "but it's time to start fresh.$"

Head_Text_1:
# 40 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

Head_Text_2:
# 43 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}We have a tradition of giving every\n"
	.string "first year a starter pokemon of their\l"
	.string "choice on the first day.\p"
	.string "But since you arrived late there's only\n"
	.string "one left.\p"
	.string "Here you go.$"

Head_Text_3:
# 51 "data/maps/headoffice/scripts.pory"
	.string "Xylar recieved {STR_VAR_1}.$"

girlsdorm_Text_0:
# 69 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This way leads to the girl's dorm.\p"
	.string "Boys are not allowed there.$"

Head1_Text_0:
# 78 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And here is your POKéDEX.$"

Head1_Text_1:
# 81 "data/maps/headoffice/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Head1_Text_2:
# 89 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}The POKéDEX is a high-tech tool that\n"
	.string "automatically makes a record of any\l"
	.string "POKéMON you meet or catch.\p"
	.string "I assume you knew that already.$"

Head1_Text_3:
# 94 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}This is it? I thought I was supposed to\n"
	.string "grow stronger, not babysit a chicken.$"

Head1_Text_4:
# 96 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't always obvious at first\n"
	.string "glance.\p"
	.string "Give it time.\n"
	.string "Torchic may surprise you.$"

Leafmet1_Text_0:
# 110 "data/maps/headoffice/scripts.pory"
	.string "Leaf$"

Leafmet1_Text_1:
# 111 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Leaf, your assigned mentor.\p"
	.string "Lucky you, right?$"

Leafmet1_Text_2:
# 119 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

Leafmet1_Text_3:
# 121 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

Leafmet1_Text_4:
# 126 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

Leafmet1_Text_5:
# 135 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.$"

Leafmet1_Text_6:
# 139 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I don't care if you think you don't\n"
	.string "need help.$"

Leafmet1_Text_7:
# 141 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I'm here to make sure you don't blow\n"
	.string "something up.$"

Leafmet1_Text_8:
# 143 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

Leafmet1_Text_9:
# 145 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

Leafmet1_Text_10:
# 148 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

Leafmet1_Text_11:
# 151 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

Leafmet1_Text_12:
# 155 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

Leafmet1_Text_13:
# 157 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

Leafmet1_Text_14:
# 162 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

Leafmet1_Text_15:
# 164 "data/maps/headoffice/scripts.pory"
	.string "Leaf decided to join you!$"

Leafmet1_Text_16:
# 171 "data/maps/headoffice/scripts.pory"
	.string "You are now free to explore the\n"
	.string "Academy.\p"
	.string "Visit different rooms to learn how\n"
	.string "things work here.\p"
	.string "Some rooms may reveal useful\n"
	.string "information.$"

LeaftourBattleTheory_Text_0:
# 193 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Theory Class.\p"
	.string "Types, matchups, timing.\p"
	.string "Even strong trainers lose if they skip\n"
	.string "the basics.$"

LeaftourItemTheory_Text_0:
# 210 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Theory Class.\p"
	.string "Held items, effects, synergy.\p"
	.string "Held items are more important than some\n"
	.string "people think.\p"
	.string "If used correctly, they can decide the\n"
	.string "outcome of the battle.$"

LeaftourArt_Text_0:
# 227 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This is the art room.\p"
	.string "Some trainers sketch Pokémon, others\n"
	.string "design battle maps.\p"
	.string "Not everything here is about fighting.$"

LeaftourLab_Text_0:
# 244 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The lab.\p"
	.string "Pokémon biology, move mechanics,\n"
	.string "evolution research.\p"
	.string "Knowledge keeps you alive when\n"
	.string "strength isn't enough.$"

LeaftourItemstrategy_Text_0:
# 261 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Strategy Classroom.\p"
	.string "Here you will learn how items are used\n"
	.string "efficiently in battle.$"

Leaftourbattlestrategy_Text_0:
# 278 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Strategy Classroom.\p"
	.string "Reading opponents. Setting traps.\n"
	.string "Predicting habits.\p"
	.string "This is where raw power stops being\n"
	.string "enough.$"

Leaftourdojo_Text_0:
# 294 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The dojo.\p"
	.string "Everything you learn in class will be\n"
	.string "tested here against other students.$"

Leaftourlib_Text_0:
# 312 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The library.\p"
	.string "Records, old battles, history.\p"
	.string "Some sections are off-limits.\p"
	.string "And yes, they will notice if you sneak\n"
	.string "in.$"

Leaftourend_Text_0:
# 347 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Dorms are on the right.$"

Leaftourend_Text_1:
# 353 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}While on the left, The Lighthouse.\p"
	.string "But students are not allowed to go in.$"

Leaftourend_Text_2:
# 362 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Training Grounds.\p"
	.string "This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

Leaftourend_Text_3:
# 364 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

Leaftourend_Text_4:
# 366 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

Leaftourend_Text_5:
# 368 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

Leaftourend_Text_6:
# 370 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

Leaftourend_Text_7:
# 377 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Anyways.\p"
	.string "You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

FracturedMask1_Text_0:
# 403 "data/maps/headoffice/scripts.pory"
	.string "Alistair$"

FracturedMask1_Text_1:
# 404 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, expulsion is on the table.\p"
	.string "This kind of behavior is unacceptable.\p"
	.string "All the teachers wanted you expelled,\n"
	.string "but I convinced them to give you one\l"
	.string "more chance.$"

FracturedMask1_Text_2:
# 408 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tell me, why did you beat him so badly?$"

FracturedMask1_Text_3:
# 411 "data/maps/headoffice/scripts.pory"
	.string "Xylar$"

FracturedMask1_Text_4:
# 412 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He wouldn't stop running his mouth, so I\n"
	.string "shut it for him.$"

FracturedMask1_Text_5:
# 414 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Violence isn't the answer, Xylar.\p"
	.string "Next time, there won't be a second\n"
	.string "chance.$"

FracturedMask1_Text_6:
# 416 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Then maybe people should learn when to\n"
	.string "keep their mouths shut.$"

FracturedMask1_Text_7:
# 418 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This isn't the path your father would\n"
	.string "have wanted for you.$"

FracturedMask1_Text_8:
# 422 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't.\p"
	.string "Talk.\p"
	.string "About.\p"
	.string "Him.$"

FracturedMask1_Text_9:
# 426 "data/maps/headoffice/scripts.pory"
	.string "After this incident, the students\n"
	.string "began to fear Xylar, treating him as an\l"
	.string "outcast.$"
