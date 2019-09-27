	.386p
	.387

	include	eval.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	eval.equ
ini_eval	proc	near
	mov	ebp,dword ptr [zsyspkgc]
	mov	dword ptr [cpkgc],ebp
	mov	eax,6
	mov	ebx,offset FLAT:pnmac946
	mov	ecx,offset FLAT:zsysits
	call	near ptr inicst
	mov	dword ptr [cpkgc],esi
	mov	eax,4
	mov	ebx,offset FLAT:pnmac947
	mov	ecx,offset FLAT:eval000
	mov	edx,offset FLAT:zeval000
	push	z_eval000
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac948
	mov	ecx,offset FLAT:evalwhen
	mov	edx,offset FLAT:zevalwhen
	push	z_evalwhen
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac949
	mov	ecx,offset FLAT:symeval
	mov	edx,offset FLAT:zsymeval
	push	z_symeval
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac950
	mov	ecx,offset FLAT:llarg
	mov	edx,offset FLAT:zllarg
	push	z_llarg
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac951
	mov	ecx,offset FLAT:znobind
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac952
	mov	ecx,offset FLAT:traceval
	mov	edx,offset FLAT:ztraceval
	push	z_traceval
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac953
	mov	ecx,offset FLAT:stepeval
	mov	edx,offset FLAT:zstepeval
	push	z_stepeval
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac954
	mov	ecx,offset FLAT:uapply
	mov	edx,offset FLAT:zuapply
	push	z_uapply
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac955
	mov	ecx,offset FLAT:funcall
	mov	edx,offset FLAT:zfuncall
	push	z_funcall
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac956
	mov	ecx,offset FLAT:tag
	mov	edx,offset FLAT:ztag
	push	z_tag
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac957
	mov	ecx,offset FLAT:evtag
	mov	edx,offset FLAT:zevtag
	push	z_evtag
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac958
	mov	ecx,offset FLAT:untlxit
	mov	edx,offset FLAT:zuntlxit
	push	z_untlxit
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac959
	mov	ecx,offset FLAT:ffexit
	mov	edx,offset FLAT:zffexit
	push	z_ffexit
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac960
	mov	ecx,offset FLAT:evexit
	mov	edx,offset FLAT:zevexit
	push	z_evexit
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac961
	mov	ecx,offset FLAT:unwind
	mov	edx,offset FLAT:zunwind
	push	z_unwind
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac962
	mov	ecx,offset FLAT:unexit
	mov	edx,offset FLAT:zunexit
	push	z_unexit
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac963
	mov	ecx,offset FLAT:llock
	mov	edx,offset FLAT:zllock
	push	z_llock
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac964
	mov	ecx,offset FLAT:protect
	mov	edx,offset FLAT:zprotect
	push	z_protect
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac965
	mov	ecx,offset FLAT:let
	mov	edx,offset FLAT:zlet
	push	z_let
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac966
	mov	ecx,offset FLAT:letseq
	mov	edx,offset FLAT:zletseq
	push	z_letseq
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac967
	mov	ecx,offset FLAT:letv
	mov	edx,offset FLAT:zletv
	push	z_letv
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac968
	mov	ecx,offset FLAT:letvq
	mov	edx,offset FLAT:zletvq
	push	z_letvq
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac969
	mov	ecx,offset FLAT:flet
	mov	edx,offset FLAT:zflet
	push	z_flet
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac970
	mov	ecx,offset FLAT:function
	mov	edx,offset FLAT:zfunction
	push	z_function
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac971
	mov	ecx,offset FLAT:zclosure
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac972
	mov	ecx,offset FLAT:zrarrow
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac973
	mov	ecx,offset FLAT:zlarrow
	call	near ptr inicst
	mov	dword ptr [evalst],esi
	mov	dword ptr [llink],esi
	ret
ini_eval	endp

eval000	proc	near
	cmp	dx,1
	je	near ptr evalu2
	cmp	dx,2
	je	near ptr evalu1
	mov	eax,1
	mov	ebx,dword ptr [zeval000]
	jmp	near ptr errwna
evalu1	label	near
	pop	ebx
	pop	eax
	push	dword ptr [llink]
	mov	dword ptr [llink],ebx
	jmp	near ptr evalu3
evalu2	label	near
	pop	eax
	push	dword ptr [llink]
	mov	dword ptr [llink],esi
evalu3	label	near
	mov	ecx,offset FLAT:evala1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [llink]
	jmp	ecx
evalc	label	near
	mov	eax,dword ptr [eax]
	push	eax
	mov	edx,1
	jmp	near ptr eval000
eval000	endp

evalwhen	proc	near
	cmp	eax,edi
	jb	near ptr evwhen3
	mov	edx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	mov	ecx,dword ptr [zeval000]
	jmp	near ptr evwhen2
evwhen1	label	near
	mov	ebx,dword ptr [eax]
	cmp	ebx,ecx
	je	near ptr evwhen4
	mov	eax,dword ptr [4+eax]
evwhen2	label	near
	cmp	eax,edi
	jae	near ptr evwhen1
evwhen3	label	near
	mov	eax,esi
	ret
evwhen4	label	near
	mov	eax,edx
	mov	ebp,dword ptr [zevalwhen]
	mov	dword ptr [errname],ebp
	dec	_itloop
	jz	near ptr l___1
l1___1:
	cmp	word ptr [itcount],0
	je 	short l__1
	cmp	word ptr [itstate],0 
	je 	short l__1
	call	near ptr ithard
l__1:
	jmp	near ptr evprogn
evalwhen	endp

symeval	proc	near
	cmp	eax,esi
	jb	near ptr symeval1
	cmp	eax,edi
	jae	near ptr symeval1
	mov	ebx,eax
	mov	eax,dword ptr [eax]
	cmp	eax,dword ptr [zundef]
	je	near ptr symeval2
	ret
symeval1	label	near
	mov	ebx,dword ptr [zsymeval]
	jmp	near ptr errsym
symeval2	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zsymeval]
	jmp	near ptr errudv
symeval	endp

llarg	proc	near
	or	edx,edx
	je	near ptr llarget
	cmp	edx,1
	je	near ptr llarg1
	mov	eax,1
	mov	ebx,dword ptr [zllarg]
	jmp	near ptr errwna
llarg1	label	near
	call	near ptr llarget
	pop	ebx
	sub	ax,bx
	lea	edx,dword ptr [edx+eax*4]
	mov	eax,dword ptr [edx]
	ret
llarget	label	near
	mov	edx,dword ptr [dlink]
	mov	eax,dword ptr [edx]
	add	edx,4
	cmp	eax,offset FLAT:unbind1
	jne	near ptr llarger
	add	edx,12
	mov	eax,dword ptr [edx]
	add	edx,4
	cmp	eax,dword ptr [znobind]
	jne	near ptr llarger
	mov	eax,dword ptr [edx]
	ret
llarger	label	near
	mov	ebx,dword ptr [zllarg]
	mov	eax,esi
	jmp	near ptr errnab
llarg	endp

