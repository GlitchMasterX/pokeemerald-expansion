headoffice_MapScripts::
# 6 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HEADMET1
# 2 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/headoffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/headoffice/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 4, HEADMET
	.2byte 0

headoffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/headoffice/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 4, Head
# 9 "data/maps/headoffice/scripts.pory"
	map_script_2 VAR_ACADEMY_START, 11, HeadOfficeAfterTrial1
	.2byte 0


HEADMET1::
# 14 "data/maps/headoffice/scripts.pory"
	compare VAR_ACADEMY_START, 4
	goto_if_eq HEADMET1_1
	return

HEADMET1_1:
# 15 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 16 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 12, 3, DIR_NORTH
	return


HEADMET::
# 21 "data/maps/headoffice/scripts.pory"
	addobject 1
# 22 "data/maps/headoffice/scripts.pory"
	setobjectxy 1, 7, 8
# 23 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
# 24 "data/maps/headoffice/scripts.pory"
	createvobject OBJ_EVENT_GFX_PROF_ELIAS, 2, 8, 12, 3, DIR_NORTH
	return


HEADMET2::
# 27 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, traces2
	return


Head::
# 32 "data/maps/headoffice/scripts.pory"
	lock
# 33 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
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
	givemon SPECIES_TORCHIC, 5, ITEM_EXP_SHARE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
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
	setflag FLAG_IRIS_ACADEMY
# 99 "data/maps/headoffice/scripts.pory"
	setflag FLAG_KAEL_ACADEMY
# 100 "data/maps/headoffice/scripts.pory"
	setvar VAR_ACADEMY_START, 5
# 101 "data/maps/headoffice/scripts.pory"
	warp MAP_ASTRALIS_ACADEMY_FLOOR2, 26, 12
	return


Leafmet1::
# 105 "data/maps/headoffice/scripts.pory"
	lockall
# 106 "data/maps/headoffice/scripts.pory"
	playbgm MUS_HG_LYRA, FALSE
# 107 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov1
# 108 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 109 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 110 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_0
# 111 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 112 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_1
# 113 "data/maps/headoffice/scripts.pory"
	closemessage
# 114 "data/maps/headoffice/scripts.pory"
	waitmessage
# 115 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 116 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov2
# 117 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, serenametmov3
# 118 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 119 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 120 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_2
# 121 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 122 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_3
# 123 "data/maps/headoffice/scripts.pory"
	waitmessage
# 124 "data/maps/headoffice/scripts.pory"
	closemessage
# 125 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_1
# 126 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 127 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_4
# 128 "data/maps/headoffice/scripts.pory"
	waitmessage
# 129 "data/maps/headoffice/scripts.pory"
	closemessage
# 130 "data/maps/headoffice/scripts.pory"
	applymovement 1, serenametmov4
# 131 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 132 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 133 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 134 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_3
# 135 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 136 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_5
# 137 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 138 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_4
# 139 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 140 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_6
# 141 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 142 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_7
# 143 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 144 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_8
# 145 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 146 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_9
# 147 "data/maps/headoffice/scripts.pory"
	closemessage
# 148 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 149 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_10
# 150 "data/maps/headoffice/scripts.pory"
	closemessage
# 151 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 152 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_11
# 153 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 154 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, exclam
# 155 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 156 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_12, MSGBOX_AUTOCLOSE
# 157 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 158 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 159 "data/maps/headoffice/scripts.pory"
	closemessage
# 160 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 161 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, upset
# 162 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 163 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_14, MSGBOX_AUTOCLOSE
# 164 "data/maps/headoffice/scripts.pory"
	playse MUS_DP_LETS_GO_TOGETHER
# 165 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_15
# 166 "data/maps/headoffice/scripts.pory"
	closemessage
# 167 "data/maps/headoffice/scripts.pory"
	waitse
# 168 "data/maps/headoffice/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 169 "data/maps/headoffice/scripts.pory"
	setfollowernpc 1, FNPC_LEAVE_ROUTE, serenafollow
# 170 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAF_FOLLOW
# 171 "data/maps/headoffice/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_16
# 173 "data/maps/headoffice/scripts.pory"
	closemessage
# 174 "data/maps/headoffice/scripts.pory"
	setvar VAR_ACADEMY_START, 6
# 175 "data/maps/headoffice/scripts.pory"
	releaseall
	return


serenafollow::
# 179 "data/maps/headoffice/scripts.pory"
	lock
