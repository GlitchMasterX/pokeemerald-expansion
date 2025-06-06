        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_113_grp, voicegroup538
        .equ    mus_pkmn_bw12_113_pri, 0
        .equ    mus_pkmn_bw12_113_rev, 0
        .equ    mus_pkmn_bw12_113_key, 0

        .section .rodata
        .global mus_pkmn_bw12_113
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_113_0:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 60/2
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 64
        .byte           PAN   , c_v-44
        .byte   W48
        .byte           N22   , Cn3 , v100
        .byte           N22   , Gn3 , v112
        .byte   W48
@ 001   ----------------------------------------
        .byte                   Ds3 , v092
        .byte           N22   , Gs3 , v100
        .byte   W48
        .byte                   Ds3
        .byte           N22   , An3 , v112
        .byte   W48
@ 002   ----------------------------------------
        .byte                   Ds3 , v092
        .byte           N22   , Gs3 , v100
        .byte   W48
        .byte                   Cn3
        .byte           N22   , Gn3 , v112
        .byte   W48
@ 003   ----------------------------------------
        .byte                   Ds3 , v092
        .byte           N22   , Gs3 , v100
        .byte   W48
        .byte                   Ds3
        .byte           N22   , As3 , v112
        .byte   W48
@ 004   ----------------------------------------
        .byte                   Ds3 , v092
        .byte           N22   , An3 , v100
        .byte   W24
        .byte           N44   , Ds3 , v092
        .byte           N44   , Cn4 , v100
        .byte   W48
        .byte           N23   , Fn3 , v092
        .byte           N23   , Dn4 , v100
        .byte   W24
@ 005   ----------------------------------------
        .byte           N22   , Gn3 , v092
        .byte           N23   , Ds4 , v088
        .byte   W24
        .byte           N44   , Fn3 , v092
        .byte           N44   , Cs4 , v100
        .byte   W48
        .byte           N23   , Cs3 , v092
        .byte           N23   , Fn4 , v100
        .byte   W24
@ 006   ----------------------------------------
        .byte           N22   , As2 , v092
        .byte           N22   , Cs4 , v100
        .byte   W24
        .byte           N44   , Fn3 , v092
        .byte           N44   , Cn4 , v100
        .byte   W48
        .byte                   Cn3 , v092
        .byte           N44   , Gn3 , v100
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte           N68   , Dn3 , v092
        .byte           N68   , As3 , v100
        .byte   W72
@ 008   ----------------------------------------
        .byte           N11   , Dn3 , v092
        .byte           N11   , As3 , v100
        .byte   W12
        .byte                   Fn3 , v084
        .byte           N11   , Bn3 , v092
        .byte   W12
        .byte           N44   , En3
        .byte           N44   , Cn4 , v100
        .byte   W48
        .byte                   Fn3 , v092
        .byte           N44   , Cs4 , v100
        .byte   W24
@ 009   ----------------------------------------
        .byte   W24
        .byte                   Gn3 , v092
        .byte           N44   , Ds4 , v100
        .byte   W48
        .byte           TIE   , Gs3 , v092
        .byte           TIE   , En4 , v100
        .byte   W24
@ 010   ----------------------------------------
        .byte   W24
        .byte           N80   , Gn5 , v068
        .byte   W72
@ 011   ----------------------------------------
        .byte   W11
        .byte           EOT   , Gs3
        .byte                   En4
        .byte   W84
        .byte   W01
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_113_1:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 75
        .byte           PAN   , c_v-14
        .byte   W48
        .byte           N44   , Gn1 , v100
        .byte           N44   , Gn2
        .byte   W48
@ 001   ----------------------------------------
        .byte                   Gs1 , v092
        .byte           N44   , Gs2
        .byte   W48
        .byte                   An1 , v100
        .byte           N44   , An2
        .byte   W48
@ 002   ----------------------------------------
        .byte                   Gs1 , v092
        .byte           N44   , Gs2
        .byte   W48
        .byte                   Gn1 , v100
        .byte           N44   , Gn2
        .byte   W48
@ 003   ----------------------------------------
        .byte                   Gs1 , v088
        .byte           N44   , Gs2
        .byte   W48
        .byte                   As1 , v100
        .byte           N44   , As2
        .byte   W48
