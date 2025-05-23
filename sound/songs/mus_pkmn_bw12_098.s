        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_098_grp, voicegroup538
        .equ    mus_pkmn_bw12_098_pri, 0
        .equ    mus_pkmn_bw12_098_rev, 0
        .equ    mus_pkmn_bw12_098_key, 0

        .section .rodata
        .global mus_pkmn_bw12_098
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_098_0:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 132/2
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 67
        .byte           N02   , En1 , v116
        .byte   W03
        .byte                   En1 , v064
        .byte   W03
        .byte           N05   , En1 , v096
        .byte   W06
        .byte                   En1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N11   , En1
        .byte           N17   , An2
        .byte   W12
        .byte           N05   , Cn1
        .byte   W06
        .byte           N11   , En1
        .byte           N17   , En2
        .byte   W12
        .byte           N05   , Cn1
        .byte   W06
        .byte           N11   , En1
        .byte           N17   , As2
        .byte   W06
        .byte           N05   , Bn1
        .byte   W06
        .byte                   Cn1
        .byte           N05   , Bn1
        .byte   W06
        .byte                   An1
        .byte   W06
        .byte                   An1
        .byte   W06
@ 001   ----------------------------------------
        .byte                   Gs1
        .byte   W06
        .byte                   Gs1
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Cn1
        .byte           N11   , Fs1
        .byte           N11   , An1
        .byte   W12
        .byte           N05   , Cn1
        .byte           N11   , Fs1
        .byte           N11   , An1
        .byte   W12
        .byte           N05   , Cn1
        .byte           N02   , Bn1
        .byte   W03
        .byte                   Bn1 , v076
        .byte   W03
        .byte                   An1 , v116
        .byte   W03
        .byte                   An1 , v076
        .byte   W03
        .byte                   Gs1 , v116
        .byte   W03
        .byte                   Gs1 , v084
        .byte   W03
        .byte                   Gn1 , v116
        .byte   W03
        .byte                   Gn1 , v068
        .byte   W03
        .byte           N05   , Cn1 , v116
        .byte           N11   , Fn1
        .byte   W06
        .byte                   En1
        .byte           N17   , En2
        .byte   W12
        .byte           N05   , Cn1
        .byte   W06
@ 002   ----------------------------------------
        .byte                   En1
        .byte           N02   , An1
        .byte           N11   , An2
        .byte   W03
        .byte           N02   , An1 , v076
        .byte   W03
        .byte           N05   , En1 , v116
        .byte           N02   , Gs1
        .byte   W03
        .byte                   Gs1 , v072
        .byte   W03
        .byte           N11   , En1 , v116
        .byte           N02   , Gn1
        .byte           N17   , As2
        .byte   W03
        .byte           N02   , Gn1 , v084
        .byte   W03
        .byte                   Fn1 , v116
        .byte   W03
        .byte           N13   , Fn1 , v080
        .byte   W03
        .byte           N05   , Cn1 , v116
        .byte   W06
        .byte           N11   , En1
        .byte   W12
        .byte           N05   , Cn1
        .byte   W06
        .byte           N11   , En1
        .byte           N11   , En2
        .byte   W06
        .byte           N05   , Cn1
        .byte   W06
        .byte           N11   , En1
        .byte           N11   , As2
        .byte   W06
        .byte           N05   , Cn1
        .byte   W06
mus_pkmn_bw12_098_0_LOOP:
        .byte           N05   , Bn0 , v127
        .byte           N02   , Fs1 , v116
        .byte           N17   , An2
        .byte   W06
        .byte           N11   , En1
        .byte           N02   , Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
@ 003   ----------------------------------------
mus_pkmn_bw12_098_0_3:
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte                   Fs1 , v116
        .byte           N02   , Bn1
        .byte   W03
        .byte                   Bn1
        .byte   W03
        .byte                   Fs1 , v036
        .byte           N05   , An1 , v116
        .byte   W06
        .byte           N02   , Fs1 , v068
        .byte           N05   , Gn1 , v116
        .byte   W06
        .byte                   Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte                   Fs1 , v116
        .byte           N05   , Bn1
        .byte   W06
        .byte           N02   , Fs1 , v080
        .byte           N05   , An1 , v116
        .byte   W06
        .byte                   Fn1
        .byte           N02   , Fs1 , v056
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1 , v092
        .byte   W06
        .byte           N05   , Bn0 , v127
        .byte           N02   , Fs1 , v116
        .byte   W06
        .byte           N11   , En1
        .byte           N02   , Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte   PEND
