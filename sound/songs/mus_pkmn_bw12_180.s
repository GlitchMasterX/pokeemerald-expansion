        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_180_grp, voicegroup535
        .equ    mus_pkmn_bw12_180_pri, 0
        .equ    mus_pkmn_bw12_180_rev, 0
        .equ    mus_pkmn_bw12_180_key, 0

        .section .rodata
        .global mus_pkmn_bw12_180
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_180_0:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 120/2
        .byte           VOICE , 42
        .byte           PAN   , c_v+11
        .byte           VOL   , 89
        .byte   W12
        .byte           N52   , As2 , v108
        .byte           N52   , Ds3 , v127
        .byte   W72
mus_pkmn_bw12_180_0_LOOP:
        .byte           N11   , Ds3 , v108
        .byte           N11   , As3 , v124
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N32   , Cs3 , v108
        .byte           N32   , Fs3 , v120
        .byte   W36
        .byte                   Fs3 , v108
        .byte           N32   , Bn3 , v127
        .byte   W36
        .byte           N22   , Fn3 , v108
        .byte           N22   , As3 , v112
        .byte   W12
@ 002   ----------------------------------------
        .byte   W12
        .byte           N10   , Ds3 , v108
        .byte           N10   , Fs3 , v124
        .byte   W18
        .byte           N04   , Cs3 , v120
        .byte           N04   , Fn3
        .byte   W06
        .byte           N68   , As2 , v116
        .byte           N66   , Ds3 , v127
        .byte   W60
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W12
        .byte           N44   , As2 , v108
        .byte           N44   , Ds3 , v120
        .byte   W72
        .byte           N11   , Ds3 , v127
        .byte           N11   , As3
        .byte   W12
@ 005   ----------------------------------------
        .byte   W12
        .byte           N32   , Cs3 , v108
        .byte           N32   , Fs3 , v120
        .byte   W40
        .byte           N24   , Fs3 , v108
        .byte           N24   , Bn3 , v120
        .byte   W32
        .byte           N22   , Fn3 , v108
        .byte           N22   , As3 , v112
        .byte   W12
@ 006   ----------------------------------------
        .byte   W12
        .byte           N03   , Ds3 , v127
        .byte           N03   , Fs3
        .byte   W08
        .byte                   Fn3 , v120
        .byte           N03   , Gs3
        .byte   W08
        .byte           N68   , Fs3 , v116
        .byte           N68   , As3 , v127
        .byte   W68
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W12
        .byte           N44   , Cn3 , v108
        .byte           N44   , Fn3 , v120
        .byte   W08
        .byte           BEND  , c_v-1
        .byte   W08
        .byte                   c_v+0
        .byte   W56
        .byte           N09   , Fn3 , v108
        .byte           N09   , Cn4
        .byte   W12
@ 009   ----------------------------------------
        .byte   W12
        .byte           N30   , Ds3
        .byte           N30   , Gs3 , v120
        .byte   W40
        .byte           N24   , Gs3 , v108
        .byte           N24   , Cs4 , v120
        .byte   W32
        .byte           N22   , Gn3 , v108
        .byte           N22   , Cn4 , v112
        .byte   W12
@ 010   ----------------------------------------
        .byte   W12
        .byte           N03   , Fn3 , v108
        .byte           N03   , Gs3 , v124
        .byte   W08
        .byte                   Gn3 , v120
        .byte           N03   , As3
        .byte   W08
        .byte           N68   , Gs3 , v116
        .byte           N68   , Cn4 , v127
        .byte   W68
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W12
        .byte           N04   , Gn2
        .byte           N04   , En3
        .byte   W24
        .byte                   Gn2 , v112
        .byte           N04   , En3
        .byte   W24
        .byte                   Gn2 , v124
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2 , v112
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2 , v120
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2 , v112
        .byte           N04   , En3
        .byte   W12
@ 013   ----------------------------------------
        .byte   W12
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W16
        .byte                   As2
        .byte           N04   , Gn3
        .byte   W16
        .byte                   As2
        .byte           N04   , Gn3
        .byte   W16
        .byte           N07   , Gs2
        .byte           N07   , Fn3
        .byte   W16
        .byte                   Fn2
        .byte           N07   , Dn3
        .byte   W16
        .byte                   Gs2
        .byte           N07   , Fn3
        .byte   W04
@ 014   ----------------------------------------
        .byte   W12
        .byte                   Gn2
        .byte           N07   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N07   , En3
        .byte   W24
        .byte           N04   , Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W12
@ 015   ----------------------------------------
        .byte   W12
        .byte           N07   , Gn2
        .byte           N07   , En3
        .byte   W16
        .byte                   As2
        .byte           N07   , Gn3
        .byte   W16
        .byte                   As2
        .byte           N07   , Gn3
        .byte   W16
        .byte                   Gs2
        .byte           N07   , Fn3
        .byte   W16
        .byte                   Cs3
        .byte           N07   , As3
        .byte   W16
        .byte                   Cn3
        .byte           N07   , An3
        .byte   W04
@ 016   ----------------------------------------
        .byte   W12
        .byte           N04   , Gn2
        .byte           N04   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W12
@ 017   ----------------------------------------
        .byte   W12
        .byte                   Gn2
        .byte           N04   , En3
        .byte   W08
        .byte           N01   , Gn2
        .byte           N01   , En3
        .byte   W08
        .byte           N04   , As2
        .byte           N04   , Gn3
        .byte   W16
        .byte                   As2
        .byte           N04   , Gn3
        .byte   W16
        .byte           N03   , Gs2
        .byte           N03   , Fn3
        .byte   W08
        .byte           N01   , Gs2
        .byte           N01   , Fn3
        .byte   W08
        .byte           N07   , Fn2
        .byte           N07   , Dn3
        .byte   W16
        .byte                   Gs2
        .byte           N07   , Fn3
        .byte   W04
@ 018   ----------------------------------------
        .byte   W12
        .byte                   Gn2
        .byte           N07   , En3
        .byte           N07   , Gn3
        .byte   W24
        .byte           N04   , Gn2
        .byte           N07   , En3
        .byte           N07   , Gn3
        .byte   W24
        .byte           N03   , Gn2
        .byte           N03   , En3
        .byte           N03   , Gn3
        .byte   W08
        .byte           N01   , Gn2
        .byte           N01   , En3 , v100
        .byte           N01   , Gn3
        .byte   W08
        .byte           N03   , Gn2 , v112
        .byte           N03   , En3
        .byte           N03   , Gn3
        .byte   W08
        .byte           N04   , Gn2
        .byte   W08
        .byte           N03
        .byte           N03   , En3
        .byte           N03   , Gn3
        .byte   W04
@ 019   ----------------------------------------
        .byte   W12
        .byte                   Gn2
        .byte           N03   , En3
        .byte           N03   , Gn3
        .byte   W08
        .byte           N01   , Gn2
        .byte   W08
        .byte           N04   , As2
        .byte           N07   , Gn3
        .byte           N07   , As3
        .byte   W16
        .byte           N04   , As2
        .byte           N07   , Gn3
        .byte           N07   , As3
        .byte   W16
        .byte           N03   , Gs2
        .byte           N07   , Gs3
        .byte   W08
        .byte           N01   , Gs2
        .byte   W08
        .byte           N07   , As3
        .byte           N07   , Cs4
        .byte           N07   , As4
        .byte   W16
        .byte                   Cs4
        .byte           N07   , En4
        .byte           N07   , Cs5
        .byte   W04
@ 020   ----------------------------------------
        .byte   W12
        .byte                   Dn4
        .byte           N07   , Gs4
        .byte           N07   , Dn5
        .byte   W24
        .byte           N05   , Dn4
        .byte           N05   , Gs4
        .byte           N02   , Dn5
        .byte   W32
        .byte           N01   , Dn4
        .byte           N01   , Gs4
        .byte           N01   , Dn5
        .byte   W08
        .byte                   Dn4
        .byte           N01   , Gs4
        .byte           N01   , Dn5
        .byte   W08
        .byte           N02   , Dn4
        .byte           N02   , Gs4
        .byte           N02   , Dn5
        .byte   W12
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W12
        .byte           N52   , As2 , v108
        .byte           N52   , Ds3 , v127
        .byte   W72
        .byte   GOTO
         .word  mus_pkmn_bw12_180_0_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_180_1:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 8
        .byte           PAN   , c_v+50
        .byte           VOL   , 81
        .byte   W12
        .byte           N44   , Ds4 , v100
        .byte   W48
        .byte           N42   , As3 , v096
        .byte   W24
mus_pkmn_bw12_180_1_LOOP:
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N44   , Fs3 , v124
        .byte   W48
        .byte           N36   , Ds3 , v104
        .byte   W36
@ 002   ----------------------------------------
        .byte   W05
        .byte           N01   , Bn3 , v044
        .byte   W01
        .byte                   Cn4 , v048
        .byte   W01
        .byte                   Dn4 , v052
        .byte   W01
        .byte                   En4 , v056
        .byte   W01
        .byte                   Fn4
        .byte   W01
        .byte                   Gn4 , v060
        .byte   W01
        .byte                   An4 , v068
        .byte   W01
        .byte           N11   , As4 , v100
        .byte   W16
        .byte                   As4 , v076
        .byte   W16
        .byte                   As4 , v052
        .byte   W16
        .byte                   As4
        .byte   W36
@ 003   ----------------------------------------
        .byte   W12
        .byte           N44   , Ds4 , v084
        .byte   W48
        .byte           N30   , As3
        .byte   W36
@ 004   ----------------------------------------
        .byte           N10   , En3 , v127
        .byte   W12
        .byte           N42   , Ds4 , v096
        .byte   W48
        .byte                   As3
        .byte   W36
@ 005   ----------------------------------------
        .byte   W12
        .byte           N36   , Fs3 , v116
        .byte   W48
        .byte           N42   , Bn3 , v096
        .byte   W36
