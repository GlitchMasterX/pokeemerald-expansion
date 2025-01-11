Sparkbase_MapScripts::
# 2 "data/maps/Sparkbase/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sparkbase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sparkbase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


spark2::
# 8 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_2, Grunt2_Intro, Grunt2_Outro
# 9 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt2, MSGBOX_AUTOCLOSE
# 10 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark3::
# 21 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_3, Grunt3_Intro, Grunt3_Outro
# 22 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt3, MSGBOX_AUTOCLOSE
# 23 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark4::
# 34 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_4, Grunt4_Intro, Grunt4_Outro
# 35 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt4, MSGBOX_AUTOCLOSE
# 36 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark5::
# 56 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_5, Grunt5_Intro, Grunt5_Outro
# 57 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt5, MSGBOX_AUTOCLOSE
# 58 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark6::
# 72 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_6, Grunt6_Intro, Grunt6_Outro, surgeb
# 73 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt6, MSGBOX_AUTOCLOSE
# 74 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 75 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
	end


Surgebattle::
# 89 "data/maps/Sparkbase/scripts.pory"
	lock
# 90 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 91 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 92 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 93 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 94 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 95 "data/maps/Sparkbase/scripts.pory"
	special HealPlayerParty
# 96 "data/maps/Sparkbase/scripts.pory"
	ballfollowingmon
# 97 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_UNUSED_0x267
# 98 "data/maps/Sparkbase/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/Sparkbase/scripts.pory"
	playbgm MUS_DP_GALACTIC_HQ_BASEMENT, TRUE
# 100 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 101 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 102 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surd
# 103 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 104 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 105 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, camera4
# 106 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 107 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 108 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 110 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 111 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_1, MSGBOX_AUTOCLOSE
# 112 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 113 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 114 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 116 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 117 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surde
# 118 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 119 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 120 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 121 "data/maps/Sparkbase/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 123 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_3, MSGBOX_AUTOCLOSE
# 124 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 125 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 126 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_4, MSGBOX_AUTOCLOSE
# 127 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 128 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 129 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_5, MSGBOX_AUTOCLOSE
# 130 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 131 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 132 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_6, MSGBOX_AUTOCLOSE
# 133 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 134 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 135 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_7, MSGBOX_AUTOCLOSE
# 136 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 137 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 138 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_8, MSGBOX_AUTOCLOSE
# 139 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 140 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 141 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_9, MSGBOX_AUTOCLOSE
# 142 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 143 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 144 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_10, MSGBOX_AUTOCLOSE
# 145 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 146 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 147 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_11, MSGBOX_AUTOCLOSE
# 148 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 149 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 150 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_12, MSGBOX_AUTOCLOSE
# 151 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 152 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 153 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_13, MSGBOX_AUTOCLOSE
# 154 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 155 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 156 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_14, MSGBOX_AUTOCLOSE
# 157 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 158 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_no_intro SPARK_ADMIN_SURGE, surgelose
# 159 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 160 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_15, MSGBOX_AUTOCLOSE
# 161 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 162 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 163 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_16, MSGBOX_AUTOCLOSE
# 164 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 165 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 166 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, exclam
# 167 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 168 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_17, MSGBOX_AUTOCLOSE
# 169 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 170 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 171 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_18, MSGBOX_AUTOCLOSE
# 172 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 173 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, fireball
# 174 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 175 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 176 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_19, MSGBOX_AUTOCLOSE
# 177 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 178 "data/maps/Sparkbase/scripts.pory"
	playfirstmoncry
# 179 "data/maps/Sparkbase/scripts.pory"
	waitmoncry
# 180 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, visible
# 181 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, visible
# 182 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, visible
# 183 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 184 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f0
# 185 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f0
# 186 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f0
# 187 "data/maps/Sparkbase/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 188 "data/maps/Sparkbase/scripts.pory"
	waitse
# 189 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 190 "data/maps/Sparkbase/scripts.pory"
	setfollower 10, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, 0