@ 004   ----------------------------------------
        .byte           N23   , An1 , v092
        .byte           N23   , An2
        .byte   W24
        .byte           N44   , Gn2 , v096
        .byte           N44   , Ds3 , v108
        .byte   W48
        .byte           N22   , Cn3 , v088
        .byte           N22   , Gn3 , v104
        .byte   W24
@ 005   ----------------------------------------
        .byte                   Ds3 , v084
        .byte           N22   , As3 , v096
        .byte   W24
        .byte           N44   , Cs3 , v092
        .byte           N44   , Gs3 , v108
        .byte   W48
        .byte           N22   , As2 , v088
        .byte           N22   , Fn3 , v100
        .byte   W24
@ 006   ----------------------------------------
        .byte                   Cs3 , v080
        .byte           N22   , Gs3 , v092
        .byte   W24
        .byte           N44   , Cn3
        .byte           N44   , Gn3 , v108
        .byte   W48
        .byte                   Gn2 , v084
        .byte           N44   , Cn3 , v100
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte                   Fn2 , v092
        .byte           N44   , Dn3 , v108
        .byte   W48
        .byte           N22   , As2 , v088
        .byte           N22   , Fn3 , v100
        .byte   W24
@ 008   ----------------------------------------
        .byte                   Dn3 , v080
        .byte           N22   , Gs3 , v092
        .byte   W24
        .byte           N44   , Cn3
        .byte           N44   , Gn3 , v108
        .byte   W48
        .byte                   Cs3 , v080
        .byte           N44   , Gs3 , v096
        .byte   W24
@ 009   ----------------------------------------
        .byte   W24
        .byte                   Ds3 , v088
        .byte           N44   , As3 , v108
        .byte   W48
        .byte           TIE   , Bn2 , v080
        .byte           TIE   , Gs3 , v096
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W11
        .byte           EOT   , Bn2
        .byte                   Gs3
        .byte   W84
        .byte   W01
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_113_2:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 25
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 69
        .byte           PAN   , c_v+46
        .byte           N04   , Gn0 , v100
        .byte   W06
        .byte                   Gs0 , v088
        .byte   W06
        .byte                   As0 , v096
        .byte   W06
        .byte                   Bn0 , v088
        .byte   W06
        .byte                   Cn1 , v100
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W12
@ 001   ----------------------------------------
        .byte   W24
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N10   , Cn1 , v100
        .byte   W12
@ 002   ----------------------------------------
        .byte           N04   , Gn0
        .byte   W06
        .byte                   Gs0 , v092
        .byte   W06
        .byte                   As0 , v096
        .byte   W06
        .byte                   Bn0 , v092
        .byte   W06
        .byte                   Cn1 , v100
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W12
@ 003   ----------------------------------------
        .byte   W24
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W12
@ 004   ----------------------------------------
        .byte   W24
        .byte           N44
        .byte   W48
        .byte                   Cn1 , v092
        .byte   W24
@ 005   ----------------------------------------
        .byte   W24
        .byte                   Cs1 , v100
        .byte   W48
        .byte                   As0 , v092
        .byte   W24
@ 006   ----------------------------------------
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W48
        .byte                   Cn1 , v088
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte                   Dn1 , v100
        .byte   W48
        .byte           N22   , Fn1
        .byte   W24
@ 008   ----------------------------------------
        .byte                   As0 , v092
        .byte   W24
        .byte           N04   , Cn1 , v096
        .byte   W06
        .byte                   Cs1 , v084
        .byte   W06
        .byte           N32   , Cn1 , v092
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v084
        .byte   W06
        .byte           N32   , Cn1 , v092
        .byte   W12
@ 009   ----------------------------------------
        .byte   W24
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v084
        .byte   W06
        .byte           N32   , Cn1 , v092
        .byte   W36
        .byte           TIE   , En0
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W11
        .byte           EOT
        .byte   W84
        .byte   W01
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_113_3:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 69
        .byte           PAN   , c_v+41
        .byte           N04   , Gn1 , v124
        .byte   W06
        .byte                   Gs1 , v112
        .byte   W06
        .byte                   As1 , v120
        .byte   W06
        .byte                   Bn1 , v112
        .byte   W06
        .byte                   Cn2 , v127
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W12
@ 001   ----------------------------------------
        .byte   W24
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v116
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N11   , Cn2 , v127
        .byte   W12
