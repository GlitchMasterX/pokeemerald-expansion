        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_112_grp, voicegroup538
        .equ    mus_pkmn_bw12_112_pri, 0
        .equ    mus_pkmn_bw12_112_rev, 0
        .equ    mus_pkmn_bw12_112_key, 0

        .section .rodata
        .global mus_pkmn_bw12_112
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_112_0:
        .byte   KEYSH , mus_pkmn_bw12_112_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 124/2
mus_pkmn_bw12_112_0_LOOP:
        .byte           VOICE , 10
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 52
        .byte           N32   , Fn4 , v116
        .byte   W36
        .byte           N11   , Cn5 , v112
        .byte   W12
        .byte                   Bn4 , v100
        .byte   W12
        .byte                   Dn5 , v108
        .byte   W12
        .byte           N06   , Cs5 , v116
        .byte   W24
@ 001   ----------------------------------------
        .byte                   Cn5 , v108
        .byte   W24
        .byte                   Gs4 , v116
        .byte   W24
        .byte           N44   , Bn4 , v120
        .byte   W48
@ 002   ----------------------------------------
        .byte           N23   , Fs4 , v108
        .byte   W24
        .byte           N44   , An4 , v120
        .byte   W48
        .byte           N23   , Fn4 , v108
        .byte   W24
@ 003   ----------------------------------------
        .byte           N32   , Fs4 , v120
        .byte   W36
        .byte           N11   , Cs5 , v108
        .byte   W12
        .byte                   Cn5 , v096
        .byte   W12
        .byte                   Dn5 , v108
        .byte   W12
        .byte           N06   , Cs5 , v116
        .byte   W24
@ 004   ----------------------------------------
        .byte                   Fs5 , v104
        .byte   W24
        .byte                   Cs5 , v112
        .byte   W24
        .byte           N44   , Fn5 , v116
        .byte   W48
@ 005   ----------------------------------------
        .byte           N11   , Cs5 , v104
        .byte   W24
        .byte           N44   , En5 , v112
        .byte   W48
        .byte           N05   , Fn4 , v108
        .byte   W24
@ 006   ----------------------------------------
        .byte           N32   , Fs5 , v112
        .byte   W36
        .byte           N10   , Cs5 , v100
        .byte   W12
        .byte           N08   , Fs4 , v112
        .byte   W12
        .byte                   Fs5 , v104
        .byte   W12
        .byte           N05   , Fn5 , v112
        .byte   W24
@ 007   ----------------------------------------
        .byte                   Cs5 , v108
        .byte   W48
        .byte           N32   , En5 , v112
        .byte   W36
        .byte           N10   , Bn4 , v100
        .byte   W12
@ 008   ----------------------------------------
        .byte                   Gn4 , v092
        .byte   W12
        .byte                   En5 , v100
        .byte   W12
        .byte           N05   , Ds5 , v116
        .byte   W24
        .byte                   An4 , v104
        .byte   W48
@ 009   ----------------------------------------
        .byte                   Bn4 , v112
        .byte   W48
        .byte                   Fs4 , v100
        .byte   W24
        .byte                   Cn5 , v088
        .byte   W24
@ 010   ----------------------------------------
        .byte                   Fs4 , v104
        .byte   W24
        .byte                   An4 , v092
        .byte   W24
        .byte                   Fn4 , v112
        .byte   W24
        .byte                   Fs4 , v100
        .byte   W24
@ 011   ----------------------------------------
        .byte   W24
        .byte   TEMPO , 108/2
        .byte   W23
        .byte   TEMPO , 124/2
        .byte   W01
        .byte   GOTO
         .word  mus_pkmn_bw12_112_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_112_1:
        .byte   KEYSH , mus_pkmn_bw12_112_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_112_1_LOOP:
        .byte           VOICE , 10
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 39
        .byte           PAN   , c_v-34
        .byte           N68   , Fn3 , v080
        .byte   W24
        .byte           N44   , Cn4
        .byte   W24
        .byte           N23   , Fn4 , v076
        .byte   W02
        .byte           N21   , Gs4 , v068
        .byte   W22
        .byte           N68   , Gs3 , v080
        .byte   W24
