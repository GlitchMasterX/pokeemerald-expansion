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
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET::
# 22 "data/maps/headoffice/scripts.pory"
	addobject 1
# 23 "data/maps/headoffice/scripts.pory"
	setobjectxy 1, 7, 9
# 24 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 25 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 13, 3, DIR_NORTH
	return


HEADMET2::
# 28 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
	return


Head::
# 33 "data/maps/headoffice/scripts.pory"
	lock
# 34 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 35 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 36 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_0
# 37 "data/maps/headoffice/scripts.pory"
	closemessage
# 38 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 39 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_1
# 40 "data/maps/headoffice/scripts.pory"
	closemessage
# 41 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 42 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_2
# 43 "data/maps/headoffice/scripts.pory"
	closemessage
# 44 "data/maps/headoffice/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 45 "data/maps/headoffice/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 46 "data/maps/headoffice/scripts.pory"
	waitmoncry
# 47 "data/maps/headoffice/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 15, 31, 20, 31, 21, 10
# 48 "data/maps/headoffice/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 49 "data/maps/headoffice/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 50 "data/maps/headoffice/scripts.pory"
	msgbox Head_Text_3
# 51 "data/maps/headoffice/scripts.pory"
	hidemonpic
# 52 "data/maps/headoffice/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 53 "data/maps/headoffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Head_1
# 57 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 58 "data/maps/headoffice/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 59 "data/maps/headoffice/scripts.pory"
	goto Head1
	return

Head_1:
# 54 "data/maps/headoffice/scripts.pory"
	goto Head1
	return


girlsdorm::
# 64 "data/maps/headoffice/scripts.pory"
	lock
# 65 "data/maps/headoffice/scripts.pory"
	applymovement 1, exclam
# 66 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 67 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 68 "data/maps/headoffice/scripts.pory"
	msgbox girlsdorm_Text_0
# 69 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, strrp
# 70 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 71 "data/maps/headoffice/scripts.pory"
	release
	return


Head1::
# 75 "data/maps/headoffice/scripts.pory"
	lock
# 76 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 77 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_0
# 78 "data/maps/headoffice/scripts.pory"
	closemessage
# 79 "data/maps/headoffice/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 80 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_1
# 81 "data/maps/headoffice/scripts.pory"
	waitfanfare
# 82 "data/maps/headoffice/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 83 "data/maps/headoffice/scripts.pory"
	special SetUnlockedPokedexFlags
# 84 "data/maps/headoffice/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 85 "data/maps/headoffice/scripts.pory"
	special EnableNationalPokedex
# 86 "data/maps/headoffice/scripts.pory"
	closemessage
# 87 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 88 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_2
# 89 "data/maps/headoffice/scripts.pory"
	closemessage
# 90 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 91 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 92 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 93 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_3
# 94 "data/maps/headoffice/scripts.pory"
	speakername alistair
# 95 "data/maps/headoffice/scripts.pory"
	msgbox Head1_Text_4
# 96 "data/maps/headoffice/scripts.pory"
	initclock 10, 30
# 97 "data/maps/headoffice/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 98 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 5
# 99 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 26, 12
	return


Leafmet1::
# 103 "data/maps/headoffice/scripts.pory"
	lockall
# 104 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 105 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 106 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 107 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 108 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_0
# 109 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 110 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_1
# 111 "data/maps/headoffice/scripts.pory"
	closemessage
# 112 "data/maps/headoffice/scripts.pory"
	waitmessage
# 113 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 114 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 115 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 116 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 117 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 118 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_2
# 119 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 120 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_3
# 121 "data/maps/headoffice/scripts.pory"
	waitmessage
# 122 "data/maps/headoffice/scripts.pory"
	closemessage
# 123 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_1
# 124 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 125 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_4
# 126 "data/maps/headoffice/scripts.pory"
	waitmessage
# 127 "data/maps/headoffice/scripts.pory"
	closemessage
# 128 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 129 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 130 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 131 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 132 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_3
# 133 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 134 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_5
# 135 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 136 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_4
# 137 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 138 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_6
# 139 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 140 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_7
# 141 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 142 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_8
# 143 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 144 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_9
# 145 "data/maps/headoffice/scripts.pory"
	closemessage
