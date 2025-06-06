        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_070_grp, voicegroup538
        .equ    mus_pkmn_bw12_070_pri, 0
        .equ    mus_pkmn_bw12_070_rev, 0
        .equ    mus_pkmn_bw12_070_key, 0

        .section .rodata
        .global mus_pkmn_bw12_070
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_070_0:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 62/2
mus_pkmn_bw12_070_0_LOOP:
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 64
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte           N11   , Gn1 , v100
        .byte           N64   , An2 , v080
        .byte   W12
        .byte           N05   , En3 , v100
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           N23   , An4 , v088
        .byte   W36
        .byte           N11   , Fn3 , v100
        .byte   W12
        .byte                   Gn1
        .byte           N64   , An2 , v080
        .byte   W12
        .byte           N05   , En3 , v100
        .byte   W06
        .byte                   Fn3
        .byte   W06
@ 004   ----------------------------------------
        .byte           N23   , An4 , v088
        .byte   W36
        .byte           N11   , Fn3 , v100
        .byte   W12
        .byte                   Gn1
        .byte           N64   , An2 , v080
        .byte   W12
        .byte           N05   , En3 , v100
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           N23   , An4 , v088
        .byte   W24
@ 005   ----------------------------------------
        .byte   W12
        .byte           N11   , Fn3 , v100
        .byte   W12
        .byte                   Gn1
        .byte           N64   , An2 , v080
        .byte   W12
        .byte           N05   , En3 , v100
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           N23   , An4 , v088
        .byte   W30
        .byte           N05   , En1 , v100
        .byte   W06
        .byte           N11   , En1 , v092
        .byte           N11   , Fn3 , v100
        .byte   W12
@ 006   ----------------------------------------
        .byte                   Bn0
        .byte           N64   , An2 , v080
        .byte           N08   , An4 , v072
        .byte   W09
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Bn0 , v096
        .byte           N05   , Gs4 , v072
        .byte   W06
        .byte           N08   , An4
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte   W03
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Gs4 , v072
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte           N08   , An4 , v072
        .byte   W09
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
@ 007   ----------------------------------------
        .byte                   An4 , v060
        .byte   W06
        .byte                   Bn0 , v096
        .byte           N05   , Gs4 , v072
        .byte   W06
        .byte           N08   , An4
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte   W03
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Gs4 , v072
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte           N64   , An2 , v044
        .byte           N08   , An4 , v072
        .byte   W09
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Bn0 , v096
        .byte           N05   , Gs4 , v072
        .byte   W06
        .byte           N08   , An4
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte   W03
        .byte           N02   , Gs4 , v068
        .byte   W03
@ 008   ----------------------------------------
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Gs4 , v072
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte           N08   , An4 , v072
        .byte   W09
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Bn0 , v096
        .byte           N05   , Gs4 , v072
        .byte   W06
        .byte           N08   , An4
        .byte   W06
        .byte           N11   , Bn0 , v100
        .byte   W03
        .byte           N02   , Gs4 , v068
        .byte   W03
        .byte           N05   , Gs4 , v060
        .byte   W06
        .byte           N11   , En1 , v100
        .byte           N05   , An4 , v072
        .byte   W06
        .byte                   An4 , v060
        .byte   W06
        .byte                   Gs4 , v072
        .byte   W06
@ 009   ----------------------------------------
        .byte           N64   , An2 , v044
        .byte           N23   , An4 , v072
        .byte   W96
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_070_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_070_1:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_1_LOOP:
        .byte           VOICE , 65
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 7
        .byte   W12
        .byte           N23   , Cn3 , v108
        .byte           N23   , An3
        .byte   W24
        .byte           N44   , Fn3
        .byte           N44   , Cn4
        .byte   W48
        .byte           N23   , Dn3
        .byte           N23   , An3
        .byte   W12
@ 001   ----------------------------------------
        .byte   W12
        .byte           N44   , Fn3
        .byte           N44   , Cn4
        .byte   W48
        .byte           N23   , Gn3
        .byte           N23   , Dn4
        .byte   W24
        .byte           N32   , Cn3
        .byte           N32   , Fn3
        .byte   W12
