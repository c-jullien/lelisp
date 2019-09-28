	.386p
	.387

	include	physio.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	physio.equ
ini_pio	proc	near
	mov	eax,dword ptr [maxchan]
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [tabchan],eax
	sub	word ptr [maxchan],3
	mov	ebx,dword ptr [maxchan]
	add	bx,1
	mov	eax,esi
	mov	ecx,1
	mov	dword ptr [lgbuffer],1024
	call	near ptr inchini
	mov	eax,esi
	call	near ptr inopen
	mov	ebx,dword ptr [maxchan]
	mov	eax,esi
	mov	ecx,2
	call	near ptr outchini
	mov	eax,dword ptr [maxchan]
	call	near ptr outopen
	mov	ebx,dword ptr [maxchan]
	add	bx,2
	mov	eax,esi
	mov	ecx,2
	call	near ptr outchini
	mov	eax,dword ptr [maxchan]
	add	ax,2
	call	near ptr outchani
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	mov	dword ptr [maxpocou],eax
	inc	ax
	mov	dword ptr [nbrig],eax
	mov	eax,dword ptr [maxchan]
	call	near ptr outchani
	mov	eax,1
	xor	ebx,ebx
	call	near ptr makestrg
	mov	dword ptr [bufch],eax
	mov	eax,2
	mov	ebx,94
	call	near ptr makestrg
	mov	dword ptr [cntrlc],eax
	mov	eax,3
	mov	ebx,8
	call	near ptr makestrg
	mov	dword ptr [rubstrg],eax
	mov	ebp,dword ptr [rubstrg]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+9],32
	mov	eax,3
	mov	ebx,offset FLAT:pnmac494
	mov	ecx,offset FLAT:tyi
	mov	edx,offset FLAT:ztyi
	push	z_tyi
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac495
	mov	ecx,offset FLAT:tys
	mov	edx,offset FLAT:ztys
	push	z_tys
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac496
	mov	ecx,offset FLAT:tyinstrg
	mov	edx,offset FLAT:ztyinstrg
	push	z_tyinstrg
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac497
	mov	ecx,offset FLAT:tyo
	mov	edx,offset FLAT:ztyo
	push	z_tyo
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac498
	mov	ecx,offset FLAT:tyflush
	mov	edx,offset FLAT:ztyflush
	push	z_tyflush
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac499
	mov	ecx,offset FLAT:tyback
	mov	edx,offset FLAT:ztyback
	push	z_tyback
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac500
	mov	ecx,offset FLAT:tynewln
	mov	edx,offset FLAT:ztynewln
	push	z_tynewln
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac501
	mov	ecx,offset FLAT:tycn
	mov	edx,offset FLAT:ztycn
	push	z_tycn
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac502
	mov	ecx,offset FLAT:tystrg
	mov	edx,offset FLAT:ztystrg
	push	z_tystrg
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac503
	mov	ecx,offset FLAT:tycursor
	mov	edx,offset FLAT:ztycursor
	push	z_tycursor
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac504
	mov	ecx,offset FLAT:tycls
	mov	edx,offset FLAT:ztycls
	push	z_tycls
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac505
	mov	ecx,offset FLAT:tyrdspl
	mov	edx,offset FLAT:ztyrdspl
	push	z_tyrdspl
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac506
	mov	ecx,offset FLAT:ztty
	call	near ptr inicst
	mov	ebp,dword ptr [ztty]
	mov	dword ptr [cpkgc],ebp
	mov	eax,3
	mov	ebx,offset FLAT:pnmac507
	mov	ecx,offset FLAT:ttytyi
	mov	edx,offset FLAT:zttytyi
	push	z_ttytyi
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac508
	mov	ecx,offset FLAT:ttytys
	mov	edx,offset FLAT:zttytys
	push	z_ttytys
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac509
	mov	ecx,offset FLAT:ttytyist
	mov	edx,offset FLAT:zttytyist
	push	z_ttytyist
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac510
	mov	ecx,offset FLAT:ttytyo
	mov	edx,offset FLAT:zttytyo
	push	z_ttytyo
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac511
	mov	ecx,offset FLAT:ttytyflu
	mov	edx,offset FLAT:zttytyflu
	push	z_ttytyflu
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac512
	mov	ecx,offset FLAT:ttytybac
	mov	edx,offset FLAT:zttytybac
	push	z_ttytybac
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac513
	mov	ecx,offset FLAT:ttytynew
	mov	edx,offset FLAT:zttytynew
	push	z_ttytynew
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac514
	mov	ecx,offset FLAT:ttytycn
	mov	edx,offset FLAT:zttytycn
	push	z_ttytycn
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac515
	mov	ecx,offset FLAT:ttytystr
	mov	edx,offset FLAT:zttytystr
	push	z_ttytystr
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac516
	mov	ecx,offset FLAT:ttytycur
	mov	edx,offset FLAT:zttytycur
	push	z_ttytycur
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac517
	mov	ecx,offset FLAT:ttytycls
	mov	edx,offset FLAT:zttytycls
	push	z_ttytycls
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac518
	mov	ecx,offset FLAT:ttytyrds
	mov	edx,offset FLAT:zttytyrds
	push	z_ttytyrds
	call	near ptr inisymb
	mov	ebp,dword ptr [zsyspkgc]
	mov	dword ptr [cpkgc],ebp
	mov	eax,3
	mov	ebx,offset FLAT:pnmac519
	mov	ecx,offset FLAT:zsyspktty
	call	near ptr inicst
	mov	ebp,dword ptr [ztty]
	mov	dword ptr [eax],ebp
	mov	dword ptr [cpkgc],esi
	mov	eax,4
	mov	ebx,offset FLAT:pnmac520
	mov	ecx,offset FLAT:ztyco
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac521
	mov	ecx,offset FLAT:bol
	mov	edx,offset FLAT:zbol
	push	z_bol
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac522
	mov	ecx,offset FLAT:finmax
	mov	edx,offset FLAT:zfinmax
	push	z_finmax
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac523
	mov	ecx,offset FLAT:finpos
	mov	edx,offset FLAT:zfinpos
	push	z_finpos
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac524
	mov	ecx,offset FLAT:finbuf
	mov	edx,offset FLAT:zfinbuf
	push	z_finbuf
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac525
	mov	ecx,offset FLAT:lleof
	mov	edx,offset FLAT:zlleof
	push	z_lleof
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac526
	mov	ecx,offset FLAT:prompt
	mov	edx,offset FLAT:zprompt
	push	z_prompt
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac527
	mov	ecx,offset FLAT:zstdprmpt
	call	near ptr inicst
	mov	ebp,dword ptr [28+eax]
	mov	dword ptr [curprmpt],ebp
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,18
	mov	ebx,offset FLAT:pnmac528
	mov	ecx,offset FLAT:zrealterm
	call	near ptr inicst
	mov	ebp,dword ptr [zt]
	mov	dword ptr [eax],ebp
	mov	eax,14
	mov	ebx,offset FLAT:pnmac529
	mov	ecx,offset FLAT:zlinemode
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	dword ptr [cpkgc],esi
	mov	eax,5
	mov	ebx,offset FLAT:pnmac530
	mov	ecx,offset FLAT:openi
	mov	edx,offset FLAT:zopeni
	push	z_openi
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac531
	mov	ecx,offset FLAT:openo
	mov	edx,offset FLAT:zopeno
	push	z_openo
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac532
	mov	ecx,offset FLAT:opena
	mov	edx,offset FLAT:zopena
	push	z_opena
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac533
	mov	ecx,offset FLAT:openib
	mov	edx,offset FLAT:zopenib
	push	z_openib
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac534
	mov	ecx,offset FLAT:openob
	mov	edx,offset FLAT:zopenob
	push	z_openob
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac535
	mov	ecx,offset FLAT:openab
	mov	edx,offset FLAT:zopenab
	push	z_openab
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac536
	mov	ecx,offset FLAT:input
	mov	edx,offset FLAT:zinput
	push	z_input
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac537
	mov	ecx,offset FLAT:inchan
	mov	edx,offset FLAT:zinchan
	push	z_inchan
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac538
	mov	ecx,offset FLAT:outchan
	mov	edx,offset FLAT:zoutchan
	push	z_outchan
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac539
	mov	ecx,offset FLAT:fchannel
	mov	edx,offset FLAT:zfchannel
	push	z_fchannel
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac540
	mov	ecx,offset FLAT:output
	mov	edx,offset FLAT:zoutput
	push	z_output
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac541
	mov	ecx,offset FLAT:lclose
	mov	edx,offset FLAT:zlclose
	push	z_lclose
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac542
	mov	ecx,offset FLAT:deletfi
	mov	edx,offset FLAT:zdeletfi
	push	z_deletfi
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac543
	mov	ecx,offset FLAT:renamfi
	mov	edx,offset FLAT:zrenamfi
	push	z_renamfi
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac544
	mov	ecx,offset FLAT:copyfi
	mov	edx,offset FLAT:zcopyfi
	push	z_copyfi
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac545
	mov	ecx,offset FLAT:probefi
	mov	edx,offset FLAT:zprobefi
	push	z_probefi
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac546
	mov	ecx,offset FLAT:savecor
	mov	edx,offset FLAT:zsavecor
	push	z_savecor
	call	near ptr inisymb
	mov	eax,12
	mov	ebx,offset FLAT:pnmac547
	mov	ecx,offset FLAT:restcor
	mov	edx,offset FLAT:zrestcor
	push	z_restcor
	call	near ptr inisymb
	mov	eax,17
	mov	ebx,offset FLAT:pnmac548
	mov	ecx,offset FLAT:coercns
	mov	edx,offset FLAT:zcoercns
	push	z_coercns
	call	near ptr inisymb
	mov	eax,16
	mov	ebx,offset FLAT:pnmac549
	mov	ecx,offset FLAT:makdir
	mov	edx,offset FLAT:zmakdir
	push	z_makdir
	call	near ptr inisymb
	mov	eax,16
	mov	ebx,offset FLAT:pnmac550
	mov	ecx,offset FLAT:remdir
	mov	edx,offset FLAT:zremdir
	push	z_remdir
	call	near ptr inisymb
	ret