@ 002   ----------------------------------------
        .byte           N04   , Gn1 , v124
        .byte   W06
        .byte                   Gs1 , v112
        .byte   W06
        .byte                   As1 , v120
        .byte   W06
        .byte                   Bn1 , v112
        .byte   W06
        .byte                   Cn2 , v127
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W12
@ 003   ----------------------------------------
        .byte   W24
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N28   , Cn2 , v127
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs2 , v120
        .byte   W06
        .byte           N32   , Cn2 , v127
        .byte   W12
@ 004   ----------------------------------------
        .byte   W24
        .byte           N44   , Ds2 , v112
        .byte   W48
        .byte           N22   , Fn2 , v100
        .byte   W24
@ 005   ----------------------------------------
        .byte                   Gn2 , v108
        .byte   W24
        .byte           N44   , Gs2 , v112
        .byte   W48
        .byte           N22   , Fn2 , v104
        .byte   W24
@ 006   ----------------------------------------
        .byte                   Gs2 , v112
        .byte   W24
        .byte           N44   , Gn2
        .byte   W48
        .byte                   Cn2 , v100
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte                   Dn2 , v108
        .byte   W48
        .byte           N22   , Fn2 , v104
        .byte   W24
@ 008   ----------------------------------------
        .byte                   Gs2 , v096
        .byte   W24
        .byte           N44   , Gn2 , v112
        .byte   W48
        .byte                   Gs2 , v096
        .byte   W24
@ 009   ----------------------------------------
        .byte   W24
        .byte                   As2 , v112
        .byte   W48
        .byte           TIE   , Bn2 , v096
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W06
        .byte           EOT
        .byte   W90
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_113_4:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 65
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 54
        .byte           PAN   , c_v-34
        .byte   W48
        .byte           N44   , Gn1 , v108
        .byte           N44   , Cn2 , v092
        .byte           N44   , Ds2
        .byte           N44   , Gn2 , v104
        .byte   W48
@ 001   ----------------------------------------
        .byte                   Gs1 , v092
        .byte           N44   , Cn2 , v080
        .byte           N44   , Ds2
        .byte           N44   , Gs2 , v088
        .byte   W48
        .byte                   An1 , v108
        .byte           N44   , Cn2 , v092
        .byte           N44   , Ds2
        .byte           N44   , An2 , v104
        .byte   W48
@ 002   ----------------------------------------
        .byte                   Gs1 , v096
        .byte           N44   , Cn2 , v084
        .byte           N44   , Ds2
        .byte           N44   , Gs2 , v092
        .byte   W48
        .byte                   Gn1 , v108
        .byte           N44   , Cn2 , v092
        .byte           N44   , Ds2
        .byte           N44   , Gn2 , v104
        .byte   W48
@ 003   ----------------------------------------
        .byte                   Gs1 , v096
        .byte           N44   , Cn2 , v084
        .byte           N44   , Ds2
        .byte           N44   , Gs2 , v092
        .byte   W48
        .byte                   As1 , v116
        .byte           N44   , Cn2 , v100
        .byte           N44   , Ds2
        .byte           N44   , As2
        .byte   W48
@ 004   ----------------------------------------
        .byte           N23   , An1 , v108
        .byte           N23   , Cn2 , v096
        .byte           N23   , Ds2
        .byte           N23   , An2
        .byte   W24
        .byte           N44   , Gn1 , v127
        .byte           N44   , Cn2 , v120
        .byte           N44   , Ds2 , v112
        .byte   W48
        .byte                   Gn1 , v120
        .byte           N44   , Cn2 , v112
        .byte           N44   , Gn2 , v104
        .byte   W24
@ 005   ----------------------------------------
        .byte   W24
        .byte                   Gs1 , v112
        .byte           N44   , Cs2 , v116
        .byte           N44   , Fn2 , v108
        .byte   W48
        .byte                   Gs1 , v100
        .byte           N44   , Cs2 , v104
        .byte           N44   , Fn2
        .byte   W24
@ 006   ----------------------------------------
        .byte   W24
        .byte                   Cn1 , v108
        .byte           N44   , Gn1 , v104
        .byte           N44   , Cn2 , v112
        .byte   W48
        .byte                   Cn1
        .byte           N44   , Gn1 , v104
        .byte           N44   , Cn2
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte                   As1 , v108
        .byte           N44   , Dn2 , v112
        .byte           N44   , Fn2
        .byte   W48
        .byte           N23   , Fn1 , v108
        .byte           N23   , As1
        .byte           N23   , Dn2
        .byte   W24
