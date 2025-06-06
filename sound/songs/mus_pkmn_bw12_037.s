        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_037_grp, voicegroup538
        .equ    mus_pkmn_bw12_037_pri, 0
        .equ    mus_pkmn_bw12_037_rev, 0
        .equ    mus_pkmn_bw12_037_key, 0

        .section .rodata
        .global mus_pkmn_bw12_037
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_037_0:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 176/2
        .byte           VOICE , 60
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 67
        .byte           N08   , Cs1 , v120
        .byte   W12
        .byte                   Cs1 , v084
        .byte   W12
        .byte           N02   , Cs1 , v080
        .byte   W12
        .byte           N23   , Cs1 , v120
        .byte   W48
        .byte           N02
        .byte   W06
        .byte                   Cs1
        .byte   W06
@ 001   ----------------------------------------
        .byte           N08
        .byte   W12
        .byte                   Cs1 , v084
        .byte   W12
        .byte           N02   , Cs1 , v080
        .byte   W12
        .byte           N23   , Cs1 , v120
        .byte   W48
        .byte           N02
        .byte   W06
        .byte                   Cs1
        .byte   W06
@ 002   ----------------------------------------
        .byte           N08
        .byte   W24
        .byte           N02   , Cs1 , v080
        .byte   W12
        .byte           N23   , Cs1 , v120
        .byte   W36
        .byte           N02
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte                   Cs1
        .byte   W06
@ 003   ----------------------------------------
        .byte           N08
        .byte   W12
        .byte           N05
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte           N02   , Cs1 , v124
        .byte   W06
        .byte                   Cs1 , v076
        .byte   W06
        .byte                   Cs1 , v096
        .byte   W06
        .byte                   Cs1 , v068
        .byte   W06
        .byte                   Cs1 , v108
        .byte   W06
        .byte                   Cs1 , v068
        .byte   W06
        .byte                   Cs1 , v112
        .byte   W06
        .byte                   Cs1 , v076
        .byte   W06
        .byte                   Cs1 , v127
        .byte   W06
        .byte                   Cs1 , v076
        .byte   W06
@ 004   ----------------------------------------
mus_pkmn_bw12_037_0_4:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N22   , Cs1 , v120
        .byte   W24
        .byte                   Cs1 , v127
        .byte   W24
        .byte           N08
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte   PEND
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_4
@ 006   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N22   , Cs1 , v120
        .byte   W24
        .byte                   Cs1 , v127
        .byte   W24
        .byte           N11
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W06
        .byte                   Cn1
        .byte   W06
@ 007   ----------------------------------------
mus_pkmn_bw12_037_0_7:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N22   , Cs1 , v120
        .byte   W24
        .byte                   Cs1 , v127
        .byte   W24
        .byte                   Cs1
        .byte   W24
        .byte   PEND
@ 008   ----------------------------------------
        .byte           N11   , Cn1
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W12
        .byte           N08   , Cs1 , v120
        .byte   W24
        .byte           N20   , Cs1 , v127
        .byte   W24
        .byte           N22
        .byte   W24
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_7
@ 010   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte           N02   , Cn1 , v092
        .byte   W12
        .byte           N08   , Cs1 , v120
        .byte   W24
        .byte                   Cs1 , v127
        .byte   W24
        .byte           N02
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte                   Cs1
        .byte   W06
@ 011   ----------------------------------------
        .byte           N22
        .byte   W24
        .byte                   Cs1 , v120
        .byte   W24
        .byte                   Cs1 , v127
        .byte   W24
        .byte                   Cs1
        .byte   W24
@ 012   ----------------------------------------
mus_pkmn_bw12_037_0_LOOP:
        .byte           VOL   , 78
        .byte           N23   , Cs1 , v127
        .byte   W48
        .byte           N10   , Cn1 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W36
@ 013   ----------------------------------------
        .byte           N23   , Cn1 , v127
        .byte   W36
        .byte           N20   , Cn1 , v108
        .byte   W24
        .byte           N10   , Cn1 , v100
        .byte   W36
@ 014   ----------------------------------------
mus_pkmn_bw12_037_0_14:
        .byte           N23   , Cn1 , v127
        .byte   W48
        .byte           N10   , Cn1 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W36
        .byte   PEND
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 017   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W48
        .byte           N10   , Cn1 , v108
        .byte   W48
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 027   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W96
@ 028   ----------------------------------------
mus_pkmn_bw12_037_0_28:
        .byte           N22   , Cn1 , v127
        .byte   W48
        .byte                   Cn1 , v100
        .byte   W48
        .byte   PEND
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 037   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 043   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Cn1
        .byte   W36
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W36
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_28
@ 046   ----------------------------------------
        .byte           N21   , Cn1 , v127
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W24
        .byte                   Cn1 , v108
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W24
@ 047   ----------------------------------------
        .byte                   Cn1 , v127
        .byte   W24
        .byte                   Cn1 , v100
        .byte   W24
        .byte           N10   , Cn1 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W36
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 055   ----------------------------------------
        .byte           N23   , Cn1 , v127
        .byte   W72
        .byte                   Cn1 , v116
        .byte   W24
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 057   ----------------------------------------
        .byte   W12
        .byte           N10   , Cn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W48
@ 058   ----------------------------------------
        .byte                   Cn1 , v124
        .byte   W48
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W36
@ 059   ----------------------------------------
        .byte   W12
        .byte                   Cn1 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W36
        .byte                   Cn1
        .byte   W12
        .byte           N21   , Cn1 , v127
        .byte   W24
@ 060   ----------------------------------------
        .byte           N10
        .byte   W48
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W36
@ 061   ----------------------------------------
        .byte   W12
        .byte                   Cn1 , v124
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte           N11   , Cn1 , v127
        .byte   W24
        .byte                   Cn1
        .byte   W12
@ 062   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 063   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 064   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 065   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_0_14
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_037_1:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 80
        .byte   W96
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
mus_pkmn_bw12_037_1_LOOP:
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1 , v084
        .byte   W06
        .byte                   Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
@ 013   ----------------------------------------
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte           N11   , As1 , v127
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W06
        .byte                   Fs1
        .byte   W06
@ 014   ----------------------------------------
mus_pkmn_bw12_037_1_14:
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte   PEND
@ 015   ----------------------------------------
mus_pkmn_bw12_037_1_15:
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W24
        .byte   PEND
@ 016   ----------------------------------------
mus_pkmn_bw12_037_1_16:
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte   PEND
@ 017   ----------------------------------------
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte           N11   , As1 , v124
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W06
        .byte                   Fs1
        .byte   W06
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_15
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_16
@ 021   ----------------------------------------
mus_pkmn_bw12_037_1_21:
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte   PEND
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_14
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_15
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_16
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_21
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_14
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_21
@ 028   ----------------------------------------
mus_pkmn_bw12_037_1_28:
        .byte           N01   , Fs1 , v112
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte           N10   , As1 , v127
        .byte   W12
        .byte           N01   , Fs1 , v112
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte   PEND
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_28
@ 036   ----------------------------------------
        .byte           N01   , Fs1 , v112
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte           N10   , As1 , v127
        .byte   W24
@ 037   ----------------------------------------
        .byte   W96
@ 038   ----------------------------------------
        .byte   W96
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte   W84
        .byte                   As1 , v124
        .byte   W12
@ 042   ----------------------------------------
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W24
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
@ 043   ----------------------------------------
        .byte   W12
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W24
@ 044   ----------------------------------------
        .byte   W12
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W12
        .byte           N01   , Fs1 , v108
        .byte   W12
@ 045   ----------------------------------------
        .byte   W12
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W24
        .byte                   Fs1
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W24
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte   W96
@ 051   ----------------------------------------
        .byte   W96
@ 052   ----------------------------------------
        .byte   W96
@ 053   ----------------------------------------
        .byte   W96
@ 054   ----------------------------------------
        .byte   W96
@ 055   ----------------------------------------
        .byte   W96
@ 056   ----------------------------------------
        .byte   W96
@ 057   ----------------------------------------
        .byte   W96
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W96
@ 062   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_16
@ 063   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_21
@ 064   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_1_16
@ 065   ----------------------------------------
        .byte           N01   , Fs1 , v108
        .byte   W12
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fs1
        .byte   W13
        .byte           N10   , As1 , v124
        .byte   W11
        .byte           N01   , Fs1 , v108
        .byte   W06
        .byte                   Fs1
        .byte   W06
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_037_2:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 67
        .byte           N44   , As2 , v108
        .byte   W60
        .byte           N01   , En1 , v076
        .byte           N11   , As2 , v112
        .byte   W01
        .byte           N10   , En1 , v060
        .byte   W11
        .byte           N23   , En1 , v120
        .byte   W01
        .byte                   En2 , v088
        .byte   W23
@ 001   ----------------------------------------
        .byte           N11   , An2
        .byte   W60
        .byte           N01   , En1 , v076
        .byte           N11   , As2 , v088
        .byte   W01
        .byte           N10   , En1 , v060
        .byte   W11
        .byte           N23   , En1 , v120
        .byte   W01
        .byte                   En2 , v088
        .byte   W23
@ 002   ----------------------------------------
        .byte           N11   , As2
        .byte   W12
        .byte           N02   , Bn1 , v084
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   An1
        .byte   W06
        .byte                   An1
        .byte   W06
        .byte                   Gs1
        .byte   W06
        .byte                   Gs1
        .byte   W06
        .byte                   Gn1 , v108
        .byte   W06
        .byte                   Fn1
        .byte   W06
        .byte           N01   , En1 , v076
        .byte           N11   , En2 , v088
        .byte   W01
        .byte           N10   , En1 , v060
        .byte   W11
        .byte           N02   , An1 , v120
        .byte           N23   , As2 , v088
        .byte   W06
        .byte           N02   , An1 , v120
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Fn1
        .byte   W06
@ 003   ----------------------------------------
        .byte   W12
        .byte                   En1
        .byte           N32   , An2 , v088
        .byte   W03
        .byte                   En1 , v120
        .byte   W80
        .byte   W01
@ 004   ----------------------------------------
        .byte           N44   , An2 , v116
        .byte   W96
@ 005   ----------------------------------------
        .byte           N04   , An2 , v088
        .byte   W12
        .byte                   En2
        .byte   W84
@ 006   ----------------------------------------
mus_pkmn_bw12_037_2_6:
        .byte           N04   , As2 , v100
        .byte   W12
        .byte                   En2
        .byte   W84
        .byte   PEND
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_6
@ 008   ----------------------------------------
        .byte           N05   , An1 , v092
        .byte           N44   , An2 , v100
        .byte   W06
        .byte           N05   , An1 , v092
        .byte   W06
        .byte           N02   , Gn1 , v108
        .byte   W03
        .byte           N08   , Gn1 , v080
        .byte   W03
        .byte           N05   , En1 , v092
        .byte   W06
        .byte           N08   , Fn1 , v084
        .byte   W12
        .byte           N11   , An1 , v120
        .byte   W06
        .byte           N05   , En1
        .byte   W06
        .byte           N11   , An1 , v100
        .byte   W12
        .byte                   Gn1 , v088
        .byte   W24
        .byte                   Fn1 , v100
        .byte   W12
@ 009   ----------------------------------------
        .byte           N02   , En1 , v112
        .byte   W03
        .byte           N08   , En1 , v127
        .byte   W09
        .byte           N02   , An1 , v084
        .byte   W12
        .byte                   Gs1 , v076
        .byte   W12
        .byte                   En1 , v112
        .byte           N11   , As1 , v100
        .byte   W03
        .byte           N17   , En1 , v108
        .byte   W44
        .byte   W01
        .byte           N11   , En1 , v100
        .byte           N11   , As1
        .byte   W12
@ 010   ----------------------------------------
        .byte   W12
        .byte                   As1 , v056
        .byte   W06
        .byte           N05   , En1 , v092
        .byte   W18
        .byte           N11   , As1 , v068
        .byte   W06
        .byte           N05   , En1 , v120
        .byte   W18
        .byte           N11   , As1 , v084
        .byte   W06
        .byte           N05   , En1 , v120
        .byte   W18
        .byte           N11   , As1 , v112
        .byte   W12
@ 011   ----------------------------------------
        .byte           N02   , Fs1 , v088
        .byte   W12
        .byte           N22   , En1 , v127
        .byte           N02   , Fs1 , v088
        .byte           N23   , An2 , v108
        .byte   W06
        .byte           N02   , Fs1 , v088
        .byte   W06
        .byte           N11   , As1 , v048
        .byte   W12
        .byte           N05   , En1 , v108
        .byte           N02   , Fs1 , v088
        .byte   W06
        .byte           N05   , En1 , v092
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v088
        .byte   W12
        .byte                   En1 , v127
        .byte           N02   , Fs1 , v088
        .byte           N23   , An2 , v108
        .byte   W03
        .byte           N08   , En1 , v127
        .byte   W03
        .byte           N02   , Fs1 , v088
        .byte   W06
        .byte           N11   , As1 , v048
        .byte   W12
        .byte           N05   , En1 , v127
        .byte   W06
        .byte                   En1
        .byte   W06
@ 012   ----------------------------------------
mus_pkmn_bw12_037_2_LOOP:
        .byte           VOL   , 78
        .byte   W03
        .byte           N44   , En2 , v108
        .byte   W21
        .byte           N23   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
@ 013   ----------------------------------------
mus_pkmn_bw12_037_2_13:
        .byte   W24
        .byte           N23   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 017   ----------------------------------------
        .byte   W12
        .byte           N02   , En1 , v124
        .byte   W03
        .byte           N32   , En1 , v116
        .byte   W44
        .byte   W01
        .byte           N10   , En1 , v100
        .byte   W12
        .byte           N01
        .byte   W01
        .byte           N21   , En1 , v120
        .byte   W23
@ 018   ----------------------------------------
        .byte   W36
        .byte           N23   , En1 , v100
        .byte   W36
        .byte                   En1
        .byte   W24
@ 019   ----------------------------------------
        .byte   W24
        .byte                   En1
        .byte   W48
        .byte           N11   , En1 , v120
        .byte   W12
        .byte           N05   , En1 , v116
        .byte   W06
        .byte                   En1
        .byte   W06
@ 020   ----------------------------------------
        .byte   W01
        .byte           N30   , En2 , v120
        .byte   W23
        .byte           N23   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 027   ----------------------------------------
        .byte   W12
        .byte           N11   , En1 , v100
        .byte   W12
        .byte           N05   , En1 , v116
        .byte   W06
        .byte                   En1 , v100
        .byte   W06
        .byte           N02   , En1 , v112
        .byte   W03
        .byte                   En1
        .byte   W03
        .byte           N05   , En1 , v100
        .byte   W06
        .byte           N24   , En1 , v127
        .byte           N24   , An2
        .byte   W24
        .byte           N01   , En1 , v116
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   En1
        .byte   W06
@ 028   ----------------------------------------
        .byte           N44   , An2 , v127
        .byte   W24
        .byte           N22   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
@ 029   ----------------------------------------
mus_pkmn_bw12_037_2_29:
        .byte   W24
        .byte           N22   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
        .byte   PEND
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 037   ----------------------------------------
        .byte   W01
        .byte           N48   , En2 , v100
        .byte   W23
        .byte           N22   , En1
        .byte   W48
        .byte                   En1
        .byte   W24
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 043   ----------------------------------------
        .byte   W24
        .byte           N22   , En1 , v100
        .byte           N14   , En2 , v096
        .byte   W48
        .byte           N22   , En1 , v100
        .byte   W01
        .byte           N14   , En2 , v112
        .byte   W23
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_29
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W72
        .byte           N22   , En1 , v100
        .byte   W24
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 055   ----------------------------------------
        .byte   W24
        .byte           N23   , En1 , v100
        .byte   W24
        .byte           N11   , En1 , v127
        .byte   W12
        .byte           N23   , En1 , v100
        .byte   W24
        .byte                   En1
        .byte   W12
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 057   ----------------------------------------
        .byte           N11   , En1 , v127
        .byte   W36
        .byte                   En1 , v100
        .byte   W24
        .byte                   En1 , v124
        .byte   W12
        .byte                   En1 , v100
        .byte   W12
        .byte                   En1
        .byte   W12
@ 058   ----------------------------------------
mus_pkmn_bw12_037_2_58:
        .byte           N36   , An2 , v124
        .byte   W24
        .byte           N11   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte   PEND
@ 059   ----------------------------------------
        .byte                   En1 , v127
        .byte           N05   , Bn1 , v116
        .byte   W12
        .byte                   An1 , v108
        .byte   W12
        .byte                   Gn1 , v116
        .byte   W12
        .byte           N23   , Fn1 , v127
        .byte           N32   , En2 , v084
        .byte   W24
        .byte           N11   , En1 , v127
        .byte   W12
        .byte           N23   , Fn1
        .byte           N22   , Gn2 , v084
        .byte   W24
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_58
@ 061   ----------------------------------------
        .byte           N11   , En1 , v127
        .byte           N02   , Bn1 , v116
        .byte   W06
        .byte                   Bn1 , v080
        .byte   W06
        .byte                   An1 , v116
        .byte   W04
        .byte                   Gn1 , v084
        .byte   W08
        .byte                   Gn1 , v116
        .byte   W06
        .byte                   Gn1 , v080
        .byte   W06
        .byte           N23   , Fn1 , v127
        .byte   W01
        .byte           N32   , En2
        .byte   W11
        .byte           N11   , En1 , v100
        .byte   W24
        .byte           N01   , En1 , v127
        .byte           N22   , An2 , v084
        .byte   W01
        .byte                   En1 , v127
        .byte   W23