@ 006   ----------------------------------------
        .byte   W12
        .byte           N90   , Ds4 , v104
        .byte   W84
@ 007   ----------------------------------------
        .byte   W12
        .byte           N42   , As3
        .byte   W48
        .byte                   Fs3
        .byte   W36
@ 008   ----------------------------------------
        .byte   W12
        .byte           N44   , Fn4 , v124
        .byte   W48
        .byte                   Cn4 , v096
        .byte   W36
@ 009   ----------------------------------------
        .byte   W12
        .byte                   Gs3 , v124
        .byte   W48
        .byte                   Fn3
        .byte   W36
@ 010   ----------------------------------------
        .byte   W12
        .byte                   Fn4
        .byte   W48
        .byte                   Cn4
        .byte   W36
@ 011   ----------------------------------------
        .byte   W12
        .byte                   Gs4
        .byte   W84
@ 012   ----------------------------------------
        .byte   W12
        .byte           N90   , En3 , v127
        .byte   W84
@ 013   ----------------------------------------
        .byte   W12
        .byte                   As3
        .byte   W84
@ 014   ----------------------------------------
mus_pkmn_bw12_180_1_14:
        .byte   W12
        .byte           N92   , En3 , v127
        .byte   W84
        .byte   PEND
@ 015   ----------------------------------------
        .byte   W12
        .byte                   Bn2
        .byte   W84
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_1_14
@ 017   ----------------------------------------
        .byte   W12
        .byte           N88   , As3 , v127
        .byte   W84
@ 018   ----------------------------------------
        .byte   W96
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W12
        .byte           N22   , As4 , v124
        .byte   W24
        .byte                   As4 , v116
        .byte   W32
        .byte           N05   , As4 , v112
        .byte   W08
        .byte           N04
        .byte   W08
        .byte           N32
        .byte   W12
@ 021   ----------------------------------------
        .byte   W12
        .byte           N12   , Fn3
        .byte   W16
        .byte                   Fn3 , v088
        .byte   W16
        .byte           N07   , Fn3 , v068
        .byte   W16
        .byte           N14   , Dn3 , v112
        .byte   W16
        .byte                   Dn3 , v080
        .byte   W16
        .byte           N07   , Dn3 , v048
        .byte   W04
@ 022   ----------------------------------------
        .byte   W12
        .byte           N14   , Gs3 , v112
        .byte   W16
        .byte                   Gs3 , v088
        .byte   W16
        .byte           N07   , Gs3 , v052
        .byte   W16
        .byte           N14   , Bn3 , v100
        .byte   W16
        .byte                   Bn3 , v076
        .byte   W16
        .byte           N07   , Bn3 , v052
        .byte   W04
@ 023   ----------------------------------------
        .byte   W12
        .byte           N44   , Ds4 , v100
        .byte   W48
        .byte           N42   , As3 , v096
        .byte   W24
        .byte   GOTO
         .word  mus_pkmn_bw12_180_1_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_180_2:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 45
        .byte           PAN   , c_v+46
        .byte           VOL   , 88
        .byte   W12
        .byte           N01   , Ds1 , v100
        .byte   W24
        .byte   W02
        .byte                   Ds1 , v096
        .byte   W22
        .byte                   As0 , v100
        .byte   W08
        .byte                   As0 , v088
        .byte   W08
        .byte                   As0
        .byte   W08
mus_pkmn_bw12_180_2_LOOP:
        .byte           N01   , As0 , v100
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_180_2_1:
        .byte   W12
        .byte           N01   , Bn0 , v100
        .byte   W08
        .byte                   Bn0 , v088
        .byte   W08
        .byte                   Bn0
        .byte   W08
        .byte                   Bn0 , v096
        .byte   W12
        .byte                   Bn0 , v084
        .byte   W12
        .byte                   Dn1 , v100
        .byte   W08
        .byte                   Dn1 , v088
        .byte   W08
        .byte                   Dn1
        .byte   W08
        .byte                   Dn1 , v100
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
        .byte           N11   , Dn1 , v096
        .byte   W12
        .byte           N01   , Ds1 , v100
        .byte   W24
        .byte                   Ds1 , v096
        .byte   W24
        .byte                   Ds1 , v100
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v100
        .byte   W12
@ 003   ----------------------------------------
        .byte   W04
        .byte                   En1
        .byte   W08
        .byte                   Ds1 , v116
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v096
        .byte   W12
        .byte                   Ds1 , v084
        .byte   W12
        .byte                   Ds1 , v100
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v100
        .byte   W12
@ 004   ----------------------------------------
        .byte           N11   , En1 , v096
        .byte   W12
        .byte           N01   , Ds1 , v100
        .byte   W24
        .byte                   Ds1 , v096
        .byte   W24
        .byte                   As0 , v100
        .byte   W08
        .byte                   As0 , v088
        .byte   W08
        .byte                   As0
        .byte   W08
        .byte                   As0 , v100
        .byte   W12
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_2_1
@ 006   ----------------------------------------
        .byte           N11   , Dn1 , v096
        .byte   W12
        .byte           N01   , Bn0 , v100
        .byte   W24
        .byte                   Bn0 , v096
        .byte   W24
        .byte                   As0 , v100
        .byte   W08
        .byte                   As0 , v088
        .byte   W08
        .byte                   As0
        .byte   W08
        .byte                   As0 , v100
        .byte   W12
@ 007   ----------------------------------------
        .byte   W04
        .byte           N07   , An0
        .byte   W08
        .byte           N01   , Ds1 , v116
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v116
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v100
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   Ds1 , v100
        .byte   W12
@ 008   ----------------------------------------
        .byte   W04
        .byte           N07   , En1 , v096
        .byte   W08
        .byte           N01   , En1 , v100
        .byte   W24
        .byte                   Fn1 , v096
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W08
        .byte                   Cn1 , v088
        .byte   W08
        .byte                   Cn1
        .byte   W08
        .byte           N05   , Cn1 , v100
        .byte   W12
@ 009   ----------------------------------------
        .byte   W12
        .byte           N01   , Cs1
        .byte   W08
        .byte                   Cs1 , v088
        .byte   W08
        .byte                   Cs1
        .byte   W08
        .byte                   Cn1 , v096
        .byte   W12
        .byte                   Cn1 , v084
        .byte   W12
        .byte                   Ds1 , v100
        .byte   W08
        .byte                   Ds1 , v088
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte                   En1 , v100
        .byte   W12
@ 010   ----------------------------------------
        .byte           N11   , En1 , v096
        .byte   W12
        .byte           N01   , Cs1 , v100
        .byte   W24
        .byte                   Cs1 , v096
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W08
        .byte                   Cn1 , v088
        .byte   W08
        .byte                   Cn1
        .byte   W08
        .byte                   Cn1 , v100
        .byte   W12
@ 011   ----------------------------------------
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W24
        .byte                   Gn1 , v096
        .byte   W12
        .byte                   Gn1 , v084
        .byte   W12
        .byte                   Fn1 , v100
        .byte   W08
        .byte                   Fn1 , v088
        .byte   W08
        .byte                   Fn1
        .byte   W08
        .byte                   Fn1 , v100
        .byte   W12
@ 012   ----------------------------------------
        .byte           N09   , Gs1 , v108
        .byte   W12
        .byte           N08   , En1 , v116
        .byte   W24
        .byte                   En1
        .byte   W24
        .byte           N03
        .byte   W08
        .byte                   Gn1 , v096
        .byte   W08
        .byte                   Fs1 , v104
        .byte   W08
        .byte           N01   , As1 , v116
        .byte   W08
        .byte                   An1 , v092
        .byte   W04
@ 013   ----------------------------------------
        .byte   W04
        .byte                   Cs2 , v100
        .byte   W08
        .byte           N08   , En1 , v116
        .byte   W16
        .byte           N05   , Gn1
        .byte   W16
        .byte                   Gn1
        .byte   W16
        .byte           N06   , Fn1
        .byte   W16
        .byte                   Dn1
        .byte   W16
        .byte           N07   , Fn1
        .byte   W04
@ 014   ----------------------------------------
        .byte   W12
        .byte           N08   , En1
        .byte   W24
        .byte                   En1
        .byte   W24
        .byte           N03
        .byte   W08
        .byte                   Gn1
        .byte   W08
        .byte                   Fs1
        .byte   W08
        .byte           N01   , As1
        .byte   W08
        .byte                   An1
        .byte   W04
@ 015   ----------------------------------------
        .byte   W04
        .byte                   Cs2
        .byte   W08
        .byte                   En2
        .byte   W08
        .byte                   Cs2
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Cs2
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Gn1
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Gn1
        .byte   W08
        .byte                   En1
        .byte   W08
        .byte           N07   , Gn1
        .byte   W08
        .byte           N03   , Fs1 , v096
        .byte   W04
@ 016   ----------------------------------------
        .byte                   Fn1 , v092
        .byte   W04
        .byte                   En1 , v088
        .byte   W04
        .byte                   Cs1 , v080
        .byte   W04
        .byte           VOL   , 80
        .byte           N02   , Gn0 , v116
        .byte   W08
        .byte                   Bn0
        .byte   W08
        .byte                   As0
        .byte   W08
        .byte                   Bn0
        .byte   W08
        .byte                   Dn1
        .byte   W08
        .byte                   Cs1
        .byte   W08
        .byte                   En1
        .byte   W08
        .byte                   Gn1 , v096
        .byte   W08
        .byte                   Fs1 , v104
        .byte   W08
        .byte           N15   , As1 , v116
        .byte   W12
@ 017   ----------------------------------------
        .byte   W04
        .byte           N07   , Cs2
        .byte   W08
        .byte           N01   , En2 , v120
        .byte   W08
        .byte                   Cs2 , v116
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Cs2
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Gn1
        .byte   W08
        .byte                   As1
        .byte   W08
        .byte                   Gn1
        .byte   W08
        .byte                   En1
        .byte   W08
        .byte           N15   , Gn1 , v120
        .byte   W12