@ 008   ----------------------------------------
        .byte                   Gs1
        .byte           N23   , Dn2 , v104
        .byte           N23   , Fn2
        .byte   W24
        .byte           N44   , Gn1 , v120
        .byte           N44   , En2 , v112
        .byte           N44   , Gn2
        .byte   W48
        .byte                   Gs1
        .byte           N44   , Fn2 , v104
        .byte           N44   , Gs2
        .byte   W24
@ 009   ----------------------------------------
        .byte   W24
        .byte                   As1 , v120
        .byte           N44   , Gn2 , v112
        .byte           N44   , As2 , v100
        .byte   W48
        .byte           TIE   , En1 , v108
        .byte           TIE   , En2 , v104
        .byte           TIE   , Bn2 , v092
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W11
        .byte           EOT   , En1
        .byte                   En2
        .byte                   Bn2
        .byte   W84
        .byte   W01
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_113_5:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 65
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 49
        .byte           PAN   , c_v+24
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W24
        .byte           N44   , Gn2 , v092
        .byte           N44   , Cn3 , v100
        .byte   W48
        .byte                   Dn3 , v084
        .byte           N44   , Gn3 , v100
        .byte   W24
@ 005   ----------------------------------------
        .byte   W24
        .byte                   Gs2 , v092
        .byte           N44   , Cs3 , v100
        .byte   W48
        .byte                   As2 , v092
        .byte           N44   , Fn3
        .byte   W24
@ 006   ----------------------------------------
        .byte   W24
        .byte                   Gn2 , v088
        .byte           N44   , Cn3 , v100
        .byte   W48
        .byte                   Gn2 , v080
        .byte           N44   , Dn3 , v092
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte                   As2 , v100
        .byte           N44   , Fn3
        .byte   W48
        .byte           N23   , As2 , v088
        .byte           N23   , Dn3 , v096
        .byte   W24
@ 008   ----------------------------------------
        .byte                   Gs2 , v088
        .byte           N23   , Fn3 , v092
        .byte   W24
        .byte           N44   , Cn3 , v104
        .byte           N44   , Gn3 , v116
        .byte   W48
        .byte                   Cs3 , v096
        .byte           N44   , Gs3 , v108
        .byte   W24
@ 009   ----------------------------------------
        .byte   W24
        .byte                   Ds3 , v092
        .byte           N44   , Gn3 , v100
        .byte           N44   , As3 , v116
        .byte   W48
        .byte           TIE   , En3 , v088
        .byte           TIE   , Gs3
        .byte           TIE   , Bn3 , v108
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W11
        .byte           EOT   , En3
        .byte                   Gs3
        .byte                   Bn3
        .byte   W84
        .byte   W01
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_113_6:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 0
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 87
        .byte           PAN   , c_v-39
        .byte   W48
        .byte           N05   , Gn3 , v092
        .byte   W06
        .byte                   Dn4 , v072
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte           N23   , Gn4 , v080
        .byte   W30
@ 001   ----------------------------------------
        .byte           N05   , Cn4 , v092
        .byte   W06
        .byte                   Dn4 , v080
        .byte   W06
        .byte                   Ds4 , v088
        .byte   W06
        .byte           N23   , Gs4 , v084
        .byte   W30
        .byte           N05   , Cn4 , v096
        .byte   W06
        .byte                   Dn4 , v080
        .byte   W06
        .byte                   Ds4 , v092
        .byte   W06
        .byte           N23   , An4 , v084
        .byte   W30
@ 002   ----------------------------------------
        .byte           N05   , Cn4 , v100
        .byte   W06
        .byte                   Dn4 , v084
        .byte   W06
        .byte                   Ds4 , v088
        .byte   W06
        .byte           N23   , As4
        .byte   W30
        .byte           N05   , Gn4 , v092
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte                   Cn4 , v092
        .byte   W06
        .byte           N23   , Ds4 , v084
        .byte   W30