@ 002   ----------------------------------------
        .byte   W24
        .byte           N11   , En3
        .byte           N11   , An3
        .byte   W12
        .byte                   An3
        .byte           N11   , Cn4
        .byte   W12
        .byte           N23   , Fn3
        .byte           N23   , Bn3
        .byte   W24
        .byte                   An2
        .byte           N23   , Dn3
        .byte   W20
        .byte           VOL   , 10
        .byte   W04
@ 003   ----------------------------------------
        .byte           TIE
        .byte           TIE   , Gn3
        .byte   W96
@ 004   ----------------------------------------
        .byte   W23
        .byte           EOT   , Dn3
        .byte                   Gn3
        .byte   W01
        .byte           N23   , Cn3
        .byte           N23   , Fn3
        .byte   W24
        .byte           N92   , Bn2
        .byte           N92   , En3
        .byte   W48
@ 005   ----------------------------------------
        .byte   W48
        .byte           N44
        .byte           N44   , An3
        .byte   W48
@ 006   ----------------------------------------
        .byte           PAN   , c_v-7
        .byte   W06
        .byte           N28   , Gn4
        .byte   W30
        .byte           N05   , Dn5
        .byte   W12
        .byte           N17   , Fn4
        .byte   W18
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Gn4
        .byte   W12
        .byte           N23
        .byte   W12
@ 007   ----------------------------------------
        .byte   W18
        .byte                   Dn5
        .byte   W24
        .byte           N05   , Gn4
        .byte   W12
        .byte           N23
        .byte   W36
        .byte           N05   , Dn4
        .byte   W06
@ 008   ----------------------------------------
        .byte                   Cn4
        .byte   W06
        .byte           N28   , Dn5
        .byte   W36
        .byte           N05
        .byte   W12
        .byte           N23   , Gn4
        .byte   W30
        .byte           N05
        .byte   W11
        .byte           VOL   , 4
        .byte   W01
@ 009   ----------------------------------------
        .byte   W01
        .byte           PAN   , c_v-31
        .byte   W68
        .byte           N01   , Cn5
        .byte   W03
        .byte                   Cn5
        .byte   W15
        .byte           N19
        .byte   W09
@ 010   ----------------------------------------
        .byte   W32
        .byte   W02
        .byte                   Cn5
        .byte   W60
        .byte                   Cn5
        .byte   W02
@ 011   ----------------------------------------
        .byte   W66
        .byte                   Cn5
        .byte   W30
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte           VOL   , 7
        .byte           PAN   , c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_070_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_070_2:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_2_LOOP:
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 21
        .byte           PAN   , c_v-1
        .byte           BEND  , c_v-1
        .byte           TIE   , Gn3 , v072
        .byte           N56   , Dn4 , v100
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v-6
        .byte   W12
        .byte                   c_v-11
        .byte   W12
        .byte                   c_v-14
        .byte   W12
        .byte                   c_v-17
        .byte   W12
        .byte                   c_v-18
        .byte           N11   , An4
        .byte           N11   , Dn5
        .byte   W12
        .byte           PAN   , c_v-19
        .byte           N56   , Dn4
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v-22
        .byte   W12
@ 001   ----------------------------------------
        .byte                   c_v-8
        .byte   W12
        .byte                   c_v-5
        .byte   W12
        .byte                   c_v-4
        .byte   W12
        .byte           N11   , An4
        .byte           N11   , Dn5
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N56   , Dn4
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v-4
        .byte   W12
        .byte                   c_v-2
        .byte   W12
        .byte                   c_v+2
        .byte   W12
@ 002   ----------------------------------------
        .byte                   c_v+1
        .byte   W12
        .byte                   c_v-2
        .byte           N11   , An3
        .byte           N11   , Dn4
        .byte   W12
        .byte           PAN   , c_v-5
        .byte           N56
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v-8
        .byte   W12
        .byte                   c_v-16
        .byte   W24
        .byte                   c_v-15
        .byte   W12
        .byte                   c_v-14
        .byte           N11   , An3
        .byte           N11   , Dn4
        .byte   W11
        .byte           EOT   , Gn3
        .byte   W01