phytrue	label	near
	mov	eax,dword ptr [zt]
	ret
ini_pio	endp

tyi	proc	near
	mov	eax,dword ptr [ztyi]
	jmp	near ptr totty0
tyi	endp

tys	proc	near
	mov	eax,dword ptr [ztys]
	jmp	near ptr totty0
tys	endp

tyinstrg	proc	near
	push	eax
	mov	edx,1
	mov	eax,dword ptr [ztyinstrg]
	jmp	near ptr totty
tyinstrg	endp

tyflush	proc	near
	mov	eax,dword ptr [ztyflush]
	jmp	near ptr totty0
tyflush	endp

tyo	proc	near
	mov	eax,dword ptr [ztyo]
	jmp	near ptr totty
tyo	endp

tyback	proc	near
	push	eax
	mov	edx,1
	mov	eax,dword ptr [ztyback]
	jmp	near ptr totty
tyback	endp

tynewln	proc	near
	mov	eax,dword ptr [ztynewln]
	jmp	near ptr totty0
tynewln	endp

tycn	proc	near
	push	eax
	mov	edx,1
	mov	eax,dword ptr [ztycn]
	jmp	near ptr totty
tycn	endp

tystrg	proc	near
	push	eax
	push	ebx
	mov	edx,2
	mov	eax,dword ptr [ztystrg]
	jmp	near ptr totty