@ 004   ----------------------------------------
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte                   Fs1 , v116
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v080
        .byte   W06
        .byte                   Fs1 , v056
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1 , v092
        .byte   W06
        .byte           N05   , Bn0 , v127
        .byte           N02   , Fs1 , v116
        .byte           N17   , An2
        .byte   W06
        .byte           N11   , En1
        .byte           N02   , Fs1 , v036
        .byte   W06
        .byte                   Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_098_0_3
@ 006   ----------------------------------------
        .byte           N11   , En1 , v116
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v036
        .byte   W06
        .byte           N11   , En1 , v116
        .byte           N02   , Fs1 , v068
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte           N11   , Bn0 , v116
        .byte           N02   , Fs1
        .byte   W06
        .byte                   Fs1 , v036
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1 , v068
        .byte   W06
        .byte           N11   , En1 , v116
        .byte           N02   , Fs1 , v028
        .byte   W06
        .byte                   Fs1 , v116
        .byte   W06
        .byte           N05   , Bn0
        .byte           N02   , Fs1 , v080
        .byte   W06
        .byte           N11   , En1 , v116
        .byte           N02   , Fs1 , v056
        .byte   W06
        .byte           N05   , Bn0 , v116
        .byte           N02   , Fs1 , v092
        .byte   W06
        .byte   GOTO
         .word  mus_pkmn_bw12_098_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_098_1:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 17
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W30
        .byte           N17   , Gn3 , v116
        .byte   W12
        .byte           BEND  , c_v+1
        .byte   W03
        .byte                   c_v+2
        .byte   W01
        .byte                   c_v+3
        .byte   W02
        .byte                   c_v+0
        .byte           N17   , Cn4
        .byte   W18
        .byte                   Fn4
        .byte   W12
        .byte           BEND  , c_v+1
        .byte   W03
        .byte                   c_v+2
        .byte   W03
        .byte                   c_v+0
        .byte           N17   , As4
        .byte   W12
@ 001   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W03
        .byte                   c_v+0
        .byte           N17   , Ds4
        .byte   W18
        .byte           N44   , Gs4
        .byte   W36
        .byte   W01
        .byte           BEND  , c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-9
        .byte   W01
        .byte                   c_v-11
        .byte   W02
        .byte                   c_v+0
        .byte   W06
        .byte           N05   , Cs3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   As3
        .byte   W06
@ 002   ----------------------------------------
        .byte           N17   , Bn3
        .byte   W18
        .byte           N05   , Fs3
        .byte   W06
        .byte           BEND  , c_v-1
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W06
        .byte           N17   , Bn2
        .byte   W10
        .byte           BEND  , c_v-2
        .byte   W02
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-5
        .byte   W02
        .byte                   c_v-7
        .byte   W01
        .byte                   c_v-8
        .byte   W02
        .byte                   c_v+0
        .byte           N05   , En3
        .byte   W12
        .byte                   Gs3
        .byte   W06
        .byte                   An3
        .byte   W06
mus_pkmn_bw12_098_1_LOOP:
        .byte           N23   , Fs4 , v116
        .byte   W12
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W01
        .byte                   c_v-8
        .byte   W02
@ 003   ----------------------------------------
        .byte           PAN   , c_v-53
        .byte           BEND  , c_v+0
        .byte           N23   , Fs4 , v036
        .byte   W12
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W01
        .byte                   c_v-8
        .byte   W02
        .byte           PAN   , c_v+51
        .byte           BEND  , c_v+0
        .byte           N23   , Fs4 , v024
        .byte   W12
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v+0
        .byte   W01
        .byte           PAN   , c_v-57
        .byte           N23   , Fs4 , v008
        .byte   W24
        .byte           PAN   , c_v+0
        .byte   W24
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W60
        .byte           N05   , Cs4 , v116
        .byte   W12
        .byte   GOTO
         .word  mus_pkmn_bw12_098_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_098_2:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 4
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W72
mus_pkmn_bw12_098_2_LOOP:
        .byte           PAN   , c_v+18
        .byte   W06
        .byte           N17   , Fs3 , v028
        .byte           N17   , As3
        .byte           N17   , Cs4
        .byte   W18