@ 018   ----------------------------------------
        .byte   W04
        .byte           N01   , Fs1 , v104
        .byte   W01
        .byte                   Fn1 , v096
        .byte   W01
        .byte                   En1
        .byte   W01
        .byte                   Ds1 , v088
        .byte   W01
        .byte                   Cs1 , v084
        .byte   W01
        .byte                   Cn1 , v080
        .byte   W01
        .byte                   Bn0 , v076
        .byte   W01
        .byte                   As0 , v080
        .byte   W01
        .byte           N08   , En1 , v116
        .byte   W24
        .byte                   En1
        .byte   W24
        .byte           N03
        .byte   W08
        .byte                   Gn1 , v096
        .byte   W08
        .byte                   Fs1 , v104
        .byte   W08
        .byte                   As1 , v116
        .byte   W08
        .byte                   An1 , v092
        .byte   W04
@ 019   ----------------------------------------
        .byte   W04
        .byte                   Cs2 , v100
        .byte   W08
        .byte           N04   , En1 , v112
        .byte   W16
        .byte           N07   , Gn1
        .byte   W16
        .byte                   Gn1
        .byte   W16
        .byte                   Fn1
        .byte   W16
        .byte                   As1
        .byte   W16
        .byte                   Cs2
        .byte   W04
@ 020   ----------------------------------------
        .byte   W12
        .byte           N11   , As0 , v127
        .byte   W24
        .byte           N09   , As0 , v124
        .byte   W32
        .byte           N02
        .byte   W07
        .byte                   As0
        .byte   W09
        .byte           N04
        .byte   W12
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W12
        .byte           VOL   , 88
        .byte           N01   , Ds1 , v100
        .byte   W24
        .byte   W02
        .byte                   Ds1 , v096
        .byte   W22
        .byte                   As0 , v100
        .byte   W08
        .byte                   As0 , v088
        .byte   W08
        .byte                   As0
        .byte   W08
        .byte   GOTO
         .word  mus_pkmn_bw12_180_2_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_180_3:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 90
        .byte           VOICE , 46
        .byte           N01   , As1 , v044
        .byte   W02
        .byte                   As1
        .byte   W02
        .byte                   As1
        .byte   W02
        .byte                   As1 , v060
        .byte   W02
        .byte                   As1 , v080
        .byte   W02
        .byte                   As1 , v088
        .byte   W02
        .byte           N44   , Ds2 , v127
        .byte   W48
        .byte                   As1 , v116
        .byte   W24
mus_pkmn_bw12_180_3_LOOP:
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N44   , Bn1 , v127
        .byte   W48
        .byte           N19   , Dn2
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte           N21   , Ds2
        .byte   W24
        .byte                   Ds2 , v100
        .byte   W24
        .byte           N05
        .byte   W08
        .byte                   Ds2 , v072
        .byte   W08
        .byte                   Ds2 , v080
        .byte   W08
        .byte           N21   , Ds2 , v112
        .byte   W12
@ 003   ----------------------------------------
        .byte   W12
        .byte           N36   , Ds2 , v127
        .byte   W40
        .byte           N01   , As1 , v076
        .byte   W04
        .byte                   As1 , v072
        .byte   W04
        .byte                   As1 , v127
        .byte   W04
        .byte                   As1 , v080
        .byte   W04
        .byte                   As1 , v084
        .byte   W04
        .byte                   As1
        .byte   W04
        .byte                   As1 , v088
        .byte   W04
        .byte                   As1 , v092
        .byte   W04
        .byte                   As1 , v100
        .byte   W04
        .byte                   As1 , v108
        .byte   W04
        .byte                   As1 , v124
        .byte   W04
@ 004   ----------------------------------------
        .byte           N11   , Bn1 , v127
        .byte   W12
        .byte           N42   , Ds1
        .byte   W48
        .byte           N19   , As1 , v120
        .byte   W36
@ 005   ----------------------------------------
        .byte   W12
        .byte           N05   , Bn1 , v127
        .byte   W08
        .byte                   Bn1 , v072
        .byte   W08
        .byte                   Bn1 , v080
        .byte   W08
        .byte           N09   , Bn1 , v108
        .byte   W16
        .byte           N05   , As1 , v096
        .byte   W08
        .byte                   Bn1 , v100
        .byte   W08
        .byte                   Bn1 , v072
        .byte   W08
        .byte                   Bn1 , v080
        .byte   W08
        .byte           N19   , Bn1 , v112
        .byte   W12
@ 006   ----------------------------------------
        .byte   W12
        .byte           N21   , Bn1 , v127
        .byte   W24
        .byte                   Bn1 , v100
        .byte   W24
        .byte           N05   , As1
        .byte   W08
        .byte                   As1 , v072
        .byte   W08
        .byte                   As1 , v080
        .byte   W08
        .byte           N21   , As1 , v112
        .byte   W12
@ 007   ----------------------------------------
        .byte   W12
        .byte           N05   , Ds2 , v127
        .byte   W08
        .byte                   Ds2 , v072
        .byte   W08
        .byte                   Ds2 , v080
        .byte   W08
        .byte                   Ds2 , v127
        .byte   W08
        .byte                   Ds2 , v072
        .byte   W08
        .byte                   Ds2 , v080
        .byte   W08
        .byte           N01   , As1 , v127
        .byte   W04
        .byte                   As1 , v080
        .byte   W04
        .byte                   As1 , v084
        .byte   W04
        .byte                   As1
        .byte   W04
        .byte                   As1 , v088
        .byte   W04
        .byte                   As1 , v092
        .byte   W04
        .byte                   As1 , v100
        .byte   W04
        .byte                   As1 , v108
        .byte   W04
        .byte                   As1 , v124
        .byte   W04
@ 008   ----------------------------------------
        .byte           N11   , Bn1 , v127
        .byte   W12
        .byte           N21   , Fn2
        .byte   W24
        .byte                   Fn2 , v100
        .byte   W24
        .byte           N05   , Cn2
        .byte   W08
        .byte                   Cn2 , v072
        .byte   W08
        .byte                   Cn2 , v080
        .byte   W08
        .byte           N21   , Cn2 , v112
        .byte   W12
@ 009   ----------------------------------------
        .byte   W12
        .byte                   Cs2 , v127
        .byte   W24
        .byte                   Cn2
        .byte   W24
        .byte           N19   , Ds1 , v112
        .byte   W24
        .byte           N01   , Cn2 , v096
        .byte   W04
        .byte                   Cn2 , v080
        .byte   W04
        .byte                   Cn2 , v092
        .byte   W04
@ 010   ----------------------------------------
        .byte                   Cn2 , v100
        .byte   W04
        .byte                   Cn2 , v112
        .byte   W04
        .byte                   Cn2
        .byte   W04
        .byte           N44   , Cs2 , v127
        .byte   W48
        .byte                   Cn2
        .byte   W36
@ 011   ----------------------------------------
        .byte   W12
        .byte                   Gs2
        .byte   W48
        .byte           N36   , Fn1 , v112
        .byte   W36
@ 012   ----------------------------------------
        .byte   W04
        .byte           N01   , Dn1 , v108
        .byte   W04
        .byte                   Dn1 , v116
        .byte   W04
        .byte           N19   , En1 , v127
        .byte   W24
        .byte           N12   , En1 , v100
        .byte   W24
        .byte           N05
        .byte   W08
        .byte                   En1 , v088
        .byte   W08
        .byte                   En1 , v092
        .byte   W08
        .byte           N17   , En1 , v100
        .byte   W12
@ 013   ----------------------------------------
        .byte   W12
        .byte           N14
        .byte   W16
        .byte           N13   , En1 , v084
        .byte   W16
        .byte                   En1
        .byte   W16
        .byte                   An1 , v092
        .byte   W16
        .byte                   Fn1 , v072
        .byte   W16
        .byte                   Gs1 , v088
        .byte   W04
@ 014   ----------------------------------------
        .byte   W12
        .byte           N20   , En1 , v108
        .byte   W24
        .byte           N21   , En1 , v092
        .byte   W24
        .byte           N05   , En1 , v084
        .byte   W08
        .byte                   En1 , v076
        .byte   W08
        .byte                   En1 , v080
        .byte   W08
        .byte           N17   , En1 , v088
        .byte   W12
@ 015   ----------------------------------------
        .byte   W12
        .byte           N05   , En2 , v127
        .byte   W12
        .byte           N11   , As1 , v088
        .byte   W72
@ 016   ----------------------------------------
        .byte   W12
        .byte           N19   , En1 , v127
        .byte   W23
        .byte           N12   , En1 , v100
        .byte   W24
        .byte           N05
        .byte   W08
        .byte                   En1 , v088
        .byte   W08
        .byte                   En1 , v092
        .byte   W08
        .byte           N17   , En1 , v100
        .byte   W13
@ 017   ----------------------------------------
        .byte   W12
        .byte           N12
        .byte   W15
        .byte           N11   , Gn1
        .byte   W16
        .byte                   Gn1
        .byte   W16
        .byte                   Fn1
        .byte   W16
        .byte                   Dn1
        .byte   W16
        .byte                   Fn1
        .byte   W05
@ 018   ----------------------------------------
        .byte   W12
        .byte                   En1
        .byte   W23
        .byte           N12
        .byte   W24
        .byte           N05
        .byte   W08
        .byte                   En1 , v088
        .byte   W08
        .byte                   En1 , v092
        .byte   W08
        .byte           N17   , En1 , v100
        .byte   W13
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W12
        .byte           N20   , As1 , v127
        .byte   W24
        .byte                   As1 , v100
        .byte   W32
        .byte           N01   , As2 , v120
        .byte   W08
        .byte                   As2 , v112
        .byte   W08
        .byte           N11   , As1 , v120
        .byte   W12