@ 001   ----------------------------------------
        .byte           N44   , Cn4
        .byte   W24
        .byte           N23   , Fn4 , v076
        .byte   W02
        .byte           N21   , Gs4 , v068
        .byte   W22
        .byte           N68   , Gn3 , v076
        .byte   W24
        .byte           N44   , Bn3 , v080
        .byte   W24
@ 002   ----------------------------------------
        .byte           N23   , Dn4 , v076
        .byte   W02
        .byte           N21   , Fs4
        .byte   W22
        .byte           N68   , Cs3 , v080
        .byte   W24
        .byte           N44   , Bn3 , v076
        .byte   W24
        .byte           N23   , Cs4
        .byte   W02
        .byte           N21   , Fn4 , v080
        .byte   W22
@ 003   ----------------------------------------
        .byte           N68   , Fs3
        .byte   W24
        .byte           N44   , An3 , v084
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N22   , Fs4 , v080
        .byte   W22
        .byte           N68   , En3 , v076
        .byte   W24
@ 004   ----------------------------------------
        .byte           N44   , An3 , v084
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v080
        .byte   W22
        .byte           N68   , Gs3
        .byte   W24
        .byte           N44   , Cn4 , v076
        .byte   W24
@ 005   ----------------------------------------
        .byte           N23   , Ds4
        .byte   W02
        .byte           N21   , Fs4 , v080
        .byte   W22
        .byte           N68   , Cs3 , v084
        .byte   W24
        .byte           N44   , Bn3
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fn4 , v080
        .byte   W22
@ 006   ----------------------------------------
        .byte           N68   , Fs3 , v076
        .byte   W24
        .byte           N44   , An3 , v080
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v080
        .byte   W22
        .byte           N08   , Gn3 , v072
        .byte           N07   , Bn3
        .byte           N08   , Fn4 , v076
        .byte   W24
@ 007   ----------------------------------------
        .byte                   Gn3 , v060
        .byte           N08   , Bn3 , v068
        .byte           N08   , Cs4 , v076
        .byte   W48
        .byte           N68   , En3
        .byte   W24
        .byte           N44   , Gn3 , v084
        .byte   W24
@ 008   ----------------------------------------
        .byte           N21   , Bn3 , v076
        .byte   W01
        .byte                   En4 , v072
        .byte   W23
        .byte           N08   , Fn3
        .byte           N08   , An3
        .byte   W01
        .byte           N09   , Ds4 , v076
        .byte   W23
        .byte                   Fn3 , v068
        .byte   W01
        .byte                   An3 , v076
        .byte   W44
        .byte   W03
@ 009   ----------------------------------------
        .byte           N07   , Gn3 , v072
        .byte   W01
        .byte                   Bn3
        .byte   W23
        .byte           N06
        .byte   W01
        .byte           N07   , Fs4 , v060
        .byte   W44
        .byte   W03
        .byte           N09   , Ds3 , v072
        .byte   W01
        .byte                   Cn4
        .byte   W01
        .byte           N10   , Fs4 , v076
        .byte   W22
@ 010   ----------------------------------------
        .byte   W24
        .byte           N09   , Cs3 , v072
        .byte   W01
        .byte                   Bn3
        .byte   W01
        .byte           N10   , Fn4 , v076
        .byte   W44
        .byte   W01
        .byte           N08   , Fs3 , v072
        .byte   W02
        .byte                   An3
        .byte   W01
        .byte           N09   , Cs4 , v076
        .byte   W22