@ 062   ----------------------------------------
        .byte                   En2 , v084
        .byte   W24
        .byte           N23   , En1 , v100
        .byte   W48
        .byte                   En1
        .byte   W24
@ 063   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 064   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 065   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_2_13
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_037_3:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 67
        .byte           PAN   , c_v-9
        .byte           N02   , Gn2 , v127
        .byte           N02   , Cn3
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Gn2 , v100
        .byte           N02   , Cn3
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Gn2
        .byte           N02   , Cn3
        .byte           N02   , Cn4
        .byte   W12
        .byte           N23   , Gs2
        .byte           N23   , Cs3
        .byte           N23   , Cs4
        .byte   W24
        .byte           N11   , As2
        .byte           N11   , Ds3
        .byte           N11   , Ds4
        .byte   W10
        .byte           N07   , Gs2
        .byte   W02
        .byte           N05   , Gs3
        .byte           N05   , Cs4
        .byte   W12
        .byte           MOD   , 1
        .byte   W12
@ 001   ----------------------------------------
        .byte                   0
        .byte           N02   , Gn2 , v127
        .byte           N02   , Gn3 , v100
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Gn2
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Gn2
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W12
        .byte           N23   , Gs2
        .byte           N23   , Gs3
        .byte           N23   , Cs4
        .byte   W24
        .byte           N11   , As2
        .byte           N11   , As3
        .byte           N11   , Ds4
        .byte   W12
        .byte           N05   , Gs2
        .byte           N05   , Cs4 , v127
        .byte           N05   , Fn4 , v080
        .byte   W12
        .byte           MOD   , 1
        .byte   W12
@ 002   ----------------------------------------
        .byte                   0
        .byte           N02   , Gn2 , v127
        .byte           N05   , Gn3 , v124
        .byte           N05   , Cn4 , v104
        .byte   W12
        .byte           N02   , Gn2 , v100
        .byte           N05   , Gn3 , v120
        .byte           N05   , Cn4 , v100
        .byte   W12
        .byte           N02   , Gn2
        .byte           N05   , Gn3 , v120
        .byte           N05   , Cn4 , v104
        .byte   W12
        .byte           N23   , Gs2 , v100
        .byte           N23   , Gs3 , v120
        .byte           N23   , Cs4 , v100
        .byte   W24
        .byte           N11   , As2
        .byte           N11   , As3 , v120
        .byte           N11   , Ds4 , v108
        .byte   W10
        .byte           N13   , Gs2 , v100
        .byte   W02
        .byte           N23   , Gs3 , v120
        .byte           N23   , Fn4 , v076
        .byte   W12
        .byte           MOD   , 1
        .byte   W12
@ 003   ----------------------------------------
        .byte                   0
        .byte           N02   , Cn3 , v127
        .byte           N05   , Cn4 , v124
        .byte   W12
        .byte           N02   , Cn3 , v100
        .byte           N05   , Cn4 , v120
        .byte   W12
        .byte           N02   , Cn3 , v100
        .byte           N05   , Cn4 , v112
        .byte   W12
        .byte           N23   , Cs3 , v100
        .byte           N23   , Cs4 , v116
        .byte   W24
        .byte                   Ds3 , v100
        .byte           N23   , Ds4 , v116
        .byte   W24
        .byte           N11   , Cs3 , v124
        .byte           N11   , Cs4 , v120
        .byte   W12
@ 004   ----------------------------------------
        .byte           VOL   , 52
        .byte   W06
        .byte                   49
        .byte   W06
        .byte                   44
        .byte   W06
        .byte                   41
        .byte   W06
        .byte                   37
        .byte   W06
        .byte                   35
        .byte   W06
        .byte                   31
        .byte   W06
        .byte                   28
        .byte   W06
        .byte                   25
        .byte   W06
        .byte                   22
        .byte   W06
        .byte                   19
        .byte   W06
        .byte                   17
        .byte   W06
        .byte                   15
        .byte   W06
        .byte                   13
        .byte   W06
        .byte                   10
        .byte   W06
        .byte                   8
        .byte   W05
        .byte           VOICE , 61
        .byte   W01
@ 005   ----------------------------------------
        .byte           VOL   , 51
        .byte           PAN   , c_v+50
        .byte           N05   , Cn1 , v127
        .byte           N05   , Cn2
        .byte   W12
        .byte           PAN   , c_v-16
        .byte           N11   , Cn1
        .byte           N11   , Cn2
        .byte   W84
@ 006   ----------------------------------------
        .byte           VOL   , 71
        .byte           PAN   , c_v-38
        .byte           N05   , Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           PAN   , c_v+33
        .byte           N11   , Cn1
        .byte           N11   , Cn2
        .byte   W84
@ 007   ----------------------------------------
        .byte           VOL   , 82
        .byte           PAN   , c_v+44
        .byte           N05   , Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           PAN   , c_v-16
        .byte           N11   , Cn1
        .byte           N11   , Cn2
        .byte   W84
@ 008   ----------------------------------------
        .byte           PAN   , c_v-35
        .byte           VOL   , 64
        .byte           N11   , As1 , v116
        .byte   W12
        .byte           PAN   , c_v-19
        .byte           N05   , En3 , v100
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           PAN   , c_v-1
        .byte           N11   , As1 , v088
        .byte   W12
        .byte           PAN   , c_v+15
        .byte           N11   , Fs3 , v084
        .byte   W12
        .byte           PAN   , c_v+42
        .byte           N11   , As1 , v076
        .byte   W12
        .byte           PAN   , c_v+56
        .byte           N11   , Fn3
        .byte   W12
        .byte           PAN   , c_v+54
        .byte           N11   , As1 , v072
        .byte   W12
        .byte           PAN   , c_v+39
        .byte           N11   , Ds3 , v076
        .byte   W12
@ 009   ----------------------------------------
        .byte           PAN   , c_v+30
        .byte           N11   , As1 , v084
        .byte   W12
        .byte           PAN   , c_v-3
        .byte           N11   , Fn3 , v096
        .byte   W12
        .byte           PAN   , c_v-12
        .byte           N11   , As1 , v112
        .byte   W12
        .byte           PAN   , c_v-20
        .byte           N11   , Fs3 , v120
        .byte   W12
        .byte           PAN   , c_v-32
        .byte           N11   , As1 , v116
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Fn3 , v100
        .byte   W12
        .byte           PAN   , c_v-56
        .byte           N11   , As1 , v096
        .byte   W12
        .byte           PAN   , c_v-19
        .byte           N11   , As3 , v092
        .byte   W12
@ 010   ----------------------------------------
        .byte           PAN   , c_v+0
        .byte           N11   , As1 , v088
        .byte   W12
        .byte           PAN   , c_v+17
        .byte           N11   , Fn3
        .byte   W12
        .byte           PAN   , c_v+28
        .byte           N11   , As1
        .byte   W12
        .byte           PAN   , c_v+62
        .byte           N11   , Fs3 , v092
        .byte   W12
        .byte                   As1 , v096
        .byte   W12
        .byte           PAN   , c_v+55
        .byte           N11   , Fn3 , v100
        .byte   W12
        .byte           PAN   , c_v+48
        .byte           N11   , As1 , v112
        .byte   W12
        .byte           PAN   , c_v+43
        .byte           N11   , Ds3
        .byte   W11
        .byte           VOICE , 9
        .byte   W01
@ 011   ----------------------------------------
        .byte           VOL   , 33
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Ds4 , v096
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Gn4 , v112
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Cn5 , v100
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Ds5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte                   Gs5
        .byte   W01
        .byte           PAN   , c_v-62
        .byte   W05
@ 012   ----------------------------------------
mus_pkmn_bw12_037_3_LOOP:
        .byte           N08   , En4 , v127
        .byte   W12
        .byte           PAN   , c_v-59
        .byte           N08   , En4 , v124
        .byte   W12
        .byte           PAN   , c_v+54
        .byte           N08   , En4 , v088
        .byte   W12
        .byte           PAN   , c_v-59
        .byte           N08   , En4 , v084
        .byte   W12
        .byte           PAN   , c_v+49
        .byte           N08   , En4 , v068
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N08   , En4 , v060
        .byte   W36
@ 013   ----------------------------------------
        .byte           PAN   , c_v+21
        .byte   W96
@ 014   ----------------------------------------
        .byte   W01
        .byte           VOL   , 48
        .byte           PAN   , c_v-42
        .byte   W02
        .byte           VOICE , 127
        .byte   W92
        .byte   W01
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W56
        .byte   W01
        .byte                   61
        .byte   W36
        .byte   W03
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
        .byte   W96
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W96
@ 024   ----------------------------------------
        .byte   W96
@ 025   ----------------------------------------
        .byte   W96
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W48
        .byte           PAN   , c_v+25
        .byte           VOL   , 74
        .byte   W12
        .byte           N05   , Gn3 , v120
        .byte           N05   , Gn4
        .byte   W12
        .byte                   An3 , v127
        .byte           N05   , An4
        .byte   W24
@ 028   ----------------------------------------
        .byte           N11   , As3 , v116
        .byte           N11   , As4
        .byte   W12
        .byte           N44   , Cn4
        .byte           N44   , Cn5
        .byte   W48
        .byte           N11   , As3
        .byte           N11   , As4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , An4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Gn4
        .byte   W12
@ 029   ----------------------------------------
        .byte                   As3
        .byte           N11   , As4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , An4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Gn4
        .byte   W12
        .byte                   As3
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , As4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , An4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , Gn4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Fn4
        .byte   W12
@ 030   ----------------------------------------
        .byte           N05   , An3
        .byte           N05   , En4
        .byte   W06
        .byte                   As3
        .byte           N05   , Fn4
        .byte   W06
        .byte                   An3
        .byte           N05   , En4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Dn4
        .byte   W06
        .byte           N68   , An3
        .byte           N68   , En4
        .byte   W72
@ 031   ----------------------------------------
        .byte           N05   , An3
        .byte           N05   , Cs4
        .byte   W06
        .byte                   As3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   An3
        .byte           N05   , Cs4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Bn3
        .byte   W06
        .byte                   An3
        .byte           N32   , Cs4
        .byte   W12
        .byte           N05   , Gn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Dn3
        .byte           N05   , Dn4 , v120
        .byte           N05   , Gn4
        .byte   W12
        .byte                   En3 , v116
        .byte           N05   , En4 , v120
        .byte           N05   , An4
        .byte   W12
        .byte                   Cs3 , v116
        .byte           N05   , Cs4 , v127
        .byte           N05   , Fn4
        .byte   W12
@ 032   ----------------------------------------
        .byte           N56   , Fn4 , v116
        .byte           N11   , As4
        .byte   W12
        .byte           N44   , Cn5
        .byte   W20
        .byte           BEND  , c_v-1
        .byte   W28
        .byte                   c_v+0
        .byte           N11   , As3
        .byte           N11   , As4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , An4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Gn4
        .byte   W12
@ 033   ----------------------------------------
        .byte                   As3
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Cn4
        .byte           N11   , As4
        .byte   W12
        .byte                   Dn4
        .byte           N11   , An4
        .byte   W12
        .byte                   En4
        .byte           N11   , Gn4
        .byte   W12
        .byte                   Fn4
        .byte           N11   , Dn5
        .byte   W12
        .byte                   En4
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Dn4
        .byte           N11   , As4
        .byte   W12
        .byte                   Fn4
        .byte           N11   , Dn5
        .byte   W12
@ 034   ----------------------------------------
        .byte           N05   , En4
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Fn4
        .byte           N05   , Dn5
        .byte   W06
        .byte                   En4
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Dn4
        .byte           N05   , As4
        .byte   W06
        .byte           N68   , En4
        .byte           N68   , Cn5
        .byte   W72
@ 035   ----------------------------------------
        .byte           N05   , Gn3 , v104
        .byte           N05   , Cn4
        .byte   W06
        .byte                   An3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , As3
        .byte   W06
        .byte           N68   , Gn3
        .byte           N68   , Cn4
        .byte   W72
@ 036   ----------------------------------------
        .byte           N05
        .byte           N05   , En4
        .byte   W06
        .byte                   Dn4
        .byte           N05   , Fn4
        .byte   W06
        .byte                   Cn4
        .byte           N05   , En4
        .byte   W06
        .byte                   As3
        .byte           N05   , Dn4
        .byte   W06
        .byte           N68   , Cn4
        .byte           N68   , En4
        .byte   W72
@ 037   ----------------------------------------
        .byte   W96
@ 038   ----------------------------------------
        .byte           VOL   , 55
        .byte           PAN   , c_v-20
        .byte           N08   , Cn2 , v108
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte           N17   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte   W24
@ 039   ----------------------------------------
        .byte           N08   , Cn2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte           N17   , Cn4
        .byte   W24
        .byte                   Fn3
        .byte   W24
@ 040   ----------------------------------------
        .byte           N08   , Cn2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte           N17   , Cn4 , v096
        .byte   W24
        .byte                   As3 , v092
        .byte   W24
@ 041   ----------------------------------------
        .byte                   An3 , v100
        .byte   W24
        .byte                   Gn3 , v088
        .byte   W24
        .byte           N11   , Fn3 , v108
        .byte   W12
        .byte           N32   , En3
        .byte   W36
@ 042   ----------------------------------------
        .byte           PAN   , c_v-21
        .byte           VOL   , 72
        .byte           N05   , Cn5 , v072
        .byte   W06
        .byte                   Cn5 , v020
        .byte   W06
        .byte                   Cn6 , v068
        .byte   W06
        .byte                   Cn6 , v024
        .byte   W18
        .byte                   Gn5 , v068
        .byte   W06
        .byte                   Gn5 , v024
        .byte   W30
        .byte                   Dn6 , v064
        .byte   W06
        .byte                   Dn6 , v024
        .byte   W18
@ 043   ----------------------------------------
        .byte   W96
@ 044   ----------------------------------------
        .byte           PAN   , c_v+39
        .byte           N05   , Cn5 , v080
        .byte   W06
        .byte                   Cn5 , v028
        .byte   W06
        .byte                   Cn6 , v080
        .byte   W06
        .byte                   Cn6 , v024
        .byte   W18
        .byte                   Gn5 , v068
        .byte   W06
        .byte                   Gn5 , v028
        .byte   W18
        .byte                   Cn6 , v064
        .byte   W06
        .byte                   Cn6 , v032
        .byte   W06
        .byte                   Dn6 , v064
        .byte   W06
        .byte                   Dn6 , v036
        .byte   W18
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte           VOL   , 57
        .byte           PAN   , c_v-31
        .byte           N05   , Cn3 , v088
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , Cs3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
@ 047   ----------------------------------------
mus_pkmn_bw12_037_3_47:
        .byte           N05   , En3 , v088
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , En3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte   PEND
@ 048   ----------------------------------------
mus_pkmn_bw12_037_3_48:
        .byte           N05   , Cn3 , v088
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , Cs3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte   PEND
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_3_47
@ 050   ----------------------------------------
        .byte           N05   , As2 , v088
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Bn2
        .byte   W24
        .byte           N05   , As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
@ 051   ----------------------------------------
        .byte                   Dn3
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Dn3
        .byte   W24
        .byte           N05   , As2
        .byte   W12
        .byte                   Bn2
        .byte   W12
        .byte                   As2
        .byte   W12
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_3_48
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_3_47
@ 054   ----------------------------------------
        .byte           N05   , As2 , v088
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Dn3
        .byte   W24
        .byte           N05   , As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
@ 055   ----------------------------------------
        .byte                   Dn3
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Dn3
        .byte   W24
        .byte           N05   , As2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   As2
        .byte   W12
@ 056   ----------------------------------------
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , En3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
@ 057   ----------------------------------------
        .byte           PAN   , c_v+36
        .byte           VOL   , 66
        .byte           N05   , Gn2 , v124
        .byte           N05   , En3
        .byte   W12
        .byte                   Gn2 , v108
        .byte           N05   , En3
        .byte   W12
        .byte                   Bn2
        .byte           N05   , Gn3
        .byte   W12
        .byte           N23   , En3 , v120
        .byte           N23   , Cn4
        .byte   W12
        .byte           MOD   , 1
        .byte   W12
        .byte                   0
        .byte           N08   , Gn2 , v127
        .byte           N08   , En3
        .byte   W12
        .byte                   Cn3 , v116
        .byte           N08   , Gn3
        .byte   W12
        .byte                   En3 , v124
        .byte           N08   , Cn4
        .byte   W12
@ 058   ----------------------------------------
        .byte           VOL   , 68
        .byte           PAN   , c_v+18
        .byte           N68   , Cs3 , v072
        .byte           N68   , Gs3
        .byte           N68   , Cs4
        .byte           N68   , Fn4
        .byte   W72
        .byte           N05   , Gs3
        .byte           N05   , Fn4
        .byte   W01
        .byte                   Cs3
        .byte   W23