traceval	proc	near
	cmp	dx,1
	je	near ptr tracev1
	cmp	dx,2
	je	near ptr tracev2
	mov	eax,1
	mov	ebx,dword ptr [ztraceval]
	jmp	near ptr errwna
tracev1	label	near
	pop	eax
	mov	ebx,esi
	jmp	near ptr tracev3
tracev2	label	near
	pop	ebx
	pop	eax
tracev3	label	near
	push	esi
	push	dword ptr [savea4]
	push	dword ptr [savea3]
	push	dword ptr [savea2]
	push	dword ptr [savea1]
	push	dword ptr [funct]
	push	dword ptr [forme]
	push	dword ptr [evalst]
	mov	ebp,dword ptr [zt]
	mov	dword ptr [evalst],ebp
	push	dword ptr [zstepeval]
	push	dword ptr [llink]
	mov	dword ptr [llink],ebx
	push	dword ptr [dlink]
	push	offset FLAT:unbind4
	mov	dword ptr [dlink],esp
	jmp	near ptr evalan
traceval	endp

stepeval	proc	near
	cmp	edx,1
	je	near ptr stepev1
	cmp	edx,2
	je	near ptr stepev2
	mov	eax,1
	mov	ebx,dword ptr [zstepeval]
	jmp	near ptr errwna
stepev1	label	near
	pop	eax
	push	offset FLAT:stepevr
	push	eax
	push	esi
	jmp	near ptr stepev3
stepev2	label	near
	pop	ebx
	pop	eax
	push	offset FLAT:stepevr
	push	eax
	push	ebx
stepev3	label	near
	mov	eax,dword ptr [zrarrow]
	call	near ptr probj
	mov	eax,dword ptr [esp+4]
	call	near ptr probjt
	mov	edx,2
	jmp	near ptr traceval
stepevr	label	near
	push	eax
	mov	eax,dword ptr [zlarrow]
	call	near ptr probj
	mov	eax,dword ptr [esp]
	call	near ptr probjt
	pop	eax
	ret
evalt	label	near
	mov	ebx,dword ptr [llink]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	mov	eax,dword ptr [zstepeval]
	call	near ptr llitsoft
	mov	ebp,dword ptr [zt]
	mov	dword ptr [evalst],ebp
	ret
popj	label	near
	ret
evalcar	label	near
	mov	eax,dword ptr [eax]
	cmp	dword ptr [evalst],esi
	jne	near ptr evalt
	jmp	near ptr evalan
evala1	label	near
	cmp	dword ptr [evalst],esi
	jne	near ptr evalt
	jmp	near ptr evalan
evalan	label	near
	cmp	eax,edi
	jae	near ptr evalis
	cmp	dword ptr [bfloat],eax
	jbe	near ptr evalat
	ret
evalis	label	near
	dec	_itloop
	jz	near ptr l___4
l1___4:
	cmp	word ptr [itcount],0
	je 	short l__4
	cmp	word ptr [itstate],0 
	je 	short l__4
	call	near ptr ithard
l__4:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	dword ptr [forme],eax
	mov	ebx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	ebx,esi
	jb	near ptr evalfv
	cmp	ebx,edi
	jae	near ptr evalfv
	mov	ecx,dword ptr [8+ebx]
	movzx	edx,word ptr [24+ebx]
	jmp	dword ptr cs:[edx*4+teval]
teval	dd	offset FLAT:udfer
	dd	offset FLAT:eval0
	dd	offset FLAT:eval1
	dd	offset FLAT:eval2
	dd	offset FLAT:eval3
	dd	offset FLAT:evaln
	dd	offset FLAT:evalf
	dd	offset FLAT:evexp
	dd	offset FLAT:evfexp
	dd	offset FLAT:evmac
	dd	offset FLAT:evdmac
	dd	offset FLAT:evalm
	dd	offset FLAT:evaldm
evalat	label	near
	cmp	eax,esi
	jb	near ptr evothat
	cmp	eax,edi
	jae	near ptr evothat
	mov	ebx,eax
	mov	eax,dword ptr [eax]
	cmp	eax,dword ptr [zundef]
	je	near ptr evalera8
	ret
evalera8	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zeval000]
	jmp	near ptr errudv
evothat	label	near
	cmp	dword ptr [bstrg],eax
	ja	short lmac974
	cmp	eax,esi
	jb	near ptr evextyp
lmac974:
	cmp	dword ptr [bvect],eax
	ja	short lmac975
	cmp	dword ptr [bstrg],eax
	ja	near ptr evextyp
lmac975:
	ret
evextyp	label	near
	push	eax
	mov	eax,dword ptr [4+eax]
	cmp	eax,esi
	jb	near ptr evextypr
	cmp	eax,edi
	jae	near ptr evextypr
	mov	ebx,dword ptr [zeval000]
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	je	near ptr evextypr
	mov	edx,1
	jmp	near ptr ffuncall
evextypr	label	near
	pop	eax
	ret
eval0	label	near
	cmp	eax,esi
	jne	near ptr wnaer0
	jmp	ecx
eval1	label	near
	push	ecx
	cmp	eax,edi
	jb	near ptr wnaer1
	cmp	dword ptr [4+eax],esi
	jne	near ptr wnaer1d
	jmp	near ptr evalcar
eval2	label	near
	push	ecx
	cmp	eax,edi
	jb	near ptr wnaer2
	mov	ecx,dword ptr [4+eax]
	cmp	ecx,edi
	jb	near ptr wnaer23
	push	dword ptr [ecx]
	cmp	dword ptr [4+ecx],esi
	jne	near ptr wnaer23d
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	call	near ptr evala1
	mov	ebx,eax
	pop	eax
	ret
eval3	label	near
	push	ecx
	cmp	eax,edi
	jb	near ptr wnaer3
	push	dword ptr [4+eax]
	push	ebx
	call	near ptr evalcar
	pop	ebx
	xchg	dword ptr [esp],eax
	cmp	eax,edi
	jb	near ptr wnaer3
	push	dword ptr [4+eax]
	push	ebx
	call	near ptr evalcar
	pop	ebx
	xchg	dword ptr [esp],eax
	cmp	eax,edi
	jb	near ptr wnaer3
	cmp	dword ptr [4+eax],esi
	jne	near ptr wnaer3d
	call	near ptr evalcar
	mov	ecx,eax
	pop	ebx
	pop	eax
	ret
evaln	label	near
	cmp	eax,edi
	jae	near ptr evalns0
	cmp	eax,esi
	jne	near ptr evbal
	xor	edx,edx
	jmp	ecx
evalns0	label	near
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr evalns1
	cmp	ebx,esi
	jne	near ptr evbal2
	push	ecx
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	mov	edx,1
	jmp	eax
evalns1	label	near
	push	ebx
	push	ecx
	call	near ptr evalcar
	pop	ecx
	xchg	dword ptr [esp],eax
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr evalnsn
	cmp	ebx,esi
	jne	near ptr evbal2
	push	ecx
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	mov	edx,2
	jmp	eax
evalnsn	label	near
	mov	edx,1