tystrg	endp

tycursor	proc	near
	push	eax
	push	ebx
	mov	edx,2
	mov	eax,dword ptr [ztycursor]
	jmp	near ptr totty
tycursor	endp

tycls	proc	near
	mov	eax,dword ptr [ztycls]
	jmp	near ptr totty0
tycls	endp

tyrdspl	proc	near
	mov	eax,dword ptr [ztyrdspl]
	jmp	near ptr totty
totty0	label	near
	xor	edx,edx
totty	label	near
	push	edx
	mov	ebx,eax
	mov	eax,dword ptr [zsyspktty]
	mov	eax,dword ptr [eax]
	mov	ecx,esi
	push	ebx
	call	near ptr getfns
	pop	ebx
	cmp	eax,esi
	je	near ptr tottyer
	pop	edx
	jmp	near ptr ffuncall
tottyer	label	near
	mov	eax,dword ptr [zsyspktty]
	mov	eax,dword ptr [eax]
	jmp	near ptr errudf
tyrdspl	endp

ttytyi	proc	near
	call	near ptr tyflush
l__1:
	dec	_itloop
	jz	near ptr l_l__1
l1_l__1:
	cmp	word ptr [itcount],0
	je 	short ll__1
	cmp	word ptr [itstate],0 
	je 	short ll__1
	call	near ptr ithard
ll__1:
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ttyin
	mov	dword ptr [crwork],eax
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	cmp	dword ptr [crwork],0ffh
	je	near ptr l__1
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	ret
ttytyi	endp

ttytys	proc	near
	call	near ptr tyflush
	;; Prepare a C function call
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:dux1
	call	near ptr _ttys
	add	esp,4
	cmp	eax,-1
	je 	short tys__2
	xor	eax,eax
	mov 	al,byte ptr [dux1]
tys__2:
	mov	dword ptr [crwork],eax
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	movzx	eax,bp
	shr	ebp,16
	mov	ebx,ebp
	or	bx,bx
	je	near ptr tys9
	mov	eax,esi
tys9	label	near
	ret
ttytys	endp

ttytyist	proc	near
	cmp	dword ptr [bstrg],eax
	ja	near ptr ttyinr
	cmp	eax,esi
	jae	near ptr ttyinr
	push	eax
	call	near ptr tyflush
	pop	eax
	;; Entering TTYINSTR
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork-4]
	push	dword ptr [crwork]
	call	near ptr _ttyinstr
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	eax,dword ptr [crwork]
	;; Leaving TTYINSTR
	ret
ttyinr	label	near
	mov	ebx,dword ptr [zttytyist]
	jmp	near ptr errnsa
ttytyist	endp

ttytyo	proc	near
	or	dx,dx
	je	near ptr ttytyo9
	push	edx
	inc	dx
	jmp	near ptr ttytyo2
ttytyo1	label	near
	mov	eax,dword ptr [esp+edx*4]
	cmp	eax,esi
	je	near ptr ttytyo2
	push	edx
	call	near ptr ttytyoi
	pop	edx
ttytyo2	label	near
	dec	dx
	jg	near ptr ttytyo1
	pop	edx
	lea	esp,dword ptr [esp+edx*4]
	ret
ttytyo9	label	near
	mov	eax,esi
	ret
ttytyoi	label	near
	push	dword ptr [ostream]
	push	eax
	mov	eax,dword ptr [maxchan]
	add	ax,2
	call	near ptr outchani
	pop	eax
	mov	ecx,offset FLAT:ttytyoi1
ttytyoi0	label	near
	call	near ptr sysprot
	pop	eax
	xchg	dword ptr [esp],eax
	push	ecx
	push	ebx
	call	near ptr outchani
	pop	ebx
	pop	ecx
	pop	eax
	jmp	ecx
ttytyoi1	label	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr ttytyof
	cmp	eax,edi
	jge	near ptr ttytyoc
	cmp	dword ptr [bstrg],eax
	ja	short lmac551
	cmp	eax,esi
	jb	near ptr ttytyos
lmac551:
ttytyoer	label	near
	mov	ebx,dword ptr [zttytyo]
	jmp	near ptr errnia
ttytyof	label	near
	mov	edx,eax
	push	eax
	call	near ptr outch
	pop	eax
	ret
ttytyoc	label	near
	push	eax
ttytyoc1	label	near
	push	dword ptr [4+eax]
	mov	edx,dword ptr [eax]
	call	near ptr outch
	pop	eax
	cmp	eax,edi
	jge	near ptr ttytyoc1
	cmp	eax,esi
	jne	near ptr ttytyoer
	pop	eax
	ret
