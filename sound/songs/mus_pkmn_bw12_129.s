        .include "MPlayDef.s"

        .equ    mus_pkmn_bw12_129_grp, voicegroup536
        .equ    mus_pkmn_bw12_129_pri, 0
        .equ    mus_pkmn_bw12_129_rev, 0
        .equ    mus_pkmn_bw12_129_key, 0

        .section .rodata
        .global mus_pkmn_bw12_129
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_pkmn_bw12_129_0:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 176/2
        .byte           VOICE , 61
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 39
        .byte           PAN   , c_v-53
        .byte           MOD   , 2
        .byte   W06
        .byte           N44   , Cn5 , v100
        .byte           N44   , Cn6
        .byte   W44
        .byte   W02
        .byte           PAN   , c_v+32
        .byte   W02
        .byte           N44   , Fs4 , v092
        .byte           N44   , Fs5
        .byte   W42
@ 001   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-62
        .byte           N44   , Cn4 , v100
        .byte           N44   , Cn5
        .byte   W48
        .byte                   Fs3 , v104
        .byte           N44   , Fs4
        .byte   W42
@ 002   ----------------------------------------
        .byte   W04
        .byte           VOL   , 85
        .byte   W02
        .byte           PAN   , c_v-9
        .byte           BEND  , c_v-11
        .byte   W01
        .byte           TIE   , Cn1 , v112
        .byte           TIE   , Cn2
        .byte   W06
        .byte           BEND  , c_v-10
        .byte   W09
        .byte                   c_v-9
        .byte   W09
        .byte                   c_v-8
        .byte   W09
        .byte                   c_v-7
        .byte   W09
        .byte                   c_v-6
        .byte   W09
        .byte                   c_v-5
        .byte   W09
        .byte                   c_v-4
        .byte   W09
        .byte                   c_v-3
        .byte   W09
        .byte                   c_v-2
        .byte   W06
        .byte                   c_v-1
        .byte   W05
@ 003   ----------------------------------------
        .byte   W07
        .byte                   c_v+0
        .byte   W09
        .byte                   c_v+1
        .byte   W09
        .byte                   c_v+2
        .byte   W06
        .byte                   c_v+3
        .byte   W09
        .byte                   c_v+4
        .byte   W09
        .byte                   c_v+5
        .byte   W09
        .byte                   c_v+6
        .byte   W09
        .byte                   c_v+7
        .byte   W09
        .byte                   c_v+8
        .byte   W09
        .byte                   c_v+9
        .byte   W09
        .byte                   c_v+10
        .byte   W02
@ 004   ----------------------------------------
        .byte   W03
        .byte           EOT   , Cn1
        .byte                   Cn2
        .byte   W03
        .byte           N92   , Cn3 , v076
        .byte           N92   , Cn4
        .byte   W03
        .byte           BEND  , c_v-11
        .byte   W03
        .byte                   c_v-10
        .byte   W06
        .byte                   c_v-9
        .byte   W03
        .byte                   c_v-8
        .byte   W06
        .byte                   c_v-7
        .byte   W03
        .byte                   c_v-6
        .byte   W06
        .byte                   c_v-5
        .byte   W03
        .byte                   c_v-4
        .byte   W03
        .byte                   c_v-3
        .byte   W06
        .byte                   c_v-2
        .byte   W03
        .byte                   c_v-1
        .byte   W06
        .byte                   c_v+0
        .byte   W03
        .byte                   c_v+1
        .byte   W06
        .byte                   c_v+2
        .byte   W03
        .byte                   c_v+3
        .byte   W03
        .byte                   c_v+4
        .byte   W06
        .byte                   c_v+5
        .byte   W03
        .byte                   c_v+6
        .byte   W06
        .byte                   c_v+7
        .byte   W03
        .byte                   c_v+8
        .byte   W06
@ 005   ----------------------------------------
        .byte                   c_v+9
        .byte   W03
        .byte                   c_v+10
        .byte   W03
        .byte           VOL   , 64
        .byte           N15   , En3 , v127
        .byte           N92   , Cn5 , v120
        .byte   W16
        .byte           N15   , Gn3 , v127
        .byte   W16
        .byte                   En3
        .byte   W16
        .byte                   As3
        .byte   W16
        .byte                   Fs3
        .byte   W16
        .byte                   Gn3
        .byte   W10
@ 006   ----------------------------------------
        .byte   W06
        .byte           VOL   , 59
        .byte           N11   , Cn4 , v104
        .byte           N10   , En4
        .byte   W36
        .byte           VOL   , 85
        .byte           N01   , Cn1 , v127
        .byte   W08
        .byte           N36
        .byte   W40
        .byte           VOL   , 62
        .byte           N01   , Cn3 , v088
        .byte   W01
        .byte                   Ds3
        .byte   W02
        .byte                   Fn3
        .byte   W01
        .byte                   Gn3
        .byte   W02
@ 007   ----------------------------------------
        .byte                   As3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte                   Cs4
        .byte   W01
        .byte                   Ds4
        .byte   W02
        .byte           N11   , Cn4 , v104
        .byte           N11   , En4 , v080
        .byte   W48
        .byte           N44   , Cs4
        .byte           N44   , Fn4
        .byte   W36
        .byte           N01   , Cn3 , v088
        .byte   W01
        .byte                   Ds3
        .byte   W02
        .byte                   Fn3
        .byte   W01
        .byte                   Gn3
        .byte   W02
@ 008   ----------------------------------------
        .byte                   As3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte                   Cs4
        .byte   W01
        .byte                   Ds4
        .byte   W02
        .byte           VOL   , 59
        .byte           N11   , Cn4 , v104
        .byte           N11   , En4 , v080
        .byte   W36
        .byte           VOL   , 85
        .byte           N01   , Cn1 , v127
        .byte   W06
        .byte           N52
        .byte   W42
        .byte           VOL   , 62
        .byte   W01
        .byte           N01   , Ds3 , v088
        .byte   W02
        .byte                   Fn3
        .byte   W01
        .byte                   Gn3
        .byte   W02
@ 009   ----------------------------------------
        .byte                   As3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte                   Cs4
        .byte   W01
        .byte                   Ds4
        .byte   W02
        .byte           N11   , Cn4 , v104
        .byte           N11   , En4 , v080
        .byte   W48
        .byte           N44   , Fs4 , v084
        .byte           N44   , As4 , v060
        .byte   W42
@ 010   ----------------------------------------
mus_pkmn_bw12_129_0_LOOP:
        .byte   W03
        .byte           MOD   , 0
        .byte           BEND  , c_v+0
        .byte   W01
        .byte           VOICE , 126
        .byte           VOL   , 85
        .byte   W02
        .byte           PAN   , c_v+11
        .byte           N68   , Cn2 , v127
        .byte           N68   , Cn3
        .byte   W72
        .byte           N22   , Gn2 , v116
        .byte           N22   , Gn3
        .byte   W18
@ 011   ----------------------------------------
mus_pkmn_bw12_129_0_11:
        .byte   W06
        .byte           N32   , Ds2 , v127
        .byte           N32   , Ds3
        .byte   W36
        .byte                   Gs2
        .byte           N32   , Gs3
        .byte   W36
        .byte           N23   , Gn2
        .byte           N23   , Gn3
        .byte   W18
        .byte   PEND
@ 012   ----------------------------------------
        .byte   W06
        .byte           N04   , Ds2
        .byte           N04   , Ds3
        .byte   W18
        .byte                   Dn2
        .byte           N04   , Dn3
        .byte   W06
        .byte           N68   , Cn2
        .byte           N68   , Cn3
        .byte   W66
@ 013   ----------------------------------------
        .byte   W06
        .byte           N01   , Cn2 , v124
        .byte   W04
        .byte                   Cn2
        .byte   W08
        .byte           N10   , As2 , v127
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2 , v124
        .byte   W12
        .byte           N11   , Cn2 , v127
        .byte   W12
        .byte           N04   , As1
        .byte   W06
        .byte           N10   , Cn2
        .byte   W12
        .byte           N04   , As1
        .byte   W06
        .byte           N02   , Cn2
        .byte   W06
@ 014   ----------------------------------------
        .byte                   As1
        .byte   W06
        .byte           N68   , Cn2
        .byte           N68   , Cn3
        .byte   W72
        .byte           N23   , Gn2
        .byte           N23   , Gn3
        .byte   W18
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_0_11
@ 016   ----------------------------------------
        .byte   W06
        .byte           N05   , Ds2 , v120
        .byte           N05   , Ds3
        .byte   W18
        .byte                   Dn2
        .byte           N05   , Dn3
        .byte   W06
        .byte           N64   , Cn2
        .byte           N64   , Cn3
        .byte   W66
@ 017   ----------------------------------------
        .byte   W06
        .byte           N05   , Cn2 , v127
        .byte   W12
        .byte           N10   , As2 , v124
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Ds2 , v124
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N11   , Gs2 , v088
        .byte   W06
@ 018   ----------------------------------------
        .byte   W06
        .byte           N68   , Dn2 , v108
        .byte           N68   , Dn3
        .byte   W72
        .byte           N22   , An2 , v096
        .byte           N22   , An3
        .byte   W18
@ 019   ----------------------------------------
        .byte   W06
        .byte           N32   , Fn2 , v108
        .byte           N32   , Fn3
        .byte   W36
        .byte                   As2 , v104
        .byte           N32   , As3
        .byte   W36
        .byte           N22   , An2 , v096
        .byte           N22   , An3
        .byte   W18
@ 020   ----------------------------------------
        .byte   W06
        .byte           N06   , Fn2 , v108
        .byte           N06   , Fn3
        .byte   W18
        .byte           N04   , Gn2
        .byte           N04   , Gn3
        .byte   W06
        .byte           N68   , An2
        .byte           N68   , An3
        .byte   W66
@ 021   ----------------------------------------
        .byte   W06
        .byte           N01   , Dn2 , v088
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte           N10   , Cn3 , v124
        .byte   W12
        .byte                   Gs2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte           N01   , Dn2 , v127
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Dn2
        .byte   W12
        .byte           N03   , Cn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Cn2
        .byte   W06
        .byte           PAN   , c_v+16
        .byte           N06   , Bn2 , v108
        .byte           N06   , En3
        .byte   W24
        .byte                   Bn2 , v084
        .byte           N06   , En3
        .byte   W24
        .byte                   Bn2 , v096
        .byte           N06   , En3
        .byte   W16
        .byte                   Bn2 , v084
        .byte           N06   , En3
        .byte   W16
        .byte                   Bn2 , v092
        .byte           N06   , En3
        .byte   W10
@ 023   ----------------------------------------
        .byte   W06
        .byte                   Bn2 , v100
        .byte           N06   , En3
        .byte   W16
        .byte                   Dn3 , v084
        .byte           N06   , Gn3
        .byte   W16
        .byte                   Dn3 , v076
        .byte           N06   , Gn3
        .byte   W16
        .byte                   Cn3 , v096
        .byte           N06   , Fn3
        .byte   W16
        .byte                   An2 , v084
        .byte           N06   , Dn3
        .byte   W16
        .byte                   Cn3
        .byte           N06   , Fn3
        .byte   W10
@ 024   ----------------------------------------
        .byte   W06
        .byte                   Bn2 , v108
        .byte           N06   , En3
        .byte   W24
        .byte                   Bn2 , v084
        .byte           N06   , En3
        .byte   W24
        .byte                   Bn2 , v096
        .byte           N06   , En3
        .byte   W16
        .byte                   Bn2 , v084
        .byte           N06   , En3
        .byte   W16
        .byte                   Bn2
        .byte           N06   , En3
        .byte   W10
@ 025   ----------------------------------------
        .byte   W06
        .byte                   Bn2 , v104
        .byte           N06   , En3
        .byte   W16
        .byte                   Dn3 , v112
        .byte           N06   , Gn3
        .byte   W16
        .byte                   Dn3
        .byte           N06   , Gn3
        .byte   W16
        .byte                   Cn3 , v096
        .byte           N06   , Fn3
        .byte   W16
        .byte                   Fn3 , v116
        .byte           N06   , As3
        .byte   W16
        .byte                   En3
        .byte           N06   , An3
        .byte   W10
@ 026   ----------------------------------------
mus_pkmn_bw12_129_0_26:
        .byte   W06
        .byte           N02   , Bn3 , v100
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v060
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v100
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v068
        .byte           N02   , En4
        .byte   W06
        .byte           N07   , Bn3 , v084
        .byte           N07   , En4
        .byte   W12
        .byte           N02   , Bn3 , v100
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v060
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v100
        .byte           N02   , En4
        .byte   W06
        .byte                   Bn3 , v068
        .byte           N02   , En4
        .byte   W06
        .byte           N10   , Bn3 , v084
        .byte           N10   , En4
        .byte   W12
        .byte           N02   , Bn3 , v080
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte   PEND
@ 027   ----------------------------------------
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N09   , Bn3 , v084
        .byte           N09   , En4
        .byte   W12
        .byte           N02   , Bn3 , v080
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , Dn4
        .byte           N10   , Gn4
        .byte   W12
        .byte           N06   , Cn4 , v104
        .byte           N06   , Fn4
        .byte   W16
        .byte                   An3 , v092
        .byte           N06   , Dn4
        .byte   W16
        .byte                   Cn4 , v100
        .byte           N06   , Fn4
        .byte   W10
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_0_26
@ 029   ----------------------------------------
        .byte           N02   , Bn3 , v080
        .byte           N01   , En4
        .byte   W06
        .byte           N09   , Bn3 , v084
        .byte           N09   , En4
        .byte   W12
        .byte           N02   , Bn3 , v080
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N02   , Bn3
        .byte           N01   , En4
        .byte   W06
        .byte           N10   , Dn4 , v096
        .byte           N10   , Gn4
        .byte   W12
        .byte           N06   , Cn4 , v108
        .byte           N06   , Fn4
        .byte   W16
        .byte                   Fn4 , v088
        .byte           N06   , As4
        .byte   W16
        .byte                   As4
        .byte           N06   , Cs5
        .byte   W10
@ 030   ----------------------------------------
        .byte   W06
        .byte           VOL   , 61
        .byte           TIE   , Dn4 , v116
        .byte           TIE   , An4
        .byte           TIE   , Dn5
        .byte   W90
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W06
        .byte                   Dn3
        .byte   W90
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte           VOICE , 61
        .byte   W04
        .byte           EOT
        .byte           EOT   , Dn4
        .byte                   An4
        .byte                   Dn5
        .byte   W02
        .byte           VOL   , 74
        .byte           N68   , Dn3 , v108
        .byte           N68   , Dn4
        .byte   W72
        .byte           N22   , An3 , v088
        .byte           N22   , An4
        .byte   W18
@ 035   ----------------------------------------
        .byte   W06
        .byte           N36   , Fn3
        .byte           N36   , Fn4
        .byte   W40
        .byte           N30   , As3
        .byte           N30   , As4
        .byte   W32
        .byte           N22   , An3 , v076
        .byte           N22   , An4
        .byte   W18
@ 036   ----------------------------------------
        .byte   W06
        .byte           N06   , Fn3 , v088
        .byte           N06   , Fn4
        .byte   W16
        .byte                   En3 , v076
        .byte           N06   , En4
        .byte   W08
        .byte           N68   , Dn3 , v088
        .byte           N68   , Dn4
        .byte   W66
@ 037   ----------------------------------------
        .byte   W78
        .byte           N20   , Gs3
        .byte           N20   , An4 , v056
        .byte   W18
@ 038   ----------------------------------------
        .byte   W06
        .byte           N16   , Fn4 , v104
        .byte           N16   , An4
        .byte   W18
        .byte           N05   , Cs3
        .byte           N05   , Cn4
        .byte   W06
        .byte           N44   , Dn3
        .byte           N44   , Dn4
        .byte   W48
        .byte           N22   , An3 , v080
        .byte           N22   , An4
        .byte   W18
@ 039   ----------------------------------------
        .byte   W06
        .byte           N36   , Fn3 , v100
        .byte           N36   , Fn4
        .byte   W40
        .byte           N30   , As3 , v092
        .byte           N30   , As4
        .byte   W32
        .byte           N22   , An3 , v100
        .byte           N22   , An4
        .byte   W18
@ 040   ----------------------------------------
        .byte   W06
        .byte           N06   , Fn3 , v112
        .byte           N06   , Fn4
        .byte   W16
        .byte                   En3 , v096
        .byte           N06   , En4
        .byte   W08
        .byte           N68   , Dn3 , v092
        .byte           N68   , Dn4 , v104
        .byte   W66
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte   W06
        .byte                   En3 , v100
        .byte           N68   , En4
        .byte   W72
        .byte           N22   , Bn3 , v088
        .byte           N22   , Bn4
        .byte   W18
@ 043   ----------------------------------------
        .byte   W06
        .byte           N32   , An3 , v108
        .byte           N32   , An4
        .byte   W32
        .byte   W02
        .byte           N36   , Cn4 , v100
        .byte           N36   , Cn5
        .byte   W36
        .byte   W02
        .byte           N22   , Bn3 , v108
        .byte           N22   , Bn4
        .byte   W18
@ 044   ----------------------------------------
        .byte   W06
        .byte           N11   , Gn3 , v100
        .byte           N11   , Gn4
        .byte   W18
        .byte           N04   , An3
        .byte           N04   , An4
        .byte   W06
        .byte           N68   , Bn3
        .byte           N68   , Bn4
        .byte   W66
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W06
        .byte           VOICE , 30
        .byte           PAN   , c_v-31
        .byte   W90
@ 049   ----------------------------------------
        .byte   W06
        .byte           VOL   , 55
        .byte   W40
        .byte   W01
        .byte           VOICE , 11
        .byte   W30
        .byte   W01
        .byte           N01   , Bn1 , v127
        .byte   W02
        .byte                   Cn2
        .byte   W02
        .byte                   Dn2
        .byte   W02
        .byte                   En2
        .byte   W02
        .byte                   Fn2
        .byte   W02
        .byte                   Gn2
        .byte   W02
        .byte           PAN   , c_v+21
        .byte           N01   , An2
        .byte   W02
        .byte                   Bn2
        .byte   W02
        .byte                   Cn3
        .byte   W02
@ 050   ----------------------------------------
        .byte                   Dn3
        .byte   W02
        .byte           PAN   , c_v+49
        .byte           N01   , En3
        .byte   W02
        .byte                   Fn3
        .byte   W02
        .byte           PAN   , c_v+0
        .byte           N92   , Cn3 , v084
        .byte           N92   , Ds3 , v080
        .byte           N92   , Gn3 , v096
        .byte   W23
        .byte           MOD   , 1
        .byte   W66
        .byte   W01
@ 051   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N80   , Cs3 , v084
        .byte           N80   , Fn3 , v080
        .byte           N80   , Gs3 , v096
        .byte   W28
        .byte   W01
        .byte           MOD   , 1
        .byte   W54
        .byte   W01
        .byte           N03   , Ds3 , v088
        .byte           N03   , Gn3 , v104
        .byte           N03   , As3
        .byte   W06
@ 052   ----------------------------------------
        .byte                   Cs3 , v080
        .byte           N03   , Fn3 , v092
        .byte           N03   , Gs3
        .byte   W06
        .byte           MOD   , 0
        .byte           N92   , Cn3 , v084
        .byte           N92   , Ds3 , v080
        .byte           N92   , Gn3 , v096
        .byte   W32
        .byte           MOD   , 1
        .byte   W56
        .byte   W02
@ 053   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N44   , Gn1 , v088
        .byte           N04   , Gn2 , v084
        .byte           N04   , Cn3 , v104
        .byte   W06
        .byte                   Fn2 , v084
        .byte           N04   , As2 , v104
        .byte   W06
        .byte           N32   , Gn2 , v084
        .byte           N32   , Cn3 , v104
        .byte   W36
        .byte           PAN   , c_v+13
        .byte           N01   , Fn2 , v120
        .byte           N01   , Fn3
        .byte   W02
        .byte                   En2 , v112
        .byte           N01   , En3
        .byte   W02
        .byte                   Dn2 , v108
        .byte           N01   , Dn3
        .byte   W02
        .byte           PAN   , c_v-3
        .byte           N01   , Cn2 , v104
        .byte           N01   , Cn3
        .byte   W02
        .byte                   Bn1
        .byte           N01   , Bn2
        .byte   W02
        .byte           PAN   , c_v-16
        .byte           N01   , An1 , v096
        .byte           N01   , An2
        .byte   W02
        .byte                   Gn1 , v100
        .byte           N01   , Gn2
        .byte   W02
        .byte                   Fn1
        .byte           N01   , Fn2
        .byte   W02
        .byte           PAN   , c_v-36
        .byte           N01   , En1 , v104
        .byte           N01   , En2
        .byte   W02
        .byte                   Dn1 , v108
        .byte           N01   , Dn2
        .byte   W02
        .byte           PAN   , c_v-49
        .byte           N01   , Cn1 , v112
        .byte           N01   , Cn2
        .byte   W02
        .byte                   As1
        .byte   W02
        .byte           PAN   , c_v-38
        .byte           N01   , Gs1 , v080
        .byte   W02
        .byte                   Fs1 , v076
        .byte           N01   , Ds2 , v112
        .byte   W02
        .byte                   En2 , v116
        .byte   W02
        .byte                   Fs2
        .byte   W02
        .byte                   Gs2 , v112
        .byte   W02
        .byte           PAN   , c_v+4
        .byte           N01   , An2 , v116
        .byte   W02
        .byte                   Bn2
        .byte   W02
        .byte                   Cn3 , v112
        .byte   W02
        .byte           PAN   , c_v+20
        .byte           N01   , Cs3 , v116
        .byte   W02
@ 054   ----------------------------------------
        .byte                   Ds3
        .byte   W02
        .byte           PAN   , c_v+23
        .byte           N01   , Fn3 , v120
        .byte   W02
        .byte                   Fs3 , v127
        .byte   W02
        .byte           PAN   , c_v+0
        .byte           N92   , Cn3 , v084
        .byte           N92   , Ds3 , v080
        .byte           N92   , Gn3 , v096
        .byte   W32
        .byte   W01
        .byte           MOD   , 1
        .byte   W56
        .byte   W01
@ 055   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N44   , Cs3 , v084
        .byte           N44   , Fn3 , v080
        .byte           N44   , Gs3 , v096
        .byte   W48
        .byte           N01   , Cn3 , v084
        .byte           N01   , En3 , v080
        .byte           N01   , Gn3 , v096
        .byte   W01
        .byte           N30   , Cs3 , v084
        .byte           N30   , Fn3 , v080
        .byte           N30   , Gs3 , v096
        .byte   W32
        .byte   W03
        .byte           N04   , Ds3 , v088
        .byte           N04   , Gn3 , v104
        .byte           N04   , As3
        .byte   W06
@ 056   ----------------------------------------
        .byte           N03   , Cs3 , v088
        .byte           N03   , Fn3 , v104
        .byte           N03   , Gs3
        .byte   W06
        .byte           N68   , Cn3 , v084
        .byte           N68   , Ds3 , v080
        .byte           N68   , Gn3 , v096
        .byte   W72
        .byte           N01   , Bn1 , v080
        .byte           N01   , Fn2
        .byte   W02
        .byte                   Cn2 , v084
        .byte           N01   , Fs2
        .byte   W02
        .byte                   Dn2 , v088
        .byte           N01   , Gs2
        .byte   W02
        .byte                   En2
        .byte           N01   , As2
        .byte   W02
        .byte                   Fn2 , v092
        .byte           N01   , Bn2
        .byte   W02
        .byte                   Gn2
        .byte           N01   , Cs3
        .byte   W02
        .byte                   An2 , v096
        .byte           N01   , Ds3
        .byte   W02
        .byte                   Bn2 , v108
        .byte           N01   , Fn3
        .byte   W02
        .byte                   Cn3
        .byte           N01   , Fs3
        .byte   W02