# 146 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 147 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_10
# 148 "data/maps/headoffice/scripts.pory"
	closemessage
# 149 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 150 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_11
# 151 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 152 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 153 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 154 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_12, MSGBOX_AUTOCLOSE
# 155 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 156 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 157 "data/maps/headoffice/scripts.pory"
	closemessage
# 158 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 159 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 160 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 161 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_14, MSGBOX_AUTOCLOSE
# 162 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 163 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_15
# 164 "data/maps/headoffice/scripts.pory"
	closemessage
# 165 "data/maps/headoffice/scripts.pory"
	waitse
# 166 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 167 "data/maps/headoffice/scripts.pory"
	setfollowernpc 1, FNPC_LEAVE_ROUTE, serenafollow
# 168 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAF_FOLLOW
# 169 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 170 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_16
# 171 "data/maps/headoffice/scripts.pory"
	closemessage
# 172 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 6
# 173 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 177 "data/maps/headoffice/scripts.pory"
	lock
# 178 "data/maps/headoffice/scripts.pory"
	facefollowernpc
# 179 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 180 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 181 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 182 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 183 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourBattleTheory::
# 187 "data/maps/headoffice/scripts.pory"
	lock
# 188 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 189 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 190 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 191 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 192 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourBattleTheory_Text_0
# 193 "data/maps/headoffice/scripts.pory"
	closemessage
# 194 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 195 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 196 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 197 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 198 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 199 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 200 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemTheory::
# 204 "data/maps/headoffice/scripts.pory"
	lock
# 205 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 206 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 207 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 208 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 209 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemTheory_Text_0
# 210 "data/maps/headoffice/scripts.pory"
	closemessage
# 211 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 212 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 213 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 214 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 215 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 216 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 217 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourArt::
# 221 "data/maps/headoffice/scripts.pory"
	lock
# 222 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 223 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 224 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 225 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 226 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourArt_Text_0
# 227 "data/maps/headoffice/scripts.pory"
	closemessage
# 228 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 229 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 230 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 231 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 232 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 233 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 234 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourLab::
# 238 "data/maps/headoffice/scripts.pory"
	lock
# 239 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 240 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 241 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 242 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 243 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourLab_Text_0
# 244 "data/maps/headoffice/scripts.pory"
	closemessage
# 245 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 246 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 247 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 248 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 249 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 250 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 251 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemstrategy::
# 255 "data/maps/headoffice/scripts.pory"
	lock
# 256 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 257 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 258 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 259 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 260 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemstrategy_Text_0
# 261 "data/maps/headoffice/scripts.pory"
	closemessage
# 262 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 263 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 264 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 265 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 266 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 267 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 268 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourbattlestrategy::
# 272 "data/maps/headoffice/scripts.pory"
	lock
# 273 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 274 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 275 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 276 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 277 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourbattlestrategy_Text_0
# 278 "data/maps/headoffice/scripts.pory"
	closemessage
# 279 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 280 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 281 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 282 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 283 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 284 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 285 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourdojo::
# 288 "data/maps/headoffice/scripts.pory"
	lock
# 289 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 290 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 291 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 292 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 293 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourdojo_Text_0
# 294 "data/maps/headoffice/scripts.pory"
	closemessage
# 295 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 296 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 297 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 298 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 299 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 300 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 301 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourlib::
# 306 "data/maps/headoffice/scripts.pory"
	lock
# 307 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 308 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_0
# 309 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 310 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 311 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourlib_Text_0
# 312 "data/maps/headoffice/scripts.pory"
	closemessage
# 313 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_1
# 314 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 315 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourlib_Movement_2
# 316 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourlib_Movement_3
# 317 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 318 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 319 "data/maps/headoffice/scripts.pory"
	release
	return


# 322 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 323 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 325 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 326 "data/maps/headoffice/scripts.pory"
	walk_right
# 327 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 328 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 330 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 331 "data/maps/headoffice/scripts.pory"
	walk_down
# 331 "data/maps/headoffice/scripts.pory"
	walk_down
