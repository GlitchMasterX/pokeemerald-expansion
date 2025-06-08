# 1 "data/maps/Hospital/scripts.pory"

# 2 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts::
# 3 "data/maps/Hospital/scripts.pory"
# 2 "data/maps/Hospital/scripts.pory"
# 4 "data/maps/Hospital/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Hospital/scripts.pory"
	.byte 0
# 6 "data/maps/Hospital/scripts.pory"

# 7 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Hospital/scripts.pory"
# 3 "data/maps/Hospital/scripts.pory"
# 9 "data/maps/Hospital/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 0, Luxura
# 10 "data/maps/Hospital/scripts.pory"
	.2byte 0
# 11 "data/maps/Hospital/scripts.pory"

# 12 "data/maps/Hospital/scripts.pory"

# 13 "data/maps/Hospital/scripts.pory"
Luxura::
# 14 "data/maps/Hospital/scripts.pory"
playse MUS_DUMMY
# 15 "data/maps/Hospital/scripts.pory"
# 8 "data/maps/Hospital/scripts.pory"
# 16 "data/maps/Hospital/scripts.pory"
	lockall
# 17 "data/maps/Hospital/scripts.pory"
# 9 "data/maps/Hospital/scripts.pory"
# 18 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Hospital/scripts.pory"
# 10 "data/maps/Hospital/scripts.pory"
# 20 "data/maps/Hospital/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_ISLAND
# 21 "data/maps/Hospital/scripts.pory"
# 11 "data/maps/Hospital/scripts.pory"
# 22 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data/maps/Hospital/scripts.pory"
# 12 "data/maps/Hospital/scripts.pory"
# 24 "data/maps/Hospital/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/Hospital/scripts.pory"
# 13 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, boom
# 27 "data/maps/Hospital/scripts.pory"
# 14 "data/maps/Hospital/scripts.pory"
# 28 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 29 "data/maps/Hospital/scripts.pory"
# 15 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
	msgbox myloll , MSGBOX_AUTOCLOSE
# 31 "data/maps/Hospital/scripts.pory"
# 16 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mylol
# 33 "data/maps/Hospital/scripts.pory"
# 17 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 35 "data/maps/Hospital/scripts.pory"
# 18 "data/maps/Hospital/scripts.pory"
# 36 "data/maps/Hospital/scripts.pory"
	msgbox scared , MSGBOX_AUTOCLOSE
# 37 "data/maps/Hospital/scripts.pory"
# 19 "data/maps/Hospital/scripts.pory"
# 38 "data/maps/Hospital/scripts.pory"
	applymovement 11, thudd
# 39 "data/maps/Hospital/scripts.pory"
# 20 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
	applymovement 9, thud
# 41 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_0 , MSGBOX_AUTOCLOSE
# 43 "data/maps/Hospital/scripts.pory"
# 22 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 45 "data/maps/Hospital/scripts.pory"
# 23 "data/maps/Hospital/scripts.pory"
# 46 "data/maps/Hospital/scripts.pory"
	applymovement 10, thuddd
# 47 "data/maps/Hospital/scripts.pory"
# 24 "data/maps/Hospital/scripts.pory"
# 48 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, old
# 49 "data/maps/Hospital/scripts.pory"
# 25 "data/maps/Hospital/scripts.pory"
# 50 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 51 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_1 , MSGBOX_AUTOCLOSE
# 53 "data/maps/Hospital/scripts.pory"
# 27 "data/maps/Hospital/scripts.pory"
# 54 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, main
# 55 "data/maps/Hospital/scripts.pory"
# 28 "data/maps/Hospital/scripts.pory"
# 56 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 57 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 58 "data/maps/Hospital/scripts.pory"
    speakername(name1)
# 59 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_2 , MSGBOX_AUTOCLOSE
# 60 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_nurse , MSGBOX_AUTOCLOSE
# 61 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 62 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_3
# 63 "data/maps/Hospital/scripts.pory"
	removefieldmugshot
# 64 "data/maps/Hospital/scripts.pory"
# 31 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
	applymovement 2, heart
