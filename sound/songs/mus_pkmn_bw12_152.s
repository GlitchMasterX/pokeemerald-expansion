        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_152_grp, voicegroup536
        .equ    mus_pkmn_bw12_152_pri, 0
        .equ    mus_pkmn_bw12_152_rev, 0
        .equ    mus_pkmn_bw12_152_key, 0

        .section .rodata
        .global mus_pkmn_bw12_152
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_152_0:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 154/2
mus_pkmn_bw12_152_0_LOOP:
        .byte           VOICE , 99
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 35
        .byte           N68   , Cn3 , v127
        .byte   W72
        .byte                   Cn3
        .byte   W24
@ 001   ----------------------------------------
mus_pkmn_bw12_152_0_1:
        .byte   W48
        .byte           N68   , Cn3 , v127
        .byte   W48
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_0_2:
        .byte   W24
        .byte           N68   , Cn3 , v127
        .byte   W72
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_152_0_3:
        .byte           N68   , Cn3 , v127
        .byte   W72
        .byte                   Cn3
        .byte   W24
        .byte   PEND
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_1
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_2
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_0_3
@ 022   ----------------------------------------
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_152_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_152_1:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_1_LOOP:
        .byte           VOICE , 97
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 82
        .byte           PAN   , c_v-53
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   An0 , v088
        .byte           N11   , Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Dn1 , v088
        .byte           N11   , Gn1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , Dn2 , v088
        .byte           N11   , Gn2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Gs0 , v088
        .byte           N11   , Cs1 , v048
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_152_1_1:
        .byte           PAN   , c_v-54
        .byte           N11   , Cs1 , v088
        .byte           N11   , Fs1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Gs1 , v088
        .byte           N10   , Cs2 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , Cs2 , v088
        .byte           N11   , Fs2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Gs1 , v088
        .byte           N10   , Cs2 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , Fn0 , v127
        .byte   W12
        .byte                   Cn1 , v088
        .byte           N11   , Fn1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Fn1 , v088
        .byte           N11   , As1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Cn2 , v088
        .byte           N10   , Fn2 , v048
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_1_2:
        .byte           PAN   , c_v-60
        .byte           N11   , Fn2 , v088
        .byte           N11   , As2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Cn2 , v088
        .byte           N10   , Fn2 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , En0 , v127
        .byte   W12
        .byte                   Bn0 , v088
        .byte           N11   , En1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , En1 , v088
        .byte           N11   , An1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Bn1 , v088
        .byte           N10   , En2 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , En2 , v088
        .byte           N11   , An2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Bn1 , v088
        .byte           N10   , En2 , v048
        .byte   W12
        .byte   PEND
@ 003   ----------------------------------------
        .byte           PAN   , c_v-53
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   An0 , v088
        .byte           N11   , Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Dn1 , v088
        .byte           N11   , Gn1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , Dn2 , v088
        .byte           N11   , Gn2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Gs0 , v088
        .byte           N11   , Cs1 , v048
        .byte   W12
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_1_1
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_1_2
@ 006   ----------------------------------------
mus_pkmn_bw12_152_1_6:
        .byte           PAN   , c_v-53
        .byte           N11   , BnM1 , v127
        .byte   W12
        .byte                   Fs0 , v088
        .byte           N11   , Bn0 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Bn0 , v088
        .byte           N11   , En1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Fs1 , v088
        .byte           N10   , Bn1 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , Bn1 , v088
        .byte           N11   , En2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Fs1 , v088
        .byte           N10   , Bn1 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , AsM1 , v127
        .byte   W12
        .byte                   Fn0 , v088
        .byte           N11   , As0 , v048
        .byte   W12
        .byte   PEND
@ 007   ----------------------------------------
mus_pkmn_bw12_152_1_7:
        .byte           PAN   , c_v-54
        .byte           N11   , As0 , v088
        .byte           N11   , Ds1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Fn1 , v088
        .byte           N10   , As1 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , As1 , v088
        .byte           N11   , Ds2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Fn1 , v088
        .byte           N10   , As1 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   An0 , v088
        .byte           N11   , Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Dn1 , v088
        .byte           N11   , Gn1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte   PEND
@ 008   ----------------------------------------
mus_pkmn_bw12_152_1_8:
        .byte           PAN   , c_v-60
        .byte           N11   , Dn2 , v088
        .byte           N11   , Gn2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , An1 , v088
        .byte           N10   , Dn2 , v048
        .byte   W12
        .byte           PAN   , c_v-53
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Gs0 , v088
        .byte           N11   , Cs1 , v048
        .byte   W12
        .byte           PAN   , c_v-54
        .byte           N11   , Cs1 , v088
        .byte           N11   , Fs1 , v048
        .byte   W12
        .byte           PAN   , c_v-57
        .byte           N10   , Gs1 , v088
        .byte           N10   , Cs2 , v048
        .byte   W12
        .byte           PAN   , c_v-60
        .byte           N11   , Cs2 , v088
        .byte           N11   , Fs2 , v048
        .byte   W12
        .byte           PAN   , c_v-64
        .byte           N10   , Gs1 , v088
        .byte           N10   , Cs2 , v048
        .byte   W12
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_1_6
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_1_7
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_1_8
@ 012   ----------------------------------------
        .byte           PAN   , c_v-56
        .byte           N05   , Gs1 , v088
        .byte           N05   , Cs2
        .byte           N05   , Fs2
        .byte   W12
        .byte           N23   , Gs1
        .byte           N23   , Cs2
        .byte           N23   , Fs2
        .byte   W24
        .byte           N05   , Gn1
        .byte           N05   , Cn2
        .byte           N05   , Fn2
        .byte   W24
        .byte           N11   , Gs1
        .byte           N11   , Cs2
        .byte           N11   , Fs2
        .byte   W12
        .byte           N05   , As1
        .byte           N05   , Ds2
        .byte           N05   , Gs2
        .byte   W12
        .byte           N23   , An1
        .byte           N23   , Dn2
        .byte           N23   , Gn2
        .byte   W12