@ 003   ----------------------------------------
        .byte           VOL   , 67
        .byte           PAN   , c_v-5
        .byte           N05   , Gn1
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W06
@ 004   ----------------------------------------
        .byte   W12
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
@ 005   ----------------------------------------
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
@ 006   ----------------------------------------
        .byte           VOL   , 57
        .byte           PAN   , c_v-23
        .byte           N23   , Gn2 , v100
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W24
@ 007   ----------------------------------------
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W24
@ 008   ----------------------------------------
        .byte   W06
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
@ 009   ----------------------------------------
        .byte           VOL   , 21
        .byte           PAN   , c_v-1
        .byte           BEND  , c_v+0
        .byte           TIE   , Gn2
        .byte           TIE   , Cn3
        .byte           TIE   , Fn3
        .byte   W06
        .byte           PAN   , c_v-6
        .byte   W12
        .byte                   c_v-11
        .byte   W12
        .byte                   c_v-14
        .byte   W12
        .byte                   c_v-17
        .byte   W12
        .byte                   c_v-18
        .byte   W12
        .byte                   c_v-19
        .byte   W12
        .byte                   c_v-16
        .byte   W12
        .byte                   c_v-10
        .byte   W06
@ 010   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte   W06
        .byte           PAN   , c_v-8
        .byte   W12
        .byte                   c_v-4
        .byte   W24
        .byte                   c_v-5
        .byte   W12
        .byte                   c_v-4
        .byte   W06
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           PAN   , c_v-2
        .byte   W12
        .byte                   c_v+2
        .byte   W05
        .byte           EOT   , Gn2
        .byte                   Cn3
        .byte                   Fn3
        .byte   W01
        .byte           TIE   , Cn3
        .byte           TIE   , Gn3
        .byte           TIE   , Dn4
        .byte   W06
        .byte           PAN   , c_v+1
        .byte   W06
@ 011   ----------------------------------------
        .byte   W06
        .byte                   c_v-6
        .byte   W12
        .byte                   c_v-10
        .byte   W12
        .byte                   c_v-14
        .byte   W12
        .byte                   c_v-8
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W06
        .byte           PAN   , c_v-5
        .byte   W12
        .byte                   c_v-4
        .byte   W18
        .byte                   c_v-6
        .byte   W11
        .byte           EOT   , Cn3
        .byte                   Gn3
        .byte                   Dn4
        .byte   W01
@ 012   ----------------------------------------
        .byte           PAN   , c_v-5
        .byte           N68   , Gn3 , v072
        .byte           N68   , Dn4 , v100
        .byte           N68   , Gn4
        .byte   W30
        .byte           BEND  , c_v+0
        .byte   W66
@ 013   ----------------------------------------
        .byte           PAN   , c_v-1
        .byte           BEND  , c_v-1
        .byte   GOTO
         .word  mus_pkmn_bw12_070_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_070_3:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_3_LOOP:
        .byte           VOICE , 25
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 60
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
        .byte   W72
        .byte           N05   , Dn1 , v116
        .byte   W06
        .byte                   Dn0 , v108
        .byte   W06
        .byte                   Fn0
        .byte   W06
        .byte                   Dn0
        .byte   W06
@ 006   ----------------------------------------
        .byte           N11   , Gn0
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn1
        .byte   W12
        .byte           N05   , Gn0
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Fn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn0
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Dn1
        .byte   W06
@ 007   ----------------------------------------
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn1
        .byte   W12
        .byte           N05   , Gn0
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Fn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn0
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   An1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , An1
        .byte   W12
@ 008   ----------------------------------------
        .byte           N05   , Gn0
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn0
        .byte   W12
        .byte           N05
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N11   , Gn1
        .byte   W12
        .byte           N05   , Gn0
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Fn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
@ 009   ----------------------------------------
        .byte           TIE   , Gn0
        .byte   W96
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W40
        .byte   W01
        .byte           EOT
        .byte   W54
        .byte   W01
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_070_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_070_4:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_4_LOOP:
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
        .byte                   36
        .byte           PAN   , c_v+18
        .byte           N05   , Cn5 , v100
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Dn5 , v096
        .byte   W06
        .byte                   Gn4 , v056
        .byte   W06
        .byte                   Gn4 , v032
        .byte   W06
        .byte                   Gn4 , v020
        .byte   W06
        .byte                   Gn4 , v008
        .byte   W06
        .byte           PAN   , c_v+5
        .byte           N05   , Gn4 , v076
        .byte   W06
        .byte                   Dn4 , v100
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Fn4
        .byte   W06
