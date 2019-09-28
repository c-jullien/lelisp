	.386p
	.387

	include	fntstd.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	fntstd.equ
ini_std	proc	near
	mov	eax,4
	mov	ebx,offset FLAT:pnmac977
	mov	ecx,offset FLAT:true
	mov	edx,offset FLAT:ztrue
	push	z_true
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac978
	mov	ecx,offset FLAT:false
	mov	edx,offset FLAT:zfalse
	push	z_false
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac979
	mov	ecx,offset FLAT:llnot
	mov	edx,offset FLAT:zllnot
	push	z_llnot
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac980
	mov	ecx,offset FLAT:llnull
	mov	edx,offset FLAT:zllnull
	push	z_llnull
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac981
	mov	ecx,offset FLAT:atom
	mov	edx,offset FLAT:zatom
	push	z_atom
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac982
	mov	ecx,offset FLAT:atomp
	mov	edx,offset FLAT:zatomp
	push	z_atomp
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac983
	mov	ecx,offset FLAT:symbolp
	mov	edx,offset FLAT:zsymbolp
	push	z_symbolp
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac984
	mov	ecx,offset FLAT:variablep
	mov	edx,offset FLAT:zvariablep
	push	z_variablep
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac985
	mov	ecx,offset FLAT:constantp
	mov	edx,offset FLAT:zconstantp
	push	z_constantp
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac986
	mov	ecx,offset FLAT:vectorp
	mov	edx,offset FLAT:zvectorp
	push	z_vectorp
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac987
	mov	ecx,offset FLAT:stringp
	mov	edx,offset FLAT:zstringp
	push	z_stringp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac988
	mov	ecx,offset FLAT:listp
	mov	edx,offset FLAT:zlistp
	push	z_listp
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac989
	mov	ecx,offset FLAT:nlistp
	mov	edx,offset FLAT:znlistp
	push	z_nlistp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac990
	mov	ecx,offset FLAT:consp
	mov	edx,offset FLAT:zconsp
	push	z_consp
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac991
	mov	ecx,offset FLAT:boundp
	mov	edx,offset FLAT:zboundp
	push	z_boundp
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac992
	mov	ecx,offset FLAT:lleq
	mov	edx,offset FLAT:zlleq
	push	z_lleq
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac993
	mov	ecx,offset FLAT:neq
	mov	edx,offset FLAT:zneq
	push	z_neq
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac994
	mov	ecx,offset FLAT:equal
	mov	edx,offset FLAT:zequal
	push	z_equal
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac995
	mov	ecx,offset FLAT:nequal
	mov	edx,offset FLAT:znequal
	push	z_nequal
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac996
	mov	ecx,offset FLAT:memq
	mov	edx,offset FLAT:zmemq
	push	z_memq
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac997
	mov	ecx,offset FLAT:member
	mov	edx,offset FLAT:zmember
	push	z_member
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac998
	mov	ecx,offset FLAT:tailp
	mov	edx,offset FLAT:ztailp
	push	z_tailp
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac999
	mov	ecx,offset FLAT:last
	mov	edx,offset FLAT:zlast
	push	z_last
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1000
	mov	ecx,offset FLAT:nthcdr
	mov	edx,offset FLAT:znthcdr
	push	z_nthcdr
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1001
	mov	ecx,offset FLAT:nth
	mov	edx,offset FLAT:znth
	push	z_nth
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1002
	mov	ecx,offset FLAT:lllength
	mov	edx,offset FLAT:zlllength
	push	z_lllength
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1003
	mov	ecx,offset FLAT:llcons
	mov	edx,offset FLAT:zllcons
	push	z_llcons
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1004
	mov	ecx,offset FLAT:fxcons
	mov	edx,offset FLAT:zfxcons
	push	z_fxcons
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1005
	mov	ecx,offset FLAT:fncons
	mov	edx,offset FLAT:zfncons
	push	z_fncons
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1006
	mov	ecx,offset FLAT:mcons
	mov	edx,offset FLAT:zmcons
	push	z_mcons
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1007
	mov	ecx,offset FLAT:list
	mov	edx,offset FLAT:zlist
	push	z_list
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1008
	mov	ecx,offset FLAT:evlis
	mov	edx,offset FLAT:zevlis
	push	z_evlis
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1009
	mov	ecx,offset FLAT:kwote
	mov	edx,offset FLAT:zkwote
	push	z_kwote
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1010
	mov	ecx,offset FLAT:makelist
	mov	edx,offset FLAT:zmakelist
	push	z_makelist
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1011
	mov	ecx,offset FLAT:reverse
	mov	edx,offset FLAT:zreverse
	push	z_reverse
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1012
	mov	ecx,offset FLAT:append
	mov	edx,offset FLAT:zappend
	push	z_append
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1013
	mov	ecx,offset FLAT:appnd1
	mov	edx,offset FLAT:zappnd1
	push	z_appnd1
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1014
	mov	ecx,offset FLAT:remq
	mov	edx,offset FLAT:zremq
	push	z_remq
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1015
	mov	ecx,offset FLAT:llremove
	mov	edx,offset FLAT:zllremove
	push	z_llremove
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1016
	mov	ecx,offset FLAT:copy
	mov	edx,offset FLAT:zcopy
	push	z_copy
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1017
	mov	ecx,offset FLAT:copylist
	mov	edx,offset FLAT:zcopylist
	push	z_copylist
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1018
	mov	ecx,offset FLAT:firstn
	mov	edx,offset FLAT:zfirstn
	push	z_firstn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1019
	mov	ecx,offset FLAT:lastn
	mov	edx,offset FLAT:zlastn
	push	z_lastn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1020
	mov	ecx,offset FLAT:subst
	mov	edx,offset FLAT:zsubst
	push	z_subst
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1021
	mov	ecx,offset FLAT:oblist
	mov	edx,offset FLAT:zoblist
	push	z_oblist
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1022
	mov	ecx,offset FLAT:boblist
	mov	edx,offset FLAT:zboblist
	push	z_boblist
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1023
	mov	ecx,offset FLAT:lhoblist
	mov	edx,offset FLAT:zlhoblist
	push	z_lhoblist
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1024
	mov	ecx,offset FLAT:rplaca
	mov	edx,offset FLAT:zrplaca
	push	z_rplaca
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1025
	mov	ecx,offset FLAT:rplacd
	mov	edx,offset FLAT:zrplacd
	push	z_rplacd
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1026
	mov	ecx,offset FLAT:rplac
	mov	edx,offset FLAT:zrplac
	push	z_rplac
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1027
	mov	ecx,offset FLAT:placdl
	mov	edx,offset FLAT:zplacdl
	push	z_placdl
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1028
	mov	ecx,offset FLAT:displace
	mov	edx,offset FLAT:zdisplace
	push	z_displace
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1029
	mov	ecx,offset FLAT:setq
	mov	edx,offset FLAT:zsetq
	push	z_setq
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1030
	mov	ecx,offset FLAT:fset
	mov	edx,offset FLAT:zfset
	push	z_fset
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1031
	mov	ecx,offset FLAT:setqq
	mov	edx,offset FLAT:zsetqq
	push	z_setqq
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1032
	mov	ecx,offset FLAT:psetq
	mov	edx,offset FLAT:zpsetq
	push	z_psetq
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1033
	mov	ecx,offset FLAT:deset
	mov	edx,offset FLAT:zdeset
	push	z_deset
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1034
	mov	ecx,offset FLAT:desetq
	mov	edx,offset FLAT:zdesetq
	push	z_desetq
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1035
	mov	ecx,offset FLAT:cirlist
	mov	edx,offset FLAT:zcirlist
	push	z_cirlist
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1036
	mov	ecx,offset FLAT:nreverse
	mov	edx,offset FLAT:znreverse
	push	z_nreverse
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1037
	mov	ecx,offset FLAT:nsubst
	mov	edx,offset FLAT:znsubst
	push	z_nsubst
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1038
	mov	ecx,offset FLAT:delq
	mov	edx,offset FLAT:zdelq
	push	z_delq
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1039
	mov	ecx,offset FLAT:lldelete
	mov	edx,offset FLAT:zlldelete
	push	z_lldelete
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1040
	mov	ecx,offset FLAT:nreconc
	mov	edx,offset FLAT:znreconc
	push	z_nreconc
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1041
	mov	ecx,offset FLAT:nextl
	mov	edx,offset FLAT:znextl
	push	z_nextl
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1042
	mov	ecx,offset FLAT:newl
	mov	edx,offset FLAT:znewl
	push	z_newl
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1043
	mov	ecx,offset FLAT:newr
	mov	edx,offset FLAT:znewr
	push	z_newr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1044
	mov	ecx,offset FLAT:nconc
	mov	edx,offset FLAT:znconc
	push	z_nconc
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1045
	mov	ecx,offset FLAT:nconc1
	mov	edx,offset FLAT:znconc1
	push	z_nconc1
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1046
	mov	ecx,offset FLAT:acons
	mov	edx,offset FLAT:zacons
	push	z_acons
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1047
	mov	ecx,offset FLAT:pairlis
	mov	edx,offset FLAT:zpairlis
	push	z_pairlis
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1048
	mov	ecx,offset FLAT:assq
	mov	edx,offset FLAT:zassq
	push	z_assq
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1049
	mov	ecx,offset FLAT:assoc
	mov	edx,offset FLAT:zassoc
	push	z_assoc
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1050
	mov	ecx,offset FLAT:cassq
	mov	edx,offset FLAT:zcassq
	push	z_cassq
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1051
	mov	ecx,offset FLAT:cassoc
	mov	edx,offset FLAT:zcassoc
	push	z_cassoc
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1052
	mov	ecx,offset FLAT:rassq
	mov	edx,offset FLAT:zrassq
	push	z_rassq
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1053
	mov	ecx,offset FLAT:rassoc
	mov	edx,offset FLAT:zrassoc
	push	z_rassoc
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1054
	mov	ecx,offset FLAT:sublis
	mov	edx,offset FLAT:zsublis
	push	z_sublis
	call	near ptr inisymb
	ret