@ 011   ----------------------------------------
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_112_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_112_2:
        .byte   KEYSH , mus_pkmn_bw12_112_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_112_2_LOOP:
        .byte           VOICE , 10
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 10
        .byte           PAN   , c_v+56
        .byte   W12
        .byte           N68   , Fn3 , v080
        .byte   W24
        .byte           N44   , Cn4
        .byte   W24
        .byte           N23   , Fn4 , v076
        .byte   W02
        .byte           N21   , Gs4 , v072
        .byte   W22
        .byte           N68   , Gs3 , v080
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N44   , Cn4
        .byte   W24
        .byte           N23   , Fn4 , v076
        .byte   W02
        .byte           N21   , Gs4 , v072
        .byte   W22
        .byte           N68   , Gn3 , v076
        .byte   W24
        .byte           N44   , Bn3 , v080
        .byte   W12
@ 002   ----------------------------------------
        .byte   W12
        .byte           N23   , Dn4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v084
        .byte   W22
        .byte           N68   , Cs3 , v080
        .byte   W24
        .byte           N44   , Bn3 , v088
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fn4 , v088
        .byte   W10
@ 003   ----------------------------------------
        .byte   W12
        .byte           N68   , Fs3 , v080
        .byte   W24
        .byte           N44   , An3 , v084
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W01
        .byte           N22   , Fs4 , v088
        .byte   W23
        .byte           N68   , En3 , v076
        .byte   W12
@ 004   ----------------------------------------
        .byte   W12
        .byte           N44   , An3 , v084
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v088
        .byte   W22
        .byte           N68   , Gs3 , v080
        .byte   W24
        .byte           N44   , Cn4 , v088
        .byte   W12
@ 005   ----------------------------------------
        .byte   W12
        .byte           N23   , Ds4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v088
        .byte   W22
        .byte           N68   , Cs3 , v084
        .byte   W24
        .byte           N44   , Bn3
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fn4 , v088
        .byte   W10
@ 006   ----------------------------------------
        .byte   W12
        .byte           N68   , Fs3 , v076
        .byte   W24
        .byte           N44   , An3 , v080
        .byte   W24
        .byte           N23   , Cs4 , v076
        .byte   W02
        .byte           N21   , Fs4 , v072
        .byte   W22
        .byte           N08   , Gn3 , v036
        .byte           N07   , Bn3 , v040
        .byte           N08   , Fn4
        .byte   W12
@ 007   ----------------------------------------
        .byte   W12
        .byte                   Gn3 , v032
        .byte           N08   , Bn3 , v036
        .byte           N08   , Cs4 , v044
        .byte   W48
        .byte           N68   , En3 , v076
        .byte   W24
        .byte           N44   , Gn3 , v084
        .byte   W12
@ 008   ----------------------------------------
        .byte   W12
        .byte           N21   , Bn3 , v076
        .byte   W01
        .byte                   En4 , v072
        .byte   W23
        .byte           N08   , Fn3 , v036
        .byte           N08   , An3 , v040
        .byte   W01
        .byte           N09   , Ds4
        .byte   W23
        .byte                   Fn3 , v036
        .byte   W01
        .byte                   An3 , v044
        .byte   W32
        .byte   W03
@ 009   ----------------------------------------
        .byte   W12
        .byte           N07   , Gn3 , v036
        .byte   W01
        .byte                   Bn3 , v040
        .byte   W23
        .byte           N06
        .byte   W01
        .byte           N07   , Fs4 , v032
        .byte   W44
        .byte   W03
        .byte           N09   , Ds3 , v036
        .byte   W01
        .byte                   Cn4 , v040
        .byte   W01
        .byte           N10   , Fs4
        .byte   W10
@ 010   ----------------------------------------
        .byte   W36
        .byte           N09   , Cs3 , v036
        .byte   W01
        .byte                   Bn3 , v040
        .byte   W01
        .byte           N10   , Fn4
        .byte   W40
        .byte           N08   , Fs3 , v072
        .byte   W01
        .byte                   An3
        .byte   W01
        .byte           N09   , Cs4 , v076
        .byte   W16