@ 059   ----------------------------------------
        .byte                   As3
        .byte           N05   , Gn4
        .byte   W01
        .byte                   Ds3
        .byte   W11
        .byte                   Cs3
        .byte           N05   , Gs3
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Cs3 , v024
        .byte           N05   , Gs3
        .byte           N05   , Fn4
        .byte   W12
        .byte           PAN   , c_v-59
        .byte           N56   , Fn1 , v127
        .byte           N56   , Cs2 , v096
        .byte           N56   , Fn2
        .byte   W24
        .byte   W03
        .byte           VOL   , 64
        .byte   W03
        .byte           MOD   , 12
        .byte           VOL   , 60
        .byte   W03
        .byte                   56
        .byte   W03
        .byte                   51
        .byte           PAN   , c_v-43
        .byte   W03
        .byte           VOL   , 49
        .byte           PAN   , c_v-25
        .byte   W03
        .byte           VOL   , 46
        .byte           PAN   , c_v-13
        .byte   W03
        .byte           VOL   , 42
        .byte           PAN   , c_v+22
        .byte   W03
        .byte           VOL   , 39
        .byte           PAN   , c_v+33
        .byte   W03
        .byte           VOL   , 37
        .byte           PAN   , c_v+42
        .byte   W03
        .byte           VOL   , 35
        .byte           PAN   , c_v+52
        .byte   W03
        .byte           VOL   , 33
        .byte           PAN   , c_v+57
        .byte   W03
@ 060   ----------------------------------------
        .byte           MOD   , 0
        .byte           VOL   , 68
        .byte           PAN   , c_v+5
        .byte           N68   , Cn3 , v072
        .byte           N68   , Gn3
        .byte           N68   , Cn4
        .byte   W72
        .byte           N05   , Gn3
        .byte           N05   , Cn4 , v088
        .byte   W01
        .byte                   Cn3 , v072
        .byte   W23
@ 061   ----------------------------------------
        .byte                   Dn3 , v088
        .byte           N05   , Dn4
        .byte   W12
        .byte                   Cn3 , v072
        .byte           N05   , Gn3
        .byte           N05   , Cn4 , v088
        .byte   W12
        .byte                   Cn3 , v028
        .byte           N05   , Gn3
        .byte   W12
        .byte           N56   , En1 , v127
        .byte           N56   , Cn2 , v096
        .byte           N56   , En2
        .byte   W24
        .byte           VOL   , 67
        .byte   W03
        .byte                   65
        .byte   W03
        .byte           MOD   , 12
        .byte           VOL   , 59
        .byte   W03
        .byte                   54
        .byte           PAN   , c_v+42
        .byte   W03
        .byte           VOL   , 51
        .byte           PAN   , c_v+32
        .byte   W03
        .byte           VOL   , 47
        .byte           PAN   , c_v+21
        .byte   W03
        .byte           VOL   , 43
        .byte           PAN   , c_v-24
        .byte   W03
        .byte           VOL   , 39
        .byte           PAN   , c_v-30
        .byte   W03
        .byte           VOL   , 37
        .byte           PAN   , c_v-33
        .byte   W03
        .byte           VOL   , 33
        .byte           PAN   , c_v-38
        .byte   W03
        .byte           VOL   , 31
        .byte           PAN   , c_v-47
        .byte   W03
        .byte           VOL   , 29
        .byte           PAN   , c_v-51
        .byte   W03
@ 062   ----------------------------------------
        .byte           MOD   , 0
        .byte           VOL   , 68
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte           VOICE , 11
        .byte           PAN   , c_v+43
        .byte   W01
        .byte           VOL   , 21
        .byte   W92
        .byte   W01
        .byte                   33
        .byte           PAN   , c_v-62
        .byte   W02
@ 066   ----------------------------------------
        .byte           VOICE , 9
        .byte   GOTO
         .word  mus_pkmn_bw12_037_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_037_4:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 48
        .byte           PAN   , c_v+45
        .byte           MOD   , 1
        .byte           BEND  , c_v-1
        .byte           N05   , Gn3 , v100
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N23   , Gs3
        .byte   W24
        .byte           N11   , As3
        .byte   W12
        .byte           N23   , Gs3
        .byte   W24
@ 001   ----------------------------------------
mus_pkmn_bw12_037_4_1:
        .byte           N05   , Gn3 , v100
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N23   , Gs3
        .byte   W24
        .byte           N11   , As3
        .byte   W12
        .byte           N23   , Gs3
        .byte   W24
        .byte   PEND
@ 002   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_4_1
@ 003   ----------------------------------------
        .byte           N05   , Gn3 , v100
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N23   , Gs3
        .byte   W24
        .byte                   As3
        .byte   W24
        .byte           N09   , Gs3
        .byte   W10
        .byte           VOICE , 126
        .byte   W02
@ 004   ----------------------------------------
        .byte           PAN   , c_v+14
        .byte           N32   , Gn2
        .byte   W36
        .byte                   Cn3
        .byte   W36
        .byte           N23   , Gn3
        .byte   W24
@ 005   ----------------------------------------
        .byte           N11   , Fn3
        .byte   W12
        .byte           N32   , En3
        .byte   W36
        .byte           N11   , Dn3
        .byte   W12
        .byte           N32   , Cn3
        .byte   W36
@ 006   ----------------------------------------
        .byte           N05   , Gn2
        .byte   W06
        .byte                   An2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte                   Fn2
        .byte   W06
        .byte           N68   , Gn2
        .byte   W68
        .byte   W02
        .byte           VOICE , 23
        .byte           PAN   , c_v+15
        .byte   W02
@ 007   ----------------------------------------
        .byte           N05   , Cn5 , v127
        .byte           N05   , En5
        .byte   W06
        .byte                   Dn5
        .byte           N05   , Fn5
        .byte   W06
        .byte                   Cn5
        .byte           N05   , En5
        .byte   W06
        .byte                   Bn4
        .byte           N05   , Dn5
        .byte   W06
        .byte           N68   , Cn5
        .byte           N68   , En5
        .byte   W42
        .byte   W01
        .byte           VOL   , 47
        .byte   W02
        .byte                   44
        .byte   W01
        .byte                   41
        .byte   W02
        .byte                   37
        .byte   W01
        .byte                   35
        .byte   W02
        .byte                   31
        .byte   W01
        .byte                   29
        .byte   W02
        .byte                   25
        .byte   W01
        .byte                   23
        .byte   W02
        .byte                   21
        .byte   W01
        .byte                   18
        .byte   W02
        .byte                   15
        .byte   W01
        .byte                   13
        .byte   W02
        .byte                   11
        .byte   W01
        .byte                   9
        .byte   W05
        .byte           PAN   , c_v+14
        .byte   W01
        .byte           VOICE , 126
        .byte           VOL   , 48
        .byte   W02
@ 008   ----------------------------------------
mus_pkmn_bw12_037_4_8:
        .byte           N32   , Fn3 , v100
        .byte   W36
        .byte                   As3
        .byte   W36
        .byte           N23   , Fn4
        .byte   W24
        .byte   PEND
@ 009   ----------------------------------------
        .byte           N11   , Ds4
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte           N23   , Dn4 , v036
        .byte   W24
        .byte           N11   , Cn4 , v100
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte           N23   , As3 , v040
        .byte   W24
@ 010   ----------------------------------------
mus_pkmn_bw12_037_4_10:
        .byte           N05   , As3 , v100
        .byte   W06
        .byte                   Bn3
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte           N68   , As3
        .byte   W72
        .byte   PEND
@ 011   ----------------------------------------
        .byte           N05   , As2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte                   Gs2
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   Ds3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Fn4
        .byte   W04
        .byte           VOICE , 23
        .byte   W02
@ 012   ----------------------------------------
mus_pkmn_bw12_037_4_LOOP:
        .byte           VOL   , 80
        .byte           PAN   , c_v-10
        .byte           N32   , Cn4 , v120
        .byte           N32   , Cn5
        .byte   W36
        .byte                   Gn3 , v100
        .byte           N32   , Gn4
        .byte   W36
        .byte           N11   , Cn4
        .byte           N11   , Cn5
        .byte   W12
        .byte           N08   , Dn4
        .byte           N08   , Dn5
        .byte   W09
        .byte           N02   , Ds4 , v096
        .byte           N02   , Ds5
        .byte   W03
@ 013   ----------------------------------------
        .byte           N23   , En4 , v100
        .byte           N23   , En5
        .byte   W24
        .byte           N11   , Fn4
        .byte           N11   , Fn5
        .byte   W12
        .byte                   En4
        .byte           N11   , En5
        .byte   W12
        .byte           N23   , Dn4
        .byte           N23   , Dn5
        .byte   W24
        .byte           N11   , En4
        .byte           N11   , En5
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Dn5
        .byte   W12
@ 014   ----------------------------------------
        .byte           N32   , As3
        .byte           N32   , As4
        .byte   W36
        .byte                   Fn3
        .byte           N32   , Fn4
        .byte   W36
        .byte           N11   , As3
        .byte           N11   , As4
        .byte   W12
        .byte                   Cn4
        .byte           N11   , Cn5
        .byte   W12
@ 015   ----------------------------------------
        .byte           N23   , Dn4
        .byte           N23   , Dn5
        .byte   W24
        .byte           N11   , Ds4
        .byte           N11   , Ds5
        .byte   W12
        .byte                   Dn4
        .byte           N11   , Dn5
        .byte   W12
        .byte           N23   , As3
        .byte           N23   , As4
        .byte   W24
        .byte                   Dn4
        .byte           N23   , Dn5
        .byte   W24
@ 016   ----------------------------------------
        .byte           N32   , Cs4
        .byte           N32   , Cs5
        .byte   W36
        .byte                   An3
        .byte           N32   , An4
        .byte   W36
        .byte           N23   , Cs4
        .byte           N23   , Cs5
        .byte   W24
@ 017   ----------------------------------------
        .byte           N92   , En4
        .byte           N92   , En5
        .byte   W92
        .byte   W03
        .byte           VOICE , 29
        .byte   W01
@ 018   ----------------------------------------
        .byte           VOL   , 74
        .byte           PAN   , c_v+38
        .byte           N11   , Dn4 , v120
        .byte   W12
        .byte           N23   , Dn4 , v032
        .byte   W24
        .byte           N11   , As3 , v100
        .byte   W12
        .byte           N23   , As3 , v028
        .byte   W24
        .byte           N11   , Dn4 , v100
        .byte   W12
        .byte                   Dn4 , v040
        .byte   W12
@ 019   ----------------------------------------
        .byte           N92   , Fn4 , v100
        .byte   W72
        .byte           VOL   , 62
        .byte   W06
        .byte                   48
        .byte   W06
        .byte                   37
        .byte   W06
        .byte                   31
        .byte   W04
        .byte           VOICE , 126
        .byte   W02
@ 020   ----------------------------------------
        .byte           VOL   , 85
        .byte           PAN   , c_v-14
        .byte           N11   , Cn3 , v120
        .byte           N11   , Cn4
        .byte   W12
        .byte           N05   , Bn2 , v100
        .byte           N05   , Bn3
        .byte   W06
        .byte                   Bn2 , v032
        .byte           N05   , Bn3
        .byte   W06
        .byte                   Cn3 , v100
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Cn3 , v032
        .byte           N05   , Cn4
        .byte   W06
        .byte           N32   , Gn2 , v100
        .byte           N32   , Gn3
        .byte   W36
        .byte           N11   , Cn3 , v116
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Dn3 , v100
        .byte           N11   , Dn4
        .byte   W12
@ 021   ----------------------------------------
        .byte                   En3 , v116
        .byte           N11   , En4
        .byte   W12
        .byte                   En3 , v036
        .byte           N11   , En4
        .byte   W12
        .byte                   Fn3 , v127
        .byte           N11   , Fn4
        .byte   W12
        .byte                   En3 , v100
        .byte           N11   , En4
        .byte   W12
        .byte                   Dn3 , v124
        .byte           N11   , Dn4
        .byte   W12
        .byte                   Dn3 , v036
        .byte           N11   , Dn4
        .byte   W12
        .byte           N23   , En3 , v127
        .byte           N23   , En4
        .byte   W24
@ 022   ----------------------------------------
        .byte           N11   , As2
        .byte           N11   , As3
        .byte   W12
        .byte           N05   , An2 , v100
        .byte           N05   , An3
        .byte   W06
        .byte                   An2 , v036
        .byte           N05   , An3
        .byte   W06
        .byte                   As2 , v100
        .byte           N05   , As3
        .byte   W06
        .byte                   As2 , v028
        .byte           N05   , As3
        .byte   W06
        .byte           N32   , Fn2 , v100
        .byte           N32   , Fn3
        .byte   W36
        .byte           N11   , As2
        .byte           N11   , As3
        .byte   W12
        .byte                   Cn3
        .byte           N11   , Cn4
        .byte   W12
@ 023   ----------------------------------------
        .byte                   Dn3 , v124
        .byte           N11   , Dn4
        .byte   W12
        .byte                   Dn3 , v036
        .byte           N11   , Dn4
        .byte   W12
        .byte                   Ds3 , v100
        .byte           N11   , Ds4
        .byte   W12
        .byte                   Dn3 , v127
        .byte           N11   , Dn4
        .byte   W12
        .byte                   As2 , v100
        .byte           N11   , As3
        .byte   W12
        .byte                   As2 , v032
        .byte           N11   , As3
        .byte   W12
        .byte           N23   , Dn3 , v116
        .byte           N23   , Dn4
        .byte   W24
@ 024   ----------------------------------------
        .byte           N32   , Cs3 , v100
        .byte           N32   , Cs4
        .byte   W36
        .byte                   An2
        .byte           N32   , An3
        .byte   W36
        .byte           N23   , Cs3
        .byte           N23   , Cs4
        .byte   W24
@ 025   ----------------------------------------
        .byte           N92   , En3 , v104
        .byte           N92   , En4
        .byte   W72
        .byte           VOL   , 59
        .byte   W06
        .byte                   48
        .byte   W06
        .byte                   35
        .byte   W06
        .byte                   24
        .byte   W06
@ 026   ----------------------------------------
        .byte                   67
        .byte           N11   , An3 , v116
        .byte           N11   , An4
        .byte   W12
        .byte           N23   , An3 , v032
        .byte           N23   , An4
        .byte   W24
        .byte           N11   , En3 , v104
        .byte           N11   , En4 , v060
        .byte   W12
        .byte           N23   , En3 , v036
        .byte           N23   , En4
        .byte   W24
        .byte           N11   , An3 , v100
        .byte           N11   , An4
        .byte   W12
        .byte                   An3 , v032
        .byte           N11   , An4
        .byte   W12
@ 027   ----------------------------------------
        .byte           N56   , Cs4 , v112
        .byte           N56   , Cs5
        .byte   W68
        .byte   W02
        .byte           BEND  , c_v+0
        .byte   W24
        .byte   W02
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           VOICE , 9
        .byte   W02
@ 030   ----------------------------------------
        .byte   W92
        .byte   W01
        .byte           PAN   , c_v-20
        .byte   W03
@ 031   ----------------------------------------
        .byte           VOL   , 74
        .byte           N05   , An3 , v088
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   An3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   En3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Bn2
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte           N32   , An2
        .byte   W12
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W96
@ 035   ----------------------------------------
        .byte           N05   , Cn3 , v072
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte           N68   , Cn3
        .byte   W72
@ 036   ----------------------------------------
        .byte           N05   , En3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte           N68   , En3
        .byte   W72
@ 037   ----------------------------------------
        .byte           N80   , Gn3
        .byte   W80
        .byte   W03
        .byte           VOICE , 29
        .byte   W13
@ 038   ----------------------------------------
        .byte           PAN   , c_v+43
        .byte           N32   , Gn3 , v120
        .byte   W36
        .byte                   Cn4 , v100
        .byte   W36
        .byte           N23   , Gn4
        .byte   W24
@ 039   ----------------------------------------
mus_pkmn_bw12_037_4_39:
        .byte           N11   , Fn4 , v100
        .byte   W12
        .byte           N32   , En4
        .byte   W36
        .byte           N11   , Dn4
        .byte   W12
        .byte           N32   , Cn4
        .byte   W36
        .byte   PEND
@ 040   ----------------------------------------
        .byte           N05
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte           N56   , Cn4
        .byte   W72
@ 041   ----------------------------------------
        .byte           N05   , Cn3
        .byte   W06
        .byte                   Cs3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte           N68   , Cn3
        .byte   W72
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_4_8
@ 043   ----------------------------------------
        .byte           N05   , Ds4 , v120
        .byte   W12
        .byte                   Dn4 , v112
        .byte   W06
        .byte           N28   , Dn4 , v036
        .byte   W30
        .byte           N05   , Cn4 , v124
        .byte   W12
        .byte                   As3 , v112
        .byte   W06
        .byte           N28   , As3 , v036
        .byte   W30
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_4_10
@ 045   ----------------------------------------
        .byte           N05   , As2 , v100
        .byte   W06
        .byte                   Bn2
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte                   Gs2
        .byte   W06
        .byte           N68   , As2
        .byte   W72
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte   W96
@ 051   ----------------------------------------
        .byte   W96
@ 052   ----------------------------------------
        .byte   W96
@ 053   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           VOICE , 126
        .byte   W03
        .byte           PAN   , c_v-9
        .byte   W02
@ 054   ----------------------------------------
        .byte           VOL   , 82
        .byte           N92   , Dn3
        .byte           N92   , Fn3 , v124
        .byte           N92   , Fn4 , v100
        .byte   W96