# 66 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 67 "data/maps/Hospital/scripts.pory"
	speakername(name2)
# 68 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_4 , MSGBOX_AUTOCLOSE
# 69 "data/maps/Hospital/scripts.pory"
	
# 70 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
    speakername(name3)
# 72 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_5 , MSGBOX_AUTOCLOSE
# 73 "data/maps/Hospital/scripts.pory"
	 
# 74 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 75 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_6 , MSGBOX_AUTOCLOSE
# 76 "data/maps/Hospital/scripts.pory"
	removefieldmugshot
# 77 "data/maps/Hospital/scripts.pory"
# 36 "data/maps/Hospital/scripts.pory"
# 78 "data/maps/Hospital/scripts.pory"
	applymovement 4, bye
# 79 "data/maps/Hospital/scripts.pory"
# 37 "data/maps/Hospital/scripts.pory"
# 80 "data/maps/Hospital/scripts.pory"
	applymovement 3, bye
# 81 "data/maps/Hospital/scripts.pory"
# 38 "data/maps/Hospital/scripts.pory"
# 82 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 83 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 84 "data/maps/Hospital/scripts.pory"
    speakername(name2)
# 85 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_7 , MSGBOX_AUTOCLOSE
# 86 "data/maps/Hospital/scripts.pory"
	 
# 87 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 88 "data/maps/Hospital/scripts.pory"
    speakername(name3)
# 89 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_8 , MSGBOX_AUTOCLOSE
# 90 "data/maps/Hospital/scripts.pory"
	 
# 91 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 92 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_9 , MSGBOX_AUTOCLOSE
# 93 "data/maps/Hospital/scripts.pory"
    removefieldmugshot
# 94 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 95 "data/maps/Hospital/scripts.pory"
	speakername(name4)
# 96 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_10 , MSGBOX_AUTOCLOSE
# 97 "data/maps/Hospital/scripts.pory"
	 
# 98 "data/maps/Hospital/scripts.pory"
# 43 "data/maps/Hospital/scripts.pory"
# 99 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 101 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_11 , MSGBOX_AUTOCLOSE
# 102 "data/maps/Hospital/scripts.pory"
	applymovement 1,heart
# 103 "data/maps/Hospital/scripts.pory"
	applymovement 2,heart
# 104 "data/maps/Hospital/scripts.pory"
	applymovement 5,heart
# 105 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 106 "data/maps/Hospital/scripts.pory"
# 45 "data/maps/Hospital/scripts.pory"
# 107 "data/maps/Hospital/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 108 "data/maps/Hospital/scripts.pory"
# 46 "data/maps/Hospital/scripts.pory"
# 109 "data/maps/Hospital/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_INDOOR
# 110 "data/maps/Hospital/scripts.pory"
# 47 "data/maps/Hospital/scripts.pory"
# 111 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 112 "data/maps/Hospital/scripts.pory"
# 48 "data/maps/Hospital/scripts.pory"
# 113 "data/maps/Hospital/scripts.pory"
	setvar LUXURA_TRAGEDY, 1
# 114 "data/maps/Hospital/scripts.pory"
# 49 "data/maps/Hospital/scripts.pory"
# 115 "data/maps/Hospital/scripts.pory"
	releaseall
# 116 "data/maps/Hospital/scripts.pory"
	return
# 117 "data/maps/Hospital/scripts.pory"

# 118 "data/maps/Hospital/scripts.pory"

# 119 "data/maps/Hospital/scripts.pory"
# 51 "data/maps/Hospital/scripts.pory"
# 120 "data/maps/Hospital/scripts.pory"
boom:
# 121 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 122 "data/maps/Hospital/scripts.pory"
	walk_up
# 123 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 124 "data/maps/Hospital/scripts.pory"
	walk_up
# 125 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 126 "data/maps/Hospital/scripts.pory"
	walk_up
# 127 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 128 "data/maps/Hospital/scripts.pory"
	walk_up
# 129 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 130 "data/maps/Hospital/scripts.pory"
	walk_up