# 180 "data/maps/headoffice/scripts.pory"
	facefollowernpc
# 181 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 182 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, happy
# 183 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 184 "data/maps/headoffice/scripts.pory"
	msgbox Leafmet1_Text_13
# 185 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourBattleTheory::
# 189 "data/maps/headoffice/scripts.pory"
	lock
# 190 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 191 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 192 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 193 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 194 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourBattleTheory_Text_0
# 195 "data/maps/headoffice/scripts.pory"
	closemessage
# 196 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 197 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 198 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 199 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 200 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 201 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 202 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemTheory::
# 206 "data/maps/headoffice/scripts.pory"
	lock
# 207 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 208 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 209 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 210 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 211 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemTheory_Text_0
# 212 "data/maps/headoffice/scripts.pory"
	closemessage
# 213 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 214 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 215 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 216 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 217 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 218 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 219 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourArt::
# 223 "data/maps/headoffice/scripts.pory"
	lock
# 224 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 226 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 227 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 228 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourArt_Text_0
# 229 "data/maps/headoffice/scripts.pory"
	closemessage
# 230 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 231 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 232 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 233 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 234 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 235 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 236 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourLab::
# 240 "data/maps/headoffice/scripts.pory"
	lock
# 241 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 242 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 243 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 244 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 245 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourLab_Text_0
# 246 "data/maps/headoffice/scripts.pory"
	closemessage
# 247 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 248 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 249 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 250 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 251 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 252 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 253 "data/maps/headoffice/scripts.pory"
	release
	return


LeaftourItemstrategy::
# 257 "data/maps/headoffice/scripts.pory"
	lock
# 258 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 259 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 260 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 261 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 262 "data/maps/headoffice/scripts.pory"
	msgbox LeaftourItemstrategy_Text_0
# 263 "data/maps/headoffice/scripts.pory"
	closemessage
# 264 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 265 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 266 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 267 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 268 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 269 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 270 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourbattlestrategy::
# 274 "data/maps/headoffice/scripts.pory"
	lock
# 275 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_0
# 277 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 278 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 279 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourbattlestrategy_Text_0
# 280 "data/maps/headoffice/scripts.pory"
	closemessage
# 281 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourItemstrategy_Movement_1
# 282 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 283 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 284 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 285 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 286 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 287 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourdojo::
# 290 "data/maps/headoffice/scripts.pory"
	lock
# 291 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 292 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_0
# 293 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 294 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 295 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourdojo_Text_0
# 296 "data/maps/headoffice/scripts.pory"
	closemessage
# 297 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, LeaftourBattleTheory_Movement_1
# 298 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 299 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, LeaftourBattleTheory_Movement_2
# 300 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, LeaftourBattleTheory_Movement_2
# 301 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 302 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 303 "data/maps/headoffice/scripts.pory"
	release
	return


Leaftourlib::
# 308 "data/maps/headoffice/scripts.pory"
	lock
# 309 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 310 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_0
# 311 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 312 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 313 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourlib_Text_0
# 314 "data/maps/headoffice/scripts.pory"
	closemessage
# 315 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourlib_Movement_1
# 316 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 317 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourlib_Movement_2
# 318 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourlib_Movement_3
# 319 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 320 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 321 "data/maps/headoffice/scripts.pory"
	release
	return


# 324 "data/maps/headoffice/scripts.pory"
serenametmov1:
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
# 325 "data/maps/headoffice/scripts.pory"
	walk_fast_up
	step_end

# 327 "data/maps/headoffice/scripts.pory"
serenametmov2:
# 328 "data/maps/headoffice/scripts.pory"
	walk_right
# 329 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
# 330 "data/maps/headoffice/scripts.pory"
	face_down
	step_end

# 332 "data/maps/headoffice/scripts.pory"
serenametmov3:
# 333 "data/maps/headoffice/scripts.pory"
	walk_down
# 333 "data/maps/headoffice/scripts.pory"
	walk_down
# 333 "data/maps/headoffice/scripts.pory"
	walk_down
# 333 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 335 "data/maps/headoffice/scripts.pory"
serenametmov4:
# 336 "data/maps/headoffice/scripts.pory"
	walk_down
# 336 "data/maps/headoffice/scripts.pory"
	walk_down
# 336 "data/maps/headoffice/scripts.pory"
	walk_down
# 337 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