@ 003   ----------------------------------------
        .byte   W06
        .byte                   Fs3 , v064
        .byte           N17   , As3
        .byte           N17   , Cs4
        .byte   W30
        .byte           N16   , Fs3 , v040
        .byte           N16   , As3
        .byte           N16   , Cs4
        .byte   W18
        .byte           N14   , Fs3 , v076
        .byte           N14   , As3
        .byte           N14   , Cs4
        .byte   W24
        .byte           N17   , Gn3 , v028
        .byte           N17   , Bn3
        .byte           N17   , Dn4
        .byte   W18
@ 004   ----------------------------------------
        .byte           N02   , Gn3 , v064
        .byte           N02   , Bn3
        .byte           N02   , Dn4
        .byte   W12
        .byte           N08   , Gn3
        .byte           N08   , Bn3
        .byte           N08   , Dn4
        .byte   W12
        .byte           N17   , Gn3 , v056
        .byte           N17   , Bn3
        .byte           N17   , Dn4
        .byte   W18
        .byte           N02   , Gn3 , v064
        .byte           N02   , Bn3
        .byte           N02   , Dn4
        .byte   W12
        .byte           N17   , Gn3 , v076
        .byte           N17   , Bn3
        .byte           N17   , Dn4
        .byte   W24
        .byte                   Gs3 , v028
        .byte           N17   , Cn4
        .byte           N17   , Ds4
        .byte   W18
@ 005   ----------------------------------------
        .byte           N01   , Gs3 , v064
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W03
        .byte                   Gs3 , v036
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W03
        .byte                   Gs3
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W06
        .byte                   Gs3 , v064
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W06
        .byte                   Gs3 , v032
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W06
        .byte           N14   , Gs3 , v056
        .byte           N14   , Cn4
        .byte           N14   , Ds4
        .byte   W18
        .byte           N01   , Gs3 , v064
        .byte           N01   , Cn4
        .byte           N01   , Ds4
        .byte   W12
        .byte           N02   , Gs3 , v076
        .byte           N02   , Cn4
        .byte           N02   , Ds4
        .byte   W12
        .byte           N05   , Gs3
        .byte           N05   , Cn4
        .byte           N05   , Ds4
        .byte   W12
        .byte           N17   , An3 , v028
        .byte           N17   , Cs4
        .byte           N17   , En4
        .byte   W18
@ 006   ----------------------------------------
        .byte           N05   , An3 , v064
        .byte           N05   , Cs4
        .byte           N05   , En4
        .byte   W12
        .byte           N11   , An3
        .byte           N11   , Cs4
        .byte           N12   , En4
        .byte   W12
        .byte           N17   , An3 , v056
        .byte           N17   , Cs4
        .byte           N08   , En4
        .byte   W18
        .byte           N01   , An3 , v064
        .byte           N01   , Cs4
        .byte           N01   , En4
        .byte   W12
        .byte           N17   , An3 , v076
        .byte           N17   , Cs4
        .byte           N17   , En4
        .byte   W18
        .byte   GOTO
         .word  mus_pkmn_bw12_098_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_098_3:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 21
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W24
        .byte           N17   , Gn0 , v127
        .byte   W18
        .byte           BEND  , c_v+2
        .byte           N17   , Cn1 , v116
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W12
        .byte                   c_v+2
        .byte           N17   , Fn1
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W12
        .byte           N05   , An0
        .byte   W06
        .byte           N01   , As0 , v088
        .byte   W03
        .byte                   As0 , v040
        .byte   W03
        .byte                   As0 , v080
        .byte   W03
        .byte                   As0 , v048
        .byte   W03
@ 001   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte           N11   , As0 , v116
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           N11   , As1
        .byte   W12
        .byte           BEND  , c_v-1
        .byte           N11   , Gs1 , v127
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           N05   , Ds1 , v116
        .byte   W06
        .byte           N17   , Gs0
        .byte   W18
        .byte           N11   , Cs2
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W06
        .byte                   c_v+0
        .byte   W06
        .byte           N11   , As1
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W06
        .byte                   c_v+0
        .byte           N11   , Bn0
        .byte   W06
@ 002   ----------------------------------------
        .byte   W06
        .byte           N02   , Bn1
        .byte   W06
        .byte           N11
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W06
        .byte                   c_v+0
        .byte           N05   , En1
        .byte   W06
        .byte                   Bn0
        .byte   W06
        .byte           N11   , An1
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W06
        .byte                   c_v+0
        .byte           N01   , An0 , v124
        .byte   W03
        .byte                   An0 , v108
        .byte   W03
        .byte           N05   , An0 , v116
        .byte   W06
        .byte           N11   , Dn1
        .byte   W12