@ 057   ----------------------------------------
        .byte                   Dn3
        .byte           N01   , Gs3
        .byte   W02
        .byte                   En3 , v112
        .byte           N01   , As3
        .byte   W02
        .byte                   Fn3 , v120
        .byte           N01   , Bn3
        .byte   W02
        .byte           N84   , Cn3 , v084
        .byte           N84   , Gn3 , v072
        .byte           N84   , Cn4 , v088
        .byte   W90
@ 058   ----------------------------------------
        .byte           N05   , As2 , v096
        .byte           N05   , As3 , v092
        .byte           N04   , Ds4 , v112
        .byte   W06
        .byte           TIE   , Cs3 , v088
        .byte           TIE   , Gs3 , v080
        .byte           TIE   , Cs4 , v096
        .byte   W64
        .byte           MOD   , 1
        .byte   W24
        .byte   W02
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W04
        .byte           EOT   , Cs3
        .byte                   Gs3
        .byte                   Cs4
        .byte   W02
        .byte           MOD   , 0
        .byte           N92   , Fn2 , v068
        .byte           N92   , Cs3
        .byte           N92   , As3 , v084
        .byte   W90
@ 062   ----------------------------------------
        .byte   W06
        .byte           N14   , Gn3 , v096
        .byte           N14   , Cn4 , v116
        .byte   W90
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           N06   , Ds2 , v044
        .byte           N06   , Ds4
        .byte   W02
@ 066   ----------------------------------------
        .byte   W04
        .byte           VOL   , 70
        .byte   W02
        .byte           N92   , Cs2 , v080
        .byte           TIE   , Cs4 , v056
        .byte   W90
@ 067   ----------------------------------------
        .byte   W06
        .byte           N92   , Fs2 , v084
        .byte           TIE   , Fs4 , v064
        .byte   W90
@ 068   ----------------------------------------
        .byte   W06
        .byte           N92   , As2 , v088
        .byte           N92   , As4 , v036
        .byte   W90
@ 069   ----------------------------------------
        .byte   W04
        .byte           EOT   , Cs4
        .byte                   Fs4
        .byte   W02
        .byte           N92   , Cs3 , v112
        .byte           N92   , As3 , v076
        .byte           N92   , Gs4 , v060
        .byte           N92   , Cs5 , v044
        .byte   W90
@ 070   ----------------------------------------
        .byte   W06
        .byte           N14   , Gn3 , v076
        .byte           N14   , Cn4
        .byte           N14   , Gn4 , v032
        .byte           N14   , Cn5 , v048
        .byte   W15
        .byte           N01   , Bn4 , v040
        .byte   W01
        .byte                   An4 , v012
        .byte   W02
        .byte                   Gn4 , v032
        .byte   W01
        .byte                   Fn4 , v020
        .byte   W02
        .byte                   En4 , v028
        .byte   W01
        .byte                   Dn4 , v020
        .byte   W02
        .byte                   Cn4 , v004
        .byte   W01
        .byte                   As3 , v016
        .byte   W02
        .byte                   An3 , v008
        .byte   W01
        .byte                   Gn3 , v012
        .byte   W60
        .byte   W02
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W66
        .byte           VOICE , 126
        .byte   W04
        .byte           PAN   , c_v+11
        .byte           VOL   , 85
        .byte   W24
        .byte   W02
@ 074   ----------------------------------------
        .byte           VOICE , 61
        .byte           VOL   , 62
        .byte           PAN   , c_v-9
        .byte           BEND  , c_v+10
        .byte           MOD   , 2
        .byte   GOTO
         .word  mus_pkmn_bw12_129_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_pkmn_bw12_129_1:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 61
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W06
        .byte                   76
        .byte           N05   , Fs3 , v088
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   En3
        .byte           N05   , En4
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Ds3
        .byte           N05   , Ds4
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
@ 001   ----------------------------------------
        .byte                   Cs3
        .byte           N05   , Cs4
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , Bn3
        .byte   W06
        .byte           N03   , Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte           N05   , As2
        .byte           N05   , As3
        .byte   W06
        .byte           N03   , Fs3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   Fs3
        .byte   W06
@ 002   ----------------------------------------
        .byte           N05   , An2
        .byte           N05   , An3
        .byte   W06
        .byte           VOL   , 85
        .byte           PAN   , c_v+40
        .byte   W72
        .byte           MOD   , 1
        .byte   W18
@ 003   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte   W90
@ 004   ----------------------------------------
        .byte   W78
        .byte                   1
        .byte   W18
@ 005   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N14   , En2 , v120
        .byte           N15   , En4
        .byte   W16
        .byte                   Gn2
        .byte           N15   , Gn4
        .byte   W16
        .byte                   En2
        .byte           N15   , En4
        .byte   W16
        .byte                   As2
        .byte           N15   , As4
        .byte   W16
        .byte                   Fs2
        .byte           N15   , Fs4
        .byte   W16
        .byte                   Gn2
        .byte           N15   , Gn4
        .byte   W10
@ 006   ----------------------------------------
        .byte   W06
        .byte           N11   , Gn2 , v124
        .byte           N11   , En3
        .byte           N10   , Cn4
        .byte   W36
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte           N40   , Cn1
        .byte           N40   , Cn2
        .byte   W42
        .byte           N01   , Cn3 , v112
        .byte   W01
        .byte                   Bn2
        .byte   W02
        .byte                   Cs3
        .byte   W01
        .byte                   Ds3
        .byte   W02
@ 007   ----------------------------------------
        .byte                   Fs3
        .byte   W01
        .byte                   Gn3
        .byte   W02
        .byte                   An3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte           N11   , Gn2 , v124
        .byte           N11   , En3 , v096
        .byte           N10   , Cn4 , v124
        .byte   W48
        .byte           N32   , Fn3 , v096
        .byte           N42   , Cs4 , v124
        .byte   W36
        .byte           N01   , Gs2 , v112
        .byte   W01
        .byte                   Bn2
        .byte   W02
        .byte                   Cs3
        .byte   W01
        .byte                   Ds3
        .byte   W02
@ 008   ----------------------------------------
        .byte                   Fs3
        .byte   W01
        .byte                   Gn3
        .byte   W02
        .byte                   An3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte           N11   , Cn3 , v124
        .byte           N11   , En3 , v096
        .byte           N10   , Cn4 , v124
        .byte   W36
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte           N52   , Cn1
        .byte           N52   , Cn2
        .byte   W42
        .byte           N01   , Gs2 , v112
        .byte   W01
        .byte                   Bn2
        .byte   W02
        .byte                   Cs3
        .byte   W01
        .byte                   Ds3
        .byte   W02
@ 009   ----------------------------------------
        .byte                   Fs3
        .byte   W01
        .byte                   Gn3
        .byte   W02
        .byte                   An3
        .byte   W01
        .byte                   Bn3
        .byte   W02
        .byte           N11   , Cn3 , v124
        .byte           N11   , En3 , v096
        .byte           N10   , Cn4 , v124
        .byte   W48
        .byte           N44   , Fs3
        .byte           N44   , As3 , v127
        .byte           N44   , Fs4
        .byte   W36
        .byte   W02
        .byte           MOD   , 3
        .byte   W04
@ 010   ----------------------------------------
mus_pkmn_bw12_129_1_LOOP:
        .byte   W04
        .byte           VOL   , 63
        .byte   W02
        .byte           MOD   , 0
        .byte           N01   , Cn3 , v127
        .byte   W01
        .byte           PAN   , c_v+31
        .byte   W05
        .byte           N01   , Ds4 , v120
        .byte   W06
        .byte                   Gn3 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   Ds3
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   Cn4 , v112
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
@ 011   ----------------------------------------
        .byte                   Cn4 , v112
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Ds4 , v120
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Gn3 , v120
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Gn4 , v124
        .byte   W06
        .byte                   Ds4 , v112
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Cn5 , v108
        .byte   W06
        .byte                   Gn4 , v124
        .byte   W06
@ 012   ----------------------------------------
        .byte                   Ds4 , v112
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Ds4 , v120
        .byte   W06
        .byte                   Gn3 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   Ds3
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   Cn4 , v112
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
@ 013   ----------------------------------------
        .byte                   Cn4 , v112
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Ds4 , v120
        .byte   W06
        .byte                   Gn3 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   Ds3
        .byte   W06
        .byte                   Gn3 , v127
        .byte           N01   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N01   , Cn4
        .byte   W06
        .byte           N03   , Ds4
        .byte           N03   , As4
        .byte   W06
        .byte           N01   , Gn3
        .byte           N01   , Cn4
        .byte   W06
        .byte                   Gn3
        .byte           N01   , Cn4
        .byte   W06
        .byte           N02   , Ds4
        .byte           N02   , As4
        .byte   W06
        .byte                   Cn4
        .byte           N02   , Gn4
        .byte   W06
@ 014   ----------------------------------------
        .byte                   Gn3
        .byte           N02   , Ds4
        .byte   W06
        .byte           N01   , Cs3
        .byte   W06
        .byte                   As4 , v108
        .byte   W06
        .byte                   Gn4 , v124
        .byte   W06
        .byte                   Ds4 , v112
        .byte   W06
        .byte                   As4 , v127
        .byte   W06
        .byte                   As4 , v108
        .byte   W06
        .byte                   As4 , v124
        .byte   W06
        .byte                   As4 , v112
        .byte   W06
        .byte                   Cs4 , v127
        .byte   W06
        .byte                   As4 , v108
        .byte   W06
        .byte                   Gn4 , v124
        .byte   W06
        .byte                   Ds4 , v112
        .byte   W06
        .byte                   Cn5 , v127
        .byte   W06
        .byte                   As4 , v108
        .byte   W06
        .byte                   Gn4 , v124
        .byte   W06
@ 015   ----------------------------------------
        .byte                   Ds4 , v112
        .byte   W06
        .byte                   Cn5 , v127
        .byte   W06
        .byte                   Cn5 , v108
        .byte   W06
        .byte                   Cn5 , v124
        .byte   W06
        .byte                   Cn5 , v112
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W07
        .byte                   Ds4
        .byte   W05
        .byte                   Ds5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Gn5
        .byte   W06
        .byte                   Ds5
        .byte   W06
        .byte                   Cn5
        .byte   W06
        .byte                   Gn4
        .byte   W06
@ 016   ----------------------------------------
        .byte                   Ds4
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Ds4 , v120
        .byte   W06
        .byte                   Gn3 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Cn4 , v120
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   Ds3
        .byte   W06
        .byte                   Ds4 , v127
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Ds4
        .byte   W06
@ 017   ----------------------------------------
        .byte                   Cn4
        .byte   W06
        .byte           VOL   , 82
        .byte           N02   , Fn2
        .byte           N02   , Cn3
        .byte   W06
        .byte                   Fn2 , v108
        .byte           N02   , Cn3
        .byte   W06
        .byte                   Fn2 , v124
        .byte           N02   , Cn3
        .byte   W06
        .byte                   Fn2 , v112
        .byte           N02   , Cn3
        .byte   W06
        .byte                   Fs2 , v127
        .byte           N02   , Cs3
        .byte   W06
        .byte                   Fs2 , v108
        .byte           N02   , Cs3
        .byte   W06
        .byte                   Fs2 , v124
        .byte           N02   , Cs3
        .byte   W06
        .byte                   Fs2 , v112
        .byte           N02   , Cs3
        .byte   W06
        .byte                   Gn2 , v127
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Gn2
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Gn2
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Gn2
        .byte           N02   , Dn3
        .byte   W06
        .byte                   Gs2
        .byte           N02   , Ds3
        .byte   W06
        .byte                   Gs2
        .byte           N02   , Ds3
        .byte   W06
        .byte                   Gs2
        .byte           N02   , Ds3
        .byte   W06
@ 018   ----------------------------------------
        .byte                   Gs2
        .byte           N02   , Ds3
        .byte   W04
        .byte           VOL   , 63
        .byte   W02
        .byte           N07   , An2
        .byte           N07   , Fn3 , v112
        .byte   W12
        .byte           N01   , An3 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   Fn4 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   An3 , v124
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   Dn4 , v124
        .byte   W06
        .byte                   Dn4 , v112
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   Dn4 , v124
        .byte   W06
@ 019   ----------------------------------------
        .byte                   Dn4 , v112
        .byte   W06
        .byte                   Dn3 , v127
        .byte   W06
        .byte                   Fn4 , v120
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   An3 , v120
        .byte   W06
        .byte                   Fn4 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   An3 , v124
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Fn4 , v127
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   An4 , v124
        .byte   W06
        .byte                   Fn4 , v112
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   Dn5 , v108
        .byte   W06
        .byte                   An4 , v124
        .byte   W06
@ 020   ----------------------------------------
        .byte                   Fn4 , v112
        .byte   W06
        .byte                   Dn3 , v127
        .byte   W06
        .byte                   Fn4 , v120
        .byte   W06
        .byte                   An3 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   Fn4 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   An3 , v124
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   Dn4 , v124
        .byte   W06
        .byte                   Dn4 , v112
        .byte   W06
        .byte                   Dn4 , v127
        .byte   W06
        .byte                   Dn4 , v108
        .byte   W06
        .byte                   Dn4 , v124
        .byte   W06
@ 021   ----------------------------------------
        .byte                   Dn4 , v112
        .byte   W06
        .byte                   Dn3 , v127
        .byte   W06
        .byte                   Fn4 , v120
        .byte   W06
        .byte                   An3 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   Fn4 , v127
        .byte   W06
        .byte                   Dn4 , v120
        .byte   W06
        .byte                   An3 , v124
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   An3 , v127
        .byte           N01   , Cn4
        .byte   W06
        .byte                   An3
        .byte           N01   , Cn4
        .byte   W06
        .byte                   Dn3
        .byte           N01   , An3
        .byte   W06
        .byte                   An3
        .byte           N01   , Cn4
        .byte   W06
        .byte                   An3
        .byte           N01   , Cn4
        .byte   W06
        .byte                   Dn3
        .byte           N01   , An3
        .byte   W06
        .byte           N02
        .byte           N02   , Cn4
        .byte   W06
@ 022   ----------------------------------------
        .byte                   As3
        .byte           N02   , Cs4
        .byte   W04
        .byte           PAN   , c_v+63
        .byte   W02
        .byte           N05   , An3 , v088
        .byte           N05   , Dn4
        .byte   W90
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
        .byte   W06
        .byte           PAN   , c_v+35
        .byte           N15   , Gn3
        .byte           N15   , Gn4
        .byte   W16
        .byte                   As3 , v060
        .byte           N15   , As4
        .byte   W16
        .byte                   Gn3
        .byte           N15   , Gn4
        .byte   W16
        .byte                   Dn3 , v056
        .byte           N15   , Dn4
        .byte   W16
        .byte                   Gn3
        .byte           N15   , Gn4
        .byte   W16
        .byte                   An3
        .byte           N15   , An4
        .byte   W10
@ 031   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-26
        .byte           N15   , Fs3 , v088
        .byte           N15   , Fs4
        .byte   W16
        .byte                   An3 , v072
        .byte           N15   , An4
        .byte   W16
        .byte                   Fs3 , v060
        .byte           N15   , Fs4
        .byte   W16
        .byte                   Dn3
        .byte           N15   , Dn4
        .byte   W16
        .byte                   Fs3 , v072
        .byte           N15   , Fs4
        .byte   W16
        .byte                   An3 , v064
        .byte           N15   , An4
        .byte   W10
@ 032   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+37
        .byte           N15   , Gn3 , v088
        .byte           N15   , Gn4
        .byte   W16
        .byte                   As3 , v060
        .byte           N15   , As4
        .byte   W16
        .byte                   Gn3 , v068
        .byte           N15   , Gn4
        .byte   W16
        .byte                   Dn3 , v072
        .byte           N15   , Dn4
        .byte   W16
        .byte                   Gn3 , v068
        .byte           N15   , Gn4
        .byte   W16
        .byte                   An3 , v064
        .byte           N15   , An4
        .byte   W10
@ 033   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-18
        .byte           N15   , Fs3 , v088
        .byte           N15   , Fs4
        .byte   W16
        .byte                   An3 , v060
        .byte           N15   , An4
        .byte   W16
        .byte                   Fs3 , v056
        .byte           N15   , Fs4
        .byte   W16
        .byte                   Dn3
        .byte           N15   , Dn4
        .byte   W16
        .byte                   Fs3 , v064
        .byte           N15   , Fs4
        .byte   W16
        .byte                   An3
        .byte           N15   , An4
        .byte   W10
@ 034   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-36
        .byte           N68   , Fn3 , v088
        .byte           N68   , An3
        .byte   W72
        .byte           N23   , Dn3
        .byte           N23   , Fn3
        .byte   W18
@ 035   ----------------------------------------
        .byte   W06
        .byte           N36
        .byte           N36   , As3
        .byte   W40
        .byte           N30   , Dn3
        .byte           N30   , Gn3
        .byte   W32
        .byte           N23   , An3
        .byte           N23   , Cs4
        .byte   W18
@ 036   ----------------------------------------
        .byte   W06
        .byte           N07   , Dn3
        .byte           N07   , Fn3
        .byte   W16
        .byte                   En3
        .byte           N07   , Gn3
        .byte   W08
        .byte           N68   , Fn3
        .byte           N68   , An3
        .byte   W66
@ 037   ----------------------------------------
        .byte   W78
        .byte           N22   , As2 , v127
        .byte           N22   , Dn4
        .byte           N22   , Fn4
        .byte   W12
        .byte           MOD   , 3
        .byte   W06
@ 038   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N68   , Fn3 , v088
        .byte           N68   , An3
        .byte           N10   , Dn5
        .byte   W72
        .byte           N23   , Dn3
        .byte           N23   , Fn3
        .byte   W18
@ 039   ----------------------------------------
        .byte   W06
        .byte           N36
        .byte           N36   , As3
        .byte   W40
        .byte           N30   , Gn3
        .byte           N30   , Cn4
        .byte   W32
        .byte           N23   , As3
        .byte           N23   , Cs4
        .byte   W18
@ 040   ----------------------------------------
        .byte   W06
        .byte           N07   , An3
        .byte           N07   , Dn4
        .byte   W16
        .byte                   Gn3
        .byte           N07   , Cn4
        .byte   W08
        .byte           N68   , Fn3
        .byte           N68   , An3
        .byte   W66
@ 041   ----------------------------------------
        .byte   W96
@ 042   ----------------------------------------
        .byte   W06
        .byte                   Gn3
        .byte           N68   , Bn3
        .byte   W72
        .byte           N23   , En3
        .byte           N23   , Gn3
        .byte   W18
@ 043   ----------------------------------------
        .byte   W06
        .byte           N32   , An3
        .byte           N32   , Cn4
        .byte   W32
        .byte   W02
        .byte           N36   , Fn3
        .byte           N36   , Bn3
        .byte   W36
        .byte   W02
        .byte           N23
        .byte           N23   , Ds4
        .byte   W18
@ 044   ----------------------------------------
        .byte   W06
        .byte           N11   , Gn3
        .byte           N11   , En4
        .byte   W18
        .byte           N04   , An3
        .byte           N04   , Fs4
        .byte   W06
        .byte           N68   , Bn3
        .byte           N68   , Gn4
        .byte   W66
@ 045   ----------------------------------------
        .byte   W96
@ 046   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+21
        .byte           VOL   , 85
        .byte           N17   , Dn3 , v112
        .byte           N17   , An3
        .byte   W18
        .byte                   Ds3 , v088
        .byte           N17   , As3
        .byte   W18
        .byte           N11   , Dn3
        .byte           N11   , An3
        .byte   W12
        .byte           N17   , Fn3 , v100
        .byte           N17   , Cn4
        .byte   W18
        .byte                   Ds3 , v088
        .byte           N17   , As3
        .byte   W18
        .byte           N11   , Cn3
        .byte           N11   , Gn3
        .byte   W06
@ 047   ----------------------------------------
        .byte   W06
        .byte           N17   , Dn3 , v112
        .byte           N17   , An3
        .byte   W18
        .byte                   Ds3 , v088
        .byte           N17   , As3
        .byte   W18
        .byte           N11   , Fn3
        .byte           N11   , Cn4
        .byte   W12
        .byte           N17   , Ds3 , v100
        .byte           N17   , As3
        .byte   W18
        .byte                   Fn3 , v088
        .byte           N17   , Cn4
        .byte   W18
        .byte           N11   , Gs3
        .byte           N11   , Ds4
        .byte   W06
@ 048   ----------------------------------------
        .byte   W06
        .byte           N17   , Gn3 , v112
        .byte           N17   , Dn4
        .byte   W18
        .byte                   Gs3 , v088
        .byte           N17   , Ds4
        .byte   W18
        .byte           N11   , Gn3
        .byte           N11   , Dn4
        .byte   W12
        .byte           N17   , As3 , v116
        .byte           N17   , Fn4
        .byte   W18
        .byte                   Gs3 , v088
        .byte           N17   , Ds4
        .byte   W18
        .byte           N11   , Fn3
        .byte           N11   , Cn4
        .byte   W06
@ 049   ----------------------------------------
        .byte   W06
        .byte           N17   , Gn3 , v108
        .byte           N17   , Dn4
        .byte   W18
        .byte                   Gs3 , v088
        .byte           N17   , Ds4
        .byte   W18
        .byte           N11   , As3
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Gs3 , v112
        .byte           N11   , Ds4
        .byte   W12
        .byte           N02   , Ds3
        .byte           N02   , Cn4
        .byte   W06
        .byte           N11   , As3 , v088
        .byte           N11   , Fn4
        .byte   W18
        .byte                   Cs4 , v127
        .byte           N11   , Gs4
        .byte   W06
@ 050   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+62
        .byte           VOL   , 39
        .byte           N07   , Cn3 , v088
        .byte           N07   , Gn3 , v104
        .byte   W08
        .byte                   As2 , v088
        .byte           N07   , Fn3 , v104
        .byte   W07
        .byte           N78   , Gn3
        .byte   W01
        .byte                   Cn3 , v088
        .byte   W72
        .byte   W02
@ 051   ----------------------------------------
        .byte   W06
        .byte           N80   , Cs3 , v096
        .byte           N80   , Gs3 , v108
        .byte   W84
        .byte           N02   , Ds3 , v088
        .byte           N02   , As3 , v104
        .byte   W06
@ 052   ----------------------------------------
        .byte                   Cs3 , v084
        .byte           N02   , Gs3 , v096
        .byte   W06
        .byte           N92   , Cn3 , v088
        .byte           N92   , Gn3 , v104
        .byte   W90
@ 053   ----------------------------------------
        .byte   W06
        .byte           N44   , Gn2 , v088
        .byte           N05   , Cn3 , v104
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte           N32   , Cn3
        .byte   W36
        .byte           N11   , Cn3 , v060
        .byte           N11   , Ds3 , v092
        .byte   W24
        .byte           N23   , Ds3 , v068
        .byte           N23   , Fn3 , v104
        .byte   W18
@ 054   ----------------------------------------
        .byte   W06
        .byte           N92   , Cn3 , v088
        .byte           N92   , Gn3 , v104
        .byte   W90
@ 055   ----------------------------------------
        .byte   W06
        .byte           N44   , Cs3 , v088
        .byte           N44   , Gs3 , v104
        .byte   W48
        .byte           N32   , Cs3 , v088
        .byte           N32   , Gs3 , v104
        .byte   W36
        .byte           N04   , Ds3 , v088
        .byte           N04   , As3 , v104
        .byte   W06