fntret	label	near
	ret
ini_std	endp

true	proc	near
	lea	esp,dword ptr [esp+edx*4]
	mov	eax,dword ptr [zt]
	ret
true	endp

false	proc	near
	lea	esp,dword ptr [esp+edx*4]
	mov	eax,esi
	ret
false	endp

llnull	proc	near
	cmp	eax,esi
	je	near ptr llnullt
	mov	eax,esi
	ret
llnullt	label	near
	mov	eax,dword ptr [zt]
	ret
llnull	endp

llnot	proc	near
	cmp	eax,esi
	je	near ptr llnott
	mov	eax,esi
	ret
llnott	label	near
	mov	eax,dword ptr [zt]
	ret
llnot	endp

atom	proc	near
	cmp	eax,edi
	jb	near ptr atomt
	mov	eax,esi
	ret
atomt	label	near
	mov	eax,dword ptr [zt]
	ret
atom	endp

atomp	proc	near
	cmp	eax,edi
	jb	near ptr atompt
	mov	eax,esi
	ret
atompt	label	near
	mov	eax,dword ptr [zt]
	ret
atomp	endp

symbolp	proc	near
	cmp	eax,esi
	jb	short lmac1055
	cmp	eax,edi
	jb	near ptr symbolpt
lmac1055:
	mov	eax,esi
	ret
symbolpt	label	near
	mov	eax,dword ptr [zt]
	ret
symbolp	endp

variablep	proc	near
	cmp	dword ptr [bvar],eax
	ja	short lmac1056
	cmp	eax,edi
	jb	near ptr varpret
lmac1056:
	mov	eax,esi
varpret	label	near
	ret
variablep	endp

constantp	proc	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr conpt
	cmp	dword ptr [bfloat],eax
	ja	short lmac1057
	cmp	dword ptr [bvect],eax
	ja	near ptr conpt
lmac1057:
	cmp	dword ptr [bstrg],eax
	ja	short lmac1058
	cmp	eax,esi
	jb	near ptr conpt
lmac1058:
	cmp	dword ptr [bvect],eax
	ja	short lmac1059
	cmp	dword ptr [bstrg],eax
	ja	near ptr conpt
lmac1059:
	cmp	eax,edi
	jae	near ptr conpret
	cmp	dword ptr [bvar],eax
	ja	near ptr conpt
	cmp	eax,edi
	jae	near ptr conpt
conpret	label	near
	mov	eax,esi
	ret
conpt	label	near
	mov	eax,dword ptr [zt]
	ret
constantp	endp

vectorp	proc	near
	cmp	dword ptr [bvect],eax
	ja	short lmac1060
	cmp	dword ptr [bstrg],eax
	ja	near ptr vectret
lmac1060:
	mov	eax,esi
vectret	label	near
	ret
vectorp	endp

stringp	proc	near
	cmp	dword ptr [bstrg],eax
	ja	short lmac1061
	cmp	eax,esi
	jb	near ptr strgret
lmac1061:
	mov	eax,esi
strgret	label	near
	ret
stringp	endp

listp	proc	near
	cmp	eax,esi
	je	near ptr listpt
	cmp	eax,edi
	jae	near ptr listpt
	mov	eax,esi
	ret
listpt	label	near
	mov	eax,dword ptr [zt]
	ret
listp	endp

nlistp	proc	near
	cmp	eax,edi
	jb	near ptr nlistpr
	mov	eax,esi
nlistpr	label	near
	ret
nlistp	endp

consp	proc	near
	cmp	eax,edi
	jae	near ptr conspr
	mov	eax,esi
conspr	label	near
	ret
consp	endp

boundp	proc	near
	cmp	eax,esi
	jb	near ptr boundp1
	cmp	eax,edi
	jae	near ptr boundp1
	mov	ebx,dword ptr [eax]
	cmp	ebx,dword ptr [zundef]
	jne	near ptr boundpt
boundp1	label	near
	mov	eax,esi
	ret
boundpt	label	near
	mov	eax,dword ptr [zt]
	ret
boundp	endp

lleq	proc	near
	cmp	eax,ebx
	je	near ptr lleqt
	mov	eax,esi
	ret
lleqt	label	near
	mov	eax,dword ptr [zt]
	ret
lleq	endp

neq	proc	near
	cmp	eax,ebx
	jne	near ptr neqt
	mov	eax,esi
	ret
neqt	label	near
	mov	eax,dword ptr [zt]
	ret
neq	endp

