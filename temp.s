	.include "MPlayDef.s"

	.equ	temp_grp, voicegroup_dummy
	.equ	temp_pri, 0
	.equ	temp_rev, 0
	.equ	temp_mvl, 127
	.equ	temp_key, 0
	.equ	temp_tbs, 1
	.equ	temp_exg, 0
	.equ	temp_cmp, 1

	.section .rodata
	.global	temp
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

temp_1:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte	TEMPO , 120*temp_tbs/2
	.byte		VOICE , 39
	.byte		VOL   , 120*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte		N06   , Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		        Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		N12   , Gn0 , v040
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		        Gn0 , v068
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		N12   
	.byte	W12
@ 002   ----------------------------------------
	.byte		N06   , Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		        Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		N12   , Gn0 , v040
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		        Gn0 , v068
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		N12   
	.byte	W12
@ 003   ----------------------------------------
	.byte		N06   , Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		        Gn0 , v127
	.byte	W06
	.byte		        Gn0 , v032
	.byte	W06
	.byte		N12   , Gn0 , v040
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		        Gn0 , v068
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gn0 , v036
	.byte	W12
	.byte		N12   
	.byte	W12
@ 004   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 005   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 006   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 007   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 008   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 009   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 010   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 011   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 012   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 013   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 014   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 015   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 016   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 017   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 018   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 019   ----------------------------------------
	.byte		        Cn1 , v127
	.byte	W12
	.byte		        Cn1 , v032
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v072
	.byte	W12
	.byte		        Cn1 , v028
	.byte	W12
	.byte		        Cn1 , v052
	.byte	W12
	.byte		        Cn1 , v024
	.byte	W12
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

temp_2:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 40
	.byte		VOL   , 115*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte		TIE   , Gn0 , v127
	.byte	W30
	.byte	W12
	.byte	W06
	.byte	W12
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
@ 002   ----------------------------------------
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
@ 003   ----------------------------------------
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W36
	.byte		EOT   
@ 004   ----------------------------------------
	.byte		N12   , Cn1 
	.byte	W12
	.byte		        Cn1 , v084
	.byte	W12
	.byte		        Cn1 , v068
	.byte	W12
	.byte		        Cn1 , v056
	.byte	W12
	.byte		TIE   , Cn1 , v127
	.byte	W48
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W88
	.byte		EOT   
	.byte	W08
@ 008   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		        Cn1 , v084
	.byte	W12
	.byte		        Cn1 , v068
	.byte	W12
	.byte		        Cn1 , v056
	.byte	W12
	.byte		TIE   , Cn1 , v127
	.byte	W48
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W88
	.byte		EOT   
	.byte	W08
@ 012   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		        Cn1 , v084
	.byte	W12
	.byte		        Cn1 , v068
	.byte	W12
	.byte		        Cn1 , v056
	.byte	W12
	.byte		TIE   , Cn1 , v127
	.byte	W48
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W88
	.byte		EOT   
	.byte	W08
@ 016   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		        Cn1 , v084
	.byte	W12
	.byte		        Cn1 , v068
	.byte	W12
	.byte		        Cn1 , v056
	.byte	W12
	.byte		TIE   , Cn1 , v127
	.byte	W48
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W88
	.byte		EOT   
	.byte	W08
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

temp_3:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 85*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte		N96   , Gn2 , v127
	.byte		N96   , Bn2 
	.byte		TIE   , Gn3 
	.byte	W01
	.byte	W30
	.byte	W14
	.byte	W10
	.byte	W15
	.byte	W08
	.byte	W06
	.byte	W06
	.byte	W04
	.byte	W02
@ 002   ----------------------------------------
	.byte		N96   , Gs2 
	.byte		N96   , Cn3 
	.byte	W04
	.byte	W09
	.byte	W05
	.byte	W04
	.byte	W03
	.byte	W05
	.byte	W04
	.byte	W08
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W04
	.byte	W06
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W06
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
@ 003   ----------------------------------------
	.byte		        An2 
	.byte		N96   , Cs3 
	.byte	W04
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W05
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W05
	.byte		EOT   , Gn3 
@ 004   ----------------------------------------
temp_3_004:
	.byte		TIE   , Cn6 , v112
	.byte	W04
	.byte	W17
	.byte	W07
	.byte	W05
	.byte	W04
	.byte	W05
	.byte	W03
	.byte	W06
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	PEND
@ 005   ----------------------------------------
temp_3_005:
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W68
	.byte	PEND
@ 006   ----------------------------------------
temp_3_006:
	.byte	W40
	.byte	W02
	.byte	W01
	.byte	W21
	.byte	W09
	.byte	W06
	.byte	W06
	.byte	W05
	.byte	W04
	.byte	W02
	.byte	PEND
@ 007   ----------------------------------------
temp_3_007:
	.byte	W06
	.byte	W03
	.byte	W04
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W05
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W05
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	PEND
@ 008   ----------------------------------------
temp_3_008:
	.byte	W15
	.byte	W07
	.byte	W06
	.byte	W05
	.byte	W07
	.byte	W05
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W05
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	PEND
@ 009   ----------------------------------------
temp_3_009:
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W64
	.byte	W01
	.byte	PEND
@ 010   ----------------------------------------
temp_3_010:
	.byte	W80
	.byte	W01
	.byte	W01
	.byte	W14
	.byte	PEND
@ 011   ----------------------------------------
temp_3_011:
	.byte	W07
	.byte	W05
	.byte	W07
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W05
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W05
	.byte	PEND
	.byte		EOT   , Cn6 
