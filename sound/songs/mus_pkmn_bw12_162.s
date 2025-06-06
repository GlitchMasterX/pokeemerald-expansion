        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_162_grp, voicegroup534
        .equ    mus_pkmn_bw12_162_pri, 0
        .equ    mus_pkmn_bw12_162_rev, 0
        .equ    mus_pkmn_bw12_162_key, 0

        .section .rodata
        .global mus_pkmn_bw12_162
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_162_0:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 194/2
        .byte           VOICE , 41
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 43
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
        .byte   W84
        .byte                   0
        .byte   W12
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte           N92   , Cn3 , v116
        .byte   W24
        .byte           VOL   , 2
        .byte   W06
        .byte                   7
        .byte   W06
        .byte                   14
        .byte   W06
        .byte                   21
        .byte   W06
        .byte                   30
        .byte   W06
        .byte                   40
        .byte   W06
        .byte                   51
        .byte   W06
        .byte                   64
        .byte   W06
        .byte                   72
        .byte   W06
        .byte                   75
        .byte   W18
@ 010   ----------------------------------------
mus_pkmn_bw12_162_0_LOOP:
        .byte           VOICE , 40
        .byte           N92   , Cn3 , v116
        .byte   W96
@ 011   ----------------------------------------
        .byte                   Cn3
        .byte   W92
        .byte   W03
        .byte           VOICE , 41
        .byte   W01
@ 012   ----------------------------------------
        .byte           N92
        .byte   W92
        .byte   W03
        .byte           VOICE , 40
        .byte   W01
@ 013   ----------------------------------------
        .byte           N92
        .byte   W96
@ 014   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 015   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 016   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 017   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 018   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 019   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 020   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 021   ----------------------------------------
mus_pkmn_bw12_162_0_21:
        .byte           VOICE , 41
        .byte           N92   , Cn3 , v116
        .byte   W96
        .byte   PEND
@ 022   ----------------------------------------
mus_pkmn_bw12_162_0_22:
        .byte           VOICE , 40
        .byte           N92   , Cn3 , v116
        .byte   W96
        .byte   PEND
@ 023   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 024   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 025   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 026   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 027   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 028   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 029   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 030   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 031   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 032   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_0_21
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_0_22
@ 035   ----------------------------------------
        .byte           N92   , Cn3 , v116
        .byte   W96
@ 036   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 037   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 038   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 039   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 040   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 041   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 042   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 044   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 045   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 046   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 047   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 048   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 049   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 050   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 051   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 052   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_0_21
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_0_22
@ 055   ----------------------------------------
        .byte           N92   , Cn3 , v116
        .byte   W96
@ 056   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 057   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 058   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 059   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 060   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 061   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 062   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_162_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_162_1:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 98
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 75
        .byte           PAN   , c_v+32
        .byte           N05   , Gn4 , v048
        .byte           N05   , Cn5 , v088
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Fs4 , v048
        .byte           N05   , Bn4 , v088
        .byte           N05   , Bn5
        .byte   W06
        .byte           PAN   , c_v+30
        .byte           N05   , Fn4 , v048
        .byte           N05   , As4 , v088
        .byte           N05   , As5
        .byte   W06
        .byte                   En4 , v048
        .byte           N05   , An4 , v088
        .byte           N05   , An5
        .byte   W06
        .byte           PAN   , c_v+28
        .byte           N05   , Ds4 , v048
        .byte           N05   , Gs4 , v088
        .byte           N05   , Gs5
        .byte   W06
        .byte                   Dn4 , v048
        .byte           N05   , Gn4 , v088
        .byte           N05   , Gn5
        .byte   W06
        .byte           PAN   , c_v+26
        .byte           N05   , Cs4 , v048
        .byte           N05   , Fs4 , v088
        .byte           N05   , Fs5
        .byte   W06
        .byte                   Cn4 , v048
        .byte           N05   , Fn4 , v088
        .byte           N05   , Fn5
        .byte   W06
        .byte           PAN   , c_v+22
        .byte           N05   , Ds4 , v048
        .byte           N05   , Gs4 , v088
        .byte           N05   , Gs5
        .byte   W06
        .byte                   Dn4 , v048
        .byte           N05   , Gn4 , v088
        .byte           N05   , Gn5
        .byte   W06
        .byte           PAN   , c_v+20
        .byte           N05   , Cs4 , v048
        .byte           N05   , Fs4 , v088
        .byte           N05   , Fs5
        .byte   W06
        .byte                   Cn4 , v048
        .byte           N05   , Fn4 , v088
        .byte           N05   , Fn5
        .byte   W06
        .byte           PAN   , c_v+18
        .byte           N05   , Bn3 , v048
        .byte           N05   , En4 , v088
        .byte           N05   , En5
        .byte   W06
        .byte                   As3 , v048
        .byte           N05   , Ds4 , v088
        .byte           N05   , Ds5
        .byte   W06
        .byte           PAN   , c_v+14
        .byte           N05   , An3 , v048
        .byte           N05   , Dn4 , v088
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Gs3 , v048
        .byte           N05   , Cs4 , v088
        .byte           N05   , Cs5
        .byte   W06
@ 001   ----------------------------------------
        .byte           PAN   , c_v+12
        .byte           N05   , Bn3 , v048
        .byte           N05   , En4 , v088
        .byte           N05   , En5
        .byte   W06
        .byte                   As3 , v048
        .byte           N05   , Ds4 , v088
        .byte           N05   , Ds5
        .byte   W06
        .byte           PAN   , c_v+11
        .byte           N05   , An3 , v048
        .byte           N05   , Dn4 , v088
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Gs3 , v048
        .byte           N05   , Cs4 , v088
        .byte           N05   , Cs5
        .byte   W06
        .byte           PAN   , c_v+7
        .byte           N05   , Gn3 , v048
        .byte           N05   , Cn4 , v088
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Fs3 , v048
        .byte           N05   , Bn3 , v088
        .byte           N05   , Bn4
        .byte   W06
        .byte           PAN   , c_v+5
        .byte           N05   , Fn3 , v048
        .byte           N05   , As3 , v088
        .byte           N05   , As4
        .byte   W06
        .byte                   En3 , v048
        .byte           N05   , An3 , v088
        .byte           N05   , An4
        .byte   W06
        .byte           PAN   , c_v+3
        .byte           N05   , Gn3 , v048
        .byte           N05   , Cn4 , v088
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Fs3 , v048
        .byte           N05   , Bn3 , v088
        .byte           N05   , Bn4
        .byte   W06
        .byte           PAN   , c_v-1
        .byte           N05   , Fn3 , v048
        .byte           N05   , As3 , v088
        .byte           N05   , As4
        .byte   W06
        .byte                   En3 , v048
        .byte           N05   , An3 , v088
        .byte           N05   , An4
        .byte   W06
        .byte           PAN   , c_v-3
        .byte           N05   , Fn3 , v048
        .byte           N05   , As3 , v088
        .byte           N05   , As4
        .byte   W06
        .byte                   En3 , v048
        .byte           N05   , An3 , v088
        .byte           N05   , An4
        .byte   W06
        .byte           PAN   , c_v-5
        .byte           N05   , Fn3 , v048
        .byte           N05   , As3 , v088
        .byte           N05   , As4
        .byte   W06
        .byte                   Fs3 , v048
        .byte           N05   , Bn3 , v088
        .byte           N05   , Bn4
        .byte   W06
@ 002   ----------------------------------------
        .byte           VOICE , 26
        .byte           PAN   , c_v+9
        .byte           N11   , Gn3 , v127
        .byte           N11   , Cn4
        .byte   W36
        .byte                   Gs3
        .byte           N11   , Cs4
        .byte   W36
        .byte                   Gn2
        .byte           N11   , Cn3
        .byte   W24
@ 003   ----------------------------------------
        .byte                   En3
        .byte           N11   , Gn3
        .byte   W36
        .byte                   Fn3
        .byte           N11   , Gs3
        .byte   W36
        .byte           N23   , As2
        .byte           N23   , Cs3
        .byte   W24
@ 004   ----------------------------------------
        .byte           N11   , Gn3
        .byte           N11   , Cn4
        .byte   W36
        .byte                   Gs3
        .byte           N11   , Cs4
        .byte   W36
        .byte                   Gn2
        .byte           N11   , Cn3
        .byte   W24
@ 005   ----------------------------------------
        .byte                   En3
        .byte           N11   , Gn3
        .byte   W36
        .byte                   Fn3
        .byte           N11   , Gs3
        .byte   W36
        .byte           N23
        .byte           N23   , Cs4
        .byte   W24
@ 006   ----------------------------------------
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v044
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v024
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gs4 , v127
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v044
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v024
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gn3 , v127
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Gn3 , v044
        .byte           N11   , Cn4
        .byte   W12
@ 007   ----------------------------------------
        .byte                   En4 , v127
        .byte           N11   , Gn4
        .byte   W12
        .byte                   En4 , v044
        .byte           N11   , Gn4
        .byte   W12
        .byte                   En4 , v024
        .byte           N11   , Gn4
        .byte   W12
        .byte                   Fn4 , v127
        .byte           N11   , Gs4
        .byte   W12
        .byte                   Fn4 , v044
        .byte           N11   , Gs4
        .byte   W12
        .byte                   Fn4 , v024
        .byte           N11   , Gs4
        .byte   W12
        .byte           N23   , Gn3 , v127
        .byte           N23   , Cs4
        .byte   W24
@ 008   ----------------------------------------
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v044
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v024
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gs4 , v127
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v044
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v024
        .byte           N11   , Cs5
        .byte   W12
        .byte           N23   , Cn4 , v127
        .byte           N23   , Gn4
        .byte   W24
@ 009   ----------------------------------------
        .byte           N11
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v044
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4 , v024
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gs4 , v127
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v044
        .byte           N11   , Cs5
        .byte   W12
        .byte                   Gs4 , v024
        .byte           N11   , Cs5
        .byte   W12
        .byte           N23   , Gs4 , v127
        .byte           N23   , Ds5
        .byte   W24
@ 010   ----------------------------------------
mus_pkmn_bw12_162_1_LOOP:
        .byte           VOICE , 95
        .byte           PAN   , c_v+5
        .byte           N44   , Gn2 , v036
        .byte           N44   , Cn4 , v127
        .byte   W48
        .byte                   Fn2 , v036
        .byte           N44   , As3 , v127
        .byte   W48
