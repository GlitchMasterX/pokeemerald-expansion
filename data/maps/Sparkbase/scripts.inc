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
	ballfollowingmon
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
	speakername surge
# 138 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_5, MSGBOX_AUTOCLOSE
# 139 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 140 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_6, MSGBOX_AUTOCLOSE
# 141 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 142 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_7, MSGBOX_AUTOCLOSE
# 143 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 144 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_8, MSGBOX_AUTOCLOSE
# 145 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 146 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_9, MSGBOX_AUTOCLOSE
# 147 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 148 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_10, MSGBOX_AUTOCLOSE
# 149 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 150 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_11, MSGBOX_AUTOCLOSE
# 151 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 152 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_12, MSGBOX_AUTOCLOSE
# 153 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 154 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_13, MSGBOX_AUTOCLOSE
# 155 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 156 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_14, MSGBOX_AUTOCLOSE
# 157 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 158 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_15, MSGBOX_AUTOCLOSE
# 159 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 160 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_no_intro SPARK_ADMIN_SURGE, surgelose
# 161 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 162 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_16, MSGBOX_AUTOCLOSE
# 163 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_17
# 164 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_18
# 165 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 166 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_19, MSGBOX_AUTOCLOSE
# 167 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 168 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 169 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, exclam
# 170 "data/maps/Sparkbase/scripts.pory"
	speakername surge
# 171 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_20, MSGBOX_AUTOCLOSE
# 173 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 174 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_21, MSGBOX_AUTOCLOSE
# 175 "data/maps/Sparkbase/scripts.pory"
	removefieldmugshot
# 176 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, fireball
# 177 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 178 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 179 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_22, MSGBOX_AUTOCLOSE
# 180 "data/maps/Sparkbase/scripts.pory"
	speakername Surgebattle_Text_17
# 181 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_23
# 182 "data/maps/Sparkbase/scripts.pory"
	playfirstmoncry
# 183 "data/maps/Sparkbase/scripts.pory"
	waitmoncry
# 184 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, visible
# 185 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, visible
# 186 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, visible
# 187 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 188 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f0
# 189 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f0
# 190 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f0
# 191 "data/maps/Sparkbase/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 192 "data/maps/Sparkbase/scripts.pory"
	waitse
# 193 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 194 "data/maps/Sparkbase/scripts.pory"
	setfollower 10, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, 0
# 195 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, visible
# 196 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 197 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f1
# 198 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f2
# 199 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f3
# 200 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 201 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 202 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 203 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 204 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 205 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_24, MSGBOX_AUTOCLOSE
# 207 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 208 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, startcrim
# 209 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 210 "data/maps/Sparkbase/scripts.pory"
	speakername Xylar1
# 211 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_25, MSGBOX_AUTOCLOSE
# 213 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_26, MSGBOX_AUTOCLOSE
# 215 "data/maps/Sparkbase/scripts.pory"
	destroyfollower
# 216 "data/maps/Sparkbase/scripts.pory"
	warpsilent MAP_LUXURA_ISLAND, 11, 10
# 217 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 218 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
# 219 "data/maps/Sparkbase/scripts.pory"
	release
	return


# 225 "data/maps/Sparkbase/scripts.pory"
startcrim:
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 228 "data/maps/Sparkbase/scripts.pory"
	face_right
	step_end

# 231 "data/maps/Sparkbase/scripts.pory"
surd:
# 232 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
# 233 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 235 "data/maps/Sparkbase/scripts.pory"
surde:
# 236 "data/maps/Sparkbase/scripts.pory"
	face_up
# 237 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 238 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

surgeb::
# 241 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 242 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 243 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 244 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 245 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 246 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbat
# 247 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 248 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 250 "data/maps/Sparkbase/scripts.pory"
sbat:
# 251 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

surgebw::
# 254 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbatw
# 255 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 256 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 258 "data/maps/Sparkbase/scripts.pory"
sbatw:
# 259 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 260 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 263 "data/maps/Sparkbase/scripts.pory"
f0:
# 264 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 266 "data/maps/Sparkbase/scripts.pory"
fireball:
# 267 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 268 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 268 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 268 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 269 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 270 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 272 "data/maps/Sparkbase/scripts.pory"
f1:
# 273 "data/maps/Sparkbase/scripts.pory"
	walk_left
	step_end