@ 021   ----------------------------------------
        .byte   W08
        .byte           N01   , Fn1 , v096
        .byte   W02
        .byte                   Fn1 , v084
        .byte   W02
        .byte           N44   , As1 , v116
        .byte   W48
        .byte                   Fn1 , v104
        .byte   W36
@ 022   ----------------------------------------
        .byte   W12
        .byte                   As1 , v116
        .byte   W48
        .byte           N32   , Fn1 , v100
        .byte   W36
@ 023   ----------------------------------------
        .byte           N01   , As1 , v056
        .byte   W02
        .byte                   As1 , v064
        .byte   W02
        .byte                   As1 , v072
        .byte   W02
        .byte                   As1 , v084
        .byte   W02
        .byte                   As1 , v092
        .byte   W02
        .byte                   As1 , v108
        .byte   W02
        .byte           N44   , Ds2 , v127
        .byte   W48
        .byte                   As1 , v116
        .byte   W24
        .byte   GOTO
         .word  mus_pkmn_bw12_180_3_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_180_4:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 34
        .byte           PAN   , c_v+8
        .byte           VOL   , 90
        .byte   W12
        .byte           N44   , Ds1 , v112
        .byte   W48
        .byte                   As0 , v100
        .byte   W24
mus_pkmn_bw12_180_4_LOOP:
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N44   , Bn0 , v112
        .byte   W48
        .byte                   Dn1 , v100
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte           N92   , Ds1 , v112
        .byte   W84
@ 003   ----------------------------------------
mus_pkmn_bw12_180_4_3:
        .byte   W12
        .byte           N23   , Ds1 , v116
        .byte   W24
        .byte           N21   , Ds1 , v084
        .byte   W24
        .byte           N06
        .byte   W08
        .byte                   Ds1
        .byte   W08
        .byte           N17
        .byte   W20
        .byte   PEND
@ 004   ----------------------------------------
        .byte           N10   , En1 , v112
        .byte   W12
        .byte           N44   , Ds1 , v120
        .byte   W48
        .byte                   As0 , v108
        .byte   W36
@ 005   ----------------------------------------
        .byte   W12
        .byte                   Bn0 , v112
        .byte   W48
        .byte                   Dn1
        .byte   W36
@ 006   ----------------------------------------
        .byte   W12
        .byte                   Bn0
        .byte   W48
        .byte                   As0
        .byte   W36
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_4_3
@ 008   ----------------------------------------
        .byte   W04
        .byte           N07   , En1 , v112
        .byte   W08
        .byte           N44   , Fn1 , v108
        .byte   W48
        .byte           N01   , Cn1 , v092
        .byte   W08
        .byte                   Cn1
        .byte   W08
        .byte                   Cn1
        .byte   W08
        .byte           N21
        .byte   W12
@ 009   ----------------------------------------
        .byte   W12
        .byte                   Cs1
        .byte   W24
        .byte                   Cn1
        .byte   W24
        .byte                   Ds1 , v100
        .byte   W24
        .byte                   En1
        .byte   W12
@ 010   ----------------------------------------
        .byte   W12
        .byte           N44   , Cs1 , v112
        .byte   W48
        .byte                   Cn1
        .byte   W36
@ 011   ----------------------------------------
        .byte   W12
        .byte           N21   , Gs0 , v116
        .byte   W24
        .byte           N19   , Gn0 , v084
        .byte   W24
        .byte           N06   , Fn0
        .byte   W08
        .byte                   Fn0
        .byte   W08
        .byte           N17
        .byte   W20
@ 012   ----------------------------------------
        .byte           N09   , Gs0 , v112
        .byte   W12
        .byte           N56   , En1 , v127
        .byte   W84
@ 013   ----------------------------------------
        .byte   W12
        .byte                   As0
        .byte   W84
@ 014   ----------------------------------------
mus_pkmn_bw12_180_4_14:
        .byte   W12
        .byte           N56   , En1 , v127
        .byte   W84
        .byte   PEND
@ 015   ----------------------------------------
mus_pkmn_bw12_180_4_15:
        .byte   W12
        .byte           N72   , As0 , v127
        .byte   W84
        .byte   PEND
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_4_14
@ 017   ----------------------------------------
        .byte   W12
        .byte           N72   , As0 , v127
        .byte           N15   , En1 , v116
        .byte   W84
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_4_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_4_15
@ 020   ----------------------------------------
        .byte   W12
        .byte           N20   , As0 , v127
        .byte   W24
        .byte                   As0
        .byte   W32
        .byte           N04
        .byte   W07
        .byte                   As0
        .byte   W09
        .byte           N20
        .byte   W12
@ 021   ----------------------------------------
mus_pkmn_bw12_180_4_21:
        .byte   W12
        .byte           N40   , As0 , v100
        .byte   W48
        .byte           N44   , Fn0
        .byte   W36
        .byte   PEND
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_4_21
@ 023   ----------------------------------------
        .byte   W12
        .byte           N44   , Ds1 , v112
        .byte   W48
        .byte                   As0 , v100
        .byte   W24
        .byte   GOTO
         .word  mus_pkmn_bw12_180_4_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_180_5:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 30
        .byte           PAN   , c_v-50
        .byte           VOL   , 79
        .byte   W12
        .byte           N05   , Fs3 , v116
        .byte           N05   , Ds4 , v124
        .byte   W08
        .byte                   Fn3 , v104
        .byte           N05   , Dn4
        .byte   W08
        .byte                   En3
        .byte           N05   , Cs4
        .byte   W08
        .byte                   Ds3 , v100
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Dn3 , v096
        .byte           N05   , Bn3
        .byte   W08
        .byte                   Cs3 , v100
        .byte           N05   , As3
        .byte   W08
        .byte                   Cn3 , v116
        .byte           N05   , An3
        .byte   W08
        .byte                   Bn2 , v104
        .byte           N05   , Gs3
        .byte   W08
        .byte                   As2
        .byte           N05   , Gn3
        .byte   W08
mus_pkmn_bw12_180_5_LOOP:
        .byte           N05   , An2 , v104
        .byte           N05   , Fs3
        .byte   W08
        .byte                   Gs2
        .byte           N05   , Fn3
        .byte   W04
@ 001   ----------------------------------------
        .byte   W04
        .byte                   Gn2
        .byte           N05   , En3
        .byte   W08
        .byte                   Fs2 , v116
        .byte           N05   , Ds3
        .byte   W08
        .byte                   Ds3 , v104
        .byte           N05   , As3
        .byte   W08
        .byte                   Dn3
        .byte           N05   , An3
        .byte   W08
        .byte                   Fs2
        .byte           N05   , Ds3
        .byte   W08
        .byte                   As3
        .byte           N05   , Cs4
        .byte   W08
        .byte                   An3
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Fs2 , v116
        .byte           N05   , Ds3
        .byte   W08
        .byte                   As3
        .byte           N05   , Ds4 , v108
        .byte   W08
        .byte                   An3 , v116
        .byte           N04   , Dn4 , v108
        .byte   W08
        .byte           N10   , As3 , v116
        .byte           N10   , Fs4
        .byte   W12
@ 002   ----------------------------------------
        .byte           N04   , An3
        .byte           N04   , Fn4
        .byte   W06
        .byte           N01   , Cn3 , v120
        .byte           N01   , Cn4
        .byte   W01
        .byte                   Dn3 , v124
        .byte           N01   , Dn4
        .byte   W01
        .byte                   En3
        .byte           N01   , En4
        .byte   W01
        .byte                   Fn3
        .byte   W01
        .byte                   Gn3 , v127
        .byte           N01   , Gn4
        .byte   W01
        .byte                   An3
        .byte           N01   , An4
        .byte   W01
        .byte           N05   , Ds3 , v124
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W24
        .byte           N05   , Ds3 , v096
        .byte           N01   , As3 , v116
        .byte           N01   , As4
        .byte   W24
        .byte           N05   , Ds3 , v120
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v104
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v112
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v120
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W12
@ 003   ----------------------------------------
        .byte   W04
        .byte                   Dn3
        .byte           N01   , An3
        .byte           N01   , An4
        .byte   W04
        .byte                   En3 , v072
        .byte           N01   , En4
        .byte   W01
        .byte                   Fn3
        .byte           N01   , Fn4
        .byte   W01
        .byte                   Gn3 , v080
        .byte           N01   , Gn4
        .byte   W01
        .byte                   An3 , v088
        .byte           N01   , An4
        .byte   W01
        .byte           N05   , Ds3 , v116
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v100
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v108
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v112
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W12
        .byte           N11   , En3 , v100
        .byte           N11   , Bn3
        .byte           N11   , Bn4
        .byte   W12
        .byte           N05   , Ds3 , v116
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v100
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W08
        .byte           N05   , Ds3 , v116
        .byte           N01   , As3
        .byte           N01   , As4
        .byte   W12
@ 004   ----------------------------------------
        .byte           N10   , En3 , v100
        .byte           N10   , Bn3
        .byte           N10   , An4
        .byte   W12
        .byte           N05   , Fs3 , v120
        .byte           N05   , Ds4
        .byte   W08
        .byte                   Fn3 , v104
        .byte           N05   , Dn4
        .byte   W08
        .byte                   En3
        .byte           N05   , Cs4
        .byte   W08
        .byte                   Ds3 , v116
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Dn3 , v100
        .byte           N05   , Bn3
        .byte   W08
        .byte                   Cs3 , v104
        .byte           N05   , As3
        .byte   W08
        .byte                   Cn3 , v120
        .byte           N05   , An3
        .byte   W08
        .byte                   Bn2 , v096
        .byte           N05   , Gs3
        .byte   W08
        .byte                   As2 , v092
        .byte           N05   , Gn3
        .byte   W08
        .byte                   An2
        .byte           N05   , Fs3
        .byte   W08
        .byte                   Gs2
        .byte           N05   , Fn3
        .byte   W04