@ 003   ----------------------------------------
        .byte           N05   , Gs4 , v092
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte                   Cn4 , v088
        .byte   W06
        .byte           N23   , Ds4 , v084
        .byte   W30
        .byte           N05   , As4 , v096
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte                   Cn4 , v092
        .byte   W06
        .byte           N23   , Ds4 , v088
        .byte   W30
@ 004   ----------------------------------------
        .byte           N05   , An4 , v100
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte                   Cn4 , v092
        .byte   W06
        .byte           N23   , Ds4 , v084
        .byte   W78
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W36
        .byte           N04   , As4 , v112
        .byte   W06
        .byte                   Ds4 , v088
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   Gs4 , v092
        .byte   W06
        .byte                   Gn4 , v104
        .byte   W06
        .byte                   Cn4 , v092
        .byte   W06
        .byte                   As3 , v108
        .byte   W06
        .byte                   Fn4 , v092
        .byte   W06
        .byte                   Ds4 , v100
        .byte   W06
        .byte                   As3 , v084
        .byte   W06
@ 008   ----------------------------------------
        .byte                   Gs3 , v100
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte                   Dn4 , v096
        .byte   W06
        .byte                   Fn3 , v076
        .byte   W78
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_113_7:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 8
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 54
        .byte           PAN   , c_v-39
        .byte   W72
        .byte           N10   , Cn3 , v120
        .byte   W12
        .byte                   Cn3 , v040
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_113_7_1:
        .byte   W24
        .byte           N10   , Cn3 , v112
        .byte   W12
        .byte                   Cn3 , v032
        .byte   W36
        .byte                   Cn3 , v120
        .byte   W12
        .byte                   Cn3 , v040
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_113_7_1
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_113_7_1
@ 004   ----------------------------------------
        .byte   W24
        .byte           N10   , Cn3 , v112
        .byte   W12
        .byte                   Cn3 , v024
        .byte   W60
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W48
        .byte                   Cn3 , v120
        .byte   W12
        .byte                   Cn3 , v040
        .byte   W36
@ 009   ----------------------------------------
        .byte                   Cs3 , v120
        .byte   W12
        .byte                   Cs3 , v040
        .byte   W36
        .byte                   Ds3 , v120
        .byte   W12
        .byte                   Ds3 , v040
        .byte   W36
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_113_8:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 80
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 81
        .byte           PAN   , c_v-24
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W24
        .byte           VOICE , 62
        .byte   W72
@ 004   ----------------------------------------
        .byte           PAN   , c_v-46
        .byte           N23   , En1 , v048
        .byte   W24
        .byte           VOICE , 80
        .byte           PAN   , c_v-24
        .byte           N32   , Cn2 , v072
        .byte   W72
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W24
        .byte           N36
        .byte   W72
@ 009   ----------------------------------------
        .byte   W66
        .byte           VOICE , 70
        .byte   W06
        .byte           VOL   , 95
        .byte           PAN   , c_v+47
        .byte           N40   , Bn2 , v127
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_113_9:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 0
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 20
        .byte           PAN   , c_v+56
        .byte   W54
        .byte           N04   , Gn3 , v084
        .byte   W06
        .byte                   Dn4 , v064
        .byte   W06
        .byte                   Ds4 , v076
        .byte   W06
        .byte           N22   , Gn4 , v068
        .byte   W24
@ 001   ----------------------------------------
        .byte   W06
        .byte           N04   , Cn4 , v084
        .byte   W06
        .byte                   Dn4 , v068
        .byte   W06
        .byte                   Ds4 , v080
        .byte   W06
        .byte           N22   , Gs4 , v072
        .byte   W30
        .byte           N04   , Cn4 , v084
        .byte   W06
        .byte                   Dn4 , v072
        .byte   W06
        .byte                   Ds4 , v084
        .byte   W06
        .byte           N22   , An4 , v072
        .byte   W24
@ 002   ----------------------------------------
        .byte   W06
        .byte           N04   , Cn4 , v088
        .byte   W06
        .byte                   Dn4 , v076
        .byte   W06
        .byte                   Ds4 , v080
        .byte   W06
        .byte           N22   , As4 , v076
        .byte   W30
        .byte           N04   , Gn4 , v084
        .byte   W06
        .byte                   Ds4 , v072
        .byte   W06
        .byte                   Cn4 , v084
        .byte   W06
        .byte           N22   , Ds4 , v072
        .byte   W24