nequal	proc	near
	push	offset FLAT:llnot
	jmp	near ptr equal
	nop
nequal	endp

equal	proc	near
	mov	ecx,esp
	call	near ptr equal2
	mov	eax,dword ptr [zt]
	ret
equaln	label	near
	mov	esp,ecx
	mov	eax,esi
	ret
equalnt	label	near
	pop	ecx
	cmp	eax,esi
	jne	near ptr equalntr
	mov	esp,ecx
equalntr	label	near
	ret
equal1	label	near
	cmp	ebx,edi
	jb	near ptr equaln
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	push	dword ptr [4+ebx]
	mov	ebx,dword ptr [ebx]
	dec	_itloop
	jz	near ptr l___1
l1___1:
	cmp	word ptr [itcount],0
	je 	short l__1
	cmp	word ptr [itstate],0 
	je 	short l__1
	call	near ptr ithard
l__1:
	cmp	eax,ebx
	jne	near ptr equal11
	pop	ebx
	pop	eax
	cmp	eax,edi
	jae	near ptr equal1
	jmp	near ptr equal2
equal11	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	call	near ptr equal2
	pop	ebx
	pop	eax
equal2	label	near
	cmp	eax,ebx
	jne	near ptr equal3
	ret
equal3	label	near
	cmp	eax,edi
	jae	near ptr equal1
	cmp	eax,esi
	jb	short lmac1062
	cmp	eax,edi
	jb	near ptr equaln
lmac1062:
	cmp	dword ptr [bvect],eax
	ja	short lmac1063
	cmp	dword ptr [bstrg],eax
	ja	near ptr equal7
lmac1063:
	cmp	dword ptr [bstrg],eax
	ja	short lmac1064
	cmp	eax,esi
	jb	near ptr equal8
lmac1064:
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr equal4
	cmp	dword ptr [bfloat],eax
	ja	near ptr equaln
	jmp	near ptr equal5
equal4	label	near
	cmp	dword ptr [bfloat],ebx
	ja	near ptr equaln
	cmp	dword ptr [bvect],ebx
	jbe	near ptr equaln
equal5	label	near
	push	ecx
	push	offset FLAT:equalnt
	jmp	near ptr gaeqn
equal7	label	near
	cmp	dword ptr [bvect],ebx
	ja	near ptr equaln
	cmp	dword ptr [bstrg],ebx
	jbe	near ptr equaln
	push	ecx
	push	offset FLAT:equalnt
	jmp	near ptr eqvectri
equal8	label	near
	cmp	dword ptr [bstrg],ebx
	ja	near ptr equaln
	cmp	ebx,esi
	jae	near ptr equaln
	push	ecx
	push	offset FLAT:equalnt
	jmp	near ptr eqstrgi
savequal	label	near
	push	ebx
	push	ecx
	call	near ptr equal
	pop	ecx
	pop	ebx
	ret
equal	endp

memq	proc	near
	cmp	ebx,edi
	jb	near ptr memq2
memq1	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,eax
	je	near ptr memq3
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jae	near ptr memq1
memq2	label	near
	mov	ebx,esi
memq3	label	near
	mov	eax,ebx
	ret
memq	endp

member	proc	near
	cmp	ebx,edi
	jae	near ptr memb1
	mov	eax,esi
	ret
memb1	label	near
	push	ebx
	push	eax
	mov	ebx,dword ptr [ebx]
	call	near ptr equal
	cmp	eax,esi
	jne	near ptr memb3
	pop	eax
	pop	ebx
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jae	near ptr memb1
	mov	eax,esi
	ret
memb3	label	near
	add	esp,4
	pop	eax
	ret
member	endp

tailp	proc	near
	jmp	near ptr tailp3
tailp2	label	near
	cmp	eax,ebx
	je	near ptr tailp9
	mov	ebx,dword ptr [4+ebx]
	dec	_itloop
	jz	near ptr l___2
l1___2:
	cmp	word ptr [itcount],0
	je 	short l__2
	cmp	word ptr [itstate],0 
	je 	short l__2
	call	near ptr ithard
l__2:
tailp3	label	near
	cmp	ebx,edi
	jae	near ptr tailp2
	mov	eax,esi
tailp9	label	near
	ret
tailp	endp

last	proc	near
	cmp	eax,edi
	jb	near ptr lastret
last1	label	near
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jb	near ptr lastret
	mov	eax,dword ptr [4+ebx]
	cmp	eax,edi
	jae	near ptr last1
	mov	eax,ebx
lastret	label	near
	ret
last	endp

nth	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr ntherr
	jmp	near ptr nth2
nth1	label	near
	mov	ebx,dword ptr [4+ebx]
nth2	label	near
	cmp	ebx,edi
	jb	near ptr nthf
	dec	ax
	jge	near ptr nth1
	mov	eax,dword ptr [ebx]
	ret
nthf	label	near
	mov	eax,esi
	ret
ntherr	label	near
	mov	ebx,dword ptr [znth]
	jmp	near ptr errnia
nth	endp

nthcdr	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr nthcerr
	jmp	near ptr nthc2
nthc1	label	near
	mov	ebx,dword ptr [4+ebx]
nthc2	label	near
	cmp	ebx,edi
	jb	near ptr nthcf
	dec	ax
	jge	near ptr nthc1
	mov	eax,ebx
	ret
nthcf	label	near
	mov	eax,esi
	ret
nthcerr	label	near
	mov	ebx,dword ptr [znthcdr]
	jmp	near ptr errnia
nthcdr	endp

lllength	proc	near
	xor	ebx,ebx
	cmp	eax,edi
	jb	near ptr lengt2
lengt1	label	near
	mov	eax,dword ptr [4+eax]
	inc	bx
	cmp	eax,edi
	jae	near ptr lengt1
lengt2	label	near
	mov	eax,ebx
	ret
lllength	endp

llcons	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
llcons	endp

fxcons	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
fxcons	endp

fncons	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
fncons	endp

mcons	proc	near
	or	dx,dx
	je	near ptr mconsf
	pop	eax
	jmp	near ptr mcons2
mcons1	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
mcons2	label	near
	dec	dx
	jg	near ptr mcons1
	ret
mconsf	label	near
	mov	eax,esi
	ret
mcons	endp

list	proc	near
	mov	eax,esi
	jmp	near ptr lists2
lists1	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
lists2	label	near
	dec	dx
	jge	near ptr lists1
	ret
list	endp

evlis	proc	near
	cmp	eax,edi
	jb	near ptr fntret
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	push	eax
list1	label	near
	cmp	ecx,edi
	jb	near ptr list2
	push	eax
	push	dword ptr [4+ecx]
	mov	eax,dword ptr [ecx]
	call	near ptr evala1
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ebx
	mov	dword ptr [4+ebx],eax
	jmp	near ptr list1
list2	label	near
	pop	eax
	ret
evlis	endp

kwote	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zquote]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
kwote	endp

makelist	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr makeler
	mov	ecx,esi
	jmp	near ptr makel3
makel2	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
makel3	label	near
	dec	ax
	jge	near ptr makel2
	mov	eax,ecx
	ret
makeler	label	near
	mov	ebx,dword ptr [zmakelist]
	jmp	near ptr errnia
makelist	endp

reverse	proc	near
	mov	ebx,esi
	jmp	near ptr rev2