@ 011   ----------------------------------------
        .byte           N32   , Gn2 , v036
        .byte           N32   , Dn4 , v127
        .byte   W36
        .byte           N11   , Cn2 , v036
        .byte           N11   , Gn3 , v127
        .byte   W24
        .byte                   Cn2 , v036
        .byte           N11   , Gn3 , v127
        .byte   W12
        .byte                   Dn2 , v036
        .byte           N11   , As3 , v127
        .byte   W12
        .byte                   Fn2 , v036
        .byte           N11   , Dn4 , v127
        .byte   W12
@ 012   ----------------------------------------
        .byte           N68   , Gn2 , v036
        .byte           N68   , En4 , v127
        .byte   W72
        .byte           N11   , As2 , v036
        .byte           N11   , Dn4 , v127
        .byte   W12
        .byte                   An2 , v036
        .byte           N11   , En4 , v127
        .byte   W12
@ 013   ----------------------------------------
        .byte                   As2 , v036
        .byte           N11   , Fn4 , v127
        .byte   W12
        .byte                   Cn3 , v036
        .byte           N11   , En4 , v127
        .byte   W24
        .byte           N44   , Gn2 , v036
        .byte           N44   , Cn4 , v127
        .byte   W60
@ 014   ----------------------------------------
        .byte           VOICE , 11
        .byte           VOL   , 60
        .byte           N44   , Dn4 , v072
        .byte           N44   , As4 , v116
        .byte   W48
        .byte                   Cn4 , v072
        .byte           N44   , An4 , v116
        .byte   W48
@ 015   ----------------------------------------
        .byte           N23   , As3 , v072
        .byte           N23   , Gn4 , v116
        .byte   W24
        .byte                   Cn4 , v072
        .byte           N23   , An4 , v116
        .byte   W24
        .byte                   As3 , v072
        .byte           N23   , Gn4 , v116
        .byte   W24
        .byte                   An3 , v072
        .byte           N23   , Fn4 , v116
        .byte   W24
@ 016   ----------------------------------------
        .byte           N68   , Gn3 , v072
        .byte           N68   , En4 , v116
        .byte   W72
        .byte           N23   , En3 , v072
        .byte           N23   , Cn4 , v116
        .byte   W24
@ 017   ----------------------------------------
        .byte           N80   , Cn4 , v072
        .byte           N80   , Gn4 , v116
        .byte   W96
@ 018   ----------------------------------------
        .byte           VOICE , 35
        .byte           VOL   , 75
        .byte           N44   , Fn4 , v127
        .byte           N44   , As4
        .byte   W48
        .byte                   En4
        .byte           N44   , An4
        .byte   W48
@ 019   ----------------------------------------
mus_pkmn_bw12_162_1_19:
        .byte           N23   , Fn4 , v127
        .byte           N23   , As4
        .byte   W24
        .byte                   En4
        .byte           N23   , An4
        .byte   W24
        .byte                   An4
        .byte           N23   , Dn5
        .byte   W24
        .byte                   Dn5
        .byte           N23   , Fn5
        .byte   W24
        .byte   PEND
@ 020   ----------------------------------------
        .byte           N68   , Cn5
        .byte           N68   , En5
        .byte   W72
        .byte           N23   , An4
        .byte           N23   , Dn5
        .byte   W24
@ 021   ----------------------------------------
        .byte           N88   , Gn4
        .byte           N88   , Cn5
        .byte   W96
@ 022   ----------------------------------------
        .byte           VOICE , 95
        .byte           N44   , Cn4
        .byte   W48
        .byte                   As3
        .byte   W48
@ 023   ----------------------------------------
        .byte           N32   , Dn4
        .byte   W36
        .byte           N11   , Gn3
        .byte   W24
        .byte                   Gn3
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte                   Dn4
        .byte   W12
@ 024   ----------------------------------------
        .byte           N68   , En4
        .byte   W72
        .byte           N11   , Dn4
        .byte   W12
        .byte                   En4
        .byte   W12
@ 025   ----------------------------------------
        .byte                   Fn4
        .byte   W12
        .byte                   En4
        .byte   W24
        .byte           N44   , Cn4
        .byte   W60
@ 026   ----------------------------------------
        .byte           VOICE , 11
        .byte           N44   , Dn4 , v048
        .byte           N44   , As4 , v088
        .byte   W48
        .byte                   Cn4 , v048
        .byte           N44   , An4 , v088
        .byte   W48
@ 027   ----------------------------------------
        .byte           N23   , As3 , v048
        .byte           N23   , Gn4 , v088
        .byte   W24
        .byte                   Cn4 , v048
        .byte           N23   , An4 , v088
        .byte   W24
        .byte                   As3 , v048
        .byte           N23   , Gn4 , v088
        .byte   W24
        .byte                   An3 , v048
        .byte           N23   , Fn4 , v088
        .byte   W24
@ 028   ----------------------------------------
        .byte           N68   , Gn3 , v048
        .byte           N68   , En4 , v088
        .byte   W72
        .byte           N23   , En3 , v048
        .byte           N23   , Cn4 , v088
        .byte   W24
@ 029   ----------------------------------------
        .byte           N56   , Cn4 , v048
        .byte           N68   , Gn4 , v088
        .byte   W60
        .byte           N11   , Cn4 , v072
        .byte   W12
        .byte                   Gn4 , v068
        .byte           N11   , Cn5
        .byte   W24
@ 030   ----------------------------------------
        .byte           VOICE , 35
        .byte           N44   , Fn4 , v127
        .byte           N44   , As4
        .byte   W48
        .byte                   En4
        .byte           N44   , An4
        .byte   W48
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_1_19
@ 032   ----------------------------------------
        .byte           N68   , Cn5 , v127
        .byte           N68   , En5
        .byte   W72
        .byte           N23   , En4
        .byte           N23   , Cn5
        .byte   W24
@ 033   ----------------------------------------
        .byte           N80
        .byte           N80   , Gn5
        .byte   W96
@ 034   ----------------------------------------
        .byte           VOICE , 17
        .byte           N32   , Cn3 , v100
        .byte           N32   , Gn3 , v127
        .byte   W36
        .byte                   As2 , v100
        .byte           N32   , Fn3 , v127
        .byte   W36
        .byte           N23   , Cn3 , v100
        .byte           N23   , Gn3 , v127
        .byte   W24
@ 035   ----------------------------------------
        .byte           N32   , Dn3 , v100
        .byte           N32   , An3 , v127
        .byte   W36
        .byte                   As2 , v100
        .byte           N32   , Fn3 , v127
        .byte   W36
        .byte           N23   , Dn3 , v100
        .byte           N23   , An3 , v127
        .byte   W24
@ 036   ----------------------------------------
        .byte           TIE   , Cn3 , v100
        .byte           TIE   , Gn3 , v127
        .byte   W72
        .byte           MOD   , 10
        .byte   W06
        .byte                   18
        .byte   W06
        .byte                   29
        .byte   W06
        .byte                   39
        .byte   W06
@ 037   ----------------------------------------
        .byte                   56
        .byte   W68
        .byte   W03
        .byte           EOT   , Cn3
        .byte                   Gn3
        .byte   W24
        .byte   W01
@ 038   ----------------------------------------
        .byte   W18
        .byte           MOD   , 12
        .byte   W06
        .byte                   0
        .byte   W72
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte   W72
        .byte           N11   , Cn4 , v100
        .byte           N11   , Gn4 , v088
        .byte   W12
        .byte                   As3 , v100
        .byte           N11   , Fn4 , v088
        .byte   W12
@ 042   ----------------------------------------
        .byte           N92   , Cs4 , v100
        .byte           N92   , Gs4 , v088
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Ds4 , v100
        .byte           N92   , As4 , v088
        .byte   W96
@ 044   ----------------------------------------
        .byte           N88   , Cn4 , v100
        .byte           N88   , Gn4 , v088
        .byte   W96
@ 045   ----------------------------------------
        .byte           VOICE , 95
        .byte           N68   , Cn4 , v116
        .byte   W72
        .byte           N11   , Cn4 , v127
        .byte   W12
        .byte                   As3
        .byte   W12
@ 046   ----------------------------------------
        .byte           N92   , Cs4
        .byte   W96
@ 047   ----------------------------------------
        .byte                   Ds4
        .byte   W96
@ 048   ----------------------------------------
        .byte           TIE   , Fn4
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
        .byte   W92
        .byte           EOT
        .byte   W04
@ 054   ----------------------------------------
        .byte           VOICE , 11
        .byte           N92   , Cn3
        .byte   W96
@ 055   ----------------------------------------
        .byte           N40   , As2
        .byte   W42
        .byte           N05   , Cn3
        .byte   W06
        .byte           N44   , Dn3
        .byte   W48
@ 056   ----------------------------------------
        .byte           N92   , Gn2
        .byte   W96
@ 057   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 058   ----------------------------------------
        .byte                   Cs3
        .byte   W96
@ 059   ----------------------------------------
        .byte           N44   , As2
        .byte   W48
        .byte           N32   , Cs3
        .byte   W36
        .byte           N11   , En3
        .byte   W12
@ 060   ----------------------------------------
        .byte           N92   , Cn3
        .byte   W96
@ 061   ----------------------------------------
        .byte                   En3
        .byte   W96
@ 062   ----------------------------------------
        .byte           VOICE , 95
        .byte   GOTO
         .word  mus_pkmn_bw12_162_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_162_2:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 32
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+43
        .byte           VOL   , 50
        .byte           N05   , Gn2 , v116
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Gn4
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Gn4
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Gn4
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Gn4
        .byte   W12
@ 001   ----------------------------------------
        .byte                   Fn2
        .byte           N05   , Fn3
        .byte   W06
        .byte                   As2
        .byte           N05   , As3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Fn2
        .byte           N05   , Fn3
        .byte   W06
        .byte                   As2
        .byte           N05   , As3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Fn2
        .byte           N05   , Fn3
        .byte   W06
        .byte                   As2
        .byte           N05   , As3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W18
        .byte                   Fn3
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Fs3
        .byte           N05   , Fs4
        .byte   W06
@ 002   ----------------------------------------
mus_pkmn_bw12_162_2_2:
        .byte           N44   , Gn3 , v048
        .byte           N44   , Cn4 , v088
        .byte   W48
        .byte                   Gn2 , v048
        .byte           N44   , Cn3 , v088
        .byte   W48
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_162_2_3:
        .byte           N44   , Cn3 , v048
        .byte           N44   , Gn3 , v088
        .byte   W48
        .byte                   Gn2 , v048
        .byte           N44   , Cs3 , v088
        .byte   W48
        .byte   PEND