@ 012   ----------------------------------------
	.byte	PATT
	 .word	temp_3_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	temp_3_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	temp_3_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	temp_3_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	temp_3_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	temp_3_009
@ 018   ----------------------------------------
	.byte	PATT
	 .word	temp_3_010
@ 019   ----------------------------------------
	.byte	PATT
	 .word	temp_3_011
	.byte		EOT   , Cn6 
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

temp_4:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 14
	.byte		VOL   , 100*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W48
	.byte		N12   , Cn4 , v127
	.byte	W12
	.byte	W36
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

temp_5:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 52
	.byte		VOL   , 80*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W40
	.byte		VOL   , 54*temp_mvl/mxv
	.byte	W02
	.byte		        55*temp_mvl/mxv
	.byte	W01
	.byte		        56*temp_mvl/mxv
	.byte	W02
	.byte		        57*temp_mvl/mxv
	.byte		N48   , Gn3 , v127
	.byte	W01
	.byte		VOL   , 58*temp_mvl/mxv
	.byte	W02
	.byte		        59*temp_mvl/mxv
	.byte	W01
	.byte		        60*temp_mvl/mxv
	.byte	W02
	.byte		        61*temp_mvl/mxv
	.byte	W01
	.byte		        62*temp_mvl/mxv
	.byte	W02
	.byte		        63*temp_mvl/mxv
	.byte	W01
	.byte		        64*temp_mvl/mxv
	.byte	W02
	.byte		        66*temp_mvl/mxv
	.byte	W01
	.byte		        67*temp_mvl/mxv
	.byte	W02
	.byte		        68*temp_mvl/mxv
	.byte	W01
	.byte		        69*temp_mvl/mxv
	.byte	W02
	.byte		        70*temp_mvl/mxv
	.byte	W01
	.byte		        71*temp_mvl/mxv
	.byte	W02
	.byte		        72*temp_mvl/mxv
	.byte	W01
	.byte		        73*temp_mvl/mxv
	.byte	W02
	.byte		        75*temp_mvl/mxv
	.byte	W01
	.byte		        76*temp_mvl/mxv
	.byte	W02
	.byte		        77*temp_mvl/mxv
	.byte	W01
	.byte		        78*temp_mvl/mxv
	.byte	W02
	.byte		        79*temp_mvl/mxv
	.byte	W01
	.byte		        80*temp_mvl/mxv
	.byte	W02
	.byte		        81*temp_mvl/mxv
	.byte	W01
	.byte		        82*temp_mvl/mxv
	.byte	W02
	.byte		        84*temp_mvl/mxv
	.byte	W03
	.byte		        85*temp_mvl/mxv
	.byte	W01
	.byte		        87*temp_mvl/mxv
	.byte	W02
	.byte		        88*temp_mvl/mxv
	.byte	W01
	.byte		        89*temp_mvl/mxv
	.byte	W02
	.byte		        90*temp_mvl/mxv
	.byte	W01
	.byte		        91*temp_mvl/mxv
	.byte	W02
	.byte		        92*temp_mvl/mxv
	.byte		N48   , Ds3 
	.byte	W01
	.byte		VOL   , 93*temp_mvl/mxv
	.byte	W02
@ 005   ----------------------------------------
temp_5_005:
	.byte		VOL   , 94*temp_mvl/mxv
	.byte	W01
	.byte		        96*temp_mvl/mxv
	.byte	W02
	.byte		        97*temp_mvl/mxv
	.byte	W01
	.byte		        98*temp_mvl/mxv
	.byte	W02
	.byte		        99*temp_mvl/mxv
	.byte	W01
	.byte		        100*temp_mvl/mxv
	.byte	W02
	.byte		        101*temp_mvl/mxv
	.byte	W01
	.byte		        102*temp_mvl/mxv
	.byte	W02
	.byte		        103*temp_mvl/mxv
	.byte	W01
	.byte		        105*temp_mvl/mxv
	.byte	W03
	.byte		        106*temp_mvl/mxv
	.byte	W02
	.byte		        108*temp_mvl/mxv
	.byte	W01
	.byte		        109*temp_mvl/mxv
	.byte	W02
	.byte		        110*temp_mvl/mxv
	.byte	W01
	.byte		        111*temp_mvl/mxv
	.byte	W02
	.byte		        112*temp_mvl/mxv
	.byte	W01
	.byte		        113*temp_mvl/mxv
	.byte	W02
	.byte		        114*temp_mvl/mxv
	.byte	W01
	.byte		        115*temp_mvl/mxv
	.byte	W02
	.byte		        117*temp_mvl/mxv
	.byte	W01
	.byte		        118*temp_mvl/mxv
	.byte	W02
	.byte		        119*temp_mvl/mxv
	.byte	W01
	.byte		        120*temp_mvl/mxv
	.byte	W02
	.byte		        121*temp_mvl/mxv
	.byte	W01
	.byte		        122*temp_mvl/mxv
	.byte	W02
	.byte		        123*temp_mvl/mxv
	.byte	W01
	.byte		        124*temp_mvl/mxv
	.byte	W02
	.byte		        126*temp_mvl/mxv
	.byte	W01
	.byte		        127*temp_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte		TIE   , Bn3 , v127
	.byte	W24
	.byte	W01
	.byte		VOL   , 124*temp_mvl/mxv
	.byte	W02
	.byte		        127*temp_mvl/mxv
	.byte	W01
	.byte		        126*temp_mvl/mxv
	.byte	W03
	.byte		        125*temp_mvl/mxv
	.byte	W03
	.byte		        124*temp_mvl/mxv
	.byte	W03
	.byte		        123*temp_mvl/mxv
	.byte	W03
	.byte		        122*temp_mvl/mxv
	.byte	W02
	.byte		        121*temp_mvl/mxv
	.byte	W03
	.byte		        120*temp_mvl/mxv
	.byte	W03
	.byte		        119*temp_mvl/mxv
	.byte	W03