@ 004   ----------------------------------------
        .byte                   En4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4 , v104
        .byte   W06
        .byte                   Dn4 , v092
        .byte   W06
        .byte                   Gn3 , v048
        .byte   W06
        .byte                   Gn3 , v032
        .byte   W06
        .byte                   Gn3 , v020
        .byte   W06
        .byte                   Gn3 , v016
        .byte   W06
        .byte           PAN   , c_v-15
        .byte           N05   , Gn3 , v076
        .byte   W06
        .byte                   Dn3 , v100
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   En3 , v084
        .byte   W06
        .byte                   Dn3 , v076
        .byte   W06
        .byte                   Cn3 , v056
        .byte   W06
        .byte                   Dn3 , v040
        .byte   W06
@ 005   ----------------------------------------
        .byte                   Dn3 , v024
        .byte   W06
        .byte                   Dn3 , v008
        .byte   W06
        .byte                   Dn3 , v004
        .byte   W60
        .byte           PAN   , c_v+10
        .byte           VOL   , 57
        .byte           N05   , Fn3 , v100
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , An3
        .byte   W06
@ 006   ----------------------------------------
        .byte           N11   , Bn2
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , Dn3
        .byte   W06
        .byte           N11   , Bn2
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , Dn3
        .byte           N05   , An3
        .byte   W06
        .byte                   An3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Bn3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , An3
        .byte   W06
        .byte           N11   , Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte           N11   , Fn3
        .byte   W12
        .byte           N05   , Gn2
        .byte           N05   , Dn3
        .byte   W06
        .byte           N17   , Bn2
        .byte           N17   , Gn3
        .byte   W12
@ 007   ----------------------------------------
        .byte   W06
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , En3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , An3
        .byte   W12
        .byte                   An2
        .byte           N11   , Dn3
        .byte   W12
        .byte                   Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , An3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , En3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Fn3
        .byte   W06
@ 008   ----------------------------------------
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , An2
        .byte           N11   , Dn3
        .byte   W12
        .byte                   Gn2
        .byte           N11   , Cn3
        .byte   W12
        .byte                   An2
        .byte           N11   , Dn3
        .byte   W12
        .byte           N05   , Gn2
        .byte           N05   , Cn3
        .byte   W06
        .byte           N11   , An2
        .byte           N11   , Dn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , An3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Dn4
        .byte   W06
@ 009   ----------------------------------------
        .byte           N11   , Gn3
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v052
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v032
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v012
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v004
        .byte           N11   , Fn4
        .byte   W24
        .byte           VOL   , 31
        .byte   W24
@ 010   ----------------------------------------
        .byte   W48
        .byte           N05   , Cn5 , v100
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Dn5 , v096
        .byte   W06
@ 011   ----------------------------------------
        .byte                   Gn4 , v056
        .byte   W06
        .byte                   Gn4 , v032
        .byte   W06
        .byte                   Gn4 , v020
        .byte   W06
        .byte                   Gn4 , v008
        .byte   W72
        .byte                   Cn6 , v100
        .byte   W06
@ 012   ----------------------------------------
        .byte                   Dn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte                   Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte                   Dn6
        .byte   W06
        .byte                   Cn6
        .byte   W06
        .byte                   Dn6 , v096
        .byte   W06
        .byte                   Gn5 , v056
        .byte   W06
        .byte                   Gn5 , v032
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
        .byte                   Gn5 , v008
        .byte   W36
@ 013   ----------------------------------------
        .byte           VOL   , 57
        .byte           PAN   , c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_070_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_070_5:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_5_LOOP:
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v-16
        .byte           VOL   , 14
        .byte   W72
        .byte           N64   , Gn5 , v100
        .byte   W24