Leaftourend::
# 341 "data/maps/headoffice/scripts.pory"
	lock
# 342 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_0
# 343 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_1
# 344 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 345 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leafmet1_Movement_2
# 346 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leafmet1_Movement_2
# 347 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 348 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_0, MSGBOX_AUTOCLOSE
# 349 "data/maps/headoffice/scripts.pory"
	closemessage
# 350 "data/maps/headoffice/scripts.pory"
	waitmessage
# 351 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_2
# 352 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_2
# 353 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 354 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_1, MSGBOX_AUTOCLOSE
# 355 "data/maps/headoffice/scripts.pory"
	closemessage
# 356 "data/maps/headoffice/scripts.pory"
	waitmessage
# 357 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, Leaftourend_Movement_3
# 358 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, Leaftourend_Movement_3
# 359 "data/maps/headoffice/scripts.pory"
	waitmovementall
# 360 "data/maps/headoffice/scripts.pory"
	special SpawnCameraObject
# 361 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, Leaftourend_Movement_1
# 362 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 363 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_2, MSGBOX_AUTOCLOSE
# 364 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 365 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_3, MSGBOX_AUTOCLOSE
# 366 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 367 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_4, MSGBOX_AUTOCLOSE
# 368 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 369 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5
# 370 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 371 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_6, MSGBOX_AUTOCLOSE
# 372 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 373 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_5, MSGBOX_AUTOCLOSE
# 374 "data/maps/headoffice/scripts.pory"
	applymovement 0x7F, serenametmov7
# 375 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 376 "data/maps/headoffice/scripts.pory"
	special RemoveCameraObject
# 377 "data/maps/headoffice/scripts.pory"
	speakername Leafmet1_Text_0
# 378 "data/maps/headoffice/scripts.pory"
	msgbox Leaftourend_Text_7, MSGBOX_AUTOCLOSE
# 379 "data/maps/headoffice/scripts.pory"
	applymovement 0xFD, serenametmov7
# 380 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 381 "data/maps/headoffice/scripts.pory"
	destroyfollowernpc
# 382 "data/maps/headoffice/scripts.pory"
	setflag FLAG_LEAFMET
# 383 "data/maps/headoffice/scripts.pory"
	setvar VAR_ACADEMY_START, 7
# 384 "data/maps/headoffice/scripts.pory"
	release
	return


# 388 "data/maps/headoffice/scripts.pory"
serenametmov7:
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
# 389 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 392 "data/maps/headoffice/scripts.pory"
serenametmov5:
# 393 "data/maps/headoffice/scripts.pory"
	walk_left
# 394 "data/maps/headoffice/scripts.pory"
	walk_down
# 394 "data/maps/headoffice/scripts.pory"
	walk_down
# 394 "data/maps/headoffice/scripts.pory"
	walk_down
# 394 "data/maps/headoffice/scripts.pory"
	walk_down
# 394 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 396 "data/maps/headoffice/scripts.pory"
serenametmov6:
# 397 "data/maps/headoffice/scripts.pory"
	delay_16
# 398 "data/maps/headoffice/scripts.pory"
	walk_down
# 398 "data/maps/headoffice/scripts.pory"
	walk_down
# 398 "data/maps/headoffice/scripts.pory"
	walk_down
# 398 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

HeadOfficeAfterTrial1::
# 402 "data/maps/headoffice/scripts.pory"
	lock
# 403 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, HeadOfficeAfterTrial1_Movement_0
# 404 "data/maps/headoffice/scripts.pory"
	waitmovement 0
# 405 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 406 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_1
# 407 "data/maps/headoffice/scripts.pory"
	closemessage
# 408 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, HeadOfficeAfterTrial1_Movement_1
# 409 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 410 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_2
# 411 "data/maps/headoffice/scripts.pory"
	closemessage
# 412 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 413 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_3
# 414 "data/maps/headoffice/scripts.pory"
	closemessage
# 415 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 416 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_4
# 417 "data/maps/headoffice/scripts.pory"
	closemessage
# 418 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 419 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_5
# 420 "data/maps/headoffice/scripts.pory"
	closemessage
# 421 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 422 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_6
# 423 "data/maps/headoffice/scripts.pory"
	closemessage
# 424 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 425 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_7
# 426 "data/maps/headoffice/scripts.pory"
	closemessage
# 427 "data/maps/headoffice/scripts.pory"
	playse SE_PIN