@ 006   ----------------------------------------
temp_5_006:
	.byte	W01
	.byte		VOL   , 118*temp_mvl/mxv
	.byte	W02
	.byte		        117*temp_mvl/mxv
	.byte	W03
	.byte		        116*temp_mvl/mxv
	.byte	W03
	.byte		        115*temp_mvl/mxv
	.byte	W03
	.byte		        114*temp_mvl/mxv
	.byte	W01
	.byte		        113*temp_mvl/mxv
	.byte	W03
	.byte		        112*temp_mvl/mxv
	.byte	W05
	.byte		        111*temp_mvl/mxv
	.byte	W03
	.byte		        110*temp_mvl/mxv
	.byte	W03
	.byte		        109*temp_mvl/mxv
	.byte	W01
	.byte		        108*temp_mvl/mxv
	.byte	W03
	.byte		        107*temp_mvl/mxv
	.byte	W03
	.byte		        106*temp_mvl/mxv
	.byte	W03
	.byte		        105*temp_mvl/mxv
	.byte	W03
	.byte		        104*temp_mvl/mxv
	.byte	W03
	.byte		        103*temp_mvl/mxv
	.byte	W03
	.byte		        102*temp_mvl/mxv
	.byte	W03
	.byte		        101*temp_mvl/mxv
	.byte	W02
	.byte		        100*temp_mvl/mxv
	.byte	W03
	.byte		        99*temp_mvl/mxv
	.byte	W03
	.byte		        98*temp_mvl/mxv
	.byte	W04
	.byte		        97*temp_mvl/mxv
	.byte	W02
	.byte		        96*temp_mvl/mxv
	.byte	W03
	.byte		        95*temp_mvl/mxv
	.byte	W03
	.byte		        94*temp_mvl/mxv
	.byte	W03
	.byte		        93*temp_mvl/mxv
	.byte	W03
	.byte		        92*temp_mvl/mxv
	.byte	W01
	.byte		        91*temp_mvl/mxv
	.byte	W05
	.byte		        90*temp_mvl/mxv
	.byte	W03
	.byte		        89*temp_mvl/mxv
	.byte	W03
	.byte		        88*temp_mvl/mxv
	.byte	W01
	.byte		        87*temp_mvl/mxv
	.byte	W03
	.byte		        86*temp_mvl/mxv
	.byte	W03
	.byte		        85*temp_mvl/mxv
	.byte	W02
	.byte	PEND
@ 007   ----------------------------------------
temp_5_007:
	.byte	W01
	.byte		VOL   , 84*temp_mvl/mxv
	.byte	W03
	.byte		        83*temp_mvl/mxv
	.byte	W03
	.byte		        82*temp_mvl/mxv
	.byte	W03
	.byte		        81*temp_mvl/mxv
	.byte	W03
	.byte		        80*temp_mvl/mxv
	.byte	W03
	.byte		        79*temp_mvl/mxv
	.byte	W02
	.byte		        78*temp_mvl/mxv
	.byte	W03
	.byte		        77*temp_mvl/mxv
	.byte	W04
	.byte		        76*temp_mvl/mxv
	.byte	W03
	.byte		        75*temp_mvl/mxv
	.byte	W02
	.byte		        74*temp_mvl/mxv
	.byte	W03
	.byte		        73*temp_mvl/mxv
	.byte	W03
	.byte		        72*temp_mvl/mxv
	.byte	W03
	.byte		        71*temp_mvl/mxv
	.byte	W03
	.byte		        70*temp_mvl/mxv
	.byte	W03
	.byte		        69*temp_mvl/mxv
	.byte	W03
	.byte		        68*temp_mvl/mxv
	.byte	W03
	.byte		        67*temp_mvl/mxv
	.byte	W03
	.byte		        66*temp_mvl/mxv
	.byte	W01
	.byte		        65*temp_mvl/mxv
	.byte	W03
	.byte		        64*temp_mvl/mxv
	.byte	W03
	.byte		        63*temp_mvl/mxv
	.byte	W05
	.byte		        62*temp_mvl/mxv
	.byte	W01
	.byte		        61*temp_mvl/mxv
	.byte	W03
	.byte		        60*temp_mvl/mxv
	.byte	W03
	.byte		        59*temp_mvl/mxv
	.byte	W03
	.byte		        58*temp_mvl/mxv
	.byte	W03
	.byte		        57*temp_mvl/mxv
	.byte	W02
	.byte		        56*temp_mvl/mxv
	.byte	W04
	.byte		        55*temp_mvl/mxv
	.byte	W03
	.byte		        54*temp_mvl/mxv
	.byte	W03
	.byte		        53*temp_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte		EOT   , Bn3 
	.byte		VOL   , 52*temp_mvl/mxv
	.byte	W03