@ 004   ----------------------------------------
        .byte                   Gn3 , v048
        .byte           N44   , Cn4 , v088
        .byte   W48
        .byte                   Cn4 , v048
        .byte           N44   , Gn4 , v088
        .byte   W48
@ 005   ----------------------------------------
        .byte                   Gn4 , v048
        .byte           N44   , Cn5 , v088
        .byte   W48
        .byte                   Gn3 , v048
        .byte           N44   , Cs4 , v088
        .byte   W44
        .byte   W02
        .byte           PAN   , c_v+0
        .byte   W02
@ 006   ----------------------------------------
        .byte                   c_v-57
        .byte           N44   , Gn3 , v048
        .byte           N44   , Cn4 , v088
        .byte   W48
        .byte                   Gn2 , v048
        .byte           N44   , Cn3 , v088
        .byte   W48
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_2_3
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_2_2
@ 009   ----------------------------------------
        .byte           N44   , Gn3 , v048
        .byte           N44   , Cs4 , v088
        .byte   W48
        .byte           N23   , Gn2 , v048
        .byte           N23   , Ds3 , v088
        .byte   W24
        .byte                   Gn3 , v048
        .byte           N23   , Cs4 , v088
        .byte   W24
@ 010   ----------------------------------------
mus_pkmn_bw12_162_2_LOOP:
        .byte           VOL   , 70
        .byte           PAN   , c_v-37
        .byte           N44   , Gn3 , v100
        .byte   W48
        .byte           N40   , Fn3
        .byte   W42
        .byte           N05   , Gs3
        .byte   W06
@ 011   ----------------------------------------
        .byte           N32   , Gn3
        .byte   W36
        .byte           N11   , Cn3
        .byte   W24
        .byte                   Cn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 012   ----------------------------------------
        .byte           N32   , Gn3
        .byte   W36
        .byte                   Cn4
        .byte   W36
        .byte           N11   , As3
        .byte   W12
        .byte                   An3
        .byte   W12
@ 013   ----------------------------------------
        .byte                   As3
        .byte   W12
        .byte                   Cn4
        .byte   W24
        .byte           N56   , Gn3
        .byte   W60
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W96
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
mus_pkmn_bw12_162_2_18:
        .byte           N44   , Dn4 , v088
        .byte   W48
        .byte                   Cn4
        .byte   W48
        .byte   PEND
@ 019   ----------------------------------------
mus_pkmn_bw12_162_2_19:
        .byte           N44   , As3 , v088
        .byte   W48
        .byte                   Dn4
        .byte   W48
        .byte   PEND
@ 020   ----------------------------------------
        .byte           N68   , En4
        .byte   W72
        .byte           N23   , Dn4
        .byte   W24
@ 021   ----------------------------------------
        .byte           N88   , Cn4
        .byte   W96
@ 022   ----------------------------------------
        .byte           N32   , Cn3
        .byte   W36
        .byte                   Fn3
        .byte   W36
        .byte           N23   , En3
        .byte   W24
@ 023   ----------------------------------------
        .byte           N32   , Fn3
        .byte   W36
        .byte           N11   , Cn3
        .byte   W24
        .byte                   Cn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 024   ----------------------------------------
        .byte           N32   , Gn3
        .byte   W36
        .byte                   Cn3
        .byte   W36
        .byte           N11   , As3
        .byte   W12
        .byte                   An3
        .byte   W12
@ 025   ----------------------------------------
        .byte                   As3
        .byte   W12
        .byte                   Cn4
        .byte   W24
        .byte           N56   , Gn3
        .byte   W60
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_2_18
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_2_19
@ 032   ----------------------------------------
        .byte           N68   , En4 , v088
        .byte   W72
        .byte           N23   , Cn4
        .byte   W24
@ 033   ----------------------------------------
        .byte           N88   , Gn4
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
        .byte   W90
        .byte           PAN   , c_v+49
        .byte   W06
@ 040   ----------------------------------------
        .byte           TIE   , Cn3 , v127
        .byte   W96
@ 041   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W01
        .byte           N11
        .byte   W12
        .byte                   As2
        .byte   W12
@ 042   ----------------------------------------
        .byte           N92   , Cs3
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Ds3
        .byte   W96
@ 044   ----------------------------------------
        .byte           TIE   , Cn3
        .byte   W96
@ 045   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W01
        .byte           N11   , Cn3 , v088
        .byte   W12
        .byte                   As2
        .byte   W12
@ 046   ----------------------------------------
        .byte           N92   , Cs3
        .byte   W96
@ 047   ----------------------------------------
        .byte                   Ds3
        .byte   W96
@ 048   ----------------------------------------
        .byte           TIE   , As2
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
        .byte   W92
        .byte   W03
        .byte           EOT
        .byte   W01
@ 054   ----------------------------------------
        .byte           VOICE , 11
        .byte           N92   , Gn2
        .byte   W96
@ 055   ----------------------------------------
        .byte           N44   , Fn2
        .byte   W48
        .byte                   Gn2
        .byte   W48
@ 056   ----------------------------------------
        .byte           N92   , Cn2 , v104
        .byte   W96
@ 057   ----------------------------------------
        .byte                   Gn2 , v088
        .byte   W96
@ 058   ----------------------------------------
        .byte                   Gs2
        .byte   W96
@ 059   ----------------------------------------
        .byte           N44   , Fn2
        .byte   W48
        .byte                   Gs2
        .byte   W48
@ 060   ----------------------------------------
        .byte           N92   , Gn2
        .byte   W96
@ 061   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 062   ----------------------------------------
        .byte           VOICE , 32
        .byte           PAN   , c_v-37
        .byte   GOTO
         .word  mus_pkmn_bw12_162_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_162_3:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 22
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 71
        .byte           PAN   , c_v-14
        .byte           MOD   , 8
        .byte           N23   , Cn2 , v127
        .byte   W24
        .byte                   Cn1
        .byte   W24
        .byte                   As1
        .byte   W24
        .byte                   Cs1
        .byte   W24
@ 001   ----------------------------------------
        .byte                   Gs1
        .byte   W24
        .byte           N11   , As1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Cs1
        .byte   W12
@ 002   ----------------------------------------
mus_pkmn_bw12_162_3_2:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_162_3_3:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte   PEND
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_2
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_3
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_2
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_3
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_3
@ 010   ----------------------------------------
mus_pkmn_bw12_162_3_LOOP:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
@ 011   ----------------------------------------
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
@ 012   ----------------------------------------
        .byte                   Cn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 013   ----------------------------------------
        .byte                   Cn2
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 014   ----------------------------------------
mus_pkmn_bw12_162_3_14:
        .byte           N11   , As0 , v127
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte   PEND
@ 015   ----------------------------------------
mus_pkmn_bw12_162_3_15:
        .byte           N11   , As0 , v127
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte   PEND
@ 016   ----------------------------------------
mus_pkmn_bw12_162_3_16:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte   PEND
@ 017   ----------------------------------------
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Gn1
        .byte   W12
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 021   ----------------------------------------
mus_pkmn_bw12_162_3_21:
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte   PEND
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 025   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W24
        .byte                   Gn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_15
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 029   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Cn1
        .byte   W12
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 033   ----------------------------------------
        .byte           N11   , Cn1 , v127
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   En1
        .byte   W12
        .byte                   Gn1
        .byte   W12
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 037   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 038   ----------------------------------------
mus_pkmn_bw12_162_3_38:
        .byte           N11   , Cs1 , v127
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte   PEND
@ 039   ----------------------------------------
mus_pkmn_bw12_162_3_39:
        .byte           N11   , Ds1 , v127
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte   PEND
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_38
@ 043   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_39
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 046   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_38
@ 047   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_39
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 057   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 058   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 059   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_14
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_16
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_3_21
@ 062   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_162_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_162_4:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 75
        .byte           PAN   , c_v-28
        .byte   W12
        .byte                   c_v-26
        .byte   W12
        .byte                   c_v-22
        .byte           N05   , Gn2 , v127
        .byte           N05   , Gn3 , v056
        .byte   W06
        .byte                   Gs2 , v127
        .byte           N05   , Gs3 , v056
        .byte   W06
        .byte           PAN   , c_v-20
        .byte           N05   , An2 , v127
        .byte           N05   , An3 , v056
        .byte   W06
        .byte                   As2 , v127
        .byte           N05   , As3 , v056
        .byte   W06
        .byte           PAN   , c_v-16
        .byte           N05   , Bn2 , v127
        .byte           N05   , Bn3 , v056
        .byte   W06
        .byte                   Cn3 , v127
        .byte           N05   , Cn4 , v056
        .byte   W06
        .byte           PAN   , c_v-14
        .byte           N05   , Cs3 , v127
        .byte           N05   , Cs4 , v056
        .byte   W06
        .byte                   Dn3 , v127
        .byte           N05   , Dn4 , v056
        .byte   W06
        .byte           PAN   , c_v-11
        .byte           N05   , Cn2 , v127
        .byte           N05   , Cn3 , v056
        .byte   W06
        .byte                   Cs2 , v127
        .byte           N05   , Cs3 , v056
        .byte   W06
        .byte           PAN   , c_v-9
        .byte           N05   , Dn2 , v127
        .byte           N05   , Dn3 , v056
        .byte   W06
        .byte                   Ds2 , v127
        .byte           N05   , Ds3 , v056
        .byte   W06
@ 001   ----------------------------------------
        .byte           PAN   , c_v-5
        .byte           N05   , En2 , v127
        .byte           N05   , En3 , v056
        .byte   W06
        .byte                   Fn2 , v127
        .byte           N05   , Fn3 , v056
        .byte   W06
        .byte           PAN   , c_v-1
        .byte           N05   , Fs2 , v127
        .byte           N05   , Fs3 , v056
        .byte   W06
        .byte                   Gn2 , v127
        .byte           N05   , Gn3 , v056
        .byte   W06
        .byte           PAN   , c_v+0
        .byte           N05   , Gs2 , v127
        .byte           N05   , Gs3 , v056
        .byte   W06
        .byte                   An2 , v127
        .byte           N05   , An3 , v056
        .byte   W06
        .byte           PAN   , c_v+5
        .byte           N05   , As2 , v127
        .byte           N05   , As3 , v056
        .byte   W06
        .byte                   Bn2 , v127
        .byte           N05   , Bn3 , v056
        .byte   W06
        .byte           PAN   , c_v+7
        .byte           N05   , Cn3 , v127
        .byte           N05   , Cn4 , v056
        .byte   W06
        .byte                   Cs3 , v127
        .byte           N05   , Cs4 , v056
        .byte   W06
        .byte           PAN   , c_v+11
        .byte           N05   , Dn3 , v127
        .byte           N05   , Dn4 , v056
        .byte   W06
        .byte                   Ds3 , v127
        .byte           N05   , Ds4 , v056
        .byte   W06
        .byte           PAN   , c_v+12
        .byte           N05   , En3 , v127
        .byte           N05   , En4 , v056
        .byte   W06
        .byte                   Fn3 , v127
        .byte           N05   , Fn4 , v056
        .byte   W06
        .byte           PAN   , c_v+16
        .byte           N05   , Fs3 , v127
        .byte           N05   , Fs4 , v056
        .byte   W06
        .byte                   Gn3 , v127
        .byte           N05   , Gn4 , v056
        .byte   W05
        .byte           VOICE , 98
        .byte   W01
