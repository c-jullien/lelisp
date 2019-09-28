	.386p
	.387

	include	number.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	number.equ
ini_nbs	proc	near
	mov	eax,8
	mov	ebx,offset FLAT:pnmac445
	mov	ecx,offset FLAT:zsysgen
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	ebp,dword ptr [zsyspkgc]
	mov	dword ptr [12+eax],ebp
	mov	eax,7
	mov	ebx,offset FLAT:pnmac446
	mov	ecx,offset FLAT:numberp
	mov	edx,offset FLAT:znumberp
	push	z_numberp
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac447
	mov	ecx,offset FLAT:intgerp
	mov	edx,offset FLAT:zintgerp
	push	z_intgerp
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac448
	mov	ecx,offset FLAT:rationalp
	mov	edx,offset FLAT:zrationalp
	push	z_rationalp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac449
	mov	ecx,offset FLAT:llfloat
	mov	edx,offset FLAT:zllfloat
	push	z_llfloat
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac450
	mov	ecx,offset FLAT:llfix
	mov	edx,offset FLAT:zllfix
	push	z_llfix
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac451
	mov	ecx,offset FLAT:lltrunc
	mov	edx,offset FLAT:zlltrunc
	push	z_lltrunc
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac452
	mov	ecx,offset FLAT:gaadd1
	mov	edx,offset FLAT:zgaadd1
	push	z_gaadd1
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac453
	mov	ecx,offset FLAT:gasub1
	mov	edx,offset FLAT:zgasub1
	push	z_gasub1
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac454
	mov	ecx,offset FLAT:gaabs
	mov	edx,offset FLAT:zgaabs
	push	z_gaabs
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac455
	mov	ecx,offset FLAT:gaplus
	mov	edx,offset FLAT:zgaplus
	push	z_gaplus
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac456
	mov	ecx,offset FLAT:gadinv
	mov	edx,offset FLAT:zgadinv
	push	z_gadinv
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac457
	mov	ecx,offset FLAT:gadiff
	mov	edx,offset FLAT:zgadiff
	push	z_gadiff
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac458
	mov	ecx,offset FLAT:gatimes
	mov	edx,offset FLAT:zgatimes
	push	z_gatimes
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac459
	mov	ecx,offset FLAT:gadrev
	mov	edx,offset FLAT:zgadrev
	push	z_gadrev
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac460
	mov	ecx,offset FLAT:gadiv
	mov	edx,offset FLAT:zgadiv
	push	z_gadiv
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac461
	mov	ecx,offset FLAT:gadiv
	mov	edx,offset FLAT:zgadiv
	push	z_gadiv
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac462
	mov	ecx,offset FLAT:gaquomod
	mov	edx,offset FLAT:zgaquomod
	push	z_gaquomod
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac463
	mov	ecx,offset FLAT:gaquomod
	mov	edx,offset FLAT:zgaquomod
	push	z_gaquomod
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac464
	mov	ecx,offset FLAT:gaquomod
	mov	edx,offset FLAT:zgaquomod
	push	z_gaquomod
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac465
	mov	ecx,offset FLAT:zex
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac466
	mov	ecx,offset FLAT:zexmod
	call	near ptr inicst
	mov	dword ptr [eax],0
	mov	ebp,dword ptr [zex]
	mov	dword ptr [12+eax],ebp
	mov	eax,6
	mov	ebx,offset FLAT:pnmac467
	mov	ecx,offset FLAT:gamod
	mov	edx,offset FLAT:zgamod
	push	z_gamod
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac468
	mov	ecx,offset FLAT:gacomp
	mov	edx,offset FLAT:zgacomp
	push	z_gacomp
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac469
	mov	ecx,offset FLAT:gaeqen
	mov	edx,offset FLAT:zgaeqen
	push	z_gaeqen
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac470
	mov	ecx,offset FLAT:ganeqn
	mov	edx,offset FLAT:zganeqn
	push	z_ganeqn
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac471
	mov	ecx,offset FLAT:ganeqn
	mov	edx,offset FLAT:zganeqn
	push	z_ganeqn
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac472
	mov	ecx,offset FLAT:gage
	mov	edx,offset FLAT:zgage
	push	z_gage
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac473
	mov	ecx,offset FLAT:gagt
	mov	edx,offset FLAT:zgagt
	push	z_gagt
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac474
	mov	ecx,offset FLAT:gale
	mov	edx,offset FLAT:zgale
	push	z_gale
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac475
	mov	ecx,offset FLAT:galt
	mov	edx,offset FLAT:zgalt
	push	z_galt
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac476
	mov	ecx,offset FLAT:zerop
	mov	edx,offset FLAT:zzerop
	push	z_zerop
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac477
	mov	ecx,offset FLAT:plusp
	mov	edx,offset FLAT:zplusp
	push	z_plusp
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac478
	mov	ecx,offset FLAT:minusp
	mov	edx,offset FLAT:zminusp
	push	z_minusp
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac479
	mov	ecx,offset FLAT:min
	mov	edx,offset FLAT:zmin
	push	z_min
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac480
	mov	ecx,offset FLAT:max
	mov	edx,offset FLAT:zmax
	push	z_max
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac481
	mov	ecx,offset FLAT:llsin
	mov	edx,offset FLAT:zllsin
	push	z_llsin
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac482
	mov	ecx,offset FLAT:llcos
	mov	edx,offset FLAT:zllcos
	push	z_llcos
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac483
	mov	ecx,offset FLAT:llasin
	mov	edx,offset FLAT:zllasin
	push	z_llasin
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac484
	mov	ecx,offset FLAT:llacos
	mov	edx,offset FLAT:zllacos
	push	z_llacos
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac485
	mov	ecx,offset FLAT:llatan
	mov	edx,offset FLAT:zllatan
	push	z_llatan
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac486
	mov	ecx,offset FLAT:llexp
	mov	edx,offset FLAT:zllexp
	push	z_llexp
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac487
	mov	ecx,offset FLAT:lllog
	mov	edx,offset FLAT:zlllog
	push	z_lllog
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac488
	mov	ecx,offset FLAT:lllog10
	mov	edx,offset FLAT:zlllog10
	push	z_lllog10
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac489
	mov	ecx,offset FLAT:llpower
	mov	edx,offset FLAT:zllpower
	push	z_llpower
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac490
	mov	ecx,offset FLAT:llsqrt
	mov	edx,offset FLAT:zllsqrt
	push	z_llsqrt
	call	near ptr inisymb
	mov	eax,20
	mov	ebx,offset FLAT:pnmac491
	mov	ecx,offset FLAT:llfixmax
	mov	edx,offset FLAT:zllfixmax
	push	z_llfixmax
	call	near ptr inisymb
	mov	eax,20
	mov	ebx,offset FLAT:pnmac492
	mov	ecx,offset FLAT:llfixmin
	mov	edx,offset FLAT:zllfixmin
	push	z_llfixmin
	call	near ptr inisymb
	mov	eax,14
	mov	ebx,offset FLAT:pnmac493
	mov	ecx,offset FLAT:llminus0
	mov	edx,offset FLAT:zllminus0
	push	z_llminus0
	call	near ptr inisymb
	mov	eax,(65536+-1)
	mov	dword ptr [moinsun],eax
	xor	eax,eax
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [fzero],eax
	mov	eax,1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [fltun],eax
	mov	eax,(65536+-1)
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [fltmun],eax
	mov	eax,32767
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [fltimax],eax
	mov	eax,(65536+-32767)
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [fltimin],eax
	ret