@ 055   ----------------------------------------
        .byte           N44   , As2
        .byte           N44   , Dn3 , v120
        .byte           N44   , Dn4
        .byte   W48
        .byte           N11   , Fn3 , v100
        .byte           N11   , An3 , v124
        .byte           N11   , An4
        .byte   W12
        .byte                   Dn3 , v100
        .byte           N11   , Fn3 , v120
        .byte           N11   , Fn4
        .byte   W12
        .byte           N23   , Dn3 , v036
        .byte           N23   , Fn3
        .byte           N23   , Fn4
        .byte   W24
@ 056   ----------------------------------------
        .byte           N92   , En3 , v100
        .byte           N92   , Gn3 , v112
        .byte           N92   , Gn4
        .byte   W72
        .byte           VOL   , 47
        .byte   W06
        .byte                   41
        .byte   W06
        .byte                   33
        .byte   W06
        .byte                   25
        .byte   W06
@ 057   ----------------------------------------
        .byte                   57
        .byte           N05   , En3 , v100
        .byte           N05   , Bn3 , v112
        .byte           N05   , Bn4
        .byte   W12
        .byte           N80   , Gn3 , v100
        .byte           N80   , Cn4 , v120
        .byte           N80   , Cn5
        .byte   W84
@ 058   ----------------------------------------
        .byte           N68   , Cs3
        .byte           N68   , Cs4
        .byte   W72
        .byte           N05
        .byte   W24
@ 059   ----------------------------------------
        .byte                   Ds4
        .byte   W12
        .byte                   Cs4
        .byte   W24
        .byte           N56   , Fn2
        .byte           N56   , Fn3
        .byte   W60
@ 060   ----------------------------------------
        .byte           N68   , Cn3
        .byte           N68   , Cn4
        .byte   W72
        .byte           N05
        .byte   W24
@ 061   ----------------------------------------
        .byte                   Dn4
        .byte   W12
        .byte                   Cn4
        .byte   W24
        .byte           N56   , Cn3 , v100
        .byte           N56   , En3
        .byte   W60
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           VOICE , 23
        .byte           PAN   , c_v-10
        .byte           VOL   , 80
        .byte   W02
@ 066   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte   GOTO
         .word  mus_pkmn_bw12_037_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_037_5:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 22
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 72
        .byte           N17   , Cn1 , v112
        .byte   W36
        .byte           N20   , Cn0
        .byte   W24
        .byte           N11   , An0
        .byte   W12
        .byte           N05   , As0
        .byte   W12
        .byte           N02   , Ds0
        .byte   W06
        .byte                   Ds0
        .byte   W06
@ 001   ----------------------------------------
        .byte           N17   , Cn1
        .byte   W36
        .byte           N20   , Cn0
        .byte   W24
        .byte           N11   , As1 , v104
        .byte   W12
        .byte           N05   , Fn1 , v100
        .byte   W12
        .byte           N02   , As0 , v112
        .byte   W06
        .byte                   As0
        .byte   W06
@ 002   ----------------------------------------
        .byte           N17   , Cn1
        .byte   W36
        .byte           N23   , Cn0
        .byte   W24
        .byte           N11   , Cs2 , v100
        .byte   W12
        .byte           N05   , Gn1 , v092
        .byte   W13
        .byte           N02   , Cs1 , v112
        .byte   W06
        .byte                   Cs1
        .byte   W05
@ 003   ----------------------------------------
        .byte           N32   , Cn1
        .byte   W36
        .byte           N08   , Cn0
        .byte   W12
        .byte           N02
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Cn0
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
@ 004   ----------------------------------------
        .byte           VOL   , 67
        .byte           N11   , Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cs1 , v108
        .byte   W12
@ 005   ----------------------------------------
        .byte                   Cn0 , v124
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte           N10   , As0 , v116
        .byte   W12
@ 006   ----------------------------------------
        .byte           N11   , Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   En1 , v112
        .byte   W12
@ 007   ----------------------------------------
        .byte                   Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   An0
        .byte   W12
@ 008   ----------------------------------------
        .byte                   As0 , v127
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Ds1
        .byte   W12
@ 009   ----------------------------------------
        .byte                   As0 , v120
        .byte   W12
        .byte                   Fn1 , v112
        .byte   W12
        .byte                   As0 , v084
        .byte   W12
        .byte                   Fs1 , v100
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   As1
        .byte   W12
@ 010   ----------------------------------------
        .byte                   As0 , v124
        .byte   W12
        .byte                   Fn1 , v120
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Ds1
        .byte   W12
@ 011   ----------------------------------------
        .byte                   As0 , v120
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 012   ----------------------------------------
mus_pkmn_bw12_037_5_LOOP:
        .byte           N11   , Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 013   ----------------------------------------
        .byte                   Cn0 , v120
        .byte   W12
        .byte                   Gn0 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Cn1 , v127
        .byte   W12
        .byte                   Gn0 , v100
        .byte   W12
        .byte                   Fs0
        .byte   W12
        .byte                   Gn0
        .byte   W12
@ 014   ----------------------------------------
        .byte                   AsM1 , v127
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0 , v127
        .byte   W12
        .byte                   AsM1 , v100
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   As0
        .byte   W12
@ 015   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   Fn0
        .byte   W12
@ 016   ----------------------------------------
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   An0
        .byte   W12
@ 017   ----------------------------------------
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   An0
        .byte   W12
@ 018   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 019   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   An0 , v120
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
@ 020   ----------------------------------------
        .byte                   Cn0
        .byte   W12
        .byte                   Dn1 , v072
        .byte   W12
        .byte                   Cn0 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte           N02   , Gn1 , v092
        .byte   W06
        .byte                   Cn2 , v068
        .byte   W06
        .byte           N11   , Cn0 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 021   ----------------------------------------
        .byte                   Cn0
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   En1
        .byte   W12
@ 022   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte                   As0 , v080
        .byte   W12
        .byte                   AsM1 , v100
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte           N02   , Fn1 , v080
        .byte   W06
        .byte                   As1 , v068
        .byte   W06
        .byte           N11   , AsM1 , v100
        .byte   W12
        .byte                   As0
        .byte   W12
@ 023   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Fn1 , v084
        .byte   W12
        .byte                   Dn1 , v100
        .byte   W12
        .byte                   An1 , v076
        .byte   W12
@ 024   ----------------------------------------
        .byte                   AnM1 , v100
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte           N02   , En1 , v076
        .byte   W06
        .byte                   An1
        .byte   W06
        .byte           N11   , AnM1 , v100
        .byte   W12
        .byte                   An0
        .byte   W12
@ 025   ----------------------------------------
        .byte                   AnM1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Gs0
        .byte   W12
        .byte                   Bn0
        .byte   W12
@ 026   ----------------------------------------
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   Gs0
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   AnM1
        .byte   W12
        .byte                   An0
        .byte   W12
@ 027   ----------------------------------------
        .byte                   AnM1 , v124
        .byte   W12
        .byte                   An0 , v100
        .byte   W12
        .byte                   Cs1 , v124
        .byte   W12
        .byte                   An0 , v100
        .byte   W12
        .byte                   En1 , v124
        .byte   W12
        .byte                   Cs1 , v100
        .byte   W12
        .byte                   En1 , v120
        .byte   W12
        .byte                   Gn1
        .byte   W12
@ 028   ----------------------------------------
mus_pkmn_bw12_037_5_28:
        .byte           N11   , AsM1 , v112
        .byte   W12
        .byte           N01   , As0 , v100
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1 , v112
        .byte   W12
        .byte           N01   , As0 , v100
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte   PEND
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_28
@ 030   ----------------------------------------
        .byte           N11   , AnM1 , v112
        .byte   W12
        .byte           N01   , An0 , v100
        .byte   W06
        .byte                   An0
        .byte   W06
        .byte           N11   , En0
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   AnM1 , v112
        .byte   W12
        .byte           N01   , Cs1 , v100
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte           N11   , An1
        .byte   W12
        .byte                   En1
        .byte   W12
@ 031   ----------------------------------------
        .byte                   AnM1 , v112
        .byte   W12
        .byte           N01   , An0 , v100
        .byte   W06
        .byte                   An0
        .byte   W06
        .byte           N11   , En1
        .byte   W12
        .byte           N01   , Dn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Cs1 , v112
        .byte   W12
        .byte                   Bn0 , v100
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   En0
        .byte   W12
@ 032   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte           N01   , As0
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte           N01   , As0
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 033   ----------------------------------------
        .byte                   AsM1
        .byte   W12
        .byte           N01   , As0
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte           N01   , As0
        .byte   W06
        .byte                   As0
        .byte   W06
        .byte           N11   , AsM1
        .byte   W12
        .byte                   BnM1
        .byte   W12
@ 034   ----------------------------------------
        .byte                   Cn0
        .byte   W12
        .byte           N02   , Cn1
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N11   , Gn0
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N02   , Gn0
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte           N11   , En1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 035   ----------------------------------------
        .byte                   Cn0
        .byte   W12
        .byte           N02   , Cn1
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N11   , Gn0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   BnM1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Dn1
        .byte   W12
@ 036   ----------------------------------------
        .byte                   En1
        .byte   W12
        .byte           N02   , Cn1
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N11   , Bn0
        .byte   W12
        .byte           N02   , Gn0
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte           N11   , En0
        .byte   W12
        .byte                   Ds0
        .byte   W12
        .byte                   En0
        .byte   W10
        .byte                   Gn0
        .byte   W14
@ 037   ----------------------------------------
mus_pkmn_bw12_037_5_37:
        .byte           N11   , Cn0 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte   PEND
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 039   ----------------------------------------
mus_pkmn_bw12_037_5_39:
        .byte           N11   , Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte   PEND
@ 040   ----------------------------------------
mus_pkmn_bw12_037_5_40:
        .byte           N11   , Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte   PEND
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 042   ----------------------------------------
        .byte           N11   , AsM1 , v120
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 043   ----------------------------------------
        .byte           N05   , AsM1 , v120
        .byte   W12
        .byte                   AsM1 , v100
        .byte   W12
        .byte           N23   , Gs0 , v108
        .byte   W24
        .byte           N05   , AsM1 , v120
        .byte   W12
        .byte                   AsM1 , v100
        .byte   W12
        .byte           N23   , As0 , v108
        .byte   W24
@ 044   ----------------------------------------
        .byte           N11   , AsM1 , v120
        .byte   W12
        .byte                   Dn1 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   AsM1 , v116
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Gs0
        .byte   W12
@ 045   ----------------------------------------
        .byte                   AsM1 , v120
        .byte   W12
        .byte                   Gn0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   AsM1 , v116
        .byte   W12
        .byte                   Gs0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 046   ----------------------------------------
        .byte                   Cn0 , v120
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 047   ----------------------------------------
        .byte                   Cn0 , v127
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_39
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_40
@ 050   ----------------------------------------
        .byte           N11   , AsM1 , v108
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Gs0
        .byte   W12
        .byte                   AsM1 , v108
        .byte   W12
        .byte                   Gn0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
@ 051   ----------------------------------------
        .byte                   AsM1 , v112
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   AsM1 , v112
        .byte   W12
        .byte                   Dn0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 052   ----------------------------------------
        .byte                   Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0 , v112
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 053   ----------------------------------------
        .byte           N08   , Cn1 , v112
        .byte   W12
        .byte           N11   , Cn1 , v100
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   En1 , v108
        .byte   W12
        .byte                   Cn1 , v100
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 054   ----------------------------------------
        .byte                   AsM1 , v112
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1 , v108
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 055   ----------------------------------------
        .byte                   AsM1 , v112
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   AsM1 , v112
        .byte   W12
        .byte                   As0 , v100
        .byte   W12
        .byte                   AsM1
        .byte   W12
        .byte                   As0
        .byte   W12
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_40
@ 057   ----------------------------------------
        .byte           N11   , Cn0 , v112
        .byte   W12
        .byte                   Bn0 , v100
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte           N23   , En1
        .byte   W12
        .byte           MOD   , 1
        .byte   W12
        .byte                   0
        .byte           N11   , Cn1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 058   ----------------------------------------
        .byte                   Cs0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs0
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs0
        .byte   W12
        .byte                   Cs1
        .byte   W12
@ 059   ----------------------------------------
        .byte                   Ds1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   FnM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   FnM1
        .byte   W12
        .byte                   Fn0
        .byte   W12
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 061   ----------------------------------------
        .byte           N11   , Dn1 , v100
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   EnM1
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 062   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 063   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 064   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 065   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_5_37
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_037_6:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 48
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte                   75
        .byte           PAN   , c_v+50
        .byte           N05   , Cn4 , v084
        .byte           N05   , En4
        .byte   W12
        .byte           N56   , Fn4
        .byte           N56   , Gn4
        .byte   W18
        .byte           PAN   , c_v+48
        .byte   W06
        .byte                   c_v+38
        .byte   W06
        .byte                   c_v+27
        .byte   W06
        .byte                   c_v+15
        .byte   W06
        .byte                   c_v+2
        .byte   W06
        .byte                   c_v-7
        .byte   W06
        .byte                   c_v-21
        .byte   W06
        .byte                   c_v-34
        .byte           N02   , Ds4 , v072
        .byte           N02   , Fs4
        .byte   W03
        .byte                   Dn4 , v068
        .byte           N02   , Fn4
        .byte   W03
        .byte           PAN   , c_v-45
        .byte           N02   , Cs4 , v064
        .byte           N02   , En4
        .byte   W03
        .byte                   Cn4 , v060
        .byte           N02   , Ds4
        .byte   W01
        .byte           VOICE , 126
        .byte   W02
        .byte           VOL   , 85
        .byte           PAN   , c_v-10
        .byte           N05   , As1 , v124
        .byte           N05   , As2
        .byte   W06
        .byte                   Bn1 , v116
        .byte           N05   , Bn2
        .byte   W06
@ 004   ----------------------------------------
        .byte           VOL   , 78
        .byte           N32   , Cn2 , v120
        .byte           N32   , Cn3
        .byte   W36
        .byte                   Gn2
        .byte           N32   , Gn3
        .byte   W36
        .byte           N23   , Cn3
        .byte           N23   , Cn4
        .byte   W24
@ 005   ----------------------------------------
        .byte           N11   , As2
        .byte           N11   , As3
        .byte   W12
        .byte           N32   , An2 , v092
        .byte           N32   , An3
        .byte   W36
        .byte           N11   , Gn2 , v112
        .byte           N11   , Gn3
        .byte   W12
        .byte           N32   , Fn2 , v092
        .byte           N32   , Fn3
        .byte   W36
@ 006   ----------------------------------------
        .byte           N05   , En2 , v116
        .byte           N05   , En3 , v127
        .byte   W06
        .byte                   Fn2 , v092
        .byte           N05   , Fn3 , v104
        .byte   W06
        .byte                   En2 , v092
        .byte           N05   , En3 , v104
        .byte   W06
        .byte                   Dn2 , v092
        .byte           N05   , Dn3 , v104
        .byte   W06
        .byte           TIE   , En2 , v092
        .byte           TIE   , En3 , v104
        .byte   W48
        .byte           BEND  , c_v-1
        .byte   W24
@ 007   ----------------------------------------
        .byte           VOL   , 70
        .byte   W03
        .byte                   69
        .byte   W03
        .byte                   67
        .byte   W03
        .byte                   65
        .byte   W03
        .byte                   63
        .byte   W03
        .byte                   61
        .byte   W03
        .byte                   60
        .byte           BEND  , c_v-2
        .byte   W03
        .byte           VOL   , 58
        .byte   W03
        .byte                   56
        .byte   W03
        .byte                   54
        .byte   W06
        .byte                   52
        .byte   W03
        .byte                   50
        .byte   W03
        .byte                   48
        .byte   W03
        .byte                   47
        .byte   W03
        .byte                   46
        .byte   W03
        .byte                   44
        .byte   W03
        .byte                   42
        .byte   W03
        .byte                   41
        .byte   W03
        .byte                   39
        .byte           BEND  , c_v-3
        .byte   W11
        .byte           VOL   , 73
        .byte   W02
        .byte           EOT   , En2
        .byte                   En3
        .byte   W20
        .byte           BEND  , c_v+0
        .byte   W06
@ 008   ----------------------------------------
        .byte           N32   , As2 , v112
        .byte           N32   , As3
        .byte   W36
        .byte                   Fn3 , v092
        .byte           N32   , Fn4
        .byte   W36
        .byte           N23   , As3
        .byte           N23   , As4
        .byte   W24
@ 009   ----------------------------------------
        .byte           N11   , Gs3 , v108
        .byte           N11   , Gs4
        .byte   W12
        .byte                   Gn3 , v092
        .byte           N11   , Gn4
        .byte   W12
        .byte           N23   , Gn3 , v020
        .byte           N23   , Gn4 , v036
        .byte   W24
        .byte           N11   , Fn3 , v108
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Ds3 , v092
        .byte           N11   , Ds4
        .byte   W12
        .byte           N23   , Ds3 , v040
        .byte           N23   , Ds4
        .byte   W24
@ 010   ----------------------------------------
        .byte           N05   , Dn3 , v108
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Ds3 , v092
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N68   , Dn3
        .byte           N68   , Dn4
        .byte   W72
@ 011   ----------------------------------------
        .byte   W92
        .byte   W01
        .byte           VOICE , 29
        .byte   W03