@ 056   ----------------------------------------
        .byte           N03   , Cs3 , v088
        .byte           N03   , Gs3 , v104
        .byte   W06
        .byte           N92   , Cn3 , v088
        .byte           N44   , Gn3 , v104
        .byte   W48
        .byte                   Fn3
        .byte   W42
@ 057   ----------------------------------------
        .byte   W06
        .byte           N84   , Gn3 , v080
        .byte           N44   , Cn4 , v092
        .byte   W48
        .byte           N32   , Ds4
        .byte   W42
@ 058   ----------------------------------------
        .byte           N05   , As2 , v084
        .byte           N05   , Fn3
        .byte   W05
        .byte           VOICE , 11
        .byte   W01
        .byte           PAN   , c_v+35
        .byte           VOL   , 46
        .byte           N04   , Fn3 , v100
        .byte   W06
        .byte                   Cs3 , v092
        .byte   W06
        .byte                   Gs3 , v096
        .byte   W06
        .byte                   Fn3 , v100
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Cs4
        .byte   W06
        .byte                   Gs3 , v092
        .byte   W06
        .byte                   Fn4 , v096
        .byte   W07
        .byte                   Cs4 , v100
        .byte   W05
        .byte           PAN   , c_v+35
        .byte           N04   , Cs5
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Gs3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Cs3
        .byte   W06
@ 059   ----------------------------------------
        .byte                   Gs2
        .byte   W06
        .byte           PAN   , c_v+35
        .byte           N04   , Fn3
        .byte   W06
        .byte                   Cs3 , v092
        .byte   W06
        .byte                   Gs3 , v096
        .byte   W06
        .byte                   Fn3 , v100
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Cs4
        .byte   W06
        .byte                   Gs3 , v092
        .byte   W06
        .byte                   Fn4 , v096
        .byte   W07
        .byte                   Cs4 , v100
        .byte   W05
        .byte           PAN   , c_v+35
        .byte           N04   , Cs5
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Gs3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Cs3
        .byte   W06
@ 060   ----------------------------------------
        .byte                   Gs2
        .byte   W06
        .byte           PAN   , c_v+35
        .byte           N04   , Gs3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Fn4
        .byte   W06
        .byte                   Cs4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           PAN   , c_v+35
        .byte           N04   , Cs5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Cs4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Gs3
        .byte   W06
@ 061   ----------------------------------------
        .byte                   Fn3
        .byte   W06
        .byte           PAN   , c_v+35
        .byte           N04   , Cs3
        .byte   W06
        .byte                   Fn3 , v092
        .byte   W06
        .byte                   Gs3 , v096
        .byte   W06
        .byte                   Cn4 , v100
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , Cs4
        .byte   W06
        .byte                   Fn4 , v092
        .byte   W06
        .byte                   Gs4 , v096
        .byte   W07
        .byte                   Cs5 , v100
        .byte   W05
        .byte           PAN   , c_v+35
        .byte           N04   , Cn5
        .byte   W06
        .byte                   Cs5
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   Gs4
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N04   , En4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Cn4
        .byte   W06
@ 062   ----------------------------------------
        .byte                   Cs4
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           N07   , Ds4 , v088
        .byte   W02
@ 066   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+25
        .byte           VOL   , 70
        .byte           N07   , Cs3 , v100
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   As3 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , Cn4
        .byte   W08
        .byte                   Cs4 , v080
        .byte   W08
        .byte                   Cn4 , v100
        .byte   W08
        .byte           PAN   , c_v+25
        .byte           N07   , As3
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   Cs3 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , As2
        .byte   W08
        .byte                   Fs2 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W02
@ 067   ----------------------------------------
mus_pkmn_bw12_129_1_67:
        .byte   W06
        .byte           PAN   , c_v+25
        .byte           N07   , Cs3 , v100
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   As3 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , Cn4
        .byte   W08
        .byte                   Cs4 , v080
        .byte   W08
        .byte                   Cn4 , v100
        .byte   W08
        .byte           PAN   , c_v+25
        .byte           N07   , As3
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   Cs3 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , As2
        .byte   W08
        .byte                   Fs2 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W02
        .byte   PEND
@ 068   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_1_67
@ 069   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+25
        .byte           N07   , As2 , v100
        .byte   W08
        .byte                   Cs3 , v080
        .byte   W08
        .byte                   Fn3 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , Gs3
        .byte   W08
        .byte                   As3 , v080
        .byte   W08
        .byte                   Gs3 , v100
        .byte   W08
        .byte           PAN   , c_v+25
        .byte           N07   , Fn3
        .byte   W08
        .byte                   Cs3 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W08
        .byte           PAN   , c_v-24
        .byte           N07   , Fn2
        .byte   W08
        .byte                   Cs2 , v080
        .byte   W08
        .byte                   Fn2 , v100
        .byte   W02
@ 070   ----------------------------------------
        .byte   W96
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W68
        .byte   W02
        .byte           VOICE , 30
        .byte           PAN   , c_v+31
        .byte           VOL   , 63
        .byte   W24
        .byte   W02
@ 074   ----------------------------------------
        .byte           VOICE , 61
        .byte           VOL   , 85
        .byte           PAN   , c_v+40
        .byte           MOD   , 3
        .byte   GOTO
         .word  mus_pkmn_bw12_129_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_pkmn_bw12_129_2:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 49
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 85
        .byte           PAN   , c_v+16
        .byte   W18
        .byte           N11   , Fs2 , v127
        .byte           N11   , Fs3
        .byte   W24
        .byte                   Fs2
        .byte           N11   , Fs3
        .byte   W24
        .byte                   Fs2
        .byte           N11   , Fs3
        .byte   W24
        .byte                   Fs2
        .byte           N11   , Fs3
        .byte   W06
@ 001   ----------------------------------------
        .byte   W18
        .byte                   Fs2
        .byte           N11   , Fs3
        .byte   W24
        .byte           N09   , Fs2
        .byte           N09   , Fs3
        .byte   W12
        .byte           N01   , Fs2
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Fn2
        .byte           N01   , Fn3
        .byte   W06
        .byte                   Fs2
        .byte           N01   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N01   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N01   , Fs3
        .byte   W06
@ 002   ----------------------------------------
        .byte                   Fn2
        .byte           N01   , Fn3
        .byte   W06
        .byte                   Cn3 , v124
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N11
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N11
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N11
        .byte   W06
@ 003   ----------------------------------------
        .byte   W06
        .byte                   Fs3
        .byte   W12
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N05
        .byte   W12
        .byte           N10   , Fn3 , v108
        .byte   W12
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Ds3 , v120
        .byte   W11
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W07
        .byte           N10   , Dn3 , v112
        .byte   W06
@ 004   ----------------------------------------
        .byte   W06
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N11   , Cn3 , v120
        .byte   W12
        .byte           N10   , Ds3 , v127
        .byte   W12
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N05
        .byte   W12
        .byte           N10   , Fn3 , v120
        .byte   W12
        .byte           N01   , Cn3 , v088
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N05
        .byte   W06
@ 005   ----------------------------------------
        .byte   W06
        .byte           N10   , Fs3 , v127
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N05   , Cn3 , v120
        .byte   W12
        .byte           N10   , Fn3 , v112
        .byte   W12
        .byte           N01   , Cn3 , v124
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Ds3 , v127
        .byte   W11
        .byte           N01   , Cn3 , v124
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W07
        .byte           N10   , As2
        .byte   W06
@ 006   ----------------------------------------
        .byte   W06
        .byte           N08   , Cn3 , v124
        .byte   W12
        .byte                   Fs3 , v127
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N02   , Ds3
        .byte   W06
        .byte           N08   , Cn3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Bn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Bn2
        .byte   W06
@ 007   ----------------------------------------
mus_pkmn_bw12_129_2_7:
        .byte   W06
        .byte           N08   , Cn3 , v127
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte           N02   , Fn3
        .byte   W06
        .byte           N08   , Ds3
        .byte   W12
        .byte           N02   , Cn3
        .byte   W06
        .byte           N08   , As2
        .byte   W12
        .byte                   Bn2
        .byte   W12
        .byte                   Ds3
        .byte   W06
        .byte   PEND
@ 008   ----------------------------------------
mus_pkmn_bw12_129_2_8:
        .byte   W06
        .byte           N08   , Cn3 , v127
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N02   , As3
        .byte   W06
        .byte           N08   , Gn3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Fs3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte                   As2
        .byte   W06
        .byte   PEND
@ 009   ----------------------------------------
        .byte   W06
        .byte                   Cn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte           N02   , Gn3
        .byte   W06
        .byte           N08   , Fs3
        .byte   W12
        .byte           N02   , Fn3
        .byte   W06
        .byte           N08   , Ds3
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Bn2
        .byte   W06
@ 010   ----------------------------------------
mus_pkmn_bw12_129_2_LOOP:
        .byte   W06
        .byte           N08   , Cn3 , v127
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N02   , As3
        .byte   W06
        .byte           N08   , Gn3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Fs3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte                   As2
        .byte   W06
@ 011   ----------------------------------------
        .byte   W06
        .byte           N05   , Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W06
        .byte                   Cn3
        .byte   W12
        .byte                   Cn4
        .byte   W06
        .byte           N11   , Gn3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte                   Cn4
        .byte   W06
@ 012   ----------------------------------------
        .byte   W06
        .byte           N08   , Cn3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N02   , As3
        .byte   W06
        .byte           N08   , Gn3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Fs3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte           N11   , As2
        .byte   W06
@ 013   ----------------------------------------
        .byte   W06
        .byte           N02   , Cn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , As3 , v124
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte                   Cn3 , v127
        .byte   W12
        .byte           N04   , As2 , v124
        .byte   W06
        .byte           N10   , Cn3
        .byte   W12
        .byte           N04   , As2
        .byte   W06
        .byte                   Cn3
        .byte   W06
@ 014   ----------------------------------------
        .byte                   As2
        .byte   W06
        .byte           N05   , Cn3 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v124
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3 , v127
        .byte   W06
        .byte                   Ds3 , v088
        .byte   W06
        .byte                   Gs3 , v108
        .byte   W06
        .byte                   As3 , v088
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v100
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3 , v124
        .byte   W06
        .byte                   Fs3 , v088
        .byte   W06
        .byte                   Ds3 , v120
        .byte   W06
@ 015   ----------------------------------------
        .byte                   Bn2 , v088
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v124
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3 , v127
        .byte   W06
        .byte                   Ds3 , v088
        .byte   W06
        .byte                   Gs3 , v108
        .byte   W06
        .byte                   As3 , v088
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v100
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte                   Fs3
        .byte   W06
        .byte                   Ds3
        .byte   W06
@ 016   ----------------------------------------
        .byte                   Bn2
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v124
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3 , v127
        .byte   W06
        .byte                   Ds3 , v088
        .byte   W06
        .byte                   Gs3 , v108
        .byte   W06
        .byte                   As3 , v088
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Ds3 , v100
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Gs3 , v124
        .byte   W06
        .byte                   Fs3 , v088
        .byte   W06
        .byte                   Ds3 , v120
        .byte   W06
@ 017   ----------------------------------------
        .byte                   Cs3 , v088
        .byte   W06
        .byte                   Cn3 , v127
        .byte   W12
        .byte           N10   , As3 , v124
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte           N01   , Cn3 , v127
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Ds3 , v124
        .byte   W12
        .byte           N01   , Cn3 , v127
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N11   , Gs3 , v088
        .byte   W03
        .byte           MOD   , 7
        .byte   W03
@ 018   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte           N08   , Dn3 , v127
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte           N02   , Cn4
        .byte   W06
        .byte           N08   , An3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Gs3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Cn3
        .byte   W06
@ 019   ----------------------------------------
        .byte   W06
        .byte           N05   , Dn3
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   An3
        .byte   W06
        .byte                   Dn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
        .byte           N11   , An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
@ 020   ----------------------------------------
mus_pkmn_bw12_129_2_20:
        .byte   W06
        .byte           N08   , Dn3 , v127
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte           N02   , Cn4
        .byte   W06
        .byte           N08   , An3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Gs3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N11   , Cn3
        .byte   W06
        .byte   PEND
@ 021   ----------------------------------------
        .byte   W06
        .byte           N01   , Dn3 , v088
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte           N10   , Cn4 , v124
        .byte   W12
        .byte                   Gs3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N01   , Dn3 , v127
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Dn3
        .byte   W12
        .byte           N03   , Cn3
        .byte   W06
        .byte                   Dn3
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Cn3
        .byte   W06
        .byte           N06   , En3 , v116
        .byte   W12
        .byte                   Bn3
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte           N04   , En3
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte           N11   , Gn3 , v127
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N10   , Bn2 , v116
        .byte   W12
        .byte                   Ds3
        .byte   W06
@ 023   ----------------------------------------
mus_pkmn_bw12_129_2_23:
        .byte   W06
        .byte           N06   , En3 , v116
        .byte   W12
        .byte                   Bn3
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte           N04   , En3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte           N11   , Fn3 , v127
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte           N23   , Fn3 , v116
        .byte   W18
        .byte   PEND
@ 024   ----------------------------------------
        .byte   W06
        .byte           N06   , En3
        .byte   W12
        .byte                   Bn3
        .byte   W12
        .byte                   En4
        .byte   W12
        .byte           N04   , En3
        .byte   W06
        .byte                   En4
        .byte   W06
        .byte           N11   , Gn3 , v127
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N10   , Bn2 , v116
        .byte   W12
        .byte                   Ds3
        .byte   W06
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_23
@ 026   ----------------------------------------
        .byte   W06
        .byte           N05   , En3 , v116
        .byte   W24
        .byte           N06
        .byte   W24
        .byte                   En3
        .byte   W16
        .byte                   En3
        .byte   W16
        .byte                   En3
        .byte   W10
@ 027   ----------------------------------------
        .byte   W06
        .byte                   En3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Fn3
        .byte   W16
        .byte                   Dn3
        .byte   W16
        .byte                   Fn3
        .byte   W10
@ 028   ----------------------------------------
        .byte   W06
        .byte                   En3
        .byte   W24
        .byte                   En3
        .byte   W24
        .byte                   En3
        .byte   W16
        .byte                   En3
        .byte   W16
        .byte                   En3
        .byte   W10
@ 029   ----------------------------------------
        .byte   W06
        .byte                   En3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Fn3
        .byte   W16
        .byte                   As3
        .byte   W16
        .byte                   Cs4
        .byte   W10
@ 030   ----------------------------------------
mus_pkmn_bw12_129_2_30:
        .byte   W06
        .byte           N08   , Dn3 , v127
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte           N02   , Cn4
        .byte   W06
        .byte           N08   , An3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Gs3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Cn3
        .byte   W06
        .byte   PEND
@ 031   ----------------------------------------
        .byte   W06
        .byte           N05   , Dn3
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   An3
        .byte   W06
        .byte                   Dn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
        .byte           N11   , An3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   Dn4
        .byte   W06
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_20
@ 033   ----------------------------------------
        .byte   W06
        .byte           N05   , Dn3 , v127
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   An3
        .byte   W06
        .byte                   Dn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
        .byte           N11   , An3
        .byte   W12
        .byte                   Fs3
        .byte   W12
        .byte                   An3
        .byte   W06
@ 034   ----------------------------------------
        .byte   W06
        .byte           N23   , Dn3
        .byte   W72
        .byte                   An3
        .byte   W18
@ 035   ----------------------------------------
mus_pkmn_bw12_129_2_35:
        .byte   W06
        .byte           N23   , Dn3 , v127
        .byte   W72
        .byte           N13   , An3
        .byte   W16
        .byte           N04
        .byte   W02
        .byte   PEND
@ 036   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_35
@ 037   ----------------------------------------
        .byte   W06
        .byte           N14   , Cs4 , v120
        .byte   W24
        .byte           N02   , Cs3 , v116
        .byte   W16
        .byte           N06   , Dn3
        .byte   W08
        .byte           N02   , An3
        .byte   W08
        .byte                   Fn3
        .byte   W08
        .byte                   Fn3
        .byte   W08
        .byte                   Fn4
        .byte   W08
        .byte           N06   , Cs3
        .byte   W08
        .byte           N02   , Dn3
        .byte   W02
@ 038   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_30
@ 039   ----------------------------------------
        .byte   W06
        .byte           N11   , Dn3 , v127
        .byte   W12
        .byte           N05   , An3
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   An3
        .byte   W06
        .byte                   Dn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
        .byte           N11   , An3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte                   Dn4
        .byte   W06
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_20
@ 041   ----------------------------------------
        .byte   W06
        .byte           N04   , Dn3 , v127
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N04   , Dn3
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Dn3
        .byte   W12
        .byte                   An3
        .byte   W06
@ 042   ----------------------------------------
        .byte   W06
        .byte           N05   , En3
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Dn4 , v088
        .byte   W06
        .byte                   En4 , v124
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v100
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   As3 , v088
        .byte   W06
        .byte                   Gn3 , v120
        .byte   W06
@ 043   ----------------------------------------
        .byte                   Ds3 , v088
        .byte   W06
        .byte                   En3 , v127
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Dn4 , v088
        .byte   W06
        .byte                   En4 , v124
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v100
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   Gn3
        .byte   W06
@ 044   ----------------------------------------
        .byte                   Ds3
        .byte   W06
        .byte                   En3 , v127
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v124
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4 , v127
        .byte   W06
        .byte                   Gn3 , v088
        .byte   W06
        .byte                   Cn4 , v108
        .byte   W06
        .byte                   Dn4 , v088
        .byte   W06
        .byte                   En4 , v124
        .byte   W06
        .byte                   Bn3 , v088
        .byte   W06
        .byte                   Gn3 , v100
        .byte   W06
        .byte                   En3 , v088
        .byte   W06
        .byte                   Cn4 , v124
        .byte   W06
        .byte                   As3 , v088
        .byte   W06
        .byte                   Gn3 , v120
        .byte   W06
@ 045   ----------------------------------------
        .byte                   Ds3 , v088
        .byte   W06
        .byte           N01   , En3
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte           N10   , Dn4 , v124
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N01   , En3 , v127
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte           N10   , En3
        .byte   W12
        .byte           N03   , Dn3
        .byte   W06
        .byte                   En3
        .byte   W06
@ 046   ----------------------------------------
        .byte                   Dn3
        .byte   W06
        .byte           N17   , Dn3 , v116
        .byte   W18
        .byte                   Ds3
        .byte   W18
        .byte           N11   , Dn3
        .byte   W12
        .byte           N17   , Fn3
        .byte   W18
        .byte                   Ds3
        .byte   W18
        .byte           N11   , Cn3
        .byte   W06
@ 047   ----------------------------------------
        .byte   W06
        .byte           N17   , Dn3
        .byte   W18
        .byte                   Ds3
        .byte   W18
        .byte           N11   , Fn3
        .byte   W12
        .byte           N17   , Ds3
        .byte   W18
        .byte                   Fn3
        .byte   W18
        .byte           N11   , Gs3
        .byte   W06
@ 048   ----------------------------------------
        .byte   W06
        .byte           N17   , Gn3
        .byte   W18
        .byte           N20   , Gs3
        .byte   W21
        .byte           N08   , Gn3
        .byte   W09
        .byte           N17   , As3
        .byte   W18
        .byte           N23   , Gs3
        .byte   W21
        .byte           N08   , Fn3
        .byte   W03
@ 049   ----------------------------------------
        .byte   W06
        .byte           N17   , Gn3
        .byte   W18
        .byte           N20   , Gs3
        .byte   W21
        .byte           N08   , As3
        .byte   W09
        .byte           N11   , Gs3 , v127
        .byte   W18
        .byte           N20   , Fn3 , v116
        .byte   W21
        .byte           N08   , Cs3
        .byte   W03
@ 050   ----------------------------------------
mus_pkmn_bw12_129_2_50:
        .byte   W06
        .byte           N10   , Cn3 , v116
        .byte   W12
        .byte           N05   , Ds4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N10   , Fs3
        .byte   W12
        .byte           N04   , Cn3
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           N10   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N04   , As3
        .byte   W06
        .byte   PEND
@ 051   ----------------------------------------
mus_pkmn_bw12_129_2_51:
        .byte   W06
        .byte           N04   , Bn3 , v116
        .byte   W12
        .byte           N10   , Cn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Gs3
        .byte   W06
        .byte           N11   , Fn3
        .byte   W12
        .byte           N05   , Bn3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte           N11   , Gn3
        .byte   W06
        .byte   PEND
@ 052   ----------------------------------------
mus_pkmn_bw12_129_2_52:
        .byte   W06
        .byte           N10   , Cn3 , v116
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N14   , Cn4
        .byte   W16
        .byte           N06   , Ds3
        .byte   W08
        .byte           N05   , Cn3
        .byte   W06
        .byte           N06   , Cn4
        .byte   W06
        .byte           N10   , Ds3
        .byte   W12
        .byte                   Ds3
        .byte   W12
        .byte           N06   , Cn4
        .byte   W06
        .byte   PEND
@ 053   ----------------------------------------
        .byte   W06
        .byte           N10   , Cn3
        .byte   W12
        .byte                   Ds4
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N04   , Bn3
        .byte   W06
        .byte           N05   , Cn4
        .byte   W06
        .byte           N10   , Gn3
        .byte   W12
        .byte           N04   , Dn4
        .byte   W06
        .byte           N05   , Ds4 , v072
        .byte   W06
        .byte           N10   , Gn3 , v116
        .byte   W06
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_50
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_51
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_52
@ 057   ----------------------------------------
        .byte   W06
        .byte           N10   , Cn3 , v116
        .byte   W12
        .byte                   Ds4
        .byte   W12
        .byte                   Fn4
        .byte   W12
        .byte                   Gn3
        .byte   W12
        .byte           N04   , Bn3
        .byte   W06
        .byte           N05   , Cn4
        .byte   W06
        .byte           N10   , Gn3
        .byte   W12
        .byte           N04   , Dn4
        .byte   W06
        .byte           N05   , Ds4 , v072
        .byte   W06
        .byte           N11   , Cn4 , v116
        .byte   W06
@ 058   ----------------------------------------
mus_pkmn_bw12_129_2_58:
        .byte   W06
        .byte           N10   , Cs3 , v116
        .byte   W12
        .byte           N05   , Cn4
        .byte   W12
        .byte           N07   , Cs4
        .byte   W12
        .byte           N05   , Gs3
        .byte   W12
        .byte                   En4
        .byte   W06
        .byte           N02   , Fn4
        .byte   W06
        .byte           N10   , Cs3
        .byte   W12
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Cs4
        .byte   W06
        .byte   PEND
@ 059   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_58
@ 060   ----------------------------------------
        .byte   W06
        .byte           N10   , Gs3 , v116
        .byte   W12
        .byte           N05   , Fn4
        .byte   W12
        .byte                   Gs4
        .byte   W12
        .byte                   Cs4
        .byte   W12
        .byte                   Fn4
        .byte   W06
        .byte           N02   , Gs4
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte                   Cs3
        .byte   W06
        .byte           N11   , Cn4
        .byte   W12
        .byte                   Cs4
        .byte   W06
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_58
@ 062   ----------------------------------------
        .byte   W06
        .byte           N10   , As3 , v116
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N05   , Cn3
        .byte   W06
        .byte                   Cs3
        .byte   W06
        .byte           N10   , As2
        .byte   W12
        .byte           N03   , Cn3 , v112
        .byte   W08
        .byte                   Cs3 , v120
        .byte   W08
        .byte                   As2 , v124
        .byte   W08
        .byte           N23   , Cn3 , v116
        .byte   W18
