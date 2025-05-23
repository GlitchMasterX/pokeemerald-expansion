        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_019_grp, voicegroup538
        .equ    mus_pkmn_bw12_019_pri, 0
        .equ    mus_pkmn_bw12_019_rev, 0
        .equ    mus_pkmn_bw12_019_key, 0

        .section .rodata
        .global mus_pkmn_bw12_019
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_019_0:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 92/2
        .byte           VOICE , 39
        .byte           PAN   , c_v-24
        .byte           VOL   , 57
        .byte   W24
        .byte           N14   , Cn2 , v080
        .byte   W24
        .byte                   Cn2 , v084
        .byte   W24
        .byte                   Cn2 , v080
        .byte   W24
@ 001   ----------------------------------------
        .byte                   Cn2 , v084
        .byte   W24
        .byte                   Cn2 , v080
        .byte   W24
        .byte           N09   , Cn2 , v076
        .byte   W12
        .byte           N20   , Cn2 , v084
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte           N23   , Cn2 , v080
        .byte   W60
        .byte           N14
        .byte   W24
@ 003   ----------------------------------------
        .byte                   Cn2 , v076
        .byte   W24
        .byte                   Cn2 , v080
        .byte   W24
        .byte           N08   , Cn2 , v076
        .byte   W12
        .byte           N20   , Cn2 , v104
        .byte   W36
@ 004   ----------------------------------------
        .byte   W12
        .byte           N04   , Cn2 , v096
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_019_1:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           PAN   , c_v-24
        .byte           VOL   , 46
        .byte           N02   , Fs0 , v092
        .byte   W03
        .byte                   Fs0 , v084
        .byte   W03
        .byte                   Fs0 , v088
        .byte   W03
        .byte                   Fs0 , v084
        .byte   W03
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
@ 001   ----------------------------------------
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W36
@ 002   ----------------------------------------
        .byte   W60
        .byte                   Fs0
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
@ 003   ----------------------------------------
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W06
        .byte                   Fs0 , v096
        .byte   W06
        .byte           N01   , Fs0 , v092
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W24
        .byte   W02
        .byte                   Fs0 , v080
        .byte   W02
        .byte                   Fs0 , v068
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v076
        .byte   W02
        .byte                   Fs0 , v064
        .byte   W02
        .byte                   Fs0 , v068
        .byte   W02
@ 004   ----------------------------------------
        .byte                   Fs0 , v076
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte                   Fs0 , v072
        .byte   W02
        .byte                   Fs0 , v088
        .byte   W02
        .byte                   Fs0 , v084
        .byte   W02
        .byte           N05   , Fs0 , v108
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_019_2:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           PAN   , c_v+6
        .byte           VOL   , 67
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11
        .byte           N11   , An3 , v120
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , Ds3
        .byte           N11   , As3 , v120
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v104
        .byte   W06
        .byte           N11   , Dn3 , v108
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v104
        .byte   W06
@ 001   ----------------------------------------
        .byte           N11   , As2 , v108
        .byte           N11   , Cs3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N10   , Fs3 , v112
        .byte           N10   , Cs4 , v120
        .byte   W12
        .byte           N44   , Gn3 , v108
        .byte           N44   , Dn4 , v120
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte                   As3 , v108
        .byte           N44   , Cn4 , v112
        .byte   W48
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , Dn3 , v116
        .byte           N11   , An3
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
@ 003   ----------------------------------------
        .byte           N11   , Ds3 , v116
        .byte           N11   , As3
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , Fn3 , v116
        .byte           N11   , Cn4
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v104
        .byte   W06
        .byte           N11   , Fs3 , v116
        .byte           N11   , Cs4
        .byte   W12
        .byte           N44   , Fs3 , v112
        .byte           N44   , Dn4 , v120
        .byte   W36