@ 012   ----------------------------------------
mus_pkmn_bw12_037_6_LOOP:
        .byte           PAN   , c_v+25
        .byte           N32   , Gn3 , v100
        .byte   W36
        .byte                   En3
        .byte   W36
        .byte           N11
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 013   ----------------------------------------
        .byte           N23   , Gn3
        .byte   W24
        .byte           N11   , An3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N23   , Fn3
        .byte   W24
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 014   ----------------------------------------
        .byte           N32
        .byte   W36
        .byte                   Dn3
        .byte   W36
        .byte           N11
        .byte   W12
        .byte                   Ds3
        .byte   W12
@ 015   ----------------------------------------
        .byte                   Fn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N23   , Dn3
        .byte   W24
        .byte                   Fn3
        .byte   W24
@ 016   ----------------------------------------
mus_pkmn_bw12_037_6_16:
        .byte           N32   , An3 , v100
        .byte   W36
        .byte                   En3
        .byte   W36
        .byte           N23   , An3
        .byte   W24
        .byte   PEND
@ 017   ----------------------------------------
        .byte           N92   , Cs4
        .byte   W96
@ 018   ----------------------------------------
        .byte           PAN   , c_v-31
        .byte           N11   , As2
        .byte           N11   , As3
        .byte   W12
        .byte           N23   , As2 , v040
        .byte           N23   , As3
        .byte   W24
        .byte           N11   , Fn2 , v100
        .byte           N11   , Fn3
        .byte   W12
        .byte           N23   , Fn2 , v036
        .byte           N23   , Fn3
        .byte   W24
        .byte           N11   , As2 , v100
        .byte           N11   , As3
        .byte   W12
        .byte                   As2 , v040
        .byte           N11   , As3
        .byte   W12
@ 019   ----------------------------------------
        .byte           N92   , Dn3 , v080
        .byte           N92   , Dn4 , v100
        .byte   W72
        .byte           VOL   , 33
        .byte   W06
        .byte                   22
        .byte   W06
        .byte                   17
        .byte   W06
        .byte                   12
        .byte   W06
@ 020   ----------------------------------------
        .byte                   72
        .byte           PAN   , c_v+24
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N23   , En3
        .byte   W36
        .byte           N11
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 021   ----------------------------------------
        .byte                   Gn3
        .byte   W24
        .byte                   An3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W24
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3 , v044
        .byte   W12
@ 022   ----------------------------------------
        .byte                   Fn3 , v100
        .byte   W12
        .byte           N05   , En3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N20   , Dn3
        .byte   W36
        .byte           N11
        .byte   W12
        .byte                   Ds3
        .byte   W12
@ 023   ----------------------------------------
        .byte                   Fn3
        .byte   W24
        .byte                   Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn3
        .byte   W24
        .byte           N23   , Fn3
        .byte   W24
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_6_16
@ 025   ----------------------------------------
        .byte           N92   , Cs4 , v100
        .byte   W96
@ 026   ----------------------------------------
        .byte           N11   , Cs4 , v104
        .byte   W12
        .byte                   Cs4 , v040
        .byte   W24
        .byte                   An3 , v100
        .byte   W12
        .byte                   An3 , v044
        .byte   W24
        .byte                   Cs4 , v092
        .byte   W12
        .byte                   Cs4 , v044
        .byte   W12
@ 027   ----------------------------------------
        .byte           N56   , En3 , v096
        .byte           N44   , Gn4
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W96
@ 035   ----------------------------------------
        .byte   W96
@ 036   ----------------------------------------
        .byte   W92
        .byte   W01
        .byte           VOICE , 9
        .byte   W03
@ 037   ----------------------------------------
        .byte           VOL   , 22
        .byte           N92   , Cn4 , v088
        .byte   W96
@ 038   ----------------------------------------
        .byte           PAN   , c_v-29
        .byte           N32   , Gn3 , v120
        .byte   W36
        .byte                   Cn4 , v100
        .byte   W36
        .byte           PAN   , c_v+0
        .byte           VOL   , 33
        .byte           N23   , Gn4
        .byte   W24
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_4_39
@ 040   ----------------------------------------
        .byte           N05   , Cn4 , v100
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte           N68   , Cn4
        .byte   W72
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte   W96
@ 043   ----------------------------------------
        .byte   W96
@ 044   ----------------------------------------
        .byte   W96
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte           VOL   , 31
        .byte           PAN   , c_v+16
        .byte           N92   , Fn4
        .byte   W96
@ 051   ----------------------------------------
        .byte           N44   , Dn4
        .byte   W48
        .byte           N23   , An4
        .byte   W24
        .byte                   Fn4
        .byte   W24
@ 052   ----------------------------------------
        .byte           N92   , En4
        .byte   W96
@ 053   ----------------------------------------
        .byte                   Gn4
        .byte   W96
@ 054   ----------------------------------------
        .byte   W96
@ 055   ----------------------------------------
        .byte   W96
@ 056   ----------------------------------------
        .byte   W96
@ 057   ----------------------------------------
        .byte   W96
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W96
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W90
        .byte           VOICE , 126
        .byte   W01
        .byte           PAN   , c_v+25
        .byte           VOL   , 73
        .byte   W05
@ 066   ----------------------------------------
        .byte           VOICE , 29
        .byte   GOTO
         .word  mus_pkmn_bw12_037_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_037_7:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 126
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 54
        .byte           PAN   , c_v+48
        .byte   W96
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
        .byte   W92
        .byte   W02
        .byte           VOL   , 85
        .byte   W02
@ 011   ----------------------------------------
        .byte           N05   , An1 , v092
        .byte   W06
        .byte           N02   , As1 , v056
        .byte   W06
        .byte                   As1 , v096
        .byte   W06
        .byte                   As1 , v068
        .byte   W06
        .byte                   As1 , v092
        .byte   W06
        .byte                   As1 , v056
        .byte   W06
        .byte                   As1 , v096
        .byte   W06
        .byte                   As1 , v068
        .byte   W06
        .byte           N05   , An1 , v092
        .byte   W06
        .byte           N02   , As1 , v056
        .byte   W06
        .byte                   As1 , v096
        .byte   W06
        .byte                   As1 , v068
        .byte   W06
        .byte                   As1 , v092
        .byte   W06
        .byte                   As1 , v056
        .byte   W06
        .byte                   As1 , v096
        .byte   W06
        .byte                   As1 , v068
        .byte   W04
        .byte           VOL   , 72
        .byte   W02
@ 012   ----------------------------------------
mus_pkmn_bw12_037_7_LOOP:
        .byte   W36
        .byte           N08   , Cn2 , v127
        .byte   W12
        .byte           N02   , Cn1
        .byte   W12
        .byte                   Cn1 , v096
        .byte   W12
        .byte           N08   , Cn2 , v127
        .byte   W12
        .byte           N02   , Cn1
        .byte   W12
@ 013   ----------------------------------------
        .byte                   Cn1 , v096
        .byte   W12
        .byte                   Cn1 , v127
        .byte   W12
        .byte           N08   , Cn2
        .byte   W12
        .byte           N02   , Cn1
        .byte   W12
        .byte           N08   , Cn2
        .byte   W12
        .byte           N02   , Cn1
        .byte   W12
        .byte                   Cn1 , v096
        .byte   W12
        .byte           N08   , Cn2 , v127
        .byte   W12
@ 014   ----------------------------------------
        .byte                   As1 , v096
        .byte   W12
        .byte           N02   , As0 , v127
        .byte   W12
        .byte                   As0 , v096
        .byte   W12
        .byte           N08   , As1 , v127
        .byte   W12
        .byte           N02   , As0
        .byte   W12
        .byte                   As0 , v096
        .byte   W12
        .byte           N08   , As1 , v127
        .byte   W12
        .byte           N02   , As0
        .byte   W12
@ 015   ----------------------------------------
        .byte                   As0 , v096
        .byte   W12
        .byte                   As0 , v127
        .byte   W12
        .byte           N08   , As1
        .byte   W12
        .byte           N02   , As0
        .byte   W12
        .byte           N08   , As1
        .byte   W12
        .byte           N11   , Fn1 , v084
        .byte   W12
        .byte           N02   , As0 , v096
        .byte   W12
        .byte           N11   , As1 , v127
        .byte   W12
@ 016   ----------------------------------------
        .byte           N08   , An1 , v096
        .byte   W12
        .byte           N02   , An0 , v127
        .byte   W12
        .byte                   An0 , v096
        .byte   W12
        .byte           N23   , An1 , v127
        .byte   W24
        .byte           N02   , An0 , v096
        .byte   W12
        .byte           N08   , An1 , v127
        .byte   W12
        .byte           N02   , An0
        .byte   W12
@ 017   ----------------------------------------
        .byte           N08   , Gs1 , v120
        .byte   W12
        .byte                   An1 , v127
        .byte   W12
        .byte           N11   , En2
        .byte   W12
        .byte           N02   , An0
        .byte   W12
        .byte           N10   , Cs2
        .byte   W12
        .byte           N01   , An1
        .byte   W12
        .byte           N11   , En1
        .byte   W12
        .byte                   An1
        .byte   W12
@ 018   ----------------------------------------
        .byte           N08   , As1 , v096
        .byte   W12
        .byte           N02   , As0 , v127
        .byte   W12
        .byte                   As0 , v096
        .byte   W12
        .byte           N23   , As1 , v127
        .byte   W24
        .byte           N02   , As0
        .byte   W12
        .byte           N22   , As1
        .byte   W12
        .byte           MOD   , 2
        .byte   W12
@ 019   ----------------------------------------
        .byte                   0
        .byte           N10   , An1 , v124
        .byte   W12
        .byte                   As1 , v127
        .byte   W12
        .byte           N08   , Fn2
        .byte   W12
        .byte           N02   , As0
        .byte   W12
        .byte           N08   , Dn2
        .byte   W12
        .byte           N02   , As0
        .byte   W12
        .byte           N11   , As1
        .byte   W12
        .byte                   Bn1
        .byte   W12
@ 020   ----------------------------------------
        .byte           N08   , Cn2 , v096
        .byte   W12
        .byte           N09   , En2 , v127
        .byte   W12
        .byte           N02   , En1 , v096
        .byte   W12
        .byte           N08   , En2 , v127
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1 , v096
        .byte   W06
        .byte                   En1 , v092
        .byte   W06
        .byte           N08   , Gn1 , v127
        .byte   W12
        .byte           N02   , En1
        .byte   W12
@ 021   ----------------------------------------
        .byte                   En1 , v096
        .byte   W12
        .byte           N11   , En2 , v127
        .byte   W12
        .byte           N02   , Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , Cn1 , v096
        .byte   W12
        .byte           N11   , Bn1 , v127
        .byte   W12
@ 022   ----------------------------------------
        .byte           N08   , Dn2 , v096
        .byte   W12
        .byte           N02   , Fn1 , v127
        .byte   W12
        .byte                   Fn1 , v096
        .byte   W12
        .byte           N08   , Fn2 , v127
        .byte   W12
        .byte           N02   , Fn1
        .byte   W12
        .byte                   Fn1 , v096
        .byte   W06
        .byte                   Fn1 , v084
        .byte   W06
        .byte           N08   , As1 , v127
        .byte   W12
        .byte           N02   , Fn1
        .byte   W12
@ 023   ----------------------------------------
        .byte                   Fn1 , v096
        .byte   W12
        .byte                   Fn1 , v127
        .byte   W12
        .byte           N08   , Dn2
        .byte   W12
        .byte           N02   , Fn1
        .byte   W12
        .byte           N10   , Fn2
        .byte   W12
        .byte           N02   , Fn1
        .byte   W12
        .byte           N11   , As1
        .byte   W12
        .byte           N02   , Fn1 , v096
        .byte   W12
@ 024   ----------------------------------------
        .byte           N08   , Cs2
        .byte   W12
        .byte           N02   , En1 , v127
        .byte   W12
        .byte                   En1 , v096
        .byte   W12
        .byte           N10   , En1 , v127
        .byte   W12
        .byte           N02
        .byte   W12
        .byte                   En1 , v096
        .byte   W12
        .byte           N08   , An1 , v127
        .byte   W12
        .byte           N02   , En1
        .byte   W12
@ 025   ----------------------------------------
        .byte                   En1 , v096
        .byte   W12
        .byte                   En1 , v127
        .byte   W12
        .byte           N08   , En2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte           N11   , Cs2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte           N11   , An1
        .byte   W12
        .byte           N02   , En1 , v096
        .byte   W12
@ 026   ----------------------------------------
        .byte           N08   , An1
        .byte   W12
        .byte           N02   , En1 , v127
        .byte   W12
        .byte                   En1 , v096
        .byte   W12
        .byte           N10   , En1 , v127
        .byte   W12
        .byte           N02
        .byte   W12
        .byte                   En1 , v096
        .byte   W12
        .byte           N08   , An1 , v127
        .byte   W12
        .byte           N02   , En1
        .byte   W12
@ 027   ----------------------------------------
        .byte           N05   , En1 , v096
        .byte           N05   , En2
        .byte   W12
        .byte                   En1 , v127
        .byte           N05   , En2
        .byte   W12
        .byte           N22
        .byte   W24
        .byte           N21   , Gn2
        .byte   W24
        .byte           N22   , Fn2
        .byte   W12
        .byte           MOD   , 4
        .byte   W12
@ 028   ----------------------------------------
        .byte                   0
        .byte           N44   , Dn2
        .byte   W24
        .byte           MOD   , 2
        .byte   W24
        .byte                   0
        .byte           N02   , As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           BEND  , c_v-3
        .byte           N22
        .byte   W03
        .byte           BEND  , c_v-1
        .byte   W03
        .byte                   c_v+0
        .byte   W06
        .byte           N02   , As0
        .byte   W06
        .byte                   As0
        .byte   W06
@ 029   ----------------------------------------
        .byte           N10   , As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N14   , Fn2
        .byte   W18
        .byte           N02   , As1
        .byte   W06
        .byte                   As1
        .byte   W12
        .byte           N11   , Fn2
        .byte   W12
        .byte           N02   , As1
        .byte   W12
        .byte                   As1
        .byte   W06
        .byte                   As1
        .byte   W06
@ 030   ----------------------------------------
        .byte           N04   , An1
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte           BEND  , c_v-2
        .byte           N11   , En2
        .byte   W03
        .byte           BEND  , c_v-1
        .byte   W03
        .byte                   c_v+0
        .byte   W06
        .byte           N02   , En1
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte                   En1
        .byte   W12
        .byte           N11   , Cs2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W06
        .byte                   En1
        .byte   W06
@ 031   ----------------------------------------
        .byte           N11   , An1
        .byte   W12
        .byte           N02   , En1
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte           N11   , An1
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte           N22   , Gn2
        .byte   W12
        .byte           MOD   , 2
        .byte   W12
        .byte                   0
        .byte           N11   , Fn2
        .byte   W12
@ 032   ----------------------------------------
        .byte           N40   , Dn2
        .byte   W42
        .byte           N02   , As1
        .byte   W06
        .byte                   As1
        .byte   W12
        .byte           N10
        .byte   W12
        .byte           N02
        .byte   W12
        .byte                   As1
        .byte   W06
        .byte                   As1
        .byte   W06
@ 033   ----------------------------------------
        .byte           N22
        .byte   W24
        .byte           BEND  , c_v-3
        .byte           N14
        .byte   W03
        .byte           BEND  , c_v-1
        .byte   W03
        .byte                   c_v+0
        .byte   W12
        .byte           N02
        .byte   W06
        .byte                   As1
        .byte   W12
        .byte           N20
        .byte   W24
        .byte           N02
        .byte   W12
@ 034   ----------------------------------------
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
@ 035   ----------------------------------------
        .byte                   En1
        .byte   W12
        .byte                   En1
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte           N11   , Cn2
        .byte   W12
        .byte           N02   , En1
        .byte   W12
        .byte                   En1
        .byte   W12
@ 036   ----------------------------------------
        .byte           N04   , En3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte           N68   , En3
        .byte   W72
@ 037   ----------------------------------------
        .byte           N92   , Gn3
        .byte   W48
        .byte           BEND  , c_v-1
        .byte   W24
        .byte                   c_v-2
        .byte   W21
        .byte           VOICE , 29
        .byte           BEND  , c_v-3
        .byte   W03
@ 038   ----------------------------------------
        .byte           PAN   , c_v+13
        .byte           VOL   , 78
        .byte           BEND  , c_v+0
        .byte           N32   , Cn3 , v116
        .byte           N32   , Cn4
        .byte   W36
        .byte                   Gn3 , v100
        .byte           N32   , Gn4
        .byte   W36
        .byte           N23   , Cn4
        .byte           N23   , Cn5
        .byte   W24
@ 039   ----------------------------------------
        .byte           N11   , As3 , v116
        .byte           N11   , As4
        .byte   W12
        .byte           N32   , An3 , v100
        .byte           N32   , An4
        .byte   W36
        .byte           N11   , Gn3 , v116
        .byte           N11   , Gn4
        .byte   W12
        .byte           N32   , Fn3 , v100
        .byte           N32   , Fn4
        .byte   W36
@ 040   ----------------------------------------
        .byte           N05   , En3
        .byte           N05   , En4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W06
        .byte                   En3
        .byte           N05   , En4
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte           N68   , En3
        .byte           N68   , En4
        .byte   W72
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte           N32   , As2 , v120
        .byte           N32   , As3
        .byte   W36
        .byte                   Fn3 , v100
        .byte           N32   , Fn4
        .byte   W36
        .byte           N23   , As3
        .byte           N23   , As4
        .byte   W24