@ 005   ----------------------------------------
        .byte   W04
        .byte                   Gn2 , v096
        .byte           N05   , En3
        .byte   W08
        .byte                   As2 , v116
        .byte           N05   , Ds3
        .byte   W08
        .byte                   Ds3 , v100
        .byte           N05   , Fs3
        .byte   W08
        .byte                   Dn3 , v096
        .byte           N05   , Fn3
        .byte   W08
        .byte                   Ds3 , v120
        .byte           N05   , Fs3
        .byte   W08
        .byte                   Fs3 , v104
        .byte           N05   , As3
        .byte   W08
        .byte                   Fn3
        .byte           N05   , An3
        .byte   W08
        .byte                   Fs3 , v120
        .byte           N05   , Bn3
        .byte   W08
        .byte                   As3 , v108
        .byte           N05   , Ds4
        .byte   W08
        .byte                   Gs3
        .byte           N05   , Cs4
        .byte   W08
        .byte                   As3 , v116
        .byte           N05   , Ds4
        .byte   W08
        .byte                   Ds4 , v108
        .byte           N05   , As4
        .byte   W04
@ 006   ----------------------------------------
        .byte   W04
        .byte           N01   , Ds3 , v096
        .byte           N01   , Bn3 , v124
        .byte   W02
        .byte                   Fn3 , v127
        .byte           N01   , Cs4
        .byte   W02
        .byte                   Fs3
        .byte           N01   , Ds4
        .byte   W02
        .byte                   Gs3
        .byte           N01   , Fn4
        .byte   W02
        .byte           N05   , Ds3
        .byte           N05   , Bn3
        .byte           N05   , Fs4
        .byte   W24
        .byte                   Ds3 , v100
        .byte           N01   , As3 , v116
        .byte           N01   , Fs4
        .byte   W24
        .byte           N05   , Ds3 , v124
        .byte           N01   , As3 , v120
        .byte           N01   , Fs4
        .byte   W08
        .byte           N05   , Ds3 , v108
        .byte           N01   , As3 , v104
        .byte           N01   , Fs4
        .byte   W08
        .byte           N05   , Ds3 , v116
        .byte           N01   , As3 , v112
        .byte           N01   , Fs4
        .byte   W08
        .byte           N05   , Ds3 , v124
        .byte           N01   , As3 , v120
        .byte           N01   , Fs4
        .byte   W12
@ 007   ----------------------------------------
        .byte   W04
        .byte           N07   , Dn3 , v104
        .byte           N07   , As3 , v100
        .byte           N07   , Fn4
        .byte   W08
        .byte           N05   , Ds2 , v124
        .byte           N05   , As2 , v116
        .byte           N05   , Ds3
        .byte   W08
        .byte                   As2
        .byte           N05   , Fs3 , v100
        .byte           N05   , As3
        .byte   W08
        .byte                   An2 , v112
        .byte           N05   , Fn3 , v100
        .byte           N05   , An3
        .byte   W08
        .byte                   Ds3 , v120
        .byte           N05   , As3 , v116
        .byte           N05   , Ds4
        .byte   W08
        .byte                   Dn3 , v124
        .byte           N05   , An3 , v100
        .byte           N05   , Dn4
        .byte   W08
        .byte                   Fs3 , v120
        .byte           N05   , Cs4 , v100
        .byte           N05   , Fs4
        .byte   W08
        .byte                   As3 , v120
        .byte           N05   , Ds4 , v116
        .byte           N05   , As4
        .byte   W08
        .byte                   An3 , v120
        .byte           N05   , Dn4 , v100
        .byte           N05   , An4
        .byte   W08
        .byte           N07   , Fs3 , v120
        .byte           N07   , As3 , v100
        .byte           N07   , Fs4
        .byte   W08
        .byte           N01   , An3 , v120
        .byte           N01   , Ds4 , v112
        .byte           N01   , An4
        .byte   W12
@ 008   ----------------------------------------
        .byte   W04
        .byte           N07   , As3 , v127
        .byte           N07   , Dn4
        .byte           N07   , As4
        .byte   W08
        .byte           N05   , Fs3 , v124
        .byte           N05   , Ds4
        .byte   W08
        .byte                   Fn3 , v116
        .byte           N05   , Dn4
        .byte   W08
        .byte                   En3 , v108
        .byte           N05   , Cs4
        .byte   W08
        .byte                   Ds3 , v120
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Dn3 , v112
        .byte           N05   , Bn3
        .byte   W08
        .byte                   Cs3 , v108
        .byte           N05   , As3
        .byte   W08
        .byte                   Cn3 , v127
        .byte           N05   , An3
        .byte   W08
        .byte                   Bn2 , v124
        .byte           N05   , Gs3
        .byte   W08
        .byte                   As2 , v116
        .byte           N05   , Gn3
        .byte   W08
        .byte                   An2 , v124
        .byte           N05   , Fs3
        .byte   W08
        .byte                   Gs2 , v100
        .byte           N05   , Fn3
        .byte   W04
@ 009   ----------------------------------------
        .byte   W04
        .byte                   Gn2
        .byte           N05   , En3
        .byte   W08
        .byte           N07   , Gs2 , v116
        .byte           N07   , Fn3
        .byte   W08
        .byte           N03   , Cn3 , v104
        .byte           N03   , Gs3
        .byte   W08
        .byte                   As2
        .byte           N03   , Gn3
        .byte   W08
        .byte           N07   , Gs2
        .byte           N07   , Fn3
        .byte   W08
        .byte           N03
        .byte           N03   , Cn4
        .byte   W08
        .byte                   Cn3
        .byte           N03   , Gs3
        .byte   W08
        .byte                   Gs2 , v116
        .byte           N03   , Gs3
        .byte   W08
        .byte                   Cn4 , v108
        .byte           N03   , Gs4
        .byte   W08
        .byte                   As3
        .byte           N03   , Gn4
        .byte   W08
        .byte                   Gs3
        .byte   W08
        .byte                   Cn4
        .byte           N03   , Fn4
        .byte   W04
@ 010   ----------------------------------------
        .byte   W04
        .byte                   As3 , v116
        .byte           N03   , En4
        .byte   W08
        .byte           N07   , Gs3 , v100
        .byte           N02   , Fn4
        .byte           N02   , Gs4
        .byte   W24
        .byte           N06   , Gs3
        .byte           N01   , Fn4
        .byte           N01   , Gs4
        .byte   W24
        .byte           N06   , Gs3
        .byte           N01   , Fn4
        .byte           N01   , Gs4
        .byte   W08
        .byte           N06   , Gs3
        .byte           N01   , Fn4
        .byte           N01   , Gs4
        .byte   W08
        .byte           N06   , Gs3
        .byte           N01   , Fn4
        .byte           N01   , Gs4
        .byte   W08
        .byte           N06   , Gs3
        .byte           N01   , Fn4
        .byte           N01   , Gs4
        .byte   W12
@ 011   ----------------------------------------
        .byte   W04
        .byte           N07   , Gn3
        .byte           N07   , En4
        .byte           N07   , Gn4
        .byte   W08
        .byte           N04   , Gs2
        .byte           N05   , Gs3
        .byte           N04   , Fn4
        .byte           N04   , Gs4
        .byte   W08
        .byte           N03   , Gs2
        .byte           N05   , Gs3
        .byte           N03   , Fn4
        .byte           N03   , Gs4
        .byte   W08
        .byte                   Gs2
        .byte           N05   , Gs3
        .byte           N03   , Fn4
        .byte           N03   , Gs4
        .byte   W08
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte           N03   , En4
        .byte           N03   , Gn4
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte           N03   , En4
        .byte           N03   , Gn4
        .byte   W12
        .byte                   Fn2
        .byte           N05   , Fn3 , v120
        .byte           N03   , Cn4 , v100
        .byte           N03   , Fn4
        .byte   W08
        .byte                   Fn2
        .byte           N05   , Fn3 , v120
        .byte           N03   , Cn4 , v100
        .byte           N03   , Fn4
        .byte   W08
        .byte                   Fn2
        .byte           N05   , Fn3 , v112
        .byte           N03   , Cn4 , v100
        .byte           N03   , Fn4
        .byte   W08
        .byte                   Fn2
        .byte           N05   , Fn3 , v124
        .byte           N03   , Cn4 , v100
        .byte           N03   , Fn4
        .byte   W12
@ 012   ----------------------------------------
        .byte           N10   , Gs2
        .byte           N10   , Gs3
        .byte           N10   , Fn4
        .byte           N10   , Gs4
        .byte   W12
        .byte           N08   , Gn2 , v116
        .byte           N08   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N08   , En3
        .byte   W24
        .byte           N03   , Gn2
        .byte           N03   , En3
        .byte   W08
        .byte                   As2 , v096
        .byte           N03   , Gn3
        .byte   W08
        .byte                   An2 , v104
        .byte           N03   , Fs3
        .byte   W08
        .byte                   Cs3 , v116
        .byte           N03   , As3
        .byte   W08
        .byte                   Cn3 , v092
        .byte           N03   , An3
        .byte   W04
@ 013   ----------------------------------------
        .byte   W04
        .byte                   En3 , v100
        .byte           N03   , Cs4
        .byte   W08
        .byte           N08   , Gn2 , v116
        .byte           N08   , En3
        .byte   W16
        .byte           N05   , As2
        .byte           N05   , Gn3
        .byte   W16
        .byte                   As2
        .byte           N05   , Gn3
        .byte   W16
        .byte           N03   , Gs2
        .byte           N03   , Fn3
        .byte   W16
        .byte                   Fn2
        .byte           N03   , Dn3
        .byte   W16
        .byte           N07   , Gs2
        .byte           N07   , Fn3
        .byte   W04