ttytyos	label	near
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	add	bx,word ptr [pocour]
	cmp	bx,word ptr [maxpocou]
	jl	near ptr ttytyos1
	call	near ptr flulin
ttytyos1	label	near
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [eax]
	add	esi,8
	mov	ebp,dword ptr [bufout]
	mov	edi,dword ptr [ebp]
	mov	ebp,dword ptr [pocour]
	lea	edi,dword ptr [edi+ebp+8]
	mov	ecx,ebx
	jecxz	short l__3
	cmp	esi,edi
	jae	short l__3
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__3:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	add	word ptr [pocour],bx
	ret
ttytyo	endp

ttytyflu	proc	near
	mov	eax,dword ptr [maxchan]
	add	ax,2
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [ebp+20]
	or	ax,ax
	jne	near ptr ttytyfl1
	ret
ttytyfl1	label	near
	push	dword ptr [ostream]
	mov	eax,dword ptr [maxchan]
	add	ax,2
	call	near ptr outchani
	mov	ecx,offset FLAT:flulin
	jmp	near ptr ttytyoi0
ttytyflu	endp

ttytybac	proc	near
	mov	eax,dword ptr [rubstrg]
	mov	ebx,3
	jmp	near ptr ttytystr
ttytybac	endp

ttytynew	proc	near
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _ttycrlf
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	ret
ttytynew	endp

ttytycn	proc	near
	mov	ebx,dword ptr [bufch]
	mov	ebp,dword ptr [ebx]
	mov	byte ptr [ebp+8],al
	;; Entering TTYSTRG
	push	ebp
	mov	ebp,dword ptr [ebx]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	1
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	;; Leaving TTYSTRG
	ret
ttytycn	endp

ttytystr	proc	near
	cmp	dword ptr [bstrg],eax
	ja	near ptr tystrers
	cmp	eax,esi
	jae	near ptr tystrers
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr tystrern
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	or	bx,bx
	jl	near ptr ttytyst0
	cmp	bx,cx
	jl	near ptr ttytyst1
ttytyst0	label	near
	mov	ebx,ecx
ttytyst1	label	near
	;; Entering TTYSTRG
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	;; Leaving TTYSTRG
	ret
tystrers	label	near
	mov	ebx,dword ptr [ztystrg]
	jmp	near ptr errnsa
tystrern	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [ztystrg]
	jmp	near ptr errnia
ttytystr	endp

ttytycur	proc	near
	ret
ttytycur	endp

ttytycls	proc	near
	ret
ttytycls	endp

ttytyrds	proc	near
	jmp	near ptr rdpscrn
ttytyrds	endp

bol	proc	near
	call	near ptr inphyl
	mov	eax,esi
	ret
bol	endp

finmax	proc	near
	push	0
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [4+ebp]
	push	ebx
	mov	ebx,dword ptr [zfinmax]
	mov	ecx,dword ptr [inmax]
	call	near ptr getsetn
	mov	dword ptr [inmax],eax
	ret
finmax	endp

finpos	proc	near
	push	0
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [4+ebp]
	push	ebx
	mov	ebx,dword ptr [zfinpos]
	mov	ecx,dword ptr [polig]
	call	near ptr getsetn
	mov	dword ptr [polig],eax
	ret
finpos	endp

finbuf	proc	near
	or	dx,dx
	jne	near ptr inbu1
	mov	eax,dword ptr [ligne]
	ret
inbu1	label	near
	mov	ebx,dword ptr [zfinbuf]
	cmp	dx,1
	je	near ptr inbu2
	cmp	dx,2
	je	near ptr inbu5
	mov	eax,2
	mov	ebx,dword ptr [zfinbuf]
	jmp	near ptr errwna
inbu2	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr inbu3
	jmp	near ptr errnia
inbu3	label	near
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+eax+8]
	ret
inbu5	label	near
	pop	ebx
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr inbu6
	jmp	near ptr errnia
inbu6	label	near
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
	mov	eax,ebx
	ret
inphy	label	near
	mov	bp,word ptr [inmax]
	cmp	word ptr [polig],bp
	jge	near ptr inph2
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	push	edi
	mov	edi,ebp
	mov	ebp,dword ptr [polig]
	lea	ebp,[edi+ebp*1+8]
	pop	edi
	movzx	edx,byte ptr [ebp]
	inc	word ptr [polig]
	ret
inph2	label	near
	dec	_itloop
	jz	near ptr l___4
l1___4:
	cmp	word ptr [itcount],0
	je 	short l__4
	cmp	word ptr [itstate],0 
	je 	short l__4
	call	near ptr ithard
l__4:
	push	eax
	push	ebx
	push	edx
	mov	eax,dword ptr [zbol]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	pop	ebx
	pop	eax
	mov	dword ptr [polig],0
	jmp	near ptr inphy
inphyl	label	near
	push	ebx
	push	edx
	push	eax
	push	0
	push	0
inphyl0	label	near
	mov	ebp,dword ptr [istream]
	cmp	dword ptr [bfloat],ebp
	ja	near ptr inchf
inphy1	label	near
	mov	eax,dword ptr [curprmpt]
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	call	near ptr tystrg
	xor	edx,edx
	mov	ecx,dword ptr [zlinemode]
	cmp	dword ptr [ecx],esi
	jne	near ptr inphln
	mov	ecx,dword ptr [zrealterm]
	mov	ecx,dword ptr [ecx]
	cmp	ecx,esi
	je	near ptr inphp3