# 276 "data/maps/Sparkbase/scripts.pory"
f2:
# 277 "data/maps/Sparkbase/scripts.pory"
	walk_right
	step_end

# 280 "data/maps/Sparkbase/scripts.pory"
f3:
# 281 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

Surgebattle_Text_0:
# 121 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You're Aurther's kid, aren't you?$"

Surgebattle_Text_1:
# 123 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Mom?$"

Surgebattle_Text_2:
# 125 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom?\p"
	.string "Oh.. you mean that thing...$"

Surgebattle_Text_3:
# 134 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}She was a tough one.\p"
	.string "No one's ever survived a fusion with a\n"
	.string "Poison-type before, but she did.\p"
	.string "And even after all that...\n"
	.string "she still had a sliver of consciousness\l"
	.string "left.\p"
	.string "She even tried to take us down.\p"
	.string "But luckily, we recieved orders to put\n"
	.string "an end to that toxic bitch.$"

Surgebattle_Text_4:
# 136 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}You...What the fuck did you just called\n"
	.string "my Mom?$"

Surgebattle_Text_5:
# 138 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}Struck a nerve, did I?\p"
	.string "Heh... Not surprising.\p"
	.string "She was strong, I'll give her that. Even\n"
	.string "tried to kill us.\p"
	.string "But in the end, we were ordered to\n"
	.string "dispose of that TOXIC mistake. Guess\l"
	.string "her strength wasn't enough, huh?$"

Surgebattle_Text_6:
# 140 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_MAD}{COLOR BLUE}{SHADOW LIGHT_GRAY}You... You bastards... You... killed her?!\n"
	.string "You destroyed everything! I'll make you\l"
	.string "pay, I swear...$"

Surgebattle_Text_7:
# 142 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}Kid, you don't get it, do you? Your\n"
	.string "father, Aurther, saved the world once.\l"
	.string "He fought to stop Nexus Order from\l"
	.string "controlling Hoopa. But you know what\l"
	.string "they say, right?\p"
	.string "When a hero is too strong... he's always\n"
	.string "killed by the very people he saved.$"

Surgebattle_Text_8:
# 144 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}But why would you kill him?\p"
	.string "He was a hero, he saved you guys ...he\n"
	.string "saved the world.$"

Surgebattle_Text_9:
# 146 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You still don't get it.\p"
	.string "Why, you ask?\p"
	.string "Because no matter what, he would never\n"
	.string "understand.\p"
	.string "He led an organization that no one\n"
	.string "could defeat, but his ambitions didn't\l"
	.string "match the power of the organization.\p"
	.string "He clung to those narrow ideals of\n"
	.string "justice and equality, fighting crime\l"
	.string "like some glorified cop!\p"
	.string "Do you really believe that?\p"
	.string "We're not cops, we're the strongest.\p"
	.string "People fear going against us.\p"
	.string "He wasn't qualified to be our leader.$"

Surgebattle_Text_10:
# 148 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}But then HE joined. He had the ambition\n"
	.string "and the vision to lead us.\p"
	.string "He was destined to be our leader.$"

Surgebattle_Text_11:
# 150 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Your leader? So you killed my father\n"
	.string "because he wasn't qualified? Because\l"
	.string "he believed in justice and equality?!\p"
	.string "And now you follow someone who thinks\n"
	.string "ambition is all that matters?\p"
	.string "You're insane.$"

Surgebattle_Text_12:
# 152 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}He made Aurther step down from\n"
	.string "leadership as soon as he realized\l"
	.string "Aurther wasn't the one.\p"
	.string "You see...\n"
	.string "Everything has always been according\l"
	.string "to his plan.\p"
	.string "But your father tried to stop him and\n"
	.string "that's why he's dead.\p"
	.string "All he wants is to reshape this world\n"
	.string "into something far more perfect: a\l"
	.string "world with no ruler, where everyone is\l"
	.string "equal, where no one starves, and where\l"
	.string "wealth and status don't exist.\p"
	.string "That, he believes, We believe is true\n"
	.string "justice.$"