# 331 "data/maps/headoffice/scripts.pory"
	walk_down
# 331 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 333 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 334 "data/maps/headoffice/scripts.pory"
	walk_down
# 334 "data/maps/headoffice/scripts.pory"
	walk_down
# 334 "data/maps/headoffice/scripts.pory"
	walk_down
# 335 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

Leaftourend::
# 339 "data/maps/headoffice/scripts.pory"
	lock
# 340 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_0
# 341 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_1
# 342 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 343 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leafmet1_Movement_2
# 344 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 345 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 346 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_0, MSGBOX_AUTOCLOSE
# 347 "data/maps/headoffice/scripts.pory"
	closemessage
# 348 "data/maps/headoffice/scripts.pory"
	waitmessage
# 349 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_2
# 350 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_2
# 351 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 352 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_1, MSGBOX_AUTOCLOSE
# 353 "data/maps/headoffice/scripts.pory"
	closemessage
# 354 "data/maps/headoffice/scripts.pory"
	waitmessage
# 355 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_3
# 356 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_3
# 357 "data/maps/headoffice/scripts.pory"
	waitmovementall
# 358 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 359 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourend_Movement_1
# 360 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 361 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_2, MSGBOX_AUTOCLOSE
# 362 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 363 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_3, MSGBOX_AUTOCLOSE
# 364 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 365 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_4, MSGBOX_AUTOCLOSE
# 366 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 367 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5
# 368 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 369 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_6, MSGBOX_AUTOCLOSE
# 370 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 371 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5, MSGBOX_AUTOCLOSE
# 372 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 373 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 374 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 375 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 376 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_7, MSGBOX_AUTOCLOSE
# 377 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 378 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 379 "data/maps/headoffice/scripts.pory"
	destroyfollowernpc
# 380 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAFMET
# 381 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 7
# 382 "data/maps/headoffice/scripts.pory"
	release
	return


# 386 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
# 387 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 390 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 391 "data/maps/headoffice/scripts.pory"
	walk_left
# 392 "data/maps/headoffice/scripts.pory"
	walk_down
# 392 "data/maps/headoffice/scripts.pory"
	walk_down
# 392 "data/maps/headoffice/scripts.pory"
	walk_down
# 392 "data/maps/headoffice/scripts.pory"
	walk_down
# 392 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 394 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 395 "data/maps/headoffice/scripts.pory"
	delay_16
# 396 "data/maps/headoffice/scripts.pory"
	walk_down
# 396 "data/maps/headoffice/scripts.pory"
	walk_down
# 396 "data/maps/headoffice/scripts.pory"
	walk_down
# 396 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

FracturedMask1::
# 400 "data/maps/headoffice/scripts.pory"
	lock
# 401 "data/maps/headoffice/scripts.pory"
	fadenewbgm MUS_DUMMY
# 402 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 403 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_1, MSGBOX_AUTOCLOSE
# 404 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 405 "data/maps/headoffice/scripts.pory"
	applymovement 1, FracturedMask1_Movement_0
# 406 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 407 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_2, MSGBOX_AUTOCLOSE
# 408 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 409 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_4
# 410 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 411 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_4, MSGBOX_AUTOCLOSE
# 412 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 413 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_5, MSGBOX_AUTOCLOSE
# 414 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 415 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_6, MSGBOX_AUTOCLOSE
# 416 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_0
# 417 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_7, MSGBOX_AUTOCLOSE
# 418 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 419 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_4
# 420 "data/maps/headoffice/scripts.pory"
	speakername FracturedMask1_Text_3
# 421 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_8, MSGBOX_AUTOCLOSE
# 422 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, FracturedMask1_Movement_1
# 423 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 424 "data/maps/headoffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 425 "data/maps/headoffice/scripts.pory"
	msgbox FracturedMask1_Text_9, MSGBOX_AUTOCLOSE
# 426 "data/maps/headoffice/scripts.pory"
	setflag FLAG_AFTER_OUTBURST
# 427 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 12, 2
# 428 "data/maps/headoffice/scripts.pory"
	setvar ACADEMY_START, 13
