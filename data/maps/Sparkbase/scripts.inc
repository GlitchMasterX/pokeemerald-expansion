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
	trainerbattle_single SPARK_GRUNT_2, Grunt2_Intro, Grunt2_Outro
# 22 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt2, MSGBOX_AUTOCLOSE
# 23 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark3::
# 34 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_3, Grunt3_Intro, Grunt3_Outro
# 35 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt3, MSGBOX_AUTOCLOSE
# 36 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark4::
# 47 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_4, Grunt4_Intro, Grunt4_Outro
# 48 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt4, MSGBOX_AUTOCLOSE
# 49 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark5::
# 69 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_5, Grunt5_Intro, Grunt5_Outro
# 70 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt5, MSGBOX_AUTOCLOSE
# 71 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark6::
# 85 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_6, Grunt6_Intro, Grunt6_Outro, surgeb
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
	setflag FLAG_UNUSED_0x267
# 111 "data/maps/Sparkbase/scripts.pory"
	special SpawnCameraObject
# 112 "data/maps/Sparkbase/scripts.pory"
	playbgm MUS_DP_GALACTIC_HQ_BASEMENT, TRUE
# 113 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 114 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 115 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surd
# 116 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 117 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 118 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, camera4
# 119 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 120 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 121 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 123 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_1, MSGBOX_AUTOCLOSE
# 124 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 125 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_2, MSGBOX_AUTOCLOSE
# 126 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 127 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 128 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surde
# 129 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 130 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 131 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 132 "data/maps/Sparkbase/scripts.pory"
	special RemoveCameraObject
# 133 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 134 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_3, MSGBOX_AUTOCLOSE
# 135 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 136 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_4, MSGBOX_AUTOCLOSE
# 137 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_0
# 138 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 139 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_5, MSGBOX_AUTOCLOSE
# 140 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_1
# 141 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 142 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_6, MSGBOX_AUTOCLOSE
# 143 "data/maps/Sparkbase/scripts.pory"
	playse SE_PIN
# 144 "data/maps/Sparkbase/scripts.pory"
	applymovement 0xFF, Surgebattle_Movement_2
# 145 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 146 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_7, MSGBOX_AUTOCLOSE
# 147 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 148 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_3
# 149 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 150 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_8, MSGBOX_AUTOCLOSE
# 151 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 152 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_4
# 153 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 154 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_9, MSGBOX_AUTOCLOSE
# 155 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 156 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_5
# 157 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 158 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_10, MSGBOX_AUTOCLOSE
# 159 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 160 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_11, MSGBOX_AUTOCLOSE
# 161 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_6
# 162 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 163 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_12, MSGBOX_AUTOCLOSE
# 164 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 165 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_13, MSGBOX_AUTOCLOSE
# 166 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 167 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, Surgebattle_Movement_7
# 168 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 169 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_14, MSGBOX_AUTOCLOSE
# 170 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 171 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_no_intro SPARK_ADMIN_SURGE, surgelose
# 172 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 173 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_15, MSGBOX_AUTOCLOSE
# 174 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_16
# 175 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_17
# 176 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 177 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_18, MSGBOX_AUTOCLOSE
# 178 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 179 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 180 "data/maps/Sparkbase/scripts.pory"
	playse SE_PIN
# 181 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, exclam
# 182 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 183 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_19, MSGBOX_AUTOCLOSE
# 184 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 185 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_20, MSGBOX_AUTOCLOSE
# 186 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 187 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, fireball
# 188 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 189 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 190 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_21, MSGBOX_AUTOCLOSE
# 191 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_16
# 192 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_22
# 193 "data/maps/Sparkbase/scripts.pory"
	playfirstmoncry
# 194 "data/maps/Sparkbase/scripts.pory"
	waitmoncry
# 195 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, visible
# 196 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, visible
# 197 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, visible
# 198 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 199 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f0
# 200 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f0
# 201 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f0
# 202 "data/maps/Sparkbase/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 203 "data/maps/Sparkbase/scripts.pory"
	waitse
# 204 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 205 "data/maps/Sparkbase/scripts.pory"
	setfollowernpc 10, 0x4, 0
# 206 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, visible
# 207 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 208 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f1
# 209 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f2
# 210 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f3
# 211 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 212 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 213 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 214 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 215 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 216 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_23, MSGBOX_AUTOCLOSE
# 217 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 218 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, startcrim
# 219 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 220 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 221 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_24, MSGBOX_AUTOCLOSE
# 222 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_25, MSGBOX_AUTOCLOSE
# 224 "data/maps/Sparkbase/scripts.pory"
	destroyfollowernpc
# 225 "data/maps/Sparkbase/scripts.pory"
	initclock 10, 20
# 226 "data/maps/Sparkbase/scripts.pory"
	pausefakertc
# 227 "data/maps/Sparkbase/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 10
# 228 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 229 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
# 230 "data/maps/Sparkbase/scripts.pory"
	release
	return


# 236 "data/maps/Sparkbase/scripts.pory"
startcrim:
# 237 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 238 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 239 "data/maps/Sparkbase/scripts.pory"
	face_right
	step_end

# 242 "data/maps/Sparkbase/scripts.pory"
surd:
# 243 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
# 244 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 246 "data/maps/Sparkbase/scripts.pory"
surde:
# 247 "data/maps/Sparkbase/scripts.pory"
	face_up
# 248 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 249 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

surgeb::
# 252 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 253 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 254 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 255 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 256 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 257 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbat
# 258 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 259 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 260 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 262 "data/maps/Sparkbase/scripts.pory"
sbat:
# 263 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