@ 063   ----------------------------------------
        .byte   W06
        .byte           N14   , Gn3
        .byte   W18
        .byte                   Ds3
        .byte   W18
        .byte           N11   , Gn3
        .byte   W12
        .byte           N03   , Cn3 , v112
        .byte   W08
        .byte                   Cs3 , v120
        .byte   W08
        .byte                   As2 , v124
        .byte   W08
        .byte           N23   , Cs3 , v116
        .byte   W18
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W96
@ 066   ----------------------------------------
        .byte   W06
        .byte           N04
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N02   , Cs3
        .byte   W06
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N02   , Cs3
        .byte   W06
@ 067   ----------------------------------------
mus_pkmn_bw12_129_2_67:
        .byte           N01   , Cn3 , v116
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N02   , Cs3
        .byte   W06
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N04   , Cs3
        .byte   W12
        .byte           N01   , Cn3
        .byte   W06
        .byte           N02   , Cs3
        .byte   W06
        .byte   PEND
@ 068   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_67
@ 069   ----------------------------------------
        .byte           N01   , Cn3 , v116
        .byte   W06
        .byte           N03   , Fs3
        .byte   W12
        .byte           N01   , Fn3
        .byte   W06
        .byte           N02   , Fs3
        .byte   W12
        .byte           N01   , Fn3
        .byte   W06
        .byte           N02   , Fs3
        .byte   W06
        .byte           N01   , Fn3
        .byte   W06
        .byte           N03   , Fs3
        .byte   W12
        .byte           N01   , Fn3
        .byte   W06
        .byte           N02   , Fs3
        .byte   W12
        .byte           N01   , Fn3
        .byte   W06
        .byte           N02   , Fs3
        .byte   W06
@ 070   ----------------------------------------
        .byte           N01   , Fn3
        .byte   W06
        .byte           N08   , Cn3 , v124
        .byte   W12
        .byte                   Fs3 , v127
        .byte   W12
        .byte                   Fn3
        .byte   W12
        .byte           N02   , Ds3
        .byte   W06
        .byte           N08   , Cn3
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Bn2
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Bn2
        .byte   W06
@ 071   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_7
@ 072   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_2_8
@ 073   ----------------------------------------
        .byte   W06
        .byte           N08   , Cn3 , v127
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte                   As3
        .byte   W12
        .byte           N02   , Gn3
        .byte   W06
        .byte           N08   , Fs3
        .byte   W12
        .byte           N02   , Fn3
        .byte   W06
        .byte           N08   , Ds3
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte           N06   , Bn2
        .byte   W06
@ 074   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_129_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_pkmn_bw12_129_3:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 61
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 39
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+38
        .byte           VOL   , 78
        .byte   W90
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W06
        .byte           N08   , Cn1 , v124
        .byte   W12
        .byte                   Fs1 , v127
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte           N02   , Ds1
        .byte   W06
        .byte           N08   , Cn1
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Bn0
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W06
@ 007   ----------------------------------------
        .byte   W06
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte           N02   , Fn1
        .byte   W06
        .byte           N08   , Ds1
        .byte   W12
        .byte           N02   , Cn1
        .byte   W06
        .byte           N08   , As0
        .byte   W12
        .byte                   Bn0
        .byte   W12
        .byte                   Ds1
        .byte   W06
@ 008   ----------------------------------------
        .byte   W06
        .byte                   Cn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N02   , As1
        .byte   W06
        .byte           N08   , Gn1
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Fs1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   As0
        .byte   W06
@ 009   ----------------------------------------
        .byte   W06
        .byte                   Cn1
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte           N02   , Gn1
        .byte   W06
        .byte           N08   , Fs1
        .byte   W12
        .byte           N02   , Fn1
        .byte   W06
        .byte           N08   , Ds1
        .byte   W12
        .byte                   As0
        .byte   W12
        .byte                   Bn0
        .byte   W06
@ 010   ----------------------------------------
mus_pkmn_bw12_129_3_LOOP:
        .byte   W06
        .byte           PAN   , c_v+60
        .byte           N05   , Cn2 , v127
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v124
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v127
        .byte   W06
        .byte                   Ds2 , v088
        .byte   W06
        .byte                   Gs2 , v108
        .byte   W06
        .byte                   As2 , v088
        .byte   W06
        .byte                   Cn3 , v124
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v100
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v124
        .byte   W06
        .byte                   Fs2 , v088
        .byte   W06
        .byte                   Ds2 , v120
        .byte   W06
@ 011   ----------------------------------------
mus_pkmn_bw12_129_3_11:
        .byte           N05   , Bn1 , v088
        .byte   W06
        .byte                   Cn2 , v127
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v124
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v127
        .byte   W06
        .byte                   Ds2 , v088
        .byte   W06
        .byte                   Gs2 , v108
        .byte   W06
        .byte                   As2 , v088
        .byte   W06
        .byte                   Cn3 , v124
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v100
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2
        .byte   W06
        .byte                   Fs2
        .byte   W06
        .byte                   Ds2
        .byte   W06
        .byte   PEND
@ 012   ----------------------------------------
mus_pkmn_bw12_129_3_12:
        .byte           N05   , Bn1 , v088
        .byte   W06
        .byte                   Cn2 , v127
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v124
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v127
        .byte   W06
        .byte                   Ds2 , v088
        .byte   W06
        .byte                   Gs2 , v108
        .byte   W06
        .byte                   As2 , v088
        .byte   W06
        .byte                   Cn3 , v124
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v100
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v124
        .byte   W06
        .byte                   Fs2 , v088
        .byte   W06
        .byte                   Ds2 , v120
        .byte   W06
        .byte   PEND
@ 013   ----------------------------------------
        .byte                   Bn1 , v088
        .byte   W06
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , As2 , v124
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte                   As1
        .byte   W06
        .byte           N10   , Cn2
        .byte   W12
        .byte           N03   , As1
        .byte   W06
        .byte                   Cn2
        .byte   W06
@ 014   ----------------------------------------
        .byte                   As1
        .byte   W06
        .byte           N05   , Cn2
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v124
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v127
        .byte   W06
        .byte                   Ds2 , v088
        .byte   W06
        .byte                   Gs2 , v108
        .byte   W06
        .byte                   As2 , v088
        .byte   W06
        .byte                   Cn3 , v124
        .byte   W06
        .byte                   Gn2 , v088
        .byte   W06
        .byte                   Ds2 , v100
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte                   Gs2 , v124
        .byte   W06
        .byte                   Fs2 , v088
        .byte   W06
        .byte                   Ds2 , v120
        .byte   W06
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_3_11
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_3_12
@ 017   ----------------------------------------
        .byte           N05   , Cs2 , v088
        .byte   W06
        .byte                   Cn2 , v127
        .byte   W12
        .byte           N10   , As2 , v124
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Ds2 , v124
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N11   , Gs2 , v088
        .byte   W06
@ 018   ----------------------------------------
        .byte   W06
        .byte           N05   , Dn2 , v127
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v124
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2 , v127
        .byte   W06
        .byte                   Fn2 , v088
        .byte   W06
        .byte                   As2 , v108
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Dn3 , v124
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v100
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2 , v124
        .byte   W06
        .byte                   Gs2 , v088
        .byte   W06
        .byte                   Fn2 , v120
        .byte   W06
@ 019   ----------------------------------------
        .byte                   Cs2 , v088
        .byte   W06
        .byte                   Dn2 , v127
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v124
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2 , v127
        .byte   W06
        .byte                   Fn2 , v088
        .byte   W06
        .byte                   As2 , v108
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Dn3 , v124
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v100
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte                   Gs2
        .byte   W06
        .byte                   Fn2
        .byte   W06
@ 020   ----------------------------------------
        .byte                   Cs2
        .byte   W06
        .byte                   Dn2 , v127
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v124
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2 , v127
        .byte   W06
        .byte                   Fn2 , v088
        .byte   W06
        .byte                   As2 , v108
        .byte   W06
        .byte                   Cn3 , v088
        .byte   W06
        .byte                   Dn3 , v124
        .byte   W06
        .byte                   An2 , v088
        .byte   W06
        .byte                   Fn2 , v100
        .byte   W06
        .byte                   Dn2 , v088
        .byte   W06
        .byte                   As2 , v124
        .byte   W06
        .byte                   Gs2 , v088
        .byte   W06
        .byte                   Fn2 , v120
        .byte   W06
@ 021   ----------------------------------------
        .byte                   Cs2 , v088
        .byte   W06
        .byte           N01   , Dn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte           N10   , Cn3 , v124
        .byte   W12
        .byte                   Gs2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte           N01   , Dn2 , v127
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Dn2
        .byte   W12
        .byte           N03   , Cn2
        .byte   W06
        .byte                   Dn2
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Cn2
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
        .byte   W06
        .byte           PAN   , c_v+40
        .byte           VOL   , 57
        .byte   W90
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
        .byte   W06
        .byte           PAN   , c_v+61
        .byte           N04   , Dn1
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte           N04   , Dn1
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   An1
        .byte   W06
@ 042   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+40
        .byte   W90
@ 043   ----------------------------------------
        .byte   W96
@ 044   ----------------------------------------
        .byte   W96
@ 045   ----------------------------------------
        .byte   W06
        .byte                   c_v+61
        .byte           N01   , En1
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte           N10   , Dn2 , v124
        .byte   W12
        .byte                   As1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte           N01   , En1 , v127
        .byte   W06
        .byte                   En1
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N10   , En1
        .byte   W12
        .byte           N03   , Dn1
        .byte   W06
        .byte                   En1
        .byte   W06
@ 046   ----------------------------------------
        .byte                   Dn1
        .byte   W06
        .byte           PAN   , c_v+39
        .byte   W90
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W06
        .byte                   c_v+50
        .byte           VOL   , 72
        .byte           N17   , Gn2 , v112
        .byte           N17   , Dn3
        .byte   W18
        .byte                   Gs2 , v092
        .byte           N17   , Ds3
        .byte   W18
        .byte           N11   , Gn2 , v100
        .byte           N11   , Dn3
        .byte   W12
        .byte           N17   , As2 , v116
        .byte           N17   , Fn3
        .byte   W18
        .byte                   Gs2 , v092
        .byte           N17   , Ds3
        .byte   W18
        .byte           N11   , Fn2 , v100
        .byte           N11   , Cn3
        .byte   W06
@ 049   ----------------------------------------
        .byte   W06
        .byte           N17   , Gn2 , v112
        .byte           N17   , Dn3
        .byte   W18
        .byte                   Gs2 , v100
        .byte           N17   , Ds3
        .byte   W18
        .byte           N11   , As2 , v108
        .byte           N11   , Fn3
        .byte   W12
        .byte           N09   , Gs2 , v124
        .byte           N09   , Ds3
        .byte   W12
        .byte           N02   , Ds2
        .byte           N02   , Cn3
        .byte   W06
        .byte           N09   , As2 , v092
        .byte           N09   , Fn3
        .byte   W18
        .byte           N11   , Cs3 , v120
        .byte           N11   , Gs3 , v127
        .byte   W06
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
        .byte   W06
        .byte           PAN   , c_v+63
        .byte           N10   , As1 , v116
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N05   , Cn1
        .byte   W06
        .byte                   Cs1
        .byte   W06
        .byte           N10   , As0
        .byte   W12
        .byte           N03   , Cn1 , v112
        .byte   W08
        .byte                   Cs1 , v120
        .byte   W08
        .byte                   As0 , v124
        .byte   W08
        .byte           N23   , Cn1 , v116
        .byte   W18
@ 063   ----------------------------------------
        .byte   W06
        .byte           N14   , Gn1
        .byte   W18
        .byte                   Ds1
        .byte   W18
        .byte           N11   , Gn1
        .byte   W12
        .byte           N03   , Cn1 , v112
        .byte   W08
        .byte                   Cs1 , v120
        .byte   W08
        .byte                   As0 , v124
        .byte   W08
        .byte           N23   , Cs1 , v116
        .byte   W18
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W96
@ 066   ----------------------------------------
        .byte   W96
@ 067   ----------------------------------------
        .byte   W96
@ 068   ----------------------------------------
        .byte   W96
@ 069   ----------------------------------------
        .byte   W96
@ 070   ----------------------------------------
        .byte   W96
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           PAN   , c_v+60
        .byte           VOL   , 78
        .byte   W05
@ 074   ----------------------------------------
        .byte           PAN   , c_v+38
        .byte   GOTO
         .word  mus_pkmn_bw12_129_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_pkmn_bw12_129_4:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 61
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 48
        .byte   W06
        .byte           PAN   , c_v-45
        .byte           VOL   , 71
        .byte   W48
        .byte           PAN   , c_v+46
        .byte   W42
@ 001   ----------------------------------------
        .byte   W06
        .byte                   c_v-37
        .byte   W48
        .byte                   c_v+43
        .byte   W42
@ 002   ----------------------------------------
        .byte   W06
        .byte           VOL   , 61
        .byte           PAN   , c_v-56
        .byte   W90
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
mus_pkmn_bw12_129_4_LOOP:
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
        .byte   W03
        .byte           PAN   , c_v+56
        .byte           VOL   , 78
        .byte   W03
        .byte           N11   , Dn1 , v127
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte           N08   , Dn2
        .byte   W12
        .byte           N02   , Cn2
        .byte   W06
        .byte           N08   , An1
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Gs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte                   Cn1
        .byte   W06
@ 031   ----------------------------------------
        .byte   W06
        .byte           N11   , Dn1
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte                   Dn2
        .byte   W12
        .byte                   An1
        .byte   W06
        .byte                   Dn1
        .byte   W12
        .byte           N05   , Dn2
        .byte   W06
        .byte           N11   , An1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Dn2
        .byte   W06
@ 032   ----------------------------------------
        .byte   W06
        .byte                   Dn1
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte           N08   , Dn2
        .byte   W12
        .byte           N02   , Cn2
        .byte   W06
        .byte           N08   , An1
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N08   , Gs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte           N11   , Cn1
        .byte   W06
@ 033   ----------------------------------------
        .byte   W06
        .byte                   Dn1
        .byte   W12
        .byte                   An1
        .byte   W12
        .byte                   Dn2
        .byte   W12
        .byte                   An1
        .byte   W06
        .byte                   Dn1
        .byte   W12
        .byte           N05   , Dn2
        .byte   W06
        .byte           N11   , An1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   An1
        .byte   W06
@ 034   ----------------------------------------
        .byte   W06
        .byte           VOL   , 70
        .byte           N07   , Dn2 , v088
        .byte   W08
        .byte                   Fn2
        .byte   W08
        .byte                   An2
        .byte   W08
        .byte                   Cs3
        .byte   W08
        .byte                   Dn3
        .byte   W08
        .byte                   Fn3
        .byte   W08
        .byte                   An3
        .byte   W08
        .byte                   Cs4
        .byte   W08
        .byte                   Dn4
        .byte   W08
        .byte                   Fn4
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Cs5
        .byte   W02
@ 035   ----------------------------------------
        .byte   W06
        .byte                   Dn5
        .byte   W08
        .byte                   Fn5
        .byte   W08
        .byte                   Dn5
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Dn5
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Fn4
        .byte   W01
        .byte           PAN   , c_v-45
        .byte   W07
        .byte           N07   , An4
        .byte   W08
        .byte                   Fn4
        .byte   W08
        .byte                   An3
        .byte   W08
        .byte                   Dn4
        .byte   W08
        .byte                   An3
        .byte   W02
@ 036   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+57
        .byte           N07   , Fn5
        .byte   W08
        .byte                   Dn5
        .byte   W08
        .byte                   Fn5
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Dn5
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Fn4 , v112
        .byte   W08
        .byte                   Dn4 , v120
        .byte   W08
        .byte                   An3
        .byte   W08
        .byte                   Dn2
        .byte   W08
        .byte                   Fn2 , v127
        .byte   W08
        .byte                   An2 , v120
        .byte   W02
@ 037   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-56
        .byte           N07   , Cs3 , v088
        .byte   W08
        .byte                   Dn3
        .byte   W08
        .byte                   Fn3
        .byte   W08
        .byte                   An3
        .byte   W08
        .byte                   Cs4
        .byte   W08
        .byte                   Dn4
        .byte   W08
        .byte                   Fn4
        .byte   W08
        .byte                   An4
        .byte   W08
        .byte                   Cs5
        .byte   W08
        .byte           N23   , Fn5
        .byte   W01
        .byte           PAN   , c_v+49
        .byte   W17
@ 038   ----------------------------------------
        .byte   W06
        .byte           VOL   , 67
        .byte   W16
        .byte           N07   , Dn2
        .byte   W08
        .byte                   Fn2
        .byte   W08
        .byte                   An2
        .byte   W08
        .byte                   Cs3
        .byte   W08
        .byte                   Dn3
        .byte   W42
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W30
        .byte                   Dn2
        .byte   W08
        .byte                   Fn2
        .byte   W08
        .byte                   An2
        .byte   W08
        .byte                   Cs3
        .byte   W08
        .byte                   Dn3
        .byte   W32
        .byte   W02
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
        .byte   W78
        .byte           PAN   , c_v-37
        .byte           N07   , Gs3 , v127
        .byte   W01
        .byte           VOL   , 39
        .byte   W07
        .byte           N07   , As3
        .byte   W08
        .byte                   Bn3
        .byte   W02
@ 050   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-39
        .byte           N92   , Cn4 , v104
        .byte   W90
@ 051   ----------------------------------------
        .byte   W06
        .byte           N80   , Cs4 , v088
        .byte   W84
        .byte           N02   , Ds4
        .byte   W06
@ 052   ----------------------------------------
        .byte                   Cs4
        .byte   W06
        .byte           N92   , Cn4
        .byte   W90
@ 053   ----------------------------------------
        .byte   W06
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fn3
        .byte   W06
        .byte           N30   , Gn3
        .byte   W36
        .byte           N42   , Cn4
        .byte   W42
@ 054   ----------------------------------------
        .byte   W06
        .byte           N92
        .byte   W90
@ 055   ----------------------------------------
        .byte   W06
        .byte           N44   , Cs4
        .byte   W48
        .byte           N32
        .byte   W36
        .byte           N03   , Ds4
        .byte   W06
@ 056   ----------------------------------------
        .byte                   Cs4
        .byte   W06
        .byte           N92   , Cn4
        .byte   W90
@ 057   ----------------------------------------
        .byte   W06
        .byte           N84   , Gn4
        .byte   W90
@ 058   ----------------------------------------
        .byte           N05   , As4
        .byte   W06
        .byte           TIE   , Gs4
        .byte   W90
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W05
        .byte           EOT
        .byte   W01
        .byte           N92   , Fn4
        .byte   W90
@ 062   ----------------------------------------
        .byte   W06
        .byte           N15   , Gn4
        .byte           N15   , Cn5
        .byte   W90
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W96
@ 066   ----------------------------------------
        .byte   W96
@ 067   ----------------------------------------
        .byte   W96
@ 068   ----------------------------------------
        .byte   W96
@ 069   ----------------------------------------
        .byte   W96
@ 070   ----------------------------------------
        .byte   W06
        .byte           VOL   , 58
        .byte           N15   , Gn4 , v096
        .byte           N15   , Cn5 , v112
        .byte   W48
        .byte           PAN   , c_v+51
        .byte           N15   , Gn2 , v127
        .byte           N15   , Cn3
        .byte           N15   , Cn4
        .byte   W42
@ 071   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-43
        .byte           N15   , Dn2
        .byte           N15   , Gn2
        .byte           N15   , Gn3
        .byte   W48
        .byte           PAN   , c_v+43
        .byte           N15   , Gn1
        .byte           N15   , Cn2
        .byte           N15   , Cn3
        .byte   W42
@ 072   ----------------------------------------
        .byte   W06
        .byte                   Dn2
        .byte           N15   , Gn2
        .byte           N15   , Gn3
        .byte   W48
        .byte                   Gn2
        .byte           N15   , Cn3
        .byte           N15   , Cn4
        .byte   W42
@ 073   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           PAN   , c_v-56
        .byte           VOL   , 61
        .byte   W05
@ 074   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_129_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_pkmn_bw12_129_5:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 126
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W06
        .byte           PAN   , c_v+45
        .byte           VOL   , 54
        .byte           N05   , Fs2 , v088
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   En3
        .byte           N05   , En4
        .byte   W06
        .byte           PAN   , c_v+29
        .byte           N05   , Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Ds3
        .byte           N05   , Ds4
        .byte   W06
        .byte           PAN   , c_v+18
        .byte           N05   , Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Dn3
        .byte           N05   , Dn4
        .byte   W06
        .byte           PAN   , c_v+11
        .byte           N05   , Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
@ 001   ----------------------------------------
        .byte                   Cs3
        .byte           N05   , Cs4
        .byte   W06
        .byte           PAN   , c_v-17
        .byte           N05   , Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Cn3
        .byte           N05   , Cn4
        .byte   W06
        .byte           PAN   , c_v-24
        .byte           N05   , Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Gn2
        .byte           N05   , Gn3
        .byte   W06
        .byte                   Fs2
        .byte           N05   , Fs3
        .byte   W06
        .byte                   Bn2
        .byte           N05   , Bn3
        .byte   W06
        .byte           PAN   , c_v-33
        .byte           N04   , Fs2 , v116
        .byte           N03   , Fs3 , v088
        .byte   W06
        .byte           N04   , Gn2 , v116
        .byte           N03   , Gn3 , v088
        .byte   W06
        .byte           N04   , Fs2 , v116
        .byte           N03   , Fs3 , v088
        .byte   W06
        .byte           N04   , Fn2 , v116
        .byte           N05   , Fn3 , v088
        .byte   W06
        .byte           PAN   , c_v-42
        .byte           N04   , Fs2 , v116
        .byte           N03   , Fs3 , v088
        .byte   W06
        .byte           N04   , Gn2 , v116
        .byte           N03   , Gn3 , v088
        .byte   W06
        .byte           N04   , Fs2 , v116
        .byte           N03   , Fs3 , v088
        .byte   W06
@ 002   ----------------------------------------
        .byte           N04   , Fn2 , v116
        .byte           N05   , Fn3 , v088
        .byte   W06
        .byte           PAN   , c_v-60
        .byte           VOL   , 80
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte           N11   , Cn1 , v120
        .byte           N10   , Cn2
        .byte   W12
        .byte                   Ds1 , v127
        .byte           N10   , Ds2
        .byte   W12
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1 , v127
        .byte           N02   , Cn2
        .byte   W12
        .byte           N10   , Fn1 , v120
        .byte           N10   , Fn2
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1
        .byte           N02   , Cn2
        .byte   W06
@ 003   ----------------------------------------
        .byte   W06
        .byte           N10   , Fs1 , v120
        .byte           N10   , Fs2
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1
        .byte           N02   , Cn2
        .byte   W12
        .byte           N10   , Fn1 , v108
        .byte           N10   , Fn2
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N10   , Ds1 , v120
        .byte           N10   , Ds2
        .byte   W11
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W07
        .byte           N10   , Dn1 , v112
        .byte           N10   , Dn2 , v088
        .byte   W06
@ 004   ----------------------------------------
        .byte   W06
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N11   , Cn1 , v120
        .byte           N08   , Cn2
        .byte   W12
        .byte           N10   , Ds1 , v127
        .byte           N10   , Ds2
        .byte   W12
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1
        .byte           N02   , Cn2
        .byte   W12
        .byte           N10   , Fn1 , v120
        .byte           N10   , Fn2
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1 , v088
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1
        .byte           N02   , Cn2
        .byte   W06