# 429 "data/maps/headoffice/scripts.pory"
	releaseall
	return


# 108 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_0:
# 108 "data/maps/headoffice/scripts.pory"
	emote_happy
	step_end

# 123 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_1:
# 123 "data/maps/headoffice/scripts.pory"
	face_up
	step_end

# 130 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_2:
# 130 "data/maps/headoffice/scripts.pory"
	face_right
	step_end

# 132 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_3:
# 132 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_4:
# 136 "data/maps/headoffice/scripts.pory"
	emote_upset
	step_end

# 189 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_0:
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
# 189 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_1:
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
# 194 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 196 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_2:
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_0:
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
# 257 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_1:
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
# 262 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_0:
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_left
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
# 308 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 313 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_1:
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_down
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
# 313 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 315 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_2:
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_3:
# 316 "data/maps/headoffice/scripts.pory"
	walk_left
	step_end

# 340 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_0:
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
# 340 "data/maps/headoffice/scripts.pory"
	walk_left
# 340 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_1:
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
	step_end

# 349 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_2:
# 349 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

# 355 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_3:
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
# 355 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 405 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_0:
# 405 "data/maps/headoffice/scripts.pory"
	emote_question_mark
	step_end

# 422 "data/maps/headoffice/scripts.pory"
FracturedMask1_Movement_1:
# 422 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 422 "data/maps/headoffice/scripts.pory"
	walk_fast_down
# 422 "data/maps/headoffice/scripts.pory"
	walk_fast_down
	step_end

Head_Text_0:
# 36 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, I trust your journey here was\n"
	.string "uneventful.\p"
	.string "I understand this is all new for you,\n"
	.string "but it's time to start fresh.$"

Head_Text_1:
# 39 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

Head_Text_2:
# 42 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}We have a tradition of giving every\n"
	.string "first year a starter pokemon of their\l"
	.string "choice on the first day.\p"
	.string "But since you arrived late there's only\n"
	.string "one left.\p"
	.string "Here you go.$"

Head_Text_3:
# 50 "data/maps/headoffice/scripts.pory"
	.string "Xylar recieved {STR_VAR_1}.$"

girlsdorm_Text_0:
# 68 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This way leads to the girl's dorm.\p"
	.string "Boys are not allowed there.$"

Head1_Text_0:
# 77 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}And here is your POKéDEX.$"

Head1_Text_1:
# 80 "data/maps/headoffice/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Head1_Text_2:
# 88 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}The POKéDEX is a high-tech tool that\n"
	.string "automatically makes a record of any\l"
	.string "POKéMON you meet or catch.\p"
	.string "I assume you knew that already.$"

Head1_Text_3:
# 93 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}This is it? I thought I was supposed to\n"
	.string "grow stronger, not babysit a chicken.$"

Head1_Text_4:
# 95 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Strength isn't always obvious at first\n"
	.string "glance.\p"
	.string "Give it time.\n"
	.string "Torchic may surprise you.$"

Leafmet1_Text_0:
# 109 "data/maps/headoffice/scripts.pory"
	.string "Leaf$"

Leafmet1_Text_1:
# 110 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Leaf, your assigned mentor.\p"
	.string "Lucky you, right?$"

Leafmet1_Text_2:
# 118 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

Leafmet1_Text_3:
# 120 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

Leafmet1_Text_4:
# 125 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

Leafmet1_Text_5:
# 134 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.$"

Leafmet1_Text_6:
# 138 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I don't care if you think you don't\n"
	.string "need help.$"

Leafmet1_Text_7:
# 140 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I'm here to make sure you don't blow\n"
	.string "something up.$"

Leafmet1_Text_8:
# 142 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

Leafmet1_Text_9:
# 144 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

Leafmet1_Text_10:
# 147 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

Leafmet1_Text_11:
# 150 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

Leafmet1_Text_12:
# 154 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

Leafmet1_Text_13:
# 156 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

Leafmet1_Text_14:
# 161 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

Leafmet1_Text_15:
# 163 "data/maps/headoffice/scripts.pory"
	.string "Leaf decided to join you!$"