@ 043   ----------------------------------------
        .byte           N05   , Gs3 , v120
        .byte           N05   , Gs4
        .byte   W12
        .byte                   Gn3 , v100
        .byte           N05   , Gn4 , v112
        .byte   W06
        .byte           N28   , Gn3 , v044
        .byte           N28   , Gn4
        .byte   W30
        .byte           N05   , Fn3 , v127
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Ds3 , v116
        .byte           N05   , Ds4
        .byte   W06
        .byte           N28   , Ds3 , v048
        .byte           N28   , Ds4
        .byte   W30
@ 044   ----------------------------------------
        .byte           N05   , Dn3 , v100
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Ds3
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N68   , Dn3
        .byte           N68   , Dn4
        .byte   W72
@ 045   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           VOICE , 126
        .byte   W03
        .byte           PAN   , c_v+43
        .byte   W02
@ 046   ----------------------------------------
mus_pkmn_bw12_037_7_46:
        .byte           N05   , Cn2 , v072
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N23   , Cs2 , v084
        .byte   W24
        .byte           N05   , Cn2 , v072
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte   PEND
@ 047   ----------------------------------------
mus_pkmn_bw12_037_7_47:
        .byte           N05   , En2 , v072
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N23   , En2 , v084
        .byte   W24
        .byte           N05   , Cn2 , v072
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte   PEND
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_7_46
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_7_47
@ 050   ----------------------------------------
        .byte           N05   , As1 , v076
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N23   , Bn1 , v088
        .byte   W24
        .byte           N05   , As1 , v076
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
@ 051   ----------------------------------------
        .byte                   Dn2
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N23   , Dn2 , v088
        .byte   W24
        .byte           N05   , As1 , v076
        .byte   W12
        .byte                   Bn1
        .byte   W12
        .byte                   As1
        .byte   W12
@ 052   ----------------------------------------
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N23   , Cs2 , v088
        .byte   W24
        .byte           N05   , Cn2 , v076
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_7_47
@ 054   ----------------------------------------
        .byte           N05   , As1 , v072
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N23   , Dn2 , v088
        .byte   W24
        .byte           N05   , As1 , v072
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
@ 055   ----------------------------------------
        .byte                   Dn2
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N23   , Dn2 , v088
        .byte   W24
        .byte           N05   , As1 , v072
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   As1
        .byte   W12
@ 056   ----------------------------------------
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N23   , En2 , v088
        .byte   W24
        .byte           N05   , Cn2 , v072
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W10
        .byte           PAN   , c_v+16
        .byte   W01
        .byte           N05   , Gn1 , v080
        .byte   W01
@ 057   ----------------------------------------
        .byte                   En2
        .byte   W11
        .byte                   Gn1 , v072
        .byte   W01
        .byte                   En2
        .byte   W12
        .byte                   Gn1 , v076
        .byte           N05   , Gn2
        .byte   W12
        .byte           N23   , En2 , v084
        .byte           N23   , Cn3 , v100
        .byte   W24
        .byte           N05   , Gn1 , v076
        .byte           N05   , En2
        .byte   W12
        .byte                   Cn2 , v072
        .byte           N05   , Gn2
        .byte   W12
        .byte                   En2
        .byte           N05   , Cn3
        .byte   W12
@ 058   ----------------------------------------
        .byte           PAN   , c_v-19
        .byte           N68   , Cs2 , v100
        .byte           N68   , Gs2 , v116
        .byte           N64   , Fn3 , v100
        .byte   W72
        .byte           N05   , Fn3 , v088
        .byte   W24
@ 059   ----------------------------------------
        .byte                   Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W84
@ 060   ----------------------------------------
        .byte           N68   , Cn2 , v100
        .byte           N68   , Gn2 , v116
        .byte           N64   , En3 , v100
        .byte   W72
        .byte           N05   , En3 , v088
        .byte   W24
@ 061   ----------------------------------------
        .byte                   Fn3
        .byte   W12
        .byte                   En3
        .byte   W84
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W72
        .byte   W03
        .byte           VOL   , 72
        .byte           PAN   , c_v+48
        .byte   W21
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_037_8:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 108
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 78
        .byte           PAN   , c_v-38
        .byte           MOD   , 1
        .byte           N09   , Dn3 , v127
        .byte   W12
        .byte                   Dn3 , v084
        .byte   W12
        .byte                   Dn3 , v088
        .byte   W12
        .byte           N23   , Ds3 , v127
        .byte   W24
        .byte           N11   , Fn3
        .byte   W12
        .byte                   Ds3
        .byte   W24
@ 001   ----------------------------------------
        .byte           N09   , Dn3
        .byte   W12
        .byte                   Dn3 , v088
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte           N23   , Ds3 , v127
        .byte   W24
        .byte           N11   , Fn3
        .byte   W12
        .byte                   Ds3
        .byte   W24
@ 002   ----------------------------------------
        .byte           N10   , Dn3
        .byte   W12
        .byte                   Dn3 , v104
        .byte   W12
        .byte                   Dn3 , v092
        .byte   W12
        .byte           N23   , Ds3 , v127
        .byte   W24
        .byte           N10   , Fn3
        .byte   W12
        .byte                   Ds3
        .byte   W24
@ 003   ----------------------------------------
        .byte                   Dn3
        .byte   W12
        .byte                   Dn3 , v100
        .byte   W12
        .byte                   Dn3 , v108
        .byte   W12
        .byte           N23   , Ds3 , v127
        .byte   W24
        .byte                   Fn3 , v100
        .byte   W24
        .byte           N11   , Ds3 , v124
        .byte   W12
@ 004   ----------------------------------------
        .byte           N92   , Dn3 , v100
        .byte   W96
@ 005   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           VOICE , 61
        .byte   W02
@ 006   ----------------------------------------
        .byte           VOL   , 39
        .byte   W96
@ 007   ----------------------------------------
        .byte           N05   , En4 , v120
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           N68   , En4
        .byte   W22
        .byte           VOL   , 37
        .byte   W03
        .byte                   35
        .byte   W03
        .byte                   31
        .byte   W03
        .byte                   29
        .byte   W03
        .byte                   26
        .byte   W03
        .byte                   23
        .byte   W03
        .byte                   21
        .byte   W03
        .byte                   19
        .byte   W03
        .byte                   17
        .byte   W03
        .byte                   15
        .byte   W03
        .byte                   13
        .byte   W03
        .byte                   11
        .byte   W03
        .byte                   10
        .byte   W03
        .byte                   8
        .byte   W03
        .byte                   7
        .byte   W08
@ 008   ----------------------------------------
        .byte                   39
        .byte   W96
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W92
        .byte   W01
        .byte           PAN   , c_v-12
        .byte   W03
@ 011   ----------------------------------------
        .byte           VOL   , 56
        .byte           N05   , As3 , v096
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Cn4
        .byte           N05   , Ds4
        .byte   W06
        .byte                   As3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Gs3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   As3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Cn4
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Dn4
        .byte           N05   , Fn4
        .byte   W06
        .byte                   Ds4
        .byte           N05   , Gn4 , v112
        .byte   W06
        .byte                   Fn4
        .byte           N05   , Gs4
        .byte   W06
        .byte                   Gn4
        .byte           N05   , As4
        .byte   W06
        .byte                   Gs4
        .byte           N05   , Cn5 , v100
        .byte   W06
        .byte                   As4 , v112
        .byte           N05   , Dn5 , v100
        .byte   W06
        .byte                   Cn5
        .byte           N05   , Ds5
        .byte   W06
        .byte                   Dn5
        .byte           N05   , Fn5
        .byte   W04
        .byte           PAN   , c_v-24
        .byte   W02
        .byte           N05   , Ds5
        .byte           N05   , Gn5
        .byte   W03
        .byte           PAN   , c_v-43
        .byte   W03
        .byte           N05   , Fn5
        .byte           N05   , Gs5
        .byte   W03
        .byte           PAN   , c_v-51
        .byte   W03
@ 012   ----------------------------------------
mus_pkmn_bw12_037_8_LOOP:
        .byte           VOL   , 46
        .byte           N14   , En5 , v127
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W96
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           VOICE , 9
        .byte   W02
@ 019   ----------------------------------------
        .byte           PAN   , c_v+20
        .byte           N05   , Fn4 , v088
        .byte           N05   , As4
        .byte   W12
        .byte                   Gn4 , v096
        .byte           N05   , Cn5
        .byte   W12
        .byte           N03   , Fn4
        .byte           N03   , As4
        .byte   W04
        .byte                   Gn4
        .byte           N03   , Cn5
        .byte   W04
        .byte                   Fn4
        .byte           N03   , As4
        .byte   W04
        .byte           N05   , Dn4 , v072
        .byte           N05   , Fn4 , v096
        .byte   W12
        .byte           N03   , As3
        .byte           N03   , Dn4
        .byte   W04
        .byte                   Cn4
        .byte           N03   , Fn4
        .byte   W04
        .byte                   As3
        .byte           N03   , Dn4
        .byte   W04
        .byte           N06   , Fn3
        .byte           N06   , As3
        .byte   W12
        .byte           N09   , As2 , v088
        .byte           N09   , Dn3
        .byte   W12
        .byte           N10   , Fn3
        .byte           N10   , As3
        .byte   W12
@ 020   ----------------------------------------
        .byte           N23   , Cn4
        .byte   W96
@ 021   ----------------------------------------
        .byte   W42
        .byte           VOICE , 23
        .byte   W06
        .byte           N11   , Dn5 , v127
        .byte   W12
        .byte                   Fn5 , v120
        .byte   W12
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Dn6
        .byte   W06
        .byte           N11   , An5
        .byte   W12
@ 022   ----------------------------------------
        .byte           TIE   , As5
        .byte   W96
@ 023   ----------------------------------------
        .byte   W44
        .byte           EOT
        .byte   W04
        .byte           N11   , Dn5 , v127
        .byte   W12
        .byte                   Fn5 , v120
        .byte   W12
        .byte           N05   , As5
        .byte   W06
        .byte                   Cn6
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
@ 024   ----------------------------------------
        .byte           TIE   , An5
        .byte   W96
@ 025   ----------------------------------------
        .byte   W24
        .byte           VOL   , 51
        .byte   W64
        .byte   W01
        .byte           EOT
        .byte   W07
@ 026   ----------------------------------------
        .byte   W92
        .byte   W01
        .byte           VOICE , 61
        .byte   W03
@ 027   ----------------------------------------
        .byte           VOL   , 82
        .byte           PAN   , c_v+29
        .byte           N11   , An2 , v127
        .byte           N11   , An3
        .byte   W12
        .byte                   Cs3
        .byte           N11   , Cs4
        .byte   W10
        .byte           PAN   , c_v-4
        .byte   W02
        .byte           N11   , En3
        .byte           N11   , En4 , v108
        .byte   W12
        .byte                   Cs3
        .byte           N11   , Cs4 , v096
        .byte   W10
        .byte           PAN   , c_v-26
        .byte   W02
        .byte           N11   , An3
        .byte           N11   , An4
        .byte   W12
        .byte                   En3 , v108
        .byte           N11   , En4 , v096
        .byte   W12
        .byte           PAN   , c_v-39
        .byte           N11   , Cs4
        .byte           N11   , Cs5
        .byte   W12
        .byte                   An3
        .byte           N11   , An4
        .byte   W12
@ 028   ----------------------------------------
        .byte           PAN   , c_v-57
        .byte           VOL   , 44
        .byte           N01   , Fn3 , v112
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Fn3 , v080
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Fn3
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Fn3 , v100
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Fn3 , v080
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Fn3
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           PAN   , c_v-47
        .byte           N01   , Fn3 , v100
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Fn3 , v080
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Fn3
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Fn3 , v100
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Fn3 , v080
        .byte           N01   , Dn4
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Fn3
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
@ 029   ----------------------------------------
        .byte           N01   , An3 , v100
        .byte           N01   , Fn4
        .byte           N01   , An4
        .byte   W06
        .byte                   An3 , v080
        .byte           N01   , Fn4
        .byte           N01   , An4
        .byte   W06
        .byte           N10   , An3
        .byte           N10   , Fn4
        .byte           N10   , An4
        .byte   W12
        .byte           N01   , As3 , v100
        .byte           N01   , Fn4
        .byte           N01   , As4
        .byte   W06
        .byte                   As3 , v080
        .byte           N01   , Fn4
        .byte           N01   , As4
        .byte   W06
        .byte           N10   , As3
        .byte           N10   , Fn4
        .byte           N10   , As4
        .byte   W12
        .byte           N01   , Dn4 , v100
        .byte           N01   , Fn4
        .byte           N01   , Dn5
        .byte   W06
        .byte                   Dn4 , v080
        .byte           N01   , Fn4
        .byte           N01   , Dn5
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte           N10   , Dn5
        .byte   W12
        .byte           N01   , As3 , v100
        .byte           N01   , Fn4
        .byte           N01   , As4
        .byte   W06
        .byte                   As3 , v080
        .byte           N01   , Fn4
        .byte           N01   , As4
        .byte   W06
        .byte           N10   , As3
        .byte           N10   , Fn4
        .byte           N10   , As4
        .byte   W12
@ 030   ----------------------------------------
        .byte           N01   , En3 , v100
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte                   En3 , v080
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , En3
        .byte           N10   , Cs4
        .byte           N10   , En4
        .byte   W12
        .byte           N01   , Fn3 , v100
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte                   Fn3 , v080
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , Fn3
        .byte           N10   , Cs4
        .byte           N10   , En4
        .byte   W12
        .byte           N01   , Gn3 , v100
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte                   Gn3 , v080
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , Gn3
        .byte           N10   , Cs4
        .byte           N10   , En4
        .byte   W12
        .byte           N01   , En3 , v100
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte                   En3 , v080
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , En3
        .byte           N10   , Cs4
        .byte           N10   , En4
        .byte   W12
@ 031   ----------------------------------------
        .byte           N01   , Bn3 , v100
        .byte           N01   , En4 , v116
        .byte   W06
        .byte                   Bn3 , v080
        .byte           N01   , En4 , v100
        .byte   W06
        .byte           N10   , Bn3 , v108
        .byte           N10   , En4
        .byte   W12
        .byte           N01   , Bn3 , v100
        .byte           N01   , Fn4 , v116
        .byte   W06
        .byte                   Bn3 , v080
        .byte           N01   , Fn4 , v100
        .byte   W06
        .byte           N10   , Bn3 , v104
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Cs4 , v120
        .byte           N01   , Gn4
        .byte   W06
        .byte                   Cs4 , v100
        .byte           N01   , Gn4
        .byte   W06
        .byte           N10   , Cs4 , v108
        .byte           N10   , Gn4
        .byte   W12
        .byte           N01   , En4 , v120
        .byte           N01   , An4 , v100
        .byte   W06
        .byte                   En4
        .byte           N01   , An4 , v080
        .byte   W06
        .byte           N10   , En4 , v112
        .byte           N10   , An4
        .byte   W12
@ 032   ----------------------------------------
mus_pkmn_bw12_037_8_32:
        .byte           N01   , Dn4 , v100
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Dn4 , v080
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Dn4 , v100
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Dn4 , v080
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Dn4 , v100
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Dn4 , v080
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte           N01   , Dn4 , v100
        .byte           N01   , Fn4
        .byte   W06
        .byte                   Dn4 , v080
        .byte           N01   , Fn4
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Fn4
        .byte   W12
        .byte   PEND
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_8_32
@ 034   ----------------------------------------
        .byte           N01   , En4 , v100
        .byte           N01   , Gn4
        .byte   W06
        .byte                   En4 , v080
        .byte           N01   , Gn4
        .byte   W06
        .byte           N10   , En4
        .byte           N10   , Gn4
        .byte   W12
        .byte           N01   , En4 , v100
        .byte           N01   , Gn4
        .byte   W06
        .byte                   En4 , v080
        .byte           N01   , Gn4
        .byte   W06
        .byte           N10   , En4
        .byte           N10   , Gn4
        .byte   W12
        .byte           N01   , En4 , v100
        .byte           N01   , Gn4
        .byte   W06
        .byte                   En4 , v080
        .byte           N01   , Gn4
        .byte   W06
        .byte           N10   , En4
        .byte           N10   , Gn4
        .byte   W12
        .byte           N01   , En4 , v100
        .byte           N01   , Gn4
        .byte   W06
        .byte                   En4 , v080
        .byte           N01   , Gn4
        .byte   W06
        .byte           N10   , En4
        .byte           N10   , Gn4
        .byte   W12