@ 001   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte   W04
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-3
        .byte   W04
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W06
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-8
        .byte   W04
        .byte                   c_v-9
        .byte   W04
        .byte                   c_v-10
        .byte   W02
        .byte                   c_v-11
        .byte   W42
        .byte                   c_v+0
        .byte           N64   , Cn6
        .byte   W18
@ 002   ----------------------------------------
        .byte   W06
        .byte           BEND  , c_v-1
        .byte   W04
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-3
        .byte   W04
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W06
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-8
        .byte   W04
        .byte                   c_v-9
        .byte   W04
        .byte                   c_v-10
        .byte   W02
        .byte                   c_v-11
        .byte   W54
@ 003   ----------------------------------------
        .byte                   c_v+0
        .byte   W72
        .byte           N64
        .byte   W24
@ 004   ----------------------------------------
        .byte           BEND  , c_v-1
        .byte   W04
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-3
        .byte   W04
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W06
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-8
        .byte   W04
        .byte                   c_v-9
        .byte   W04
        .byte                   c_v-10
        .byte   W02
        .byte                   c_v-11
        .byte   W60
@ 005   ----------------------------------------
        .byte                   c_v+0
        .byte           N64   , Bn5
        .byte   W24
        .byte           BEND  , c_v-1
        .byte   W04
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-3
        .byte   W04
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-5
        .byte   W06
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-7
        .byte   W02
        .byte                   c_v-8
        .byte   W04
        .byte                   c_v-9
        .byte   W04
        .byte                   c_v-10
        .byte   W02
        .byte                   c_v-11
        .byte   W36
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
        .byte   W96
@ 013   ----------------------------------------
        .byte                   c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_070_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_070_6:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_6_LOOP:
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+20
        .byte           VOL   , 21
        .byte   W96
@ 001   ----------------------------------------
        .byte   W24
        .byte           BEND  , c_v-11
        .byte           N68   , En5 , v100
        .byte   W06
        .byte           BEND  , c_v-10
        .byte   W06
        .byte                   c_v-9
        .byte   W03
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-7
        .byte   W03
        .byte                   c_v-6
        .byte   W02
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-4
        .byte   W02
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-1
        .byte   W01
        .byte                   c_v+0
        .byte   W02
        .byte                   c_v+1
        .byte   W01
        .byte                   c_v+2
        .byte   W02
        .byte                   c_v+3
        .byte   W01
        .byte                   c_v+4
        .byte   W02
        .byte                   c_v+6
        .byte   W01
        .byte                   c_v+7
        .byte   W02
        .byte                   c_v+8
        .byte   W01
        .byte                   c_v+9
        .byte   W02
        .byte                   c_v+10
        .byte   W30
@ 002   ----------------------------------------
        .byte   W40
        .byte                   c_v-11
        .byte           N52   , Gn5
        .byte   W06
        .byte           BEND  , c_v-10
        .byte   W06
        .byte                   c_v-9
        .byte   W03
        .byte                   c_v-8
        .byte   W02
        .byte                   c_v-7
        .byte   W03
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-5
        .byte   W02
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-3
        .byte   W02
        .byte                   c_v-2
        .byte   W01
        .byte                   c_v-1
        .byte   W02
        .byte                   c_v+0
        .byte   W01
        .byte                   c_v+1
        .byte   W02
        .byte                   c_v+2
        .byte   W01
        .byte                   c_v+3
        .byte   W02
        .byte                   c_v+4
        .byte   W01
        .byte                   c_v+6
        .byte   W02
        .byte                   c_v+7
        .byte   W01
        .byte                   c_v+8
        .byte   W02
        .byte                   c_v+9
        .byte   W01
        .byte                   c_v+10
        .byte   W14
@ 003   ----------------------------------------
        .byte           PAN   , c_v-9
        .byte           BEND  , c_v+0
        .byte   W06
        .byte           VOL   , 48
        .byte   W42
        .byte           N32   , Cn3
        .byte           N32   , Fn3
        .byte   W36
        .byte           N11   , Bn2
        .byte           N11   , En3
        .byte   W12