bangen	label	near
	push	ecx
	call	near ptr gettype
	push	eax
	cmp	eax,esi
	jb	near ptr bangerr
	cmp	eax,edi
	jae	near ptr bangerr
	mov	ebx,ecx
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	jne	near ptr bangencal
	mov	ebx,dword ptr [esp]
	mov	eax,dword ptr [zsysgen]
	mov	eax,dword ptr [eax]
	cmp	eax,esi
	je	near ptr bangerr
	cmp	eax,esi
	jb	near ptr bangerr
	cmp	eax,edi
	jae	near ptr bangerr
	call	near ptr ffsymbol
	mov	ebx,dword ptr [esp+4]
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	je	near ptr bangerr
bangencal	label	near
	add	esp,12
	pop	edx
	jmp	near ptr ffuncall
bangerr	label	near
	pop	edx
	pop	ebx
	ret
bangen1	label	near
	push	eax
	push	1
	call	near ptr bangen
	pop	edx
	pop	eax
	jmp	near ptr errgen
bangen2	label	near
	push	eax
	push	ebx
	push	2
	call	near ptr bangen
	pop	edx
	pop	eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__1
l1__1:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr errgen
ini_nbs	endp

numberp	proc	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr nbpt
	or	eax,eax
	js	near ptr nbpt
	mov	ebx,dword ptr [znumberp]