# 131 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 132 "data/maps/Hospital/scripts.pory"
	walk_up
# 133 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 134 "data/maps/Hospital/scripts.pory"
	walk_up
# 135 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 136 "data/maps/Hospital/scripts.pory"
	walk_up
# 137 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 138 "data/maps/Hospital/scripts.pory"
	walk_up
# 139 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 140 "data/maps/Hospital/scripts.pory"
	walk_up
# 141 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 142 "data/maps/Hospital/scripts.pory"
	walk_up
# 143 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 144 "data/maps/Hospital/scripts.pory"
	walk_up
# 145 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 146 "data/maps/Hospital/scripts.pory"
	walk_up
# 147 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 148 "data/maps/Hospital/scripts.pory"
	walk_up
# 149 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 150 "data/maps/Hospital/scripts.pory"
	walk_up
# 151 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 152 "data/maps/Hospital/scripts.pory"
	walk_up
# 153 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 154 "data/maps/Hospital/scripts.pory"
	walk_up
# 155 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 156 "data/maps/Hospital/scripts.pory"
	walk_up
# 157 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 158 "data/maps/Hospital/scripts.pory"
	walk_up
# 159 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 160 "data/maps/Hospital/scripts.pory"
	walk_up
# 161 "data/maps/Hospital/scripts.pory"
	step_end
# 162 "data/maps/Hospital/scripts.pory"

# 163 "data/maps/Hospital/scripts.pory"
# 54 "data/maps/Hospital/scripts.pory"
# 164 "data/maps/Hospital/scripts.pory"
bye:
# 165 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 166 "data/maps/Hospital/scripts.pory"
	walk_down
# 167 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 168 "data/maps/Hospital/scripts.pory"
	walk_down
# 169 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 170 "data/maps/Hospital/scripts.pory"
	walk_down
# 171 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 172 "data/maps/Hospital/scripts.pory"
	walk_down
# 173 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 174 "data/maps/Hospital/scripts.pory"
	walk_down
# 175 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 176 "data/maps/Hospital/scripts.pory"
	walk_down
# 177 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 178 "data/maps/Hospital/scripts.pory"
	walk_down
# 179 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 180 "data/maps/Hospital/scripts.pory"
	walk_down
# 181 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 182 "data/maps/Hospital/scripts.pory"
	walk_down
# 183 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 184 "data/maps/Hospital/scripts.pory"
	walk_down
# 185 "data/maps/Hospital/scripts.pory"
	step_end
# 186 "data/maps/Hospital/scripts.pory"

# 187 "data/maps/Hospital/scripts.pory"
# 58 "data/maps/Hospital/scripts.pory"
# 188 "data/maps/Hospital/scripts.pory"
mylol:
# 189 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 190 "data/maps/Hospital/scripts.pory"
	walk_right
# 191 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 192 "data/maps/Hospital/scripts.pory"
	walk_right
# 193 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 194 "data/maps/Hospital/scripts.pory"
	walk_right
# 195 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 196 "data/maps/Hospital/scripts.pory"
	walk_right
# 197 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 198 "data/maps/Hospital/scripts.pory"
	walk_right
# 199 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 200 "data/maps/Hospital/scripts.pory"
	walk_right
# 201 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 202 "data/maps/Hospital/scripts.pory"
	walk_right
# 203 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 204 "data/maps/Hospital/scripts.pory"
	walk_right
# 205 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 206 "data/maps/Hospital/scripts.pory"
	walk_right
# 207 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 208 "data/maps/Hospital/scripts.pory"
	walk_right
# 209 "data/maps/Hospital/scripts.pory"
	step_end
# 210 "data/maps/Hospital/scripts.pory"

# 211 "data/maps/Hospital/scripts.pory"
# 62 "data/maps/Hospital/scripts.pory"
# 212 "data/maps/Hospital/scripts.pory"
thud:
# 213 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 214 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 215 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 216 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 217 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 218 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 219 "data/maps/Hospital/scripts.pory"
# 64 "data/maps/Hospital/scripts.pory"
# 220 "data/maps/Hospital/scripts.pory"
	walk_fast_right