@ 008   ----------------------------------------
temp_5_008:
	.byte		VOL   , 51*temp_mvl/mxv
	.byte	W03
	.byte		        50*temp_mvl/mxv
	.byte	W03
	.byte		        49*temp_mvl/mxv
	.byte	W03
	.byte		        48*temp_mvl/mxv
	.byte	W03
	.byte		        47*temp_mvl/mxv
	.byte	W03
	.byte		        46*temp_mvl/mxv
	.byte	W03
	.byte		        45*temp_mvl/mxv
	.byte	W03
	.byte		        44*temp_mvl/mxv
	.byte	W01
	.byte		        43*temp_mvl/mxv
	.byte	W03
	.byte		        42*temp_mvl/mxv
	.byte	W05
	.byte		        41*temp_mvl/mxv
	.byte	W03
	.byte		        40*temp_mvl/mxv
	.byte	W01
	.byte		        39*temp_mvl/mxv
	.byte	W03
	.byte		        38*temp_mvl/mxv
	.byte	W03
	.byte		        37*temp_mvl/mxv
	.byte	W02
	.byte		        83*temp_mvl/mxv
	.byte	W01
	.byte		        84*temp_mvl/mxv
	.byte	W02
	.byte		N48   , As3 , v127
	.byte	W01
	.byte		VOL   , 85*temp_mvl/mxv
	.byte	W02
	.byte		        86*temp_mvl/mxv
	.byte	W01
	.byte		        87*temp_mvl/mxv
	.byte	W02
	.byte		        88*temp_mvl/mxv
	.byte	W01
	.byte		        89*temp_mvl/mxv
	.byte	W02
	.byte		        90*temp_mvl/mxv
	.byte	W01
	.byte		        91*temp_mvl/mxv
	.byte	W02
	.byte		        92*temp_mvl/mxv
	.byte	W01
	.byte		        93*temp_mvl/mxv
	.byte	W02
	.byte		        94*temp_mvl/mxv
	.byte	W01
	.byte		        95*temp_mvl/mxv
	.byte	W02
	.byte		        96*temp_mvl/mxv
	.byte	W01
	.byte		        97*temp_mvl/mxv
	.byte	W02
	.byte		        98*temp_mvl/mxv
	.byte	W03
	.byte		        99*temp_mvl/mxv
	.byte	W01
	.byte		        100*temp_mvl/mxv
	.byte	W02
	.byte		        101*temp_mvl/mxv
	.byte	W01
	.byte		        102*temp_mvl/mxv
	.byte	W02
	.byte		        103*temp_mvl/mxv
	.byte	W01
	.byte		        104*temp_mvl/mxv
	.byte	W02
	.byte		        105*temp_mvl/mxv
	.byte	W03
	.byte		        106*temp_mvl/mxv
	.byte	W01
	.byte		        107*temp_mvl/mxv
	.byte	W02
	.byte		        108*temp_mvl/mxv
	.byte	W01
	.byte		        109*temp_mvl/mxv
	.byte	W02
	.byte		        110*temp_mvl/mxv
	.byte	W01
	.byte		        111*temp_mvl/mxv
	.byte	W02
	.byte		        112*temp_mvl/mxv
	.byte	W01
	.byte		        113*temp_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte		        114*temp_mvl/mxv
	.byte		N48   , Fs3 
	.byte	W01
	.byte		VOL   , 115*temp_mvl/mxv
	.byte	W02
@ 009   ----------------------------------------
temp_5_009:
	.byte		VOL   , 116*temp_mvl/mxv
	.byte	W01
	.byte		        117*temp_mvl/mxv
	.byte	W02
	.byte		        118*temp_mvl/mxv
	.byte	W01
	.byte		        119*temp_mvl/mxv
	.byte	W03
	.byte		        120*temp_mvl/mxv
	.byte	W02
	.byte		        121*temp_mvl/mxv
	.byte	W01
	.byte		        122*temp_mvl/mxv
	.byte	W02
	.byte		        123*temp_mvl/mxv
	.byte	W01
	.byte		        124*temp_mvl/mxv
	.byte	W02
	.byte		        125*temp_mvl/mxv
	.byte	W01
	.byte		        126*temp_mvl/mxv
	.byte	W02
	.byte		        127*temp_mvl/mxv
	.byte	W24
	.byte	W03
	.byte	PEND
	.byte		TIE   , Dn4 , v127
	.byte	W21
	.byte		VOL   , 126*temp_mvl/mxv
	.byte	W01
	.byte		        125*temp_mvl/mxv
	.byte	W03
	.byte		        124*temp_mvl/mxv
	.byte	W03
	.byte		        123*temp_mvl/mxv
	.byte	W02
	.byte		        122*temp_mvl/mxv
	.byte	W03
	.byte		        121*temp_mvl/mxv
	.byte	W03
	.byte		        120*temp_mvl/mxv
	.byte	W01
	.byte		        119*temp_mvl/mxv
	.byte	W05
	.byte		        118*temp_mvl/mxv
	.byte	W01
	.byte		        117*temp_mvl/mxv
	.byte	W03
	.byte		        116*temp_mvl/mxv
	.byte	W03
	.byte		        115*temp_mvl/mxv
	.byte	W02