evaln1	label	near
	push	dword ptr [4+eax]
	push	edx
	push	ecx
	call	near ptr evalcar
	pop	ecx
	pop	edx
	xchg	dword ptr [esp],eax
	inc	dx
	cmp	eax,edi
	jae	near ptr evaln1
	cmp	eax,esi
	jne	near ptr evbal
	jmp	ecx
evbal2	label	near
	push	ebx
	jmp	near ptr evbal1
evbal	label	near
	push	eax
evbal1	label	near
	mov	eax,ecx
evbale	label	near
	call	near ptr findfn
	mov	ebx,eax
	pop	eax
	jmp	near ptr errbal
evalf	label	near
	jmp	ecx
evalm	label	near
	push	offset FLAT:evala1
	mov	eax,dword ptr [forme]
	jmp	ecx
evaldm	label	near
	mov	eax,dword ptr [forme]
	push	eax
	push	offset FLAT:evaldmr
	mov	eax,dword ptr [4+eax]
	jmp	ecx
evaldmr	label	near
	mov	ebx,eax
	pop	eax
	call	near ptr displace
	jmp	near ptr evala1
evexp	label	near
	xor	edx,edx
	cmp	eax,edi
	jae	near ptr evexp1
	jmp	near ptr evexp2
evexp1	label	near
	push	dword ptr [4+eax]
	push	edx
	push	ecx
	push	ebx
	call	near ptr evalcar
	pop	ebx
	pop	ecx
	pop	edx
	xchg	dword ptr [esp],eax
	inc	dx
	cmp	eax,edi
	jae	near ptr evexp1
evexp2	label	near
	cmp	eax,esi
	jne	near ptr everrbal
	mov	dword ptr [errname],ebx
	mov	dword ptr [intllink],esi
evbnd	label	near
	mov	dword ptr [intret],offset FLAT:evexpg
	mov	dword ptr [savea4],edx
	mov	dword ptr [savea1],ecx
	mov	ecx,dword ptr [ecx]
	mov	dword ptr [savea2],ecx
	cmp	ecx,edi
	jb	near ptr evbnd6
evbnd2	label	near
	or	edx,edx
	je	near ptr evbnr32
	dec	dx
	mov	ebx,dword ptr [ecx]
	cmp	ebx,edi
	jae	near ptr evbdst
	mov	eax,dword ptr [ebx]
	mov	ebp,dword ptr [esp+edx*4]
	mov	dword ptr [ebx],ebp
	mov	dword ptr [esp+edx*4],eax
	mov	ecx,dword ptr [4+ecx]
	cmp	ecx,edi
	jae	near ptr evbnd2
	jmp	near ptr evbnd6
evbndext	label	near
	nop
	cmp	ecx,edi
	jae	near ptr evbnd2
evbnd6	label	near
	cmp	ecx,esi
	je	near ptr evbnd9
	cmp	ecx,dword ptr [znobind]
	je	near ptr evbnd91
	dec	dx
	sub	word ptr [savea4],dx
	inc	dx
	inc	dx
	mov	eax,esi
	jmp	near ptr evbnd8
evbnd7	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
evbnd8	label	near
	dec	dx
	jg	near ptr evbnd7
	push	dword ptr [ecx]
	mov	dword ptr [ecx],eax
evbnd9	label	near
	or	edx,edx
	jne	near ptr evbnr1
evbnd91	label	near
	mov	edx,dword ptr [savea4]
evbnd92	label	near
	mov	eax,dword ptr [savea1]
	mov	ebx,dword ptr [esp+edx*4]
	cmp	ebx,offset FLAT:unbind1
	jne	near ptr evbnd94
	mov	ecx,edx
	add	cx,3
	mov	ebx,dword ptr [esp+ecx*4]
	cmp	ebx,eax
	jne	near ptr evbnd94
	add	cx,1
	mov	ebx,dword ptr [esp+ecx*4]
	cmp	ebx,dword ptr [znobind]
	je	near ptr evbnd94
	lea	esp,dword ptr [esp+edx*4]
	jmp	dword ptr [intret]
evbnd94	label	near
	push	edx
	push	dword ptr [savea2]
	push	eax
evexpn	label	near
	push	dword ptr [llink]
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [intllink]
	mov	dword ptr [llink],ebp
	jmp	dword ptr [intret]
evbnr1	label	near
	mov	eax,esi
	sub	word ptr [savea4],dx
	mov	eax,dword ptr [savea4]
evbnr2	label	near
	pop	ecx
	dec	dx
	jg	near ptr evbnr2
	mov	edx,dword ptr [savea4]
evbnr31	label	near
	mov	dword ptr [savea1],eax
	mov	ecx,dword ptr [savea2]
	mov	dword ptr [savea3],offset FLAT:errbner
	jmp	near ptr unbise
evbnr32	label	near
	mov	edx,dword ptr [savea4]
evbnr33	label	near
	mov	eax,dword ptr [savea2]
	call	near ptr lllength
	jmp	near ptr evbnr31
errbner	label	near
	mov	eax,dword ptr [savea1]
	call	near ptr ferrnam
	jmp	near ptr errwna
evbser	label	near
	mov	esp,dword ptr [rvbser]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	dword ptr [savea1],ecx
	sub	word ptr [savea4],dx
	lea	esp,dword ptr [esp+edx*4]
	mov	ebx,esi
	cmp	eax,edi
	jb	near ptr evbser5
evbser4	label	near
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],ebx
	mov	ebx,eax
	mov	eax,ecx
	cmp	eax,edi
	jae	near ptr evbser4
evbser5	label	near
	xchg	dword ptr [esp],ebx
	mov	edx,dword ptr [savea4]
	mov	ecx,dword ptr [savea2]
	mov	dword ptr [savea3],offset FLAT:evbser9
	jmp	near ptr unbise
evbser9	label	near
	mov	eax,dword ptr [savea1]
	call	near ptr ferrnam
	jmp	near ptr errilb
evbdst	label	near
	mov	dword ptr [savea3],ecx
	mov	ecx,dword ptr [esp+edx*4]
	mov	eax,esi
	mov	dword ptr [rvbser],esp
	call	near ptr evbdst1
	mov	ebx,esi
	cmp	eax,edi
	jb	near ptr evbdst6
evbdst4	label	near
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],ebx
	mov	ebx,eax
	mov	eax,ecx
	cmp	eax,edi
	jae	near ptr evbdst4
	mov	eax,ebx
evbdst6	label	near
	mov	ecx,dword ptr [savea3]
	mov	dword ptr [esp+edx*4],eax
	mov	ecx,dword ptr [4+ecx]
	cmp	ecx,edi
	jae	near ptr evbnd2
	jmp	near ptr evbnd6
evbdst1	label	near
	cmp	ecx,esi
	je	near ptr evbdst11
	cmp	ecx,edi
	jb	near ptr evbser
evbdst11	label	near
	push	dword ptr [4+ebx]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,edi
	jae	near ptr evbdst8
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [ebx],ebp
evbdst2	label	near
	mov	ecx,dword ptr [4+ecx]
	pop	ebx
	cmp	ebx,edi
	jae	near ptr evbdst1
	cmp	ebx,esi
	je	near ptr evbdst3
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	dword ptr [ebx],ecx
evbdst3	label	near
	ret