inphy3	label	near
	call	near ptr tyi
	mov	dword ptr [esp+4],eax
	cmp	ax,8
	je	near ptr inphy6
	cmp	ax,127
	je	near ptr inphy6
	cmp	ax,24
	je	near ptr inphy8
	cmp	ax,21
	je	near ptr inphy8
	cmp	ax,13
	je	near ptr inphy9
	cmp	ax,10
	je	near ptr inphy9
	cmp	ax,32
	jl	near ptr inphy5
	call	near ptr tycn
inphy4	label	near
	mov	eax,dword ptr [esp+4]
	mov	edx,dword ptr [esp]
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+edx+8],al
	inc	dx
	mov	dword ptr [esp],edx
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	cmp	dx,ax
	jl	near ptr inphy3
	jmp	near ptr inphyd
inphy5	label	near
	add	ax,64
	mov	ebp,dword ptr [cntrlc]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+9],al
	mov	eax,dword ptr [cntrlc]
	mov	ebx,2
	call	near ptr tystrg
	jmp	near ptr inphy4
inphy6	label	near
	mov	edx,dword ptr [esp]
	or	dx,dx
	je	near ptr inphy3
	dec	dx
	mov	dword ptr [esp],edx
	call	near ptr inphy60
	jmp	near ptr inphy3
inphy60	label	near
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+edx+8]
	cmp	ax,32
	jge	near ptr inphy61
	add	ax,64
	call	near ptr tyback
	mov	eax,94
inphy61	label	near
	jmp	near ptr tyback
inphy8	label	near
	mov	edx,dword ptr [esp]
	or	dx,dx
	je	near ptr inphy3
	jmp	near ptr inphy81
inphy80	label	near
	mov	dword ptr [esp],edx
	call	near ptr inphy60
	mov	edx,dword ptr [esp]
inphy81	label	near
	dec	dx
	jge	near ptr inphy80
	mov	dword ptr [esp],0
	jmp	near ptr inphy3
inphy9	label	near
	call	near ptr tynewln
inphyc	label	near
	mov	edx,dword ptr [esp]
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+edx+8],13
	inc	dx
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+edx+8],10
	inc	dx
inphyd	label	near
	mov	dword ptr [inmax],edx
	add	esp,8
	pop	eax
	pop	edx
	pop	ebx
	ret
inphp2	label	near
	mov	edx,dword ptr [esp]
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+edx+8],al
	inc	dx
	mov	dword ptr [esp],edx
inphp3	label	near
	call	near ptr tyi
	cmp	ax,10
	je	near ptr inphyc
	cmp	ax,13
	jne	near ptr inphp2
	jmp	near ptr inphyc
inphln	label	near
	mov	eax,dword ptr [ligne]
	call	near ptr tyinstrg
	mov	dword ptr [esp],eax
	jmp	near ptr inphyc
inchf	label	near
	mov	ebp,dword ptr [curinch]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+12]
	cmp	cx,1
	je	near ptr inchf00
	cmp	cx,3
	jne	near ptr inchf0
	push	ebp
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 3 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:dux1
	push	dword ptr [crwork]
	push	dword ptr [istream]
	call	near ptr _inbfb
	mov	dword ptr [crwork],eax
	add	esp,12
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	edx,dword ptr [dux1]
	mov	ecx,ebp
	mov	dword ptr [esp],edx
	or	cx,cx
	jl	near ptr inchf1
	cmp	cx,1
	je	near ptr inchf3
	jmp	near ptr inphyd
inchf00	label	near
	push	ebp
	mov	ebp,dword ptr [ligne]
	mov	ebp,dword ptr [ebp]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 3 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:dux1
	push	dword ptr [crwork]
	push	dword ptr [istream]
	call	near ptr _inbf
	mov	dword ptr [crwork],eax
	add	esp,12
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	edx,dword ptr [dux1]
	mov	ecx,ebp
	mov	dword ptr [esp],edx
	or	cx,cx
	jl	near ptr inchf1
	or	cx,cx
	je	near ptr inphyc
	cmp	cx,1
	je	near ptr inchf3
	jmp	near ptr inphyd
inchf0	label	near
	mov	eax,esi
	call	near ptr inchani
	mov	eax,(65536+-4)
	mov	ebx,dword ptr [zinchan]
	jmp	near ptr errios
inchf1	label	near
	mov	eax,esi
	call	near ptr inchani
	mov	eax,ecx
	mov	ebx,dword ptr [zinchan]
	jmp	near ptr errios
inchf3	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	eax,dword ptr [zlleof]
	mov	ebx,dword ptr [istream]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	jmp	near ptr inphyl0
finbuf	endp

lleof	proc	near
	cmp	eax,esi
	je	near ptr lleof1
	push	eax
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	eax
	call	near ptr _fclos
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebx,dword ptr [crwork]
	mov	ebx,esi
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+eax*4+8],ebx
	mov	eax,esi
	call	near ptr inchani
	pop	eax
lleof1	label	near
	mov	ebx,dword ptr [zstinread]
	cmp	dword ptr [ebx],esi
	je	near ptr lleof2
	jmp	near ptr erlec11
lleof2	label	near
	mov	ebx,dword ptr [zlleof]
	jmp	near ptr findtag
lleof	endp

prompt	proc	near
	or	dx,dx
	je	near ptr prompt2
	cmp	dx,1
	je	near ptr prompt1
	mov	eax,2
	mov	ebx,dword ptr [zprompt]
	jmp	near ptr errwna