nbpgen	label	near
	push	eax
	call	near ptr gettype
	cmp	eax,esi
	jb	near ptr nbpn
	cmp	eax,edi
	jae	near ptr nbpn
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	je	near ptr nbpn
	mov	edx,1
	jmp	near ptr ffuncall
nbpn	label	near
	add	esp,4
nbpnil	label	near
	mov	eax,esi
nbpt	label	near
	ret
numberp	endp

intgerp	proc	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr nbpt
	or	eax,eax
	js	near ptr nbpnil
	mov	ebx,dword ptr [zintgerp]
	jmp	near ptr nbpgen
intgerp	endp

rationalp	proc	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr nbpt
	or	eax,eax
	js	near ptr nbpnil
	mov	ebx,dword ptr [zrationalp]
	jmp	near ptr nbpgen
rationalp	endp

llfloat	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr llfloatf
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
llfloatr	label	near
	ret
llfloatf	label	near
	or	eax,eax
	js	near ptr llfloatr
	mov	ecx,dword ptr [zllfloat]
	jmp	near ptr bangen1
llfloat	endp

lltrunc	proc	near
lltrunc1	label	near
	mov	ecx,dword ptr [zlltrunc]
	cmp	dword ptr [bfloat],eax
	ja	near ptr lltrcret
	or	eax,eax
	jns	near ptr bangen1
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltimin]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr bangen1
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltimax]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr bangen1
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fstcw	word ptr [aux1]
	fstcw	word ptr [aux1+2]
	fwait
	or	word ptr [aux1],0C00h
	fldcw	word ptr [aux1]
	fistp	word ptr [_accusingle1]
	fldcw	word ptr [aux1+2]
	fwait
	movzx	eax,word ptr [_accusingle1]
lltrcret	label	near
	ret
lltrunc	endp

llfix	proc	near
	jmp	near ptr lltrunc1
llfix	endp

gaadd1	proc	near
	mov	ebx,eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gaadd2
	add	ax,1
	jo	near ptr gaadd3
	cmp	ax,32768
	je	near ptr gaadd3
	ret