# 221 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 222 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 223 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 224 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 225 "data/maps/Hospital/scripts.pory"
	step_end
# 226 "data/maps/Hospital/scripts.pory"

# 227 "data/maps/Hospital/scripts.pory"
# 67 "data/maps/Hospital/scripts.pory"
# 228 "data/maps/Hospital/scripts.pory"
main:
# 229 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 230 "data/maps/Hospital/scripts.pory"
	walk_right
# 231 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 232 "data/maps/Hospital/scripts.pory"
	walk_right
# 233 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 234 "data/maps/Hospital/scripts.pory"
	walk_right
# 235 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 236 "data/maps/Hospital/scripts.pory"
	walk_right
# 237 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 238 "data/maps/Hospital/scripts.pory"
	walk_right
# 239 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 240 "data/maps/Hospital/scripts.pory"
	walk_right
# 241 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 242 "data/maps/Hospital/scripts.pory"
	walk_right
# 243 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 244 "data/maps/Hospital/scripts.pory"
	walk_right
# 245 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 246 "data/maps/Hospital/scripts.pory"
	walk_right
# 247 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 248 "data/maps/Hospital/scripts.pory"
	walk_right
# 249 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 250 "data/maps/Hospital/scripts.pory"
	walk_right
# 251 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 252 "data/maps/Hospital/scripts.pory"
	walk_right
# 253 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 254 "data/maps/Hospital/scripts.pory"
	walk_right
# 255 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 256 "data/maps/Hospital/scripts.pory"
	walk_right
# 257 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 258 "data/maps/Hospital/scripts.pory"
	walk_right
# 259 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 260 "data/maps/Hospital/scripts.pory"
	walk_right
# 261 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 262 "data/maps/Hospital/scripts.pory"
	walk_right
# 263 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 264 "data/maps/Hospital/scripts.pory"
	walk_right
# 265 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 266 "data/maps/Hospital/scripts.pory"
	walk_right
# 267 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 268 "data/maps/Hospital/scripts.pory"
	walk_right
# 269 "data/maps/Hospital/scripts.pory"
	step_end
# 270 "data/maps/Hospital/scripts.pory"

# 271 "data/maps/Hospital/scripts.pory"
# 70 "data/maps/Hospital/scripts.pory"
# 272 "data/maps/Hospital/scripts.pory"
old:
# 273 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 274 "data/maps/Hospital/scripts.pory"
	walk_right
# 275 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 276 "data/maps/Hospital/scripts.pory"
	walk_right
# 277 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 278 "data/maps/Hospital/scripts.pory"
	walk_right
# 279 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 280 "data/maps/Hospital/scripts.pory"
	walk_right
# 281 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 282 "data/maps/Hospital/scripts.pory"
	walk_right
# 283 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 284 "data/maps/Hospital/scripts.pory"
	walk_right
# 285 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 286 "data/maps/Hospital/scripts.pory"
	walk_right
# 287 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 288 "data/maps/Hospital/scripts.pory"
	walk_right
# 289 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 290 "data/maps/Hospital/scripts.pory"
	walk_right
# 291 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 292 "data/maps/Hospital/scripts.pory"
	walk_right
# 293 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 294 "data/maps/Hospital/scripts.pory"
	walk_right
# 295 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 296 "data/maps/Hospital/scripts.pory"
	walk_right
# 297 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 298 "data/maps/Hospital/scripts.pory"
	walk_right
# 299 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 300 "data/maps/Hospital/scripts.pory"
	walk_right
# 301 "data/maps/Hospital/scripts.pory"
	step_end
# 302 "data/maps/Hospital/scripts.pory"

# 303 "data/maps/Hospital/scripts.pory"
# 73 "data/maps/Hospital/scripts.pory"
# 304 "data/maps/Hospital/scripts.pory"
thudd:
# 305 "data/maps/Hospital/scripts.pory"
# 74 "data/maps/Hospital/scripts.pory"
# 306 "data/maps/Hospital/scripts.pory"
	jump_2_left