@ 035   ----------------------------------------
mus_pkmn_bw12_037_8_35:
        .byte           N01   , Gn4 , v100
        .byte           N01   , Cn5 , v116
        .byte   W06
        .byte                   Gn4 , v080
        .byte           N01   , Cn5 , v100
        .byte   W06
        .byte           N10   , Gn4 , v080
        .byte           N10   , Cn5 , v100
        .byte   W12
        .byte           N01   , Gn4
        .byte           N01   , Cn5 , v116
        .byte   W06
        .byte                   Gn4 , v080
        .byte           N01   , Cn5 , v100
        .byte   W06
        .byte           N10   , Gn4 , v080
        .byte           N10   , Cn5 , v104
        .byte   W12
        .byte           N01   , Gn4 , v100
        .byte           N01   , Cn5 , v120
        .byte   W06
        .byte                   Gn4 , v080
        .byte           N01   , Cn5 , v100
        .byte   W06
        .byte           N10   , Gn4 , v080
        .byte           N10   , Cn5 , v104
        .byte   W12
        .byte           N01   , Gn4 , v100
        .byte           N01   , Cn5 , v120
        .byte   W06
        .byte                   Gn4 , v080
        .byte           N01   , Cn5 , v100
        .byte   W06
        .byte           N10   , Gn4 , v080
        .byte           N10   , Cn5 , v108
        .byte   W12
        .byte   PEND
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_8_35
@ 037   ----------------------------------------
        .byte           PAN   , c_v-13
        .byte           TIE   , En4 , v100
        .byte           TIE   , Cn5
        .byte           TIE   , En5
        .byte           TIE   , Gn5 , v084
        .byte   W30
        .byte           VOL   , 36
        .byte   W06
        .byte                   35
        .byte   W06
        .byte                   33
        .byte   W06
        .byte                   31
        .byte   W06
        .byte                   30
        .byte   W06
        .byte                   28
        .byte   W06
        .byte                   26
        .byte   W06
        .byte                   25
        .byte   W12
        .byte                   24
        .byte   W06
        .byte                   23
        .byte   W06
@ 038   ----------------------------------------
        .byte                   21
        .byte   W06
        .byte                   20
        .byte   W06
        .byte                   19
        .byte   W06
        .byte                   17
        .byte   W06
        .byte                   16
        .byte   W06
        .byte                   15
        .byte   W12
        .byte                   13
        .byte   W12
        .byte                   12
        .byte   W06
        .byte                   11
        .byte   W06
        .byte                   9
        .byte   W12
        .byte                   8
        .byte   W06
        .byte                   7
        .byte   W11
        .byte           EOT   , En4
        .byte                   Cn5
        .byte                   En5
        .byte                   Gn5
        .byte   W01
@ 039   ----------------------------------------
        .byte           VOL   , 39
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte           N05   , En3 , v127
        .byte           N05   , Cn4
        .byte           N05   , En4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Cs4
        .byte           N05   , Fn4
        .byte   W06
        .byte                   En3
        .byte           N05   , Cn4
        .byte           N05   , En4
        .byte   W06
        .byte                   Dn3
        .byte           N05   , As3
        .byte           N05   , Dn4
        .byte   W06
        .byte           N68   , En3
        .byte           N68   , Cn4
        .byte           N68   , En4
        .byte   W44
        .byte   W01
        .byte           BEND  , c_v-1
        .byte   W21
        .byte                   c_v-2
        .byte   W06
@ 042   ----------------------------------------
        .byte                   c_v+0
        .byte   W96
@ 043   ----------------------------------------
        .byte           VOL   , 48
        .byte           PAN   , c_v-23
        .byte           N05   , As0 , v088
        .byte           N05   , As1
        .byte   W12
        .byte                   As0
        .byte           N05   , As1
        .byte   W12
        .byte                   As0
        .byte           N05   , As1
        .byte   W06
        .byte                   Bn0
        .byte           N05   , Bn1
        .byte   W06
        .byte           N11   , As0
        .byte           N11   , As1
        .byte   W12
        .byte           N05   , As0
        .byte           N05   , As1
        .byte   W12
        .byte                   As0
        .byte           N05   , As1
        .byte   W12
        .byte                   As0
        .byte           N05   , As1
        .byte   W06
        .byte                   Bn0
        .byte           N05   , Bn1
        .byte   W06
        .byte           N11   , As0
        .byte           N11   , As1
        .byte   W12
@ 044   ----------------------------------------
        .byte   W96
@ 045   ----------------------------------------
        .byte           PAN   , c_v+0
        .byte           VOL   , 70
        .byte           N05   , Dn3 , v100
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Ds3
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N04   , Dn3
        .byte           N04   , Dn4
        .byte   W06
        .byte                   Ds3
        .byte           N04   , Ds4
        .byte   W06
        .byte                   Fn3
        .byte           N04   , Fn4
        .byte   W06
        .byte                   An3
        .byte           N04   , An4
        .byte   W06
        .byte           N05   , As3
        .byte           N05   , As4
        .byte   W12
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W12
        .byte                   As3
        .byte           N05   , As4
        .byte   W12
        .byte                   Dn4
        .byte           N05   , Dn5
        .byte   W12
@ 046   ----------------------------------------
        .byte           VOL   , 59
        .byte           N32   , Cn5
        .byte   W36
        .byte                   Dn5
        .byte   W36
        .byte           N23   , Fn5
        .byte   W24
@ 047   ----------------------------------------
        .byte           N11   , En5
        .byte   W12
        .byte           N32   , Dn5
        .byte   W36
        .byte           N11   , Cn5
        .byte   W12
        .byte           PAN   , c_v-25
        .byte           N32   , As4
        .byte   W36
@ 048   ----------------------------------------
        .byte           N23   , As4 , v060
        .byte   W12
        .byte           PAN   , c_v+53
        .byte   W36
        .byte           N23   , As4 , v052
        .byte   W12
        .byte           PAN   , c_v-52
        .byte   W36
@ 049   ----------------------------------------
        .byte           N23   , As4 , v036
        .byte   W12
        .byte           PAN   , c_v+52
        .byte   W36
        .byte           N23   , As4 , v028
        .byte   W24
        .byte           PAN   , c_v-10
        .byte           N05   , Cn4 , v100
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte           N05   , Gn5
        .byte   W06
        .byte                   As4
        .byte           N05   , As5
        .byte   W06
        .byte                   Bn4
        .byte           N05   , Bn5
        .byte   W06
@ 050   ----------------------------------------
        .byte           PAN   , c_v+53
        .byte           N05   , Cn5
        .byte           N05   , Cn6
        .byte   W48
        .byte           PAN   , c_v-47
        .byte           N05   , Cn5 , v052
        .byte           N05   , Cn6
        .byte   W48
@ 051   ----------------------------------------
        .byte           PAN   , c_v+51
        .byte           N05   , Cn5 , v044
        .byte           N05   , Cn6
        .byte   W48
        .byte           PAN   , c_v-48
        .byte           N05   , Cn5 , v036
        .byte           N05   , Cn6
        .byte   W48
@ 052   ----------------------------------------
        .byte           PAN   , c_v+35
        .byte           N05   , Cn5
        .byte           N05   , Cn6
        .byte   W96
@ 053   ----------------------------------------
        .byte   W96
@ 054   ----------------------------------------
        .byte   W96
@ 055   ----------------------------------------
        .byte   W96
@ 056   ----------------------------------------
        .byte   W96
@ 057   ----------------------------------------
        .byte   W96
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W96
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte           VOL   , 58
        .byte   W72
        .byte   W03
        .byte                   46
        .byte           PAN   , c_v-51
        .byte   W21
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_8_LOOP
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_037_9:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 126
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 67
        .byte           PAN   , c_v+50
        .byte           N05   , Cn1 , v127
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           N23   , Cs1
        .byte           N23   , Cs2
        .byte   W24
        .byte                   Ds1
        .byte           N23   , Ds2
        .byte   W24
        .byte           N10   , Cs1
        .byte           N10   , Cs2
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_037_9_1:
        .byte           N05   , Cn1 , v124
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           N23   , Cs1 , v127
        .byte           N23   , Cs2
        .byte   W24
        .byte                   Ds1
        .byte           N23   , Ds2
        .byte   W24
        .byte           N10   , Cs1
        .byte           N10   , Cs2
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_9_1
@ 003   ----------------------------------------
        .byte           N05   , Cn1 , v124
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           N23   , Cs1 , v127
        .byte           N23   , Cs2
        .byte   W24
        .byte                   Ds1
        .byte           N23   , Ds2
        .byte   W24
        .byte           N02   , Cs1
        .byte           N02   , Cs2
        .byte   W06
        .byte                   Cs1
        .byte           N02   , Cs2
        .byte   W04
        .byte           VOL   , 44
        .byte   W02
@ 004   ----------------------------------------
        .byte           N08   , Bn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte           N02   , Cs2
        .byte   W06
        .byte                   Cs2
        .byte   W06
@ 005   ----------------------------------------
        .byte           N08   , Bn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte           N02   , As1
        .byte   W06
        .byte                   As1
        .byte   W06
@ 006   ----------------------------------------
        .byte           N08   , Bn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte           N02   , En2
        .byte   W06
        .byte                   En2
        .byte   W06
@ 007   ----------------------------------------
        .byte           N08   , Bn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W24
        .byte           N11   , Gs1
        .byte   W10
        .byte           VOL   , 64
        .byte   W02
@ 008   ----------------------------------------
        .byte           N09   , An1
        .byte   W12
        .byte           N04   , As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           BEND  , c_v-1
        .byte           N22
        .byte   W12
        .byte           BEND  , c_v+0
        .byte   W12
        .byte           N04
        .byte   W12
        .byte           BEND  , c_v-1
        .byte           N10
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           N01
        .byte   W06
        .byte                   As1
        .byte   W06
@ 009   ----------------------------------------
        .byte           N09
        .byte   W12
        .byte           N04
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           BEND  , c_v-1
        .byte           N22
        .byte   W12
        .byte           BEND  , c_v+0
        .byte   W12
        .byte           N04
        .byte   W12
        .byte           BEND  , c_v-1
        .byte           N08
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           N01
        .byte   W06
        .byte                   As1
        .byte   W06
@ 010   ----------------------------------------
        .byte           N09   , An1
        .byte   W12
        .byte           N04   , As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N09   , An1
        .byte   W12
        .byte           N04   , As1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N02
        .byte   W06
        .byte                   As1 , v108
        .byte   W06
        .byte                   As1 , v127
        .byte   W06
        .byte                   As1 , v108
        .byte   W04
        .byte           PAN   , c_v+39
        .byte   W02
@ 011   ----------------------------------------
        .byte           N05   , Dn2 , v096
        .byte   W06
        .byte                   Ds2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Ds2
        .byte   W06
        .byte                   Fn2
        .byte   W06
        .byte                   Gn2 , v112
        .byte   W06
        .byte                   Gs2
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte                   Dn3
        .byte   W04
        .byte           PAN   , c_v+35
        .byte   W02
        .byte           N05   , Ds3
        .byte   W06
        .byte           PAN   , c_v+43
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Gn3
        .byte   W03
        .byte           PAN   , c_v+62
        .byte   W03
        .byte           N05   , Gs3
        .byte   W06
@ 012   ----------------------------------------
mus_pkmn_bw12_037_9_LOOP:
        .byte           PAN   , c_v+54
        .byte           N68   , En4 , v092
        .byte   W06
        .byte           BEND  , c_v-3
        .byte   W06
        .byte                   c_v+0
        .byte   W12
        .byte           VOL   , 63
        .byte   W03
        .byte                   62
        .byte   W01
        .byte                   61
        .byte   W03
        .byte                   60
        .byte   W03
        .byte                   59
        .byte   W03
        .byte                   58
        .byte   W03
        .byte                   57
        .byte   W03
        .byte                   56
        .byte   W02
        .byte                   55
        .byte   W04
        .byte                   54
        .byte   W05
        .byte                   52
        .byte   W06
        .byte                   51
        .byte   W03
        .byte                   50
        .byte   W03
        .byte                   49
        .byte   W01
        .byte                   48
        .byte   W08
        .byte                   80
        .byte   W21
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W96
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
        .byte   W96
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W96
@ 024   ----------------------------------------
        .byte   W96
@ 025   ----------------------------------------
        .byte   W96
@ 026   ----------------------------------------
        .byte   W92
        .byte           VOICE , 23
        .byte   W04
@ 027   ----------------------------------------
        .byte           VOL   , 48
        .byte   W60
        .byte           N05   , Gn4 , v100
        .byte   W12
        .byte                   An4
        .byte   W24
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W96
@ 035   ----------------------------------------
        .byte   W96
@ 036   ----------------------------------------
        .byte   W96
@ 037   ----------------------------------------
        .byte   W96
@ 038   ----------------------------------------
        .byte   W96
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte   W96
@ 043   ----------------------------------------
        .byte   W96
@ 044   ----------------------------------------
        .byte   W96
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte           VOL   , 64
        .byte           PAN   , c_v+23
        .byte           N92   , Cn3 , v120
        .byte           N92   , Cn4
        .byte   W96
@ 047   ----------------------------------------
        .byte                   As2
        .byte           N92   , As3
        .byte   W96
@ 048   ----------------------------------------
        .byte                   An2
        .byte           N92   , An3
        .byte   W96
@ 049   ----------------------------------------
mus_pkmn_bw12_037_9_49:
        .byte           N92   , Gn2 , v120
        .byte           N92   , Gn3
        .byte   W96
        .byte   PEND
@ 050   ----------------------------------------
        .byte                   Fn2
        .byte           N92   , Fn3
        .byte   W96
@ 051   ----------------------------------------
        .byte           N44   , Dn2
        .byte           N44   , Dn3
        .byte   W48
        .byte           N23   , An2
        .byte           N23   , An3
        .byte   W24
        .byte                   Fn2
        .byte           N23   , Fn3
        .byte   W24
@ 052   ----------------------------------------
        .byte           N92   , En2
        .byte           N92   , En3
        .byte   W96
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_9_49
@ 054   ----------------------------------------
        .byte           N92   , Fn3 , v120
        .byte   W96
@ 055   ----------------------------------------
        .byte           N44   , Dn3
        .byte   W48
        .byte           N11   , An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N23   , Fn3 , v040
        .byte   W24
@ 056   ----------------------------------------
        .byte           N92   , Gn3 , v120
        .byte   W96
@ 057   ----------------------------------------
        .byte           N05   , Bn3
        .byte   W12
        .byte           N80   , Cn4
        .byte   W84
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte           VOICE , 125
        .byte           PAN   , c_v-53
        .byte           VOL   , 57
        .byte   W36
        .byte           N56   , Cs3 , v127
        .byte   W60
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W36
        .byte                   Cn3
        .byte   W60
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W80
        .byte   W02
        .byte           VOICE , 126
        .byte           VOL   , 64
        .byte           PAN   , c_v+39
        .byte   W14
@ 066   ----------------------------------------
        .byte                   c_v+54
        .byte   GOTO
         .word  mus_pkmn_bw12_037_9_LOOP
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_037_10:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 100
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 74
        .byte           PAN   , c_v-24
        .byte           N23   , Cn2 , v092
        .byte   W36
        .byte                   Gn1 , v112
        .byte   W48
        .byte           N02   , Gn2 , v127
        .byte   W06
        .byte                   Gn2
        .byte   W06
@ 001   ----------------------------------------
        .byte           N23   , Cn2 , v100
        .byte   W36
        .byte                   Gn1
        .byte   W60
@ 002   ----------------------------------------
        .byte                   Cn2 , v112
        .byte   W36
        .byte                   Cs1
        .byte   W60
@ 003   ----------------------------------------
        .byte                   Cn2 , v124
        .byte   W36
        .byte                   Cs1 , v100
        .byte   W60
@ 004   ----------------------------------------
        .byte           PAN   , c_v+0
        .byte           N92   , Fs1
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
mus_pkmn_bw12_037_10_LOOP:
        .byte           VOL   , 67
        .byte           PAN   , c_v+58
        .byte           N20   , Cn2 , v127
        .byte   W36
        .byte                   Cn2 , v100
        .byte   W36
        .byte                   Cn2
        .byte   W24
@ 013   ----------------------------------------
        .byte   W12
        .byte                   Cn2
        .byte   W36
        .byte           PAN   , c_v-50
        .byte           N11   , Fs1 , v127
        .byte   W24
        .byte                   Fs1
        .byte   W24
@ 014   ----------------------------------------
        .byte           PAN   , c_v+58
        .byte           N23   , As1
        .byte   W36
        .byte                   As1 , v100
        .byte   W36
        .byte                   As1
        .byte   W24
@ 015   ----------------------------------------
mus_pkmn_bw12_037_10_15:
        .byte   W12
        .byte           N23   , As1 , v100
        .byte   W36
        .byte           PAN   , c_v-50
        .byte           N11   , Fn1 , v127
        .byte   W24
        .byte                   Fn1
        .byte   W24
        .byte   PEND
@ 016   ----------------------------------------
        .byte           PAN   , c_v+58
        .byte           N23   , An1 , v124
        .byte   W36
        .byte                   An1 , v100
        .byte   W36
        .byte                   An1
        .byte   W24
@ 017   ----------------------------------------
        .byte   W12
        .byte                   An1
        .byte   W36
        .byte           PAN   , c_v-50
        .byte           N11   , En1 , v127
        .byte   W24
        .byte                   En1
        .byte   W24
@ 018   ----------------------------------------
mus_pkmn_bw12_037_10_18:
        .byte           PAN   , c_v+58
        .byte           N23   , As1 , v100
        .byte   W36
        .byte                   As1
        .byte   W36
        .byte                   As1
        .byte   W24
        .byte   PEND
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_15
@ 020   ----------------------------------------
        .byte           PAN   , c_v+58
        .byte           N23   , Cn2 , v100
        .byte   W36
        .byte                   Cn2
        .byte   W36
        .byte                   Cn2
        .byte   W24
@ 021   ----------------------------------------
        .byte   W12
        .byte                   Cn2
        .byte   W36
        .byte           PAN   , c_v-50
        .byte           N23   , Gn1 , v127
        .byte   W24
        .byte                   Gn1
        .byte   W24
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_18
@ 023   ----------------------------------------
        .byte   W12
        .byte           N23   , As1 , v100
        .byte   W36
        .byte           PAN   , c_v-50
        .byte           N23   , Fn1 , v127
        .byte   W24
        .byte                   Fn1
        .byte   W24