rev1	label	near
	mov	ecx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
rev2	label	near
	cmp	eax,edi
	jae	near ptr rev1
	mov	eax,ebx
	ret
reverse	endp

appnd1	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__14
l1__14:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr append
appnd1	endp

append	proc	near
	or	dx,dx
	je	near ptr appendf
	pop	eax
	jmp	near ptr append4
append1	label	near
	pop	ebx
	cmp	ebx,edi
	jb	near ptr append4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__15
l1__15:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	push	eax
	jmp	near ptr append3
append2	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__16
l1__16:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [edi],ebp
	mov	ebp,dword ptr [4+eax]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [4+eax],ebp
	xchg	dword ptr [fcons],edi
	mov	eax,dword ptr [4+eax]
append3	label	near
	mov	ebx,dword ptr [4+ebx]
	dec	_itloop
	jz	near ptr l___17
l1___17:
	cmp	word ptr [itcount],0
	je 	short l__17
	cmp	word ptr [itstate],0 
	je 	short l__17
	call	near ptr ithard
l__17:
	cmp	ebx,edi
	jae	near ptr append2
	pop	eax
append4	label	near
	dec	dx
	jg	near ptr append1
	ret
appendf	label	near
	mov	eax,esi
	ret
append	endp

remq	proc	near
	cmp	ebx,edi
	jae	near ptr remq6
	mov	eax,ebx
	ret
remq6	label	near
	mov	ecx,dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	cmp	ecx,eax
	je	near ptr remq
	dec	_itloop
	jz	near ptr l___18
l1___18:
	cmp	word ptr [itcount],0
	je 	short l__18
	cmp	word ptr [itstate],0 
	je 	short l__18
	call	near ptr ithard
l__18:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	ecx
	call	near ptr remq
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__19
l1__19:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
remq	endp

llremove	proc	near
	mov	ecx,ebx
remv1	label	near
	cmp	ecx,edi
	jae	near ptr remv4
	mov	eax,ecx
	ret
remv4	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	eax
	mov	ebx,dword ptr [ecx]
	call	near ptr savequal
	mov	edx,eax
	pop	eax
	mov	ecx,dword ptr [4+ecx]
	cmp	edx,esi
	jne	near ptr remv1
	push	ebx
	call	near ptr remv1
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__20
l1__20:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
llremove	endp

copylist	proc	near
	cmp	eax,edi
	jb	near ptr fntret
	dec	_itloop
	jz	near ptr l___21
l1___21:
	cmp	word ptr [itcount],0
	je 	short l__21
	cmp	word ptr [itstate],0 
	je 	short l__21
	call	near ptr ithard
l__21:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	call	near ptr copylist
	xchg	dword ptr [esp],eax
	call	near ptr copylist
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__22
l1__22:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
copylist	endp

copy	proc	near
	dec	_itloop
	jz	near ptr l___23
l1___23:
	cmp	word ptr [itcount],0
	je 	short l__23
	cmp	word ptr [itstate],0 
	je 	short l__23
	call	near ptr ithard
l__23:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	cmp	eax,edi
	jb	near ptr copy3
	push	dword ptr [4+eax]
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jc	near ptr copy2
	mov	eax,dword ptr [eax]
	call	near ptr copy
	xchg	dword ptr [esp],eax
	call	near ptr copy
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__24
l1__24:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
copy2	label	near
	mov	eax,dword ptr [eax]
	call	near ptr copy
	xchg	dword ptr [esp],eax
	call	near ptr copy
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__25
l1__25:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bts	dword ptr [eax],ebp
	pop	eax
	ret
copy3	label	near
	cmp	dword ptr [bstrg],eax
	ja	near ptr copy4
	cmp	eax,esi
	jae	near ptr copy4
	push	eax
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	call	near ptr strgallc
	pop	ecx
	mov	ebp,dword ptr [4+ecx]
	mov	dword ptr [4+eax],ebp
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ecx]
	add	esi,8
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	jecxz	short l__26
	cmp	esi,edi
	jae	short l__26
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__26:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	ret
copy4	label	near
	cmp	dword ptr [bvect],eax
	ja	near ptr fntret
	cmp	dword ptr [bstrg],eax
	jbe	near ptr fntret
	push	eax
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	push	eax
	mov	ebx,esi
	call	near ptr makevect
	mov	ebx,eax
	pop	edx
	pop	ecx
	mov	ebp,dword ptr [4+ecx]
	mov	dword ptr [4+eax],ebp
	jmp	near ptr copy6
copy5	label	near
	push	edx
	push	ecx
	push	ebx
	mov	ebp,dword ptr [ecx]
	mov	eax,dword ptr [ebp+edx*4+8]
	call	near ptr copy
	pop	ebx
	pop	ecx
	pop	edx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+edx*4+8],eax
copy6	label	near
	dec	dx
	jge	near ptr copy5
	mov	eax,ebx
	ret
copy	endp