@ 013   ----------------------------------------
        .byte   W12
        .byte           N05   , Cn2
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W24
        .byte           N23   , Gn1
        .byte           N23   , Cn2
        .byte           N23   , Fn2
        .byte   W24
        .byte                   Gs1
        .byte           N23   , Cs2
        .byte           N23   , Fs2
        .byte   W24
        .byte           N05   , Gn1
        .byte           N05   , Cn2
        .byte           N05   , Fn2
        .byte   W12
@ 014   ----------------------------------------
        .byte   W12
        .byte           N11   , Gs1
        .byte           N11   , Cs2
        .byte           N11   , Fs2
        .byte   W12
        .byte           N05   , As1
        .byte           N05   , Ds2
        .byte           N05   , Gs2
        .byte   W12
        .byte           N23   , An1
        .byte           N23   , Dn2
        .byte           N23   , Gn2
        .byte   W24
        .byte           N05   , Cn2
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W24
        .byte           N11   , Dn2
        .byte           N11   , Gn2
        .byte           N11   , Cn3
        .byte   W12
@ 015   ----------------------------------------
        .byte           N05   , Ds2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Ds2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W24
        .byte           N23   , Ds2
        .byte           N23   , Gs2
        .byte           N23   , Cs3
        .byte   W24
        .byte           N11   , Cs2
        .byte           N11   , Fs2
        .byte           N11   , Bn2
        .byte   W12
        .byte           N05   , Dn2
        .byte           N05   , Gn2
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Dn2
        .byte           N05   , Gn2
        .byte           N05   , Cn3
        .byte   W12
@ 016   ----------------------------------------
        .byte           N23   , Dn2
        .byte           N23   , Gn2
        .byte           N23   , Cn3
        .byte   W24
        .byte                   As1
        .byte           N23   , Cn2
        .byte           N23   , Fn2
        .byte   W24
        .byte           TIE   , Bn1
        .byte           TIE   , Cs2
        .byte           TIE   , Fs2
        .byte   W48
@ 017   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Bn1
        .byte                   Cs2
        .byte                   Fs2
        .byte   W01
@ 018   ----------------------------------------
        .byte           TIE   , As1
        .byte           TIE   , Cn2
        .byte           TIE   , Fn2
        .byte   W96
@ 019   ----------------------------------------
        .byte   W44
        .byte   W03
        .byte           EOT   , As1
        .byte                   Cn2
        .byte                   Fn2
        .byte   W01
        .byte           TIE   , Cs2
        .byte           TIE   , Ds2
        .byte           TIE   , Gs2
        .byte   W48
@ 020   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Cs2
        .byte                   Ds2
        .byte                   Gs2
        .byte   W01
@ 021   ----------------------------------------
        .byte           N68   , Ds2
        .byte           N68   , Fn2
        .byte           N68   , As2
        .byte   W72
        .byte                   En2
        .byte           N68   , Fs2
        .byte           N68   , Bn2
        .byte   W24
@ 022   ----------------------------------------
        .byte   W48
        .byte           PAN   , c_v-53
        .byte   GOTO
         .word  mus_pkmn_bw12_152_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_152_2:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_2_LOOP:
        .byte           VOICE , 4
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+13
        .byte           VOL   , 70
        .byte           N44   , Dn5 , v088
        .byte   W48
        .byte           N23   , An5
        .byte   W24
        .byte           N44   , Gs5
        .byte   W24
@ 001   ----------------------------------------
        .byte   W24
        .byte           N23   , Dn6
        .byte   W24
        .byte           N44   , Cs6
        .byte   W48
@ 002   ----------------------------------------
        .byte           N23   , Gn5
        .byte   W24
        .byte           N44   , Gs5
        .byte   W48
        .byte           N23   , Cs5
        .byte   W24
@ 003   ----------------------------------------
        .byte           N44   , Dn5
        .byte   W48
        .byte           N23   , Gn4
        .byte   W24
        .byte           N44   , Gs4
        .byte   W24
@ 004   ----------------------------------------
        .byte   W24
        .byte           N23   , Dn5
        .byte   W24
        .byte           TIE   , Cs5
        .byte   W48
@ 005   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W24
        .byte   W01
@ 006   ----------------------------------------
        .byte           N44   , Fs4
        .byte           N44   , Bn4
        .byte   W48
        .byte           N23   , Cs5
        .byte           N23   , Fs5
        .byte   W24
        .byte           N44   , Cn5
        .byte           N44   , Fn5
        .byte   W24
@ 007   ----------------------------------------
        .byte   W24
        .byte           N23   , Fs5
        .byte           N23   , Bn5
        .byte   W24
        .byte           N44   , Fn5
        .byte           N44   , As5
        .byte   W48