@ 004   ----------------------------------------
        .byte           N32
        .byte           N32   , An3
        .byte   W36
        .byte           N11
        .byte           N11   , En4
        .byte   W12
        .byte           N32   , Gn3
        .byte           N32   , Dn4
        .byte   W36
        .byte           N23   , Cn3
        .byte           N23   , Gn3
        .byte   W12
@ 005   ----------------------------------------
        .byte   W12
        .byte           N11   , Dn3
        .byte           N11   , An3
        .byte   W12
        .byte                   En3
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Dn3
        .byte           N11   , Bn3
        .byte   W12
        .byte                   En3
        .byte           N11   , Cn4
        .byte   W12
        .byte           N23   , Fn3
        .byte           N23   , Dn4
        .byte   W06
        .byte           VOL   , 50
        .byte   W06
        .byte                   52
        .byte   W06
        .byte                   54
        .byte   W06
        .byte                   56
        .byte           N17   , An3
        .byte           N17   , Gn4
        .byte   W12
@ 006   ----------------------------------------
        .byte   W06
        .byte           N05   , An3 , v048
        .byte           N05   , Gn4
        .byte   W90
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
        .byte   W96
@ 013   ----------------------------------------
        .byte           VOL   , 21
        .byte           PAN   , c_v+20
        .byte   GOTO
         .word  mus_pkmn_bw12_070_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_070_7:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_7_LOOP:
        .byte           VOICE , 23
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           PAN   , c_v+30
        .byte           VOL   , 3
        .byte   W03
        .byte           PAN   , c_v+39
        .byte           TIE   , Gn3 , v072
        .byte           N56   , Dn4 , v100
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v+34
        .byte   W12
        .byte                   c_v+29
        .byte   W12
        .byte                   c_v+26
        .byte   W12
        .byte                   c_v+23
        .byte   W12
        .byte                   c_v+22
        .byte           N11   , An4
        .byte           N11   , Dn5
        .byte   W12
        .byte           PAN   , c_v+21
        .byte           N56   , Dn4
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v+18
        .byte   W09
@ 001   ----------------------------------------
        .byte   W03
        .byte                   c_v+32
        .byte   W12
        .byte                   c_v+35
        .byte   W12
        .byte                   c_v+36
        .byte   W12
        .byte           N11   , An4
        .byte           N11   , Dn5
        .byte   W12
        .byte           PAN   , c_v+35
        .byte           N56   , Dn4
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v+36
        .byte   W12
        .byte                   c_v+38
        .byte   W12
        .byte                   c_v+42
        .byte   W09
@ 002   ----------------------------------------
        .byte   W03
        .byte                   c_v+41
        .byte   W12
        .byte                   c_v+38
        .byte           N11   , An3
        .byte           N11   , Dn4
        .byte   W12
        .byte           PAN   , c_v+35
        .byte           N56
        .byte           N56   , Gn4
        .byte   W12
        .byte           PAN   , c_v+32
        .byte   W12
        .byte                   c_v+24
        .byte   W24
        .byte                   c_v+25
        .byte   W12
        .byte                   c_v+26
        .byte           N11   , An3
        .byte           N11   , Dn4
        .byte   W09
@ 003   ----------------------------------------
        .byte   W02
        .byte           EOT   , Gn3
        .byte           VOL   , 15
        .byte   W01
        .byte           PAN   , c_v+50
        .byte           N05   , Gn1
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W03
@ 004   ----------------------------------------
        .byte   W15
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W03
@ 005   ----------------------------------------
        .byte   W03
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W06
        .byte                   Gn1 , v100
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn2
        .byte   W06
        .byte           N17   , Cn3
        .byte   W18
        .byte           N05   , Gn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Gn1
        .byte   W06
        .byte                   Dn1 , v116
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte                   Gn0
        .byte   W03
@ 006   ----------------------------------------
        .byte   W03
        .byte           PAN   , c_v+17
        .byte           N23   , Gn2 , v100
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W21
@ 007   ----------------------------------------
        .byte   W03
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W21
@ 008   ----------------------------------------
        .byte   W09
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W18
        .byte           N23   , Gn2
        .byte           N23   , Dn3
        .byte   W24
        .byte           N28   , Dn2
        .byte           N28   , Bn2
        .byte   W30
        .byte           N17   , Fn2
        .byte           N17   , Cn3
        .byte   W15