Surgebattle_Text_13:
# 154 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't give a damn about your leader or\n"
	.string "whatever twisted mess you've created.\n"
	.string "Let me make one thing crystal clear:\p"
	.string "No matter who you are I'll destroy every\n"
	.string "single one of you. If there are\l"
	.string "hundreds of you I'll wipe every last one\l"
	.string "off the map.\p"
	.string "And if, by some sick twist of fate, you\n"
	.string "manage to create your so-called\l"
	.string "PERFECT WORLD....\p"
	.string "I'LL BURN THAT {COLOR RED}{SHADOW LIGHT_GRAY}PERFECT WORLD {COLOR BLUE}{SHADOW LIGHT_GRAY}OF YOURS.$"

Surgebattle_Text_14:
# 156 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SMILE}{COLOR BLUE}{SHADOW LIGHT_GRAY}You've got guts, kid. But don't fool\n"
	.string "yourself..nothing you do will ever be\l"
	.string "enough to break us. We're more than\l"
	.string "just an organization, we're a force\l"
	.string "that's reshaping the world. And if you\l"
	.string "think you can stand in our way, you're in\l"
	.string "for a world of hurt.$"

Surgebattle_Text_15:
# 158 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}You can keep your delusions of\n"
	.string "grandeur. I've lost everything that\l"
	.string "mattered to me because of your kind.\l"
	.string "Every threat you make just fuels my\l"
	.string "rage.\p"
	.string "If you think you're unstoppable, then\n"
	.string "good. I want you to understand the full\l"
	.string "depth of what you've created...\p"
	.string "starting with you. I'll make sure you\n"
	.string "feel every bit of my pain and anger. It's\l"
	.string "time to settle this once and for all.$"

Surgebattle_Text_16:
# 162 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}You were lucky since Aurther injured my\n"
	.string "pokemon, they were not in the condition\l"
	.string "to fight but I'll defeat you next time\l"
	.string "since I'm stronger than you.$"

Surgebattle_Text_17:
# 163 "data/maps/Sparkbase/scripts.pory"
	.string "Mewtwo$"

Surgebattle_Text_18:
# 164 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_NORMAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_19:
# 166 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Let me tell you one thing, you see...\p"
	.string "I once heard someone saying that....\p"
	.string "Even the strongest can fall if you kill\n"
	.string "them.$"

Surgebattle_Text_20:
# 171 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_SURGE}{EMOTE_SHOCK}{COLOR BLUE}{SHADOW LIGHT_GRAY}What the ...$"

Surgebattle_Text_21:
# 174 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo!$"

Surgebattle_Text_22:
# 179 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Use FireBlast!$"

Surgebattle_Text_23:
# 181 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_MEWTWO}{EMOTE_SPECIAL}{COLOR BLUE}{SHADOW LIGHT_GRAY}......$"

Surgebattle_Text_24:
# 205 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_ANGRY}{COLOR BLUE}{SHADOW LIGHT_GRAY}Surge, you were just the start. This\n"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem {COLOR BLUE}{SHADOW LIGHT_GRAY}I've begun will be a\l"
	.string "symphony of retribution. Your death\l"
	.string "marks the first note in a melody of\l"
	.string "vengeance that will echo until everyone\l"
	.string "who wronged me has met their end. This\l"
	.string "is only the beginning.$"

Surgebattle_Text_25:
# 211 "data/maps/Sparkbase/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_XYLAR}{EMOTE_TEAR}{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm sorry, Mom... I failed you. I failed\n"
	.string "Dad. I failed Mira. But this… this isn't\l"
	.string "the end. I swear, they'll pay with\l"
	.string "everything they have. They stole you\l"
	.string "from me, and now… they'll face my wrath.\p"
	.string "They think they can reshape this world,\n"
	.string "make it perfect by taking everything I\l"
	.string "hold dear. But I'll show them what true\l"
	.string "destruction is. I'll bring them the blood\l"
	.string "and ruin they deserve.\p"
	.string "This is just the beginning... the {COLOR RED}{SHADOW LIGHT_GRAY}Crimson\n"
	.string "Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} will echo through their perfect\l"
	.string "world until it all crumbles into dust.\l"
	.string "They'll wish they'd never taken you\l"
	.string "away. I'll end them all... one by one.\p"
	.string "Let's go Mom.$"

Surgebattle_Text_26:
# 214 "data/maps/Sparkbase/scripts.pory"
	.string "A few days later........$"

surgeb_Text_0:
# 247 "data/maps/Sparkbase/scripts.pory"
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
# 221 "data/maps/Sparkbase/scripts.pory"
	.string "I was stronger than you, How could I\n"
	.string "lose?$"