@ 008   ----------------------------------------
        .byte           N23   , Bn4
        .byte           N23   , En5
        .byte   W24
        .byte           N44   , Cn5
        .byte           N44   , Fn5
        .byte   W48
        .byte           N23   , Fn4
        .byte           N23   , As4
        .byte   W24
@ 009   ----------------------------------------
        .byte           N44   , Fs4
        .byte           N44   , Bn4
        .byte   W48
        .byte           N23   , Bn3
        .byte           N23   , En4
        .byte   W24
        .byte           N44   , Cn4
        .byte           N44   , Fn4
        .byte   W24
@ 010   ----------------------------------------
        .byte   W24
        .byte           N23   , Fs4
        .byte           N23   , Bn4
        .byte   W24
        .byte           N68   , Fn4
        .byte           N68   , As4
        .byte   W48
@ 011   ----------------------------------------
        .byte   W24
        .byte                   Fs4
        .byte           N68   , Bn4
        .byte   W72
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W72
        .byte           N11   , As4
        .byte   W12
        .byte                   Cs5
        .byte   W12
@ 017   ----------------------------------------
        .byte                   Ds5
        .byte   W12
        .byte                   Fs4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   Cs5
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   Cs4
        .byte   W12
@ 018   ----------------------------------------
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   Fn4
        .byte   W12
@ 019   ----------------------------------------
        .byte                   Gn4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   Fn4
        .byte   W18
        .byte           N05   , Gs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Fn4
        .byte   W06
@ 020   ----------------------------------------
        .byte                   Ds4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Ds4
        .byte   W06
@ 021   ----------------------------------------
        .byte                   As4
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Bn3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Gn4
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Fs4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Bn4
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte   GOTO
         .word  mus_pkmn_bw12_152_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_152_3:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_3_LOOP:
        .byte           VOICE , 98
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 78
        .byte           N11   , Dn1 , v108
        .byte   W12
        .byte                   Dn1 , v028
        .byte   W60
        .byte                   Cs1 , v108
        .byte   W12
        .byte                   Cs1 , v028
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_152_3_1:
        .byte   W48
        .byte           N11   , Fn1 , v108
        .byte   W12
        .byte                   Fn1 , v028
        .byte   W36
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_3_2:
        .byte   W24
        .byte           N11   , En1 , v108
        .byte   W12
        .byte                   En1 , v028
        .byte   W60
        .byte   PEND
@ 003   ----------------------------------------
        .byte                   Dn1 , v108
        .byte   W12
        .byte                   Dn1 , v028
        .byte   W60
        .byte                   Cs1 , v108
        .byte   W12
        .byte                   Cs1 , v028
        .byte   W12
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_3_1
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_3_2
@ 006   ----------------------------------------
mus_pkmn_bw12_152_3_6:
        .byte           N11   , Bn0 , v108
        .byte   W12
        .byte                   Bn0 , v028
        .byte   W60
        .byte                   As0 , v108
        .byte   W12
        .byte                   As0 , v028
        .byte   W12
        .byte   PEND
@ 007   ----------------------------------------
mus_pkmn_bw12_152_3_7:
        .byte   W48
        .byte           N11   , Dn1 , v108
        .byte   W12
        .byte                   Dn1 , v028
        .byte   W36
        .byte   PEND
@ 008   ----------------------------------------
mus_pkmn_bw12_152_3_8:
        .byte   W24
        .byte           N11   , Cs1 , v108
        .byte   W12
        .byte                   Cs1 , v028
        .byte   W60
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_3_6
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_3_7
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_3_8
@ 012   ----------------------------------------
        .byte           N05   , Fs0 , v108
        .byte           N05   , Fs1
        .byte   W12
        .byte           N23   , Fs0
        .byte           N23   , Fs1
        .byte   W24
        .byte           N05   , Fn0
        .byte           N05   , Fn1
        .byte   W24
        .byte                   Fs0
        .byte           N05   , Fs1
        .byte   W12
        .byte                   Gs0
        .byte           N05   , Gs1
        .byte   W12
        .byte           N23   , Gn0
        .byte           N23   , Gn1
        .byte   W12
@ 013   ----------------------------------------
        .byte   W12
        .byte           N05   , As0
        .byte           N05   , As1
        .byte   W24
        .byte           N23   , Fn0
        .byte           N23   , Fn1
        .byte   W24
        .byte                   Fs0
        .byte           N23   , Fs1
        .byte   W24
        .byte           N05   , Fn0
        .byte           N05   , Fn1
        .byte   W12
@ 014   ----------------------------------------
        .byte   W12
        .byte           N11   , Fs0
        .byte           N11   , Fs1
        .byte   W12
        .byte           N05   , Gs0
        .byte           N05   , Gs1
        .byte   W12
        .byte           N23   , Gn0
        .byte           N23   , Gn1
        .byte   W24
        .byte           N05   , As0
        .byte           N05   , As1
        .byte   W24
        .byte           N11   , Cn1
        .byte           N11   , Cn2
        .byte   W12
@ 015   ----------------------------------------
        .byte           N05   , Cs1
        .byte           N05   , Cs2
        .byte   W12
        .byte                   Cs1
        .byte           N05   , Cs2
        .byte   W24
        .byte           N23   , Cs1
        .byte           N23   , Cs2
        .byte   W24
        .byte           N11   , Bn0
        .byte           N11   , Bn1
        .byte   W12
        .byte           N05   , Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte                   Cn1
        .byte           N05   , Cn2
        .byte   W12