firstn	proc	near
	mov	edx,dword ptr [zfirstn]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr firserr1
	cmp	ebx,edi
	jb	near ptr firserr2
	or	ax,ax
	jle	near ptr firsf
	mov	ecx,dword ptr [ebx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__27
l1__27:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	push	ecx
	jmp	near ptr firs1
firs0	label	near
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jb	near ptr firs3
	mov	ecx,dword ptr [ebx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__28
l1__28:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	mov	dword ptr [4+edx],ecx
firs1	label	near
	mov	edx,ecx
	dec	ax
	jg	near ptr firs0
firs3	label	near
	pop	eax
	ret
firsf	label	near
	mov	eax,esi
	ret
firserr1	label	near
	mov	ebx,edx
	jmp	near ptr errnia
firserr2	label	near
	mov	eax,ebx
	ret
firstn	endp

lastn	proc	near
	mov	edx,dword ptr [zlastn]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr firserr1
	cmp	ebx,edi
	jb	near ptr firserr2
	or	ax,ax
	jle	near ptr lastnf
	mov	ecx,ebx
lastn0	label	near
	mov	ebx,dword ptr [4+ebx]
	or	ax,ax
	je	near ptr lastn1
	dec	ax
	jmp	near ptr lastn2
lastn1	label	near
	mov	ecx,dword ptr [4+ecx]
lastn2	label	near
	cmp	ebx,edi
	jae	near ptr lastn0
	push	ecx
	mov	eax,esi
	push	eax
	mov	edx,2
	jmp	near ptr append
lastnf	label	near
	mov	eax,esi
	ret
lastn	endp

subst	proc	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	eax
	mov	eax,ecx
	pop	ecx
substt2	label	near
	push	eax
	call	near ptr savequal
	cmp	eax,esi
	je	near ptr substt4
	pop	eax
	mov	eax,ecx
substt3	label	near
	ret
substt4	label	near
	pop	eax
	cmp	eax,edi
	jb	near ptr substt3
	push	eax
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	call	near ptr substt2
	xchg	dword ptr [esp],eax
	call	near ptr substt2
	pop	edx
	xchg	dword ptr [esp],ebx
	cmp	dword ptr [ebx],edx
	jne	near ptr substt8
	cmp	dword ptr [4+ebx],eax
	jne	near ptr substt8
	mov	eax,ebx
	pop	ebx
	ret
substt8	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__29
l1__29:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	pop	ebx
	ret
subst	endp

oblist	proc	near
	mov	eax,esi
	mov	ebx,esi
	or	dx,dx
	je	near ptr oblist0
	pop	ebx
	cmp	dx,1
	je	near ptr oblist0
	pop	ecx
	cmp	dx,2
	je	near ptr oblisp0
	mov	eax,2
	mov	ebx,dword ptr [zoblist]
	jmp	near ptr errwna
oblist0	label	near
	cmp	ebx,esi
	jb	near ptr obliser1
	cmp	ebx,edi
	jae	near ptr obliser1
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	dec	dx
oblist1	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [ebp+edx*4+8]
	jmp	near ptr oblist8
oblist2	label	near
	mov	ecx,edx
	mov	ebp,dword ptr [28+edx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac1065
	cmp	esi,ebp
	ja	near ptr oblist4
lmac1065:
oblist3	label	near
	mov	edx,dword ptr [28+edx]
oblist4	label	near
oblist5	label	near
	cmp	ebx,esi
	je	near ptr oblist6
	cmp	dword ptr [12+edx],ebx
	jne	near ptr oblist7
oblist6	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__30
l1__30:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
oblist7	label	near
	cmp	edx,ecx
	jne	near ptr oblist3
	mov	edx,dword ptr [20+edx]
oblist8	label	near
	cmp	edx,esi
	jb	short lmac1066
	cmp	edx,edi
	jb	near ptr oblist2
lmac1066:
	dec	dx
	jge	near ptr oblist1
	ret
oblisp0	label	near
	cmp	ebx,esi
	jb	near ptr obliser1
	cmp	ebx,edi
	jae	near ptr obliser1
	cmp	ecx,esi
	jb	near ptr obliser2
	cmp	ecx,edi
	jae	near ptr obliser2
	mov	edx,ebx
	mov	ebp,dword ptr [28+edx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac1067
	cmp	esi,ebp
	ja	near ptr oblisp3
lmac1067:
oblisp2	label	near
	mov	edx,dword ptr [28+edx]
oblisp3	label	near
	cmp	ecx,esi
	je	near ptr oblisp4
	cmp	dword ptr [12+edx],ecx
	jne	near ptr oblisp5
oblisp4	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__31
l1__31:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
oblisp5	label	near
	cmp	edx,ebx
	jne	near ptr oblisp2
	ret
obliser1	label	near
	mov	eax,ebx
	jmp	near ptr obliser3
obliser2	label	near
	mov	eax,ecx
obliser3	label	near
	mov	ebx,dword ptr [zoblist]
	jmp	near ptr errsym
oblist	endp

boblist	proc	near
	cmp	dx,1
	je	near ptr boblon
	or	dx,dx
	je	near ptr boblis1
	mov	eax,1
	mov	ebx,dword ptr [zboblist]
	jmp	near ptr errwna
boblis1	label	near
	mov	edx,esi
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	jmp	near ptr boblis9
boblis2	label	near
	push	eax
	call	near ptr boblon2
	cmp	dword ptr [fcons],edi
	jb	near ptr l__32
l1__32:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],edx
	xchg	edx,edi
	xchg	dword ptr [fcons],edi
	pop	eax
boblis9	label	near
	dec	ax
	jge	near ptr boblis2
	mov	eax,edx
	ret
boblon	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr boblon1
bobloer	label	near
	mov	ebx,dword ptr [zboblist]
	jmp	near ptr errnia
bobloer2	label	near
	mov	ebx,dword ptr [zboblist]
	jmp	near ptr erroob
boblon1	label	near
	or	ax,ax
	jl	near ptr bobloer2
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [4+ebp]
	cmp	ax,bx
	jge	near ptr bobloer2
boblon2	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	mov	eax,esi
	jmp	near ptr boblon8
boblon3	label	near
	cmp	ebx,dword ptr [zundef]
	je	near ptr boblon7
	mov	ebp,dword ptr [28+ebx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac1068
	cmp	esi,ebp
	ja	near ptr boblon6
lmac1068:
	push	edx
	mov	edx,esi
	mov	ecx,ebx
boblon4	label	near
	mov	ecx,dword ptr [28+ecx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__33
l1__33:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],edx
	xchg	edx,edi
	xchg	dword ptr [fcons],edi
	cmp	ecx,ebx
	jne	near ptr boblon4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__34
l1__34:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	pop	edx
	jmp	near ptr boblon7
boblon6	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__35
l1__35:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
boblon7	label	near
	mov	ebx,dword ptr [20+ebx]
boblon8	label	near
	cmp	ebx,esi
	jb	short lmac1069
	cmp	ebx,edi
	jb	near ptr boblon3
lmac1069:
	ret
boblist	endp

lhoblist	proc	near
	mov	ebx,eax
	mov	ebp,dword ptr [zlhoblist]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa2
	mov	eax,esi
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	dec	dx
lhoblist1	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [ebp+edx*4+8]
	jmp	near ptr lhoblist8
lhoblist2	label	near
	mov	ecx,edx
	mov	ebp,dword ptr [28+edx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac1070
	cmp	esi,ebp
	ja	near ptr lhoblist4
lmac1070:
lhoblist3	label	near
	mov	edx,dword ptr [28+edx]
lhoblist4	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	offset FLAT:lhoblist5
	push	ebx
	push	edx
	mov	edx,2
	jmp	near ptr ffindex
lhoblist5	label	near
	pop	edx
	pop	ecx
	pop	ebx
	cmp	eax,esi
	jne	near ptr lhoblist6
	pop	eax
	jmp	near ptr lhoblist7
lhoblist6	label	near
	pop	eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__36
l1__36:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
lhoblist7	label	near
	cmp	edx,ecx
	jne	near ptr lhoblist3
	mov	edx,dword ptr [20+edx]
lhoblist8	label	near
	cmp	edx,esi
	jb	short lmac1071
	cmp	edx,edi
	jb	near ptr lhoblist2
lmac1071:
	dec	dx
	jge	near ptr lhoblist1
	ret
lhoblist	endp

rplaca	proc	near
	cmp	eax,edi
	jb	near ptr rplaca1
	mov	dword ptr [eax],ebx
	ret
rplaca1	label	near
	mov	ebx,dword ptr [zrplaca]
	jmp	near ptr errnla
rplaca	endp

rplacd	proc	near
	cmp	eax,edi
	jb	near ptr rplacd1
	mov	dword ptr [4+eax],ebx
	ret
rplacd1	label	near
	mov	ebx,dword ptr [zrplacd]
	jmp	near ptr errnla
rplacd	endp

rplac	proc	near
	cmp	eax,edi
	jb	near ptr rplac1
	mov	dword ptr [eax],ebx
	mov	dword ptr [4+eax],ecx
	ret
rplac1	label	near
	mov	ebx,dword ptr [zrplac]
	jmp	near ptr errnla
rplac	endp

displace	proc	near
	cmp	eax,edi
	jb	near ptr displ2
	cmp	ebx,edi
	jae	near ptr displ1
	mov	ebp,dword ptr [zprogn]
	mov	dword ptr [eax],ebp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__37
l1__37:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	dword ptr [4+eax],ebx
	ret
displ1	label	near
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [4+ebx]
	mov	dword ptr [4+eax],ebp
	mov	ebp,ebx
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr displret
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bts	dword ptr [eax],ebp
	pop	eax
displret	label	near
	ret
displ2	label	near
	mov	ebx,dword ptr [zdisplace]
	jmp	near ptr errnla
displace	endp

placdl	proc	near
	cmp	eax,edi
	jb	near ptr placd1
	cmp	dword ptr [fcons],edi
	jb	near ptr l__38
l1__38:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	dword ptr [4+eax],ebx
	mov	eax,ebx
	ret
placd1	label	near
	mov	ebx,dword ptr [zplacdl]
	jmp	near ptr errnla
placdl	endp

setq	proc	near
	mov	ebx,eax
	cmp	ebx,edi
	jae	near ptr setq1
	ret
setq1	label	near
	mov	eax,ebx
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jb	near ptr setqer2
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	pop	ecx
	cmp	dword ptr [bvar],ecx
	ja	near ptr setqer1
	cmp	ecx,edi
	jae	near ptr setqer1
	mov	dword ptr [ecx],eax
	cmp	ebx,edi
	jae	near ptr setq1
	ret
setqer1	label	near
	mov	eax,ecx
	mov	ebx,dword ptr [zsetq]
	jmp	near ptr errnva
setqer2	label	near
	mov	eax,2
	mov	ebx,dword ptr [zsetq]
	jmp	near ptr errwna
setq	endp

fset	proc	near
	cmp	dword ptr [bvar],eax
	ja	near ptr seterr
	cmp	eax,edi
	jae	near ptr seterr
	mov	dword ptr [eax],ebx
	mov	eax,ebx
	ret
seterr	label	near
	mov	ebx,dword ptr [zfset]
	jmp	near ptr errnva
fset	endp

setqq	proc	near
	mov	ecx,esi
	jmp	near ptr setqq3
setqq1	label	near
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bvar],ebx
	ja	near ptr setqqer1
	cmp	ebx,edi
	jae	near ptr setqqer1
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jb	near ptr setqqer2
	mov	ecx,dword ptr [eax]
	mov	dword ptr [ebx],ecx
	mov	eax,dword ptr [4+eax]
setqq3	label	near
	cmp	eax,edi
	jae	near ptr setqq1
	mov	eax,ecx
	ret
setqqer1	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zsetqq]
	jmp	near ptr errnva
setqqer2	label	near
	mov	eax,2
	mov	ebx,dword ptr [zsetqq]
	jmp	near ptr errwna
setqq	endp

psetq	proc	near
	xor	edx,edx
	jmp	near ptr psetq5
psetq2	label	near
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bvar],ebx
	ja	near ptr psetqerr
	cmp	ebx,edi
	jae	near ptr psetqerr
	push	ebx
	mov	eax,dword ptr [4+eax]
	push	eax
	push	edx
	call	near ptr evalcar
	pop	edx
	xchg	dword ptr [esp],eax
	mov	eax,dword ptr [4+eax]
	inc	dx
psetq5	label	near
	cmp	eax,edi
	jae	near ptr psetq2
	jmp	near ptr psetq4
psetq3	label	near
	pop	eax
	pop	ebx
	mov	dword ptr [ebx],eax
psetq4	label	near
	dec	dx
	jge	near ptr psetq3
	ret
psetqerr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zpsetq]
	jmp	near ptr errnva
psetq	endp

deset	proc	near
	mov	edx,dword ptr [zdeset]
deset0	label	near
	mov	dword ptr [savea4],edx
	call	near ptr deset4
	mov	eax,dword ptr [zt]
	ret
deset2	label	near
	cmp	ebx,edi
	jb	near ptr deset6
	push	dword ptr [4+eax]
	push	dword ptr [4+ebx]
	mov	eax,dword ptr [eax]
	mov	ebx,dword ptr [ebx]
	call	near ptr deset5
	pop	ebx
	pop	eax
deset4	label	near
	cmp	eax,esi
	je	near ptr fntret
deset5	label	near
	cmp	eax,edi
	jae	near ptr deset2
	cmp	dword ptr [bvar],eax
	ja	short lmac1072
	cmp	eax,edi
	jb	near ptr deset8
lmac1072:
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errbpa
deset6	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__39
l1__39:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__40
l1__40:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errilb
deset8	label	near
	mov	dword ptr [eax],ebx
	ret
deset	endp

desetq	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	call	near ptr evalcar
	mov	ebx,eax
	pop	eax
	mov	edx,dword ptr [zdesetq]
	jmp	near ptr deset0
desetq	endp

cirlist	proc	near
	or	dx,dx
	je	near ptr cirlistf
	pop	eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__41
l1__41:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ecx,eax
	jmp	near ptr cirlist3
cirlist2	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__42
l1__42:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
cirlist3	label	near
	dec	dx
	jg	near ptr cirlist2
	mov	dword ptr [4+ecx],eax
	ret
cirlistf	label	near
	mov	eax,esi
	ret
cirlist	endp

nreconc	proc	near
	jmp	near ptr frev2
frev1	label	near
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],ebx
	cmp	ecx,edi
	jb	near ptr frevret
	mov	ebx,dword ptr [4+ecx]
	mov	dword ptr [4+ecx],eax
	cmp	ebx,edi
	jb	near ptr frev9
	mov	eax,dword ptr [4+ebx]
	mov	dword ptr [4+ebx],ecx