@ 014   ----------------------------------------
        .byte   W12
        .byte           N08   , Gn2
        .byte           N08   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N08   , En3
        .byte   W24
        .byte           N03   , Gn2
        .byte           N03   , En3
        .byte   W08
        .byte                   As2 , v096
        .byte           N03   , Gn3
        .byte   W08
        .byte                   An2 , v104
        .byte           N03   , Fs3
        .byte   W08
        .byte                   Cs3 , v116
        .byte           N03   , As3
        .byte   W08
        .byte                   Cn3 , v092
        .byte           N03   , An3
        .byte   W04
@ 015   ----------------------------------------
        .byte   W04
        .byte                   En3 , v100
        .byte           N03   , Cs4
        .byte   W08
        .byte           N05   , En4 , v127
        .byte           N05   , Gn4
        .byte   W06
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W02
        .byte                   Cs4
        .byte           N01   , En4
        .byte   W02
        .byte                   Bn3
        .byte           N01   , Dn4
        .byte   W02
        .byte                   As3
        .byte           N01   , Cs4
        .byte   W02
        .byte                   Gs3
        .byte           N01   , Bn3 , v116
        .byte   W02
        .byte                   Gn3 , v127
        .byte           N01   , As3 , v116
        .byte   W02
        .byte                   Fn3 , v127
        .byte           N01   , Gs3
        .byte   W02
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W04
        .byte           N04   , Gn3 , v116
        .byte           N04   , En4
        .byte   W08
        .byte                   En3
        .byte           N04   , Cs4
        .byte   W08
        .byte                   Cs3
        .byte           N04   , As3
        .byte   W08
        .byte                   En3
        .byte           N04   , Cs4
        .byte   W08
        .byte                   Cs3
        .byte           N04   , As3
        .byte   W08
        .byte                   As2
        .byte           N04   , Gn3
        .byte   W08
        .byte           N07   , En3
        .byte           N07   , As3
        .byte   W08
        .byte           N03   , Ds3
        .byte           N03   , An3
        .byte   W04
@ 016   ----------------------------------------
        .byte                   Dn3
        .byte           N03   , Gs3
        .byte   W04
        .byte                   Cs3
        .byte           N03   , Gn3
        .byte   W04
        .byte                   Cn3
        .byte           N03   , Fs3
        .byte   W04
        .byte                   En2
        .byte           N03   , Gn2
        .byte   W08
        .byte                   Gn2
        .byte           N03   , Bn2
        .byte   W08
        .byte                   Fs2
        .byte           N03   , As2
        .byte   W08
        .byte                   Gn2
        .byte           N03   , Bn2
        .byte   W08
        .byte                   Bn2
        .byte           N03   , Dn3
        .byte   W08
        .byte                   As2
        .byte           N03   , Cs3
        .byte   W08
        .byte                   Gn2
        .byte           N03   , En3
        .byte   W08
        .byte                   As2 , v096
        .byte           N03   , Gn3
        .byte   W08
        .byte                   An2 , v104
        .byte           N03   , Fs3
        .byte   W08
        .byte           N15   , Cs3 , v116
        .byte           N15   , As3
        .byte   W12
@ 017   ----------------------------------------
        .byte   W04
        .byte           N07   , En3
        .byte           N07   , Cs4
        .byte   W08
        .byte           N05   , Gn3 , v127
        .byte           N05   , En4 , v120
        .byte   W08
        .byte                   En3 , v127
        .byte           N05   , Cs4 , v116
        .byte   W08
        .byte                   Cs3 , v127
        .byte           N05   , As3 , v116
        .byte   W08
        .byte                   En3 , v127
        .byte           N05   , Cs4 , v116
        .byte   W08
        .byte                   Cs3 , v127
        .byte           N05   , As3 , v116
        .byte   W08
        .byte                   As2 , v127
        .byte           N05   , Gn3 , v116
        .byte   W08
        .byte                   Cs3 , v127
        .byte           N05   , As3 , v116
        .byte   W08
        .byte                   As2 , v127
        .byte           N05   , Gn3 , v116
        .byte   W08
        .byte                   Gn2 , v127
        .byte           N05   , En3 , v116
        .byte   W08
        .byte           N15   , Cs3 , v127
        .byte           N15   , Gn3
        .byte   W12
@ 018   ----------------------------------------
        .byte   W04
        .byte           N01   , Cn3 , v124
        .byte           N01   , Fs3
        .byte   W02
        .byte                   Bn2
        .byte           N01   , En3
        .byte   W02
        .byte                   Gn2
        .byte           N01   , Cs3
        .byte   W02
        .byte                   En2
        .byte           N01   , Bn2
        .byte   W02
        .byte           N08   , Gn2 , v116
        .byte           N08   , En3
        .byte   W24
        .byte                   Gn2
        .byte           N08   , En3
        .byte   W24
        .byte           N03   , Gn2
        .byte           N03   , En3
        .byte   W08
        .byte                   As2 , v096
        .byte           N03   , Gn3
        .byte   W08
        .byte                   An2 , v104
        .byte           N03   , Fs3
        .byte   W08
        .byte                   Cs3 , v116
        .byte           N03   , As3
        .byte   W08
        .byte                   Cn3 , v092
        .byte           N03   , An3
        .byte   W04
@ 019   ----------------------------------------
        .byte   W04
        .byte                   En3 , v100
        .byte           N03   , Cs4
        .byte   W08
        .byte                   En3 , v112
        .byte           N03   , En4
        .byte   W16
        .byte           N07   , Gn3
        .byte           N07   , Gn4
        .byte   W16
        .byte                   Gn3
        .byte           N07   , Gn4
        .byte   W16
        .byte                   Fn3
        .byte           N07   , Fn4
        .byte   W16
        .byte                   As3
        .byte           N07   , As4
        .byte   W16
        .byte                   Cs4
        .byte           N07   , Cs5
        .byte   W04
@ 020   ----------------------------------------
        .byte   W12
        .byte                   As3 , v127
        .byte   W24
        .byte                   As3
        .byte   W32
        .byte           N01
        .byte   W08
        .byte                   As3
        .byte   W08
        .byte           N06
        .byte   W12
@ 021   ----------------------------------------
        .byte   W12
        .byte           N42   , As2 , v092
        .byte           N42   , Fn3
        .byte   W44
        .byte           N01   , An2 , v088
        .byte           N01   , En3
        .byte   W02
        .byte                   Gs2
        .byte           N01   , Ds3
        .byte   W02
        .byte           N42   , Fn2 , v100
        .byte           N42   , Dn3
        .byte   W36
@ 022   ----------------------------------------
        .byte   W08
        .byte           N01   , An2 , v072
        .byte           N01   , En3
        .byte   W01
        .byte                   As2
        .byte           N01   , Fn3
        .byte   W01
        .byte                   Bn2
        .byte           N01   , Fs3
        .byte   W01
        .byte                   Cn3
        .byte           N01   , Gn3
        .byte   W01
        .byte           N40   , Dn3 , v092
        .byte           N42   , Gs3
        .byte   W42
        .byte           N01   , Cs3 , v088
        .byte   W01
        .byte                   Cn3
        .byte   W01
        .byte                   Bn2
        .byte           N01   , An3
        .byte   W01
        .byte                   As2
        .byte   W01
        .byte                   Gs2
        .byte           N01   , As3
        .byte   W01
        .byte                   Fs2
        .byte   W01
        .byte           N42   , Fn2 , v084
        .byte           N42   , Bn3
        .byte   W36
@ 023   ----------------------------------------
        .byte   W12
        .byte           N05   , Fs3 , v116
        .byte           N05   , Ds4 , v124
        .byte   W08
        .byte                   Fn3 , v104
        .byte           N05   , Dn4
        .byte   W08
        .byte                   En3
        .byte           N05   , Cs4
        .byte   W08
        .byte                   Ds3 , v100
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Dn3 , v096
        .byte           N05   , Bn3
        .byte   W08
        .byte                   Cs3 , v100
        .byte           N05   , As3
        .byte   W08
        .byte                   Cn3 , v116
        .byte           N05   , An3
        .byte   W08
        .byte                   Bn2 , v104
        .byte           N05   , Gs3
        .byte   W08
        .byte                   As2
        .byte           N05   , Gn3
        .byte   W08
        .byte   GOTO
         .word  mus_pkmn_bw12_180_5_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_180_6:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 51
        .byte           PAN   , c_v+46
        .byte           VOL   , 77
        .byte   W12
        .byte           N66   , Ds3 , v127
        .byte   W72
mus_pkmn_bw12_180_6_LOOP:
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_180_6_1:
        .byte   W12
        .byte           N42   , Bn2 , v127
        .byte   W48
        .byte                   Dn3
        .byte   W36
        .byte   PEND
@ 002   ----------------------------------------
        .byte   W12
        .byte           N72   , Ds2
        .byte   W84
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W12
        .byte           N66   , Ds3
        .byte   W84
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_6_1
@ 006   ----------------------------------------
        .byte   W12
        .byte           N72   , Fs2 , v127
        .byte   W84
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W12
        .byte           N66   , Fn3
        .byte   W84
@ 009   ----------------------------------------
        .byte   W12
        .byte           N42   , Cs3
        .byte   W84
@ 010   ----------------------------------------
        .byte   W12
        .byte           N72   , Fn3
        .byte   W84
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
mus_pkmn_bw12_180_6_12:
        .byte   W16
        .byte           N72   , En3 , v127
        .byte   W80
        .byte   PEND
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_6_12
@ 015   ----------------------------------------
        .byte   W24
        .byte           N72   , As2 , v127
        .byte   W72