@ 005   ----------------------------------------
        .byte   W06
        .byte           N10   , Fs1 , v127
        .byte           N10   , Fs2
        .byte   W12
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte           N05   , Cn1
        .byte           N05   , Cn2
        .byte   W12
        .byte           N10   , Fn1
        .byte           N10   , Fn2
        .byte           N56   , Fs5 , v068
        .byte   W12
        .byte           MOD   , 1
        .byte           N01   , Cn1 , v127
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte           N10   , Ds1
        .byte           N10   , Ds2
        .byte   W11
        .byte           N01   , Cn1
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn1
        .byte           N01   , Cn2
        .byte   W07
        .byte           N10   , As0
        .byte           N10   , As1
        .byte   W06
@ 006   ----------------------------------------
        .byte   W04
        .byte           MOD   , 0
        .byte   W02
        .byte           N10   , Cn5 , v088
        .byte   W22
        .byte           PAN   , c_v+35
        .byte   W02
        .byte           N10   , Cn5 , v060
        .byte   W22
        .byte           PAN   , c_v-34
        .byte   W02
        .byte           N10   , Cn5 , v032
        .byte   W22
        .byte           PAN   , c_v+32
        .byte   W02
        .byte           N10   , Cn5 , v024
        .byte   W18
@ 007   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-48
        .byte           N10   , Cn5 , v088
        .byte   W22
        .byte           PAN   , c_v+35
        .byte   W02
        .byte           N10   , Cn5 , v060
        .byte   W22
        .byte           PAN   , c_v-34
        .byte   W02
        .byte           N10   , Cn5 , v032
        .byte   W22
        .byte           PAN   , c_v+32
        .byte   W02
        .byte           N10   , Cn5 , v024
        .byte   W18
@ 008   ----------------------------------------
        .byte   W06
        .byte                   Cn5 , v088
        .byte   W22
        .byte           PAN   , c_v+35
        .byte   W02
        .byte           N10   , Cn5 , v060
        .byte   W22
        .byte           PAN   , c_v-34
        .byte   W02
        .byte           N10   , Cn5 , v032
        .byte   W22
        .byte           PAN   , c_v+32
        .byte   W02
        .byte           N10   , Cn5 , v024
        .byte   W18
@ 009   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-48
        .byte           N10   , Cn5 , v088
        .byte   W22
        .byte           PAN   , c_v+35
        .byte   W02
        .byte           N10   , Cn5 , v060
        .byte   W22
        .byte           PAN   , c_v-34
        .byte   W02
        .byte           N10   , Cn5 , v032
        .byte   W22
        .byte           PAN   , c_v+32
        .byte   W02
        .byte           N10   , Cn5 , v024
        .byte   W12
        .byte           MOD   , 1
        .byte   W06
@ 010   ----------------------------------------
mus_pkmn_bw12_129_5_LOOP:
        .byte   W06
        .byte           MOD   , 0
        .byte           PAN   , c_v-58
        .byte           N22   , Cn1 , v088
        .byte   W24
        .byte           N01   , Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
@ 011   ----------------------------------------
        .byte   W01
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W07
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W02
@ 012   ----------------------------------------
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W08
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W04
        .byte                   Cn1 , v104
        .byte   W02
@ 013   ----------------------------------------
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte           N08   , As1
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte           N10   , Cn1 , v127
        .byte   W12
        .byte           N04   , As0 , v124
        .byte   W06
        .byte           N09   , Cn1
        .byte   W12
        .byte           N03   , As0
        .byte   W06
        .byte                   Cn1
        .byte   W06
@ 014   ----------------------------------------
        .byte                   As0
        .byte   W06
        .byte           N01   , Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W07
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
@ 015   ----------------------------------------
        .byte   W01
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W07
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
@ 016   ----------------------------------------
        .byte   W01
        .byte                   Cn1 , v104
        .byte   W05
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
        .byte                   Cn1 , v104
        .byte   W06
        .byte                   Cn1 , v120
        .byte   W06
@ 017   ----------------------------------------
        .byte                   Cn1 , v104
        .byte   W06
        .byte           N05   , Cn1 , v127
        .byte   W12
        .byte           N10   , As1 , v124
        .byte   W12
        .byte                   Fs1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N10   , Ds1 , v124
        .byte   W12
        .byte           N01   , Cn1 , v127
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N11   , Gs1
        .byte   W06
@ 018   ----------------------------------------
        .byte   W06
        .byte           N01   , Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
@ 019   ----------------------------------------
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W07
        .byte                   Dn1 , v104
        .byte   W05
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
@ 020   ----------------------------------------
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v120
        .byte   W06
@ 021   ----------------------------------------
        .byte                   Dn1 , v104
        .byte   W06
        .byte                   Dn1 , v088
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte           N10   , Cn2 , v124
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Fn1
        .byte   W12
        .byte           N01   , Dn1 , v127
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Cn1
        .byte   W06
        .byte           N10   , Dn1
        .byte   W12
        .byte           N03   , Cn1
        .byte   W06
        .byte                   Dn1
        .byte   W06
@ 022   ----------------------------------------
        .byte                   Cn1
        .byte   W06
        .byte           PAN   , c_v-62
        .byte           N07   , En2 , v104
        .byte           N07   , Gn2
        .byte   W24
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W24
        .byte                   En2
        .byte           N06   , Gn2
        .byte   W16
        .byte           N07   , En2
        .byte           N07   , Gn2
        .byte   W16
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W10
@ 023   ----------------------------------------
        .byte   W06
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W16
        .byte                   Gn2
        .byte           N07   , As2
        .byte   W16
        .byte                   Gn2
        .byte           N07   , As2
        .byte   W16
        .byte                   Fn2
        .byte           N07   , Gs2
        .byte   W16
        .byte                   Dn2
        .byte           N07   , Fn2
        .byte   W16
        .byte                   Fn2
        .byte           N07   , Gs2
        .byte   W10
@ 024   ----------------------------------------
        .byte   W06
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W24
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W24
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W16
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W16
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W10
@ 025   ----------------------------------------
        .byte   W06
        .byte                   En2
        .byte           N07   , Gn2
        .byte   W16
        .byte                   Gn2
        .byte           N07   , As2
        .byte   W16
        .byte                   Gn2
        .byte           N07   , As2
        .byte   W16
        .byte                   Fn2
        .byte           N07   , Gs2
        .byte   W16
        .byte                   As2
        .byte           N07   , Cs3
        .byte   W16
        .byte                   An2
        .byte           N07   , Cn3
        .byte   W10
@ 026   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-35
        .byte           VOL   , 66
        .byte           N01   , En3 , v072
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N07   , En3
        .byte           N07   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
@ 027   ----------------------------------------
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N08   , En3
        .byte           N08   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N10
        .byte           N10   , As3
        .byte   W12
        .byte           N07   , Fn3
        .byte           N07   , Gs3
        .byte   W16
        .byte                   Dn3
        .byte           N07   , Fn3
        .byte   W16
        .byte                   Fn3
        .byte           N07   , Gs3
        .byte   W10
@ 028   ----------------------------------------
        .byte   W06
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N07   , En3
        .byte           N07   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N11   , En3
        .byte           N11   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
@ 029   ----------------------------------------
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N08   , En3
        .byte           N08   , Gn3
        .byte   W12
        .byte           N01   , En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte                   En3
        .byte           N01   , Gn3
        .byte   W06
        .byte           N10
        .byte           N10   , As3
        .byte   W12
        .byte           N07   , Fn3
        .byte           N07   , Gs3
        .byte   W16
        .byte                   As3
        .byte           N07   , Cs4
        .byte   W16
        .byte                   Dn4
        .byte           N07   , Fn4
        .byte   W10
@ 030   ----------------------------------------
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W06
        .byte           N44   , Gn3 , v064
        .byte           N44   , Dn4 , v108
        .byte   W24
        .byte           BEND  , c_v-1
        .byte   W16
        .byte                   c_v-2
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           BEND  , c_v+0
        .byte           N44   , Gn3 , v072
        .byte           N44   , Dn4
        .byte   W24
        .byte           BEND  , c_v-1
        .byte   W16
        .byte                   c_v-2
        .byte   W02
@ 033   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-32
        .byte           BEND  , c_v+0
        .byte           N44   , Gn3 , v040
        .byte           N44   , Dn4
        .byte   W24
        .byte           BEND  , c_v-1
        .byte   W16
        .byte                   c_v-2
        .byte   W08
        .byte           PAN   , c_v+36
        .byte           BEND  , c_v+0
        .byte           N44   , Gn3 , v024
        .byte           N44   , Dn4
        .byte   W24
        .byte           BEND  , c_v-1
        .byte   W16
        .byte                   c_v-2
        .byte   W02
@ 034   ----------------------------------------
        .byte   W06
        .byte                   c_v+0
        .byte   W90
@ 035   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-26
        .byte   W90
@ 036   ----------------------------------------
        .byte   W96
@ 037   ----------------------------------------
        .byte   W06
        .byte                   c_v+38
        .byte           N15   , Dn3 , v088
        .byte   W02
        .byte           VOL   , 31
        .byte   W14
        .byte           N07   , En3 , v060
        .byte   W08
        .byte           N44   , Fn3 , v088
        .byte   W44
        .byte   W03
        .byte           N23   , Ds3 , v056
        .byte   W19
@ 038   ----------------------------------------
        .byte   W54
        .byte           VOL   , 28
        .byte   W02
        .byte           BEND  , c_v-1
        .byte   W06
        .byte           VOL   , 26
        .byte   W08
        .byte                   23
        .byte   W08
        .byte                   21
        .byte   W08
        .byte                   19
        .byte   W08
        .byte                   17
        .byte   W02
@ 039   ----------------------------------------
        .byte   W06
        .byte                   16
        .byte   W02
        .byte           BEND  , c_v+0
        .byte   W88
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte   W06
        .byte           VOL   , 36
        .byte   W84
        .byte           MOD   , 1
        .byte   W06
@ 042   ----------------------------------------
        .byte   W04
        .byte           VOL   , 83
        .byte   W02
        .byte           MOD   , 0
        .byte           PAN   , c_v-48
        .byte           N02   , En1 , v112
        .byte           N02   , En2
        .byte   W12
        .byte           N04   , En1
        .byte           N04   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W12
        .byte           N01   , En1
        .byte           N01   , En2
        .byte   W12
        .byte                   En1
        .byte           N01   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W12
        .byte           N02   , En1
        .byte           N02   , Ds2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W06
@ 043   ----------------------------------------
        .byte   W06
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W12
        .byte           N04   , En1
        .byte           N04   , En2
        .byte   W12
        .byte           N11   , Cn2
        .byte           N11   , Cn3
        .byte   W12
        .byte           N01   , En1
        .byte           N01   , En2
        .byte   W12
        .byte                   En1
        .byte           N01   , En2
        .byte   W12
        .byte           N10   , Bn1
        .byte           N10   , Bn2
        .byte   W12
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W06
@ 044   ----------------------------------------
        .byte   W06
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W12
        .byte           N04   , En1
        .byte           N04   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W12
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W12
        .byte           N04   , En1
        .byte           N04   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W12
        .byte           N02   , En1
        .byte           N02   , En2
        .byte   W12
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W06
@ 045   ----------------------------------------
        .byte   W06
        .byte           VOL   , 61
        .byte           N01   , En1 , v120
        .byte           N01   , En2
        .byte   W06
        .byte                   En1 , v088
        .byte           N01   , En2
        .byte   W06
        .byte           N10   , Dn2 , v124
        .byte           N10   , Dn3
        .byte   W12
        .byte                   As1
        .byte           N10   , As2
        .byte   W12
        .byte                   Gn1
        .byte           N10   , Gn2
        .byte   W12
        .byte           N01   , En1 , v127
        .byte           N01   , En2
        .byte   W06
        .byte                   En1
        .byte           N01   , En2
        .byte   W06
        .byte                   Dn1
        .byte           N01   , Dn2
        .byte   W06
        .byte           N10   , En1
        .byte           N10   , En2
        .byte   W12
        .byte           N03   , Dn1
        .byte           N03   , Dn2
        .byte   W06
        .byte                   En1
        .byte           N03   , En2
        .byte   W06
@ 046   ----------------------------------------
        .byte                   Dn1
        .byte           N03   , Dn2
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
        .byte   W03
        .byte           PAN   , c_v-55
        .byte   W03
        .byte           N10   , As1 , v116
        .byte           N10   , As2
        .byte   W12
        .byte                   Cn2
        .byte           N10   , Cn3
        .byte   W12
        .byte           N05   , Cn1
        .byte           N05   , Cn2
        .byte   W06
        .byte                   Cs1
        .byte           N05   , Cs2
        .byte   W06
        .byte           N10   , As0
        .byte           N10   , As1
        .byte   W12
        .byte           N03   , Cn1 , v112
        .byte           N03   , Cn2
        .byte   W08
        .byte                   Cs1 , v120
        .byte           N03   , Cs2
        .byte   W08
        .byte                   As0 , v124
        .byte           N03   , As1
        .byte   W08
        .byte           N23   , Cn1 , v116
        .byte           N23   , Cn2
        .byte   W18
@ 063   ----------------------------------------
        .byte   W06
        .byte           N14   , Gn1
        .byte           N14   , Gn2
        .byte   W18
        .byte                   Ds1
        .byte           N14   , Ds2
        .byte   W18
        .byte           N11   , Gn1
        .byte           N11   , Gn2
        .byte   W12
        .byte           N03   , Cn1 , v112
        .byte           N03   , Cn2
        .byte   W08
        .byte                   Cs1 , v120
        .byte           N03   , Cs2
        .byte   W08
        .byte                   As0 , v124
        .byte           N03   , As1
        .byte   W08
        .byte           N23   , Cs1 , v116
        .byte           N23   , Cs2
        .byte   W18
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W84
        .byte   W02
        .byte           N03
        .byte   W08
        .byte                   Cs2 , v104
        .byte   W02
@ 066   ----------------------------------------
        .byte   W06
        .byte           N92   , Cs2 , v108
        .byte   W90
@ 067   ----------------------------------------
        .byte   W06
        .byte                   Fs2 , v100
        .byte   W90
@ 068   ----------------------------------------
        .byte   W06
        .byte                   As2 , v108
        .byte   W90
@ 069   ----------------------------------------
        .byte   W06
        .byte                   Cs3 , v100
        .byte   W90
@ 070   ----------------------------------------
        .byte   W06
        .byte           N15   , Cn3 , v116
        .byte   W90
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           PAN   , c_v-58
        .byte           VOL   , 80
        .byte   W05
@ 074   ----------------------------------------
        .byte           PAN   , c_v+32
        .byte           MOD   , 1
        .byte   GOTO
         .word  mus_pkmn_bw12_129_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_pkmn_bw12_129_6:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 126
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 39
        .byte   W06
        .byte           VOICE , 104
        .byte   W90
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+63
        .byte           VOL   , 76
        .byte           N48   , Gn2 , v120
        .byte   W90
@ 003   ----------------------------------------
        .byte   W06
        .byte           BEND  , c_v-10
        .byte           N92   , Cn2
        .byte   W21
        .byte           BEND  , c_v-9
        .byte   W03
        .byte                   c_v-7
        .byte   W03
        .byte                   c_v-6
        .byte   W03
        .byte                   c_v-4
        .byte   W03
        .byte                   c_v-3
        .byte   W03
        .byte                   c_v-1
        .byte   W03
        .byte                   c_v+0
        .byte   W03
        .byte                   c_v+2
        .byte   W03
        .byte                   c_v+3
        .byte   W03
        .byte                   c_v+5
        .byte   W03
        .byte                   c_v+6
        .byte   W03
        .byte                   c_v+8
        .byte   W03
        .byte                   c_v+9
        .byte   W32
        .byte   W01
@ 004   ----------------------------------------
        .byte   W06
        .byte                   c_v+0
        .byte           N48   , Gn2
        .byte   W90
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v+55
        .byte   W90
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
mus_pkmn_bw12_129_6_LOOP:
        .byte           VOICE , 126
        .byte   W06
        .byte           VOL   , 75
        .byte   W90
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
        .byte   W06
        .byte                   49
        .byte   W90
@ 018   ----------------------------------------
        .byte   W06
        .byte                   48
        .byte   W90
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
        .byte   W04
        .byte                   85
        .byte   W02
        .byte           PAN   , c_v-50
        .byte           N28   , Gn1 , v100
        .byte           N28   , Gn2 , v088
        .byte   W32
        .byte                   As1 , v092
        .byte           N28   , As2 , v080
        .byte   W32
        .byte                   An1 , v100
        .byte           N28   , An2 , v088
        .byte   W24
        .byte   W02
@ 027   ----------------------------------------
        .byte   W06
        .byte                   Gn1 , v092
        .byte           N28   , Gn2 , v080
        .byte   W32
        .byte                   En1 , v084
        .byte           N28   , En2 , v072
        .byte   W32
        .byte                   Fn1 , v092
        .byte           N28   , Fn2 , v080
        .byte   W24
        .byte   W02
@ 028   ----------------------------------------
        .byte   W06
        .byte                   En1 , v100
        .byte           N28   , En2 , v088
        .byte   W32
        .byte                   As1 , v092
        .byte           N28   , As2 , v080
        .byte   W32
        .byte                   An1 , v100
        .byte           N28   , An2 , v088
        .byte   W24
        .byte   W02
@ 029   ----------------------------------------
        .byte   W06
        .byte                   Gn1 , v108
        .byte           N28   , Gn2 , v092
        .byte   W32
        .byte                   Fn2
        .byte           N28   , Fn3 , v084
        .byte   W32
        .byte                   Cs2 , v108
        .byte           N28   , Cs3 , v092
        .byte   W24
        .byte   W02
@ 030   ----------------------------------------
        .byte   W06
        .byte           TIE   , Dn2 , v108
        .byte           TIE   , Dn3 , v096
        .byte   W90
@ 031   ----------------------------------------
        .byte   W84
        .byte           EOT   , Dn2
        .byte                   Dn3
        .byte   W02
        .byte           N03   , Gn2 , v076
        .byte           N03   , Dn3
        .byte   W08
        .byte                   Gn2 , v080
        .byte           N03   , Dn3
        .byte   W02
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-49
        .byte           VOL   , 63
        .byte           N03   , Gs1 , v100
        .byte           N03   , Cs2
        .byte   W08
        .byte           N01   , An1 , v084
        .byte           N01   , Dn2
        .byte   W08
        .byte                   An1 , v076
        .byte           N01   , Dn2
        .byte   W08
        .byte           N15   , Gs1 , v108
        .byte           N15   , Cs2
        .byte   W16
        .byte           N07   , An1 , v112
        .byte           N07   , Dn2
        .byte   W08
        .byte           N01   , As1
        .byte           N01   , Dn2 , v108
        .byte   W08
        .byte                   As1 , v068
        .byte           N01   , Dn2
        .byte   W08
        .byte                   As1 , v072
        .byte           N01   , Dn2
        .byte   W08
        .byte           N23   , An1 , v108
        .byte           N23   , Dn2
        .byte   W18
@ 035   ----------------------------------------
        .byte   W06
        .byte           N03   , An1 , v100
        .byte           N03   , Dn2
        .byte   W08
        .byte           N01   , As1 , v084
        .byte           N01   , Ds2
        .byte   W08
        .byte                   As1 , v076
        .byte           N01   , Ds2
        .byte   W08
        .byte           N15   , Fn1 , v092
        .byte           N15   , Cs2
        .byte   W15
        .byte           N07   , Dn2 , v112
        .byte   W01
        .byte                   Gn1 , v092
        .byte   W08
        .byte           N01   , An1 , v112
        .byte           N01   , Dn2
        .byte   W08
        .byte                   Dn2 , v056
        .byte   W08
        .byte                   Dn2 , v076
        .byte   W08
        .byte           N08   , An1 , v108
        .byte           N23   , Dn2
        .byte   W08
        .byte           N01   , An1 , v056
        .byte   W08
        .byte                   An1 , v076
        .byte   W02
@ 036   ----------------------------------------
        .byte   W06
        .byte           N03   , Gs1 , v100
        .byte           N03   , Cs2
        .byte   W08
        .byte           N01   , An1 , v084
        .byte           N01   , Dn2
        .byte   W08
        .byte                   An1 , v076
        .byte           N01   , Dn2
        .byte   W08
        .byte           N15   , Gs1 , v108
        .byte           N15   , Cs2
        .byte   W16
        .byte           N07   , An1 , v112
        .byte           N07   , Dn2
        .byte   W08
        .byte           N01   , As1
        .byte           N01   , Dn2 , v108
        .byte   W08
        .byte                   As1 , v068
        .byte           N01   , Dn2
        .byte   W08
        .byte                   As1 , v072
        .byte           N01   , Dn2
        .byte   W08
        .byte           N23   , Fn3 , v108
        .byte           N23   , An3
        .byte   W12
        .byte           MOD   , 2
        .byte   W06
@ 037   ----------------------------------------
        .byte   W05
        .byte           N23   , Dn2 , v088
        .byte   W01
        .byte           MOD   , 0
        .byte           N23   , An1
        .byte   W24
        .byte           N15   , Fn1
        .byte           N15   , Cn2
        .byte   W16
        .byte           N03   , Gn1
        .byte           N03   , Cs2
        .byte   W08
        .byte                   An1
        .byte           N03   , Dn2
        .byte   W08
        .byte           N01   , An1
        .byte           N01   , Dn2
        .byte   W08
        .byte                   An1
        .byte           N01   , Dn2
        .byte   W08
        .byte           N23   , An1
        .byte           N23   , Dn2
        .byte   W12
        .byte           MOD   , 2
        .byte   W06
@ 038   ----------------------------------------
        .byte   W06
        .byte                   0
        .byte   W90
@ 039   ----------------------------------------
        .byte   W96
@ 040   ----------------------------------------
        .byte   W96
@ 041   ----------------------------------------
        .byte           N01   , Dn1 , v127
        .byte           N01   , Dn2
        .byte   W03
        .byte                   Dn1
        .byte           N01   , Dn2
        .byte   W03
        .byte           N04   , Dn1
        .byte           N04   , An1
        .byte           N04   , Dn2
        .byte   W12
        .byte           N10   , Dn1
        .byte           N10   , An1
        .byte           N10   , Dn2
        .byte   W12
        .byte                   Fn1
        .byte           N10   , Dn2
        .byte           N10   , Fn2
        .byte   W12
        .byte           N04   , Dn1
        .byte           N04   , An1
        .byte           N04   , Dn2
        .byte   W12
        .byte           N10   , Dn1
        .byte           N10   , An1
        .byte           N10   , Dn2
        .byte   W12
        .byte                   Gn1
        .byte           N10   , En2
        .byte           N10   , Gn2
        .byte   W12
        .byte           N04   , Dn1
        .byte           N04   , An1
        .byte           N04   , Dn2
        .byte   W12
        .byte           N10   , An1
        .byte           N10   , Fn2
        .byte           N10   , An2
        .byte   W06
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
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W78
        .byte           N22   , Gs1
        .byte           N22   , Gs2 , v088
        .byte   W10
        .byte           PAN   , c_v-41
        .byte   W01
        .byte                   c_v-31
        .byte   W01
        .byte                   c_v-11
        .byte           BEND  , c_v-1
        .byte   W01
        .byte           PAN   , c_v-1
        .byte           BEND  , c_v-2
        .byte   W01
        .byte           PAN   , c_v+9
        .byte           BEND  , c_v-3
        .byte   W01
        .byte           PAN   , c_v+29
        .byte           BEND  , c_v-4
        .byte   W01
        .byte           PAN   , c_v+39
        .byte           BEND  , c_v-5
        .byte   W01
        .byte                   c_v-6
        .byte   W01