gaadd2	label	near
	or	eax,eax
	jns	near ptr gaadd3
	mov	ebp,dword ptr [fltun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fadd	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gaadd3	label	near
	mov	eax,ebx
	mov	ebx,1
	mov	ecx,dword ptr [zgaplus]
	jmp	near ptr bangen2
gaadd1	endp

gasub1	proc	near
	mov	ebx,eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gasub2
	sub	ax,1
	jo	near ptr gasub3
	cmp	ax,32768
	je	near ptr gasub3
	ret
gasub2	label	near
	or	eax,eax
	jns	near ptr gasub3
	mov	ebp,dword ptr [fltun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fsubr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gasub3	label	near
	mov	eax,ebx
	mov	ebx,1
	mov	ecx,dword ptr [zgadiff]
	jmp	near ptr bangen2
gasub1	endp

gaabs	proc	near
	xor	ebx,ebx
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gaabs2
	cmp	ax,32768
	je	near ptr gaabs3
	cmp	ax,bx
	jge	near ptr gaabsret
	sub	bx,ax
	jo	near ptr gaabs3
	mov	eax,ebx
gaabsret	label	near
	ret
gaabs2	label	near
	or	eax,eax
	jns	near ptr gaabs3
	mov	ebx,dword ptr [fzero]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jae	near ptr gaabsret
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fsubr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	mov	eax,ebx
	ret
gaabs3	label	near
	mov	ecx,dword ptr [zgaabs]
	jmp	near ptr bangen1
gaabs	endp

gaplus	proc	near
	cmp	dx,2
	jne	near ptr gapplus
	pop	ebx
	pop	eax
gaplus2i	label	near
	mov	ecx,eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gapplus0
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gapplus1
	add	ax,bx
	jo	near ptr gapplus1
	cmp	ax,32768
	je	near ptr gapplus1
	ret
gapplus0	label	near
	or	eax,eax
	jns	near ptr gapplus1
	or	ebx,ebx
	jns	near ptr gapplus1
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fadd	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gapplus1	label	near
	push	ecx
	push	ebx
gapplus	label	near
	or	dx,dx
	je	near ptr gaprt0
	cmp	dx,1
	jne	near ptr gaplus0
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr gaprret
	or	eax,eax
	js	near ptr gaprret
	xor	ebx,ebx
	mov	ecx,dword ptr [zgaplus]
	jmp	near ptr bangen2
gaprt0	label	near
	mov	eax,edx
gaprret	label	near
	ret
gaplus0	label	near
	push	edx
	mov	eax,dword ptr [esp+edx*4]
gaplus1	label	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr gaplfx1
	or	eax,eax
	js	near ptr gaplfl3
	dec	dx
	jg	near ptr gaplgn0
gaplus2	label	near
	pop	edx
	lea	esp,dword ptr [esp+edx*4]
	ret
gaplfx0	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gaplfl0
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gaplgn1
	add	bx,ax
	jo	near ptr gaplgn0
	cmp	bx,32768
	je	near ptr gaplgn0
	mov	eax,ebx
gaplfx1	label	near
	dec	dx
	jg	near ptr gaplfx0
	jmp	near ptr gaplus2
gaplfl0	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gaplfl2
gaplfl1	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gaplfl2
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gaplgn1
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
gaplfl2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fadd	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	mov	eax,ebx
gaplfl3	label	near
	dec	dx
	jg	near ptr gaplfl1
	jmp	near ptr gaplus2
gaplgn0	label	near
	mov	ebx,dword ptr [esp+edx*4]
gaplgn1	label	near
	push	edx
	mov	ecx,dword ptr [zgaplus]
	call	near ptr bangen2
	pop	edx
	jmp	near ptr gaplus1
gaplus	endp

gatimes	proc	near
	cmp	dx,2
	jne	near ptr gattimes
	pop	ebx
	pop	eax
gatim2i	label	near
	mov	ecx,eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gattimes0
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gattimes1
	imul	ax,bx
	jo	near ptr gattimes1
	cmp	ax,32768
	je	near ptr gattimes1
	ret
gattimes0	label	near
	or	eax,eax
	jns	near ptr gattimes1
	or	ebx,ebx
	jns	near ptr gattimes1
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fmul	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gattimes1	label	near
	push	ecx
	push	ebx
gattimes	label	near
	or	dx,dx
	je	near ptr gatrt0
	cmp	dx,1
	jne	near ptr gatime0
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr gatrret
	or	eax,eax
	js	near ptr gatrret
	mov	ebx,1
	mov	ecx,dword ptr [zgatimes]
	jmp	near ptr bangen2
gatrret	label	near
	ret
gatrt0	label	near
	mov	eax,1
	ret
gatime0	label	near
	push	edx
	mov	eax,dword ptr [esp+edx*4]
gatime1	label	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr gatifx1
	or	eax,eax
	js	near ptr gatifl3
	dec	dx
	jg	near ptr gatign0
gatime2	label	near
	pop	edx
	lea	esp,dword ptr [esp+edx*4]
	ret
gatifx0	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gatifl0
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gatign1
	imul	bx,ax
	jo	near ptr gatign0
	cmp	bx,32768
	je	near ptr gatign0
	mov	eax,ebx
gatifx1	label	near
	dec	dx
	jg	near ptr gatifx0
	jmp	near ptr gatime2
gatifl0	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gatifl2
gatifl1	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gatifl2
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gatign1
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
gatifl2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fmul	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	mov	eax,ebx
gatifl3	label	near
	dec	dx
	jg	near ptr gatifl1
	jmp	near ptr gatime2
gatign0	label	near
	mov	ebx,dword ptr [esp+edx*4]
gatign1	label	near
	push	edx
	mov	ecx,dword ptr [zgatimes]
	call	near ptr bangen2
	pop	edx
	jmp	near ptr gatime1
gatimes	endp

gadinv	proc	near
	mov	ebx,eax
	jmp	near ptr gadneg
gadinv	endp

gadiff	proc	near
	cmp	dx,2
	je	near ptr gadiff2
	cmp	dx,1
	je	near ptr gadiff1
	or	dx,dx
	jne	near ptr gadiff3
	mov	eax,edx
	ret
gadiff1	label	near
	pop	ebx
gadneg	label	near
	xor	eax,eax
	cmp	dword ptr [bfloat],ebx
	ja	near ptr gadneg2
	or	ebx,ebx
	js	near ptr gadneg3
gadneg1	label	near
	mov	ecx,dword ptr [zgadinv]
	mov	eax,ebx
	jmp	near ptr bangen1
gadneg2	label	near
	sub	ax,bx
	jo	near ptr gadneg1
	cmp	ax,32768
	je	near ptr gadneg1
	ret
gadneg3	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fsubr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gadiff2	label	near
	pop	eax
gadiffp	label	near
	mov	ebx,eax
	pop	eax
gadiff2i	label	near
	mov	ecx,eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr gadiffp1
	or	eax,eax
	js	near ptr gadiffp3
gadiffp0	label	near
	mov	eax,ecx
	mov	ecx,dword ptr [zgadiff]
	jmp	near ptr bangen2
gadiffp1	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gadiffp2
	sub	ax,bx
	jo	near ptr gadiffp0
	cmp	ax,32768
	je	near ptr gadiffp0
	ret
gadiffp2	label	near
	or	ebx,ebx
	jns	near ptr gadiffp0
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gadiffp5
gadiffp3	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gadiffp4
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr gadiffp5
gadiffp4	label	near
	or	ebx,ebx
	jns	near ptr gadiffp0
gadiffp5	label	near
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fsubr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gadiff3	label	near
	dec	dx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	mov	dword ptr [esp+edx*4],offset FLAT:gadiffp
	push	edx
	inc	dx
	jmp	near ptr gaplus1
gadiff	endp

gadrev	proc	near
	mov	ebx,eax
	jmp	near ptr garev
gadrev	endp

gadiv	proc	near
	cmp	dx,2
	je	near ptr gadiv2
	cmp	dx,1
	je	near ptr gadiv1
	or	dx,dx
	jne	near ptr gadiv3
garevret	label	near
	mov	eax,1
	ret
gadiv1	label	near
	pop	ebx
garev	label	near
	cmp	ebx,1
	je	near ptr garevret
	cmp	dword ptr [bfloat],ebx
	ja	near ptr garev1
	or	ebx,ebx
	js	near ptr garev2
garev1	label	near
	mov	ecx,dword ptr [zgadrev]
	mov	eax,ebx
	jmp	near ptr bangen1
garev2	label	near
	mov	eax,1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fdivr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gadiv2	label	near
	pop	eax
gadivt	label	near
	mov	ebx,eax
	pop	eax
	mov	ecx,eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr gadivt1
	or	eax,eax
	js	near ptr gadivt3
gadivt0	label	near
	mov	eax,ecx
	mov	ecx,dword ptr [zgadiv]
	jmp	near ptr bangen2
gadivt1	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gadivt2
	or	bx,bx
	je	near ptr gadivt0
	cmp	ax,32768
	jne	near ptr gadivt11
	cmp	bx,(65536+-1)
	je	near ptr gadivt0
gadivt11	label	near
	or	ebx,ebx
	jz	short l9__3
	push	edx
	cwd
	idiv	bx
	movzx	eax,dx
	pop	edx
l9__3:
	or	ax,ax
	jne	near ptr gadivt0
	mov	eax,ecx
	or	ebx,ebx
	jz	near ptr gadivt0
	push	edx
	cwd
	idiv	bx
	movzx	eax,ax
	pop	edx
l9__4:
	cmp	ax,32768
	je	near ptr gadivt0
	ret
gadivt2	label	near
	or	ebx,ebx
	jns	near ptr gadivt0
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gadivt5
gadivt3	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gadivt4
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr gadivt5
gadivt4	label	near
	or	ebx,ebx
	jns	near ptr gadivt0
gadivt5	label	near
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fdivr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gadiv3	label	near
	dec	dx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	mov	dword ptr [esp+edx*4],offset FLAT:gadivt
	push	edx
	inc	dx
	jmp	near ptr gatime1
gadiv	endp

gaquomod	proc	near
	mov	ecx,dword ptr [zgaquomod]
	or	eax,eax
	js	near ptr bangen2
	or	ebx,ebx
	js	near ptr bangen2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen2
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr bangen2
	or	bx,bx
	je	near ptr bangen2
	cmp	ax,32768
	jne	near ptr gaquomod1
	cmp	bx,(65536+-1)
	je	near ptr bangen2
gaquomod1	label	near
	mov	ecx,eax
	or	ebx,ebx
	jz	near ptr gaquomodg
	push	edx
	cwd
	idiv	bx
	movzx	eax,ax
	pop	edx
l9__5:
	cmp	ax,32768
	je	near ptr gaquomodg
	mov	edx,ecx
	or	ebx,ebx
	jz	short l9__6
	push	eax
	mov	eax,edx
	cwd
	idiv	bx
	movzx	edx,dx
	pop	eax
l9__6:
	or	dx,dx
	jge	near ptr gamodret
	or	ax,ax
	jg	near ptr gaquomod3
	or	ax,ax
	jl	near ptr gaquomod2
	or	bx,bx
	jle	near ptr gaquomod3
gaquomod2	label	near
	dec	ax
	jmp	near ptr gaquoret
gaquomod3	label	near
	inc	ax
gaquoret	label	near
	or	bx,bx
	jge	near ptr gamodr3
	neg	bx
gamodr3	label	near
	add	dx,bx
	jo	near ptr gaquomodg
gamodret	label	near
	mov	ebx,dword ptr [zexmod]
	mov	dword ptr [ebx],edx
	ret
gaquomodg	label	near
	mov	eax,ecx
	mov	ecx,dword ptr [zgaquomod]
	jmp	near ptr bangen2
gaquo2	label	near
	or	ebx,ebx
	js	near ptr gaquo4
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr bangen2
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr gaquo4
gaquo3	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
gaquo4	label	near
	mov	ecx,eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fdivr	dword ptr [_accusingle2]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	ret
gaquomod	endp

gamod	proc	near
	call	near ptr gaquomod
	mov	eax,dword ptr [zexmod]
	mov	eax,dword ptr [eax]
	ret
gacom	label	near
	cmp	dx,2
	jge	near ptr gacom0
	mov	eax,2
	mov	ebx,dword ptr [cpfnt]
	jmp	near ptr errwna
gacom0	label	near
	push	edx
	mov	eax,dword ptr [esp+edx*4]
gacom1	label	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr gacomfx1
	or	eax,eax
	js	near ptr gacomfl3
	dec	dx
	jg	near ptr gacomgn0
gacom2	label	near
	pop	edx
	dec	dx
	lea	esp,dword ptr [esp+edx*4]
	pop	eax
	ret
gacom3	label	near
	mov	eax,esi
	pop	edx
	lea	esp,dword ptr [esp+edx*4]
	ret
gacomfx0	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gacomfl0
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gacomgn1
	cmp	ax,bx
	je	near ptr gacomfx2
	cmp	ax,bx
	jg	near ptr gacomfx3
	mov	eax,4
	jmp	near ptr gacomfx4
gacomfx2	label	near
	mov	eax,2
	jmp	near ptr gacomfx4
gacomfx3	label	near
	mov	eax,1
gacomfx4	label	near
	and	ax,cx
	or	ax,ax
	je	near ptr gacom3
	mov	eax,ebx
gacomfx1	label	near
	dec	dx
	jg	near ptr gacomfx0
	jmp	near ptr gacom2
gacomfl0	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gacomfl2
gacomfl1	label	near
	mov	ebx,dword ptr [esp+edx*4]
	or	ebx,ebx
	js	near ptr gacomfl2
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gacomgn1
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
gacomfl2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	je	near ptr gacomfl4
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr gacomfl5
	mov	eax,4
	jmp	near ptr gacomfl6
gacomfl4	label	near
	mov	eax,2
	jmp	near ptr gacomfl6
gacomfl5	label	near
	mov	eax,1
gacomfl6	label	near
	and	ax,cx
	or	ax,ax
	je	near ptr gacom3
	mov	eax,ebx
gacomfl3	label	near
	dec	dx
	jg	near ptr gacomfl1
	jmp	near ptr gacom2
gacomgn0	label	near
	mov	ebx,dword ptr [esp+edx*4]
gacomgn1	label	near
	push	edx
	push	ecx
	push	ebx
	mov	ecx,dword ptr [zgacomp]
	call	near ptr bangensp2
	pop	ebx
	pop	ecx
	pop	edx
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gacom3
	or	ax,ax
	je	near ptr gacomgn2
	cmp	ax,1
	je	near ptr gacomgn3
	cmp	ax,word ptr [moinsun]
	jne	near ptr gacom3
	mov	eax,4
	jmp	near ptr gacomgn4
gacomgn2	label	near
	mov	eax,2
	jmp	near ptr gacomgn4
gacomgn3	label	near
	mov	eax,1
gacomgn4	label	near
	and	ax,cx
	or	ax,ax
	je	near ptr gacom3
	mov	eax,ebx
	jmp	near ptr gacom1
bangensp2	label	near
	push	offset FLAT:oneret
	push	eax
	push	ebx
	push	2
	call	near ptr bangen
	mov	eax,dword ptr [esp+8]
	mov	ecx,dword ptr [cpfnt]
	mov	dword ptr [esp+12],offset FLAT:tworet
	call	near ptr bangen
	pop	edx
	pop	eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr errgen
oneret	label	near
	ret
tworet	label	near
	pop	edx
	pop	ebx
	pop	ecx
	pop	edx
	cmp	eax,esi
	je	near ptr gacom3
	mov	eax,ebx
	jmp	near ptr gacom1
gamod	endp

gacomp	proc	near
	mov	ecx,dword ptr [zgacomp]
	cmp	dword ptr [bfloat],eax
	ja	near ptr gacomp5
	or	eax,eax
	jns	near ptr bangen2
	or	ebx,ebx
	js	near ptr gacomp1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr bangen2
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
gacomp1	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	je	near ptr gacomp3
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr gacomp4
gacomp2	label	near
	mov	eax,dword ptr [moinsun]
	ret
gacomp3	label	near
	xor	eax,eax
	ret
gacomp4	label	near
	mov	eax,1
	ret
gacomp5	label	near
	cmp	dword ptr [bfloat],ebx
	ja	near ptr gacomp6
	or	ebx,ebx
	jns	near ptr bangen2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr gacomp1
gacomp6	label	near
	cmp	ax,bx
	je	near ptr gacomp3
	cmp	ax,bx
	jg	near ptr gacomp4
	jmp	near ptr gacomp2
gacomp	endp

zerop	proc	near
	mov	ebp,dword ptr [zzerop]
	mov	dword ptr [cpfnt],ebp
	push	eax
	push	0
	mov	edx,2
	mov	ecx,2
	jmp	near ptr gacom
zerop	endp

minusp	proc	near
	mov	ebp,dword ptr [zminusp]
	mov	dword ptr [cpfnt],ebp
	push	eax
	push	0
	mov	edx,2
	mov	ecx,4
	jmp	near ptr gacom
minusp	endp

plusp	proc	near
	mov	ebp,dword ptr [zplusp]
	mov	dword ptr [cpfnt],ebp
	push	eax
	push	0
	mov	edx,2
	mov	ecx,3
	jmp	near ptr gacom
gaeqn	label	near
	push	ecx
	push	offset FLAT:gaeqnret
	push	eax
	push	ebx
	mov	ebp,dword ptr [zgaeqen]
	mov	dword ptr [cpfnt],ebp
	mov	edx,2
	mov	ecx,2
	jmp	near ptr gacom
gaeqnret	label	near
	pop	ecx
	ret
plusp	endp

gaeqen	proc	near
	cmp	edx,2
	jne	near ptr gaeqen2
	pop	ebx
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr gaeqen1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr gaeqen1
	cmp	ax,bx
	je	near ptr gaeqqn0
	mov	eax,esi
gaeqqn0	label	near
	ret
gaeqen1	label	near
	push	eax
	push	ebx
gaeqen2	label	near
	mov	ebp,dword ptr [zgaeqen]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,2
	jmp	near ptr gacom
gaeqen	endp

ganeqn	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr ganen1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr ganen1
	cmp	ax,bx
	jne	near ptr ganen0
	mov	eax,esi
ganen0	label	near
	ret
ganen1	label	near
	push	eax
	push	ebx
	mov	ebp,dword ptr [zganeqn]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,5
	mov	edx,2
	jmp	near ptr gacom
ganeqn	endp

gagt	proc	near
	mov	ebp,dword ptr [zgagt]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,1
	jmp	near ptr gacom
gagt	endp

gage	proc	near
	mov	ebp,dword ptr [zgage]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,3
	jmp	near ptr gacom
gage	endp

galt	proc	near
	mov	ebp,dword ptr [zgalt]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,4
	jmp	near ptr gacom
galt	endp

gale	proc	near
	mov	ebp,dword ptr [zgale]
	mov	dword ptr [cpfnt],ebp
	mov	ecx,6
	jmp	near ptr gacom
gale	endp

min	proc	near
	or	dx,dx
	je	near ptr minerr
	pop	eax
	jmp	near ptr min3
min1	label	near
	mov	ebx,dword ptr [esp]
	push	edx
	call	near ptr mintwo
	pop	edx
	cmp	eax,esi
	jne	near ptr min2
	pop	eax
	jmp	near ptr min3
min2	label	near
	add	esp,4
min3	label	near
	dec	dx
	jg	near ptr min1
	ret
minerr	label	near
	mov	eax,1
	mov	ebx,dword ptr [zmin]
	jmp	near ptr errwna
mintwo	label	near
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr galt
min	endp

max	proc	near
	or	dx,dx
	je	near ptr maxerr
	pop	eax
	jmp	near ptr max3
max1	label	near
	mov	ebx,dword ptr [esp]
	push	edx
	call	near ptr maxtwo
	pop	edx
	cmp	eax,esi
	jne	near ptr max2
	pop	eax
	jmp	near ptr max3
max2	label	near
	add	esp,4
max3	label	near
	dec	dx
	jg	near ptr max1
	ret
maxerr	label	near
	mov	eax,1
	mov	ebx,dword ptr [zmax]
	jmp	near ptr errwna
maxtwo	label	near
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr gagt
max	endp

llsin	proc	near
	mov	ecx,dword ptr [zllsin]
	or	eax,eax
	js	near ptr sin2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
sin2	label	near
	;; Calling intrinsic fsin
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fsin
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with fsin
	ret
llsin	endp

llcos	proc	near
	mov	ecx,dword ptr [zllcos]
	or	eax,eax
	js	near ptr cos2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
cos2	label	near
	;; Calling intrinsic fcos
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fcos
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with fcos
	ret
llcos	endp

llasin	proc	near
	mov	ecx,dword ptr [zllasin]
	or	eax,eax
	js	near ptr asin2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	cmp	ax,1
	jg	near ptr bangen1
	cmp	ax,word ptr [moinsun]
	jl	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr asin3
asin2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr bangen1
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltmun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr bangen1
asin3	label	near
	;; Calling intrinsic asin
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fst	st(1)
	fmul	st,st(0)
	fld1
	fsubr
	fsqrt
	fpatan
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with asin
	ret
llasin	endp

llacos	proc	near
	mov	ecx,dword ptr [zllacos]
	or	eax,eax
	js	near ptr acos2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	cmp	ax,1
	jg	near ptr bangen1
	cmp	ax,word ptr [moinsun]
	jl	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr acos3
acos2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr bangen1
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fltmun]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr bangen1
acos3	label	near
	;; Calling intrinsic acos
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fst	st(1)
	fmul	st,st(0)
	fld1
	fsubr
	fsqrt
	fxch
	fpatan
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with acos
	ret
llacos	endp

llatan	proc	near
	mov	ecx,dword ptr [zllatan]
	or	eax,eax
	js	near ptr atan2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
atan2	label	near
	;; Calling intrinsic atan
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fld1
	fpatan
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with atan
	ret
llatan	endp

llexp	proc	near
	mov	ecx,dword ptr [zllexp]
	or	eax,eax
	js	near ptr exp2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
exp2	label	near
	;; Calling intrinsic exp
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fldl2e
	fmul
	fld	st(0)
	frndint
	fxch	st(1)
	fsub	st(0),st(1)
	f2xm1
	fld1
	faddp   st(1), st(0)
	fscale
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	fstp	st(0)
	;; Done with exp
	ret
llexp	endp

lllog	proc	near
	mov	ecx,dword ptr [zlllog]
	or	eax,eax
	js	near ptr log2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	or	ax,ax
	jle	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr log3
log2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fzero]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jbe	near ptr bangen1
log3	label	near
	;; Calling intrinsic log
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fldln2
	fxch	st(1)
	fyl2x
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with log
	ret