# 428 "data/maps/headoffice/scripts.pory"
	applymovement 1, Leafmet1_Movement_3
# 429 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 430 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_8
# 431 "data/maps/headoffice/scripts.pory"
	closemessage
# 432 "data/maps/headoffice/scripts.pory"
	delay 20
# 433 "data/maps/headoffice/scripts.pory"
	waitbuttonpress
# 434 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 435 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_9
# 436 "data/maps/headoffice/scripts.pory"
	closemessage
# 437 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 438 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_10
# 439 "data/maps/headoffice/scripts.pory"
	closemessage
# 440 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 441 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_11
# 442 "data/maps/headoffice/scripts.pory"
	closemessage
# 443 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 444 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_12
# 445 "data/maps/headoffice/scripts.pory"
	closemessage
# 446 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 447 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_13
# 448 "data/maps/headoffice/scripts.pory"
	closemessage
# 449 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 450 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_14
# 451 "data/maps/headoffice/scripts.pory"
	closemessage
# 452 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 453 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_15
# 454 "data/maps/headoffice/scripts.pory"
	closemessage
# 455 "data/maps/headoffice/scripts.pory"
	applymovement 0xFF, HeadOfficeAfterTrial1_Movement_2
# 456 "data/maps/headoffice/scripts.pory"
	speakername Xylar1
# 457 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_16
# 458 "data/maps/headoffice/scripts.pory"
	closemessage
# 459 "data/maps/headoffice/scripts.pory"
	applymovement 1, HeadOfficeAfterTrial1_Movement_3
# 460 "data/maps/headoffice/scripts.pory"
	speakername HeadOfficeAfterTrial1_Text_0
# 461 "data/maps/headoffice/scripts.pory"
	msgbox HeadOfficeAfterTrial1_Text_17
# 462 "data/maps/headoffice/scripts.pory"
	closemessage
# 463 "data/maps/headoffice/scripts.pory"
	addhours 2
# 464 "data/maps/headoffice/scripts.pory"
	fwdweekday 1
# 465 "data/maps/headoffice/scripts.pory"
	pausefakertc
# 466 "data/maps/headoffice/scripts.pory"
	setvar VAR_ACADEMY_START, 12
# 467 "data/maps/headoffice/scripts.pory"
	setvar VAR_ACADEMY_CLASS, 1
# 468 "data/maps/headoffice/scripts.pory"
	setvar VAR_BATTLE_THEORY, 1
	return


# 110 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_0:
# 110 "data/maps/headoffice/scripts.pory"
	emote_happy
	step_end

# 125 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_1:
# 125 "data/maps/headoffice/scripts.pory"
	face_up
	step_end

# 132 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_2:
# 132 "data/maps/headoffice/scripts.pory"
	face_right
	step_end

# 134 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_3:
# 134 "data/maps/headoffice/scripts.pory"
	emote_exclamation_mark
	step_end

# 138 "data/maps/headoffice/scripts.pory"
Leafmet1_Movement_4:
# 138 "data/maps/headoffice/scripts.pory"
	emote_upset
	step_end

# 191 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_0:
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
# 191 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_1:
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
# 196 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 198 "data/maps/headoffice/scripts.pory"
LeaftourBattleTheory_Movement_2:
# 198 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 259 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_0:
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
# 259 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/headoffice/scripts.pory"
LeaftourItemstrategy_Movement_1:
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
# 264 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 310 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_0:
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_left
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
# 310 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 315 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_1:
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_down
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
# 315 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 317 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_2:
# 317 "data/maps/headoffice/scripts.pory"
	walk_right
	step_end

# 318 "data/maps/headoffice/scripts.pory"
Leaftourlib_Movement_3:
# 318 "data/maps/headoffice/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_0:
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
# 342 "data/maps/headoffice/scripts.pory"
	walk_left
# 342 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 343 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_1:
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
# 343 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 351 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_2:
# 351 "data/maps/headoffice/scripts.pory"
	face_left
	step_end

# 357 "data/maps/headoffice/scripts.pory"
Leaftourend_Movement_3:
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
# 357 "data/maps/headoffice/scripts.pory"
	walk_down
	step_end

# 403 "data/maps/headoffice/scripts.pory"
HeadOfficeAfterTrial1_Movement_0:
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_right
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
# 403 "data/maps/headoffice/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/headoffice/scripts.pory"
HeadOfficeAfterTrial1_Movement_1:
# 408 "data/maps/headoffice/scripts.pory"
	walk_left