@ 002   ----------------------------------------
        .byte           PAN   , c_v-56
        .byte           N11   , Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
@ 003   ----------------------------------------
        .byte                   Gn2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2
        .byte   W12
@ 004   ----------------------------------------
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
@ 005   ----------------------------------------
        .byte                   Cn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Cs3
        .byte   W12
@ 006   ----------------------------------------
        .byte           VOICE , 26
        .byte           N11   , Gn3 , v088
        .byte   W36
        .byte                   Gs3
        .byte   W36
        .byte                   Gn2
        .byte   W24
@ 007   ----------------------------------------
        .byte                   En3
        .byte   W36
        .byte                   Fn3
        .byte   W36
        .byte                   Gn2
        .byte   W24
@ 008   ----------------------------------------
        .byte                   Gn3
        .byte   W36
        .byte                   Gs3
        .byte   W36
        .byte           N23   , Gn3
        .byte   W24
@ 009   ----------------------------------------
        .byte           N11
        .byte   W36
        .byte                   Gs3
        .byte   W36
        .byte           N23   , Ds3
        .byte   W24
@ 010   ----------------------------------------
mus_pkmn_bw12_162_4_LOOP:
        .byte           VOICE , 95
        .byte           PAN   , c_v-64
        .byte           N44   , Cn4 , v052
        .byte   W48
        .byte                   As3
        .byte   W48
@ 011   ----------------------------------------
mus_pkmn_bw12_162_4_11:
        .byte           N32   , Dn4 , v052
        .byte   W36
        .byte           N11   , Gn3
        .byte   W24
        .byte                   Gn3
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte   PEND
@ 012   ----------------------------------------
mus_pkmn_bw12_162_4_12:
        .byte           N68   , En4 , v052
        .byte   W72
        .byte           N11   , Dn4
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
        .byte                   Fn4
        .byte   W12
        .byte                   En4
        .byte   W24
        .byte           N44   , Gn3
        .byte   W54
        .byte           VOICE , 1
        .byte   W06
@ 014   ----------------------------------------
        .byte           N44   , Fn4 , v088
        .byte           N44   , As4
        .byte   W48
        .byte                   En4
        .byte           N44   , An4
        .byte   W48
@ 015   ----------------------------------------
mus_pkmn_bw12_162_4_15:
        .byte           N23   , Dn4 , v088
        .byte           N23   , Gn4
        .byte   W24
        .byte                   En4
        .byte           N23   , An4
        .byte   W24
        .byte                   Dn4
        .byte           N23   , Gn4
        .byte   W24
        .byte                   Cn4
        .byte           N23   , Fn4
        .byte   W24
        .byte   PEND
@ 016   ----------------------------------------
        .byte           N32   , Cn4
        .byte           N32   , En4
        .byte   W36
        .byte           N23   , Dn4
        .byte           N23   , Fn4
        .byte   W24
        .byte           N44   , Cn4
        .byte           N44   , En4
        .byte   W36
@ 017   ----------------------------------------
        .byte   W12
        .byte           N23   , En3 , v100
        .byte           N23   , Cn4 , v088
        .byte   W24
        .byte           N11   , Gn3 , v100
        .byte           N11   , Cn4 , v088
        .byte   W12
        .byte                   An3
        .byte           N11   , Dn4
        .byte   W12
        .byte           N32   , En3 , v100
        .byte           N32   , Cn4 , v088
        .byte   W36
@ 018   ----------------------------------------
mus_pkmn_bw12_162_4_18:
        .byte           VOICE , 35
        .byte           N44   , As4 , v088
        .byte   W48
        .byte                   An4
        .byte   W48
        .byte   PEND
@ 019   ----------------------------------------
mus_pkmn_bw12_162_4_19:
        .byte           N23   , As4 , v088
        .byte   W24
        .byte                   An4
        .byte   W24
        .byte                   Dn5
        .byte   W24
        .byte                   Fn5
        .byte   W24
        .byte   PEND
@ 020   ----------------------------------------
        .byte           N68   , En5
        .byte   W72
        .byte           N23   , Dn5
        .byte   W24
@ 021   ----------------------------------------
        .byte           N88   , Cn5
        .byte   W96
@ 022   ----------------------------------------
        .byte           VOICE , 95
        .byte           PAN   , c_v+41
        .byte           N44   , Cn4 , v052
        .byte   W48
        .byte                   As3
        .byte   W48
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_4_11
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_4_12
@ 025   ----------------------------------------
        .byte           N11   , Fn4 , v052
        .byte   W12
        .byte                   En4
        .byte   W24
        .byte           N44   , Gn3
        .byte   W54
        .byte           PAN   , c_v-64
        .byte   W06
@ 026   ----------------------------------------
        .byte           N44   , Dn3 , v080
        .byte   W48
        .byte                   Cn3
        .byte   W48
@ 027   ----------------------------------------
        .byte           N23   , As2
        .byte   W24
        .byte                   Cn3
        .byte   W24
        .byte                   As2
        .byte   W24
        .byte                   An2
        .byte   W24
@ 028   ----------------------------------------
        .byte           N68   , Gn2
        .byte   W72
        .byte           N23   , En2
        .byte   W24
@ 029   ----------------------------------------
        .byte           N56   , Cn3
        .byte   W96
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_4_18
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_4_19
@ 032   ----------------------------------------
        .byte           N68   , En5 , v088
        .byte   W72
        .byte           N23   , Cn5
        .byte   W24
@ 033   ----------------------------------------
        .byte           N80   , En5
        .byte   W96
@ 034   ----------------------------------------
        .byte   W96
@ 035   ----------------------------------------
        .byte   W96
@ 036   ----------------------------------------
        .byte   W90
        .byte           VOICE , 95
        .byte   W06
@ 037   ----------------------------------------
        .byte           VOL   , 61
        .byte           PAN   , c_v+45
        .byte   W48
        .byte           N02   , En3
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte                   En3
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , Gn3
        .byte           N11   , Cn4
        .byte   W12
        .byte           N02   , En3
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte                   En3
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , Gn3
        .byte           N11   , Cn4
        .byte   W12
@ 038   ----------------------------------------
        .byte           N02   , Fn3
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W06
        .byte                   Fn3
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W06
        .byte           N11   , Fn3
        .byte           N11   , Gs3
        .byte           N11   , Cs4
        .byte   W12
        .byte           N02   , Fn3
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W06
        .byte                   Fn3
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W06
        .byte           N11   , Fn3
        .byte           N11   , Gs3
        .byte           N11   , Cs4
        .byte   W12
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte           N02   , Fn4
        .byte   W06
        .byte                   Gs3
        .byte           N02   , Cs4
        .byte           N02   , Fn4
        .byte   W06
        .byte           N11   , Gs3
        .byte           N11   , Cs4
        .byte           N11   , Fn4
        .byte   W12
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte           N02   , Fn4
        .byte   W06
        .byte                   Gs3
        .byte           N02   , Cs4
        .byte           N02   , Fn4
        .byte   W06
        .byte           N11   , Gs3
        .byte           N11   , Cs4
        .byte           N11   , Fn4
        .byte   W12
@ 039   ----------------------------------------
        .byte           N02   , Gn3
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte   W06
        .byte                   Gn3
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte   W06
        .byte           N11   , Gn3
        .byte           N11   , As3
        .byte           N11   , Ds4
        .byte   W12
        .byte           N02   , Gn3
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte   W06
        .byte                   Gn3
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte   W06
        .byte           N11   , Gn3
        .byte           N11   , As3
        .byte           N11   , Ds4
        .byte   W12
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte           N02   , Gn4
        .byte   W06
        .byte                   As3
        .byte           N02   , Ds4
        .byte           N02   , Gn4
        .byte   W06
        .byte           N11   , As3
        .byte           N11   , Ds4
        .byte           N11   , Gn4
        .byte   W12
        .byte           N02   , As3
        .byte           N02   , Ds4
        .byte           N02   , Gn4
        .byte   W06
        .byte                   As3
        .byte           N02   , Ds4
        .byte           N02   , Gn4
        .byte   W06
        .byte           N11   , As3
        .byte           N11   , Ds4
        .byte           N11   , Gn4
        .byte   W12
@ 040   ----------------------------------------
        .byte           N02   , En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte                   En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte           N11   , En4
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte   W12
        .byte           N02   , En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte                   En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte           N11   , En4
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte   W12
        .byte           N02   , En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte                   En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte           N11   , En4
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte   W12
        .byte           N02   , En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte                   En4
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte   W06
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte           N11   , En5
        .byte   W12
@ 041   ----------------------------------------
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte   W06
        .byte                   Gn4
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte   W06
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte           N11   , En5
        .byte   W12
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte   W06
        .byte                   Gn4
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte   W06
        .byte           N11   , Gn4
        .byte           N11   , Cn5
        .byte           N11   , En5
        .byte   W12
        .byte           N02   , Gn4
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte   W06
        .byte                   Cn5
        .byte           N02   , En5
        .byte           N02   , Gn5
        .byte   W06
        .byte           N11   , Cn5
        .byte           N11   , En5
        .byte           N11   , Gn5
        .byte   W12
        .byte           N02   , Cn5
        .byte           N02   , En5
        .byte           N02   , Gn5
        .byte   W06
        .byte                   Cn5
        .byte           N02   , En5
        .byte           N02   , Gn5
        .byte   W06
        .byte           N11   , Cn5
        .byte           N11   , En5
        .byte           N11   , Gn5
        .byte   W12