evbdst8	label	near
	push	ecx
	mov	ecx,dword ptr [ecx]
	call	near ptr evbdst1
	pop	ecx
	jmp	near ptr evbdst2
evexpg	label	near
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jb	near ptr evprogn7
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr evprogn2
	cmp	ebx,esi
	jne	near ptr evprogn5
	jmp	near ptr evalcar
evprogn	label	near
	cmp	eax,edi
	jb	near ptr evprogn7
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr evprogn2
	cmp	ebx,esi
	jne	near ptr evprogn5
	jmp	near ptr evalcar
evprogn2	label	near
	push	eax
	push	offset FLAT:evprognr
	jmp	near ptr evalcar
evprognr	label	near
	pop	eax
	mov	eax,dword ptr [4+eax]
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr evprogn2
	cmp	ebx,esi
	jne	near ptr evprogn5
	jmp	near ptr evalcar
evprogn5	label	near
	mov	eax,ebx
evprogn6	label	near
	call	near ptr ferrnam
everrbal	label	near
	jmp	near ptr errbal
evprogn7	label	near
	cmp	eax,esi
	je	near ptr popj
	jmp	near ptr evprogn6
evmac	label	near
	push	offset FLAT:evala1
	mov	eax,dword ptr [forme]
	jmp	near ptr evfexp
evdmac	label	near
	mov	eax,dword ptr [forme]
	push	eax
	push	offset FLAT:evaldmr
	mov	eax,dword ptr [4+eax]
evfexp	label	near
	mov	dword ptr [errname],ebx
bndtrb	label	near
	mov	dword ptr [intret],offset FLAT:evexpg
	mov	dword ptr [savea1],ecx
	mov	ecx,dword ptr [ecx]
	mov	dword ptr [savea2],ecx
bndtrbex	label	near
	xor	edx,edx
	jmp	near ptr bndtrb2
bndtrb1	label	near
	cmp	eax,edi
	jb	near ptr evbnr33
	inc	dx
	mov	ebx,dword ptr [ecx]
	cmp	ebx,edi
	jae	near ptr bndtrb7
	push	dword ptr [ebx]
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebx],ebp
	mov	eax,dword ptr [4+eax]
	mov	ecx,dword ptr [4+ecx]
bndtrb2	label	near
	cmp	ecx,edi
	jae	near ptr bndtrb1
	cmp	ecx,esi
	je	near ptr bndtrb3
	cmp	ecx,dword ptr [znobind]
	je	near ptr bndtrb5
	inc	dx
	push	dword ptr [ecx]
	mov	dword ptr [ecx],eax
	jmp	near ptr bndtrb6
bndtrb3	label	near
	cmp	eax,esi
	je	near ptr bndtrb6
	jmp	near ptr evbnr33
bndtrb4	label	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	inc	dx
bndtrb5	label	near
	cmp	eax,edi
	jae	near ptr bndtrb4
	cmp	eax,esi
	je	near ptr bndtrb6
	call	near ptr ferrnam
	jmp	near ptr errbal
bndtrb6	label	near
	mov	eax,dword ptr [savea1]
	mov	ebx,dword ptr [esp+edx*4]
	cmp	ebx,offset FLAT:unbind1
	jne	near ptr evbnd94
	mov	ecx,edx
	add	cx,3
	mov	ebx,dword ptr [esp+ecx*4]
	cmp	ebx,eax
	jne	near ptr evbnd94
	add	cx,1
	mov	ebx,dword ptr [esp+ecx*4]
	cmp	ebx,dword ptr [znobind]
	je	near ptr evbnd94
	lea	esp,dword ptr [esp+edx*4]
	jmp	dword ptr [intret]
bndtrb7	label	near
	push	esi
	mov	dword ptr [rvbser],esp
	push	dword ptr [4+eax]
	push	dword ptr [4+ecx]
	mov	ecx,dword ptr [eax]
	mov	eax,esi
	mov	dword ptr [savea4],edx
	xor	edx,edx
	call	near ptr evbdst1
	mov	edx,dword ptr [savea4]
	mov	ebx,esi
	cmp	eax,edi
	jb	near ptr bndtrb9
bndtrb8	label	near
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],ebx
	mov	ebx,eax
	mov	eax,ecx
	cmp	eax,edi
	jae	near ptr bndtrb8
bndtrbz	label	near
	pop	ecx
	pop	eax
	add	esp,4
	push	ebx
	jmp	near ptr bndtrb2
bndtrb9	label	near
	mov	ebx,esi
	jmp	near ptr bndtrbz
evalfv	label	near
	cmp	ebx,edi
	jb	near ptr udfer
	mov	ecx,dword ptr [ebx]
	cmp	ecx,dword ptr [zlambda]
	je	near ptr evalll
	cmp	ecx,dword ptr [zflambda]
	je	near ptr evallf
	cmp	ecx,dword ptr [zmlambda]
	je	near ptr evallm
	cmp	ecx,dword ptr [zclosure]
	je	near ptr evallc
	jmp	near ptr udfer
evalll	label	near
	mov	ecx,dword ptr [4+ebx]
	mov	ebp,dword ptr [zlambda]
	mov	dword ptr [errname],ebp
	call	near ptr verlpar
	mov	ebx,dword ptr [zlambda]
	xor	edx,edx
	jmp	near ptr evalll2
evalll1	label	near
	push	dword ptr [4+eax]
	push	edx
	push	ecx
	push	ebx
	call	near ptr evalcar
	pop	ebx
	pop	ecx
	pop	edx
	xchg	dword ptr [esp],eax
	inc	dx
evalll2	label	near
	cmp	eax,edi
	jae	near ptr evalll1
	cmp	eax,esi
	jne	near ptr everrbal
	mov	dword ptr [errname],ebx
	mov	ebp,dword ptr [llink]
	mov	dword ptr [intllink],ebp
	jmp	near ptr evbnd
evallf	label	near
	mov	ecx,dword ptr [4+ebx]
	mov	ebp,dword ptr [zflambda]
	mov	dword ptr [errname],ebp
	mov	ebp,dword ptr [llink]
	mov	dword ptr [intllink],ebp
	call	near ptr verlpar
	jmp	near ptr bndtrb
evallm	label	near
	mov	eax,dword ptr [forme]
	mov	ecx,dword ptr [4+ebx]
	push	offset FLAT:evala1
	mov	ebp,dword ptr [zmlambda]
	mov	dword ptr [errname],ebp
	mov	ebp,dword ptr [llink]
	mov	dword ptr [intllink],ebp
	call	near ptr verlpar
	jmp	near ptr bndtrb
evallc	label	near
	mov	ebx,dword ptr [4+ebx]
	mov	ecx,dword ptr [4+ebx]
	mov	ebp,dword ptr [zclosure]
	mov	dword ptr [errname],ebp
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [intllink],ebp
	jmp	near ptr evexp