# 307 "data/maps/Hospital/scripts.pory"
# 75 "data/maps/Hospital/scripts.pory"
# 308 "data/maps/Hospital/scripts.pory"
	face_right
# 309 "data/maps/Hospital/scripts.pory"
	step_end
# 310 "data/maps/Hospital/scripts.pory"

# 311 "data/maps/Hospital/scripts.pory"
# 79 "data/maps/Hospital/scripts.pory"
# 312 "data/maps/Hospital/scripts.pory"
thuddd:
# 313 "data/maps/Hospital/scripts.pory"
# 80 "data/maps/Hospital/scripts.pory"
# 314 "data/maps/Hospital/scripts.pory"
	walk_left
# 315 "data/maps/Hospital/scripts.pory"
	step_end
# 316 "data/maps/Hospital/scripts.pory"

# 317 "data/maps/Hospital/scripts.pory"
# 83 "data/maps/Hospital/scripts.pory"
# 318 "data/maps/Hospital/scripts.pory"
heart:
# 319 "data/maps/Hospital/scripts.pory"
# 84 "data/maps/Hospital/scripts.pory"
# 320 "data/maps/Hospital/scripts.pory"
	emote_heart
# 321 "data/maps/Hospital/scripts.pory"
	step_end
# 322 "data/maps/Hospital/scripts.pory"

# 323 "data/maps/Hospital/scripts.pory"
Luxura_Text_0:
# 324 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 325 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY} Nurses, grab her don't let her\n"
# 326 "data/maps/Hospital/scripts.pory"
	.string "run away!$"
# 327 "data/maps/Hospital/scripts.pory"

# 328 "data/maps/Hospital/scripts.pory"
Luxura_Text_1:
# 329 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 330 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't worry you will feel better\n"
# 331 "data/maps/Hospital/scripts.pory"
	.string "after taking the medicine.\p"
# 332 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Old woman:{COLOR RED}{SHADOW LIGHT_GRAY}Will he be alright?\p"
# 333 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nurse:{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Ma'am.$"
# 334 "data/maps/Hospital/scripts.pory"

# 335 "data/maps/Hospital/scripts.pory"
Luxura_Text_2:
# 336 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 337 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Congratulations, it's a boy!$"
# 338 "data/maps/Hospital/scripts.pory"