# 191 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, visible
# 192 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 193 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f1
# 194 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f2
# 195 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f3
# 196 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 197 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 198 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 199 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 200 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_UNUSED_0x4B8
# 201 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 202 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_20, MSGBOX_AUTOCLOSE
# 203 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 204 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 205 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, startcrim
# 206 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 207 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 208 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_21, MSGBOX_AUTOCLOSE
# 209 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 210 "data/maps/Sparkbase/scripts.pory"
	clearflag FLAG_AFTERTRAGEDY_MUSIC
# 211 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_TO_BLACK
# 212 "data/maps/Sparkbase/scripts.pory"
	playbgm MUS_RG_TEACHY_TV_MENU, TRUE
# 213 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_22, MSGBOX_AUTOCLOSE
# 214 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_23
# 215 "data/maps/Sparkbase/scripts.pory"
	warp MAP_NEWHOUSE, 2, 24
# 216 "data/maps/Sparkbase/scripts.pory"
	destroyfollower
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
# 108 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're Aurther's kid, aren't you?$"

Surgebattle_Text_1:
# 111 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Mom?$"

Surgebattle_Text_2:
# 114 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom?\p"
	.string "Oh.. you mean that thing...$"

Surgebattle_Text_3:
# 123 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She was a tough one.\p"
	.string "No one's ever survived a fusion with a\n"
	.string "Poison-type before, but she did.\p"
	.string "And even after all that...\n"
	.string "she still had a sliver of consciousness\l"
	.string "left.\p"
	.string "She even tried to take us down.\p"
	.string "But luckily, we recieved orders to put\n"
	.string "an end to that toxic bitch.$"

Surgebattle_Text_4:
# 126 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You...What the fuck did you just called\n"
	.string "my Mom?$"

Surgebattle_Text_5:
# 129 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Struck a nerve, did I?\p"
	.string "Heh... Not surprising.\p"
	.string "She was strong, I'll give her that. Even\n"
	.string "tried to kill us.\p"
	.string "But in the end, we were ordered to\n"
	.string "dispose of that TOXIC mistake. Guess\l"
	.string "her strength wasn't enough, huh?$"

Surgebattle_Text_6:
# 132 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You... You bastards... You... killed her?!\n"
	.string "You destroyed everything! I'll make you\l"
	.string "pay, I swear...$"

Surgebattle_Text_7:
# 135 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kid, you don't get it, do you? Your\n"
	.string "father, Aurther, saved the world once.\l"
	.string "He fought to stop Nexus Order from\l"
	.string "controlling Hoopa. But you know what\l"
	.string "they say, right?\p"
	.string "When a hero is too strong... he's always\n"
	.string "killed by the very people he saved.$"

Surgebattle_Text_8:
# 138 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But why would you kill him?\p"
	.string "He was a hero, he saved you guys ...he\n"
	.string "saved the world.$"

Surgebattle_Text_9:
# 141 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You still don't get it.\p"
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
	.string "He wasn't qualified to be our leader.\p"
	.string "But then HE joined. He had the ambition\n"
	.string "and the vision to lead us.\p"
	.string "He was destined to be our leader.$"

Surgebattle_Text_10:
# 144 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Your leader? So you killed my father\n"
	.string "because he wasn't qualified? Because\l"
	.string "he believed in justice and equality?!\p"
	.string "And now you follow someone who thinks\n"
	.string "ambition is all that matters?\p"
	.string "You're insane.$"

Surgebattle_Text_11:
# 147 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He made Aurther step down from\n"
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

Surgebattle_Text_12:
# 150 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't give a damn about your leader or\n"
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

Surgebattle_Text_13:
# 153 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You've got guts, kid. But don't fool\n"
	.string "yourself..nothing you do will ever be\l"
	.string "enough to break us. We're more than\l"
	.string "just an organization, we're a force\l"
	.string "that's reshaping the world. And if you\l"
	.string "think you can stand in our way, you're in\l"
	.string "for a world of hurt.$"

Surgebattle_Text_14:
# 156 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can keep your delusions of\n"
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

Surgebattle_Text_15:
# 160 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You were lucky since Aurther injured my\n"
	.string "pokemon, they were not in the condition\l"
	.string "to fight but I'll defeat you next time\l"
	.string "since I'm stronger than you.$"

