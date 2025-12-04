Sparkbase_MapScripts::
# 2 "data/maps/Sparkbase/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ruins
	.byte 0


Ruins::
# 5 "data/maps/Sparkbase/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_gt Ruins_1
	return

Ruins_1:
# 6 "data/maps/Sparkbase/scripts.pory"
	removeobject 1
# 7 "data/maps/Sparkbase/scripts.pory"
	removeobject 3
# 8 "data/maps/Sparkbase/scripts.pory"
	removeobject 5
# 9 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 10 "data/maps/Sparkbase/scripts.pory"
	removeobject 7
# 11 "data/maps/Sparkbase/scripts.pory"
	removeobject 8
# 12 "data/maps/Sparkbase/scripts.pory"
	removeobject 9
# 13 "data/maps/Sparkbase/scripts.pory"
	removeobject 10
# 14 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 15 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 16 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 17 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_UNUSED_0x4B8
	return


spark2::
# 21 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single EQUINO_GRUNT_2, Grunt2_Intro, Grunt2_Outro
# 22 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt2, MSGBOX_AUTOCLOSE
# 23 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark3::
# 34 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single EQUINO_GRUNT_3, Grunt3_Intro, Grunt3_Outro
# 35 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt3, MSGBOX_AUTOCLOSE
# 36 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark4::
# 47 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single EQUINO_GRUNT_4, Grunt4_Intro, Grunt4_Outro
# 48 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt4, MSGBOX_AUTOCLOSE
# 49 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark5::
# 69 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single EQUINO_GRUNT_5, Grunt5_Intro, Grunt5_Outro
# 70 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt5, MSGBOX_AUTOCLOSE
# 71 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark6::
# 85 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single EQUINO_GRUNT_6, Grunt6_Intro, Grunt6_Outro, surgeb
# 86 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt6, MSGBOX_AUTOCLOSE
# 87 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 88 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
	end


Surgebattle::
# 102 "data/maps/Sparkbase/scripts.pory"
	lock
# 103 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 104 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 105 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 106 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 107 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 108 "data/maps/Sparkbase/scripts.pory"
	special HealPlayerParty
# 109 "data/maps/Sparkbase/scripts.pory"
	hidefollower
# 110 "data/maps/Sparkbase/scripts.pory"
	special SpawnCameraObject
# 111 "data/maps/Sparkbase/scripts.pory"
	playbgm MUS_DP_GALACTIC_HQ_BASEMENT, TRUE
# 112 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 113 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 114 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surd
# 115 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 116 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 117 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, camera4
# 118 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 119 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 120 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_0, MSGBOX_AUTOCLOSE
# 121 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 122 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_1, MSGBOX_AUTOCLOSE
# 123 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 124 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_2, MSGBOX_AUTOCLOSE
# 125 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 126 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 127 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surde
# 128 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 129 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 130 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 131 "data/maps/Sparkbase/scripts.pory"
	special RemoveCameraObject
# 132 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 133 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_3, MSGBOX_AUTOCLOSE
# 134 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 135 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_4, MSGBOX_AUTOCLOSE
# 136 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_0
# 137 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 138 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_5, MSGBOX_AUTOCLOSE
# 139 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_1
# 140 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 141 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_6, MSGBOX_AUTOCLOSE
# 142 "data/maps/Sparkbase/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Sparkbase/scripts.pory"
	applymovement 0xFF, Surgebattle_Movement_2
# 144 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 145 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_7, MSGBOX_AUTOCLOSE
# 146 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 147 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_3
# 148 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 149 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_8, MSGBOX_AUTOCLOSE
# 150 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 151 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_9, MSGBOX_AUTOCLOSE
# 152 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 153 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_4
# 154 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 155 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_10, MSGBOX_AUTOCLOSE
# 156 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 157 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_5
# 158 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 159 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_11, MSGBOX_AUTOCLOSE
# 160 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 161 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_12, MSGBOX_AUTOCLOSE
# 162 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_6
# 163 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 164 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_13, MSGBOX_AUTOCLOSE
# 165 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 166 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_14, MSGBOX_AUTOCLOSE
# 167 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 168 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_7
# 169 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 170 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_15, MSGBOX_AUTOCLOSE
# 171 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 172 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_no_intro SPARK_ADMIN_SURGE, surgelose
# 173 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 174 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_16, MSGBOX_AUTOCLOSE
# 175 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_17
# 176 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_18
# 177 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 178 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_19, MSGBOX_AUTOCLOSE
# 179 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 180 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 181 "data/maps/Sparkbase/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, exclam
# 183 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 184 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_20, MSGBOX_AUTOCLOSE
# 185 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 186 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_21, MSGBOX_AUTOCLOSE
# 187 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 188 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, fireball
# 189 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 190 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 191 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_22, MSGBOX_AUTOCLOSE
# 192 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_17
# 193 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_23
# 194 "data/maps/Sparkbase/scripts.pory"
	playfirstmoncry