@ 042   ----------------------------------------
        .byte           VOL   , 71
        .byte   W06
        .byte           PAN   , c_v+18
        .byte   W18
        .byte           N05   , Fn3 , v060
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Fn3 , v084
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Fn3 , v060
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Fn3 , v127
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Fn3 , v060
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Fn3 , v084
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W12
@ 043   ----------------------------------------
        .byte   W24
        .byte                   Gn3 , v060
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Gn3 , v084
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Gn3 , v060
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Gn3 , v127
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Gn3 , v060
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Gn3 , v084
        .byte           N05   , As3
        .byte           N05   , Ds4
        .byte   W12
@ 044   ----------------------------------------
        .byte                   Cn6 , v116
        .byte           N05   , Dn6
        .byte   W08
        .byte                   Gn5
        .byte           N05   , Cn6
        .byte   W08
        .byte                   Fn5
        .byte           N05   , Gn5
        .byte   W08
        .byte                   Cn5
        .byte           N05   , Fn5
        .byte   W08
        .byte                   Gn4
        .byte           N05   , Cn5
        .byte   W08
        .byte                   Dn4
        .byte           N05   , Gn4
        .byte   W08
        .byte                   Cn5
        .byte           N05   , Dn5
        .byte   W08
        .byte                   Gn4
        .byte           N05   , Cn5
        .byte   W08
        .byte                   Fn4
        .byte           N05   , Gn4
        .byte   W08
        .byte                   Cn4
        .byte           N05   , Fn4
        .byte   W08
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Cn3
        .byte           N05   , Gn3
        .byte   W08
@ 045   ----------------------------------------
        .byte                   Dn5
        .byte           N05   , Gn5
        .byte   W08
        .byte                   Cn5
        .byte           N05   , Dn5
        .byte   W08
        .byte                   Gn4
        .byte           N05   , Cn5
        .byte   W08
        .byte                   Dn4
        .byte           N05   , Gn4
        .byte   W08
        .byte                   Cn4
        .byte           N05   , Dn4
        .byte   W08
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Dn4
        .byte           N05   , Gn4
        .byte   W08
        .byte                   Cn4
        .byte           N05   , Dn4
        .byte   W08
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W08
        .byte                   Cn3
        .byte           N05   , Gn3
        .byte   W08
        .byte                   As2
        .byte           N05   , Cn3
        .byte   W08
        .byte                   Fn2
        .byte           N05   , As2
        .byte   W08
@ 046   ----------------------------------------
        .byte   W04
        .byte           VOICE , 1
        .byte   W08
        .byte           PAN   , c_v-64
        .byte   W12
        .byte           N32   , Gs2 , v088
        .byte           N32   , Cs3
        .byte           N32   , Fn3
        .byte   W36
        .byte                   Fn4
        .byte           N32   , Gs4
        .byte           N32   , Cs5
        .byte   W36
@ 047   ----------------------------------------
        .byte           N11   , Fn4
        .byte           N11   , Gs4
        .byte           N11   , Cs5
        .byte   W12
        .byte           N23   , Gn4
        .byte           N23   , As4
        .byte           N23   , Ds5
        .byte   W24
        .byte                   Gn4
        .byte           N23   , As4
        .byte           N23   , Ds5
        .byte   W24
        .byte           N11   , As4
        .byte           N11   , Ds5
        .byte           N11   , Gn5
        .byte   W12
        .byte                   As4
        .byte           N11   , Ds5
        .byte           N11   , Gn5
        .byte   W12
        .byte                   Ds5
        .byte           N11   , Gn5
        .byte           N11   , As5
        .byte   W12
@ 048   ----------------------------------------
        .byte           N32   , Dn5
        .byte           N32   , Fn5
        .byte           N32   , As5
        .byte   W36
        .byte           N11   , Dn5
        .byte           N11   , Fn5
        .byte           N11   , As5
        .byte   W12
        .byte           N05   , En5 , v048
        .byte   W06
        .byte                   Dn5
        .byte           N05   , En5 , v028
        .byte   W06
        .byte                   Cn5 , v048
        .byte           N05   , Dn5 , v028
        .byte   W06
        .byte                   An4 , v048
        .byte           N05   , Cn5 , v028
        .byte   W06
        .byte                   Gn4 , v048
        .byte           N05   , An4 , v028
        .byte   W06
        .byte                   Fn4 , v048
        .byte           N05   , Gn4 , v028
        .byte   W06
        .byte                   Ds4 , v048
        .byte           N05   , Fn4 , v028
        .byte   W06
        .byte                   Cn4 , v048
        .byte           N05   , Ds4 , v028
        .byte   W06
@ 049   ----------------------------------------
        .byte                   Bn3 , v048
        .byte           N05   , Cn4 , v028
        .byte   W06
        .byte                   Gs3 , v048
        .byte           N05   , Bn3 , v028
        .byte   W06
        .byte                   Fs3 , v048
        .byte           N05   , Gs3 , v028
        .byte   W06
        .byte                   Fs3
        .byte   W72
        .byte           VOL   , 75
        .byte   W06
@ 050   ----------------------------------------
        .byte           N08   , Ds5 , v060
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte                   Ds5
        .byte   W12
@ 051   ----------------------------------------
        .byte                   Dn5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte                   Dn5
        .byte   W12
@ 052   ----------------------------------------
        .byte                   Cn5
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte                   Cn5
        .byte   W12
@ 053   ----------------------------------------
        .byte                   As4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   As4
        .byte   W12
@ 054   ----------------------------------------
        .byte           VOICE , 98
        .byte           N92   , Cn3 , v088
        .byte   W96
@ 055   ----------------------------------------
        .byte           N40   , As2
        .byte   W42
        .byte           N05   , Cn3
        .byte   W06
        .byte           N44   , Dn3
        .byte   W48
@ 056   ----------------------------------------
        .byte           N92   , Gn2
        .byte   W96
@ 057   ----------------------------------------
        .byte                   Cn3
        .byte   W96
@ 058   ----------------------------------------
        .byte                   Cs3
        .byte   W96
@ 059   ----------------------------------------
        .byte           N44   , As2
        .byte   W48
        .byte           N32   , Cs3
        .byte   W36
        .byte           N11   , En3
        .byte   W12
@ 060   ----------------------------------------
        .byte           N92   , Cn3
        .byte   W96
@ 061   ----------------------------------------
        .byte                   En3
        .byte   W96
@ 062   ----------------------------------------
        .byte           VOICE , 95
        .byte   GOTO
         .word  mus_pkmn_bw12_162_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_162_5:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 98
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v-57
        .byte           VOL   , 50
        .byte           N05   , Gn5 , v088
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
@ 001   ----------------------------------------
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           N11   , Gn5
        .byte   W12
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W88
        .byte           PAN   , c_v+56
        .byte   W08
@ 006   ----------------------------------------
        .byte           N44   , Cn3
        .byte   W36
        .byte           PAN   , c_v+44
        .byte   W12
        .byte                   c_v+35
        .byte           N44   , Cn2
        .byte   W12
        .byte           PAN   , c_v+29
        .byte   W12
        .byte                   c_v+20
        .byte   W12
        .byte                   c_v+17
        .byte   W12
@ 007   ----------------------------------------
        .byte                   c_v+14
        .byte           N44   , Gn2
        .byte   W36
        .byte           PAN   , c_v+29
        .byte   W12
        .byte                   c_v+35
        .byte           N44   , Cs2
        .byte   W12
        .byte           PAN   , c_v+44
        .byte   W12
        .byte                   c_v+47
        .byte   W12
        .byte                   c_v+53
        .byte   W12
@ 008   ----------------------------------------
        .byte                   c_v+56
        .byte           N44   , Cn3
        .byte   W24
        .byte           PAN   , c_v+53
        .byte   W12
        .byte                   c_v+44
        .byte   W12
        .byte                   c_v+41
        .byte           N44   , Cn2
        .byte   W12
        .byte           PAN   , c_v+35
        .byte   W24
        .byte                   c_v+32
        .byte   W12
@ 009   ----------------------------------------
        .byte           N44   , Cs3
        .byte   W24
        .byte           PAN   , c_v+44
        .byte   W12
        .byte                   c_v+50
        .byte   W12
        .byte                   c_v+63
        .byte           N44   , Ds2
        .byte   W36
        .byte           PAN   , c_v+59
        .byte   W12
@ 010   ----------------------------------------
mus_pkmn_bw12_162_5_LOOP:
        .byte           VOICE , 95
        .byte           VOL   , 64
        .byte           N11   , En4 , v088
        .byte   W36
        .byte                   Fn4
        .byte   W36
        .byte                   Gn4
        .byte   W24
@ 011   ----------------------------------------
        .byte   W60
        .byte                   Gn4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   Dn5
        .byte   W12
@ 012   ----------------------------------------
mus_pkmn_bw12_162_5_12:
        .byte           N32   , En5 , v088
        .byte   W36
        .byte                   Cn5
        .byte   W36
        .byte           N11   , Dn5
        .byte   W12
        .byte                   En5
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
mus_pkmn_bw12_162_5_13:
        .byte           N11   , Fn5 , v088
        .byte   W12
        .byte                   En5
        .byte   W24
        .byte           N56   , Cn5
        .byte   W60
        .byte   PEND
@ 014   ----------------------------------------
        .byte           N44   , As3
        .byte   W48
        .byte                   An3
        .byte   W48
@ 015   ----------------------------------------
        .byte           N23   , Gn3
        .byte   W24
        .byte                   An3
        .byte   W24
        .byte                   Gn3
        .byte   W24
        .byte                   Fn3
        .byte   W24
@ 016   ----------------------------------------
        .byte           N68   , En3
        .byte   W72
        .byte           N23   , Cn3
        .byte   W24
@ 017   ----------------------------------------
        .byte           N56   , Gn3
        .byte   W60
        .byte           PAN   , c_v-10
        .byte           N11   , En3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
@ 018   ----------------------------------------
        .byte                   As2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte           PAN   , c_v-44
        .byte           N11   , Fn3
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
@ 019   ----------------------------------------
        .byte           PAN   , c_v-5
        .byte           N11   , As2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte           PAN   , c_v+37
        .byte           N11   , Fn3
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
@ 020   ----------------------------------------
        .byte           PAN   , c_v-7
        .byte           N11   , Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte           PAN   , c_v-36
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   En3
        .byte   W12
@ 021   ----------------------------------------
        .byte           PAN   , c_v-5
        .byte           N11   , Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte           PAN   , c_v+34
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   En3
        .byte   W12
@ 022   ----------------------------------------
        .byte           PAN   , c_v-64
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Cn5
        .byte   W12
        .byte           N23   , Fn5
        .byte   W24
        .byte           N11   , En5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte                   Cn5
        .byte   W12