@ 016   ----------------------------------------
        .byte   W11
        .byte           VOICE , 32
        .byte   W01
        .byte           PAN   , c_v+16
        .byte           N04   , En3 , v112
        .byte   W24
        .byte                   En3
        .byte   W24
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W12
@ 017   ----------------------------------------
        .byte   W12
        .byte                   En3
        .byte   W08
        .byte           N01
        .byte   W08
        .byte           N04   , Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte           N03   , Fn3
        .byte   W08
        .byte           N01
        .byte   W08
        .byte           N07   , Dn3
        .byte   W16
        .byte                   Fn3
        .byte   W04
@ 018   ----------------------------------------
        .byte   W12
        .byte                   As2
        .byte           N07   , En3
        .byte   W24
        .byte                   As2
        .byte           N07   , En3
        .byte   W24
        .byte           N03   , As2
        .byte           N03   , En3
        .byte   W08
        .byte           N01   , As2 , v084
        .byte           N01   , En3
        .byte   W08
        .byte           N03   , As2 , v112
        .byte           N03   , En3
        .byte   W16
        .byte                   As2
        .byte           N03   , En3
        .byte   W04
@ 019   ----------------------------------------
        .byte   W12
        .byte                   As2
        .byte           N03   , En3
        .byte   W16
        .byte           N07   , Cs3
        .byte           N07   , Gn3
        .byte   W16
        .byte                   Cs3
        .byte           N07   , Gn3
        .byte   W16
        .byte                   Bn2
        .byte           N07   , Fn3
        .byte   W16
        .byte                   En3
        .byte           N07   , As3
        .byte   W16
        .byte                   Gn3
        .byte           N07   , Cs4
        .byte   W04
@ 020   ----------------------------------------
        .byte   W12
        .byte                   Gs3
        .byte           N07   , Dn4
        .byte           N07   , Gs4
        .byte   W24
        .byte           N05   , Gs3
        .byte           N05   , Dn4
        .byte           N05   , Gs4
        .byte   W32
        .byte           N02   , En3
        .byte           N02   , Gs3
        .byte   W08
        .byte                   En3
        .byte           N02   , Gs3
        .byte   W08
        .byte           N03   , En3
        .byte           N03   , Gs3
        .byte   W12
@ 021   ----------------------------------------
        .byte   W12
        .byte           VOICE , 46
        .byte           N36   , As2 , v127
        .byte   W48
        .byte                   Fn2
        .byte   W36
@ 022   ----------------------------------------
        .byte   W12
        .byte                   As2
        .byte   W48
        .byte                   Fn2
        .byte   W36
@ 023   ----------------------------------------
        .byte   W10
        .byte           VOICE , 51
        .byte           PAN   , c_v+46
        .byte           VOL   , 64
        .byte   W02
        .byte                   77
        .byte           N66   , Ds3
        .byte   W72
        .byte   GOTO
         .word  mus_pkmn_bw12_180_6_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_180_7:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 99
        .byte           PAN   , c_v-59
        .byte           VOL   , 85
        .byte   W84
mus_pkmn_bw12_180_7_LOOP:
        .byte   W12
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W12
        .byte           N84   , En2 , v127
        .byte   W84
@ 013   ----------------------------------------
        .byte   W12
        .byte                   As2
        .byte   W84
@ 014   ----------------------------------------
mus_pkmn_bw12_180_7_14:
        .byte   W12
        .byte           N92   , En2 , v127
        .byte   W84
        .byte   PEND
@ 015   ----------------------------------------
        .byte   W24
        .byte           N78   , As1
        .byte   W72
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_7_14
@ 017   ----------------------------------------
mus_pkmn_bw12_180_7_17:
        .byte   W12
        .byte           N92   , As2 , v127
        .byte   W84
        .byte   PEND
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_7_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_7_17
@ 020   ----------------------------------------
        .byte   W12
        .byte           N92   , Gs2 , v127
        .byte   W84
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W84
        .byte   GOTO
         .word  mus_pkmn_bw12_180_7_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_180_8:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 62
        .byte           PAN   , c_v-9
        .byte           VOL   , 25
        .byte           MOD   , 6
        .byte           N11   , CsM2 , v096
        .byte   W01
        .byte           VOL   , 31
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   49
        .byte   W01
        .byte                   55
        .byte   W01
        .byte                   60
        .byte   W01
        .byte                   66
        .byte   W01
        .byte                   72
        .byte   W01
        .byte                   78
        .byte   W01
        .byte                   84
        .byte   W01
        .byte           VOICE , 80
        .byte           VOL   , 90
        .byte   W01
        .byte           N68   , Cn2 , v127
        .byte   W72
mus_pkmn_bw12_180_8_LOOP:
        .byte   W12
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W12
        .byte           N72   , Cn2 , v127
        .byte   W84
@ 003   ----------------------------------------
        .byte   W80
        .byte   W02
        .byte           VOICE , 62
        .byte   W01
        .byte           VOL   , 16
        .byte   W01
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 004   ----------------------------------------
mus_pkmn_bw12_180_8_4:
        .byte           VOL   , 62
        .byte   W01
        .byte                   66
        .byte   W01
        .byte                   68
        .byte   W01
        .byte                   72
        .byte   W01
        .byte                   76
        .byte   W01
        .byte                   78
        .byte   W01
        .byte                   81
        .byte   W01
        .byte                   86
        .byte   W01
        .byte                   88
        .byte   W01
        .byte                   90
        .byte   W02
        .byte           VOICE , 80
        .byte   W01
        .byte           N68   , Cn2 , v127
        .byte   W84
        .byte   PEND
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W12
        .byte           N72   , Cn2 , v120
        .byte   W84
@ 007   ----------------------------------------
        .byte   W80
        .byte   W02
        .byte           VOICE , 62
        .byte           VOL   , 23
        .byte   W02
        .byte                   25
        .byte           N23   , CsM2
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_8_4
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W12
        .byte           N72   , Cn2 , v100
        .byte   W84
@ 011   ----------------------------------------
        .byte   W80
        .byte   W02
        .byte           VOICE , 62
        .byte           VOL   , 11
        .byte   W02
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_8_4
@ 013   ----------------------------------------
        .byte   W80
        .byte   W02
        .byte           VOICE , 62
        .byte           VOL   , 17
        .byte   W02
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_8_4
@ 015   ----------------------------------------
        .byte   W12
        .byte           N60   , Cs2 , v127
        .byte   W68
        .byte           VOICE , 62
        .byte           VOL   , 17
        .byte   W04
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 016   ----------------------------------------
        .byte                   62
        .byte   W01
        .byte                   66
        .byte   W01
        .byte                   68
        .byte   W01
        .byte                   72
        .byte   W01
        .byte                   76
        .byte   W01
        .byte                   78
        .byte   W01
        .byte                   81
        .byte   W01
        .byte                   86
        .byte   W01
        .byte                   88
        .byte   W01
        .byte                   90
        .byte   W02
        .byte           VOICE , 80
        .byte   W01
        .byte           N72   , Cn2 , v127
        .byte   W84
@ 017   ----------------------------------------
        .byte   W12
        .byte           N68
        .byte   W68
        .byte   W02
        .byte           VOICE , 62
        .byte           VOL   , 13
        .byte   W02
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_8_4
@ 019   ----------------------------------------
        .byte   W12
        .byte           N68   , Cn2 , v127
        .byte   W84
@ 020   ----------------------------------------
        .byte   W12
        .byte           N19
        .byte   W24
        .byte           N22   , En2
        .byte   W24
        .byte           N21
        .byte   W24
        .byte                   Cn2
        .byte   W12
@ 021   ----------------------------------------
        .byte   W20
        .byte           N72
        .byte   W76
@ 022   ----------------------------------------
        .byte   W20
        .byte           N56
        .byte   W60
        .byte   W02
        .byte           VOICE , 62
        .byte           VOL   , 13
        .byte   W02
        .byte                   25
        .byte           N23   , CsM2 , v120
        .byte   W01
        .byte           VOL   , 27
        .byte   W01
        .byte                   31
        .byte   W01
        .byte                   33
        .byte   W01
        .byte                   37
        .byte   W01
        .byte                   40
        .byte   W01
        .byte                   43
        .byte   W01
        .byte                   47
        .byte   W01
        .byte                   50
        .byte   W01
        .byte                   52
        .byte   W01
        .byte                   57
        .byte   W01
        .byte                   60
        .byte   W01
@ 023   ----------------------------------------
        .byte                   62
        .byte   W01
        .byte                   66
        .byte   W01
        .byte                   68
        .byte   W01
        .byte                   72
        .byte   W01
        .byte                   76
        .byte   W01
        .byte                   78
        .byte   W01
        .byte                   81
        .byte   W01
        .byte                   86
        .byte   W01
        .byte                   88
        .byte   W01
        .byte                   90
        .byte   W02
        .byte           VOICE , 80
        .byte   W01
        .byte           N68   , Cn2 , v127
        .byte   W72
        .byte   GOTO
         .word  mus_pkmn_bw12_180_8_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_180_9:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 80
        .byte           PAN   , c_v-5
        .byte           VOL   , 90
        .byte   W12
        .byte           N01   , CsM2 , v124
        .byte   W16
        .byte                   CsM2 , v116
        .byte   W08
        .byte           N21   , CsM2 , v100
        .byte   W24
        .byte           N01   , CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
mus_pkmn_bw12_180_9_LOOP:
        .byte           N01   , CsM2 , v127
        .byte   W12
@ 001   ----------------------------------------
        .byte   W04
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W16
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N13   , CsM2 , v104
        .byte   W16
        .byte           N01   , CsM2 , v096
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte           N13   , CsM2 , v100
        .byte   W12
@ 002   ----------------------------------------
        .byte   W04
        .byte           N01   , CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2 , v108
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W08
        .byte                   CsM2 , v108
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N21   , CsM2 , v104
        .byte   W12