@ 004   ----------------------------------------
        .byte   W12
        .byte           N05   , Fs3 , v108
        .byte           N05   , Dn4 , v112
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_019_3:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 35
        .byte           PAN   , c_v-14
        .byte           VOL   , 72
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W36
        .byte           N01   , Fn3 , v096
        .byte   W02
        .byte                   An3 , v088
        .byte   W02
        .byte                   Cn4 , v104
        .byte   W02
        .byte                   Fn4 , v100
        .byte   W02
        .byte                   An4 , v112
        .byte   W02
        .byte                   Cn5 , v108
        .byte   W02
        .byte                   Fn5 , v124
        .byte   W02
        .byte                   Cn5 , v127
        .byte   W02
        .byte                   An4 , v116
        .byte   W02
        .byte                   Fn4 , v124
        .byte   W02
        .byte                   Cn4 , v108
        .byte   W02
        .byte                   An3 , v112
        .byte   W36
        .byte   W02
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W07
        .byte                   An4 , v104
        .byte   W02
        .byte                   Bn4 , v096
        .byte   W01
        .byte                   Cs5 , v104
        .byte   W02
        .byte                   Dn5 , v112
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_019_4:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 23
        .byte           PAN   , c_v-44
        .byte           VOL   , 67
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , Dn3 , v120
        .byte           N11   , An3 , v127
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v112
        .byte           N02   , Dn3 , v116
        .byte   W06
        .byte           N11   , Fn3 , v120
        .byte           N11   , As3 , v127
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , En3 , v120
        .byte           N11   , An3 , v124
        .byte   W12
        .byte           N02   , An2 , v112
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
@ 001   ----------------------------------------
        .byte           N11   , As2 , v120
        .byte           N11   , Cs3 , v124
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , En3 , v120
        .byte           N11   , An3 , v124
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , Gs3 , v120
        .byte           N11   , Cs4 , v127
        .byte   W12
        .byte           N44   , An3 , v120
        .byte           N44   , Dn4 , v127
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte                   Gn3 , v116
        .byte           N44   , Cn4 , v120
        .byte   W48
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , En3 , v120
        .byte           N11   , An3 , v124
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
@ 003   ----------------------------------------
        .byte           N11   , Fn3 , v120
        .byte           N11   , As3 , v124
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v112
        .byte           N02   , Dn3 , v116
        .byte   W06
        .byte           N11   , Gn3 , v120
        .byte           N11   , Cn4 , v124
        .byte   W12
        .byte           N02   , An2 , v116
        .byte           N02   , Dn3 , v120
        .byte   W06
        .byte                   An2 , v108
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte           N11   , Gs3 , v120
        .byte           N11   , Cs4 , v124
        .byte   W12
        .byte           N23   , An3 , v120
        .byte           N23   , Dn4 , v127
        .byte   W24
        .byte           N01   , Fs2 , v076
        .byte           N01   , Dn3 , v088
        .byte   W03
        .byte                   Gn2 , v068
        .byte           N01   , En3 , v080
        .byte   W03
        .byte                   An2 , v076
        .byte           N01   , Fs3 , v088
        .byte   W01
        .byte                   Bn2 , v072
        .byte           N01   , Gn3 , v080
        .byte   W02
        .byte                   Cs3
        .byte           N01   , An3 , v092
        .byte   W01
        .byte                   Dn3 , v076
        .byte           N01   , Bn3 , v084
        .byte   W02
@ 004   ----------------------------------------
        .byte                   En3
        .byte           N01   , Cn4 , v092
        .byte   W01
        .byte                   Fs3 , v080
        .byte           N01   , Dn4 , v088
        .byte   W02
        .byte                   Gn3 , v092
        .byte           N01   , En4 , v100
        .byte   W01
        .byte                   An3 , v084
        .byte           N01   , Fs4 , v096
        .byte   W02
        .byte                   Bn3
        .byte           N01   , Gn4 , v108
        .byte   W01
        .byte                   Cs4 , v092
        .byte           N01   , An4 , v100
        .byte   W02
        .byte                   Dn4 , v096
        .byte           N01   , Bn4 , v108
        .byte   W01
        .byte                   En4 , v092
        .byte           N01   , Cs5 , v100
        .byte   W02
        .byte           N04   , Fs4 , v108
        .byte           N04   , Dn5 , v120
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_019_5:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 30
        .byte           PAN   , c_v+16
        .byte           VOL   , 78
        .byte   W12
        .byte           N05   , Dn1 , v100
        .byte   W06
        .byte                   Dn1 , v096
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
@ 001   ----------------------------------------
        .byte           N10   , Cs1
        .byte   W12
        .byte           N05   , Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v096
        .byte   W18
        .byte                   Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
        .byte           N11   , An1 , v104
        .byte   W12
        .byte           N21   , Dn2 , v124
        .byte   W24
        .byte                   Dn1 , v120
        .byte   W12