@ 003   ----------------------------------------
        .byte   W06
        .byte           N04   , Gs4 , v084
        .byte   W06
        .byte                   Ds4 , v076
        .byte   W06
        .byte                   Cn4 , v080
        .byte   W06
        .byte           N22   , Ds4 , v072
        .byte   W30
        .byte           N04   , As4 , v084
        .byte   W06
        .byte                   Ds4 , v076
        .byte   W06
        .byte                   Cn4 , v084
        .byte   W06
        .byte           N22   , Ds4 , v076
        .byte   W24
@ 004   ----------------------------------------
        .byte   W06
        .byte           N04   , An4 , v088
        .byte   W06
        .byte                   Ds4 , v076
        .byte   W06
        .byte                   Cn4 , v084
        .byte   W06
        .byte           N22   , Ds4 , v076
        .byte   W72
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W42
        .byte           N04   , As4 , v100
        .byte   W06
        .byte                   Ds4 , v080
        .byte   W06
        .byte                   Dn4 , v096
        .byte   W06
        .byte                   Gs4 , v084
        .byte   W06
        .byte                   Gn4 , v092
        .byte   W06
        .byte                   Cn4 , v084
        .byte   W06
        .byte                   As3 , v096
        .byte   W06
        .byte                   Fn4 , v080
        .byte   W06
        .byte                   Ds4 , v092
        .byte   W06
@ 008   ----------------------------------------
        .byte                   As3 , v076
        .byte   W06
        .byte                   Gs3 , v088
        .byte   W06
        .byte                   Ds4 , v076
        .byte   W06
        .byte                   Dn4 , v084
        .byte   W06
        .byte                   Fn3 , v068
        .byte   W72
@ 009   ----------------------------------------
        .byte   W72
        .byte           VOICE , 39
        .byte           VOL   , 89
        .byte           PAN   , c_v-44
        .byte           N40   , En2 , v127
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_113_10:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 28
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 93
        .byte           PAN   , c_v-24
        .byte   W42
        .byte           N01   , Gn2 , v072
        .byte   W02
        .byte                   Gn2 , v056
        .byte   W02
        .byte                   Gn2 , v068
        .byte   W02
        .byte           N17   , Cn3 , v116
        .byte   W24
        .byte                   Bn1
        .byte   W24
@ 001   ----------------------------------------
        .byte   W24
        .byte                   Bn1 , v108
        .byte   W48
        .byte                   Bn1 , v116
        .byte   W24
@ 002   ----------------------------------------
        .byte   W24
        .byte           N04   , Cn3 , v088
        .byte   W06
        .byte                   Cs3 , v080
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte           N01   , Gn2 , v100
        .byte   W02
        .byte                   Gn2 , v084
        .byte   W02
        .byte                   Gn2 , v096
        .byte   W02
        .byte           N20   , Cn3 , v124
        .byte   W24
        .byte           N17   , Bn1 , v112
        .byte   W24
@ 003   ----------------------------------------
        .byte   W24
        .byte                   Bn1 , v120
        .byte   W48
        .byte                   Bn1 , v116
        .byte   W24
@ 004   ----------------------------------------
        .byte           N01   , Gn2 , v072
        .byte   W02
        .byte                   Gn2 , v048
        .byte   W02
        .byte                   Gn2 , v036
        .byte   W02
        .byte                   Gn2 , v028
        .byte   W02
        .byte                   Gn2 , v048
        .byte   W02
        .byte                   Gn2 , v036
        .byte   W02
        .byte                   Gn2 , v060
        .byte   W02
        .byte                   Gn2 , v080
        .byte   W02
        .byte                   Gn2 , v068
        .byte   W02
        .byte                   Gn2 , v096
        .byte   W02
        .byte                   Gn2 , v080
        .byte   W02
        .byte                   Gn2 , v112
        .byte   W02
        .byte           N14   , Bn1 , v124
        .byte   W24
        .byte                   Bn1 , v116
        .byte   W24
        .byte                   Cn3 , v124
        .byte   W24
@ 005   ----------------------------------------
        .byte                   Bn1 , v112
        .byte   W24
        .byte                   Cs3 , v120
        .byte   W24
        .byte                   Cs3 , v108
        .byte   W24
        .byte           N17   , An2 , v120
        .byte   W24