@ 016   ----------------------------------------
        .byte           N23   , Cn1
        .byte           N23   , Cn2
        .byte   W24
        .byte                   Fn0
        .byte           N23   , Fn1
        .byte   W24
        .byte           N11   , Fs1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 017   ----------------------------------------
        .byte                   Cs1
        .byte   W12
        .byte                   Cs0
        .byte   W12
        .byte                   Fs0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Ds0
        .byte   W12
        .byte                   En0
        .byte   W12
        .byte                   Fn0
        .byte   W12
@ 018   ----------------------------------------
        .byte                   Fn1
        .byte   W12
        .byte                   An0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn0
        .byte   W12
        .byte                   Fn0
        .byte   W12
        .byte                   An0
        .byte   W12
@ 019   ----------------------------------------
        .byte                   As0
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Dn1
        .byte   W12
@ 020   ----------------------------------------
        .byte                   Ds1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Gn1
        .byte   W12
@ 021   ----------------------------------------
        .byte           TIE   , As1
        .byte   W96
@ 022   ----------------------------------------
        .byte   W17
        .byte           EOT
        .byte   W30
        .byte   W01
        .byte   GOTO
         .word  mus_pkmn_bw12_152_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_152_4:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_4_LOOP:
        .byte           VOICE , 98
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+52
        .byte           VOL   , 48
        .byte           N05   , Gn2 , v028
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+40
        .byte           N05   , Gn2 , v076
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+32
        .byte           N05   , Gn2 , v100
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+24
        .byte           N05   , Gn2 , v127
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+16
        .byte           N05   , Gn2 , v080
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+10
        .byte           N05   , Gn2 , v044
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+6
        .byte           N05   , Fs2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N05   , Fs2 , v076
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
@ 001   ----------------------------------------
        .byte           PAN   , c_v-2
        .byte           N05   , Fs2 , v100
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N05   , Fs2 , v127
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-8
        .byte           N05   , Fs2 , v080
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N05   , Fs2 , v044
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   As2
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v-8
        .byte           N05   , As2 , v076
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v-7
        .byte           N05   , As2 , v100
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N05   , As2 , v127
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
@ 002   ----------------------------------------
        .byte           PAN   , c_v-2
        .byte           N05   , As2 , v080
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+3
        .byte           N05   , As2 , v044
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+10
        .byte           N05   , An2
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v+16
        .byte           N05   , An2 , v076
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v+22
        .byte           N05   , An2 , v100
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v+28
        .byte           N05   , An2 , v127
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v+37
        .byte           N05   , An2 , v080
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v+43
        .byte           N05   , An2 , v044
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
@ 003   ----------------------------------------
        .byte           PAN   , c_v+50
        .byte           N05   , Gn2
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+56
        .byte           N05   , Gn2 , v076
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+58
        .byte           N05   , Gn2 , v100
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+59
        .byte           N05   , Gn2 , v127
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+62
        .byte           N05   , Gn2 , v080
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+61
        .byte           N05   , Gn2 , v044
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+59
        .byte           N05   , Fs2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+57
        .byte           N05   , Fs2 , v076
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
@ 004   ----------------------------------------
        .byte           PAN   , c_v+53
        .byte           N05   , Fs2 , v100
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+49
        .byte           N05   , Fs2 , v127
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+46
        .byte           N05   , Fs2 , v080
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+41
        .byte           N05   , Fs2 , v044
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+35
        .byte           N05   , As2
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+28
        .byte           N05   , As2 , v076
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+24
        .byte           N05   , As2 , v100
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+19
        .byte           N05   , As2 , v127
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
@ 005   ----------------------------------------
        .byte           PAN   , c_v+15
        .byte           N05   , As2 , v080
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+8
        .byte           N05   , As2 , v044
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N05   , An2
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v-7
        .byte           N05   , An2 , v076
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N05   , An2 , v100
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte           PAN   , c_v-10
        .byte           N05   , An2 , v127
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte                   An2 , v080
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
        .byte                   An2 , v044
        .byte           N05   , Bn2
        .byte           N05   , En3
        .byte   W12