# 195 "data/maps/Sparkbase/scripts.pory"
	waitmoncry
# 196 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, visible
# 197 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, visible
# 198 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, visible
# 199 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 200 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f0
# 201 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f0
# 202 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f0
# 203 "data/maps/Sparkbase/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 204 "data/maps/Sparkbase/scripts.pory"
	waitse
# 205 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 206 "data/maps/Sparkbase/scripts.pory"
	setfollowernpc 10, 0x4, 0
# 207 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, visible
# 208 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 209 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f1
# 210 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f2
# 211 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f3
# 212 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 213 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 214 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 215 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 216 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 217 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_24, MSGBOX_AUTOCLOSE
# 218 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 219 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, startcrim
# 220 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 221 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 222 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_25, MSGBOX_AUTOCLOSE
# 223 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_26, MSGBOX_AUTOCLOSE
# 225 "data/maps/Sparkbase/scripts.pory"
	destroyfollowernpc
# 226 "data/maps/Sparkbase/scripts.pory"
	initclock 10, 20
# 227 "data/maps/Sparkbase/scripts.pory"
	pausefakertc
# 228 "data/maps/Sparkbase/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 10
# 229 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 230 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_ACADEMY_START
# 231 "data/maps/Sparkbase/scripts.pory"
	clearflag FLAG_NIHIL_FIRST
# 232 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
# 233 "data/maps/Sparkbase/scripts.pory"
	release
	return


# 239 "data/maps/Sparkbase/scripts.pory"
startcrim:
# 240 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 241 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 242 "data/maps/Sparkbase/scripts.pory"
	face_right
	step_end

# 245 "data/maps/Sparkbase/scripts.pory"
surd:
# 246 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
# 247 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 249 "data/maps/Sparkbase/scripts.pory"
surde:
# 250 "data/maps/Sparkbase/scripts.pory"
	face_up
# 251 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 252 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

surgeb::
# 255 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 256 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 257 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 258 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 259 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 260 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbat
# 261 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 262 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 263 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 265 "data/maps/Sparkbase/scripts.pory"
sbat:
# 266 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

surgebw::
# 269 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbatw
# 270 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 271 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 273 "data/maps/Sparkbase/scripts.pory"
sbatw:
# 274 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 275 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 278 "data/maps/Sparkbase/scripts.pory"
f0:
# 279 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 281 "data/maps/Sparkbase/scripts.pory"
fireball:
# 282 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 283 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 283 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 283 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 284 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 285 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 287 "data/maps/Sparkbase/scripts.pory"
f1:
# 288 "data/maps/Sparkbase/scripts.pory"
	walk_left
	step_end

# 291 "data/maps/Sparkbase/scripts.pory"
f2:
# 292 "data/maps/Sparkbase/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/Sparkbase/scripts.pory"
f3:
# 296 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_0:
# 136 "data/maps/Sparkbase/scripts.pory"
	walk_down
# 136 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 136 "data/maps/Sparkbase/scripts.pory"
	delay_16
	step_end

# 139 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_1:
# 139 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 139 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 139 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 139 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 139 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 143 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_2:
# 143 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
	step_end

# 147 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_3:
# 147 "data/maps/Sparkbase/scripts.pory"
	face_down
# 147 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 147 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_4:
# 153 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 153 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 157 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_5:
# 157 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 162 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_6:
# 162 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 162 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 168 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_7:
# 168 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 168 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

Surgebattle_Text_0:
# 120 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}So it's true...\p"
	.string "The brat survived.\p"
	.string "Aurther's son, standing here before me.$"

Surgebattle_Text_1:
# 122 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Mother?!$"

Surgebattle_Text_2:
# 124 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh... Mother?\p"
	.string "You mean that thing.\p"
	.string "She lasted longer than most.$"

Surgebattle_Text_3:
# 133 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}No one's ever survived a fusion with a\n"
	.string "Poison-type before.\p"
	.string "But she did.\p"
	.string "Even broken and screaming, she clung to\n"
	.string "life.\p"
	.string "She even tried to fight back against\n"
	.string "us.\p"
	.string "...So we put her down.\p"
	.string "That stubborn bitch never knew when to\n"
	.string "give up.$"

Surgebattle_Text_4:
# 135 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}WHAT did you just call her?!$"

Surgebattle_Text_5:
# 138 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Struck a nerve, did I?\p"
	.string "Good.$"

Surgebattle_Text_6:
# 141 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}She was strong, but in the end she was\n"
	.string "just another failure.\p"
	.string "All of you are, just like your father.$"

Surgebattle_Text_7:
# 145 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}My father?!\p"
	.string "Why would you kill the man who saved\n"
	.string "this region?!$"

Surgebattle_Text_8:
# 149 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Why?\p"
	.string "Because I was ordered to.\p"
	.string "That's all that matters.$"