@ 006   ----------------------------------------
        .byte           N07   , An2 , v108
        .byte   W12
        .byte           N01   , Cn3 , v088
        .byte   W02
        .byte                   Cn3 , v076
        .byte   W02
        .byte                   Cn3 , v084
        .byte   W02
        .byte                   Cn3 , v100
        .byte   W02
        .byte                   Cn3 , v084
        .byte   W02
        .byte                   Cn3 , v096
        .byte   W02
        .byte           N17   , Cn3 , v120
        .byte   W24
        .byte           N16   , Cn3 , v108
        .byte   W24
        .byte           N17   , Gn2 , v112
        .byte   W24
@ 007   ----------------------------------------
        .byte                   Gn2 , v104
        .byte   W24
        .byte           N14   , As2 , v120
        .byte   W24
        .byte                   As2 , v108
        .byte   W24
        .byte                   As2 , v120
        .byte   W24
@ 008   ----------------------------------------
        .byte                   As2 , v108
        .byte   W24
        .byte           N17   , Cn3 , v120
        .byte   W24
        .byte           N12   , Gn2 , v108
        .byte   W18
        .byte           N01   , Cn3 , v088
        .byte   W02
        .byte                   Cn3 , v080
        .byte   W02
        .byte                   Cn3 , v088
        .byte   W02
        .byte           N12   , Cn3 , v112
        .byte   W24
@ 009   ----------------------------------------
        .byte           N14   , Gn2 , v104
        .byte   W24
        .byte           N17   , Cn3 , v120
        .byte   W24
        .byte           N05   , Bn1 , v108
        .byte   W04
        .byte           N01   , Gn2 , v024
        .byte   W02
        .byte                   Gn2 , v016
        .byte   W02
        .byte                   Gn2 , v032
        .byte   W02
        .byte                   Gn2 , v024
        .byte   W02
        .byte                   Gn2 , v044
        .byte   W02
        .byte                   Gn2 , v060
        .byte   W02
        .byte                   Gn2 , v048
        .byte   W02
        .byte                   Gn2 , v076
        .byte   W02
        .byte                   Gn2 , v060
        .byte   W02
        .byte                   Gn2 , v092
        .byte   W02
        .byte           N20   , Ds2 , v124
        .byte   W24
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   FINE

@***************** Track 11 (Midi-Chn.11) *****************@

mus_pkmn_bw12_113_11:
        .byte   KEYSH , mus_pkmn_bw12_113_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 33
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 27
        .byte           PAN   , c_v-49
        .byte   W03
        .byte           N04   , Gn0 , v100
        .byte   W06
        .byte                   Gs0 , v088
        .byte   W06
        .byte                   As0 , v096
        .byte   W06
        .byte                   Bn0 , v088
        .byte   W06
        .byte                   Cn1 , v100
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W09
@ 001   ----------------------------------------
        .byte   W24
        .byte   W03
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N05   , Cn1 , v100
        .byte   W09
@ 002   ----------------------------------------
        .byte   W03
        .byte           N04   , Gn0
        .byte   W06
        .byte                   Gs0 , v092
        .byte   W06
        .byte                   As0 , v096
        .byte   W06
        .byte                   Bn0 , v092
        .byte   W06
        .byte                   Cn1 , v100
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W09
@ 003   ----------------------------------------
        .byte   W24
        .byte   W03
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N32   , Cn1 , v100
        .byte   W36
        .byte           N04
        .byte   W06
        .byte                   Cs1 , v092
        .byte   W06
        .byte           N28   , Cn1 , v100
        .byte   W09
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
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_113:
        .byte   12                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_113_pri   @ Priority
        .byte   mus_pkmn_bw12_113_rev   @ Reverb

        .word   mus_pkmn_bw12_113_grp  

        .word   mus_pkmn_bw12_113_0
        .word   mus_pkmn_bw12_113_1
        .word   mus_pkmn_bw12_113_2
        .word   mus_pkmn_bw12_113_3
        .word   mus_pkmn_bw12_113_4
        .word   mus_pkmn_bw12_113_5
        .word   mus_pkmn_bw12_113_6
        .word   mus_pkmn_bw12_113_7
        .word   mus_pkmn_bw12_113_8
        .word   mus_pkmn_bw12_113_9
        .word   mus_pkmn_bw12_113_10
        .word   mus_pkmn_bw12_113_11

        .end