Leafmet1_Text_16:
# 170 "data/maps/headoffice/scripts.pory"
	.string "You are now free to explore the\n"
	.string "Academy.\p"
	.string "Visit different rooms to learn how\n"
	.string "things work here.\p"
	.string "Some rooms may reveal useful\n"
	.string "information.$"

LeaftourBattleTheory_Text_0:
# 192 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Theory Class.\p"
	.string "Types, matchups, timing.\p"
	.string "Even strong trainers lose if they skip\n"
	.string "the basics.$"

LeaftourItemTheory_Text_0:
# 209 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Theory Class.\p"
	.string "Held items, effects, synergy.\p"
	.string "Held items are more important than some\n"
	.string "people think.\p"
	.string "If used correctly, they can decide the\n"
	.string "outcome of the battle.$"

LeaftourArt_Text_0:
# 226 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This is the art room.\p"
	.string "Some trainers sketch Pokémon, others\n"
	.string "design battle maps.\p"
	.string "Not everything here is about fighting.$"

LeaftourLab_Text_0:
# 243 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The lab.\p"
	.string "Pokémon biology, move mechanics,\n"
	.string "evolution research.\p"
	.string "Knowledge keeps you alive when\n"
	.string "strength isn't enough.$"

LeaftourItemstrategy_Text_0:
# 260 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Strategy Classroom.\p"
	.string "Here you will learn how items are used\n"
	.string "efficiently in battle.$"

Leaftourbattlestrategy_Text_0:
# 277 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Strategy Classroom.\p"
	.string "Reading opponents. Setting traps.\n"
	.string "Predicting habits.\p"
	.string "This is where raw power stops being\n"
	.string "enough.$"

Leaftourdojo_Text_0:
# 293 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The dojo.\p"
	.string "Everything you learn in class will be\n"
	.string "tested here against other students.$"

Leaftourlib_Text_0:
# 311 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The library.\p"
	.string "Records, old battles, history.\p"
	.string "Some sections are off-limits.\p"
	.string "And yes, they will notice if you sneak\n"
	.string "in.$"

Leaftourend_Text_0:
# 346 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Dorms are on the right.$"

Leaftourend_Text_1:
# 352 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}While on the left, The Lighthouse.\p"
	.string "But students are not allowed to go in.$"

Leaftourend_Text_2:
# 361 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Training Grounds.\p"
	.string "This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

Leaftourend_Text_3:
# 363 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

Leaftourend_Text_4:
# 365 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

Leaftourend_Text_5:
# 367 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

Leaftourend_Text_6:
# 369 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

Leaftourend_Text_7:
# 376 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Anyways.\p"
	.string "You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

FracturedMask1_Text_0:
# 402 "data/maps/headoffice/scripts.pory"
	.string "Alistair$"

FracturedMask1_Text_1:
# 403 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, expulsion is on the table.\p"
	.string "This kind of behavior is unacceptable.\p"
	.string "All the teachers wanted you expelled,\n"
	.string "but I convinced them to give you one\l"
	.string "more chance.$"

FracturedMask1_Text_2:
# 407 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Tell me, why did you beat him so badly?$"

FracturedMask1_Text_3:
# 410 "data/maps/headoffice/scripts.pory"
	.string "Xylar$"

FracturedMask1_Text_4:
# 411 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He wouldn't stop running his mouth, so I\n"
	.string "shut it for him.$"

FracturedMask1_Text_5:
# 413 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Violence isn't the answer, Xylar.\p"
	.string "Next time, there won't be a second\n"
	.string "chance.$"

FracturedMask1_Text_6:
# 415 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Then maybe people should learn when to\n"
	.string "keep their mouths shut.$"

FracturedMask1_Text_7:
# 417 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This isn't the path your father would\n"
	.string "have wanted for you.$"

FracturedMask1_Text_8:
# 421 "data/maps/headoffice/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't.\p"
	.string "Talk.\p"
	.string "About.\p"
	.string "Him.$"

FracturedMask1_Text_9:
# 425 "data/maps/headoffice/scripts.pory"
	.string "After this incident, the students\n"
	.string "began to fear Xylar, treating him as an\l"
	.string "outcast.$"