@ 023   ----------------------------------------
        .byte                   As4
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte           N23   , Dn5
        .byte   W24
        .byte           N11   , Cn5
        .byte   W12
        .byte                   As4
        .byte   W12
        .byte                   Dn5
        .byte   W12
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_5_12
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_5_13
@ 026   ----------------------------------------
        .byte           PAN   , c_v+50
        .byte           N44   , Fn4 , v088
        .byte           N44   , As4
        .byte   W48
        .byte                   En4
        .byte           N44   , An4
        .byte   W48
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_4_15
@ 028   ----------------------------------------
        .byte           N68   , Bn3 , v088
        .byte           N68   , En4
        .byte   W72
        .byte           N23   , Gn3
        .byte           N23   , Cn4
        .byte   W24
@ 029   ----------------------------------------
        .byte           N56   , En4
        .byte           N56   , Gn4
        .byte   W60
        .byte           PAN   , c_v-4
        .byte           N11   , En3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn2
        .byte   W12
@ 030   ----------------------------------------
        .byte                   Fn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           PAN   , c_v-30
        .byte           N11   , An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   As2
        .byte   W12
@ 031   ----------------------------------------
        .byte           PAN   , c_v-2
        .byte           N11   , Fn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           PAN   , c_v+27
        .byte           N11   , An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   As2
        .byte   W12
@ 032   ----------------------------------------
        .byte           PAN   , c_v-4
        .byte           N11   , Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           PAN   , c_v-28
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Cn3
        .byte   W12
@ 033   ----------------------------------------
        .byte           PAN   , c_v-3
        .byte           N11   , Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   En3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           PAN   , c_v+28
        .byte           N11   , Cn4
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte                   Gn4
        .byte   W12
        .byte                   Cn5 , v104
        .byte   W12
@ 034   ----------------------------------------
        .byte   W48
        .byte           PAN   , c_v-42
        .byte   W48
@ 035   ----------------------------------------
        .byte   W96
@ 036   ----------------------------------------
        .byte   W84
        .byte           VOICE , 11
        .byte   W12
@ 037   ----------------------------------------
        .byte           VOL   , 72
        .byte           N68   , Cn1 , v088
        .byte           N68   , Cn2 , v127
        .byte   W72
        .byte           N11   , Cn1 , v088
        .byte           N11   , Cn2 , v127
        .byte   W12
        .byte                   As0 , v088
        .byte           N11   , As1 , v127
        .byte   W12
@ 038   ----------------------------------------
        .byte           N92   , Cs1 , v088
        .byte           N92   , Cs2 , v127
        .byte   W96
@ 039   ----------------------------------------
        .byte                   Ds1 , v088
        .byte           N92   , Ds2 , v127
        .byte   W96
@ 040   ----------------------------------------
        .byte           TIE   , Cn1 , v088
        .byte           TIE   , Cn2 , v127
        .byte   W96
@ 041   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT   , Cn1
        .byte                   Cn2
        .byte   W01
        .byte           N11   , Cn1 , v088
        .byte           N11   , Cn2
        .byte   W12
        .byte                   As0
        .byte           N11   , As1
        .byte   W12
@ 042   ----------------------------------------
        .byte           N92   , Cs1
        .byte           N92   , Cs2
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Ds1
        .byte           N92   , Ds2
        .byte   W96
@ 044   ----------------------------------------
        .byte                   Cn1
        .byte           TIE   , Cn2
        .byte   W96
@ 045   ----------------------------------------
        .byte           N68   , Gn2
        .byte   W68
        .byte   W03
        .byte           EOT   , Cn2
        .byte   W01
        .byte           N11
        .byte           N11   , Gn2
        .byte   W12
        .byte                   As1
        .byte           N11   , Fn2
        .byte   W12
@ 046   ----------------------------------------
        .byte           N92   , Cs2
        .byte           N92   , Gs2
        .byte   W96
@ 047   ----------------------------------------
        .byte                   Ds2
        .byte           N92   , As2
        .byte   W96
@ 048   ----------------------------------------
        .byte           TIE   , Fn2
        .byte           TIE   , Fn3
        .byte   W96
@ 049   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Fn2
        .byte   W01
@ 050   ----------------------------------------
mus_pkmn_bw12_162_5_50:
        .byte           N11   , Fn2 , v088
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte   PEND
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_5_50
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_5_50
@ 053   ----------------------------------------
        .byte           N11   , Fn2 , v088
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte                   Fn2
        .byte   W11
        .byte           EOT   , Fn3
        .byte   W01
@ 054   ----------------------------------------
        .byte           VOICE , 95
        .byte           PAN   , c_v-9
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           PAN   , c_v-45
        .byte           N11   , Gn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
@ 055   ----------------------------------------
        .byte           PAN   , c_v-4
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           PAN   , c_v+41
        .byte           N11   , Gn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
@ 056   ----------------------------------------
        .byte           PAN   , c_v-6
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           PAN   , c_v-41
        .byte           N11   , En4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
@ 057   ----------------------------------------
mus_pkmn_bw12_162_5_57:
        .byte           PAN   , c_v-2
        .byte           N11   , Gn3 , v088
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           PAN   , c_v+35
        .byte           N11   , En4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte   PEND
@ 058   ----------------------------------------
        .byte           PAN   , c_v+4
        .byte           N11   , Gs3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Gs3
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte           PAN   , c_v-37
        .byte           N11   , Gs4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Gs3
        .byte   W12
        .byte                   Cs4
        .byte   W12
@ 059   ----------------------------------------
        .byte           PAN   , c_v-2
        .byte           N11   , Gs3
        .byte   W12
        .byte                   Cs3
        .byte   W12
        .byte                   Gs3
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte           PAN   , c_v+39
        .byte           N11   , Gs4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Gs3
        .byte   W12
        .byte                   Cs4
        .byte   W12
@ 060   ----------------------------------------
        .byte           PAN   , c_v-6
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           PAN   , c_v-43
        .byte           N11   , En4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_5_57
@ 062   ----------------------------------------
        .byte           VOL   , 64
        .byte           PAN   , c_v+59
        .byte   GOTO
         .word  mus_pkmn_bw12_162_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_162_6:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 0
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 50
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
        .byte   W84
        .byte           VOICE , 23
        .byte   W12
@ 006   ----------------------------------------
        .byte           PAN   , c_v-28
        .byte           N05   , Cn5 , v080
        .byte           N05   , En5
        .byte   W06
        .byte                   Bn4
        .byte           N05   , Ds5
        .byte   W06
        .byte                   As4
        .byte           N05   , Dn5
        .byte   W06
        .byte                   An4
        .byte           N05   , Cs5
        .byte   W06
        .byte           PAN   , c_v-25
        .byte           N05   , Gs4
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte           N05   , Bn4
        .byte   W06
        .byte           PAN   , c_v-22
        .byte           N05   , Fs4 , v076
        .byte           N05   , As4
        .byte   W06
        .byte                   Fn4
        .byte           N05   , An4
        .byte   W06
        .byte                   En4
        .byte           N05   , Gs4
        .byte   W06
        .byte                   Ds4
        .byte           N05   , Gn4
        .byte   W06
        .byte           PAN   , c_v-19
        .byte           N05   , Dn4
        .byte           N05   , Fs4
        .byte   W06
        .byte                   Cs4
        .byte           N05   , Fn4
        .byte   W06
        .byte           PAN   , c_v-17
        .byte           N05   , Cn4
        .byte           N05   , En4
        .byte   W06
        .byte                   Bn3
        .byte           N05   , Ds4
        .byte   W06
        .byte           PAN   , c_v-14
        .byte           N05   , As3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   An3 , v072
        .byte           N05   , Cs4
        .byte   W06
@ 007   ----------------------------------------
        .byte                   As3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   An3
        .byte           N05   , Cs4
        .byte   W06
        .byte           PAN   , c_v-11
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Bn3
        .byte   W06
        .byte           PAN   , c_v-8
        .byte           N05   , Fs3
        .byte           N05   , As3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , An3
        .byte   W06
        .byte                   En3
        .byte           N05   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N05   , Gn3
        .byte   W06
        .byte           PAN   , c_v-5
        .byte           N05   , Dn3
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N05   , Fn3
        .byte   W06
        .byte           PAN   , c_v-2
        .byte           N05   , Cn3
        .byte           N05   , En3
        .byte   W06
        .byte                   Bn2 , v068
        .byte           N05   , Ds3
        .byte   W06
        .byte           PAN   , c_v+0
        .byte           N05   , As2
        .byte           N05   , Dn3
        .byte   W06
        .byte                   An2
        .byte           N05   , Cs3
        .byte   W06
        .byte                   Gs2
        .byte           N05   , Cn3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Bn2
        .byte   W06
@ 008   ----------------------------------------
        .byte           PAN   , c_v+3
        .byte           N05   , Fs2
        .byte           N05   , As2
        .byte   W06
        .byte                   Fn2
        .byte           N05   , An2
        .byte   W06
        .byte           PAN   , c_v+6
        .byte           N05   , En2
        .byte           N05   , Gs2
        .byte   W06
        .byte                   Ds2
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2 , v016
        .byte           N05   , Fs2 , v068
        .byte   W06
        .byte                   Cs2 , v020
        .byte           N05   , Fn2 , v068
        .byte   W06
        .byte           PAN   , c_v+9
        .byte           N05   , Cn2 , v020
        .byte           N05   , En2 , v072
        .byte   W06
        .byte                   Bn1 , v020
        .byte           N05   , Ds2 , v072
        .byte   W06
        .byte           PAN   , c_v+12
        .byte           VOL   , 51
        .byte           N05   , As1 , v024
        .byte           N05   , Dn2 , v076
        .byte   W06
        .byte                   An1 , v024
        .byte           N05   , Cs2 , v076
        .byte   W06
        .byte           VOL   , 52
        .byte           PAN   , c_v+15
        .byte           N05   , Gs1 , v024
        .byte           N05   , Cn2 , v080
        .byte   W06
        .byte           VOL   , 53
        .byte           N05   , Gn1 , v024
        .byte           N05   , Bn1 , v080
        .byte   W06
        .byte           VOL   , 54
        .byte           N05   , En2 , v028
        .byte           N05   , Gs2 , v080
        .byte   W06
        .byte                   Fn2 , v028
        .byte           N05   , An2 , v084
        .byte   W06
        .byte           PAN   , c_v+17
        .byte           N05   , Fs2 , v028
        .byte           N05   , As2 , v084
        .byte   W06
        .byte           VOL   , 56
        .byte           N05   , Gn2 , v032
        .byte           N05   , Bn2 , v088
        .byte   W06