@ 010   ----------------------------------------
temp_5_010:
	.byte		VOL   , 114*temp_mvl/mxv
	.byte	W03
	.byte		        113*temp_mvl/mxv
	.byte	W03
	.byte		        112*temp_mvl/mxv
	.byte	W03
	.byte		        111*temp_mvl/mxv
	.byte	W03
	.byte		        110*temp_mvl/mxv
	.byte	W03
	.byte		        109*temp_mvl/mxv
	.byte	W01
	.byte		        108*temp_mvl/mxv
	.byte	W03
	.byte		        107*temp_mvl/mxv
	.byte	W03
	.byte		        106*temp_mvl/mxv
	.byte	W02
	.byte		        105*temp_mvl/mxv
	.byte	W04
	.byte		        104*temp_mvl/mxv
	.byte	W02
	.byte		        103*temp_mvl/mxv
	.byte	W03
	.byte		        102*temp_mvl/mxv
	.byte	W03
	.byte		        101*temp_mvl/mxv
	.byte	W01
	.byte		        100*temp_mvl/mxv
	.byte	W03
	.byte		        99*temp_mvl/mxv
	.byte	W03
	.byte		        98*temp_mvl/mxv
	.byte	W03
	.byte		        97*temp_mvl/mxv
	.byte	W03
	.byte		        96*temp_mvl/mxv
	.byte	W02
	.byte		        95*temp_mvl/mxv
	.byte	W03
	.byte		        94*temp_mvl/mxv
	.byte	W03
	.byte		        93*temp_mvl/mxv
	.byte	W01
	.byte		        92*temp_mvl/mxv
	.byte	W03
	.byte		        91*temp_mvl/mxv
	.byte	W05
	.byte		        90*temp_mvl/mxv
	.byte	W01
	.byte		        89*temp_mvl/mxv
	.byte	W03
	.byte		        88*temp_mvl/mxv
	.byte	W03
	.byte		        87*temp_mvl/mxv
	.byte	W02
	.byte		        86*temp_mvl/mxv
	.byte	W03
	.byte		        85*temp_mvl/mxv
	.byte	W03
	.byte		        84*temp_mvl/mxv
	.byte	W03
	.byte		        83*temp_mvl/mxv
	.byte	W03
	.byte		        82*temp_mvl/mxv
	.byte	W01
	.byte		        81*temp_mvl/mxv
	.byte	W03
	.byte		        80*temp_mvl/mxv
	.byte	W03
	.byte		        79*temp_mvl/mxv
	.byte	W02
	.byte	PEND
@ 011   ----------------------------------------
temp_5_011:
	.byte		VOL   , 78*temp_mvl/mxv
	.byte	W03
	.byte		        77*temp_mvl/mxv
	.byte	W04
	.byte		        76*temp_mvl/mxv
	.byte	W02
	.byte		        75*temp_mvl/mxv
	.byte	W03
	.byte		        74*temp_mvl/mxv
	.byte	W03
	.byte		        73*temp_mvl/mxv
	.byte	W01
	.byte		        72*temp_mvl/mxv
	.byte	W03
	.byte		        71*temp_mvl/mxv
	.byte	W03
	.byte		        70*temp_mvl/mxv
	.byte	W03
	.byte		        69*temp_mvl/mxv
	.byte	W03
	.byte		        68*temp_mvl/mxv
	.byte	W02
	.byte		        67*temp_mvl/mxv
	.byte	W03
	.byte		        66*temp_mvl/mxv
	.byte	W03
	.byte		        65*temp_mvl/mxv
	.byte	W01
	.byte		        64*temp_mvl/mxv
	.byte	W03
	.byte		        63*temp_mvl/mxv
	.byte	W03
	.byte		        62*temp_mvl/mxv
	.byte	W03
	.byte		        61*temp_mvl/mxv
	.byte	W03
	.byte		        60*temp_mvl/mxv
	.byte	W02
	.byte		        59*temp_mvl/mxv
	.byte	W03
	.byte		        58*temp_mvl/mxv
	.byte	W03
	.byte		        57*temp_mvl/mxv
	.byte	W01
	.byte		        56*temp_mvl/mxv
	.byte	W05
	.byte		        55*temp_mvl/mxv
	.byte	W03
	.byte		        54*temp_mvl/mxv
	.byte	W01
	.byte		        53*temp_mvl/mxv
	.byte	W03
	.byte		        52*temp_mvl/mxv
	.byte	W03
	.byte		        51*temp_mvl/mxv
	.byte	W02
	.byte		        50*temp_mvl/mxv
	.byte	W03
	.byte		        49*temp_mvl/mxv
	.byte	W03
	.byte		        48*temp_mvl/mxv
	.byte	W03
	.byte		        47*temp_mvl/mxv
	.byte	W03
	.byte		        46*temp_mvl/mxv
	.byte	W01
	.byte		        45*temp_mvl/mxv
	.byte	W03
	.byte		        44*temp_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte		EOT   , Dn4 
	.byte	W01
	.byte		VOL   , 43*temp_mvl/mxv
	.byte	W02