frev2	label	near
	cmp	eax,edi
	jae	near ptr frev1
	mov	eax,ebx
	ret
frev9	label	near
	mov	eax,ecx
frevret	label	near
	ret
nreconc	endp

nsubst	proc	near
	mov	edx,eax
nsloop	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	ecx
	mov	eax,ecx
	push	edx
	call	near ptr savequal
	pop	edx
	cmp	eax,esi
	je	near ptr nsub0
	mov	eax,edx
	pop	ecx
	ret
nsub2	label	near
	mov	ecx,dword ptr [4+ecx]
	dec	_itloop
	jz	near ptr l___43
l1___43:
	cmp	word ptr [itcount],0
	je 	short l__43
	cmp	word ptr [itstate],0 
	je 	short l__43
	call	near ptr ithard
l__43:
nsub0	label	near
	cmp	ecx,edi
	jb	near ptr nsubret
	push	ecx
	mov	ecx,dword ptr [ecx]
	call	near ptr nsloop
	pop	ecx
	mov	dword ptr [ecx],eax
nsub1	label	near
	mov	eax,dword ptr [4+ecx]
	push	edx
	call	near ptr savequal
	pop	edx
	cmp	eax,esi
	je	near ptr nsub2
nsub3	label	near
	mov	dword ptr [4+ecx],edx
nsubret	label	near
	pop	eax
	ret
nsubst	endp

delq	proc	near
delq0	label	near
	cmp	ebx,edi
	jb	near ptr delqret
	cmp	dword ptr [ebx],eax
	jne	near ptr delq1
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr delq0
delq1	label	near
	mov	edx,ebx
delq2	label	near
	mov	ecx,edx
delq3	label	near
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jb	near ptr delqret
	cmp	dword ptr [edx],eax
	jne	near ptr delq2
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [4+ecx],ebp
	dec	_itloop
	jz	near ptr l___44
l1___44:
	cmp	word ptr [itcount],0
	je 	short l__44
	cmp	word ptr [itstate],0 
	je 	short l__44
	call	near ptr ithard