@ 009   ----------------------------------------
        .byte   W03
        .byte           PAN   , c_v+39
        .byte           VOL   , 5
        .byte           TIE   , Gn2
        .byte           TIE   , Cn3
        .byte           TIE   , Fn3
        .byte   W06
        .byte           PAN   , c_v+34
        .byte   W12
        .byte                   c_v+29
        .byte   W12
        .byte                   c_v+26
        .byte   W12
        .byte                   c_v+23
        .byte   W12
        .byte                   c_v+22
        .byte   W12
        .byte                   c_v+21
        .byte   W12
        .byte                   c_v+18
        .byte   W12
        .byte                   c_v+32
        .byte   W03
@ 010   ----------------------------------------
        .byte   W09
        .byte                   c_v+35
        .byte   W12
        .byte                   c_v+36
        .byte   W24
        .byte                   c_v+35
        .byte   W12
        .byte                   c_v+36
        .byte   W12
        .byte                   c_v+38
        .byte   W12
        .byte                   c_v+42
        .byte   W05
        .byte           EOT   , Gn2
        .byte                   Cn3
        .byte                   Fn3
        .byte   W01
        .byte           TIE   , Cn3
        .byte           TIE   , Gn3
        .byte           TIE   , Dn4
        .byte   W06
        .byte           PAN   , c_v+41
        .byte   W03
@ 011   ----------------------------------------
        .byte   W09
        .byte                   c_v+38
        .byte   W12
        .byte                   c_v+21
        .byte   W12
        .byte                   c_v+18
        .byte   W12
        .byte                   c_v+32
        .byte   W12
        .byte                   c_v+35
        .byte   W12
        .byte                   c_v+36
        .byte   W18
        .byte                   c_v+32
        .byte   W09
@ 012   ----------------------------------------
        .byte   W02
        .byte           EOT   , Cn3
        .byte                   Gn3
        .byte                   Dn4
        .byte   W01
        .byte           PAN   , c_v+35
        .byte           N68   , Gn3 , v072
        .byte           N68   , Dn4 , v100
        .byte           N68   , Gn4
        .byte   W92
        .byte   W01
@ 013   ----------------------------------------
        .byte           VOL   , 3
        .byte           PAN   , c_v+30
        .byte   GOTO
         .word  mus_pkmn_bw12_070_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_070_8:
        .byte   KEYSH , mus_pkmn_bw12_070_key+0
@ 000   ----------------------------------------
mus_pkmn_bw12_070_8_LOOP:
        .byte           VOICE , 0
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 10
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W68
        .byte   W01
        .byte                   18
        .byte   W24
        .byte   W03
@ 003   ----------------------------------------
        .byte   W03
        .byte           PAN   , c_v-30
        .byte           N05   , Cn5 , v100
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Dn5 , v096
        .byte   W06
        .byte                   Gn4 , v056
        .byte   W06
        .byte                   Gn4 , v032
        .byte   W06
        .byte                   Gn4 , v020
        .byte   W06
        .byte                   Gn4 , v008
        .byte   W06
        .byte           PAN   , c_v-43
        .byte           N05   , Gn4 , v076
        .byte   W06
        .byte                   Dn4 , v100
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte                   Fn4
        .byte   W03
@ 004   ----------------------------------------
        .byte   W03
        .byte                   En4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   Cn4 , v104
        .byte   W06
        .byte                   Dn4 , v092
        .byte   W06
        .byte                   Gn3 , v048
        .byte   W06
        .byte                   Gn3 , v032
        .byte   W06
        .byte                   Gn3 , v020
        .byte   W06
        .byte                   Gn3 , v016
        .byte   W06
        .byte           PAN   , c_v-63
        .byte           N05   , Gn3 , v076
        .byte   W06
        .byte                   Dn3 , v100
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   En3 , v084
        .byte   W06
        .byte                   Dn3 , v076
        .byte   W06
        .byte                   Cn3 , v056
        .byte   W06
        .byte                   Dn3 , v040
        .byte   W03