@ 011   ----------------------------------------
        .byte           N08   , Fs3 , v032
        .byte   W01
        .byte                   An3
        .byte   W01
        .byte           N09   , Cs4 , v036
        .byte   W44
        .byte   W02
        .byte   GOTO
         .word  mus_pkmn_bw12_112_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_112_3:
        .byte   KEYSH , mus_pkmn_bw12_112_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_112_3_LOOP:
        .byte           VOICE , 10
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 13
        .byte           PAN   , c_v+56
        .byte   W12
        .byte           N32   , Fn4 , v116
        .byte   W36
        .byte           N11   , Cn5 , v112
        .byte   W12
        .byte                   Bn4 , v104
        .byte   W12
        .byte                   Dn5 , v112
        .byte   W12
        .byte           N05   , Cs5 , v108
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte                   Cn5 , v112
        .byte   W24
        .byte                   Gs4 , v108
        .byte   W24
        .byte           N44   , Bn4 , v112
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte           N23   , Fs4 , v108
        .byte   W24
        .byte           N44   , An4 , v112
        .byte   W48
        .byte           N23   , Fn4 , v108
        .byte   W12
@ 003   ----------------------------------------
        .byte   W12
        .byte           N32   , Fs4 , v112
        .byte   W36
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Cn5 , v108
        .byte   W12
        .byte                   Dn5 , v112
        .byte   W12
        .byte           N05   , Cs5 , v108
        .byte   W12
@ 004   ----------------------------------------
        .byte   W12
        .byte                   Fs5 , v112
        .byte   W24
        .byte                   Cs5 , v108
        .byte   W24
        .byte           N44   , Fn5 , v116
        .byte   W36
@ 005   ----------------------------------------
        .byte   W12
        .byte           N11   , Cs5 , v108
        .byte   W24
        .byte           N44   , En5 , v112
        .byte   W48
        .byte           N05   , Fn4 , v108
        .byte   W12
@ 006   ----------------------------------------
        .byte   W12
        .byte           N32   , Fs5 , v112
        .byte   W36
        .byte           N08   , Cs5 , v104
        .byte   W12
        .byte                   Fs4 , v100
        .byte   W12
        .byte                   Fs5 , v104
        .byte   W12
        .byte           N05   , Fn5 , v108
        .byte   W12
@ 007   ----------------------------------------
        .byte   W12
        .byte                   Cs5 , v100
        .byte   W48
        .byte           N32   , En5 , v112
        .byte   W36
@ 008   ----------------------------------------
        .byte           N10   , Bn4 , v108
        .byte   W12
        .byte                   Gn4 , v100
        .byte   W12
        .byte                   En5 , v108
        .byte   W12
        .byte           N05   , Ds5 , v096
        .byte   W24
        .byte                   An4 , v092
        .byte   W36
@ 009   ----------------------------------------
        .byte   W12
        .byte                   Bn4 , v108
        .byte   W48
        .byte                   Fs4 , v100
        .byte   W24
        .byte                   Cn5 , v108
        .byte   W12
@ 010   ----------------------------------------
        .byte   W12
        .byte                   Fs4 , v100
        .byte   W24
        .byte                   An4 , v092
        .byte   W24
        .byte                   Fn4 , v112
        .byte   W24
        .byte                   Fs4 , v100
        .byte   W12
@ 011   ----------------------------------------
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_112_3_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_112:
        .byte   4                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_112_pri   @ Priority
        .byte   mus_pkmn_bw12_112_rev   @ Reverb

        .word   mus_pkmn_bw12_112_grp  

        .word   mus_pkmn_bw12_112_0
        .word   mus_pkmn_bw12_112_1
        .word   mus_pkmn_bw12_112_2
        .word   mus_pkmn_bw12_112_3

        .end