@ 012   ----------------------------------------
	.byte		        42*temp_mvl/mxv
	.byte	W40
	.byte		        54*temp_mvl/mxv
	.byte	W02
	.byte		        55*temp_mvl/mxv
	.byte	W01
	.byte		        56*temp_mvl/mxv
	.byte	W02
	.byte		        57*temp_mvl/mxv
	.byte		N48   , Gn3 , v127
	.byte	W01
	.byte		VOL   , 58*temp_mvl/mxv
	.byte	W02
	.byte		        59*temp_mvl/mxv
	.byte	W01
	.byte		        60*temp_mvl/mxv
	.byte	W02
	.byte		        61*temp_mvl/mxv
	.byte	W01
	.byte		        62*temp_mvl/mxv
	.byte	W02
	.byte		        63*temp_mvl/mxv
	.byte	W01
	.byte		        64*temp_mvl/mxv
	.byte	W02
	.byte		        66*temp_mvl/mxv
	.byte	W01
	.byte		        67*temp_mvl/mxv
	.byte	W02
	.byte		        68*temp_mvl/mxv
	.byte	W01
	.byte		        69*temp_mvl/mxv
	.byte	W02
	.byte		        70*temp_mvl/mxv
	.byte	W01
	.byte		        71*temp_mvl/mxv
	.byte	W02
	.byte		        72*temp_mvl/mxv
	.byte	W01
	.byte		        73*temp_mvl/mxv
	.byte	W02
	.byte		        75*temp_mvl/mxv
	.byte	W01
	.byte		        76*temp_mvl/mxv
	.byte	W02
	.byte		        77*temp_mvl/mxv
	.byte	W01
	.byte		        78*temp_mvl/mxv
	.byte	W02
	.byte		        79*temp_mvl/mxv
	.byte	W01
	.byte		        80*temp_mvl/mxv
	.byte	W02
	.byte		        81*temp_mvl/mxv
	.byte	W01
	.byte		        82*temp_mvl/mxv
	.byte	W02
	.byte		        84*temp_mvl/mxv
	.byte	W03
	.byte		        85*temp_mvl/mxv
	.byte	W01
	.byte		        87*temp_mvl/mxv
	.byte	W02
	.byte		        88*temp_mvl/mxv
	.byte	W01
	.byte		        89*temp_mvl/mxv
	.byte	W02
	.byte		        90*temp_mvl/mxv
	.byte	W01
	.byte		        91*temp_mvl/mxv
	.byte	W02
	.byte		        92*temp_mvl/mxv
	.byte		N48   , Ds3 
	.byte	W01
	.byte		VOL   , 93*temp_mvl/mxv
	.byte	W02
@ 013   ----------------------------------------
	.byte	PATT
	 .word	temp_5_005
	.byte		TIE   , Bn3 , v127
	.byte	W24
	.byte	W01
	.byte		VOL   , 124*temp_mvl/mxv
	.byte	W02
	.byte		        127*temp_mvl/mxv
	.byte	W01
	.byte		        126*temp_mvl/mxv
	.byte	W03
	.byte		        125*temp_mvl/mxv
	.byte	W03
	.byte		        124*temp_mvl/mxv
	.byte	W03
	.byte		        123*temp_mvl/mxv
	.byte	W03
	.byte		        122*temp_mvl/mxv
	.byte	W02
	.byte		        121*temp_mvl/mxv
	.byte	W03
	.byte		        120*temp_mvl/mxv
	.byte	W03
	.byte		        119*temp_mvl/mxv
	.byte	W03
@ 014   ----------------------------------------
	.byte	PATT
	 .word	temp_5_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	temp_5_007
	.byte		EOT   , Bn3 
	.byte		VOL   , 52*temp_mvl/mxv
	.byte	W03
@ 016   ----------------------------------------
	.byte	PATT
	 .word	temp_5_008
	.byte		VOL   , 114*temp_mvl/mxv
	.byte		N48   , Fs3 , v127
	.byte	W01
	.byte		VOL   , 115*temp_mvl/mxv
	.byte	W02
@ 017   ----------------------------------------
	.byte	PATT
	 .word	temp_5_009
	.byte		TIE   , Dn4 , v127
	.byte	W21
	.byte		VOL   , 126*temp_mvl/mxv
	.byte	W01
	.byte		        125*temp_mvl/mxv
	.byte	W03
	.byte		        124*temp_mvl/mxv
	.byte	W03
	.byte		        123*temp_mvl/mxv
	.byte	W02
	.byte		        122*temp_mvl/mxv
	.byte	W03
	.byte		        121*temp_mvl/mxv
	.byte	W03
	.byte		        120*temp_mvl/mxv
	.byte	W01
	.byte		        119*temp_mvl/mxv
	.byte	W05
	.byte		        118*temp_mvl/mxv
	.byte	W01
	.byte		        117*temp_mvl/mxv
	.byte	W03
	.byte		        116*temp_mvl/mxv
	.byte	W03
	.byte		        115*temp_mvl/mxv
	.byte	W02
@ 018   ----------------------------------------
	.byte	PATT
	 .word	temp_5_010
@ 019   ----------------------------------------
	.byte	PATT
	 .word	temp_5_011
	.byte		EOT   , Dn4 
	.byte	W01
	.byte		VOL   , 43*temp_mvl/mxv
	.byte	W02
@ 020   ----------------------------------------
	.byte		        42*temp_mvl/mxv
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

temp_6:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 52
	.byte		VOL   , 80*temp_mvl/mxv
	.byte		PAN   , c_v+36
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W42
	.byte	W01
	.byte	W02
	.byte		N48   , Ds3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte		        Bn2 
	.byte	W01
	.byte	W02
@ 005   ----------------------------------------
temp_6_005:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	PEND
	.byte		TIE   , Gn3 , v127
	.byte	W48
	.byte	W03
@ 006   ----------------------------------------
temp_6_006:
	.byte	W21
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	PEND
@ 007   ----------------------------------------
temp_6_007:
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	PEND
	.byte		EOT   , Gn3 
	.byte	W03
@ 008   ----------------------------------------
temp_6_008:
	.byte	W42
	.byte	W01
	.byte	W02
	.byte		N48   , Fs3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	PEND
	.byte		        Dn3 
	.byte	W01
	.byte	W02
@ 009   ----------------------------------------
temp_6_009:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	PEND
	.byte		TIE   , As3 , v127
	.byte	W44
	.byte	W02
	.byte	W02
	.byte	W03
@ 010   ----------------------------------------
temp_6_010:
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	PEND
@ 011   ----------------------------------------
temp_6_011:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W05
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	PEND
	.byte		EOT   , As3 
	.byte	W01
	.byte	W02