Surgebattle_Text_9:
# 151 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Ordered?! By who?!\p"
	.string "Who gave you the right to murder my\n"
	.string "family?!$"

Surgebattle_Text_10:
# 155 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}That's not your concern, boy.\p"
	.string "I serve Lady Nova.\p"
	.string "Her word is absolute.\p"
	.string "She commands, I execute.\p"
	.string "That's all you need to know.$"

Surgebattle_Text_11:
# 159 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Your father was an obstacle.\p"
	.string "Your mother was... convenient.\p"
	.string "Your sister was collateral.\p"
	.string "All necessary sacrifices for something\n"
	.string "far greater than you could comprehend.$"

Surgebattle_Text_12:
# 161 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Something greater?!\p"
	.string "You murdered them for orders?\p"
	.string "For someone's vision?!$"

Surgebattle_Text_13:
# 164 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'd do it again without hesitation.\p"
	.string "Lady Nova's purpose is my purpose.\p"
	.string "Her mission is everything.\p"
	.string "And I'd give my life to see it realized.$"

Surgebattle_Text_14:
# 166 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Then let me help you with your\n"
	.string "sacrifice.$"

Surgebattle_Text_15:
# 170 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Big words, brat.\p"
	.string "Come on then.\p"
	.string "Show me what Aurther's blood can do.$"

Surgebattle_Text_16:
# 174 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah... lucky brat.\p"
	.string "Your father weakened my team.\p"
	.string "Next time, you won't be so fortunate.$"

Surgebattle_Text_17:
# 175 "data/maps/Sparkbase/scripts.pory"
	.string "Mewtwo$"

Surgebattle_Text_18:
# 176 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_19:
# 178 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}There won't be a next time...$"

Surgebattle_Text_20:
# 184 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?!$"

Surgebattle_Text_21:
# 186 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo!$"

Surgebattle_Text_22:
# 191 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Use Fire Blast!$"

Surgebattle_Text_23:
# 193 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_24:
# 217 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Surge... you were just the first.\p"
	.string "This {COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} begins with your\n"
	.string "blood.\p"
	.string "And it won't end until every last one of\n"
	.string "you is erased.$"

Surgebattle_Text_25:
# 222 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm sorry, Mom... I couldn't save you.\p"
	.string "I couldn't save Dad.\p"
	.string "I couldn't save Mira...\p"
	.string "But I swear-I'll destroy them all.\p"
	.string "They think their mission justifies\n"
	.string "everything.\p"
	.string "Then let them see what true\n"
	.string "destruction is.\p"
	.string "The {COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} will echo until\n"
	.string "their purpose burns to ash.\p"
	.string "This is my promise.$"

Surgebattle_Text_26:
# 224 "data/maps/Sparkbase/scripts.pory"
	.string "A few days later........$"

surgeb_Text_0:
# 262 "data/maps/Sparkbase/scripts.pory"
	.string "...$"

Grunt2_Intro::
# 27 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think you can outrun a lightning\n"
	.string "bolt? Think again!$"

Grunt2_Outro::
# 30 "data/maps/Sparkbase/scripts.pory"
	.string "Wha..?! You're tougher than I thought...\n"
	.string "but this isn't over!$"

Grunt3_Intro::
# 40 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}One zap, and you're done! Let's see if\n"
	.string "you can survive it!$"

Grunt3_Outro::
# 43 "data/maps/Sparkbase/scripts.pory"
	.string "Ugh, I can't believe this! You're just\n"
	.string "lucky. Next time, you won't be so\l"
	.string "fortunate!\p"
	.string "Xylar: There won't e any next time.$"

Grunt4_Intro::
# 53 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love the smell of static in the air…\n"
	.string "Time to shock you into submission!$"

Grunt4_Outro::
# 56 "data/maps/Sparkbase/scripts.pory"
	.string "Enjoy your victory... it won't last long.\p"
	.string "Xylar:This isn't about victory\n"
	.string "anymore... It's about making sure you\l"
	.string "never take another breath.$"

PostBattle_Grunt4::
# 59 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt3::
# 62 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt2::
# 65 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt5_Intro::
# 75 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You think you can stop us? Let's see\n"
	.string "how you handle the thunder!$"

Grunt5_Outro::
# 78 "data/maps/Sparkbase/scripts.pory"
	.string "Tch, enjoy your victory while you can.\n"
	.string "Spark always strikes again.$"

PostBattle_Grunt5::
# 81 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt6_Intro::
# 92 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're in over your head, kid. Spark's\n"
	.string "about to send you packing!$"

Grunt6_Outro::
# 95 "data/maps/Sparkbase/scripts.pory"
	.string "Impossible! How did you overpower us?!$"

PostBattle_Grunt6::
# 98 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

surgelose::
# 235 "data/maps/Sparkbase/scripts.pory"
	.string "I was stronger than you, How could I\n"
	.string "lose?$"