l__44:
	jmp	near ptr delq3
delqret	label	near
	mov	eax,ebx
	ret
delq	endp

lldelete	proc	near
	jmp	near ptr dele4
dele0	label	near
	push	eax
	mov	ebx,dword ptr [ebx]
	call	near ptr equal
	cmp	eax,esi
	je	near ptr dele1
	pop	eax
	pop	ebx
	mov	ebx,dword ptr [4+ebx]
dele4	label	near
	push	ebx
	cmp	ebx,edi
	jae	near ptr dele0
deleret	label	near
	pop	eax
	ret
dele1	label	near
	pop	ebx
	mov	edx,dword ptr [esp]
dele2	label	near
	mov	ecx,edx
dele3	label	near
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jb	near ptr deleret
	mov	eax,dword ptr [edx]
	push	edx
	call	near ptr savequal
	pop	edx
	cmp	eax,esi
	je	near ptr dele2
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [4+ecx],ebp
	dec	_itloop
	jz	near ptr l___45
l1___45:
	cmp	word ptr [itcount],0
	je 	short l__45
	cmp	word ptr [itstate],0 
	je 	short l__45
	call	near ptr ithard
l__45:
	jmp	near ptr dele3
lldelete	endp

nreverse	proc	near
	mov	ebx,esi
	cmp	eax,edi
	jb	near ptr nrev2
nrev1	label	near
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],ebx
	cmp	ecx,edi
	jb	near ptr nrev9
	mov	ebx,dword ptr [4+ecx]
	mov	dword ptr [4+ecx],eax
	cmp	ebx,edi
	jb	near ptr nrev3
	mov	eax,dword ptr [4+ebx]
	mov	dword ptr [4+ebx],ecx
	cmp	eax,edi
	jae	near ptr nrev1
nrev2	label	near
	mov	eax,ebx
	ret
nrev3	label	near
	mov	eax,ecx
nrev9	label	near
	ret
nreverse	endp

nextl	proc	near
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bvar],ebx
	ja	near ptr nextlerr
	cmp	ebx,edi
	jae	near ptr nextlerr
	push	dword ptr [4+eax]
	mov	ecx,dword ptr [ebx]
	cmp	ecx,edi
	jae	near ptr nextl4
	cmp	ecx,esi
	je	near ptr nextl4
	mov	eax,ebx
	mov	ebx,dword ptr [znextl]
	jmp	near ptr errnla
nextl4	label	near
	mov	eax,dword ptr [ecx]
	mov	ecx,dword ptr [4+ecx]
	mov	dword ptr [ebx],ecx
	pop	ebx
	cmp	ebx,edi
	jb	near ptr nextl9
	mov	ebx,dword ptr [ebx]
	cmp	dword ptr [bvar],ebx
	ja	near ptr nextlerr
	cmp	ebx,edi
	jae	near ptr nextlerr
	mov	dword ptr [ebx],eax
nextl9	label	near
	ret
nextlerr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [znextl]
	jmp	near ptr errnva
nextl	endp

newl	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	cmp	dword ptr [bvar],ebx
	ja	near ptr newlerr
	cmp	ebx,edi
	jae	near ptr newlerr
	mov	ecx,dword ptr [ebx]
	cmp	ecx,dword ptr [zundef]
	je	near ptr newlerr1
	cmp	dword ptr [fcons],edi
	jb	near ptr l__46
l1__46:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ecx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	dword ptr [ebx],eax
	ret
newlerr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [znewl]
	jmp	near ptr errnva
newlerr1	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [znewl]
	jmp	near ptr errudv
newl	endp

newr	proc	near
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bvar],ebx
	ja	near ptr newrerr
	cmp	ebx,edi
	jae	near ptr newrerr
	push	ebx
	mov	eax,dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	mov	ecx,dword ptr [ebx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__47
l1__47:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	ecx,edi
	jae	near ptr newr3
	mov	dword ptr [ebx],eax
	jmp	near ptr newr9
newr3	label	near
	push	ecx
	jmp	near ptr newr6
newr4	label	near
	mov	ecx,edx
newr6	label	near
	mov	edx,dword ptr [4+ecx]
	cmp	edx,edi
	jae	near ptr newr4
	mov	dword ptr [4+ecx],eax
	pop	eax
newr9	label	near
	ret
newrerr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [znewr]
	jmp	near ptr errnva
newr	endp

nconc1	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__48
l1__48:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr nconc
	nop
nconc1	endp

nconc	proc	near
	or	dx,dx
	je	near ptr fnconcf
	pop	eax
	jmp	near ptr fnconc4
fnconc1	label	near
	mov	ebx,dword ptr [esp]
	cmp	ebx,edi
	jae	near ptr fnconc3
	pop	ebx
	jmp	near ptr fnconc4
fnconc2	label	near
	mov	ebx,dword ptr [4+ebx]
	dec	_itloop
	jz	near ptr l___49
l1___49:
	cmp	word ptr [itcount],0
	je 	short l__49
	cmp	word ptr [itstate],0 
	je 	short l__49
	call	near ptr ithard
l__49:
fnconc3	label	near
	cmp	dword ptr [4+ebx],edi
	jae	near ptr fnconc2
	mov	dword ptr [4+ebx],eax
	pop	eax
fnconc4	label	near
	dec	dx
	jg	near ptr fnconc1
	ret
fnconcf	label	near
	mov	eax,esi
	ret
nconc	endp

acons	proc	near
	push	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__50
l1__50:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__51
l1__51:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
acons	endp

pairlis	proc	near
	mov	edx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__52
l1__52:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],edx
	mov	edx,esi
	xchg	dword ptr [4+ebp],edx
	xchg	dword ptr [fcons],edx
	push	edx
	push	ecx
	jmp	near ptr pairlis5