@ 006   ----------------------------------------
        .byte                   En2 , v028
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v-8
        .byte           N05   , En2 , v076
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N05   , En2 , v100
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v-1
        .byte           N05   , En2 , v127
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N05   , En2 , v080
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+5
        .byte           N05   , En2 , v044
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+12
        .byte           N05   , Ds2
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+17
        .byte           N05   , Ds2 , v076
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
@ 007   ----------------------------------------
        .byte           PAN   , c_v+22
        .byte           N05   , Ds2 , v100
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+27
        .byte           N05   , Ds2 , v127
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+33
        .byte           N05   , Ds2 , v080
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+39
        .byte           N05   , Ds2 , v044
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+46
        .byte           N05   , Gn2
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+50
        .byte           N05   , Gn2 , v076
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+58
        .byte           N05   , Gn2 , v100
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v+62
        .byte           N05   , Gn2 , v127
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
@ 008   ----------------------------------------
        .byte           PAN   , c_v+63
        .byte           N05   , Gn2 , v080
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte                   Gn2 , v044
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte                   Fs2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Fs2 , v076
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Fs2 , v100
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Fs2 , v127
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Fs2 , v080
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+61
        .byte           N05   , Fs2 , v044
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
@ 009   ----------------------------------------
        .byte           PAN   , c_v+59
        .byte           N05   , En2
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte                   En2 , v076
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+55
        .byte           N05   , En2 , v100
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+49
        .byte           N05   , En2 , v127
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+44
        .byte           N05   , En2 , v080
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+39
        .byte           N05   , En2 , v044
        .byte           N05   , Fs2
        .byte           N05   , Bn2
        .byte   W12
        .byte           PAN   , c_v+36
        .byte           N05   , Ds2
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+31
        .byte           N05   , Ds2 , v076
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
@ 010   ----------------------------------------
        .byte           PAN   , c_v+25
        .byte           N05   , Ds2 , v100
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+21
        .byte           N05   , Ds2 , v127
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+15
        .byte           N05   , Ds2 , v080
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v+9
        .byte           N05   , Ds2 , v044
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W12
        .byte           PAN   , c_v-1
        .byte           N05   , Gn2
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v-11
        .byte           N05   , Gn2 , v076
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v-12
        .byte           N05   , Gn2 , v100
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v-13
        .byte           N05   , Gn2 , v127
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
@ 011   ----------------------------------------
        .byte                   Gn2 , v080
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v-11
        .byte           N05   , Gn2 , v044
        .byte           N05   , An2
        .byte           N05   , Dn3
        .byte   W12
        .byte           PAN   , c_v-10
        .byte           N05   , Fs2
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte                   Fs2 , v076
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-8
        .byte           N05   , Fs2 , v100
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-6
        .byte           N05   , Fs2 , v127
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v-3
        .byte           N05   , Fs2 , v080
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N05   , Fs2 , v044
        .byte           N05   , Gs2
        .byte           N05   , Cs3
        .byte   W12
@ 012   ----------------------------------------
        .byte           VOL   , 78
        .byte           PAN   , c_v-18
        .byte           N05   , Fs3 , v048
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W24
        .byte                   As3
        .byte   W12
        .byte                   An3
        .byte   W24
@ 013   ----------------------------------------
        .byte                   Dn4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N11   , Cs3
        .byte   W12
        .byte           N05   , Dn3
        .byte   W24
        .byte                   Bn2
        .byte   W12
@ 014   ----------------------------------------
        .byte                   Cs3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte           N23   , As3
        .byte   W24
        .byte           N11   , Cn4
        .byte   W12
@ 015   ----------------------------------------
        .byte           N05   , Gs4
        .byte   W12
        .byte                   Gs3
        .byte   W24
        .byte           N23   , Ds4
        .byte   W24
        .byte           N11   , Gs3
        .byte   W12
        .byte           N05   , Gn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
@ 016   ----------------------------------------
        .byte           N23   , Dn4
        .byte   W24
        .byte           N11   , Dn3
        .byte   W12
        .byte                   Gn3
        .byte   W60
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
        .byte   W48
        .byte           VOL   , 48
        .byte           PAN   , c_v+52
        .byte   GOTO
         .word  mus_pkmn_bw12_152_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_152_5:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_5_LOOP:
        .byte           VOICE , 97
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+61
        .byte           VOL   , 57
        .byte           N11   , Gn2 , v012
        .byte   W12
        .byte                   Gn3 , v016
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Gn3 , v020
        .byte   W12
        .byte                   Gn2 , v024
        .byte   W12
        .byte                   Gn3 , v028
        .byte   W12
        .byte                   Fs2 , v012
        .byte   W12
        .byte                   Fs3 , v016
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_152_5_1:
        .byte           N11   , Fs4 , v016
        .byte   W12
        .byte                   Fs3 , v020
        .byte   W12
        .byte                   Fs2 , v024
        .byte   W12
        .byte                   Fs3 , v028
        .byte   W12
        .byte                   As2 , v012
        .byte   W12
        .byte                   As3 , v016
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   As3 , v020
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_5_2:
        .byte           N11   , As2 , v024
        .byte   W12
        .byte                   As3 , v028
        .byte   W12
        .byte                   An2 , v012
        .byte   W12
        .byte                   An3 , v016
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   An3 , v020
        .byte   W12
        .byte                   An2 , v024
        .byte   W12
        .byte                   An3 , v028
        .byte   W12
        .byte   PEND
@ 003   ----------------------------------------
        .byte                   Gn2 , v012
        .byte   W12
        .byte                   Gn3 , v016
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Gn3 , v020
        .byte   W12
        .byte                   Gn2 , v024
        .byte   W12
        .byte                   Gn3 , v028
        .byte   W12
        .byte                   Fs2 , v012
        .byte   W12
        .byte                   Fs3 , v016
        .byte   W12
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_5_1
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_5_2
@ 006   ----------------------------------------
mus_pkmn_bw12_152_5_6:
        .byte           N11   , En2 , v012
        .byte   W12
        .byte                   En3 , v016
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte                   En3 , v020
        .byte   W12
        .byte                   En2 , v024
        .byte   W12
        .byte                   En3 , v028
        .byte   W12
        .byte                   Ds2 , v012
        .byte   W12
        .byte                   Ds3 , v016
        .byte   W12
        .byte   PEND
@ 007   ----------------------------------------
mus_pkmn_bw12_152_5_7:
        .byte           N11   , Ds4 , v016
        .byte   W12
        .byte                   Ds3 , v020
        .byte   W12
        .byte                   Ds2 , v024
        .byte   W12
        .byte                   Ds3 , v028
        .byte   W12
        .byte                   Gn2 , v012
        .byte   W12
        .byte                   Gn3 , v016
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Gn3 , v020
        .byte   W12
        .byte   PEND