@ 009   ----------------------------------------
        .byte           PAN   , c_v+20
        .byte           N05   , Gs2 , v032
        .byte           N05   , Cn3 , v088
        .byte   W06
        .byte                   An2 , v032
        .byte           N05   , Cs3 , v088
        .byte   W06
        .byte           VOL   , 57
        .byte           N05   , As2 , v032
        .byte           N05   , Dn3 , v088
        .byte   W06
        .byte           VOL   , 58
        .byte           N05   , Bn2 , v032
        .byte           N05   , Ds3 , v092
        .byte   W06
        .byte           VOL   , 59
        .byte           PAN   , c_v+23
        .byte           N05   , Cn3 , v036
        .byte           N05   , En3 , v096
        .byte   W06
        .byte           VOL   , 60
        .byte           N05   , Cs3 , v036
        .byte           N05   , Fn3 , v100
        .byte   W06
        .byte           PAN   , c_v+26
        .byte           N05   , Dn3 , v040
        .byte           N05   , Fs3 , v100
        .byte   W06
        .byte           VOL   , 61
        .byte           N05   , Ds3 , v040
        .byte           N05   , Gn3 , v104
        .byte   W06
        .byte           VOL   , 62
        .byte           PAN   , c_v+29
        .byte           N05   , En3 , v044
        .byte           N05   , Gs3 , v108
        .byte   W06
        .byte           VOL   , 63
        .byte           N05   , Fn3 , v048
        .byte           N05   , An3 , v112
        .byte   W06
        .byte           VOL   , 64
        .byte           N05   , Fs3 , v048
        .byte           N05   , As3 , v112
        .byte   W06
        .byte                   Gn3 , v052
        .byte           N05   , Bn3 , v116
        .byte   W06
        .byte           PAN   , c_v+31
        .byte           N05   , Gs3 , v052
        .byte           N05   , Cn4 , v120
        .byte   W06
        .byte           VOL   , 66
        .byte           N05   , An3 , v056
        .byte           N05   , Cs4 , v120
        .byte   W06
        .byte           PAN   , c_v+34
        .byte           N05   , As3 , v056
        .byte           N05   , Dn4 , v124
        .byte   W06
        .byte                   Bn3 , v060
        .byte           N05   , Ds4 , v127
        .byte   W06
@ 010   ----------------------------------------
mus_pkmn_bw12_162_6_LOOP:
        .byte           PAN   , c_v-64
        .byte           VOL   , 38
        .byte           N92   , Gn2 , v088
        .byte           N92   , En3
        .byte   W96
@ 011   ----------------------------------------
        .byte                   Cn3
        .byte           N92   , Gn3
        .byte   W96
@ 012   ----------------------------------------
mus_pkmn_bw12_162_6_12:
        .byte           N92   , En3 , v088
        .byte           N92   , Cn4
        .byte   W96
        .byte   PEND
@ 013   ----------------------------------------
        .byte                   Cn4
        .byte           N92   , Gn4
        .byte   W96
@ 014   ----------------------------------------
mus_pkmn_bw12_162_6_14:
        .byte           N92   , Fn2 , v088
        .byte           N92   , Dn3
        .byte   W96
        .byte   PEND
@ 015   ----------------------------------------
mus_pkmn_bw12_162_6_15:
        .byte           N92   , As2 , v088
        .byte           N92   , Fn3
        .byte   W96
        .byte   PEND
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_12
@ 017   ----------------------------------------
mus_pkmn_bw12_162_6_17:
        .byte           N92   , Gn3 , v088
        .byte           N92   , En4
        .byte   W96
        .byte   PEND
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_15
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_12
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_17
@ 022   ----------------------------------------
        .byte           VOICE , 17
        .byte           PAN   , c_v-61
        .byte           N05   , Gn3 , v088
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
@ 023   ----------------------------------------
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
@ 024   ----------------------------------------
mus_pkmn_bw12_162_6_24:
        .byte           N05   , Gn3 , v088
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte   PEND
@ 025   ----------------------------------------
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte           N08   , Gn3
        .byte           N08   , Cn4
        .byte   W24
        .byte           N05   , Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
@ 026   ----------------------------------------
        .byte   W12
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W24
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W24
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W12
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W24
@ 027   ----------------------------------------
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W12
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W24
        .byte           N08   , Dn3
        .byte           N08   , As3
        .byte   W24
        .byte           N05   , Dn3
        .byte           N05   , As3
        .byte   W12
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W12
        .byte                   Dn3
        .byte           N05   , As3
        .byte   W12
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_24
@ 029   ----------------------------------------
        .byte   W12
        .byte           N05   , Gn3 , v088
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W24
        .byte                   Gn3
        .byte           N05   , Cn4
        .byte   W12
        .byte           N23   , Dn4
        .byte           N23   , Gn4
        .byte   W09
        .byte           BEND  , c_v-1
        .byte   W06
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-3
        .byte   W03
@ 030   ----------------------------------------
        .byte                   c_v-5
        .byte   W24
        .byte                   c_v+0
        .byte   W72
@ 031   ----------------------------------------
        .byte   W60
        .byte           N05   , Fn2
        .byte           N05   , As2
        .byte   W24
        .byte                   Fn2
        .byte           N05   , As2
        .byte   W12
@ 032   ----------------------------------------
        .byte                   Gn2
        .byte           N05   , Cn3
        .byte   W36
        .byte                   Gn2
        .byte           N05   , Cn3
        .byte   W60
@ 033   ----------------------------------------
        .byte   W24
        .byte                   En2
        .byte           N05   , Gn2
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Cn3
        .byte   W24
        .byte                   En2
        .byte           N05   , Gn2
        .byte   W12
        .byte                   Gn2
        .byte           N05   , Cn3
        .byte   W24
@ 034   ----------------------------------------
        .byte           VOICE , 23
        .byte           N92   , Gn3
        .byte           N92   , Cn4
        .byte   W96
@ 035   ----------------------------------------
        .byte                   Fn3
        .byte           N92   , An3
        .byte   W96
@ 036   ----------------------------------------
        .byte                   En3
        .byte           N92   , Gn3
        .byte   W96
@ 037   ----------------------------------------
        .byte                   Cn3
        .byte           N92   , En3
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
        .byte   W96
@ 047   ----------------------------------------
        .byte   W84
        .byte           VOL   , 62
        .byte   W12
@ 048   ----------------------------------------
        .byte           PAN   , c_v+24
        .byte           TIE   , As4
        .byte           TIE   , Dn5
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte   W96
@ 051   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , As4
        .byte   W01
@ 052   ----------------------------------------
        .byte           TIE   , Fn5
        .byte   W96
@ 053   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Dn5
        .byte                   Fn5
        .byte   W01
@ 054   ----------------------------------------
mus_pkmn_bw12_162_6_54:
        .byte           TIE   , Cn3 , v088
        .byte           TIE   , Gn3
        .byte   W96
        .byte   PEND
@ 055   ----------------------------------------
mus_pkmn_bw12_162_6_55:
        .byte   W92
        .byte   W03
        .byte           EOT   , Cn3
        .byte                   Gn3
        .byte   W01
        .byte   PEND
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_54
@ 057   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_55
@ 058   ----------------------------------------
        .byte           TIE   , Cs3 , v088
        .byte           TIE   , Gs3
        .byte   W96
@ 059   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte           EOT   , Cs3
        .byte                   Gs3
        .byte   W01
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_54
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_6_55
@ 062   ----------------------------------------
        .byte           VOL   , 38
        .byte           PAN   , c_v-64
        .byte   GOTO
         .word  mus_pkmn_bw12_162_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_162_7:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 69
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte           N23   , Bn0 , v127
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte                   Bn0
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte                   Bn0
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte                   Bn0
        .byte   W48
        .byte                   Bn0
        .byte   W48
@ 009   ----------------------------------------
        .byte                   Bn0
        .byte   W24
        .byte                   Bn0
        .byte   W36
        .byte           N11
        .byte   W24
        .byte                   Bn0
        .byte   W12
@ 010   ----------------------------------------
mus_pkmn_bw12_162_7_LOOP:
        .byte           N23   , Bn0 , v127
        .byte   W60
        .byte                   Bn0 , v088
        .byte   W36
@ 011   ----------------------------------------
mus_pkmn_bw12_162_7_11:
        .byte           N23   , Bn0 , v127
        .byte   W60
        .byte                   Bn0 , v088
        .byte   W36
        .byte   PEND
@ 012   ----------------------------------------
mus_pkmn_bw12_162_7_12:
        .byte           N11   , Bn0 , v127
        .byte   W36
        .byte                   Bn0
        .byte   W24
        .byte                   Bn0
        .byte   W24
        .byte                   Bn0
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_12
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 030   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_12
@ 034   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 035   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 037   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 041   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 043   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 046   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 047   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 048   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 049   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_12
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 057   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 058   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 059   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_7_11
@ 062   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_162_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_162_8:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 48
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 46
        .byte           PAN   , c_v+61
        .byte   W12
        .byte           N05   , Cn6 , v036
        .byte   W12
        .byte                   Bn5
        .byte   W12
        .byte                   Cn6
        .byte   W24
        .byte                   Cn6
        .byte   W24
        .byte                   Cn6
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Bn5
        .byte   W12
        .byte                   Cn6
        .byte   W24
        .byte                   Cn6
        .byte   W24
        .byte                   Cn6
        .byte   W12
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte           VOICE , 44
        .byte   W96
@ 004   ----------------------------------------
        .byte   W42
        .byte           PAN   , c_v+25
        .byte   W24
        .byte           BEND  , c_v-11
        .byte   W15
        .byte           TIE   , An3 , v108
        .byte   W15
@ 005   ----------------------------------------
        .byte   W24
        .byte   W03
        .byte           BEND  , c_v-9
        .byte   W03
        .byte                   c_v-8
        .byte   W06
        .byte                   c_v-7
        .byte   W09
        .byte                   c_v-6
        .byte   W03
        .byte                   c_v-5
        .byte   W06
        .byte                   c_v-4
        .byte   W06
        .byte                   c_v-3
        .byte   W06
        .byte                   c_v-2
        .byte   W03
        .byte                   c_v-1
        .byte   W03
        .byte                   c_v+0
        .byte   W03
        .byte                   c_v+1
        .byte   W03
        .byte                   c_v+2
        .byte   W03
        .byte                   c_v+3
        .byte   W03
        .byte                   c_v+4
        .byte   W03
        .byte                   c_v+6
        .byte   W03
        .byte                   c_v+8
        .byte   W03
        .byte                   c_v+10
        .byte   W03