prompt1	label	near
	pop	eax
	mov	ebp,dword ptr [zprompt]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	dword ptr [curprmpt],eax
prompt2	label	near
	mov	eax,dword ptr [curprmpt]
	ret
prompter	label	near
	mov	ebx,dword ptr [zprompt]
	jmp	near ptr errnaa
prompt	endp

coercns	proc	near
	ret
coerci	label	near
	push	eax
	mov	eax,dword ptr [zcoercns]
	mov	edx,1
	jmp	near ptr ffuncall
chanalloc	label	near
	mov	ebx,dword ptr [maxchan]
	jmp	near ptr chanal4
chanal3	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+ebx*4+8]
	cmp	ecx,esi
	je	near ptr chanal9
chanal4	label	near
	dec	bx
	jge	near ptr chanal3
	mov	ebx,(65536+-2)
chanal9	label	near
	ret
inchini	label	near
	push	ebx
	push	eax
	push	ecx
	mov	eax,7
	mov	ebx,esi
	call	near ptr makevect
	push	eax
	mov	eax,dword ptr [lgbuffer]
	xor	ebx,ebx
	call	near ptr makestrg
	pop	ebx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+16],eax
	pop	ecx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+12],ecx
	pop	eax
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+8],eax
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+20],0
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+24],0
	mov	eax,esi
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+28],eax
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+32],eax
	pop	eax
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+eax*4+8],ebx
	ret
outchini	label	near
	push	ebx
	push	eax
	push	ecx
	mov	eax,7
	mov	ebx,esi
	call	near ptr makevect
	push	eax
	mov	eax,dword ptr [lgbuffer]
	mov	ebx,32
	call	near ptr makestrg
	pop	ebx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+16],eax
	pop	ecx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+12],ecx
	pop	ecx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+8],ecx
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+20],0
	mov	ebp,dword ptr [ebx]
	push	dword ptr [nbleft]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [nbrig]
	pop	dword ptr [ebp+28]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [maxpocou]
	pop	dword ptr [ebp+32]
	pop	eax
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+eax*4+8],ebx
	ret
openr1	label	near
	mov	eax,ebx
openr2	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errios
coercns	endp

openi	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopeni]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _infile
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ecx,dword ptr [crwork]
	or	cx,cx
	jne	near ptr openr2
	mov	ecx,1
	jmp	near ptr inchini
openi	endp

openo	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopeno]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _oufile
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	edx,dword ptr [crwork]
	or	dx,dx
	jne	near ptr openr2
	mov	ecx,2
	jmp	near ptr outchini
openo	endp

opena	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopena]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _apfile
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	edx,dword ptr [crwork]
	or	dx,dx
	jne	near ptr openr2
	mov	ecx,2
	jmp	near ptr outchini
opena	endp

openib	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopenib]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _infileb
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ecx,dword ptr [crwork]
	or	cx,cx
	jne	near ptr openr2
	mov	ecx,3
	jmp	near ptr inchini
openib	endp

openob	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopenob]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _oufileb
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ecx,dword ptr [crwork]
	or	cx,cx
	jne	near ptr openr2
	mov	ecx,4
	jmp	near ptr outchini
openob	endp

openab	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zopenab]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr chanalloc
	cmp	bx,(65536+-2)
	je	near ptr openr1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	push	ebx
	call	near ptr _apfileb
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ecx,dword ptr [crwork]
	or	cx,cx
	jne	near ptr openr2
	mov	ecx,4
	jmp	near ptr outchini
openab	endp

input	proc	near
	cmp	dword ptr [istream],esi
	je	near ptr inputi
	push	eax
	mov	eax,dword ptr [istream]
	call	near ptr closeint
	pop	eax
inputi	label	near
	cmp	eax,esi
	je	near ptr input2
	call	near ptr openi
input2	label	near
	call	near ptr inchani
	jmp	near ptr phytrue
input	endp

output	proc	near
	mov	bp,word ptr [maxchan]
	cmp	word ptr [ostream],bp
	jge	near ptr ouput1
	push	eax
	mov	eax,dword ptr [ostream]
	call	near ptr closeint
	pop	eax
ouput1	label	near
	cmp	eax,esi
	je	near ptr ouput2
	cmp	eax,dword ptr [zt]
	jne	near ptr ouput3
	mov	eax,dword ptr [maxchan]
	add	ax,2
	jmp	near ptr ouput4
ouput2	label	near
	mov	eax,dword ptr [maxchan]
	jmp	near ptr ouput4
ouput3	label	near
	call	near ptr openo
ouput4	label	near
	call	near ptr outchani
	jmp	near ptr phytrue
output	endp

inchan	proc	near
	or	dx,dx
	je	near ptr inchget
	cmp	dx,1
	je	near ptr inchset
	mov	eax,1
	mov	ebx,dword ptr [zinchan]
	jmp	near ptr errwna
inchget	label	near
	mov	eax,dword ptr [istream]
	ret
inchset	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr inchst2
	cmp	eax,esi
	je	near ptr inchst3
incherr1	label	near
	mov	eax,(65536+-3)
incherr2	label	near
	mov	ebx,dword ptr [zinchan]
	jmp	near ptr errios
inchst2	label	near
	or	ax,ax
	jl	near ptr incherr1
	cmp	ax,word ptr [maxchan]
	jge	near ptr incherr1
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	cmp	ebx,esi
	je	near ptr incherr3
	mov	ebp,dword ptr [ebx]
	mov	ebx,dword ptr [ebp+12]
	cmp	bx,1
	je	near ptr inchani
	cmp	bx,3
	jne	near ptr incherr3