udfer	label	near
	mov	edx,dword ptr [forme]
	mov	ebp,edx
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr udfer8
	mov	eax,edx
	call	near ptr gettype
	cmp	eax,esi
	jb	near ptr udfer8
	cmp	eax,edi
	jae	near ptr udfer8
	cmp	eax,esi
	je	near ptr udfer8
	push	ebx
	mov	ebx,dword ptr [zeval000]
	mov	ecx,esi
	call	near ptr getfns
	pop	ebx
	cmp	eax,esi
	je	near ptr udfer8
	push	dword ptr [forme]
	mov	edx,1
	jmp	near ptr ffuncall
udfer8	label	near
	push	eax
	mov	eax,ebx
	mov	ebx,dword ptr [zeval000]
	call	near ptr errudf
	mov	ebx,eax
	pop	eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr evalan
xwnaer0	label	near
	mov	ebx,eax
	jmp	near ptr wnaer00
wnaer0	label	near
	cmp	eax,esi
	je	near ptr wnaer00
	cmp	eax,edi
	jb	near ptr balr1
wnaer00	label	near
	xor	eax,eax
	jmp	near ptr wnaer
xwnaer1	label	near
	mov	ebx,eax
	jmp	near ptr wnaer10
wnaer1d	label	near
	mov	eax,dword ptr [4+eax]
wnaer1	label	near
	cmp	eax,esi
	je	near ptr wnaer10
	cmp	eax,edi
	jb	near ptr balr1
wnaer10	label	near
	mov	eax,1
	jmp	near ptr wnaer
xwnaer2	label	near
	mov	ebx,eax
	jmp	near ptr wnaer20
wnaer23d	label	near
	mov	ecx,dword ptr [4+ecx]
wnaer23	label	near
	mov	eax,ecx
wnaer2	label	near
	cmp	eax,esi
	je	near ptr wnaer20
	cmp	eax,edi
	jb	near ptr balr1
wnaer20	label	near
	mov	eax,2
	jmp	near ptr wnaer
xwnaer3	label	near
	mov	ebx,eax
	jmp	near ptr wnaer30
wnaer3d	label	near
	mov	eax,dword ptr [4+eax]
wnaer3	label	near
	cmp	eax,esi
	je	near ptr wnaer30
	cmp	eax,edi
	jb	near ptr balr1
wnaer30	label	near
	mov	eax,3
wnaer	label	near
	jmp	near ptr errwna
balr1	label	near
	jmp	near ptr errbal
stepeval	endp

funcall	proc	near
	mov	ebp,dword ptr [zfuncall]
	mov	dword ptr [errname],ebp
	or	dx,dx
	je	near ptr funcerwn
funcall0	label	near
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	mov	dword ptr [esp+edx*4],offset FLAT:popj
ffuncall	label	near
	mov	dword ptr [intllink],esi
	cmp	eax,esi
	jb	near ptr applys
	cmp	eax,edi
	jae	near ptr applys
	movzx	ecx,word ptr [24+eax]
	jmp	dword ptr cs:[ecx*4+tfuncall]
tfuncall	dd	offset FLAT:fncludf
	dd	offset FLAT:fncal0
	dd	offset FLAT:fncal1
	dd	offset FLAT:fncal2
	dd	offset FLAT:fncal3
	dd	offset FLAT:fncaln
	dd	offset FLAT:fncalf
	dd	offset FLAT:fncalex
	dd	offset FLAT:fncalex
	dd	offset FLAT:fncalmc
	dd	offset FLAT:fncalmd
	dd	offset FLAT:fncalm
	dd	offset FLAT:fncaldm
funcerwn	label	near
	mov	eax,edx
	call	near ptr ferrnam
	jmp	near ptr errwna
fncludf	label	near
	push	edx
	call	near ptr ferrnam
	call	near ptr errudf
	pop	edx
	jmp	near ptr ffuncall
fncal0	label	near
	or	dx,dx
	jne	near ptr xwnaer0
	jmp	dword ptr [8+eax]
fncal1	label	near
	cmp	dx,1
	jne	near ptr xwnaer1
	mov	edx,dword ptr [8+eax]
	pop	eax
	jmp	edx
fncal2	label	near
	cmp	dx,2
	jne	near ptr xwnaer2
	pop	ebx
	mov	edx,dword ptr [8+eax]
	pop	eax
	jmp	edx
fncal3	label	near
	cmp	dx,3
	jne	near ptr xwnaer3
	pop	ecx
	pop	ebx
	mov	edx,dword ptr [8+eax]
	pop	eax
	jmp	edx
fncaln	label	near
	jmp	dword ptr [8+eax]
fncalf	label	near
	mov	ebx,dword ptr [8+eax]
	mov	eax,esi
	jmp	near ptr fncalf2
fncalf1	label	near
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fncalf2	label	near
	dec	dx
	jge	near ptr fncalf1
	jmp	ebx
fncalm	label	near
	mov	ebx,dword ptr [8+eax]
	mov	eax,esi
	jmp	near ptr fncalm2
fncalm1	label	near
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fncalm2	label	near
	dec	dx
	jge	near ptr fncalm1
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	push	offset FLAT:evala1
	jmp	ebx
fncaldm	label	near
	mov	ebx,dword ptr [8+eax]
	mov	eax,esi
	jmp	near ptr fncaldm2
fncaldm1	label	near
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__14
l1__14:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fncaldm2	label	near
	dec	dx
	jge	near ptr fncaldm1
	push	eax
	push	offset FLAT:evaldmr
	jmp	ebx
fncalex	label	near
	mov	ecx,dword ptr [8+eax]
	mov	dword ptr [errname],eax
	jmp	near ptr evbnd
fncalmc	label	near
	mov	ecx,dword ptr [8+eax]
	mov	dword ptr [errname],eax
	mov	eax,esi
	jmp	near ptr fncalmc2
fncalmc1	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__15
l1__15:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fncalmc2	label	near
	dec	dx
	jge	near ptr fncalmc1
	cmp	dword ptr [fcons],edi
	jb	near ptr l__16
l1__16:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [errname]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	push	offset FLAT:evala1
	jmp	near ptr bndtrb
fncalmd	label	near
	mov	ecx,dword ptr [8+eax]
	mov	dword ptr [errname],eax
	mov	eax,esi
	jmp	near ptr fncalmd2
fncalmd1	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__17
l1__17:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fncalmd2	label	near
	dec	dx
	jge	near ptr fncalmd1
	push	eax
	push	offset FLAT:evaldmr
	jmp	near ptr bndtrb
applys	label	near
	cmp	eax,edi
	jb	near ptr fncludf
	mov	ecx,dword ptr [eax]
	cmp	ecx,dword ptr [zlambda]
	je	near ptr applyll
	cmp	ecx,dword ptr [zflambda]
	je	near ptr applylf
	cmp	ecx,dword ptr [zclosure]
	je	near ptr applylc
	jmp	near ptr fncludf
applyll	label	near
	mov	ebp,dword ptr [zlambda]
	mov	dword ptr [errname],ebp
	jmp	near ptr applylf1