@ 008   ----------------------------------------
mus_pkmn_bw12_152_5_8:
        .byte           N11   , Gn2 , v024
        .byte   W12
        .byte                   Gn3 , v028
        .byte   W12
        .byte                   Fs2 , v012
        .byte   W12
        .byte                   Fs3 , v016
        .byte   W12
        .byte                   Fs4
        .byte   W12
        .byte                   Fs3 , v020
        .byte   W12
        .byte                   Fs2 , v024
        .byte   W12
        .byte                   Fs3 , v028
        .byte   W12
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_5_6
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_5_7
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_5_8
@ 012   ----------------------------------------
        .byte           N05   , Fs3 , v092
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W24
        .byte                   As3
        .byte   W12
        .byte                   An3
        .byte   W24
@ 013   ----------------------------------------
        .byte                   Dn4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N11   , Cs3
        .byte   W12
        .byte           N05   , Dn3
        .byte   W24
        .byte                   Bn2
        .byte   W12
@ 014   ----------------------------------------
        .byte                   Cs3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte           N23   , As3
        .byte   W24
        .byte           N11   , Cn4
        .byte   W12
@ 015   ----------------------------------------
        .byte           N05   , Gs3
        .byte           N05   , Cs4
        .byte   W12
        .byte                   Gs2
        .byte           N05   , Cs3
        .byte   W24
        .byte           N23   , Ds3
        .byte           N23   , Gs3
        .byte   W24
        .byte           N11   , Gs2
        .byte           N11   , Cs3
        .byte   W12
        .byte           N05   , Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Cn3
        .byte   W12
@ 016   ----------------------------------------
        .byte           N23   , Dn3
        .byte           N23   , Gn3
        .byte   W24
        .byte           N11   , Dn2
        .byte           N11   , Gn2
        .byte   W12
        .byte                   Gn2
        .byte           N11   , Cn3
        .byte   W12
        .byte           TIE   , Gs2
        .byte           TIE   , Cs3
        .byte   W48
@ 017   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Gs2
        .byte                   Cs3
        .byte   W01
@ 018   ----------------------------------------
        .byte           TIE   , Gn2
        .byte           TIE   , Cn3
        .byte   W96
@ 019   ----------------------------------------
        .byte   W44
        .byte   W03
        .byte           EOT   , Gn2
        .byte                   Cn3
        .byte   W01
        .byte           TIE   , As2
        .byte           TIE   , Ds3
        .byte   W48
@ 020   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , As2
        .byte                   Ds3
        .byte   W01
@ 021   ----------------------------------------
        .byte           N68   , Cn3
        .byte           N68   , Fn3
        .byte   W72
        .byte                   Cs3
        .byte           N68   , Fs3
        .byte   W24
@ 022   ----------------------------------------
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_152_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_152_6:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_6_LOOP:
        .byte           VOICE , 4
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+54
        .byte           VOL   , 33
        .byte   W06
        .byte           N44   , Dn5 , v088
        .byte   W48
        .byte           N23   , An5
        .byte   W24
        .byte           N44   , Gs5
        .byte   W18
@ 001   ----------------------------------------
        .byte   W30
        .byte           N23   , Dn6
        .byte   W24
        .byte           N44   , Cs6
        .byte   W42
@ 002   ----------------------------------------
        .byte   W06
        .byte           N23   , Gn5
        .byte   W24
        .byte           N44   , Gs5
        .byte   W48
        .byte           N23   , Cs5
        .byte   W18
@ 003   ----------------------------------------
        .byte   W06
        .byte           N44   , Dn5
        .byte   W48
        .byte           N23   , Gn4
        .byte   W24
        .byte           N44   , Gs4
        .byte   W18
@ 004   ----------------------------------------
        .byte   W30
        .byte           N23   , Dn5
        .byte   W24
        .byte           TIE   , Cs5
        .byte   W42
@ 005   ----------------------------------------
        .byte   W76
        .byte   W01
        .byte           EOT
        .byte   W19
@ 006   ----------------------------------------
        .byte   W06
        .byte           N44   , Bn4
        .byte   W48
        .byte           N23   , Fs5
        .byte   W24
        .byte           N44   , Fn5
        .byte   W18
@ 007   ----------------------------------------
        .byte   W30
        .byte           N23   , Bn5
        .byte   W24
        .byte           N44   , As5
        .byte   W42
@ 008   ----------------------------------------
        .byte   W06
        .byte           N23   , En5
        .byte   W24
        .byte           N44   , Fn5
        .byte   W48
        .byte           N23   , As4
        .byte   W18
@ 009   ----------------------------------------
        .byte   W06
        .byte           N44   , Bn4
        .byte   W48
        .byte           N23   , En4
        .byte   W24
        .byte           N44   , Fn4
        .byte   W18
@ 010   ----------------------------------------
        .byte   W30
        .byte           N23   , Bn4
        .byte   W24
        .byte           N68   , As4
        .byte   W42
@ 011   ----------------------------------------
        .byte   W30
        .byte                   Bn4
        .byte   W66
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W78
        .byte           N11   , As4 , v060
        .byte   W12
        .byte                   Cs5
        .byte   W06