inchst3	label	near
	jmp	near ptr inchani
incherr3	label	near
	mov	eax,(65536+-4)
	jmp	near ptr incherr2
inchani	label	near
	push	eax
	call	near ptr inclose
	pop	eax
inopen	label	near
	mov	dword ptr [istream],eax
	cmp	eax,esi
	jne	near ptr inchani3
	mov	ebx,dword ptr [maxchan]
	inc	bx
	jmp	near ptr inchani4
inchani3	label	near
	mov	ebx,eax
inchani4	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+ebx*4+8]
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+16]
	mov	dword ptr [ligne],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+20]
	mov	dword ptr [polig],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+24]
	mov	dword ptr [inmax],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+28]
	mov	dword ptr [curread],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+32]
	mov	dword ptr [ringur],ebp
	mov	dword ptr [curinch],ebx
	ret
inclose	label	near
	mov	ebx,dword ptr [istream]
	cmp	ebx,esi
	jne	near ptr inchani1
	mov	ebx,dword ptr [maxchan]
	inc	bx
inchani1	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+ebx*4+8]
	cmp	ebx,esi
	je	near ptr inchani2
	mov	ebp,dword ptr [ebx]
	push	dword ptr [ligne]
	pop	dword ptr [ebp+16]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [polig]
	pop	dword ptr [ebp+20]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [inmax]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [curread]
	pop	dword ptr [ebp+28]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [ringur]
	pop	dword ptr [ebp+32]
inchani2	label	near
	ret
inchan	endp

outchan	proc	near
	or	dx,dx
	je	near ptr ouchget
	cmp	dx,1
	je	near ptr ouchset
	mov	eax,1
	mov	ebx,dword ptr [zoutchan]
	jmp	near ptr errwna
ouchget	label	near
	mov	eax,dword ptr [ostream]
	mov	ebx,dword ptr [maxchan]
	cmp	ax,bx
	jl	near ptr ouchget2
	cmp	ax,bx
	je	near ptr ouchget1
	mov	eax,dword ptr [zt]
	ret
ouchget1	label	near
	mov	eax,esi
ouchget2	label	near
	ret
ouchset	label	near
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bfloat],eax
	ja	near ptr ouchst2
	cmp	eax,esi
	je	near ptr ouchst1
	cmp	eax,dword ptr [zt]
	jne	near ptr oucherr1
	mov	eax,dword ptr [maxchan]
	add	ax,2
	jmp	near ptr ouchst3
ouchst1	label	near
	mov	eax,dword ptr [maxchan]
	jmp	near ptr ouchst3
ouchst2	label	near
	or	ax,ax
	jl	near ptr oucherr1
	cmp	ax,word ptr [maxchan]
	jge	near ptr oucherr1
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	cmp	ebx,esi
	je	near ptr oucherr3
	mov	ebp,dword ptr [ebx]
	mov	ebx,dword ptr [ebp+12]
	cmp	bx,4
	je	near ptr ouchst3
	cmp	bx,2
	jne	near ptr oucherr3
ouchst3	label	near
	call	near ptr outchani
	pop	eax
	ret
oucherr3	label	near
	mov	eax,(65536+-4)
	jmp	near ptr oucherr2
oucherr1	label	near
	mov	eax,(65536+-3)
oucherr2	label	near
	mov	ebx,dword ptr [zoutchan]
	jmp	near ptr errios
outchani	label	near
	call	near ptr outclose
outopen	label	near
	mov	dword ptr [ostream],eax
outchai3	label	near
	mov	ebx,eax
outchai4	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+ebx*4+8]
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+16]
	mov	dword ptr [bufout],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+20]
	mov	dword ptr [pocour],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+24]
	mov	dword ptr [nbleft],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+28]
	mov	dword ptr [nbrig],ebp
	mov	ebp,dword ptr [ebx]
	mov	ebp,dword ptr [ebp+32]
	mov	dword ptr [maxpocou],ebp
	mov	dword ptr [curoutch],ebx
	ret
outclose	label	near
	mov	ebx,dword ptr [ostream]
outchai1	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+ebx*4+8]
	cmp	ebx,esi
	je	near ptr outchai2
	mov	ebp,dword ptr [ebx]
	push	dword ptr [bufout]
	pop	dword ptr [ebp+16]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [pocour]
	pop	dword ptr [ebp+20]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [nbleft]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [nbrig]
	pop	dword ptr [ebp+28]
	mov	ebp,dword ptr [ebx]
	push	dword ptr [maxpocou]
	pop	dword ptr [ebp+32]
outchai2	label	near
	ret
outchan	endp

fchannel	proc	near
	or	dx,dx
	je	near ptr fchan5
	cmp	dx,1
	je	near ptr fchan1
	mov	eax,1
	mov	ebx,dword ptr [zfchannel]
	jmp	near ptr errwna
fchan1	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr fchan2
	cmp	eax,dword ptr [zt]
	je	near ptr fchan8
	mov	ebx,dword ptr [zfchannel]
	jmp	near ptr errnia
fchan2	label	near
	or	ax,ax
	jl	near ptr fchan4
	cmp	ax,word ptr [maxchan]
	jge	near ptr fchan4
fchan21	label	near
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	cmp	eax,esi
	je	near ptr fchan3
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [ebp+8]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [ebp+12]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
fchan3	label	near
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	xor	eax,eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
fchan4	label	near
	mov	eax,(65536+-3)
	mov	ebx,dword ptr [zfchannel]
	jmp	near ptr errios