@ 012   ----------------------------------------
	.byte	W42
	.byte	W01
	.byte	W02
	.byte		N48   , Ds3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte		        Bn2 
	.byte	W01
	.byte	W02
@ 013   ----------------------------------------
	.byte	PATT
	 .word	temp_6_005
	.byte		TIE   , Gn3 , v127
	.byte	W48
	.byte	W03
@ 014   ----------------------------------------
	.byte	PATT
	 .word	temp_6_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	temp_6_007
	.byte		EOT   , Gn3 
	.byte	W03
@ 016   ----------------------------------------
	.byte	PATT
	 .word	temp_6_008
	.byte		N48   , Dn3 , v127
	.byte	W01
	.byte	W02
@ 017   ----------------------------------------
	.byte	PATT
	 .word	temp_6_009
	.byte		TIE   , As3 , v127
	.byte	W44
	.byte	W02
	.byte	W02
	.byte	W03
@ 018   ----------------------------------------
	.byte	PATT
	 .word	temp_6_010
@ 019   ----------------------------------------
	.byte	PATT
	 .word	temp_6_011
	.byte		EOT   , As3 
	.byte	W01
	.byte	W02
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

temp_7:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 52
	.byte		VOL   , 80*temp_mvl/mxv
	.byte		PAN   , c_v-34
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W42
	.byte	W01
	.byte	W02
	.byte		N48   , Bn2 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte		        Gn2 
	.byte	W01
	.byte	W02
@ 005   ----------------------------------------
temp_7_005:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	PEND
	.byte		TIE   , Ds3 , v127
	.byte	W48
	.byte	W03
@ 006   ----------------------------------------
temp_7_006:
	.byte	W10
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	PEND
@ 007   ----------------------------------------
temp_7_007:
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W08
	.byte	PEND
	.byte		EOT   , Ds3 
	.byte	W03
@ 008   ----------------------------------------
temp_7_008:
	.byte	W36
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte		N48   , Dn3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	PEND
	.byte		        As2 
	.byte	W01
	.byte	W02
@ 009   ----------------------------------------
temp_7_009:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	PEND
	.byte		TIE   , Fs3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W44
	.byte	W03
@ 010   ----------------------------------------
temp_7_010:
	.byte	W24
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	PEND
@ 011   ----------------------------------------
temp_7_011:
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	PEND
	.byte		EOT   , Fs3 
	.byte	W01
	.byte	W02
@ 012   ----------------------------------------
	.byte	W42
	.byte	W01
	.byte	W02
	.byte		N48   , Bn2 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte		        Gn2 
	.byte	W01
	.byte	W02
@ 013   ----------------------------------------
	.byte	PATT
	 .word	temp_7_005
	.byte		TIE   , Ds3 , v127
	.byte	W48
	.byte	W03
@ 014   ----------------------------------------
	.byte	PATT
	 .word	temp_7_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	temp_7_007
	.byte		EOT   , Ds3 
	.byte	W03
@ 016   ----------------------------------------
	.byte	PATT
	 .word	temp_7_008
	.byte		N48   , As2 , v127
	.byte	W01
	.byte	W02
@ 017   ----------------------------------------
	.byte	PATT
	 .word	temp_7_009
	.byte		TIE   , Fs3 , v127
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W44
	.byte	W03
@ 018   ----------------------------------------
	.byte	PATT
	 .word	temp_7_010
@ 019   ----------------------------------------
	.byte	PATT
	 .word	temp_7_011
	.byte		EOT   , Fs3 
	.byte	W01
	.byte	W02
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

temp_8:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 47
	.byte		VOL   , 115*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W48
	.byte		N04   , Cn2 , v076
	.byte	W04
	.byte		        Cn2 , v080
	.byte	W04
	.byte		        Cn2 , v084
	.byte	W04
	.byte		        Cn2 , v088
	.byte	W04
	.byte		        Cn2 , v092
	.byte	W04
	.byte		        Cn2 , v096
	.byte	W04
	.byte		        Cn2 , v100
	.byte	W04
	.byte		        Cn2 , v104
	.byte	W04
	.byte		        Cn2 , v108
	.byte	W04
	.byte		        Cn2 , v112
	.byte	W04
	.byte		        Cn2 , v116
	.byte	W04
	.byte		N04   
	.byte	W04