@ 003   ----------------------------------------
        .byte   W12
        .byte           N03   , CsM2 , v120
        .byte   W08
        .byte                   CsM2 , v088
        .byte   W08
        .byte                   CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v096
        .byte   W12
        .byte                   CsM2 , v104
        .byte   W12
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v100
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W12
@ 004   ----------------------------------------
mus_pkmn_bw12_180_9_4:
        .byte           N11   , CsM2 , v108
        .byte   W12
        .byte           N01   , CsM2 , v124
        .byte   W16
        .byte                   CsM2 , v116
        .byte   W08
        .byte           N21   , CsM2 , v104
        .byte   W24
        .byte           N01   , CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
        .byte   W04
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W16
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N13   , CsM2 , v084
        .byte   W16
        .byte           N01   , CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte           N13   , CsM2 , v084
        .byte   W12
@ 006   ----------------------------------------
        .byte   W04
        .byte           N01   , CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W16
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N21   , CsM2 , v104
        .byte   W24
        .byte           N01   , CsM2 , v120
        .byte   W08
        .byte                   CsM2 , v108
        .byte   W04
@ 007   ----------------------------------------
        .byte   W04
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N03   , CsM2 , v120
        .byte   W08
        .byte                   CsM2 , v088
        .byte   W08
        .byte                   CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W16
        .byte                   CsM2 , v092
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v100
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W12
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_9_4
@ 009   ----------------------------------------
        .byte   W04
        .byte           N01   , CsM2 , v112
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N13   , CsM2 , v100
        .byte   W16
        .byte           N01   , CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte           N13   , CsM2 , v100
        .byte   W12
@ 010   ----------------------------------------
        .byte   W04
        .byte           N01   , CsM2 , v108
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte           N13   , CsM2 , v108
        .byte   W16
        .byte           N01
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v100
        .byte   W08
        .byte           N13   , CsM2 , v096
        .byte   W12
@ 011   ----------------------------------------
        .byte   W04
        .byte           N01   , CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v120
        .byte   W08
        .byte                   CsM2 , v088
        .byte   W08
        .byte                   CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v096
        .byte   W12
        .byte                   CsM2 , v104
        .byte   W12
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v100
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W12
@ 012   ----------------------------------------
        .byte           N11   , CsM2 , v108
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
mus_pkmn_bw12_180_9_16:
        .byte   W12
        .byte           N01   , CsM2 , v127
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte           N21   , CsM2 , v100
        .byte   W12
        .byte   PEND
@ 017   ----------------------------------------
mus_pkmn_bw12_180_9_17:
        .byte   W12
        .byte           N01   , CsM2 , v124
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W16
        .byte                   CsM2 , v124
        .byte   W16
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W16
        .byte                   CsM2 , v124
        .byte   W04
        .byte   PEND
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_9_16
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_180_9_17
@ 020   ----------------------------------------
        .byte   W12
        .byte           N02   , CsM2 , v127
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2
        .byte   W16
        .byte           N14   , CsM2 , v116
        .byte   W16
        .byte           N02   , CsM2 , v127
        .byte   W08
        .byte                   CsM2
        .byte   W04
@ 021   ----------------------------------------
        .byte   W04
        .byte                   CsM2
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N14   , CsM2 , v096
        .byte   W16
        .byte           N02   , CsM2 , v112
        .byte   W16
        .byte                   CsM2
        .byte   W16
        .byte           N06   , CsM2 , v096
        .byte   W08
        .byte           N02   , CsM2 , v108
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte                   CsM2 , v084
        .byte   W04
@ 022   ----------------------------------------
        .byte   W04
        .byte                   CsM2 , v100
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte           N14   , CsM2 , v096
        .byte   W16
        .byte           N02   , CsM2 , v112
        .byte   W16
        .byte                   CsM2
        .byte   W16
        .byte           N06   , CsM2 , v096
        .byte   W08
        .byte           N02   , CsM2 , v108
        .byte   W08
        .byte                   CsM2 , v112
        .byte   W08
        .byte                   CsM2 , v084
        .byte   W04
@ 023   ----------------------------------------
        .byte   W04
        .byte                   CsM2 , v100
        .byte   W08
        .byte           N01   , CsM2 , v124
        .byte   W16
        .byte                   CsM2 , v116
        .byte   W08
        .byte           N21   , CsM2 , v100
        .byte   W24
        .byte           N01   , CsM2 , v116
        .byte   W08
        .byte                   CsM2 , v127
        .byte   W08
        .byte                   CsM2 , v104
        .byte   W08
        .byte   GOTO
         .word  mus_pkmn_bw12_180_9_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_180_10:
        .byte   KEYSH , mus_pkmn_bw12_180_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 42
        .byte           PAN   , c_v-24
        .byte           VOL   , 55
        .byte           MOD   , 8
        .byte   W24
        .byte           N52   , Ds3 , v127
        .byte   W60
mus_pkmn_bw12_180_10_LOOP:
        .byte   W11
        .byte           N11   , As3 , v124
        .byte   W01
@ 001   ----------------------------------------
        .byte   W23
        .byte           N32   , Fs3 , v120
        .byte   W36
        .byte                   Bn3 , v127
        .byte   W36
        .byte           N22   , As3 , v112
        .byte   W01
@ 002   ----------------------------------------
        .byte   W23
        .byte           N10   , Fs3 , v124
        .byte   W18
        .byte           N04   , Fn3 , v120
        .byte   W06
        .byte           N66   , Ds3 , v127
        .byte   W48
        .byte   W01
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W23
        .byte           N44   , Ds3 , v120
        .byte   W72
        .byte           N11   , As3 , v127
        .byte   W01
@ 005   ----------------------------------------
        .byte   W23
        .byte           N32   , Fs3 , v120
        .byte   W40
        .byte           N24   , Bn3
        .byte   W32
        .byte           N22   , As3 , v112
        .byte   W01
@ 006   ----------------------------------------
        .byte   W23
        .byte           N03   , Fs3 , v127
        .byte   W08
        .byte                   Gs3 , v120
        .byte   W08
        .byte           N68   , As3 , v127
        .byte   W56
        .byte   W01
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W23
        .byte           N44   , Fn3 , v120
        .byte   W72
        .byte           N09   , Cn4 , v108
        .byte   W01
@ 009   ----------------------------------------
        .byte   W23
        .byte           N30   , Gs3 , v120
        .byte   W40
        .byte           N24   , Cs4
        .byte   W32
        .byte           N22   , Cn4 , v112
        .byte   W01
@ 010   ----------------------------------------
        .byte   W23
        .byte           N03   , Gs3 , v124
        .byte   W08
        .byte                   As3 , v120
        .byte   W08
        .byte           N68   , Cn4 , v127
        .byte   W56
        .byte   W01
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W23
        .byte           N04   , En3
        .byte   W24
        .byte                   En3 , v112
        .byte   W24
        .byte                   En3 , v124
        .byte   W08
        .byte                   En3 , v112
        .byte   W08
        .byte                   En3 , v120
        .byte   W08
        .byte                   En3 , v112
        .byte   W01
@ 013   ----------------------------------------
        .byte   W23
        .byte                   En3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte           N07   , Fn3
        .byte   W16
        .byte                   Dn3
        .byte   W09
@ 014   ----------------------------------------
        .byte   W07
        .byte                   Fn3
        .byte   W16
        .byte                   En3
        .byte   W24
        .byte                   En3
        .byte   W24
        .byte           N04
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W01
@ 015   ----------------------------------------
        .byte   W23
        .byte           N07
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Fn3
        .byte   W16
        .byte                   As3
        .byte   W09
@ 016   ----------------------------------------
        .byte   W07
        .byte                   An3
        .byte   W16
        .byte           N04   , En3
        .byte   W24
        .byte                   En3
        .byte   W24
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W08
        .byte                   En3
        .byte   W01
@ 017   ----------------------------------------
        .byte   W23
        .byte                   En3
        .byte   W08
        .byte           N01
        .byte   W08
        .byte           N04   , Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte           N03   , Fn3
        .byte   W08
        .byte           N01
        .byte   W08
        .byte           N07   , Dn3
        .byte   W09
@ 018   ----------------------------------------
        .byte   W07
        .byte                   Fn3
        .byte   W16
        .byte                   Gn3
        .byte   W24
        .byte                   Gn3
        .byte   W24
        .byte           N03
        .byte   W08
        .byte           N01   , Gn3 , v100
        .byte   W08
        .byte           N03   , Gn3 , v112
        .byte   W09
@ 019   ----------------------------------------
        .byte   W07
        .byte                   Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte           N07   , As3
        .byte   W16
        .byte                   As3
        .byte   W16
        .byte                   Gs3
        .byte   W16
        .byte                   Cs4
        .byte   W09
@ 020   ----------------------------------------
        .byte   W07
        .byte                   En4
        .byte   W11
        .byte                   Dn5
        .byte   W24
        .byte           N05
        .byte   W32
        .byte           N01
        .byte   W08
        .byte                   Dn5
        .byte   W08
        .byte           N02
        .byte   W06
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W24
        .byte           N52   , Ds3 , v127
        .byte   W60
        .byte   GOTO
         .word  mus_pkmn_bw12_180_10_LOOP
        .byte   W12
@ 024   ----------------------------------------
        .byte   W08
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_180:
        .byte   11                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_180_pri   @ Priority
        .byte   mus_pkmn_bw12_180_rev   @ Reverb

        .word   mus_pkmn_bw12_180_grp  

        .word   mus_pkmn_bw12_180_0
        .word   mus_pkmn_bw12_180_1
        .word   mus_pkmn_bw12_180_2
        .word   mus_pkmn_bw12_180_3
        .word   mus_pkmn_bw12_180_4
        .word   mus_pkmn_bw12_180_5
        .word   mus_pkmn_bw12_180_6
        .word   mus_pkmn_bw12_180_7
        .word   mus_pkmn_bw12_180_8
        .word   mus_pkmn_bw12_180_9
        .word   mus_pkmn_bw12_180_10

        .end