# 408 "data/maps/headoffice/scripts.pory"
	face_up
	step_end

# 455 "data/maps/headoffice/scripts.pory"
HeadOfficeAfterTrial1_Movement_2:
# 455 "data/maps/headoffice/scripts.pory"
	walk_in_place_up
	step_end

# 459 "data/maps/headoffice/scripts.pory"
HeadOfficeAfterTrial1_Movement_3:
# 459 "data/maps/headoffice/scripts.pory"
	walk_in_place_down
	step_end

Head_Text_0:
# 36 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}, I trust your journey here\n"
	.string "was uneventful.\p"
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
	.string "{PLAYER} recieved {STR_VAR_1}.$"

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
# 111 "data/maps/headoffice/scripts.pory"
	.string "Leaf$"

Leafmet1_Text_1:
# 112 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}There you are!\p"
	.string "I'm Leaf, your assigned mentor.\p"
	.string "Lucky you, right?$"

Leafmet1_Text_2:
# 120 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't need a mentor.$"

Leafmet1_Text_3:
# 122 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Well, that's too bad.\p"
	.string "Rules are rules.\p"
	.string "You're stuck with me, like it or not.$"

Leafmet1_Text_4:
# 127 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}If you're expecting me to follow your\n"
	.string "lead then do yourself a favor.\p"
	.string "Find someone else.$"

Leafmet1_Text_5:
# 136 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_SHOCK}{COLOR RED}{SHADOW LIGHT_GRAY}You've got quite the attitude.$"

Leafmet1_Text_6:
# 140 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_ANGRY}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I don't care if you think you don't\n"
	.string "need help.$"

Leafmet1_Text_7:
# 142 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}I'm here to make sure you don't blow\n"
	.string "something up.$"

Leafmet1_Text_8:
# 144 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Do what you like.\p"
	.string "Just don't get in my way.$"

Leafmet1_Text_9:
# 146 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Deal.\p"
	.string "You might be all broody, but I bet you'll\n"
	.string "come around eventually.\p"
	.string "I'm pretty good at breaking through\n"
	.string "tough shells.$"

Leafmet1_Text_10:
# 149 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't count on it.$"

Leafmet1_Text_11:
# 152 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Now that you have accepted my help, let\n"
	.string "me show you around.$"

Leafmet1_Text_12:
# 156 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}Huh?\p"
	.string "I never di..$"

Leafmet1_Text_13:
# 158 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_JOY}{COLOR RED}{SHADOW LIGHT_GRAY}Let's gooo!$"

Leafmet1_Text_14:
# 163 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ugh!$"

Leafmet1_Text_15:
# 165 "data/maps/headoffice/scripts.pory"
	.string "Leaf decided to join you!$"

Leafmet1_Text_16:
# 172 "data/maps/headoffice/scripts.pory"
	.string "You are now free to explore the\n"
	.string "Academy.\p"
	.string "Visit different rooms to learn how\n"
	.string "things work here.\p"
	.string "Some rooms may reveal useful\n"
	.string "information.$"

LeaftourBattleTheory_Text_0:
# 194 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Theory Class.\p"
	.string "Types, matchups, timing.\p"
	.string "Even strong trainers lose if they skip\n"
	.string "the basics.$"

LeaftourItemTheory_Text_0:
# 211 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Theory Class.\p"
	.string "Held items, effects, synergy.\p"
	.string "Held items are more important than some\n"
	.string "people think.\p"
	.string "If used correctly, they can decide the\n"
	.string "outcome of the battle.$"

LeaftourArt_Text_0:
# 228 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}This is the art room.\p"
	.string "Some trainers sketch Pokémon, others\n"
	.string "design battle maps.\p"
	.string "Not everything here is about fighting.$"

LeaftourLab_Text_0:
# 245 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The lab.\p"
	.string "Pokémon biology, move mechanics,\n"
	.string "evolution research.\p"
	.string "Knowledge keeps you alive when\n"
	.string "strength isn't enough.$"

LeaftourItemstrategy_Text_0:
# 262 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Item Strategy Classroom.\p"
	.string "Here you will learn how items are used\n"
	.string "efficiently in battle.$"

Leaftourbattlestrategy_Text_0:
# 279 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Battle Strategy Classroom.\p"
	.string "Reading opponents. Setting traps.\n"
	.string "Predicting habits.\p"
	.string "This is where raw power stops being\n"
	.string "enough.$"