applylf	label	near
	mov	ebp,dword ptr [zflambda]
	mov	dword ptr [errname],ebp
applylf1	label	near
	mov	ecx,dword ptr [4+eax]
	call	near ptr verlpar
	jmp	near ptr evbnd
applylc	label	near
	mov	ebp,dword ptr [zclosure]
	mov	dword ptr [errname],ebp
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [eax]
	mov	dword ptr [intllink],ebp
	mov	ecx,dword ptr [4+eax]
	jmp	near ptr evbnd
funcall	endp

uapply	proc	near
	mov	ebp,dword ptr [zuapply]
	mov	dword ptr [errname],ebp
	cmp	dx,2
	jl	near ptr uapplyer
	pop	ebx
	dec	dx
	jmp	near ptr uapply3
uapply2	label	near
	push	dword ptr [ebx]
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	ebx,dword ptr [4+ebx]
	inc	dx
uapply3	label	near
	cmp	ebx,edi
	jae	near ptr uapply2
	cmp	ebx,esi
	je	near ptr funcall0
	mov	eax,ebx
	dec	dx
	mov	ebx,dword ptr [esp+edx*4]
	jmp	near ptr errbal
uapplyer	label	near
	mov	eax,2
	mov	ebx,dword ptr [zuapply]
	jmp	near ptr errwna
apply	label	near
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr uapply
unbinp	label	near
	pop	edx
	cmp	edx,offset FLAT:unbind1
	je	near ptr unbinp1
	cmp	edx,offset FLAT:unbind2
	je	near ptr unbinp2
	cmp	edx,offset FLAT:unbind3
	je	near ptr unbinp3
	cmp	edx,offset FLAT:unbind4
	je	near ptr unbinp4
	cmp	edx,offset FLAT:unbind5
	je	near ptr unbinp5
	cmp	edx,offset FLAT:unbind6
	je	near ptr unbinp6
	cmp	edx,offset FLAT:unbind7
	je	near ptr unbinp7
	cmp	edx,offset FLAT:unbind8
	je	near ptr unbinp8
	cmp	edx,offset FLAT:unbind9
	je	near ptr unbinp9
	cmp	edx,offset FLAT:unbind10
	je	near ptr unbinp10
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__18
	push	14
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
unbind0	label	near
	nop
unbinp0	label	near
	jmp	near ptr erres
unbind1	label	near
	mov	ecx,offset FLAT:popj
unbinp1	label	near
	mov	dword ptr [savea3],ecx
	pop	dword ptr [dlink]
	pop	dword ptr [llink]
	add	esp,4
	pop	ecx
	pop	edx
unbise	label	near
	cmp	edx,1
	jne	near ptr unbis19
	cmp	ecx,edi
	jb	near ptr unbis14
	cmp	dword ptr [ecx],edi
	jae	near ptr unbis19
	mov	ecx,dword ptr [ecx]
	pop	dword ptr [ecx]
	jmp	dword ptr [savea3]
unbis14	label	near
	cmp	ecx,dword ptr [znobind]
	je	near ptr unbis15
	pop	dword ptr [ecx]
	jmp	dword ptr [savea3]
unbis15	label	near
	add	esp,4
	jmp	dword ptr [savea3]
unbis19	label	near
	mov	dword ptr [savea4],edx
	mov	dword ptr [savea2],ebx
	jmp	near ptr unbid15
unbid12	label	near
	or	dx,dx
	je	near ptr unbid18
	mov	ebx,dword ptr [ecx]
	mov	ecx,dword ptr [4+ecx]
	cmp	ebx,edi
	jae	near ptr unbid19
	dec	dx
	mov	ebp,dword ptr [esp+edx*4]
	mov	dword ptr [ebx],ebp
unbid15	label	near
	cmp	ecx,edi
	jae	near ptr unbid12
	cmp	ecx,esi
	je	near ptr unbid18
	cmp	ecx,dword ptr [znobind]
	je	near ptr unbid18
	or	dx,dx
	je	near ptr unbid18
	dec	dx
	mov	ebp,dword ptr [esp+edx*4]
	mov	dword ptr [ecx],ebp
unbid18	label	near
	mov	ebx,dword ptr [savea2]
	mov	ebp,dword ptr [savea4]
	lea	esp,dword ptr [esp+ebp*4]
	jmp	dword ptr [savea3]
unbid19	label	near
	push	ecx
	mov	ecx,dword ptr [esp+edx*4]
	call	near ptr unbides1
	pop	ecx
	dec	dx
	jmp	near ptr unbid15
unbides0	label	near
	push	offset FLAT:unbides2
unbides1	label	near
	cmp	ecx,esi
	je	near ptr unbides3
	push	dword ptr [4+ebx]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,edi
	jae	near ptr unbides0
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [ebx],ebp
	mov	ecx,dword ptr [4+ecx]
unbides2	label	near
	pop	ebx
	cmp	ebx,edi
	jae	near ptr unbides1
	cmp	ebx,esi
	je	near ptr unbides3
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [ebx],ebp
	mov	ecx,dword ptr [4+ecx]
unbides3	label	near
	ret
unbind2	label	near
	mov	ecx,offset FLAT:popj
unbinp2	label	near
	pop	dword ptr [dlink]
	mov	dword ptr [savea3],ecx
	jmp	near ptr unbdw7
unbdw6	label	near
	pop	ecx
	mov	word ptr [24+edx],cx
	pop	dword ptr [8+edx]
unbdw7	label	near
	pop	edx
	or	edx,edx
	jne	near ptr unbdw6
	jmp	dword ptr [savea3]
unbind3	label	near
	pop	dword ptr [dlink]
	pop	edx
	ret
unbinp3	label	near
	pop	dword ptr [dlink]
	pop	edx
	jmp	ecx
unbind4	label	near
	mov	ecx,offset FLAT:popj
unbinp4	label	near
	pop	dword ptr [dlink]
	pop	dword ptr [llink]
	add	esp,4
	pop	dword ptr [evalst]
	pop	dword ptr [forme]
	pop	dword ptr [funct]
	pop	dword ptr [savea1]
	pop	dword ptr [savea2]
	pop	dword ptr [savea3]
	pop	dword ptr [savea4]
	add	esp,4
	jmp	ecx
unbind5	label	near
	mov	ecx,offset FLAT:popj
unbinp5	label	near
	pop	dword ptr [dlink]
	pop	edx
	push	ecx
	push	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__19
l1__19:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__20
l1__20:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,eax
	mov	eax,edx
	call	near ptr apply
	pop	ebx
	ret
unbind6	label	near
	mov	ecx,offset FLAT:popj
unbinp6	label	near
	pop	dword ptr [dlink]
	xchg	dword ptr [esp],ecx
	push	ebx
	push	eax
	mov	eax,ecx
	call	near ptr evprogn
	pop	eax
	pop	ebx
	ret
unbind7	label	near
	mov	ecx,offset FLAT:popj
unbinp7	label	near
	pop	dword ptr [dlink]
	xchg	dword ptr [esp],eax
	jmp	eax
unbind8	label	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [dlink],ebp
	add	esp,8
	ret