Surgebattle_Text_16:
# 163 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let me tell you one thing, you see...\p"
	.string "I once heard someone saying that....\p"
	.string "Even the strongest can fall if you kill\n"
	.string "them.$"

Surgebattle_Text_17:
# 168 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the ...$"

Surgebattle_Text_18:
# 171 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo!$"

Surgebattle_Text_19:
# 176 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use FireBlast!$"

Surgebattle_Text_20:
# 202 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Surge, you were just the start. This\n"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem {COLOR BLUE}{SHADOW LIGHT_GRAY}I've begun will be a\l"
	.string "symphony of retribution. Your death\l"
	.string "marks the first note in a melody of\l"
	.string "vengeance that will echo until everyone\l"
	.string "who wronged me has met their end. This\l"
	.string "is only the beginning.$"

Surgebattle_Text_21:
# 208 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm sorry, Mother... I failed you. I failed\n"
	.string "Father. But this… this isn't the end. I\l"
	.string "swear, they'll pay with everything they\l"
	.string "have. They stole you from me, and now…\l"
	.string "they'll face my wrath.\p"
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

Surgebattle_Text_22:
# 213 "data/maps/Sparkbase/scripts.pory"
	.string "Hey there, Trainer! This is where Beta 1\n"
	.string "of our journey comes to an end. I hope\l"
	.string "you've enjoyed the adventure so far.\l"
	.string "We're working hard to bring you the next\l"
	.string "chapter, and your support means\l"
	.string "everything to us.$"

Surgebattle_Text_23:
# 214 "data/maps/Sparkbase/scripts.pory"
	.string "If you liked what you've seen, please\n"
	.string "consider sharing your thoughts and\l"
	.string "spreading the word. Your feedback will\l"
	.string "help make this game even better. Until\l"
	.string "next time...stay strong, and thanks for\l"
	.string "playing!$"

surgeb_Text_0:
# 247 "data/maps/Sparkbase/scripts.pory"
	.string "...$"

Grunt2_Intro::
# 14 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think you can outrun a lightning\n"
	.string "bolt? Think again!$"

Grunt2_Outro::
# 17 "data/maps/Sparkbase/scripts.pory"
	.string "Wha..?! You're tougher than I thought...\n"
	.string "but this isn't over!$"

Grunt3_Intro::
# 27 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}One zap, and you're done! Let's see if\n"
	.string "you can survive it!$"

Grunt3_Outro::
# 30 "data/maps/Sparkbase/scripts.pory"
	.string "Ugh, I can't believe this! You're just\n"
	.string "lucky. Next time, you won't be so\l"
	.string "fortunate!\p"
	.string "Xylar: There won't e any next time.$"

Grunt4_Intro::
# 40 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love the smell of static in the air…\n"
	.string "Time to shock you into submission!$"

Grunt4_Outro::
# 43 "data/maps/Sparkbase/scripts.pory"
	.string "Enjoy your victory... it won't last long.\p"
	.string "Xylar:This isn't about victory\n"
	.string "anymore... It's about making sure you\l"
	.string "never take another breath.$"

PostBattle_Grunt4::
# 46 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt3::
# 49 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt2::
# 52 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt5_Intro::
# 62 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You think you can stop us? Let's see\n"
	.string "how you handle the thunder!$"

Grunt5_Outro::
# 65 "data/maps/Sparkbase/scripts.pory"
	.string "Tch, enjoy your victory while you can.\n"
	.string "Spark always strikes again.$"

PostBattle_Grunt5::
# 68 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt6_Intro::
# 79 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're in over your head, kid. Spark's\n"
	.string "about to send you packing!$"

Grunt6_Outro::
# 82 "data/maps/Sparkbase/scripts.pory"
	.string "Impossible! How did you overpower us?!$"

PostBattle_Grunt6::
# 85 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

surgelose::
# 221 "data/maps/Sparkbase/scripts.pory"
	.string "I was stronger than you, How could I\n"
	.string "lose?$"