surgebw::
# 266 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbatw
# 267 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 268 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 270 "data/maps/Sparkbase/scripts.pory"
sbatw:
# 271 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 272 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 275 "data/maps/Sparkbase/scripts.pory"
f0:
# 276 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 278 "data/maps/Sparkbase/scripts.pory"
fireball:
# 279 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 280 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 280 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 280 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 281 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 282 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 284 "data/maps/Sparkbase/scripts.pory"
f1:
# 285 "data/maps/Sparkbase/scripts.pory"
	walk_left
	step_end

# 288 "data/maps/Sparkbase/scripts.pory"
f2:
# 289 "data/maps/Sparkbase/scripts.pory"
	walk_right
	step_end

# 292 "data/maps/Sparkbase/scripts.pory"
f3:
# 293 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_0:
# 137 "data/maps/Sparkbase/scripts.pory"
	walk_down
# 137 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 137 "data/maps/Sparkbase/scripts.pory"
	delay_16
	step_end

# 140 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_1:
# 140 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 140 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 140 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 140 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 140 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 144 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_2:
# 144 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_3:
# 148 "data/maps/Sparkbase/scripts.pory"
	face_down
# 148 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 148 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 152 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_4:
# 152 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 152 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 156 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_5:
# 156 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 161 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_6:
# 161 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 161 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 167 "data/maps/Sparkbase/scripts.pory"
Surgebattle_Movement_7:
# 167 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 167 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

Surgebattle_Text_0:
# 121 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}So it's true...\p"
	.string "The brat survived.\p"
	.string "Aurther's son, standing here before me.$"

Surgebattle_Text_1:
# 123 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Mother?!$"

Surgebattle_Text_2:
# 125 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Heh... Mother?\p"
	.string "You mean that thing.\p"
	.string "She lasted longer than most.$"

Surgebattle_Text_3:
# 134 "data/maps/Sparkbase/scripts.pory"
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
# 136 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}WHAT did you just call her?!$"

Surgebattle_Text_5:
# 139 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Struck a nerve, did I?\p"
	.string "Good.$"

Surgebattle_Text_6:
# 142 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}She was strong, but in the end she was\n"
	.string "flawed.\p"
	.string "All of you are.\p"
	.string "And that's why your father had to die\n"
	.string "too.$"

Surgebattle_Text_7:
# 146 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}My father?!\p"
	.string "Why would you kill the man who saved\n"
	.string "this region?! He fought for justice-he\l"
	.string "fought for everyone!$"

Surgebattle_Text_8:
# 150 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Justice...\p"
	.string "Equality...\p"
	.string "Naive dreams.\p"
	.string "Your father was the strongest trainer\n"
	.string "alive, leading the mightiest force in\l"
	.string "this world.\p"
	.string "But he wasted it all clinging to\n"
	.string "weakness.\p"
	.string "He believed flaws make us human.\p"
	.string "That imperfection had value.\p"
	.string "He could never see what we see.$"

Surgebattle_Text_9:
# 154 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}We don't worship flaws.\p"
	.string "We erase them.\p"
	.string "Perfection is all that matters.\p"
	.string "A world without hunger, without\n"
	.string "conflict, without weakness.\p"
	.string "Your father's ideals stood in the way of\n"
	.string "that.$"

Surgebattle_Text_10:
# 158 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}So we cut him down, like we did your\n"
	.string "mother.\p"
	.string "The perfect world has no room for\n"
	.string "broken men... or their families.$"

Surgebattle_Text_11:
# 160 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Perfection...? You call that\n"
	.string "perfection?\p"
	.string "You experiment on people, torture them,\n"
	.string "slaughter them... for what?\p"
	.string "For a world without flaws?!\p"
	.string "If that's your perfect world-\p"
	.string "then I'll burn it to the ground!$"

Surgebattle_Text_12:
# 163 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Big words from a boy shaking in his\n"
	.string "father's shadow.\p"
	.string "You're nothing compared to the vision\n"
	.string "we serve.\p"
	.string "Your revenge ends here.$"

Surgebattle_Text_13:
# 165 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}No.\p"
	.string "This is where it begins.$"

Surgebattle_Text_14:
# 169 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Bring it on, brat.$"

Surgebattle_Text_15:
# 173 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Hah... lucky brat.\p"
	.string "Aurther weakened my team before you\n"
	.string "arrived.\p"
	.string "Next time, you won't be so fortunate.$"

Surgebattle_Text_16:
# 174 "data/maps/Sparkbase/scripts.pory"
	.string "Mewtwo$"

Surgebattle_Text_17:
# 175 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_18:
# 177 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}There won't be a next time...$"

Surgebattle_Text_19:
# 183 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the-?!$"

Surgebattle_Text_20:
# 185 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo!$"

Surgebattle_Text_21:
# 190 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Use Fire Blast!$"

Surgebattle_Text_22:
# 192 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_23:
# 216 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Surge... you were just the first.\p"
	.string "This {COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} begins with your\n"
	.string "blood.\p"
	.string "And it won't end until every last one of\n"
	.string "you is erased.$"

Surgebattle_Text_24:
# 221 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm sorry, Mom... I couldn't save you.\p"
	.string "I couldn't save Dad.\p"
	.string "I couldn't save Mira...\p"
	.string "But I swear-I'll destroy them all.\p"
	.string "They call this a path to perfection.\p"
	.string "Then let them see what true\n"
	.string "destruction is.\p"
	.string "The {COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} will echo until\n"
	.string "their perfect world rots into dust.\p"
	.string "This is my promise.$"

Surgebattle_Text_25:
# 223 "data/maps/Sparkbase/scripts.pory"
	.string "A few days later........$"

surgeb_Text_0:
# 259 "data/maps/Sparkbase/scripts.pory"
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
# 232 "data/maps/Sparkbase/scripts.pory"
	.string "I was stronger than you, How could I\n"
	.string "lose?$"