Leaftourdojo_Text_0:
# 295 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The dojo.\p"
	.string "Everything you learn in class will be\n"
	.string "tested here against other students.$"

Leaftourlib_Text_0:
# 313 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The library.\p"
	.string "Records, old battles, history.\p"
	.string "Some sections are off-limits.\p"
	.string "And yes, they will notice if you sneak\n"
	.string "in.$"

Leaftourend_Text_0:
# 348 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Dorms are on the right.$"

Leaftourend_Text_1:
# 354 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}While on the left, The Lighthouse.\p"
	.string "But students are not allowed to go in.$"

Leaftourend_Text_2:
# 363 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}The Training Grounds.\p"
	.string "This is where real fun happens.\p"
	.string "You'll get plenty of chances to show\n"
	.string "your skills here.\p"
	.string "OR.....\p"
	.string "Do you think you're too good for\n"
	.string "practice?$"

Leaftourend_Text_3:
# 365 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Results are all that matter and I don't\n"
	.string "care how I get them.$"

Leaftourend_Text_4:
# 367 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Results come from experience, you know.\p"
	.string "Let me guess, you think you can handle\n"
	.string "everything on your own.$"

Leaftourend_Text_5:
# 369 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

Leaftourend_Text_6:
# 371 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Look, I get it.\p"
	.string "You've got your walls up but you'll see\n"
	.string "doing it alone doesn't always work.\p"
	.string "Maybe Torchic will teach you that.$"

Leaftourend_Text_7:
# 378 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_LEAF}{EMOTE_NORMAL}{COLOR RED}{SHADOW LIGHT_GRAY}Anyways.\p"
	.string "You should head to the reception to\n"
	.string "pick up your dorm room keys.\p"
	.string "I'll be going now.$"

HeadOfficeAfterTrial1_Text_0:
# 405 "data/maps/headoffice/scripts.pory"
	.string "Alistair$"

HeadOfficeAfterTrial1_Text_1:
# 406 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}{PLAYER}, take a seat.$"

HeadOfficeAfterTrial1_Text_2:
# 410 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}I watched your battle. You made the\n"
	.string "right decisions every time.\p"
	.string "Precise. Calculated. Most first years\n"
	.string "panic under pressure.\p"
	.string "You didn't.$"

HeadOfficeAfterTrial1_Text_3:
# 413 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Should I have panicked instead?$"

HeadOfficeAfterTrial1_Text_4:
# 416 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}No, but it concerns me.$"

HeadOfficeAfterTrial1_Text_5:
# 419 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Why?$"

HeadOfficeAfterTrial1_Text_6:
# 422 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Because you fought like someone with\n"
	.string "nothing to lose.$"

HeadOfficeAfterTrial1_Text_7:
# 425 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_REALIZE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Isn't that true?\p"
	.string "There's no one waiting for me.$"

HeadOfficeAfterTrial1_Text_8:
# 430 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}...$"

HeadOfficeAfterTrial1_Text_9:
# 435 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}This Academy isn't a cage, {PLAYER}.$"

HeadOfficeAfterTrial1_Text_10:
# 438 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Is that all?$"

HeadOfficeAfterTrial1_Text_11:
# 441 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No. Practical matters.\p"
	.string "Your class schedule is posted in the\n"
	.string "locker room hallway.\p"
	.string "Two lectures daily, one morning, one\n"
	.string "afternoon.\p"
	.string "Attendance is mandatory for first\n"
	.string "years.$"

HeadOfficeAfterTrial1_Text_12:
# 444 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Understood.$"

HeadOfficeAfterTrial1_Text_13:
# 447 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You can battle students in the training\n"
	.string "grounds after 6pm.$"

HeadOfficeAfterTrial1_Text_14:
# 450 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Anything else?$"

HeadOfficeAfterTrial1_Text_15:
# 453 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Your father believed strength without\n"
	.string "purpose was just destruction.\p"
	.string "Don't prove him wrong.$"

HeadOfficeAfterTrial1_Text_16:
# 457 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_NORM}{COLOR BLUE}{SHADOW LIGHT_GRAY}Am I dismissed?$"

HeadOfficeAfterTrial1_Text_17:
# 461 "data/maps/headoffice/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_ALISTAIR}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, Your first class should be starting\n"
	.string "now.$"