@ 017   ----------------------------------------
        .byte   W06
        .byte                   Ds5
        .byte   W12
        .byte                   Fs4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   Cs5
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   Cs4
        .byte   W06
@ 018   ----------------------------------------
        .byte   W18
        .byte                   Fn4
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   Fn4
        .byte   W06
@ 019   ----------------------------------------
        .byte   W06
        .byte                   Gn4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   An4
        .byte   W12
        .byte                   Fn4
        .byte   W18
        .byte           N05   , Gs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Dn4
        .byte   W06
@ 020   ----------------------------------------
        .byte                   Fn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte                   Cn5
        .byte   W06
@ 021   ----------------------------------------
        .byte                   Ds4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Bn3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Gn4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Fs4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Bn4
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte   GOTO
         .word  mus_pkmn_bw12_152_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_152_7:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_7_LOOP:
        .byte           VOICE , 97
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+17
        .byte           VOL   , 18
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
        .byte   W06
        .byte           N05   , Fs3 , v092
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W24
        .byte                   As3
        .byte   W12
        .byte                   An3
        .byte   W18
@ 013   ----------------------------------------
        .byte   W06
        .byte                   Dn4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N11   , Cs3
        .byte   W12
        .byte           N05   , Dn3
        .byte   W24
        .byte                   Bn2
        .byte   W06
@ 014   ----------------------------------------
        .byte   W06
        .byte                   Cs3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte           N23   , As3
        .byte   W24
        .byte           N11   , Cn4
        .byte   W06
@ 015   ----------------------------------------
        .byte   W06
        .byte           N05   , Cs4
        .byte   W12
        .byte                   Cs3
        .byte   W24
        .byte           N23   , Gs3
        .byte   W24
        .byte           N11   , Cs3
        .byte   W12
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Cn3
        .byte   W06
@ 016   ----------------------------------------
        .byte   W06
        .byte           N23   , Gn3
        .byte   W24
        .byte           N11   , Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           TIE   , Cs3
        .byte   W42
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
        .byte   W05
        .byte           EOT
        .byte   W01
        .byte           TIE   , Cn3
        .byte   W90
@ 019   ----------------------------------------
        .byte   W52
        .byte   W01
        .byte           EOT
        .byte   W01
        .byte           TIE   , Ds3
        .byte   W42
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte   W05
        .byte           EOT
        .byte   W01
        .byte           N68   , Fn3
        .byte   W72
        .byte           N64   , Fs3
        .byte   W18
@ 022   ----------------------------------------
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_152_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_152_8:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_8_LOOP:
        .byte           VOICE , 97
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v-1
        .byte           VOL   , 24
        .byte   W06
        .byte           PAN   , c_v+2
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   An0 , v088
        .byte           N11   , Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , Gn1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Dn2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Gn2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Dn2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Cs1 , v048
        .byte   W06
@ 001   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+1
        .byte           N11   , Fs1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Cs2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Fs2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Cs2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Fn0 , v127
        .byte   W12
        .byte                   Fn1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , As1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Fn2
        .byte   W06
@ 002   ----------------------------------------
mus_pkmn_bw12_152_8_2:
        .byte   W06
        .byte           PAN   , c_v-5
        .byte           N11   , As2 , v048
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Fn2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , En0 , v127
        .byte   W12
        .byte                   En1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , An1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , En2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , An2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , En2
        .byte   W06
        .byte   PEND
@ 003   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+2
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   An0 , v088
        .byte           N11   , Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , Gn1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Dn2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Gn2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Dn2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Gs0 , v088
        .byte           N11   , Cs1 , v048
        .byte   W06
@ 004   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+1
        .byte           N11   , Fs1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Cs2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Fs2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Cs2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Fn0 , v127
        .byte   W12
        .byte                   Cn1 , v088
        .byte           N11   , Fn1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , As1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Fn2
        .byte   W06
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_8_2
@ 006   ----------------------------------------
mus_pkmn_bw12_152_8_6:
        .byte   W06
        .byte           PAN   , c_v+2
        .byte           N11   , BnM1 , v127
        .byte   W12
        .byte                   Bn0 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , En1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Bn1
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , En2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Bn1
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , AsM1 , v127
        .byte   W12
        .byte                   As0 , v048
        .byte   W06
        .byte   PEND
@ 007   ----------------------------------------
mus_pkmn_bw12_152_8_7:
        .byte   W06
        .byte           PAN   , c_v+1
        .byte           N11   , Ds1 , v048
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , As1
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Ds2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , As1
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Dn0 , v127
        .byte   W12
        .byte                   Dn1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , Gn1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Dn2
        .byte   W06
        .byte   PEND
@ 008   ----------------------------------------
mus_pkmn_bw12_152_8_8:
        .byte   W06
        .byte           PAN   , c_v-5
        .byte           N11   , Gn2 , v048
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Dn2
        .byte   W12
        .byte           PAN   , c_v+2
        .byte           N11   , Cs0 , v127
        .byte   W12
        .byte                   Cs1 , v048
        .byte   W12
        .byte           PAN   , c_v+1
        .byte           N11   , Fs1
        .byte   W12
        .byte           PAN   , c_v-2
        .byte           N10   , Cs2
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N11   , Fs2
        .byte   W12
        .byte           PAN   , c_v-9
        .byte           N10   , Cs2
        .byte   W06
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_8_6
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_8_7
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_8_8
@ 012   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-1
        .byte   W90
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
        .byte   W48
        .byte   GOTO
         .word  mus_pkmn_bw12_152_8_LOOP
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_152_9:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_9_LOOP:
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 85
        .byte   W24
        .byte           N11   , Fn0 , v088
        .byte   W72