@ 002   ----------------------------------------
mus_pkmn_bw12_019_5_2:
        .byte   W12
        .byte           N21   , Fn1 , v124
        .byte   W24
        .byte                   Cn1 , v120
        .byte   W24
        .byte           N05   , Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W18
        .byte                   Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
        .byte   PEND
@ 003   ----------------------------------------
mus_pkmn_bw12_019_5_3:
        .byte   W12
        .byte           N05   , Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W18
        .byte                   Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
        .byte           N11   , An1
        .byte   W12
        .byte           N44   , Dn1 , v108
        .byte   W36
        .byte   PEND
@ 004   ----------------------------------------
mus_pkmn_bw12_019_5_4:
        .byte   W12
        .byte           N05   , Dn1 , v104
        .byte   W84
        .byte   PEND
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_019_6:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 25
        .byte           PAN   , c_v+36
        .byte           VOL   , 78
        .byte   W12
        .byte           N03   , Dn0 , v116
        .byte   W06
        .byte                   Dn0 , v112
        .byte   W18
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v112
        .byte   W18
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v116
        .byte   W18
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v112
        .byte   W06
@ 001   ----------------------------------------
        .byte           N10   , Cs0 , v116
        .byte   W12
        .byte           N03   , Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v112
        .byte   W18
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v116
        .byte   W06
        .byte           N10   , An0 , v120
        .byte   W12
        .byte           N20   , Dn1 , v116
        .byte   W24
        .byte                   Dn0 , v112
        .byte   W12
@ 002   ----------------------------------------
        .byte   W12
        .byte                   Fn0 , v116
        .byte   W24
        .byte                   Cn0 , v112
        .byte   W24
        .byte           N03   , Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v116
        .byte   W18
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0 , v116
        .byte   W06
@ 003   ----------------------------------------
        .byte   W12
        .byte                   Dn0 , v120
        .byte   W06
        .byte                   Dn0
        .byte   W18
        .byte                   Dn0
        .byte   W06
        .byte                   Dn0 , v112
        .byte   W06
        .byte           N10   , An0 , v120
        .byte   W12
        .byte           N44   , Dn0 , v116
        .byte   W36
@ 004   ----------------------------------------
        .byte   W12
        .byte           N03   , Dn0 , v112
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_019_7:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 28
        .byte           PAN   , c_v-29
        .byte           VOL   , 72
        .byte           N02   , Fn2 , v068
        .byte   W03
        .byte                   Fn2 , v060
        .byte   W03
        .byte                   Fn2 , v080
        .byte   W03
        .byte                   Fn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
@ 001   ----------------------------------------
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N17   , Dn3 , v124
        .byte   W24
        .byte                   Dn2 , v120
        .byte   W12
@ 002   ----------------------------------------
        .byte   W12
        .byte                   Cn3 , v124
        .byte   W24
        .byte           N08   , Bn1 , v120
        .byte   W12
        .byte           N02   , Fn2 , v092
        .byte   W03
        .byte                   Fn2 , v088
        .byte   W03
        .byte                   Fn2 , v100
        .byte   W03
        .byte                   Fn2 , v092
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v092
        .byte   W06
        .byte           N02   , Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
@ 003   ----------------------------------------
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N02   , Gn2
        .byte   W03
        .byte                   Gn2 , v080
        .byte   W03
        .byte                   Gn2 , v088
        .byte   W03
        .byte                   Gn2 , v076
        .byte   W03
        .byte           N04   , Dn2 , v096
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte           N08   , Dn2 , v108
        .byte   W12
        .byte           N32   , An1 , v120
        .byte   W36
@ 004   ----------------------------------------
        .byte   W12
        .byte           N07   , An1 , v116
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_019_8:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 32
        .byte           PAN   , c_v-19
        .byte           VOL   , 72
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Dn3 , v104
        .byte           N11   , An3 , v120
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Ds3 , v104
        .byte           N11   , As3 , v120
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v104
        .byte   W06
        .byte           N11
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , An2 , v096
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v104
        .byte   W06