@ 024   ----------------------------------------
mus_pkmn_bw12_037_10_24:
        .byte           N23   , An1 , v100
        .byte   W01
        .byte           PAN   , c_v+58
        .byte   W32
        .byte   W03
        .byte           N23
        .byte   W36
        .byte                   An1
        .byte   W24
        .byte   PEND
@ 025   ----------------------------------------
        .byte   W12
        .byte                   An1
        .byte   W36
        .byte                   En1 , v127
        .byte   W01
        .byte           PAN   , c_v-50
        .byte   W23
        .byte           N23
        .byte   W24
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_24
@ 027   ----------------------------------------
        .byte   W12
        .byte           N23   , An1 , v100
        .byte   W36
        .byte                   En1 , v127
        .byte   W01
        .byte           PAN   , c_v-50
        .byte   W32
        .byte   W03
        .byte           N05   , En1 , v100
        .byte   W06
        .byte           N01   , Gs1
        .byte   W06
@ 028   ----------------------------------------
        .byte           PAN   , c_v+52
        .byte           N17   , As1
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte                   As1
        .byte   W24
@ 029   ----------------------------------------
mus_pkmn_bw12_037_10_29:
        .byte           N17   , As1 , v100
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte   PEND
@ 030   ----------------------------------------
mus_pkmn_bw12_037_10_30:
        .byte           N17   , An1 , v100
        .byte   W24
        .byte                   An1
        .byte   W24
        .byte                   An1
        .byte   W24
        .byte                   An1
        .byte   W24
        .byte   PEND
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_30
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_29
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_29
@ 034   ----------------------------------------
mus_pkmn_bw12_037_10_34:
        .byte           N17   , Cn2 , v100
        .byte   W24
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W24
        .byte                   Cn2
        .byte   W24
        .byte   PEND
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 037   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_34
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_29
@ 043   ----------------------------------------
        .byte           N05   , As2 , v100
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N17   , An1
        .byte   W24
        .byte           N05   , Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte           N23   , En1
        .byte   W24
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_29
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_10_29
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte   W96
@ 051   ----------------------------------------
        .byte   W96
@ 052   ----------------------------------------
        .byte   W96
@ 053   ----------------------------------------
        .byte   W96
@ 054   ----------------------------------------
        .byte   W96
@ 055   ----------------------------------------
        .byte   W96
@ 056   ----------------------------------------
        .byte   W96
@ 057   ----------------------------------------
        .byte   W96
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte           VOL   , 74
        .byte   W36
        .byte           TIE   , Fn1 , v124
        .byte   W60
@ 060   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W24
        .byte   W01
@ 061   ----------------------------------------
        .byte   W36
        .byte           N56   , En1
        .byte   W60
@ 062   ----------------------------------------
        .byte           VOL   , 56
        .byte           N23   , Cn2 , v100
        .byte           N23   , Gn2
        .byte   W36
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W36
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W24
@ 063   ----------------------------------------
        .byte   W12
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W36
        .byte           PAN   , c_v-31
        .byte           N23   , Gn1
        .byte           N23   , Cn2
        .byte   W24
        .byte                   Gn1
        .byte           N23   , Cn2
        .byte   W24
@ 064   ----------------------------------------
        .byte           PAN   , c_v+54
        .byte           N23
        .byte           N23   , Gn2
        .byte   W36
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W36
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W24
@ 065   ----------------------------------------
        .byte   W12
        .byte                   Cn2
        .byte           N23   , Gn2
        .byte   W36
        .byte           PAN   , c_v-26
        .byte           N23   , Gn1
        .byte           N23   , Cn2
        .byte   W24
        .byte           N20   , Gn1
        .byte   W22
        .byte           PAN   , c_v+58
        .byte           VOL   , 67
        .byte   W02
@ 066   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_037_10_LOOP
        .byte   FINE

@***************** Track 11 (Midi-Chn.11) *****************@

mus_pkmn_bw12_037_11:
        .byte   KEYSH , mus_pkmn_bw12_037_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 0
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W84
        .byte   W02
        .byte           VOICE , 126
        .byte   W10
@ 004   ----------------------------------------
        .byte           PAN   , c_v+57
        .byte   W12
        .byte           VOL   , 64
        .byte           N32   , Cn3 , v048
        .byte   W36
        .byte                   Gn3
        .byte   W36
        .byte           N23   , Cn4 , v044
        .byte   W12
@ 005   ----------------------------------------
        .byte   W12
        .byte           N11   , As3
        .byte   W12
        .byte           N32   , An3
        .byte   W36
        .byte           N11   , Gn3
        .byte   W12
        .byte           N32   , Fn3
        .byte   W24
@ 006   ----------------------------------------
        .byte   W12
        .byte           N05   , En3 , v040
        .byte   W06
        .byte                   Fn3 , v036
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte           N68   , En3 , v032
        .byte   W48
        .byte           VOL   , 51
        .byte   W06
        .byte                   46
        .byte   W06
@ 007   ----------------------------------------
        .byte                   32
        .byte   W06
        .byte                   29
        .byte   W90
@ 008   ----------------------------------------
        .byte                   61
        .byte   W12
        .byte           N32   , As3 , v052
        .byte   W36
        .byte                   Fn4 , v044
        .byte   W36
        .byte           N23   , As4
        .byte   W12
@ 009   ----------------------------------------
        .byte   W12
        .byte           N11   , Gs4 , v040
        .byte   W12
        .byte                   Gn4 , v044
        .byte   W36
        .byte                   Fn4
        .byte   W12
        .byte                   Ds4 , v048
        .byte   W24
@ 010   ----------------------------------------
        .byte   W12
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4 , v044
        .byte   W06
        .byte           N68   , Dn4 , v040
        .byte   W60
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
mus_pkmn_bw12_037_11_LOOP:
        .byte   W07
        .byte           PAN   , c_v-52
        .byte   W05
        .byte           VOICE , 23
        .byte           VOL   , 31
        .byte           N32   , Cn5 , v120
        .byte   W32
        .byte   W03
        .byte                   Gn4 , v100
        .byte   W36
        .byte           N11   , Cn5
        .byte   W12
        .byte           N08   , Dn5
        .byte   W01
@ 013   ----------------------------------------
        .byte   W08
        .byte           N02   , Ds5 , v096
        .byte   W03
        .byte           N23   , En5 , v100
        .byte   W24
        .byte           N11   , Fn5
        .byte   W12
        .byte                   En5
        .byte   W12
        .byte           N23   , Dn5
        .byte   W24
        .byte           N11   , En5
        .byte   W12
        .byte                   Dn5
        .byte   W01
@ 014   ----------------------------------------
        .byte   W11
        .byte           N32   , As4
        .byte   W36
        .byte                   Fn4
        .byte   W36
        .byte           N11   , As4
        .byte   W12
        .byte                   Cn5
        .byte   W01
@ 015   ----------------------------------------
        .byte   W11
        .byte           N23   , Dn5
        .byte   W24
        .byte           N11   , Ds5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte           N23   , As4
        .byte   W24
        .byte                   Dn5
        .byte   W13
@ 016   ----------------------------------------
        .byte   W11
        .byte           N32   , Cs5
        .byte   W36
        .byte                   An4
        .byte   W36
        .byte           N23   , Cs5
        .byte   W13
@ 017   ----------------------------------------
        .byte   W11
        .byte           N92   , En5
        .byte   W84
        .byte   W01
@ 018   ----------------------------------------
        .byte   W11
        .byte           VOICE , 29
        .byte   W01
        .byte           PAN   , c_v-34
        .byte           N11   , Dn4 , v120
        .byte   W36
        .byte                   As3 , v100
        .byte   W36
        .byte                   Dn4
        .byte   W12
@ 019   ----------------------------------------
        .byte   W12
        .byte           N90   , Fn4
        .byte   W80
        .byte   W02
        .byte           VOICE , 126
        .byte           PAN   , c_v+45
        .byte   W02
@ 020   ----------------------------------------
        .byte   W07
        .byte           VOL   , 41
        .byte   W05
        .byte           N11   , Cn4 , v120
        .byte   W12
        .byte           N05   , Bn3 , v100
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N23   , Gn3
        .byte   W36
        .byte           N11   , Cn4 , v116
        .byte   W12
@ 021   ----------------------------------------
        .byte                   Dn4 , v100
        .byte   W12
        .byte                   En4 , v116
        .byte   W24
        .byte                   Fn4 , v127
        .byte   W12
        .byte                   En4 , v100
        .byte   W12
        .byte                   Dn4 , v124
        .byte   W24
        .byte                   En4 , v127
        .byte   W12
@ 022   ----------------------------------------
        .byte   W12
        .byte                   As3
        .byte   W24
        .byte           N05   , As3 , v100
        .byte   W12
        .byte           N20   , Fn3
        .byte   W36
        .byte           N11   , As3
        .byte   W12
@ 023   ----------------------------------------
        .byte                   Cn4
        .byte   W12
        .byte                   Dn4 , v124
        .byte   W24
        .byte                   Ds4 , v100
        .byte   W12
        .byte                   Dn4 , v127
        .byte   W12
        .byte                   As3 , v100
        .byte   W24
        .byte           N23   , Dn4 , v116
        .byte   W12
@ 024   ----------------------------------------
        .byte   W12
        .byte           N32   , Cs4 , v100
        .byte   W36
        .byte                   An3
        .byte   W36
        .byte           N23   , Cs4
        .byte   W12
@ 025   ----------------------------------------
        .byte   W12
        .byte           N92   , En4 , v104
        .byte   W84
@ 026   ----------------------------------------
        .byte   W12
        .byte           N11   , An4 , v116
        .byte   W36
        .byte                   En4 , v060
        .byte   W36
        .byte                   An4 , v100
        .byte   W12
@ 027   ----------------------------------------
        .byte   W12
        .byte           N56   , Cs5 , v112
        .byte   W56
        .byte   W03
        .byte           VOICE , 61
        .byte   W01
        .byte           VOL   , 48
        .byte           PAN   , c_v-26
        .byte           N05   , Gn4 , v100
        .byte   W12
        .byte                   An4
        .byte   W12
@ 028   ----------------------------------------
        .byte   W12
        .byte           N11   , As4
        .byte   W12
        .byte           N44   , Cn5
        .byte   W44
        .byte   W03
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v+0
        .byte           N11   , As4
        .byte   W12
        .byte                   An4
        .byte   W12
@ 029   ----------------------------------------
        .byte                   Gn4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   Gn4
        .byte   W12
@ 030   ----------------------------------------
        .byte                   Fn4
        .byte   W12
        .byte           N05   , En4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           N68   , En4
        .byte   W60
@ 031   ----------------------------------------
        .byte   W12
        .byte           N05   , Cs4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cs4
        .byte   W48
        .byte                   Gn4
        .byte   W12
        .byte                   An4
        .byte   W12
@ 032   ----------------------------------------
        .byte                   Fn4
        .byte   W12
        .byte           N11   , As4
        .byte   W12
        .byte           N44   , Cn5
        .byte   W20
        .byte           BEND  , c_v-1
        .byte   W28
        .byte                   c_v+0
        .byte           N11   , As4
        .byte   W12
        .byte                   An4
        .byte   W12
@ 033   ----------------------------------------
        .byte                   Gn4
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte                   As4
        .byte   W12
@ 034   ----------------------------------------
        .byte                   Dn5
        .byte   W12
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte           N68   , Cn5
        .byte   W60
@ 035   ----------------------------------------
        .byte   W12
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4
        .byte   W12
        .byte           N68
        .byte   W60
@ 036   ----------------------------------------
mus_pkmn_bw12_037_11_36:
        .byte   W12
        .byte           N05   , En4 , v100
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           N68   , En4
        .byte   W60
        .byte   PEND
@ 037   ----------------------------------------
        .byte   W96
@ 038   ----------------------------------------
        .byte   W11
        .byte           VOICE , 29
        .byte   W01
        .byte           PAN   , c_v-61
        .byte           N32   , Cn4 , v116
        .byte   W36
        .byte                   Gn4 , v100
        .byte   W36
        .byte           N23   , Cn5
        .byte   W12
@ 039   ----------------------------------------
        .byte   W12
        .byte           N11   , As4 , v116
        .byte   W12
        .byte           N32   , An4 , v100
        .byte   W36
        .byte           N11   , Gn4 , v116
        .byte   W12
        .byte           N32   , Fn4 , v100
        .byte   W24
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_037_11_36
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte   W12
        .byte           N32   , As3 , v120
        .byte   W36
        .byte                   Fn4 , v100
        .byte   W36
        .byte           N23   , As4
        .byte   W12
@ 043   ----------------------------------------
        .byte   W12
        .byte           N05   , Gs4 , v120
        .byte   W12
        .byte                   Gn4 , v112
        .byte   W06
        .byte           N28   , Gn4 , v040
        .byte   W30
        .byte           N05   , Fn4 , v127
        .byte   W12
        .byte                   Ds4 , v116
        .byte   W06
        .byte           N28   , Ds4 , v044
        .byte   W18
@ 044   ----------------------------------------
        .byte   W12
        .byte           N05   , Dn4 , v100
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte           N68   , Dn4
        .byte   W60
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte   W10
        .byte           VOICE , 61
        .byte   W01
        .byte           N32   , Cn5
        .byte   W01
        .byte           PAN   , c_v+53
        .byte   W32
        .byte   W03
        .byte           N32   , Dn5
        .byte   W36
        .byte           N23   , Fn5
        .byte   W13
@ 047   ----------------------------------------
        .byte   W11
        .byte           N11   , En5
        .byte   W12
        .byte           N32   , Dn5
        .byte   W36
        .byte           N11   , Cn5
        .byte   W12
        .byte           N32   , As4
        .byte   W24
        .byte   W01
@ 048   ----------------------------------------
        .byte   W12
        .byte           N23   , As4 , v048
        .byte   W48
        .byte                   As4 , v036
        .byte   W36
@ 049   ----------------------------------------
        .byte   W12
        .byte                   As4 , v024
        .byte   W48
        .byte                   As4 , v016
        .byte   W23
        .byte           N05   , Cn4 , v100
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   As4
        .byte   W01
@ 050   ----------------------------------------
        .byte   W05
        .byte                   Bn4
        .byte   W06
        .byte                   Cn5
        .byte   W13
        .byte           PAN   , c_v-64
        .byte           N05   , As2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Bn2
        .byte   W12
        .byte           N05   , Cn5 , v056
        .byte   W12
        .byte                   As2 , v100
        .byte   W12
        .byte                   As2
        .byte   W12
@ 051   ----------------------------------------
        .byte           PAN   , c_v+56
        .byte           N05
        .byte   W12
        .byte                   Dn3
        .byte           N05   , Cn5 , v036
        .byte   W12
        .byte                   As2 , v100
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N23   , Dn3
        .byte   W12
        .byte           N05   , Cn5 , v036
        .byte   W12
        .byte                   As2 , v100
        .byte   W12
        .byte                   Bn2
        .byte   W12
@ 052   ----------------------------------------
        .byte           PAN   , c_v-61
        .byte           N05   , As2
        .byte   W12
        .byte                   Cn3
        .byte           N05   , Cn5 , v032
        .byte   W12
        .byte                   Cn3 , v100
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , Cs3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
@ 053   ----------------------------------------
        .byte           PAN   , c_v+56
        .byte           N05
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N23   , En3
        .byte   W24
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Cs3
        .byte   W08
        .byte           VOICE , 126
        .byte   W02
        .byte           PAN   , c_v-40
        .byte   W02
@ 054   ----------------------------------------
        .byte   W12
        .byte           N92   , Fn4 , v124
        .byte   W84
@ 055   ----------------------------------------
        .byte   W12
        .byte           N44   , Dn4 , v120
        .byte   W48
        .byte           N11   , An4 , v124
        .byte   W12
        .byte                   Fn4 , v120
        .byte   W24
@ 056   ----------------------------------------
        .byte   W12
        .byte           N92   , Gn4 , v112
        .byte   W84
@ 057   ----------------------------------------
        .byte   W12
        .byte           N05   , Bn4
        .byte   W12
        .byte           N80   , Cn5 , v120
        .byte   W72
@ 058   ----------------------------------------
        .byte   W96
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W96
@ 062   ----------------------------------------
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W96
@ 066   ----------------------------------------
        .byte           VOL   , 61
        .byte           PAN   , c_v+57
        .byte   GOTO
         .word  mus_pkmn_bw12_037_11_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_037:
        .byte   12                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_037_pri   @ Priority
        .byte   mus_pkmn_bw12_037_rev   @ Reverb

        .word   mus_pkmn_bw12_037_grp  

        .word   mus_pkmn_bw12_037_0
        .word   mus_pkmn_bw12_037_1
        .word   mus_pkmn_bw12_037_2
        .word   mus_pkmn_bw12_037_3
        .word   mus_pkmn_bw12_037_4
        .word   mus_pkmn_bw12_037_5
        .word   mus_pkmn_bw12_037_6
        .word   mus_pkmn_bw12_037_7
        .word   mus_pkmn_bw12_037_8
        .word   mus_pkmn_bw12_037_9
        .word   mus_pkmn_bw12_037_10
        .word   mus_pkmn_bw12_037_11

        .end