# 339 "data/maps/Hospital/scripts.pory"
Luxura_Text_nurse:
# 340 "data/maps/Hospital/scripts.pory"
    .string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(The nurse gently hands baby to his\n"
# 341 "data/maps/Hospital/scripts.pory"
	.string "mother.)$"
# 342 "data/maps/Hospital/scripts.pory"

# 343 "data/maps/Hospital/scripts.pory"
Luxura_Text_3:
# 344 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 345 "data/maps/Hospital/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORM}Baby: Wahh...Wahh$"
# 346 "data/maps/Hospital/scripts.pory"

# 347 "data/maps/Hospital/scripts.pory"
Luxura_Text_4:
# 348 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 349 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's so small...\n"
# 350 "data/maps/Hospital/scripts.pory"
	.string "and perfect.\p"
# 351 "data/maps/Hospital/scripts.pory"
	.string "What should we name him?$"
# 352 "data/maps/Hospital/scripts.pory"

# 353 "data/maps/Hospital/scripts.pory"
Luxura_Text_5:
# 354 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 355 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We'll name him Xylar. He's\n"
# 356 "data/maps/Hospital/scripts.pory"
	.string "destined for great things, I can feel\l"
# 357 "data/maps/Hospital/scripts.pory"
	.string "it.$"
# 358 "data/maps/Hospital/scripts.pory"

# 359 "data/maps/Hospital/scripts.pory"
Luxura_Text_6:
# 360 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 361 "data/maps/Hospital/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORM}Baby:Hehh...Hehh$"
# 362 "data/maps/Hospital/scripts.pory"

# 363 "data/maps/Hospital/scripts.pory"
Luxura_Text_7:
# 364 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 365 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar... Our precious little Xylar.\n"
# 366 "data/maps/Hospital/scripts.pory"
	.string "We'll protect you, always.$"
# 367 "data/maps/Hospital/scripts.pory"

# 368 "data/maps/Hospital/scripts.pory"
Luxura_Text_8:
# 369 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 370 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This world is full of challenges,\n"
# 371 "data/maps/Hospital/scripts.pory"
	.string "but you won't face them alone. We'll be\l"
# 372 "data/maps/Hospital/scripts.pory"
	.string "with you, every step of the way.$"
# 373 "data/maps/Hospital/scripts.pory"

# 374 "data/maps/Hospital/scripts.pory"
Luxura_Text_9:
# 375 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 376 "data/maps/Hospital/scripts.pory"
	.string "{CREATE_MUGSHOT}{MUGSHOT_AURTHER}{EMOTE_NORM}Baby:Goo...Gahh$"
# 377 "data/maps/Hospital/scripts.pory"

# 378 "data/maps/Hospital/scripts.pory"
Luxura_Text_10:
# 379 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 380 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's a strong one already. I can\n"
# 381 "data/maps/Hospital/scripts.pory"
	.string "tell he'll grow up to be someone special.$"
# 382 "data/maps/Hospital/scripts.pory"

# 383 "data/maps/Hospital/scripts.pory"
Luxura_Text_11:
# 384 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 385 "data/maps/Hospital/scripts.pory"
	.string "12 years later$"
# 386 "data/maps/Hospital/scripts.pory"

# 387 "data/maps/Hospital/scripts.pory"
myloll::
# 388 "data/maps/Hospital/scripts.pory"
# 87 "data/maps/Hospital/scripts.pory"
# 389 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Say Aaaaaa\p"
# 390 "data/maps/Hospital/scripts.pory"
	.string "$"
# 391 "data/maps/Hospital/scripts.pory"

# 392 "data/maps/Hospital/scripts.pory"
scared::
# 393 "data/maps/Hospital/scripts.pory"
# 91 "data/maps/Hospital/scripts.pory"
# 394 "data/maps/Hospital/scripts.pory"
	.string "Girl:{COLOR RED}{SHADOW LIGHT_GRAY}I can't take that injection! I have\n"
# 395 "data/maps/Hospital/scripts.pory"
	.string "to get out of here!\p"
# 396 "data/maps/Hospital/scripts.pory"
	.string "THUUDDD!!!$"

test1::
# 414 "data/maps/Hospital/scripts.pory"
	lock
# 415 "data/maps/Hospital/scripts.pory"
	applymovement 23, move23
# 416 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 417 "data/maps/Hospital/scripts.pory"
	playse SE_PIN
# 418 "data/maps/Hospital/scripts.pory"
	msgbox test1_Text_0, MSGBOX_DEFAULT
# 419 "data/maps/Hospital/scripts.pory"
	applymovement 0xFF, move25
# 420 "data/maps/Hospital/scripts.pory"
	msgbox test1_Text_0
# 421 "data/maps/Hospital/scripts.pory"
	release
	return


# 423 "data/maps/Hospital/scripts.pory"
move23:
# 424 "data/maps/Hospital/scripts.pory"
	face_down
# 425 "data/maps/Hospital/scripts.pory"
	emote_exclamation_mark
	step_end

# 427 "data/maps/Hospital/scripts.pory"
move25:
# 428 "data/maps/Hospital/scripts.pory"
	walk_up
	step_end

test1_Text_0:
# 418 "data/maps/Hospital/scripts.pory"
	.string "Glad to see you$"

name1::
# 398 "data/maps/Hospital/scripts.pory"
	.string "Nurse$"

name2::
# 402 "data/maps/Hospital/scripts.pory"
	.string "Elysia$"

name3::
# 405 "data/maps/Hospital/scripts.pory"
	.string "Aurther$"

name4::
# 409 "data/maps/Hospital/scripts.pory"
	.string "Mira$"