@ 004   ----------------------------------------
	.byte		N24   , Cn2 , v127
	.byte	W24
	.byte	W24
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v124
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
	.byte		        Cn2 , v116
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v112
	.byte	W03
	.byte		        Cn2 , v108
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v092
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
@ 005   ----------------------------------------
	.byte		        Cn2 , v084
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v072
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v056
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v036
	.byte	W03
	.byte		        Cn2 , v032
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v028
	.byte	W03
	.byte		        Cn2 , v024
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v020
	.byte	W03
	.byte		        Cn2 , v016
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v012
	.byte	W03
	.byte		        Cn2 , v008
	.byte	W03
	.byte		        Cn2 , v004
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		N03   
	.byte	W03
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W48
	.byte		        Cn2 , v032
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v084
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
@ 008   ----------------------------------------
	.byte		N21   , Cn2 , v127
	.byte	W21
	.byte	W24
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v124
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
	.byte		        Cn2 , v116
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v112
	.byte	W03
	.byte		        Cn2 , v108
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v092
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
@ 009   ----------------------------------------
	.byte		        Cn2 , v084
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v072
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v056
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v036
	.byte	W03
	.byte		        Cn2 , v032
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v028
	.byte	W03
	.byte		        Cn2 , v024
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v020
	.byte	W03
	.byte		        Cn2 , v016
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v012
	.byte	W03
	.byte		        Cn2 , v008
	.byte	W03
	.byte		        Cn2 , v004
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		N03   
	.byte	W03
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W48
	.byte		        Cn2 , v032
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v084
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
@ 012   ----------------------------------------
	.byte		N24   , Cn2 , v127
	.byte	W24
	.byte	W24
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v124
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
	.byte		        Cn2 , v116
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v112
	.byte	W03
	.byte		        Cn2 , v108
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v092
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
@ 013   ----------------------------------------
	.byte		        Cn2 , v084
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v072
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v056
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v036
	.byte	W03
	.byte		        Cn2 , v032
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v028
	.byte	W03
	.byte		        Cn2 , v024
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v020
	.byte	W03
	.byte		        Cn2 , v016
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v012
	.byte	W03
	.byte		        Cn2 , v008
	.byte	W03
	.byte		        Cn2 , v004
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		N03   
	.byte	W03
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W48
	.byte		        Cn2 , v032
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v084
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
@ 016   ----------------------------------------
	.byte		N21   , Cn2 , v127
	.byte	W21
	.byte	W24
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v124
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
	.byte		        Cn2 , v116
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v112
	.byte	W03
	.byte		        Cn2 , v108
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v092
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
@ 017   ----------------------------------------
	.byte		        Cn2 , v084
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v072
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v056
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v036
	.byte	W03
	.byte		        Cn2 , v032
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v028
	.byte	W03
	.byte		        Cn2 , v024
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v020
	.byte	W03
	.byte		        Cn2 , v016
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        Cn2 , v012
	.byte	W03
	.byte		        Cn2 , v008
	.byte	W03
	.byte		        Cn2 , v004
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		N03   
	.byte	W03
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W48
	.byte		        Cn2 , v032
	.byte	W03
	.byte		        Cn2 , v040
	.byte	W03
	.byte		        Cn2 , v044
	.byte	W03
	.byte		        Cn2 , v048
	.byte	W03
	.byte		        Cn2 , v052
	.byte	W03
	.byte		        Cn2 , v060
	.byte	W03
	.byte		        Cn2 , v064
	.byte	W03
	.byte		        Cn2 , v068
	.byte	W03
	.byte		        Cn2 , v076
	.byte	W03
	.byte		        Cn2 , v080
	.byte	W03
	.byte		        Cn2 , v084
	.byte	W03
	.byte		        Cn2 , v088
	.byte	W03
	.byte		        Cn2 , v096
	.byte	W03
	.byte		        Cn2 , v100
	.byte	W03
	.byte		        Cn2 , v104
	.byte	W03
	.byte		        Cn2 , v120
	.byte	W03
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 9 (Midi-Chn.9) ****************@

temp_9:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 15
	.byte		VOL   , 80*temp_mvl/mxv
	.byte		PAN   , c_v-24
	.byte		BEND  , c_v+0
	.byte		TIE   , An1 , v127
	.byte	W16
	.byte	W12
	.byte	W11
	.byte	W06
	.byte	W06
	.byte	W07
	.byte	W03
	.byte	W05
	.byte	W06
	.byte	W03
	.byte	W03
	.byte	W04
	.byte	W03
	.byte	W05
	.byte	W03
	.byte	W03
@ 002   ----------------------------------------
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
@ 003   ----------------------------------------
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	W12
	.byte		EOT   
@ 004   ----------------------------------------
temp_9_004:
	.byte		TIE   , Cn2 , v127
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	PEND
@ 005   ----------------------------------------
temp_9_005:
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W05
	.byte	W03
	.byte	W01
	.byte	W05
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	PEND
@ 006   ----------------------------------------
temp_9_006:
	.byte	W03
	.byte	W04
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W03
	.byte	W05
	.byte	PEND
	.byte		EOT   , Cn2 
	.byte	W72
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
temp_9_008:
	.byte	W48
	.byte		TIE   , Cn2 , v127
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	PEND
@ 009   ----------------------------------------
temp_9_009:
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W01
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W02
	.byte	PEND
@ 010   ----------------------------------------
temp_9_010:
	.byte	W04
	.byte	W02
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W01
	.byte	W05
	.byte	W03
	.byte	W01
	.byte	W05
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W04
	.byte	W03
	.byte	W02
	.byte	W04
	.byte	W03
	.byte	W05
	.byte	PEND
	.byte		EOT   , Cn2 
	.byte	W24
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	PATT
	 .word	temp_9_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	temp_9_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	temp_9_006
	.byte		EOT   , Cn2 
	.byte	W72
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	PATT
	 .word	temp_9_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	temp_9_009
@ 018   ----------------------------------------
	.byte	PATT
	 .word	temp_9_010
	.byte		EOT   , Cn2 
	.byte	W24
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 10 (Midi-Chn.11) ****************@

temp_10:
	.byte	KEYSH , temp_key+0
@ 000   ----------------------------------------
	.byte	W24
@ 001   ----------------------------------------
	.byte		VOICE , 6
	.byte		VOL   , 90*temp_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+0
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W48
	.byte		N12   , Cn1 , v127
	.byte	W12
	.byte	W36
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte	W36
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

temp:
	.byte	10	@ NumTrks
	.byte	0	@ NumBlks
	.byte	temp_pri	@ Priority
	.byte	temp_rev	@ Reverb.

	.word	temp_grp

	.word	temp_1
	.word	temp_2
	.word	temp_3
	.word	temp_4
	.word	temp_5
	.word	temp_6
	.word	temp_7
	.word	temp_8
	.word	temp_9
	.word	temp_10

	.end