lllog	endp

lllog10	proc	near
	mov	ecx,dword ptr [zlllog10]
	or	eax,eax
	js	near ptr log102
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	or	ax,ax
	jle	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr log103
log102	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fzero]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jbe	near ptr bangen1
log103	label	near
	;; Calling intrinsic log10
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fldlg2
	fxch	st(1)
	fyl2x
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with log10
	ret
lllog10	endp

llpower	proc	near
	mov	ecx,dword ptr [zllpower]
	or	eax,eax
	js	near ptr power2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
power2	label	near
	or	ebx,ebx
	js	near ptr power3
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr bangen2
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
power3	label	near
	;; Calling intrinsic power
	mov	dword ptr [_accusingle2],ebx
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fyl2x
	fld1
	fld	st(1)
	frndint
	fxch	st(2)
	fsub	st,st(2)
	f2xm1
	fadd
	fscale
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	fstp	st(0)
	;; Done with power
	ret
llpower	endp

llsqrt	proc	near
	mov	ecx,dword ptr [zllsqrt]
	or	eax,eax
	js	near ptr sqrt2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr bangen1
	or	ax,ax
	jl	near ptr bangen1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr sqrt3
sqrt2	label	near
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [fzero]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr bangen1
sqrt3	label	near
	;; Calling intrinsic fsqrt
	mov	dword ptr [_accusingle2],eax
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	fsqrt
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; Done with fsqrt
	ret
llsqrt	endp

llfixmax	proc	near
	mov	eax,32767
	ret
llfixmax	endp

llfixmin	proc	near
	mov	eax,(65536+-32767)
	ret
llfixmin	endp

llminus0	proc	near
	mov	eax,32768
	ret
l__8:
	call	near ptr gccons
	jmp	near ptr l1__8
l__7:
	call	near ptr gccons
	jmp	near ptr l1__7
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
l__1:
	call	near ptr gccons
	jmp	near ptr l1__1
llminus0	endp
_TEXT	ends
	end