@ 005   ----------------------------------------
        .byte   W03
        .byte                   Dn3 , v024
        .byte   W06
        .byte                   Dn3 , v008
        .byte   W06
        .byte                   Dn3 , v004
        .byte   W56
        .byte   W01
        .byte           VOL   , 24
        .byte   W03
        .byte           PAN   , c_v-40
        .byte           N05   , Fn3 , v100
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , An3
        .byte   W03
@ 006   ----------------------------------------
        .byte   W03
        .byte           N11   , Bn2
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , Dn3
        .byte   W06
        .byte           N11   , Bn2
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , Dn3
        .byte           N05   , An3
        .byte   W06
        .byte                   An3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N05   , Bn3
        .byte   W06
        .byte                   Fn3
        .byte           N05   , An3
        .byte   W06
        .byte           N11   , Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Cn3
        .byte           N11   , Fn3
        .byte   W12
        .byte           N05   , Gn2
        .byte           N05   , Dn3
        .byte   W06
        .byte           N17   , Bn2
        .byte           N17   , Gn3
        .byte   W09
@ 007   ----------------------------------------
        .byte   W09
        .byte           N05   , Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , En3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , An3
        .byte   W12
        .byte                   An2
        .byte           N11   , Dn3
        .byte   W12
        .byte                   Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , An3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , Cn3
        .byte           N05   , Fn3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , En3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Fn3
        .byte   W03
@ 008   ----------------------------------------
        .byte   W03
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , An2
        .byte           N11   , Dn3
        .byte   W12
        .byte                   Gn2
        .byte           N11   , Cn3
        .byte   W12
        .byte                   An2
        .byte           N11   , Dn3
        .byte   W12
        .byte           N05   , Gn2
        .byte           N05   , Cn3
        .byte   W06
        .byte           N11   , An2
        .byte           N11   , Dn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , An3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Gn3
        .byte   W06
        .byte           N11   , Dn3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N05   , En3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Fn3
        .byte           N05   , Dn4
        .byte   W03
@ 009   ----------------------------------------
        .byte   W03
        .byte           N11   , Gn3
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v060
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v032
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v012
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gn3 , v004
        .byte           N11   , Fn4
        .byte   W21
        .byte           VOL   , 10
        .byte   W24
@ 010   ----------------------------------------
        .byte   W48
        .byte   W03
        .byte           N05   , Cn5 , v100
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   En5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Dn5 , v096
        .byte   W03
@ 011   ----------------------------------------
        .byte   W03
        .byte                   Gn4 , v056
        .byte   W06
        .byte                   Gn4 , v032
        .byte   W06
        .byte                   Gn4 , v020
        .byte   W06
        .byte                   Gn4 , v008
        .byte   W72
        .byte                   Cn6 , v100
        .byte   W03
@ 012   ----------------------------------------
        .byte   W03
        .byte                   Dn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte                   Fn6
        .byte   W06
        .byte                   En6
        .byte   W06
        .byte                   Dn6
        .byte   W06
        .byte                   Cn6
        .byte   W06
        .byte                   Dn6 , v096
        .byte   W06
        .byte                   Gn5 , v056
        .byte   W06
        .byte                   Gn5 , v032
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
        .byte                   Gn5 , v008
        .byte   W32
        .byte   W01
@ 013   ----------------------------------------
        .byte           PAN   , c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_070_8_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_070:
        .byte   9                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_070_pri   @ Priority
        .byte   mus_pkmn_bw12_070_rev   @ Reverb

        .word   mus_pkmn_bw12_070_grp  

        .word   mus_pkmn_bw12_070_0
        .word   mus_pkmn_bw12_070_1
        .word   mus_pkmn_bw12_070_2
        .word   mus_pkmn_bw12_070_3
        .word   mus_pkmn_bw12_070_4
        .word   mus_pkmn_bw12_070_5
        .word   mus_pkmn_bw12_070_6
        .word   mus_pkmn_bw12_070_7
        .word   mus_pkmn_bw12_070_8

        .end