mus_pkmn_bw12_098_3_LOOP:
        .byte           N05   , Fs0 , v116
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte           N11   , Fs0 , v076
        .byte   W12
@ 003   ----------------------------------------
        .byte           N01   , Fs0 , v124
        .byte   W03
        .byte                   Fs0 , v076
        .byte   W03
        .byte                   Fs0 , v112
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte           BEND  , c_v-2
        .byte           N11   , Fs1 , v116
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           N05   , Fs0
        .byte   W06
        .byte           N01   , Fs0 , v124
        .byte   W03
        .byte                   Fs0 , v076
        .byte   W03
        .byte                   Fs0 , v112
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte           N05   , Fs1 , v116
        .byte   W06
        .byte                   Fs0
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W03
        .byte                   Fs0 , v060
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte                   Fs0 , v060
        .byte   W03
        .byte           N05   , Fs0 , v084
        .byte   W06
        .byte                   Fs1 , v116
        .byte   W06
        .byte           N10   , Fs0
        .byte   W12
        .byte           BEND  , c_v-2
        .byte           N05   , Fs0 , v112
        .byte   W06
@ 004   ----------------------------------------
        .byte           BEND  , c_v+0
        .byte           N01   , Fs0 , v124
        .byte   W03
        .byte                   Fs0 , v076
        .byte   W03
        .byte                   Fs0 , v112
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte           N11   , Bn0 , v124
        .byte   W06
        .byte           BEND  , c_v-2
        .byte   W06
        .byte                   c_v+0
        .byte           N17   , Fs0 , v116
        .byte   W06
        .byte           BEND  , c_v+4
        .byte   W12
        .byte                   c_v+0
        .byte           N11   , Cs1
        .byte   W12
        .byte           N17   , En1
        .byte   W06
        .byte           BEND  , c_v+1
        .byte           N11   , Dn1
        .byte   W12
        .byte           BEND  , c_v+0
        .byte           N05   , Fs0
        .byte   W06
        .byte                   Fs1
        .byte   W06
        .byte           N11   , Fs0 , v076
        .byte   W12
@ 005   ----------------------------------------
        .byte           N05   , Fs1 , v116
        .byte   W06
        .byte                   Fs0 , v088
        .byte   W12
        .byte                   Fs0 , v084
        .byte   W06
        .byte                   Fs0 , v116
        .byte   W06
        .byte           N01   , Fs0 , v124
        .byte   W03
        .byte                   Fs0 , v076
        .byte   W03
        .byte                   Fs0 , v112
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte           N05   , Fs1 , v116
        .byte   W06
        .byte                   Fs0
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W03
        .byte                   Fs0 , v060
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte                   Fs0 , v060
        .byte   W03
        .byte           N05   , Fs0 , v084
        .byte   W06
        .byte                   Fs1 , v116
        .byte   W06
        .byte           N10   , Fs0
        .byte   W12
        .byte           N05   , Fs0 , v112
        .byte   W06
@ 006   ----------------------------------------
        .byte           N01   , Fs0 , v124
        .byte   W03
        .byte                   Fs0 , v076
        .byte   W03
        .byte                   Fs0 , v112
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte           N11   , Bn0 , v124
        .byte   W12
        .byte           N17   , Fs0 , v116
        .byte   W18
        .byte           N05   , Bn0
        .byte   W12
        .byte           N17   , En1
        .byte   W06
        .byte           BEND  , c_v-3
        .byte   W06
        .byte                   c_v+0
        .byte   W06
        .byte   GOTO
         .word  mus_pkmn_bw12_098_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_098_4:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 18
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W72
mus_pkmn_bw12_098_4_LOOP:
        .byte           PAN   , c_v-31
        .byte   W24