@ 066   ----------------------------------------
        .byte                   c_v-7
        .byte   W01
        .byte           PAN   , c_v+57
        .byte           BEND  , c_v-8
        .byte   W01
        .byte                   c_v-9
        .byte   W01
        .byte                   c_v-10
        .byte   W03
        .byte           PAN   , c_v-48
        .byte           BEND  , c_v+0
        .byte           N04   , Cs1 , v116
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N02   , Cs1
        .byte   W06
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N02   , Cs1
        .byte   W06
@ 067   ----------------------------------------
mus_pkmn_bw12_129_6_67:
        .byte           N01   , Cn1 , v116
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N02   , Cs1
        .byte   W06
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N04   , Cs1
        .byte   W12
        .byte           N01   , Cn1
        .byte   W06
        .byte           N02   , Cs1
        .byte   W06
        .byte   PEND
@ 068   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_6_67
@ 069   ----------------------------------------
        .byte           N01   , Cn1 , v116
        .byte   W06
        .byte           N03   , Fs1
        .byte   W12
        .byte           N01   , Fn1
        .byte   W06
        .byte           N02   , Fs1
        .byte   W12
        .byte           N01   , Fn1
        .byte   W06
        .byte           N02   , Fs1
        .byte   W06
        .byte           N01   , Fn1
        .byte   W06
        .byte           N03   , Fs1
        .byte   W12
        .byte           N01   , Fn1
        .byte   W06
        .byte           N02   , Fs1
        .byte   W12
        .byte           N01   , Fn1
        .byte   W06
        .byte           N02   , Fs1
        .byte   W06
@ 070   ----------------------------------------
        .byte           N01   , Fn1
        .byte   W06
        .byte           N16   , Cn1
        .byte   W90
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           PAN   , c_v+55
        .byte           VOL   , 75
        .byte   W05
@ 074   ----------------------------------------
        .byte                   76
        .byte   GOTO
         .word  mus_pkmn_bw12_129_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_pkmn_bw12_129_7:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 102
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 57
        .byte   W06
        .byte           PAN   , c_v-56
        .byte           VOL   , 85
        .byte           BEND  , c_v+8
        .byte           TIE   , As2 , v112
        .byte   W16
        .byte           PAN   , c_v-44
        .byte   W72
        .byte   W02
@ 001   ----------------------------------------
        .byte   W06
        .byte                   c_v+14
        .byte           BEND  , c_v+4
        .byte   W16
        .byte           PAN   , c_v+31
        .byte           BEND  , c_v+3
        .byte   W16
        .byte           PAN   , c_v+47
        .byte           BEND  , c_v+1
        .byte   W08
        .byte                   c_v-8
        .byte   W08
        .byte           PAN   , c_v+57
        .byte   W08
        .byte           BEND  , c_v-10
        .byte   W08
        .byte           PAN   , c_v+59
        .byte   W08
        .byte           BEND  , c_v-11
        .byte   W18
@ 002   ----------------------------------------
        .byte   W05
        .byte           EOT
        .byte   W01
        .byte           VOL   , 48
        .byte           PAN   , c_v-63
        .byte           BEND  , c_v+0
        .byte   W02
        .byte           VOICE , 91
        .byte   W88
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W06
        .byte                   101
        .byte           PAN   , c_v+43
        .byte           VOL   , 85
        .byte   W40
        .byte           BEND  , c_v-11
        .byte   W02
        .byte           N52   , Cs3 , v092
        .byte   W01
        .byte           BEND  , c_v-9
        .byte   W03
        .byte                   c_v-6
        .byte   W03
        .byte                   c_v-4
        .byte   W03
        .byte                   c_v-1
        .byte   W03
        .byte                   c_v+1
        .byte   W03
        .byte                   c_v+3
        .byte   W03
        .byte                   c_v+6
        .byte   W03
        .byte                   c_v+8
        .byte   W05
        .byte                   c_v+10
        .byte   W21
@ 007   ----------------------------------------
        .byte   W06
        .byte           PAN   , c_v-31
        .byte           BEND  , c_v+0
        .byte   W90
@ 008   ----------------------------------------
        .byte   W48
        .byte                   c_v-11
        .byte           N52
        .byte   W03
        .byte           BEND  , c_v-9
        .byte   W03
        .byte                   c_v-6
        .byte   W03
        .byte                   c_v-4
        .byte   W03
        .byte                   c_v-1
        .byte   W03
        .byte                   c_v+1
        .byte   W03
        .byte                   c_v+3
        .byte   W03
        .byte                   c_v+6
        .byte   W03
        .byte                   c_v+8
        .byte   W04
        .byte                   c_v+10
        .byte   W20
@ 009   ----------------------------------------
        .byte   W06
        .byte           VOICE , 93
        .byte   W01
        .byte           BEND  , c_v+0
        .byte   W23
        .byte           PAN   , c_v-9
        .byte   W66
@ 010   ----------------------------------------
mus_pkmn_bw12_129_7_LOOP:
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   W06
        .byte           VOICE , 75
        .byte           VOL   , 37
        .byte           PAN   , c_v+29
        .byte   W90
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
        .byte   W66
        .byte           VOICE , 100
        .byte   W12
        .byte           VOL   , 85
        .byte           PAN   , c_v+56
        .byte           N05   , Dn2 , v127
        .byte   W08
        .byte           N07   , Bn1 , v112
        .byte   W08
        .byte                   Dn2 , v127
        .byte   W02
@ 022   ----------------------------------------
        .byte   W06
        .byte           N19   , En2
        .byte   W24
        .byte           N21   , Bn1 , v104
        .byte   W24
        .byte           N15   , En2 , v127
        .byte   W16
        .byte                   Bn1
        .byte   W16
        .byte                   Dn2
        .byte   W10
@ 023   ----------------------------------------
        .byte   W06
        .byte                   En2
        .byte   W16
        .byte           N32   , Bn1
        .byte   W32
        .byte           N15   , En2
        .byte   W16
        .byte                   Bn1
        .byte   W16
        .byte                   En2
        .byte   W10
@ 024   ----------------------------------------
        .byte   W06
        .byte           N07   , En2 , v108
        .byte   W16
        .byte                   En2 , v060
        .byte   W08
        .byte           N11   , Bn1 , v116
        .byte   W16
        .byte           N07   , Bn1 , v080
        .byte   W08
        .byte           N23   , En2 , v108
        .byte   W24
        .byte           N11   , Bn1
        .byte   W16
        .byte           N07   , Bn1 , v080
        .byte   W02
@ 025   ----------------------------------------
        .byte   W06
        .byte           N15   , En2 , v127
        .byte   W16
        .byte                   Bn1
        .byte   W16
        .byte                   En2
        .byte   W16
        .byte                   Bn1
        .byte   W16
        .byte           N07   , En2
        .byte   W08
        .byte                   Bn1 , v076
        .byte   W08
        .byte           N01   , En2 , v127
        .byte   W08
        .byte                   En2
        .byte   W02
@ 026   ----------------------------------------
mus_pkmn_bw12_129_7_26:
        .byte   W06
        .byte           N01   , Bn1 , v108
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte           N08   , En2 , v116
        .byte   W12
        .byte           N01   , Bn1 , v108
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte           N08   , En2 , v116
        .byte   W12
        .byte           N01   , Bn1 , v108
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte   PEND
@ 027   ----------------------------------------
mus_pkmn_bw12_129_7_27:
        .byte           N01   , Bn1 , v108
        .byte   W06
        .byte           N08   , En2 , v116
        .byte   W12
        .byte           N01   , Bn1 , v108
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte                   Bn1
        .byte   W06
        .byte           N08   , En2 , v116
        .byte   W12
        .byte           N10   , Fn2
        .byte   W16
        .byte                   Dn2
        .byte   W16
        .byte           N13   , Bn1
        .byte   W10
        .byte   PEND
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_7_26
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_7_27
@ 030   ----------------------------------------
        .byte   W06
        .byte           N92   , Dn2 , v127
        .byte   W90
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
        .byte   W06
        .byte           N08   , As2 , v108
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N04   , Cn2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Gn1
        .byte   W12
        .byte           N03   , Cn3 , v124
        .byte   W08
        .byte                   Cn3 , v108
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N22   , Cn2 , v108
        .byte   W18
@ 063   ----------------------------------------
        .byte   W06
        .byte           N14   , Cn2 , v124
        .byte   W18
        .byte           N13   , Gn1 , v108
        .byte   W18
        .byte           N10   , Cn2 , v127
        .byte   W12
        .byte           N03   , Cn3 , v124
        .byte   W08
        .byte                   Cn3 , v108
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N22   , Cs2 , v108
        .byte   W18
@ 064   ----------------------------------------
        .byte   W06
        .byte           N08   , Gn2
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N04   , Cn2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Gn1
        .byte   W12
        .byte           N03   , Cn3 , v124
        .byte   W08
        .byte                   Cn3 , v108
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N22   , Cn2 , v108
        .byte   W18
@ 065   ----------------------------------------
        .byte   W06
        .byte           N13
        .byte   W18
        .byte           N14   , Gn1
        .byte   W18
        .byte           N10   , Gn2
        .byte   W20
        .byte           N03   , Cn3
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N22   , Cn2 , v108
        .byte   W18
@ 066   ----------------------------------------
        .byte   W96
@ 067   ----------------------------------------
        .byte   W96
@ 068   ----------------------------------------
        .byte   W96
@ 069   ----------------------------------------
        .byte   W96
@ 070   ----------------------------------------
        .byte   W04
        .byte           VOICE , 101
        .byte   W22
        .byte           VOL   , 75
        .byte   W04
        .byte           VOICE , 102
        .byte           VOL   , 74
        .byte           BEND  , c_v-1
        .byte           TIE   , Cn2 , v104
        .byte   W04
        .byte           VOL   , 72
        .byte   W02
        .byte           BEND  , c_v-2
        .byte   W02
        .byte           VOL   , 69
        .byte   W04
        .byte                   64
        .byte   W04
        .byte                   63
        .byte   W02
        .byte           BEND  , c_v-3
        .byte   W02
        .byte           VOL   , 59
        .byte   W04
        .byte                   56
        .byte           BEND  , c_v-4
        .byte   W04
        .byte           VOL   , 54
        .byte   W02
        .byte           BEND  , c_v-5
        .byte   W02
        .byte           VOL   , 52
        .byte   W04
        .byte                   48
        .byte   W04
        .byte                   46
        .byte           BEND  , c_v-6
        .byte   W04
        .byte           VOL   , 44
        .byte   W02
        .byte           BEND  , c_v-7
        .byte   W02
        .byte           VOL   , 43
        .byte   W02
        .byte           BEND  , c_v-8
        .byte   W02
        .byte           VOL   , 41
        .byte   W04
        .byte                   40
        .byte           BEND  , c_v-9
        .byte   W04
        .byte           VOL   , 39
        .byte           BEND  , c_v-10
        .byte   W04
        .byte           VOL   , 37
        .byte   W02
@ 071   ----------------------------------------
        .byte   W02
        .byte                   36
        .byte   W02
        .byte           BEND  , c_v-11
        .byte   W02
        .byte           VOL   , 35
        .byte   W04
        .byte                   33
        .byte   W60
        .byte                   35
        .byte   W08
        .byte                   36
        .byte           PAN   , c_v-6
        .byte   W08
        .byte           VOL   , 37
        .byte           PAN   , c_v-19
        .byte   W04
        .byte           BEND  , c_v-10
        .byte   W04
        .byte           VOL   , 39
        .byte           PAN   , c_v-36
        .byte   W02
@ 072   ----------------------------------------
        .byte   W02
        .byte           VOL   , 40
        .byte   W04
        .byte           PAN   , c_v-54
        .byte           VOL   , 41
        .byte   W04
        .byte                   42
        .byte           BEND  , c_v-9
        .byte   W04
        .byte           PAN   , c_v-49
        .byte           VOL   , 43
        .byte   W04
        .byte                   44
        .byte   W04
        .byte                   46
        .byte           PAN   , c_v-42
        .byte   W04
        .byte           VOL   , 47
        .byte           BEND  , c_v-8
        .byte   W04
        .byte           VOL   , 48
        .byte           PAN   , c_v-33
        .byte   W04
        .byte           VOL   , 49
        .byte   W04
        .byte                   50
        .byte           PAN   , c_v-30
        .byte           BEND  , c_v-7
        .byte   W04
        .byte           VOL   , 51
        .byte   W04
        .byte                   52
        .byte           PAN   , c_v-28
        .byte   W02
        .byte           BEND  , c_v-6
        .byte   W02
        .byte           VOL   , 55
        .byte   W04
        .byte                   56
        .byte           PAN   , c_v-27
        .byte           BEND  , c_v-5
        .byte   W08
        .byte           PAN   , c_v-23
        .byte           VOL   , 58
        .byte           BEND  , c_v-4
        .byte   W02
        .byte                   c_v-3
        .byte   W02
        .byte           VOL   , 59
        .byte           BEND  , c_v-2
        .byte   W02
        .byte                   c_v-1
        .byte   W02
        .byte           PAN   , c_v-18
        .byte   W04
        .byte           VOL   , 60
        .byte   W02
        .byte           BEND  , c_v+0
        .byte   W02
        .byte           VOL   , 61
        .byte           PAN   , c_v-16
        .byte   W04
        .byte           VOL   , 62
        .byte   W02
        .byte           BEND  , c_v+1
        .byte   W02
        .byte           PAN   , c_v-10
        .byte   W04
        .byte           VOL   , 63
        .byte           BEND  , c_v+2
        .byte   W04
        .byte           PAN   , c_v-5
        .byte   W02
@ 073   ----------------------------------------
        .byte   W05
        .byte           EOT
        .byte   W01
        .byte           PAN   , c_v-1
        .byte           BEND  , c_v+3
        .byte           N90   , Cs3 , v092
        .byte   W04
        .byte           VOL   , 60
        .byte   W04
        .byte           PAN   , c_v+6
        .byte           BEND  , c_v+4
        .byte   W04
        .byte           VOL   , 59
        .byte   W04
        .byte                   58
        .byte           PAN   , c_v+12
        .byte   W04
        .byte           BEND  , c_v+5
        .byte   W04
        .byte           VOL   , 57
        .byte           PAN   , c_v+20
        .byte   W04
        .byte           VOL   , 56
        .byte   W02
        .byte           BEND  , c_v+6
        .byte   W02
        .byte           VOL   , 55
        .byte           PAN   , c_v+25
        .byte   W02
        .byte           BEND  , c_v+7
        .byte   W02
        .byte           VOL   , 54
        .byte           BEND  , c_v+8
        .byte   W04
        .byte           VOL   , 52
        .byte           PAN   , c_v+36
        .byte   W04
        .byte           VOL   , 49
        .byte   W04
        .byte           PAN   , c_v+44
        .byte           VOL   , 47
        .byte           BEND  , c_v+9
        .byte   W02
        .byte                   c_v+10
        .byte   W02
        .byte           VOL   , 44
        .byte   W04
        .byte                   43
        .byte           PAN   , c_v+54
        .byte   W04
        .byte           VOL   , 41
        .byte   W04
        .byte                   40
        .byte   W04
        .byte                   37
        .byte   W04
        .byte                   35
        .byte   W04
        .byte                   33
        .byte   W04
        .byte                   30
        .byte   W04
        .byte                   26
        .byte   W04
        .byte                   24
        .byte   W02
@ 074   ----------------------------------------
        .byte           VOICE , 93
        .byte           VOL   , 85
        .byte           PAN   , c_v-9
        .byte           BEND  , c_v+0
        .byte   GOTO
         .word  mus_pkmn_bw12_129_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.8) ******************@

mus_pkmn_bw12_129_8:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 103
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 78
        .byte           PAN   , c_v+24
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
mus_pkmn_bw12_129_8_2:
        .byte   W18
        .byte           N14   , Cn4 , v127
        .byte   W24
        .byte                   Cn4
        .byte   W24
        .byte                   Cn4
        .byte   W24
        .byte                   Cn4
        .byte   W06
        .byte   PEND
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 010   ----------------------------------------
mus_pkmn_bw12_129_8_LOOP:
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
        .byte   W96
@ 047   ----------------------------------------
        .byte   W96
@ 048   ----------------------------------------
        .byte   W96
@ 049   ----------------------------------------
        .byte   W96
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 053   ----------------------------------------
        .byte   W18
        .byte           N14   , Cn4 , v127
        .byte   W24
        .byte           N08
        .byte   W12
        .byte                   Cn4
        .byte   W10
        .byte           N02
        .byte   W06
        .byte                   Cn4
        .byte   W08
        .byte                   Cn4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte           N14
        .byte   W06
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_8_2
@ 057   ----------------------------------------
        .byte   W18
        .byte           N14   , Cn4 , v127
        .byte   W24
        .byte           N08
        .byte   W12
        .byte           N02   , Ds4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte           N14
        .byte   W06
@ 058   ----------------------------------------
        .byte   W06
        .byte           N04   , Dn4 , v100
        .byte   W06
        .byte                   As3 , v092
        .byte   W06
        .byte                   Fn4 , v096
        .byte   W06
        .byte                   Dn4 , v100
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn4 , v092
        .byte   W06
        .byte                   Dn5 , v096
        .byte   W07
        .byte                   As4 , v100
        .byte   W05
        .byte           PAN   , c_v-34
        .byte           N04   , As5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   As3
        .byte   W06
@ 059   ----------------------------------------
        .byte                   Fn3
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   As3 , v092
        .byte   W06
        .byte                   Fn4 , v096
        .byte   W06
        .byte                   Dn4 , v100
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn4 , v092
        .byte   W03
        .byte           PAN   , c_v-19
        .byte   W03
        .byte           N04   , Dn5 , v096
        .byte   W03
        .byte           PAN   , c_v+14
        .byte   W04
        .byte           N04   , As4 , v100
        .byte   W05
        .byte           PAN   , c_v+32
        .byte           N04   , As5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   As3
        .byte   W06
@ 060   ----------------------------------------
        .byte                   Fn3
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Dn4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   As5
        .byte   W06
        .byte                   Dn6
        .byte   W06
        .byte           PAN   , c_v+8
        .byte           N04   , Fn5
        .byte   W06
        .byte           PAN   , c_v-10
        .byte           N04   , Dn5
        .byte   W06
        .byte           PAN   , c_v-37
        .byte           N04   , As4
        .byte   W06
        .byte                   Dn5
        .byte   W06
        .byte                   Fn4
        .byte   W06
@ 061   ----------------------------------------
        .byte                   Dn4
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   Dn4 , v092
        .byte   W06
        .byte                   Fn4 , v096
        .byte   W06
        .byte                   An4 , v100
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte                   Dn5 , v092
        .byte   W06
        .byte                   Fn5 , v096
        .byte   W07
        .byte                   As5 , v100
        .byte   W05
        .byte                   An5
        .byte   W06
        .byte                   As5
        .byte   W06
        .byte           PAN   , c_v-10
        .byte           N04   , En5
        .byte   W06
        .byte                   Fn5
        .byte   W06
        .byte           PAN   , c_v+17
        .byte           N04   , Cs5
        .byte   W06
        .byte                   Dn5
        .byte   W03
        .byte           PAN   , c_v+41
        .byte   W03
        .byte           N04   , An4
        .byte   W06
@ 062   ----------------------------------------
        .byte                   As4
        .byte   W96
@ 063   ----------------------------------------
        .byte   W96
@ 064   ----------------------------------------
        .byte   W96
@ 065   ----------------------------------------
        .byte   W96
@ 066   ----------------------------------------
        .byte   W96
@ 067   ----------------------------------------
        .byte   W96
@ 068   ----------------------------------------
        .byte   W96
@ 069   ----------------------------------------
        .byte   W96
@ 070   ----------------------------------------
        .byte   W96
@ 071   ----------------------------------------
        .byte   W96
@ 072   ----------------------------------------
        .byte   W96
@ 073   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           PAN   , c_v+24
        .byte   W05
@ 074   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_129_8_LOOP
        .byte   FINE

@****************** Track 9 (Midi-Chn.9) ******************@

mus_pkmn_bw12_129_9:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 39
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 85
        .byte           N01   , En2 , v088
        .byte   W03
        .byte                   En2
        .byte   W03
        .byte           N56   , CnM2 , v120
        .byte           N40   , En2 , v127
        .byte   W42
        .byte           N01   , En2 , v088
        .byte   W03
        .byte                   En2
        .byte   W03
        .byte           N40   , En2 , v127
        .byte   W42
@ 001   ----------------------------------------
        .byte           N01   , As2 , v088
        .byte   W03
        .byte                   As2
        .byte   W03
        .byte           N40   , As2 , v127
        .byte   W42
        .byte           N01   , An2 , v088
        .byte   W03
        .byte                   An2
        .byte   W03
        .byte           N22   , An2 , v127
        .byte   W24
        .byte           N03   , GnM2
        .byte   W06
        .byte           N02   , GnM2 , v104
        .byte   W06
        .byte                   FsM2
        .byte   W06
@ 002   ----------------------------------------
        .byte                   DnM2 , v127
        .byte   W03
        .byte           N01   , FnM2 , v116
        .byte   W03
        .byte           N44   , En2 , v127
        .byte   W12
        .byte           N11   , FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W06
@ 003   ----------------------------------------
mus_pkmn_bw12_129_9_3:
        .byte   W18
        .byte           N11   , FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W06
        .byte   PEND
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_3
@ 005   ----------------------------------------
        .byte   W18
        .byte           N11   , FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   FsM2 , v080
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   CnM1
        .byte   W12
        .byte           N02   , FsM2 , v100
        .byte   W06
        .byte                   FsM2
        .byte   W06
        .byte                   FsM2
        .byte           N11   , CnM1 , v088
        .byte   W06
@ 006   ----------------------------------------
        .byte           N02   , FsM2 , v060
        .byte   W06
        .byte           N23   , CnM2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W12
        .byte           N22   , CnM2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W06
@ 007   ----------------------------------------
mus_pkmn_bw12_129_9_7:
        .byte   W06
        .byte           N23   , CnM2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W12
        .byte           N22   , CnM2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W24
        .byte                   DnM2 , v084
        .byte           N11   , CnM1 , v088
        .byte   W06
        .byte   PEND
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_7
@ 009   ----------------------------------------
        .byte   W06
        .byte           N23   , CnM2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v084
        .byte           N11   , En2 , v088
        .byte   W24
        .byte           N08   , DnM2 , v084
        .byte           N11   , En2 , v088
        .byte   W12
        .byte           N22   , CnM2 , v127
        .byte           N02   , DnM2 , v084
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte           N21   , An2 , v088
        .byte   W06
        .byte           N02   , DnM2 , v084
        .byte   W06
        .byte           N01
        .byte   W03
        .byte                   DnM2
        .byte   W03
        .byte                   DnM2
        .byte   W03
        .byte                   DnM2
        .byte   W03
        .byte                   DnM2
        .byte           N09   , An2 , v127
        .byte   W03
        .byte           N01   , DnM2 , v084
        .byte   W03
@ 010   ----------------------------------------
mus_pkmn_bw12_129_9_LOOP:
        .byte           N01   , DnM2 , v084
        .byte   W03
        .byte                   DnM2
        .byte   W03
        .byte           N60   , En2 , v127
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W06
@ 011   ----------------------------------------
mus_pkmn_bw12_129_9_11:
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W06
        .byte   PEND
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_11
@ 013   ----------------------------------------
mus_pkmn_bw12_129_9_13:
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W12
        .byte                   CnM2 , v127
        .byte   W12
        .byte           N10   , FsM2 , v108
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W18
        .byte                   CnM2
        .byte           N10   , FsM2 , v108
        .byte   W06
        .byte   PEND