pairlis2	label	near
	mov	ecx,dword ptr [ebx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__53
l1__53:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [eax]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__54
l1__54:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	mov	dword ptr [4+edx],ecx
	mov	edx,ecx
	mov	eax,dword ptr [4+eax]
	mov	ebx,dword ptr [4+ebx]
pairlis5	label	near
	cmp	eax,edi
	jb	near ptr pairlis8
	cmp	ebx,edi
	jae	near ptr pairlis2
	cmp	ebx,esi
	je	near ptr pairlis2
	mov	eax,ebx
	mov	ebx,dword ptr [zpairlis]
	jmp	near ptr errnla
pairlis8	label	near
	pop	eax
	mov	dword ptr [4+edx],eax
	pop	eax
	mov	eax,dword ptr [4+eax]
	ret
pairlis	endp

assq	proc	near
	cmp	ebx,edi
	jb	near ptr assq3
	mov	ecx,eax
assq1	label	near
	mov	eax,dword ptr [ebx]
	cmp	eax,edi
	jb	near ptr assq2
	mov	edx,dword ptr [eax]
	cmp	edx,ecx
	je	near ptr assqret
assq2	label	near
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jae	near ptr assq1
assq3	label	near
	mov	eax,esi
assqret	label	near
	ret
assq	endp

assoc	proc	near
	cmp	ebx,edi
	jae	near ptr asso1
	mov	eax,esi
	ret
asso1	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,edi
	jb	near ptr asso5
	push	eax
	push	ebx
	mov	ebx,dword ptr [ecx]
	push	ecx
	call	near ptr equal
	cmp	eax,esi
	jne	near ptr asso9
	add	esp,4
	pop	ebx
	pop	eax
asso5	label	near
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jae	near ptr asso1
	mov	eax,esi
	ret
asso9	label	near
	pop	eax
	add	esp,8
	ret
assoc	endp

cassq	proc	near
	jmp	near ptr cassq3
cassq1	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,edi
	jb	near ptr cassq2
	mov	edx,dword ptr [ecx]
	cmp	edx,eax
	je	near ptr cassq4
cassq2	label	near
	mov	ebx,dword ptr [4+ebx]
cassq3	label	near
	cmp	ebx,edi
	jae	near ptr cassq1
	mov	eax,esi
	ret
cassq4	label	near
	mov	eax,dword ptr [4+ecx]
	ret
cassq	endp

cassoc	proc	near
	jmp	near ptr casso8
casso1	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,edi
	jb	near ptr casso5
	push	eax
	push	ebx
	mov	ebx,dword ptr [ecx]
	push	ecx
	call	near ptr equal
	cmp	eax,esi
	jne	near ptr casso9
	add	esp,4
	pop	ebx
	pop	eax
casso5	label	near
	mov	ebx,dword ptr [4+ebx]
casso8	label	near
	cmp	ebx,edi
	jae	near ptr casso1
	mov	eax,esi
	ret
casso9	label	near
	pop	eax
	mov	eax,dword ptr [4+eax]
	add	esp,8
	ret
cassoc	endp

rassq	proc	near
	cmp	ebx,edi
	jb	near ptr rassq3
	mov	ecx,eax
rassq1	label	near
	mov	eax,dword ptr [ebx]
	cmp	eax,edi
	jb	near ptr rassq2
	mov	edx,dword ptr [4+eax]
	cmp	edx,ecx
	je	near ptr rassqret
rassq2	label	near
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jae	near ptr rassq1
rassq3	label	near
	mov	eax,esi
rassqret	label	near
	ret
rassq	endp

rassoc	proc	near
	jmp	near ptr rasso8
rasso1	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,edi
	jb	near ptr rasso5
	push	eax
	push	ebx
	mov	ebx,dword ptr [4+ecx]
	push	ecx
	call	near ptr equal
	cmp	eax,esi
	jne	near ptr rasso9
	add	esp,4
	pop	ebx
	pop	eax
rasso5	label	near
	mov	ebx,dword ptr [4+ebx]
rasso8	label	near
	cmp	ebx,edi
	jae	near ptr rasso1
	mov	eax,esi
	ret
rasso9	label	near
	pop	eax
	add	esp,8
	ret
rassoc	endp

sublis	proc	near
	cmp	ebx,edi
	jae	near ptr sublis5
	push	ebx
	mov	ebx,eax
	mov	eax,dword ptr [esp]
	call	near ptr assq
	cmp	eax,esi
	je	near ptr sublis2
	pop	ebx
	mov	eax,dword ptr [4+eax]
	ret
sublis2	label	near
	pop	eax
	ret
sublis5	label	near
	dec	_itloop
	jz	near ptr l___55
l1___55:
	cmp	word ptr [itcount],0
	je 	short l__55
	cmp	word ptr [itstate],0 
	je 	short l__55
	call	near ptr ithard
l__55:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	eax
	push	ebx
	mov	ebx,dword ptr [ebx]
	call	near ptr sublis
	pop	ebx
	xchg	dword ptr [esp],eax
	push	ebx
	mov	ebx,dword ptr [4+ebx]
	call	near ptr sublis
	pop	ecx
	pop	ebx
	cmp	eax,dword ptr [4+ecx]
	jne	near ptr sublis8
	cmp	ebx,dword ptr [ecx]
	jne	near ptr sublis8
	mov	eax,ecx
	ret
sublis8	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__56
l1__56:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
l___55:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___55
l___49:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___49
l___45:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___45
l___44:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___44
l___43:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___43
l___23:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___23
l___21:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___21
l___18:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___18
l___17:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___17
l___2:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___2
l___1:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ll_intest
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr l1___1
l__56:
	call	near ptr gccons
	jmp	near ptr l1__56
l__54:
	call	near ptr gccons
	jmp	near ptr l1__54
l__53:
	call	near ptr gccons
	jmp	near ptr l1__53
l__52:
	call	near ptr gccons
	jmp	near ptr l1__52
l__51:
	call	near ptr gccons
	jmp	near ptr l1__51
l__50:
	call	near ptr gccons
	jmp	near ptr l1__50
l__48:
	call	near ptr gccons
	jmp	near ptr l1__48
l__47:
	call	near ptr gccons
	jmp	near ptr l1__47
l__46:
	call	near ptr gccons
	jmp	near ptr l1__46
l__42:
	call	near ptr gccons
	jmp	near ptr l1__42
l__41:
	call	near ptr gccons
	jmp	near ptr l1__41
l__40:
	call	near ptr gccons
	jmp	near ptr l1__40
l__39:
	call	near ptr gccons
	jmp	near ptr l1__39
l__38:
	call	near ptr gccons
	jmp	near ptr l1__38
l__37:
	call	near ptr gccons
	jmp	near ptr l1__37
l__36:
	call	near ptr gccons
	jmp	near ptr l1__36
l__35:
	call	near ptr gccons
	jmp	near ptr l1__35
l__34:
	call	near ptr gccons
	jmp	near ptr l1__34
l__33:
	call	near ptr gccons
	jmp	near ptr l1__33
l__32:
	call	near ptr gccons
	jmp	near ptr l1__32
l__31:
	call	near ptr gccons
	jmp	near ptr l1__31
l__30:
	call	near ptr gccons
	jmp	near ptr l1__30
l__29:
	call	near ptr gccons
	jmp	near ptr l1__29
l__28:
	call	near ptr gccons
	jmp	near ptr l1__28
l__27:
	call	near ptr gccons
	jmp	near ptr l1__27
l__25:
	call	near ptr gccons
	jmp	near ptr l1__25
l__24:
	call	near ptr gccons
	jmp	near ptr l1__24
l__22:
	call	near ptr gccons
	jmp	near ptr l1__22
l__20:
	call	near ptr gccons
	jmp	near ptr l1__20
l__19:
	call	near ptr gccons
	jmp	near ptr l1__19
l__16:
	call	near ptr gccons
	jmp	near ptr l1__16
l__15:
	call	near ptr gccons
	jmp	near ptr l1__15
l__14:
	call	near ptr gccons
	jmp	near ptr l1__14
l__13:
	call	near ptr gccons
	jmp	near ptr l1__13
l__12:
	call	near ptr gccons
	jmp	near ptr l1__12
l__11:
	call	near ptr gccons
	jmp	near ptr l1__11
l__10:
	call	near ptr gccons
	jmp	near ptr l1__10
l__9:
	call	near ptr gccons
	jmp	near ptr l1__9
l__8:
	call	near ptr gccons
	jmp	near ptr l1__8
l__7:
	call	near ptr gccons
	jmp	near ptr l1__7
l__6:
	call	near ptr gccons
	jmp	near ptr l1__6
l__5:
	call	near ptr gccons
	jmp	near ptr l1__5
l__4:
	call	near ptr gccons
	jmp	near ptr l1__4
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
sublis	endp
_TEXT	ends
	end