@ 003   ----------------------------------------
        .byte           N02   , Fs3 , v116
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Fs3
        .byte           N01   , As3
        .byte   W06
        .byte           N02   , En3
        .byte           N02   , Gs3
        .byte   W06
        .byte           N01   , En3
        .byte           N01   , Gs3
        .byte   W06
        .byte           N05   , Fn3
        .byte           N05   , As3
        .byte   W06
        .byte           N02   , Fs3
        .byte           N02   , Bn3
        .byte   W12
        .byte                   Fn3
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W30
@ 004   ----------------------------------------
        .byte           N02   , Gn3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Gn3
        .byte           N01   , Bn3
        .byte   W06
        .byte           N02   , Fn3
        .byte           N02   , An3
        .byte   W06
        .byte           N01   , Fn3
        .byte           N01   , An3
        .byte   W06
        .byte           N05   , Fs3
        .byte           N05   , Bn3
        .byte   W06
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Fs3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W30
@ 005   ----------------------------------------
        .byte           N02   , Gs3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N01   , Gs3
        .byte           N01   , Cn4
        .byte   W06
        .byte           N02   , Fs3
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Fs3
        .byte           N01   , As3
        .byte   W06
        .byte           N05   , Gn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W12
        .byte                   Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N01   , Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W12
        .byte           N14   , An3 , v076
        .byte           N14   , Cs4
        .byte   W18
@ 006   ----------------------------------------
        .byte           N02   , An3 , v116
        .byte           N02   , Cs4
        .byte   W12
        .byte                   Fs3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Fs3
        .byte           N01   , Bn3
        .byte   W06
        .byte           N05   , Gs3
        .byte           N05   , Cs4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N02   , Ds4
        .byte   W12
        .byte                   An3
        .byte           N02   , Cs4
        .byte   W30
        .byte   GOTO
         .word  mus_pkmn_bw12_098_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_098_5:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W24
        .byte           N17   , Cn2 , v116
        .byte   W06
        .byte                   Cn3 , v127
        .byte           N17   , En3
        .byte           N17   , Gn3
        .byte   W12
        .byte                   Fn2 , v116
        .byte   W06
        .byte                   Fn3
        .byte           N17   , An3
        .byte           N17   , Cn4
        .byte   W12
        .byte                   As1
        .byte   W06
        .byte                   As3 , v127
        .byte           N17   , Dn4
        .byte           N17   , Fn4
        .byte   W13
        .byte           N32   , Ds2 , v116
        .byte   W05
        .byte           N17   , Ds3
        .byte           N17   , Gn3
        .byte           N17   , As3
        .byte   W12
@ 001   ----------------------------------------
        .byte   W06
        .byte                   Gs3
        .byte           N17   , Cn4
        .byte           N17   , Ds4
        .byte   W18
        .byte           N44   , Cs3 , v124
        .byte           N44   , Fn3
        .byte           N44   , Gs3
        .byte   W48
        .byte           N17   , Fs2 , v116
        .byte   W06
        .byte                   Fs3 , v124
        .byte           N17   , As3
        .byte           N17   , Cs4
        .byte   W12
        .byte           N11   , Bn2 , v116
        .byte   W06
@ 002   ----------------------------------------
        .byte           N05   , Bn3
        .byte           N05   , Ds4
        .byte           N05   , Fs4
        .byte   W06
        .byte           N17   , En3
        .byte   W06
        .byte           N05   , En4 , v127
        .byte           N05   , Gs4
        .byte           N05   , Bn4
        .byte   W12
        .byte           N11   , En2 , v116
        .byte   W06
        .byte           N17   , En3 , v124
        .byte           N17   , Gs3
        .byte           N17   , Bn3
        .byte   W12
        .byte           N11   , An2 , v116
        .byte   W06
        .byte           N05   , An3
        .byte           N05   , Cs4
        .byte           N05   , En4
        .byte   W06
        .byte           N11   , Dn3
        .byte   W06
        .byte           N05   , Cs4 , v127
        .byte           N05   , Fn4
        .byte           N05   , Gs4
        .byte   W06
        .byte                   Dn4 , v116
        .byte           N05   , Fs4
        .byte           N05   , An4
        .byte   W06
mus_pkmn_bw12_098_5_LOOP:
        .byte           N05   , Cs4 , v116
        .byte           N05   , As4
        .byte   W24
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W72
        .byte   GOTO
         .word  mus_pkmn_bw12_098_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_098_6:
        .byte   KEYSH , mus_pkmn_bw12_098_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 17
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 21
        .byte   W24
        .byte           PAN   , c_v+32
        .byte   W12
        .byte           N17   , Gn3 , v116
        .byte   W12
        .byte           BEND  , c_v+1
        .byte   W03
        .byte                   c_v+2
        .byte   W01
        .byte                   c_v+3
        .byte   W02
        .byte                   c_v+0
        .byte           N17   , Cn4
        .byte   W18
        .byte                   Fn4
        .byte   W12
        .byte           BEND  , c_v+1
        .byte   W03
        .byte                   c_v+2
        .byte   W03
        .byte                   c_v+0
        .byte           N17   , As4
        .byte   W06