@ 001   ----------------------------------------
        .byte           N11   , As2
        .byte           N11   , Cs3 , v116
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Dn3 , v104
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Gs3 , v104
        .byte           N11   , Cs4 , v120
        .byte   W12
        .byte           N44   , An3 , v104
        .byte           N44   , Dn4 , v120
        .byte   W36
@ 002   ----------------------------------------
        .byte   W12
        .byte           N22   , Fn3 , v100
        .byte           N22   , Cn4 , v112
        .byte   W24
        .byte                   Cn3 , v100
        .byte           N22   , Fn3 , v112
        .byte   W24
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Dn3 , v104
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
@ 003   ----------------------------------------
        .byte           N11   , Ds3 , v104
        .byte           N11   , As3 , v116
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v108
        .byte   W06
        .byte           N11   , Fn3 , v104
        .byte           N11   , Cn4 , v116
        .byte   W12
        .byte           N02   , An2 , v100
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   An2 , v092
        .byte           N02   , Dn3 , v104
        .byte   W06
        .byte           N11   , Gs3
        .byte           N11   , Cs4 , v116
        .byte   W12
        .byte           N44   , An3 , v104
        .byte           N44   , Dn4 , v120
        .byte   W36
@ 004   ----------------------------------------
        .byte   W12
        .byte           N05   , An3 , v100
        .byte           N05   , Dn4 , v112
        .byte   W84
@ 005   ----------------------------------------
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_019_9:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 20
        .byte           PAN   , c_v+11
        .byte           VOL   , 57
        .byte   W12
        .byte           N05   , Dn1 , v100
        .byte   W06
        .byte                   Dn1 , v096
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W18
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
@ 001   ----------------------------------------
        .byte           N11   , Cs1
        .byte   W12
        .byte           N05   , Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v096
        .byte   W18
        .byte                   Dn1 , v108
        .byte   W06
        .byte                   Dn1 , v100
        .byte   W06
        .byte           N11   , An1 , v104
        .byte   W12
        .byte           N21   , Dn1 , v124
        .byte   W24
        .byte                   Dn1 , v120
        .byte   W12
@ 002   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_019_5_2
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_019_5_3
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_019_5_4
@ 005   ----------------------------------------
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_019_10:
        .byte   KEYSH , mus_pkmn_bw12_019_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           PAN   , c_v+56
        .byte           VOL   , 18
        .byte   W18
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , An3 , v120
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , As3 , v120
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
@ 001   ----------------------------------------
        .byte                   Dn3 , v104
        .byte   W06
        .byte           N11   , Cs3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N10   , Cs4 , v120
        .byte   W12
        .byte           N44   , Dn4
        .byte   W30
@ 002   ----------------------------------------
        .byte   W18
        .byte                   Cn4 , v112
        .byte   W48
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , An3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
@ 003   ----------------------------------------
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N10   , As3 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v108
        .byte   W06
        .byte           N11   , Cn4 , v116
        .byte   W12
        .byte           N02   , Dn3 , v112
        .byte   W06
        .byte                   Dn3 , v104
        .byte   W06
        .byte           N10   , Cs4 , v116
        .byte   W12
        .byte           N44   , Dn4 , v120
        .byte   W30
@ 004   ----------------------------------------
        .byte   W18
        .byte           N05   , Dn4 , v112
        .byte   W78
@ 005   ----------------------------------------
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_019:
        .byte   11                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_019_pri   @ Priority
        .byte   mus_pkmn_bw12_019_rev   @ Reverb

        .word   mus_pkmn_bw12_019_grp  

        .word   mus_pkmn_bw12_019_0
        .word   mus_pkmn_bw12_019_1
        .word   mus_pkmn_bw12_019_2
        .word   mus_pkmn_bw12_019_3
        .word   mus_pkmn_bw12_019_4
        .word   mus_pkmn_bw12_019_5
        .word   mus_pkmn_bw12_019_6
        .word   mus_pkmn_bw12_019_7
        .word   mus_pkmn_bw12_019_8
        .word   mus_pkmn_bw12_019_9
        .word   mus_pkmn_bw12_019_10

        .end