unbinp8	label	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [dlink],ebp
	add	esp,8
	jmp	ecx
unbind9	label	near
	mov	ecx,offset FLAT:popj
unbinp9	label	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [dlink],ebp
	mov	edx,dword ptr [llink]
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [llink],ebp
	mov	edx,dword ptr [edx]
	mov	dword ptr [4+edx],esi
	add	esp,8
	pop	edx
	add	dx,dx
	lea	esp,dword ptr [esp+edx*4]
	jmp	ecx
unbind10	label	near
	mov	ecx,offset FLAT:popj
unbinp10	label	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [dlink],ebp
	mov	edx,dword ptr [llink]
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [llink],ebp
	mov	edx,dword ptr [edx]
	mov	edx,dword ptr [4+edx]
	mov	dword ptr [4+edx],esi
	add	esp,8
	jmp	ecx
uapply	endp

let	proc	near
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__21
l1__21:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	ebx
	mov	ecx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__22
l1__22:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	push	ecx
let2	label	near
	cmp	eax,edi
	jb	near ptr let8
	mov	edx,dword ptr [eax]
	push	dword ptr [4+eax]
	cmp	edx,edi
	jae	near ptr let3
	mov	eax,edx
	mov	edx,esi
	jmp	near ptr let4
let3	label	near
	mov	eax,dword ptr [edx]
	mov	edx,dword ptr [4+edx]
let4	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__23
l1__23:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	dword ptr [4+ebx],eax
	mov	ebx,eax
	cmp	edx,esi
	je	near ptr let5
	cmp	edx,edi
	jb	near ptr letwla1
	cmp	dword ptr [4+edx],esi
	jne	near ptr letwla1
let5	label	near
	mov	eax,dword ptr [edx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__24
l1__24:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	dword ptr [4+ecx],eax
	mov	ecx,eax
	pop	eax
	jmp	near ptr let2
let8	label	near
	pop	eax
	mov	eax,dword ptr [4+eax]
	pop	ebx
	mov	ebx,dword ptr [4+ebx]
	pop	edx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__25
l1__25:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,edx
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__26
l1__26:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zlambda]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__27
l1__27:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
letwla1	label	near
	mov	eax,edx
letwla2	label	near
	mov	ebx,dword ptr [zlet]
	jmp	near ptr errwna
let	endp

letseq	proc	near
	mov	eax,dword ptr [zletseq]
	mov	ebx,dword ptr [zeval000]
	jmp	near ptr errudf
letseq	endp

letv	proc	near
	push	dword ptr [4+eax]
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	push	dword ptr [4+eax]
	call	near ptr evalcar
	mov	ebp,dword ptr [zletv]
	mov	dword ptr [errname],ebp
letvq2	label	near
	pop	ecx
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__28
l1__28:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [llink]
	mov	dword ptr [intllink],ebp
	call	near ptr verlpar
	jmp	near ptr bndtrb
letv	endp

letvq	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	push	dword ptr [4+eax]
	call	near ptr evalcar
	mov	ebp,dword ptr [zletvq]
	mov	dword ptr [errname],ebp
	jmp	near ptr letvq2
letvq	endp

flet	proc	near
	cmp	eax,edi
	jb	near ptr fleterr1
	mov	ebx,dword ptr [eax]
	mov	ebp,dword ptr [4+eax]
	mov	dword ptr [savea1],ebp
	push	0
	jmp	near ptr flet3
flet2	label	near
	mov	eax,dword ptr [ebx]
	cmp	eax,edi
	jb	near ptr fleterr1
	mov	ecx,dword ptr [eax]
	cmp	dword ptr [bvar],ecx
	ja	near ptr fleterr2
	cmp	ecx,edi
	jae	near ptr fleterr2
	push	dword ptr [8+ecx]
	mov	ebp,dword ptr [4+eax]
	mov	dword ptr [8+ecx],ebp
	movzx	edx,word ptr [24+ecx]
	push	edx
	mov	word ptr [24+ecx],7
	push	ecx
	mov	ebx,dword ptr [4+ebx]
flet3	label	near
	cmp	ebx,edi
	jae	near ptr flet2
	push	dword ptr [dlink]
	push	offset FLAT:unbind2
	mov	dword ptr [dlink],esp
	mov	eax,dword ptr [savea1]
	mov	ebp,dword ptr [zflet]
	mov	dword ptr [errname],ebp
	jmp	near ptr evprogn
fleterr1	label	near
	mov	ebx,dword ptr [zflet]
	jmp	near ptr errnla
fleterr2	label	near
	mov	eax,ecx
	mov	ebx,dword ptr [zflet]
	jmp	near ptr errnva
flet	endp

tag	proc	near
	push	dword ptr [eax]
tag3	label	near
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [ztag]
	mov	dword ptr [errname],ebp
	jmp	near ptr evexpg
tag	endp

evtag	proc	near
	push	eax
	call	near ptr evalcar
	cmp	eax,esi
	jb	near ptr evtagerr
	cmp	eax,edi
	jae	near ptr evtagerr
	xchg	dword ptr [esp],eax
	jmp	near ptr tag3
evtagerr	label	near
	pop	ebx
	mov	ebx,dword ptr [zevtag]
	jmp	near ptr errsym
evtag	endp

evexit	proc	near
	push	dword ptr [4+eax]
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	mov	ebp,dword ptr [zevexit]
	mov	dword ptr [errname],ebp
	jmp	near ptr exit1
evexit	endp

untlxit	proc	near
	push	dword ptr [eax]
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	push	dword ptr [4+eax]
untlxit1	label	near
	mov	eax,dword ptr [esp]
	mov	ebp,dword ptr [zuntlxit]
	mov	dword ptr [errname],ebp
	call	near ptr evprogn
	jmp	near ptr untlxit1
untlxit	endp

ffexit	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [zffexit]
	mov	dword ptr [errname],ebp
exit1	label	near
	call	near ptr evprogn
	pop	ebx
findtag	label	near
	mov	esp,dword ptr [dlink]
	mov	ecx,dword ptr [esp]
	cmp	ecx,offset FLAT:unbind3
	je	near ptr evesc3
	cmp	ecx,offset FLAT:unbind5
	je	near ptr evesc4
	mov	ecx,offset FLAT:findtag
	jmp	near ptr unbinp
evesc3	label	near
	add	esp,4
	pop	dword ptr [dlink]
	pop	ecx
	cmp	ebx,ecx
	jne	near ptr findtag
	ret
evesc4	label	near
	add	esp,4
	pop	dword ptr [dlink]
	push	ebx
	push	eax
	mov	edx,3
	jmp	near ptr funcall
ffexit	endp

unexit	proc	near
	mov	ebx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
uvesc1	label	near
	mov	esp,dword ptr [dlink]
	mov	ecx,dword ptr [esp]
	cmp	ecx,offset FLAT:unbind3
	je	near ptr uvesc3
	cmp	ecx,offset FLAT:unbind5
	je	near ptr uvesc4
	mov	ecx,offset FLAT:uvesc1
	jmp	near ptr unbinp