@ 006   ----------------------------------------
        .byte   W11
        .byte           EOT
        .byte   W80
        .byte   W02
        .byte           BEND  , c_v+0
        .byte   W03
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W72
        .byte           PAN   , c_v-26
        .byte           BEND  , c_v+10
        .byte   W06
        .byte           TIE   , Bn3 , v127
        .byte   W18
@ 009   ----------------------------------------
        .byte   W36
        .byte           BEND  , c_v+9
        .byte   W12
        .byte                   c_v+8
        .byte   W06
        .byte                   c_v+7
        .byte   W06
        .byte                   c_v+6
        .byte   W12
        .byte                   c_v+5
        .byte   W06
        .byte                   c_v+4
        .byte   W06
        .byte                   c_v+3
        .byte   W06
        .byte                   c_v+1
        .byte   W05
        .byte           EOT
        .byte   W01
@ 010   ----------------------------------------
mus_pkmn_bw12_162_8_LOOP:
        .byte           BEND  , c_v+0
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
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
        .byte   W84
        .byte           PAN   , c_v+60
        .byte   W06
        .byte           VOICE , 11
        .byte   W06
@ 037   ----------------------------------------
        .byte           N68   , Cn2 , v060
        .byte   W72
        .byte           N11
        .byte   W12
        .byte                   As1
        .byte   W12
@ 038   ----------------------------------------
        .byte           N92   , Cs2
        .byte   W96
@ 039   ----------------------------------------
        .byte                   Ds2
        .byte   W96
@ 040   ----------------------------------------
        .byte           TIE   , Cn2
        .byte   W96
@ 041   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W01
        .byte           N11   , Cn3
        .byte   W12
        .byte                   As2
        .byte   W12
@ 042   ----------------------------------------
        .byte           N92   , Cs3
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Ds3
        .byte   W96
@ 044   ----------------------------------------
        .byte           TIE   , Cn3
        .byte   W96
@ 045   ----------------------------------------
        .byte   W68
        .byte   W03
        .byte           EOT
        .byte   W24
        .byte   W01
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W48
        .byte           VOICE , 48
        .byte           VOL   , 35
        .byte   W42
        .byte           PAN   , c_v+50
        .byte   W06
@ 050   ----------------------------------------
        .byte           N08   , As3 , v088
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte                   As3
        .byte   W12
@ 051   ----------------------------------------
        .byte                   Fn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
@ 052   ----------------------------------------
        .byte                   Ds3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte                   Ds3
        .byte   W12
@ 053   ----------------------------------------
        .byte                   Dn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
@ 054   ----------------------------------------
mus_pkmn_bw12_162_8_54:
        .byte           N08   , Cn2 , v104
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte   PEND
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_8_54
@ 056   ----------------------------------------
mus_pkmn_bw12_162_8_56:
        .byte           N08   , Cn4 , v088
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte   PEND
@ 057   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_8_56
@ 058   ----------------------------------------
mus_pkmn_bw12_162_8_58:
        .byte           N08   , Cs2 , v104
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte           N32
        .byte   W36
        .byte           N08
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte   PEND
@ 059   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_8_58
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_8_56
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_162_8_56
@ 062   ----------------------------------------
        .byte           VOICE , 44
        .byte           VOL   , 46
        .byte           PAN   , c_v-26
        .byte   GOTO
         .word  mus_pkmn_bw12_162_8_LOOP
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_162_9:
        .byte   KEYSH , mus_pkmn_bw12_162_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 45
        .byte           N76   , An2 , v127
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte                   An2
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W60
        .byte           N32   , Ds2
        .byte   W36
@ 006   ----------------------------------------
        .byte           N76   , An2
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte   W12
        .byte           N11   , Fs1
        .byte   W12
        .byte           N23   , An2
        .byte   W24
        .byte           N11   , Fs1
        .byte   W48
@ 010   ----------------------------------------
mus_pkmn_bw12_162_9_LOOP:
        .byte           N76   , An2 , v127
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
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
        .byte   W96
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte           VOICE , 4
        .byte   W90
        .byte           PAN   , c_v+60
        .byte   W06
@ 022   ----------------------------------------
        .byte           N44   , Cn6 , v100
        .byte   W48
        .byte                   As5
        .byte   W48
@ 023   ----------------------------------------
        .byte           N32   , Dn6
        .byte   W36
        .byte           N11   , Gn5
        .byte   W24
        .byte                   Gn5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte                   Dn6
        .byte   W12
@ 024   ----------------------------------------
        .byte           N68   , En6
        .byte   W72
        .byte           N11   , Dn6
        .byte   W12
        .byte                   En6
        .byte   W12
@ 025   ----------------------------------------
        .byte           N05   , Fn6 , v096
        .byte   W06
        .byte                   En6 , v092
        .byte   W06
        .byte                   Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte                   Fn5 , v088
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Cn5 , v084
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Dn6 , v096
        .byte   W06
        .byte                   Cn6 , v092
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte                   Dn5 , v088
        .byte   W06
        .byte                   Cn5 , v084
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Dn4 , v080
        .byte   W06
        .byte                   Cn4 , v096
        .byte   W06
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
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
        .byte   W90
        .byte           PAN   , c_v-59
        .byte   W06
@ 034   ----------------------------------------
        .byte           N32   , Gn5 , v092
        .byte   W36
        .byte                   Fn5
        .byte   W36
        .byte           N23   , Gn5
        .byte   W24
@ 035   ----------------------------------------
        .byte           N32   , An5
        .byte   W36
        .byte                   Fn5
        .byte   W36
        .byte           N23   , An5
        .byte   W24
@ 036   ----------------------------------------
        .byte           N44   , Gn5
        .byte   W48
        .byte                   Dn5
        .byte   W48
@ 037   ----------------------------------------
        .byte                   Cn5 , v100
        .byte   W48
        .byte                   Gn4
        .byte   W48
@ 038   ----------------------------------------
        .byte           N92   , Cs4
        .byte   W96
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte           N44   , En5 , v092
        .byte   W48
        .byte           N32   , Gn5
        .byte   W48
@ 042   ----------------------------------------
        .byte           N92   , Fn5
        .byte   W96
@ 043   ----------------------------------------
        .byte                   Gn5
        .byte   W96
@ 044   ----------------------------------------
        .byte                   Cn6
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
        .byte   W96
@ 051   ----------------------------------------
        .byte   W96
@ 052   ----------------------------------------
        .byte   W96
@ 053   ----------------------------------------
        .byte   W96
@ 054   ----------------------------------------
        .byte           PAN   , c_v-34
        .byte           N05   , Fn6 , v088
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v-39
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v-44
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v-48
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v-54
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte           PAN   , c_v-56
        .byte           N05   , Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v-57
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v-58
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 055   ----------------------------------------
        .byte                   Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v-57
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v-54
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v-53
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v-49
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte           PAN   , c_v-47
        .byte           N05   , Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v-43
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v-39
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 056   ----------------------------------------
        .byte           PAN   , c_v-36
        .byte           N05   , Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v-30
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v-17
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v-13
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte           PAN   , c_v-3
        .byte           N05   , Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v+3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v+11
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 057   ----------------------------------------
        .byte           PAN   , c_v+16
        .byte           N05   , Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v+23
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v+28
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v+31
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v+34
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v+33
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v+31
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 058   ----------------------------------------
        .byte           PAN   , c_v+28
        .byte           N05   , Gs6
        .byte   W06
        .byte                   Fn6
        .byte   W06
        .byte           PAN   , c_v+24
        .byte           N05   , Cs6
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           PAN   , c_v+21
        .byte           N05   , Fn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte           PAN   , c_v+16
        .byte           N05   , Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           PAN   , c_v+12
        .byte           N05   , Cs5
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte           PAN   , c_v+3
        .byte           N05   , Fn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte           PAN   , c_v-4
        .byte           N05   , Gs3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           PAN   , c_v-11
        .byte           N05   , Cs3
        .byte   W06
        .byte                   Gs2
        .byte   W06
@ 059   ----------------------------------------
        .byte           PAN   , c_v-16
        .byte           N05   , Gs6
        .byte   W06
        .byte                   Fn6
        .byte   W06
        .byte           PAN   , c_v-23
        .byte           N05   , Cs6
        .byte   W06
        .byte                   Gs5
        .byte   W06
        .byte           PAN   , c_v-28
        .byte           N05   , Fn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte           PAN   , c_v-32
        .byte           N05   , Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           PAN   , c_v-35
        .byte           N05   , Cs5
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte           PAN   , c_v-36
        .byte           N05   , Fn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte           PAN   , c_v-39
        .byte           N05   , Gs3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           PAN   , c_v-42
        .byte           N05   , Cs3
        .byte   W12
@ 060   ----------------------------------------
        .byte           PAN   , c_v-45
        .byte           N05   , Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v-46
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v-47
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v-49
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v-51
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte           PAN   , c_v-52
        .byte           N05   , Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v-55
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v-56
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 061   ----------------------------------------
        .byte           PAN   , c_v-57
        .byte           N05   , Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte           PAN   , c_v-55
        .byte           N05   , Cn6
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte           PAN   , c_v-54
        .byte           N05   , Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte           PAN   , c_v-51
        .byte           N05   , Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte           PAN   , c_v-47
        .byte           N05   , Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte           PAN   , c_v-42
        .byte           N05   , Gn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte           PAN   , c_v-37
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           PAN   , c_v-33
        .byte           N05   , Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 062   ----------------------------------------
        .byte           VOICE , 39
        .byte           PAN   , c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_162_9_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_162:
        .byte   10                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_162_pri   @ Priority
        .byte   mus_pkmn_bw12_162_rev   @ Reverb

        .word   mus_pkmn_bw12_162_grp  

        .word   mus_pkmn_bw12_162_0
        .word   mus_pkmn_bw12_162_1
        .word   mus_pkmn_bw12_162_2
        .word   mus_pkmn_bw12_162_3
        .word   mus_pkmn_bw12_162_4
        .word   mus_pkmn_bw12_162_5
        .word   mus_pkmn_bw12_162_6
        .word   mus_pkmn_bw12_162_7
        .word   mus_pkmn_bw12_162_8
        .word   mus_pkmn_bw12_162_9

        .end