fchan5	label	near
	mov	ecx,esi
	mov	edx,dword ptr [maxchan]
	jmp	near ptr fchan7
fchan6	label	near
	mov	eax,edx
	call	near ptr fchan21
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
fchan7	label	near
	dec	dx
	jge	near ptr fchan6
	mov	edx,dword ptr [maxchan]
	mov	eax,ecx
	ret
fchan8	label	near
	mov	eax,dword ptr [tabchan]
	jmp	near ptr copy
fchannel	endp

lclose	proc	near
	cmp	dx,1
	je	near ptr lclose8
	or	dx,dx
	jne	near ptr closer1
	mov	edx,esi
	mov	eax,dword ptr [maxchan]
	mov	ebx,dword ptr [tabchan]
	dec	ax
lclose1	label	near
	mov	ebp,dword ptr [ebx]
	mov	ecx,dword ptr [ebp+eax*4+8]
	cmp	ecx,esi
	je	near ptr lclose2
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+eax*4+8],edx
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	eax
	call	near ptr _fclos
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ecx,dword ptr [crwork]
	or	cx,cx
	jne	near ptr closer0
lclose2	label	near
	dec	ax
	jge	near ptr lclose1
	mov	eax,dword ptr [maxchan]
	call	near ptr outchani
	jmp	near ptr phytrue
lclose8	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr closer4
	or	ax,ax
	jl	near ptr closer2
	cmp	ax,word ptr [maxchan]
	jge	near ptr closer2
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	cmp	ebx,esi
	jne	near ptr closeint
closer0	label	near
	mov	eax,(65536+-4)
	jmp	near ptr closer3
closer1	label	near
	mov	ebx,dword ptr [zlclose]
	mov	eax,1
	jmp	near ptr errwna
closer2	label	near
	mov	eax,(65536+-3)
closer3	label	near
	mov	ebx,dword ptr [zlclose]
	jmp	near ptr errios
closer4	label	near
	mov	ebx,dword ptr [zlclose]
	jmp	near ptr errnia
closeint	label	near
	mov	ebx,esi
	mov	ebp,dword ptr [tabchan]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+eax*4+8],ebx
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	eax
	call	near ptr _fclos
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebx,dword ptr [crwork]
	or	bx,bx
	je	near ptr phytrue
	mov	ebx,dword ptr [zlclose]
	jmp	near ptr errios
lclose	endp

deletfi	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zdeletfi]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _fdele
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	ebx,dword ptr [zdeletfi]
	jmp	near ptr errios
deletfi	endp

renamfi	proc	near
	push	ebx
	call	near ptr coerci
	xchg	dword ptr [esp],eax
	call	near ptr coerci
	mov	ebx,eax
	pop	eax
	mov	ebp,dword ptr [zrenamfi]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr stringa2
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	mov	ebp,dword ptr [ebx]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	push	dword ptr [crwork]
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	push	dword ptr [crwork]
	call	near ptr _frena
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	ebx,dword ptr [zrenamfi]
	jmp	near ptr errios
renamfi	endp

copyfi	proc	near
	push	ebx
	call	near ptr coerci
	xchg	dword ptr [esp],eax
	call	near ptr coerci
	mov	ebx,eax
	pop	eax
	mov	ebp,dword ptr [zcopyfi]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr stringa2
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	mov	ebp,dword ptr [ebx]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	push	dword ptr [crwork]
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	push	dword ptr [crwork]
	call	near ptr _fcopy
	mov	dword ptr [crwork],eax
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	ebx,dword ptr [zcopyfi]
	jmp	near ptr errios
copyfi	endp

makdir	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zmakdir]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _llmkdir
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	ebx,dword ptr [zmakdir]
	jmp	near ptr errios
makdir	endp

remdir	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zremdir]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _llrmdir
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	ebx,dword ptr [zremdir]
	jmp	near ptr errios
remdir	endp

probefi	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zprobefi]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _fprobe
	mov	dword ptr [crwork],eax
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebp,dword ptr [crwork]
	mov	eax,ebp
	or	ax,ax
	je	near ptr phytrue
	mov	eax,esi
	ret
probefi	endp

savecor	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zsavecor]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	push	dword ptr [zt]
	push	eax
	call	near ptr hgc
	mov	ebp,dword ptr [ccode]
	mov	dword ptr [_ccode],ebp
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [_cheap],ebp
	pop	eax
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	mov	ebp,dword ptr [crwork]
	call	near ptr ll_corsav
	mov	eax,ebp
	or	ax,ax
	je	near ptr corres
	mov	ebx,dword ptr [zsavecor]
	jmp	near ptr errios
corres	label	near
	pop	eax
	ret
savecor	endp

restcor	proc	near
	call	near ptr coerci
	mov	ebp,dword ptr [zrestcor]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
restcori	label	near
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	mov	ebp,dword ptr [crwork]
	cmp	byte ptr [filiz],0
	jne	short cor__11
cor__11:
	mov	byte ptr [filiz],0
	call	near ptr ll_corest
	mov	eax,ebp
	or	ax,ax
	je	near ptr restres
	mov	ebx,dword ptr [zrestcor]
	jmp	near ptr errios
restres	label	near
	pop	eax
	mov	eax,esi
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
l_l__1:
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
	jmp	near ptr l1_l__1
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
restcor	endp
_TEXT	ends
	end