uvesc3	label	near
	add	esp,4
	pop	dword ptr [dlink]
	pop	ecx
	cmp	ebx,ecx
	jne	near ptr uvesc1
	mov	ebp,dword ptr [zunexit]
	mov	dword ptr [errname],ebp
	jmp	near ptr evprogn
uvesc4	label	near
	add	esp,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__29
l1__29:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__30
l1__30:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,eax
	pop	dword ptr [dlink]
	pop	eax
	jmp	near ptr apply
unexit	endp

unwind	proc	near
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	cmp	dword ptr [bfloat],eax
	ja	near ptr unwind4
	mov	ebx,dword ptr [zunwind]
	jmp	near ptr errnia
unwind3	label	near
	mov	esp,dword ptr [dlink]
	mov	ecx,offset FLAT:unwind4
	jmp	near ptr unbinp
unwind4	label	near
	dec	ax
	jge	near ptr unwind3
	mov	eax,ebx
	mov	ebp,dword ptr [zunwind]
	mov	dword ptr [errname],ebp
	jmp	near ptr evprogn
llitsoft	label	near
	mov	ecx,dword ptr [zsysits]
	mov	ecx,dword ptr [ecx]
	jmp	near ptr llitsofi
llsupit	label	near
	mov	edx,dword ptr [zsysits]
	mov	edx,dword ptr [edx]
	jmp	near ptr llsupit1
llsupit0	label	near
	cmp	dword ptr [edx],esi
	jb	near ptr llitster
	cmp	dword ptr [edx],edi
	jae	near ptr llitster
	cmp	eax,dword ptr [edx]
	je	near ptr llsupit3
	mov	edx,dword ptr [4+edx]
llsupit1	label	near
	cmp	edx,edi
	jae	near ptr llsupit0
	cmp	edx,esi
	jb	near ptr llitster
	cmp	edx,edi
	jae	near ptr llitster
llsupit2	label	near
	cmp	eax,edx
	je	near ptr llsupit4
	cmp	edx,esi
	je	near ptr llitster
	mov	edx,dword ptr [12+edx]
	jmp	near ptr llsupit2
llsupit3	label	near
	mov	eax,ebx
	mov	ebx,ecx
	mov	ecx,dword ptr [4+edx]
	jmp	near ptr llitsofi
llsupit4	label	near
	mov	eax,ebx
	mov	ebx,ecx
	mov	ecx,dword ptr [12+edx]
	jmp	near ptr llitsofi
llitsofi	label	near
	push	ebx
	push	dword ptr [savea4]
	push	dword ptr [savea3]
	push	dword ptr [savea2]
	push	dword ptr [savea1]
	push	dword ptr [funct]
	push	dword ptr [forme]
	push	dword ptr [evalst]
	push	eax
	push	dword ptr [llink]
	push	dword ptr [dlink]
	push	offset FLAT:unbind4
	mov	dword ptr [dlink],esp
	mov	dword ptr [llink],esi
	mov	dword ptr [evalst],esi
	push	ebx
	mov	ebx,eax
	mov	eax,ecx
	call	near ptr findits
	cmp	eax,esi
	je	near ptr llitster
	pop	ebx
	jmp	near ptr apply
llitster	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zitsoft]
	mov	ecx,dword ptr [zsysits]
	mov	dword ptr [ecx],esi
	jmp	near ptr errudf
findits0	label	near
	pop	eax
findits	label	near
	cmp	eax,edi
	jae	near ptr findits1
	cmp	eax,esi
	jb	near ptr llitster
	cmp	eax,edi
	jae	near ptr llitster
	xor	ecx,ecx
	push	ebx
	call	near ptr getfns
	pop	ebx
	ret
findits1	label	near
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	cmp	eax,esi
	jb	near ptr llitster
	cmp	eax,edi
	jae	near ptr llitster
	push	ebx
	call	near ptr getfn1
	pop	ebx
	cmp	eax,esi
	je	near ptr findits0
	add	esp,4
	ret
unwind	endp

llock	proc	near
	push	eax
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	push	dword ptr [dlink]
	push	offset FLAT:unbind5
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [zllock]
	mov	dword ptr [errname],ebp
	jmp	near ptr evexpg
llock	endp

protect	proc	near
	push	dword ptr [4+eax]
	push	dword ptr [dlink]
	push	offset FLAT:unbind6
	mov	dword ptr [dlink],esp
	jmp	near ptr evalcar
sysprot	label	near
	push	dword ptr [dlink]
	push	offset FLAT:unbind7
	mov	dword ptr [dlink],esp
	jmp	ecx
protect	endp

function	proc	near
	cmp	eax,edi
	jb	near ptr funcret
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jb	near ptr funcret
	cmp	dword ptr [llink],esi
	je	near ptr funcret
	mov	ebp,dword ptr [zlambda]
	cmp	dword ptr [eax],ebp
	jne	near ptr funcret
	mov	eax,dword ptr [4+eax]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__31
l1__31:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [llink]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__32
l1__32:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zclosure]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
funcret	label	near
	ret
verlpar	label	near
	cmp	ecx,edi
	jb	near ptr vererr
	push	ecx
	mov	ecx,dword ptr [ecx]
	call	near ptr verlpar4
	pop	ecx
	ret
verlpar3	label	near
	push	dword ptr [4+ecx]
	mov	ecx,dword ptr [ecx]
	call	near ptr verlpar5
	pop	ecx
verlpar4	label	near
	cmp	ecx,esi
	je	near ptr verlpar9
verlpar5	label	near
	cmp	ecx,edi
	jae	near ptr verlpar3
	cmp	dword ptr [bvar],ecx
	ja	short lmac976
	cmp	ecx,edi
	jb	near ptr verlpar9
lmac976:
vererr	label	near
	mov	eax,ecx
	call	near ptr ferrnam
	jmp	near ptr errbpa
verlpar9	label	near
	ret
ferrnam	label	near
	mov	ebx,dword ptr [errname]
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr ferrname
	push	eax
	push	ebx
	mov	eax,ebx
	call	near ptr findfn
	cmp	eax,esi
	je	near ptr ferrnam1
	pop	ebx
	mov	ebx,eax
	pop	eax
	ret
ferrnam1	label	near
	pop	ebx
	pop	eax
ferrname	label	near
	ret
l___4:
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
	jmp	near ptr l1___4
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
l__26:
	call	near ptr gccons
	jmp	near ptr l1__26
l__25:
	call	near ptr gccons
	jmp	near ptr l1__25
l__24:
	call	near ptr gccons
	jmp	near ptr l1__24
l__23:
	call	near ptr gccons
	jmp	near ptr l1__23
l__22:
	call	near ptr gccons
	jmp	near ptr l1__22
l__21:
	call	near ptr gccons
	jmp	near ptr l1__21
l__20:
	call	near ptr gccons
	jmp	near ptr l1__20
l__19:
	call	near ptr gccons
	jmp	near ptr l1__19
l__17:
	call	near ptr gccons
	jmp	near ptr l1__17
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
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
function	endp
_TEXT	ends
	end