@ 014   ----------------------------------------
        .byte   W06
        .byte           N24   , En2 , v127
        .byte   W12
        .byte           N11   , DnM2 , v088
        .byte   W24
        .byte                   DnM2
        .byte   W24
        .byte                   DnM2
        .byte   W24
        .byte                   DnM2
        .byte   W06
@ 015   ----------------------------------------
mus_pkmn_bw12_129_9_15:
        .byte   W18
        .byte           N11   , DnM2 , v088
        .byte   W24
        .byte                   DnM2
        .byte   W24
        .byte                   DnM2
        .byte   W24
        .byte                   DnM2
        .byte   W06
        .byte   PEND
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_15
@ 017   ----------------------------------------
        .byte   W18
        .byte           N11   , DnM2 , v088
        .byte   W24
        .byte                   DnM2
        .byte   W24
        .byte           N10   , CnM2 , v127
        .byte   W24
        .byte                   CnM2
        .byte   W06
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_15
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_15
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_15
@ 021   ----------------------------------------
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W12
        .byte                   CnM2 , v127
        .byte           N04   , DnM2 , v108
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte           N10   , CnM2 , v127
        .byte           N28   , GnM2
        .byte   W06
        .byte           N04   , DnM2 , v108
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N04   , DnM2 , v108
        .byte   W06
@ 022   ----------------------------------------
        .byte                   DnM2
        .byte   W06
        .byte           N11   , En2 , v092
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N02   , FnM2 , v084
        .byte   W24
        .byte           N10   , CnM2 , v088
        .byte           N02   , FnM2 , v084
        .byte   W12
        .byte           N32   , An2 , v092
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N02   , FnM2 , v084
        .byte   W24
        .byte           N10   , CnM2 , v088
        .byte           N02   , FnM2 , v084
        .byte   W06
@ 023   ----------------------------------------
        .byte   W18
        .byte           N10   , CnM2 , v127
        .byte           N02   , FnM2 , v084
        .byte   W24
        .byte           N10   , CnM2 , v088
        .byte           N02   , FnM2 , v084
        .byte   W12
        .byte           N32   , En2 , v092
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N02   , FnM2 , v084
        .byte   W24
        .byte           N10   , CnM2 , v088
        .byte           N02   , FnM2 , v084
        .byte   W06
@ 024   ----------------------------------------
        .byte   W18
        .byte           N10   , CnM2 , v127
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W18
        .byte           N10   , CnM2 , v088
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W06
        .byte           N32   , En2 , v092
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W18
        .byte           N10   , CnM2 , v088
        .byte           N04   , FnM2 , v084
        .byte   W06
@ 025   ----------------------------------------
        .byte                   FnM2
        .byte   W18
        .byte           N10   , CnM2 , v127
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W18
        .byte           N10   , CnM2 , v088
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W06
        .byte           N23   , En2 , v092
        .byte   W12
        .byte           N10   , CnM2 , v127
        .byte           N04   , FnM2 , v084
        .byte   W06
        .byte                   FnM2
        .byte   W06
        .byte                   FnM2
        .byte   W06
        .byte                   FnM2
        .byte   W06
        .byte           N10   , CnM2 , v088
        .byte           N04   , FnM2 , v084
        .byte   W06
@ 026   ----------------------------------------
        .byte                   FnM2
        .byte   W06
        .byte           N32   , En2 , v127
        .byte   W24
        .byte           N08   , CnM2
        .byte   W06
        .byte           N11   , CsM1 , v088
        .byte   W30
        .byte           N08   , CnM2 , v127
        .byte   W04
        .byte           N11   , CsM1 , v088
        .byte   W24
        .byte   W02
@ 027   ----------------------------------------
        .byte   W06
        .byte           N08   , CnM2 , v127
        .byte   W06
        .byte           N11   , CsM1 , v088
        .byte   W30
        .byte           N08   , CnM2 , v127
        .byte   W06
        .byte           N11   , CsM1 , v088
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W16
        .byte                   CnM2
        .byte   W16
        .byte                   CnM2
        .byte   W10
@ 028   ----------------------------------------
        .byte   W06
        .byte           N15   , En2 , v100
        .byte   W24
        .byte           N08   , CnM2 , v127
        .byte           N02   , DnM2 , v088
        .byte   W06
        .byte                   DnM2
        .byte   W30
        .byte           N08   , CnM2 , v127
        .byte           N02   , DnM2 , v088
        .byte   W06
        .byte                   DnM2
        .byte   W24
@ 029   ----------------------------------------
        .byte   W06
        .byte           N08   , CnM2 , v127
        .byte           N02   , DnM2 , v088
        .byte   W06
        .byte                   DnM2
        .byte   W30
        .byte           N08   , CnM2 , v127
        .byte           N02   , DnM2 , v088
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W16
        .byte                   CnM2
        .byte   W16
        .byte                   CnM2
        .byte   W10
@ 030   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte   W01
        .byte           N56   , As2
        .byte   W11
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W06
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_11
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_11
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_13
@ 034   ----------------------------------------
        .byte   W06
        .byte           N60   , CnM2 , v127
        .byte           N68   , An2 , v112
        .byte   W24
        .byte           N05   , FnM2 , v127
        .byte   W16
        .byte                   FnM2 , v088
        .byte   W08
        .byte                   FnM2 , v127
        .byte   W08
        .byte                   FnM2
        .byte   W08
        .byte                   FnM2 , v088
        .byte   W08
        .byte           N19   , CnM2 , v124
        .byte   W18
@ 035   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte           N56   , An2 , v112
        .byte   W24
        .byte           N05   , FnM2 , v127
        .byte   W16
        .byte                   FnM2 , v088
        .byte   W08
        .byte                   FnM2 , v127
        .byte   W08
        .byte                   FnM2
        .byte   W08
        .byte                   FnM2 , v088
        .byte   W08
        .byte           N15   , CnM2 , v124
        .byte   W18
@ 036   ----------------------------------------
        .byte   W06
        .byte           N19
        .byte           N56   , An2 , v112
        .byte   W24
        .byte           N05   , FnM2 , v127
        .byte   W16
        .byte                   FnM2 , v088
        .byte   W08
        .byte                   FnM2 , v127
        .byte   W08
        .byte                   FnM2
        .byte   W08
        .byte                   FnM2 , v088
        .byte   W08
        .byte           N19   , CnM2 , v124
        .byte   W18
@ 037   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte   W10
        .byte           N24   , As2
        .byte   W02
        .byte                   CsM1
        .byte   W36
        .byte           N19   , CnM2
        .byte   W06
        .byte           N24   , CsM1
        .byte           N24   , As2
        .byte   W36
@ 038   ----------------------------------------
        .byte   W06
        .byte           N40   , An2
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W24
        .byte                   GnM2
        .byte   W06
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_11
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_11
@ 041   ----------------------------------------
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CsM1 , v088
        .byte           N23   , An2 , v127
        .byte   W12
        .byte           N11   , CnM2 , v088
        .byte   W24
        .byte           N10   , CsM1 , v108
        .byte           N23   , En2 , v127
        .byte   W24
        .byte           N11   , CsM1 , v108
        .byte   W01
        .byte           N10   , En2 , v100
        .byte   W05
@ 042   ----------------------------------------
        .byte   W06
        .byte           N32   , En2 , v127
        .byte   W12
        .byte           N02   , DnM2 , v104
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
@ 043   ----------------------------------------
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
@ 044   ----------------------------------------
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
@ 045   ----------------------------------------
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W18
        .byte                   DnM2
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte           N11   , An2
        .byte   W12
        .byte           N02   , DnM2
        .byte   W06
        .byte           N10   , CnM2
        .byte           N02   , DnM2
        .byte           N11   , En2
        .byte   W18
        .byte           N10   , CnM2
        .byte           N02   , DnM2
        .byte           N11   , As2
        .byte   W06
@ 046   ----------------------------------------
        .byte           N02   , DnM2
        .byte   W06
        .byte           N01   , BnM2 , v056
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte   W03
        .byte           N01   , BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte   W03
        .byte           N01   , BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v056
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v056
        .byte           N23   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v088
        .byte   W03
        .byte                   BnM2 , v052
        .byte   W03
        .byte                   BnM2 , v080
        .byte   W03
        .byte                   BnM2 , v060
        .byte   W03
        .byte                   BnM2 , v108
        .byte   W06
@ 047   ----------------------------------------
        .byte                   BnM2 , v052
        .byte   W06
        .byte                   BnM2 , v056
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte   W03
        .byte           N01   , BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte   W03
        .byte           N01   , BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v056
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v056
        .byte           N23   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v056
        .byte   W06
@ 048   ----------------------------------------
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v088
        .byte   W03
        .byte                   BnM2 , v052
        .byte   W03
        .byte                   BnM2 , v080
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W03
        .byte                   BnM2 , v108
        .byte   W06
        .byte                   BnM2 , v052
        .byte   W06
        .byte                   BnM2 , v056
        .byte   W03
        .byte           N14   , FnM2 , v127
        .byte   W03
        .byte           N01   , BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v076
        .byte   W06
        .byte                   BnM2 , v020
        .byte   W06
        .byte                   BnM2 , v088
        .byte           N12   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v048
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N05   , CsM1 , v072
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N01   , BnM2 , v088
        .byte   W06
        .byte                   BnM2
        .byte           N06   , CsM1 , v127
        .byte   W06
        .byte           N05   , CsM1 , v072
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N01   , BnM2 , v048
        .byte   W06
@ 049   ----------------------------------------
        .byte           N04   , FnM2 , v127
        .byte           N01   , BnM2 , v084
        .byte   W06
        .byte                   BnM2 , v072
        .byte   W06
        .byte                   BnM2 , v032
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N04   , CnM1 , v108
        .byte   W06
        .byte                   FnM2 , v127
        .byte           N01   , BnM2 , v088
        .byte   W06
        .byte                   BnM2 , v048
        .byte   W06
        .byte           N05   , CnM1 , v084
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N01   , BnM2 , v064
        .byte   W06
        .byte           N04   , FnM2 , v127
        .byte           N05   , CnM1 , v108
        .byte   W06
        .byte           N16   , CnM2 , v127
        .byte           N01   , BnM2 , v088
        .byte   W06
        .byte           N05   , CnM1 , v108
        .byte   W06
        .byte           N01   , BnM2 , v080
        .byte   W06
        .byte           N17   , CnM2 , v127
        .byte           N01   , BnM2 , v088
        .byte   W06
        .byte                   BnM2
        .byte   W03
        .byte                   BnM2 , v052
        .byte   W03
        .byte                   BnM2 , v076
        .byte   W03
        .byte                   BnM2 , v032
        .byte   W03
        .byte           N04   , CnM2 , v127
        .byte           N05   , DnM2
        .byte           N01   , BnM2 , v072
        .byte   W03
        .byte                   BnM2
        .byte   W03
@ 050   ----------------------------------------
        .byte           N05   , CnM2 , v127
        .byte           N05   , DnM2
        .byte           N05   , CsM1 , v108
        .byte   W06
        .byte           N04   , DnM2 , v127
        .byte   W01
        .byte           N44   , An2
        .byte   W11
        .byte           N11   , FsM2
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
@ 051   ----------------------------------------
mus_pkmn_bw12_129_9_51:
        .byte           N01   , BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte   PEND
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_51
@ 053   ----------------------------------------
        .byte           N01   , BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W06
        .byte           N02   , FsM2 , v112
        .byte   W06
        .byte                   FsM2 , v088
        .byte   W06
        .byte                   FsM2 , v112
        .byte           N01   , BnM2 , v060
        .byte   W06
@ 054   ----------------------------------------
        .byte           N02   , FsM2 , v088
        .byte           N01   , BnM2 , v044
        .byte   W06
        .byte           N11   , DnM2 , v108
        .byte   W12
        .byte                   FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_51
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_51
@ 057   ----------------------------------------
        .byte           N01   , BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v088
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W18
        .byte           N11   , FsM2 , v127
        .byte           N01   , BnM2 , v060
        .byte   W06
@ 058   ----------------------------------------
        .byte                   BnM2 , v044
        .byte   W06
        .byte           N11   , DnM2 , v108
        .byte   W12
        .byte                   DnM2
        .byte           N11   , FsM2 , v127
        .byte   W18
        .byte           N05   , DnM2 , v108
        .byte   W06
        .byte           N11   , FsM2 , v088
        .byte   W06
        .byte                   DnM2 , v108
        .byte   W18
        .byte           N20
        .byte           N11   , FsM2 , v127
        .byte   W24
        .byte                   FsM2 , v088
        .byte   W06
@ 059   ----------------------------------------
        .byte   W18
        .byte                   DnM2 , v108
        .byte           N11   , FsM2 , v127
        .byte   W18
        .byte           N05   , DnM2 , v108
        .byte   W06
        .byte           N11   , FsM2 , v088
        .byte   W06
        .byte                   DnM2 , v108
        .byte   W18
        .byte                   DnM2
        .byte           N11   , FsM2 , v127
        .byte   W18
        .byte           N05   , DnM2 , v108
        .byte   W06
        .byte           N11   , FsM2 , v088
        .byte   W06
@ 060   ----------------------------------------
mus_pkmn_bw12_129_9_60:
        .byte   W18
        .byte           N11   , DnM2 , v108
        .byte           N11   , FsM2 , v127
        .byte   W18
        .byte           N05   , DnM2 , v108
        .byte   W06
        .byte           N11   , FsM2 , v088
        .byte   W06
        .byte                   DnM2 , v108
        .byte   W18
        .byte                   DnM2
        .byte           N11   , FsM2 , v127
        .byte   W24
        .byte                   FsM2 , v088
        .byte   W06
        .byte   PEND
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_60
@ 062   ----------------------------------------
        .byte   W06
        .byte           N07   , En2 , v112
        .byte   W12
        .byte           N11   , FsM2 , v127
        .byte           N16   , As2 , v096
        .byte   W24
        .byte           N11   , FsM2 , v088
        .byte   W24
        .byte                   FsM2 , v127
        .byte   W24
        .byte                   FsM2 , v088
        .byte   W06
@ 063   ----------------------------------------
        .byte   W18
        .byte                   FsM2 , v127
        .byte   W24
        .byte                   FsM2 , v088
        .byte   W24
        .byte                   FsM2 , v127
        .byte   W24
        .byte                   FsM2 , v088
        .byte   W06
@ 064   ----------------------------------------
        .byte   W06
        .byte           N32   , CnM2 , v127
        .byte           N32   , An2
        .byte   W24
        .byte           N04   , DnM2 , v088
        .byte   W06
        .byte                   DnM2
        .byte   W06
        .byte           N32   , CnM2 , v127
        .byte   W12
        .byte           N03   , DnM2 , v092
        .byte   W01
        .byte           N01   , En2 , v100
        .byte   W07
        .byte           N03   , DnM2 , v080
        .byte           N01   , En2 , v048
        .byte   W08
        .byte           N03   , DnM2 , v076
        .byte   W01
        .byte           N01   , En2 , v080
        .byte   W07
        .byte           N23   , CnM2 , v088
        .byte           N24   , En2 , v127
        .byte   W18
@ 065   ----------------------------------------
        .byte   W06
        .byte           N28   , CnM2
        .byte           N08   , En2
        .byte   W18
        .byte           N32   , As2
        .byte   W18
        .byte           N28   , CnM2
        .byte           N32   , An2
        .byte   W20
        .byte           N03   , DnM2 , v080
        .byte   W08
        .byte                   DnM2 , v076
        .byte   W06
        .byte           N19   , En2 , v127
        .byte   W02
        .byte           N23   , CnM2 , v088
        .byte           N03   , DnM2 , v092
        .byte   W08
        .byte                   DnM2 , v080
        .byte   W08
        .byte                   DnM2 , v076
        .byte   W02
@ 066   ----------------------------------------
        .byte   W04
        .byte           N36   , En2 , v127
        .byte   W02
        .byte           N04   , An2
        .byte   W12
        .byte           N01   , BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v044
        .byte   W12
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W06
        .byte           N11   , CsM1 , v127
        .byte   W12
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte           N11   , CsM1 , v127
        .byte   W18
        .byte           N01   , BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
@ 067   ----------------------------------------
mus_pkmn_bw12_129_9_67:
        .byte           N01   , BnM2 , v044
        .byte   W18
        .byte                   BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v044
        .byte   W12
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W06
        .byte           N13   , CsM1 , v127
        .byte   W12
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte           N13   , CsM1 , v127
        .byte   W18
        .byte           N01   , BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte   PEND
@ 068   ----------------------------------------
        .byte           N01   , BnM2 , v044
        .byte   W18
        .byte                   BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v044
        .byte   W12
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte   W06
        .byte           N11   , CsM1 , v127
        .byte   W12
        .byte           N01   , BnM2 , v060
        .byte   W06
        .byte                   BnM2 , v044
        .byte           N11   , CsM1 , v127
        .byte   W18
        .byte           N01   , BnM2 , v060
        .byte           N10   , CsM1 , v127
        .byte   W06
@ 069   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_67
@ 070   ----------------------------------------
        .byte           N01   , BnM2 , v044
        .byte   W06
        .byte           N24   , CnM2 , v127
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte           N10   , CsM1 , v127
        .byte   W18
        .byte                   CsM1
        .byte   W06
        .byte           N11   , GnM2 , v088
        .byte   W12
        .byte           N13   , CsM1 , v127
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte   W06
        .byte           N13   , CsM1 , v127
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte           N10   , CsM1 , v127
        .byte   W06
@ 071   ----------------------------------------
mus_pkmn_bw12_129_9_71:
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte           N10   , CsM1 , v127
        .byte   W18
        .byte                   CsM1
        .byte   W06
        .byte           N11   , GnM2 , v088
        .byte   W12
        .byte           N13   , CsM1 , v127
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte   W06
        .byte           N13   , CsM1 , v127
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte           N10   , CsM1 , v127
        .byte   W06
        .byte   PEND
@ 072   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_9_71
@ 073   ----------------------------------------
        .byte   W18
        .byte           N11   , GnM2 , v088
        .byte           N10   , CsM1 , v127
        .byte   W18
        .byte                   CsM1
        .byte   W06
        .byte           N11   , GnM2 , v088
        .byte   W12
        .byte           N13   , CsM1 , v127
        .byte   W12
        .byte           N11   , GnM2 , v088
        .byte   W06
        .byte           N13   , CsM1 , v127
        .byte   W18
        .byte           N06   , GnM2 , v088
        .byte           N06   , CsM1 , v127
        .byte   W06
@ 074   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_129_9_LOOP
        .byte   FINE

@***************** Track 10 (Midi-Chn.10) *****************@

mus_pkmn_bw12_129_10:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 60
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 85
        .byte   W18
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CsM2 , v088
        .byte   W24
        .byte                   CsM2 , v127
        .byte   W24
        .byte                   CsM2 , v080
        .byte   W06
@ 001   ----------------------------------------
        .byte   W18
        .byte                   CsM2 , v127
        .byte   W24
        .byte                   CsM2 , v072
        .byte   W12
        .byte           N04   , CsM2 , v127
        .byte   W06
        .byte                   CsM2 , v108
        .byte   W06
        .byte                   CsM2 , v127
        .byte   W06
        .byte                   CsM2 , v108
        .byte   W06
        .byte                   CsM2 , v124
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
@ 002   ----------------------------------------
        .byte                   CsM2 , v127
        .byte   W06
        .byte           N11
        .byte   W24
        .byte           N13   , CsM2 , v096
        .byte   W24
        .byte                   CsM2 , v127
        .byte   W24
        .byte           N11   , CsM2 , v088
        .byte   W18
@ 003   ----------------------------------------
mus_pkmn_bw12_129_10_3:
        .byte   W06
        .byte           N11   , CsM2 , v127
        .byte   W24
        .byte           N13   , CsM2 , v096
        .byte   W24
        .byte                   CsM2 , v127
        .byte   W24
        .byte           N11   , CsM2 , v088
        .byte   W18
        .byte   PEND
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_3
@ 005   ----------------------------------------
        .byte   W06
        .byte           N11   , CsM2 , v127
        .byte   W24
        .byte           N13   , CsM2 , v096
        .byte   W24
        .byte           N02   , CsM2 , v127
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
        .byte                   CsM2
        .byte   W06
@ 006   ----------------------------------------
        .byte                   CsM2
        .byte   W30
        .byte           N10   , CnM2 , v096
        .byte   W12
        .byte           N02
        .byte   W06
        .byte           N05
        .byte   W30
        .byte           N13
        .byte   W18
@ 007   ----------------------------------------
        .byte   W30
        .byte                   CnM2
        .byte   W48
        .byte           N11   , CnM2 , v088
        .byte   W18
@ 008   ----------------------------------------
        .byte   W30
        .byte           N10
        .byte   W12
        .byte           N02   , CnM2 , v096
        .byte   W06
        .byte           N05
        .byte   W30
        .byte           N11   , CnM2 , v088
        .byte   W18
@ 009   ----------------------------------------
        .byte   W30
        .byte                   CnM2
        .byte   W48
        .byte                   CnM2
        .byte   W18
@ 010   ----------------------------------------
mus_pkmn_bw12_129_10_LOOP:
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W24
        .byte                   CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W18
@ 011   ----------------------------------------
mus_pkmn_bw12_129_10_11:
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W24
        .byte                   CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W18
        .byte   PEND
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 013   ----------------------------------------
mus_pkmn_bw12_129_10_13:
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W54
        .byte           N04   , CnM2 , v127
        .byte   W12
        .byte   PEND
@ 014   ----------------------------------------
mus_pkmn_bw12_129_10_14:
        .byte           N04   , CnM2 , v116
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W24
        .byte                   CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W18
        .byte   PEND
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 017   ----------------------------------------
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W24
        .byte           N01   , CnM2 , v127
        .byte   W06
        .byte           N05
        .byte   W18
        .byte           N01
        .byte   W06
        .byte           N05
        .byte   W12
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_13
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_14
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 026   ----------------------------------------
mus_pkmn_bw12_129_10_26:
        .byte   W06
        .byte           N04   , CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W06
        .byte   PEND
@ 027   ----------------------------------------
mus_pkmn_bw12_129_10_27:
        .byte           N04   , CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W06
        .byte                   CnM2 , v127
        .byte   W06
        .byte                   CnM2 , v088
        .byte   W60
        .byte   PEND
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_26
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_27
@ 030   ----------------------------------------
mus_pkmn_bw12_129_10_30:
        .byte   W30
        .byte           N11   , CnM2 , v088
        .byte   W24
        .byte                   CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W18
        .byte   PEND
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 033   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_13
@ 034   ----------------------------------------
        .byte           N04   , CnM2 , v116
        .byte   W06
        .byte           N19   , CnM2 , v127
        .byte   W90
@ 035   ----------------------------------------
        .byte   W92
        .byte   W02
        .byte           N05
        .byte   W02
@ 036   ----------------------------------------
        .byte   W96
@ 037   ----------------------------------------
        .byte   W96
@ 038   ----------------------------------------
        .byte   W06
        .byte           N10   , CnM2 , v124
        .byte   W24
        .byte           N11   , CnM2 , v088
        .byte   W24
        .byte                   CnM2 , v127
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W18
@ 039   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 040   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 041   ----------------------------------------
        .byte   W18
        .byte           N11   , CnM2 , v088
        .byte   W36
        .byte                   CnM2 , v127
        .byte   W24
        .byte           N10
        .byte   W18
@ 042   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 043   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 044   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 045   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_13
@ 046   ----------------------------------------
        .byte           N04   , CnM2 , v116
        .byte   W06
        .byte           N11   , CnM2 , v127
        .byte   W18
        .byte                   CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W54
@ 047   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte   W18
        .byte                   CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W54