@ 001   ----------------------------------------
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W03
        .byte                   c_v+0
        .byte           N17   , Ds4
        .byte   W18
        .byte           N44   , Gs4
        .byte   W36
        .byte   W01
        .byte           BEND  , c_v-2
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-9
        .byte   W01
        .byte                   c_v-11
        .byte   W02
        .byte                   c_v+0
        .byte   W06
        .byte           N05   , Cs3
        .byte   W06
        .byte                   Fs3
        .byte   W06
@ 002   ----------------------------------------
        .byte                   As3
        .byte   W06
        .byte           N17   , Bn3
        .byte   W18
        .byte           N05   , Fs3
        .byte   W06
        .byte           BEND  , c_v-1
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W06
        .byte           N17   , Bn2
        .byte   W10
        .byte           BEND  , c_v-2
        .byte   W02
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-5
        .byte   W02
        .byte                   c_v-7
        .byte   W01
        .byte                   c_v-8
        .byte   W02
        .byte                   c_v+0
        .byte           N05   , En3
        .byte   W12
        .byte                   Gs3
        .byte   W06
mus_pkmn_bw12_098_6_LOOP:
        .byte           N05   , An3 , v116
        .byte   W21
        .byte           VOICE , 18
        .byte   W03
@ 003   ----------------------------------------
        .byte   W06
        .byte           N02   , Fs3
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Fs3
        .byte           N01   , As3
        .byte   W06
        .byte           N02   , En3
        .byte           N02   , Gs3
        .byte   W06
        .byte           N01   , En3
        .byte           N01   , Gs3
        .byte   W06
        .byte           N05   , Fn3
        .byte           N05   , As3
        .byte   W06
        .byte           N02   , Fs3
        .byte           N02   , Bn3
        .byte   W12
        .byte                   Fn3
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Cs3
        .byte           N01   , Fs3
        .byte   W24
@ 004   ----------------------------------------
        .byte   W06
        .byte           N02   , Gn3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Gn3
        .byte           N01   , Bn3
        .byte   W06
        .byte           N02   , Fn3
        .byte           N02   , An3
        .byte   W06
        .byte           N01   , Fn3
        .byte           N01   , An3
        .byte   W06
        .byte           N05   , Fs3
        .byte           N05   , Bn3
        .byte   W06
        .byte           N02   , Gn3
        .byte           N02   , Cn4
        .byte   W12
        .byte                   Fs3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Dn3
        .byte           N01   , Gn3
        .byte   W24
@ 005   ----------------------------------------
        .byte   W06
        .byte           N02   , Gs3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N01   , Gs3
        .byte           N01   , Cn4
        .byte   W06
        .byte           N02   , Fs3
        .byte           N02   , As3
        .byte   W06
        .byte           N01   , Fs3
        .byte           N01   , As3
        .byte   W06
        .byte           N05   , Gn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N02   , Gs3
        .byte           N02   , Cs4
        .byte   W12
        .byte                   Gn3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N01   , Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W06
        .byte                   Ds3
        .byte           N01   , Gs3
        .byte   W12
        .byte           N14   , An3 , v076
        .byte           N14   , Cs4
        .byte   W12
@ 006   ----------------------------------------
        .byte   W06
        .byte           N02   , An3 , v116
        .byte           N02   , Cs4
        .byte   W12
        .byte                   Gn3
        .byte           N02   , Bn3
        .byte   W06
        .byte           N01   , Gn3
        .byte           N01   , Bn3
        .byte   W06
        .byte           N05   , An3
        .byte           N05   , Cs4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N02   , Ds4
        .byte   W12
        .byte                   Gs3
        .byte           N02   , Cs4
        .byte   W24
        .byte           VOICE , 17
        .byte   GOTO
         .word  mus_pkmn_bw12_098_6_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_098:
        .byte   7                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_098_pri   @ Priority
        .byte   mus_pkmn_bw12_098_rev   @ Reverb

        .word   mus_pkmn_bw12_098_grp  

        .word   mus_pkmn_bw12_098_0
        .word   mus_pkmn_bw12_098_1
        .word   mus_pkmn_bw12_098_2
        .word   mus_pkmn_bw12_098_3
        .word   mus_pkmn_bw12_098_4
        .word   mus_pkmn_bw12_098_5
        .word   mus_pkmn_bw12_098_6

        .end