@ 001   ----------------------------------------
mus_pkmn_bw12_152_9_1:
        .byte   W12
        .byte           N11   , Fn0 , v088
        .byte   W60
        .byte                   Fn0
        .byte   W24
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_9_2:
        .byte   W60
        .byte           N11   , Fn0 , v088
        .byte   W24
        .byte                   Fn0
        .byte   W12
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_152_9_3:
        .byte   W24
        .byte           N11   , Fn0 , v088
        .byte   W72
        .byte   PEND
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_1
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_2
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_3
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_3
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_1
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_9_2
@ 012   ----------------------------------------
        .byte   W36
        .byte           N11   , Fn0 , v088
        .byte   W60
@ 013   ----------------------------------------
        .byte   W24
        .byte                   Fn0
        .byte   W12
        .byte                   Fn0
        .byte   W48
        .byte                   Fn0
        .byte   W12
@ 014   ----------------------------------------
        .byte   W60
        .byte                   Fn0
        .byte   W36
@ 015   ----------------------------------------
        .byte   W36
        .byte                   Fn0 , v116
        .byte   W60
@ 016   ----------------------------------------
        .byte                   Fn0
        .byte   W72
        .byte                   Fn0 , v088
        .byte   W24
@ 017   ----------------------------------------
        .byte                   Fn0
        .byte   W36
        .byte                   Fn0
        .byte   W36
        .byte                   Fn0
        .byte   W24
@ 018   ----------------------------------------
        .byte   W12
        .byte                   Fn0
        .byte   W48
        .byte                   Fn0
        .byte   W36
@ 019   ----------------------------------------
        .byte                   Fn0
        .byte   W24
        .byte                   Fn0
        .byte   W36
        .byte                   Fn0
        .byte   W36
@ 020   ----------------------------------------
        .byte                   Fn0
        .byte   W36
        .byte                   Fn0
        .byte   W48
        .byte                   Fn0
        .byte   W12
@ 021   ----------------------------------------
        .byte                   Fn0
        .byte   W24
        .byte           N05
        .byte   W06
        .byte                   Fn0
        .byte   W30
        .byte           N11
        .byte   W36
@ 022   ----------------------------------------
        .byte                   Fn0
        .byte   W24
        .byte                   Fn0
        .byte   W24
        .byte   GOTO
         .word  mus_pkmn_bw12_152_9_LOOP
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_152_10:
        .byte   KEYSH , mus_pkmn_bw12_152_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_152_10_LOOP:
        .byte           VOICE , 60
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 85
        .byte           N11   , Cn1 , v116
        .byte   W84
        .byte                   Cn1
        .byte   W12
@ 001   ----------------------------------------
mus_pkmn_bw12_152_10_1:
        .byte   W48
        .byte           N11   , Cn1 , v116
        .byte   W48
        .byte   PEND
@ 002   ----------------------------------------
mus_pkmn_bw12_152_10_2:
        .byte   W36
        .byte           N11   , Cn1 , v116
        .byte   W60
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_152_10_3:
        .byte           N11   , Cn1 , v116
        .byte   W84
        .byte                   Cn1
        .byte   W12
        .byte   PEND
@ 004   ----------------------------------------
        .byte   W36
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W48
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_2
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_3
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_2
@ 009   ----------------------------------------
        .byte           N11   , Cn1 , v116
        .byte   W60
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_1
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_152_10_2
@ 012   ----------------------------------------
        .byte           N11   , Cn1 , v116
        .byte   W12
        .byte                   Cn1
        .byte   W60
        .byte                   Cn1
        .byte   W24
@ 013   ----------------------------------------
        .byte                   Cn1
        .byte   W60
        .byte                   Cn1
        .byte   W36
@ 014   ----------------------------------------
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W48
@ 015   ----------------------------------------
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W48
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 016   ----------------------------------------
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
@ 017   ----------------------------------------
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Cn1
        .byte   W18
        .byte           N11
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
@ 018   ----------------------------------------
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Cn1
        .byte   W18
        .byte           N11
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 019   ----------------------------------------
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Cn1
        .byte   W18
        .byte           N11
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 020   ----------------------------------------
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Cn1
        .byte   W18
@ 021   ----------------------------------------
        .byte   W12
        .byte           N11
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 022   ----------------------------------------
        .byte   W12
        .byte                   Cn1
        .byte   W24
        .byte           N05
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte   GOTO
         .word  mus_pkmn_bw12_152_10_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_152:
        .byte   11                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_152_pri   @ Priority
        .byte   mus_pkmn_bw12_152_rev   @ Reverb

        .word   mus_pkmn_bw12_152_grp  

        .word   mus_pkmn_bw12_152_0
        .word   mus_pkmn_bw12_152_1
        .word   mus_pkmn_bw12_152_2
        .word   mus_pkmn_bw12_152_3
        .word   mus_pkmn_bw12_152_4
        .word   mus_pkmn_bw12_152_5
        .word   mus_pkmn_bw12_152_6
        .word   mus_pkmn_bw12_152_7
        .word   mus_pkmn_bw12_152_8
        .word   mus_pkmn_bw12_152_9
        .word   mus_pkmn_bw12_152_10

        .end