@ 048   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte   W18
        .byte                   CnM2 , v088
        .byte   W18
        .byte                   CnM2 , v127
        .byte   W12
        .byte                   CnM2
        .byte   W24
        .byte                   CnM2
        .byte   W18
@ 049   ----------------------------------------
        .byte   W06
        .byte                   CnM2
        .byte   W24
        .byte                   CnM2 , v088
        .byte   W24
        .byte           N10   , CnM2 , v127
        .byte   W18
        .byte                   CnM2
        .byte   W24
@ 050   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 051   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 052   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 053   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 054   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 055   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 056   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 057   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 058   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 059   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 060   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 061   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 062   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 063   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 064   ----------------------------------------
        .byte   W18
        .byte           N11   , CnM2 , v127
        .byte   W60
        .byte           N22   , CnM2 , v088
        .byte   W18
@ 065   ----------------------------------------
        .byte   W24
        .byte           N24   , CnM2 , v127
        .byte   W54
        .byte           N23   , CnM2 , v088
        .byte   W18
@ 066   ----------------------------------------
mus_pkmn_bw12_129_10_66:
        .byte   W06
        .byte           N14   , CnM2 , v127
        .byte   W18
        .byte                   CnM2
        .byte   W18
        .byte           N09
        .byte   W30
        .byte           N04
        .byte   W18
        .byte                   CnM2
        .byte   W06
        .byte   PEND
@ 067   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_66
@ 068   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_66
@ 069   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_66
@ 070   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_30
@ 071   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 072   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 073   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_10_11
@ 074   ----------------------------------------
        .byte   GOTO
         .word  mus_pkmn_bw12_129_10_LOOP
        .byte   FINE

@***************** Track 11 (Midi-Chn.11) *****************@

mus_pkmn_bw12_129_11:
        .byte   KEYSH , mus_pkmn_bw12_129_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 61
        .byte           LFOS  , 44
        .byte           BENDR , 12
        .byte           VOL   , 35
        .byte           PAN   , c_v+52
        .byte   W18
        .byte           N44   , Cn5 , v100
        .byte   W48
        .byte                   Fs4 , v092
        .byte   W30
@ 001   ----------------------------------------
        .byte   W18
        .byte                   Cn4 , v100
        .byte   W48
        .byte           N36   , Fs3 , v104
        .byte   W30
@ 002   ----------------------------------------
        .byte   W01
        .byte           VOICE , 126
        .byte   W05
        .byte           PAN   , c_v+22
        .byte   W04
        .byte           VOL   , 57
        .byte   W02
        .byte           N01   , Cn2 , v088
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Cn2 , v120
        .byte   W12
        .byte                   Ds2 , v127
        .byte   W12
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte           N02   , Cn2 , v127
        .byte   W12
        .byte           N10   , Fn2 , v120
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
@ 003   ----------------------------------------
        .byte           N02
        .byte   W12
        .byte           N10   , Fs2 , v120
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte           N02
        .byte   W12
        .byte           N10   , Fn2 , v108
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte           N10   , Ds2 , v120
        .byte   W11
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W07
@ 004   ----------------------------------------
        .byte           N10   , Dn2
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte           N08   , Cn2 , v120
        .byte   W12
        .byte           N10   , Ds2 , v127
        .byte   W12
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
        .byte           N02
        .byte   W12
        .byte           N10   , Fn2 , v120
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2 , v088
        .byte   W06
@ 005   ----------------------------------------
        .byte           N02
        .byte   W12
        .byte           N10   , Fs2 , v127
        .byte   W12
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N05
        .byte   W12
        .byte           N10   , Fn2
        .byte   W12
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Ds2
        .byte   W11
        .byte           N01   , Cn2
        .byte   W06
        .byte                   Cn2
        .byte   W07
@ 006   ----------------------------------------
        .byte           N10   , As1
        .byte   W12
        .byte           PAN   , c_v+17
        .byte   W06
        .byte           N10   , Cn4 , v124
        .byte   W78
@ 007   ----------------------------------------
        .byte   W14
        .byte           VOICE , 61
        .byte   W04
        .byte           N10
        .byte   W48
        .byte           N42   , Cs4
        .byte   W30
@ 008   ----------------------------------------
        .byte   W18
        .byte           N10   , Cn4
        .byte   W78
@ 009   ----------------------------------------
        .byte   W66
        .byte           N44   , Fs4 , v127
        .byte   W30
@ 010   ----------------------------------------
mus_pkmn_bw12_129_11_LOOP:
        .byte   W10
        .byte           VOL   , 39
        .byte   W03
        .byte           VOICE , 126
        .byte   W02
        .byte           PAN   , c_v-21
        .byte   W03
        .byte           N68   , Cn3 , v127
        .byte   W68
        .byte   W03
        .byte           N22   , Gn3 , v116
        .byte   W07
@ 011   ----------------------------------------
mus_pkmn_bw12_129_11_11:
        .byte   W17
        .byte           N32   , Ds3 , v127
        .byte   W36
        .byte                   Gs3
        .byte   W36
        .byte           N23   , Gn3
        .byte   W07
        .byte   PEND
@ 012   ----------------------------------------
        .byte   W17
        .byte           N04   , Ds3
        .byte   W18
        .byte                   Dn3
        .byte   W06
        .byte           N68   , Cn3
        .byte   W54
        .byte   W01
@ 013   ----------------------------------------
        .byte   W17
        .byte           N01   , Cn2 , v124
        .byte   W05
        .byte                   Cn2
        .byte   W07
        .byte           N10   , As2 , v127
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2 , v124
        .byte   W12
        .byte           N11   , Cn2 , v127
        .byte   W12
        .byte           N04   , As1
        .byte   W06
        .byte           N10   , Cn2
        .byte   W12
        .byte           N04   , As1
        .byte   W01
@ 014   ----------------------------------------
        .byte   W05
        .byte           N02   , Cn2
        .byte   W06
        .byte                   As1
        .byte   W06
        .byte           N68   , Cn2
        .byte           N68   , Cn3
        .byte   W72
        .byte           N23   , Gn3
        .byte   W07
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_11_11
@ 016   ----------------------------------------
        .byte   W17
        .byte           N05   , Ds3 , v120
        .byte   W18
        .byte                   Dn3
        .byte   W06
        .byte           N64   , Cn3
        .byte   W54
        .byte   W01
@ 017   ----------------------------------------
        .byte   W17
        .byte           N05   , Cn2 , v127
        .byte   W12
        .byte           N10   , As2 , v124
        .byte   W12
        .byte                   Fs2
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Ds2 , v124
        .byte   W12
        .byte           N01   , Cn2 , v127
        .byte   W06
        .byte                   Cn2
        .byte   W01
@ 018   ----------------------------------------
        .byte   W05
        .byte           N11   , Gs2 , v088
        .byte   W12
        .byte           N68   , Dn3 , v108
        .byte   W72
        .byte           N22   , An3 , v096
        .byte   W07
@ 019   ----------------------------------------
        .byte   W17
        .byte           N32   , Fn3 , v108
        .byte   W36
        .byte                   As3 , v104
        .byte   W36
        .byte           N22   , An3 , v096
        .byte   W07
@ 020   ----------------------------------------
        .byte   W17
        .byte           N06   , Fn3 , v108
        .byte   W18
        .byte           N04   , Gn3
        .byte   W06
        .byte           N68   , An3
        .byte   W54
        .byte   W01
@ 021   ----------------------------------------
        .byte   W17
        .byte           N01   , Dn2 , v088
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte           N10   , Cn3 , v124
        .byte   W12
        .byte                   Gs2
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte           N01   , Dn2 , v127
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N10   , Dn2
        .byte   W12
        .byte           N03   , Cn2
        .byte   W01
@ 022   ----------------------------------------
        .byte   W05
        .byte                   Dn2
        .byte   W06
        .byte                   Cn2
        .byte   W06
        .byte           N06   , En3 , v108
        .byte   W24
        .byte                   En3 , v084
        .byte   W24
        .byte                   En3 , v096
        .byte   W16
        .byte                   En3 , v084
        .byte   W15
@ 023   ----------------------------------------
        .byte   W01
        .byte                   En3 , v092
        .byte   W16
        .byte                   En3 , v100
        .byte   W16
        .byte                   Gn3 , v084
        .byte   W16
        .byte                   Gn3 , v076
        .byte   W16
        .byte                   Fn3 , v096
        .byte   W16
        .byte                   Dn3 , v084
        .byte   W15
@ 024   ----------------------------------------
        .byte   W01
        .byte                   Fn3
        .byte   W16
        .byte                   En3 , v108
        .byte   W24
        .byte                   En3 , v084
        .byte   W24
        .byte                   En3 , v096
        .byte   W16
        .byte                   En3 , v084
        .byte   W15
@ 025   ----------------------------------------
        .byte   W01
        .byte                   En3
        .byte   W16
        .byte                   En3 , v104
        .byte   W16
        .byte                   Gn3 , v112
        .byte   W16
        .byte                   Gn3
        .byte   W16
        .byte                   Fn3 , v096
        .byte   W16
        .byte                   Fn3 , v116
        .byte           N06   , As3
        .byte   W15
@ 026   ----------------------------------------
        .byte   W01
        .byte                   An3
        .byte   W11
        .byte           VOL   , 70
        .byte   W01
        .byte           PAN   , c_v+22
        .byte   W05
        .byte           N28   , Gn2 , v088
        .byte   W32
        .byte                   As2 , v080
        .byte   W32
        .byte                   An2 , v088
        .byte   W14
@ 027   ----------------------------------------
        .byte   W18
        .byte                   Gn2 , v080
        .byte   W32
        .byte                   En2 , v072
        .byte   W32
        .byte                   Fn2 , v080
        .byte   W14
@ 028   ----------------------------------------
        .byte   W18
        .byte                   En2 , v088
        .byte   W32
        .byte                   As2 , v080
        .byte   W32
        .byte                   An2 , v088
        .byte   W14
@ 029   ----------------------------------------
        .byte   W18
        .byte                   Gn2 , v092
        .byte   W32
        .byte                   Fn2
        .byte           N28   , Fn3 , v084
        .byte   W32
        .byte                   Cs3 , v092
        .byte   W14
@ 030   ----------------------------------------
        .byte   W18
        .byte           TIE   , Dn3 , v096
        .byte   W78
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte           EOT
        .byte   W02
        .byte           N03   , Dn3 , v076
        .byte   W08
        .byte                   Dn3 , v080
        .byte   W84
        .byte   W02
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W12
        .byte           VOICE , 61
        .byte   W01
        .byte           PAN   , c_v+60
        .byte   W03
        .byte           VOL   , 25
        .byte   W03
        .byte           N66   , Dn4 , v088
        .byte   W68
        .byte   W02
        .byte           N22   , An4
        .byte   W07
@ 035   ----------------------------------------
        .byte   W17
        .byte           N36   , Fn4
        .byte   W40
        .byte           N30   , As4
        .byte   W32
        .byte           N22   , An4 , v076
        .byte   W07
@ 036   ----------------------------------------
        .byte   W17
        .byte           N06   , Fn4 , v088
        .byte   W16
        .byte                   En4 , v076
        .byte   W08
        .byte           N68   , Dn4 , v088
        .byte   W54
        .byte   W01
@ 037   ----------------------------------------
        .byte   W88
        .byte   W01
        .byte           N20   , An4 , v056
        .byte   W07
@ 038   ----------------------------------------
        .byte   W17
        .byte           N16   , An4 , v104
        .byte   W18
        .byte           N05   , Cn4
        .byte   W06
        .byte           N44   , Dn4
        .byte   W48
        .byte           N22   , An4 , v080
        .byte   W07
@ 039   ----------------------------------------
        .byte   W17
        .byte           N36   , Fn4 , v100
        .byte   W40
        .byte           N30   , As4 , v092
        .byte   W32
        .byte           N22   , An4 , v100
        .byte   W07
@ 040   ----------------------------------------
        .byte   W17
        .byte           N06   , Fn4 , v112
        .byte   W16
        .byte                   En4 , v096
        .byte   W08
        .byte           N68   , Dn4 , v104
        .byte   W54
        .byte   W01
@ 041   ----------------------------------------
        .byte   W16
        .byte           VOICE , 126
        .byte           PAN   , c_v+27
        .byte           VOL   , 49
        .byte   W02
        .byte           N04   , Dn2 , v127
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Fn2
        .byte   W12
        .byte           N04   , Dn2
        .byte   W12
        .byte           N10
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte           N04   , Dn2
        .byte   W06
@ 042   ----------------------------------------
        .byte   W06
        .byte           N08   , An2
        .byte   W10
        .byte           VOICE , 61
        .byte           PAN   , c_v+62
        .byte           VOL   , 29
        .byte   W01
        .byte           N68   , En4 , v100
        .byte   W72
        .byte           N22   , Bn4 , v088
        .byte   W07
@ 043   ----------------------------------------
        .byte   W17
        .byte           N32   , An4 , v108
        .byte   W32
        .byte   W03
        .byte           N36   , Cn5 , v100
        .byte   W36
        .byte   W01
        .byte           N22   , Bn4 , v108
        .byte   W07
@ 044   ----------------------------------------
        .byte   W17
        .byte           N11   , Gn4 , v100
        .byte   W18
        .byte           N04   , An4
        .byte   W06
        .byte           N64   , Bn4
        .byte   W54
        .byte   W01
@ 045   ----------------------------------------
        .byte   W15
        .byte           VOL   , 37
        .byte           PAN   , c_v+22
        .byte   W03
        .byte           N01   , En2 , v120
        .byte   W06
        .byte                   En2 , v088
        .byte   W06
        .byte           N10   , Dn3 , v124
        .byte   W12
        .byte                   As2
        .byte   W12
        .byte                   Gn2
        .byte   W12
        .byte           N01   , En2 , v127
        .byte   W06
        .byte                   En2
        .byte   W06
        .byte                   Dn2
        .byte   W06
        .byte           N10   , En2
        .byte   W12
@ 046   ----------------------------------------
        .byte           N03   , Dn2
        .byte   W06
        .byte                   En2
        .byte   W06
        .byte                   Dn2
        .byte   W04
        .byte           PAN   , c_v-64
        .byte   W02
        .byte           N17   , An3 , v112
        .byte   W18
        .byte                   As3 , v088
        .byte   W18
        .byte           N11   , An3
        .byte   W12
        .byte           N17   , Cn4 , v100
        .byte   W18
        .byte                   As3 , v088
        .byte   W12
@ 047   ----------------------------------------
        .byte   W06
        .byte           N11   , Gn3
        .byte   W12
        .byte           N17   , An3 , v112
        .byte   W18
        .byte                   As3 , v088
        .byte   W18
        .byte           N11   , Cn4
        .byte   W12
        .byte           N17   , As3 , v100
        .byte   W18
        .byte                   Cn4 , v088
        .byte   W12
@ 048   ----------------------------------------
        .byte   W06
        .byte           N11   , Ds4
        .byte   W12
        .byte           N17   , Dn4 , v112
        .byte   W18
        .byte                   Ds4 , v088
        .byte   W18
        .byte           N11   , Dn4
        .byte   W12
        .byte           N17   , Fn4 , v116
        .byte   W18
        .byte                   Ds4 , v088
        .byte   W12
@ 049   ----------------------------------------
        .byte   W06
        .byte           N11   , Cn4
        .byte   W12
        .byte           N17   , Dn4 , v108
        .byte   W18
        .byte                   Ds4 , v088
        .byte   W18
        .byte           N11   , Fn4
        .byte   W12
        .byte                   Ds4 , v112
        .byte   W12
        .byte           N02   , Cn4
        .byte   W06
        .byte           N11   , Fn4 , v088
        .byte   W12
@ 050   ----------------------------------------
        .byte   W06
        .byte           N08   , Gs4 , v127
        .byte   W10
        .byte           VOICE , 11
        .byte   W02
        .byte           PAN   , c_v+60
        .byte           N92   , Gn3 , v096
        .byte   W78
@ 051   ----------------------------------------
        .byte   W18
        .byte           N80   , Gs3
        .byte   W78
@ 052   ----------------------------------------
        .byte   W06
        .byte           N03   , As3 , v104
        .byte   W06
        .byte                   Gs3 , v092
        .byte   W06
        .byte           N92   , Gn3 , v096
        .byte   W78
@ 053   ----------------------------------------
        .byte   W18
        .byte           N04   , Cn3 , v104
        .byte   W06
        .byte                   As2
        .byte   W06
        .byte           N32   , Cn3
        .byte   W66
@ 054   ----------------------------------------
        .byte   W18
        .byte           N92   , Gn3 , v096
        .byte   W78
@ 055   ----------------------------------------
        .byte   W18
        .byte           N44   , Gs3
        .byte   W48
        .byte           N01   , Gn3
        .byte   W01
        .byte           N30   , Gs3
        .byte   W28
        .byte   W01
@ 056   ----------------------------------------
        .byte   W06
        .byte           N04   , As3 , v104
        .byte   W06
        .byte           N03   , Gs3
        .byte   W06
        .byte           N68   , Gn3 , v096
        .byte   W78
@ 057   ----------------------------------------
        .byte   W18
        .byte           N84   , Cn4 , v088
        .byte   W78
@ 058   ----------------------------------------
        .byte   W12
        .byte           N04   , Ds4 , v112
        .byte   W06
        .byte           TIE   , Cs4 , v096
        .byte   W78
@ 059   ----------------------------------------
        .byte   W96
@ 060   ----------------------------------------
        .byte   W96
@ 061   ----------------------------------------
        .byte   W16
        .byte           EOT
        .byte   W02
        .byte           N80   , As3 , v084
        .byte   W78
@ 062   ----------------------------------------
        .byte   W06
        .byte           VOICE , 126
        .byte   W01
        .byte           PAN   , c_v+31
        .byte           VOL   , 61
        .byte   W05
        .byte           N10   , As2 , v116
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N05   , Cn2
        .byte   W06
        .byte                   Cs2
        .byte   W06
        .byte           N10   , As1
        .byte   W12
        .byte           N03   , Cn2 , v112
        .byte   W08
        .byte                   Cs2 , v120
        .byte   W08
        .byte                   As1 , v124
        .byte   W08
        .byte           N23   , Cn2 , v116
        .byte   W12
@ 063   ----------------------------------------
        .byte   W12
        .byte           N14   , Gn2
        .byte   W18
        .byte                   Ds2
        .byte   W18
        .byte           N11   , Gn2
        .byte   W12
        .byte           N03   , Cn2 , v112
        .byte   W08
        .byte                   Cs2 , v120
        .byte   W08
        .byte                   As1 , v124
        .byte   W08
        .byte           N19   , Cs2 , v116
        .byte   W12
@ 064   ----------------------------------------
        .byte   W07
        .byte           PAN   , c_v-36
        .byte           VOL   , 43
        .byte   W02
        .byte           VOICE , 100
        .byte   W01
        .byte           N08   , Gn2 , v108
        .byte   W12
        .byte                   Cn3
        .byte   W12
        .byte           N04   , Cn2
        .byte   W06
        .byte                   Cn3
        .byte   W06
        .byte           N10   , Gn1
        .byte   W12
        .byte           N03   , Cn3 , v124
        .byte   W08
        .byte                   Cn3 , v108
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N22   , Cn2 , v108
        .byte   W14
@ 065   ----------------------------------------
        .byte   W10
        .byte           N13
        .byte   W18
        .byte           N14   , Gn1
        .byte   W18
        .byte           N10   , Gn2
        .byte   W20
        .byte           N03   , Cn3
        .byte   W08
        .byte                   Cn3 , v104
        .byte   W08
        .byte           N18   , Cn2 , v108
        .byte   W14
@ 066   ----------------------------------------
        .byte   W09
        .byte           VOICE , 11
        .byte   W01
        .byte           PAN   , c_v-64
        .byte   W05
        .byte           N07   , Ds4 , v088
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07   , Cs3 , v100
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   As3 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , Cn4
        .byte   W08
        .byte                   Cs4 , v080
        .byte   W08
        .byte                   Cn4 , v100
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07   , As3
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   Cs3 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , As2
        .byte   W01
@ 067   ----------------------------------------
mus_pkmn_bw12_129_11_67:
        .byte   W07
        .byte           N07   , Fs2 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07   , Cs3
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   As3 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , Cn4
        .byte   W08
        .byte                   Cs4 , v080
        .byte   W08
        .byte                   Cn4 , v100
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07   , As3
        .byte   W08
        .byte                   Fs3 , v080
        .byte   W08
        .byte                   Cs3 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , As2
        .byte   W01
        .byte   PEND
@ 068   ----------------------------------------
        .byte   PATT
         .word  mus_pkmn_bw12_129_11_67
@ 069   ----------------------------------------
        .byte   W07
        .byte           N07   , Fs2 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07
        .byte   W08
        .byte                   Cs3 , v080
        .byte   W08
        .byte                   Fn3 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , Gs3
        .byte   W08
        .byte                   As3 , v080
        .byte   W08
        .byte                   Gs3 , v100
        .byte   W08
        .byte           PAN   , c_v+46
        .byte           N07   , Fn3
        .byte   W08
        .byte                   Cs3 , v080
        .byte   W08
        .byte                   As2 , v100
        .byte   W08
        .byte           PAN   , c_v-56
        .byte           N07   , Fn2
        .byte   W01
@ 070   ----------------------------------------
        .byte   W07
        .byte                   Cs2 , v080
        .byte   W08
        .byte                   Fn2 , v100
        .byte   W32
        .byte           VOICE , 61
        .byte   W02
        .byte           VOL   , 46
        .byte   W06
        .byte           PAN   , c_v+25
        .byte   W11
        .byte           N15   , Cn3 , v127
        .byte           N15   , Cn4
        .byte   W24
        .byte   W01
        .byte           PAN   , c_v+51
        .byte   W05
@ 071   ----------------------------------------
        .byte   W18
        .byte           N15   , Gn2
        .byte           N15   , Gn3
        .byte   W24
        .byte   W01
        .byte           PAN   , c_v-43
        .byte   W23
        .byte           N15   , Cn2
        .byte           N15   , Cn3
        .byte   W24
        .byte   W01
        .byte           PAN   , c_v+43
        .byte   W05
@ 072   ----------------------------------------
        .byte   W18
        .byte           N15   , Gn3
        .byte   W48
        .byte                   Cn3
        .byte           N15   , Cn4
        .byte   W30
@ 073   ----------------------------------------
        .byte   W80
        .byte   W03
        .byte           VOICE , 126
        .byte   W01
        .byte           PAN   , c_v-21
        .byte           VOL   , 39
        .byte   W12
@ 074   ----------------------------------------
        .byte           VOICE , 61
        .byte           VOL   , 57
        .byte           PAN   , c_v+17
        .byte   GOTO
         .word  mus_pkmn_bw12_129_11_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_pkmn_bw12_129:
        .byte   12                      @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_pkmn_bw12_129_pri   @ Priority
        .byte   mus_pkmn_bw12_129_rev   @ Reverb

        .word   mus_pkmn_bw12_129_grp  

        .word   mus_pkmn_bw12_129_0
        .word   mus_pkmn_bw12_129_1
        .word   mus_pkmn_bw12_129_2
        .word   mus_pkmn_bw12_129_3
        .word   mus_pkmn_bw12_129_4
        .word   mus_pkmn_bw12_129_5
        .word   mus_pkmn_bw12_129_6
        .word   mus_pkmn_bw12_129_7
        .word   mus_pkmn_bw12_129_8
        .word   mus_pkmn_bw12_129_9
        .word   mus_pkmn_bw12_129_10
        .word   mus_pkmn_bw12_129_11

        .end
