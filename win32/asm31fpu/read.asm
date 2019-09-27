	.386p
	.387

	include	read.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	read.equ
ini_read	proc	near
	mov	dword ptr [ringur],esi
	mov	dword ptr [curread],esi
	mov	dword ptr [impli],esi
	mov	dword ptr [impld],esi
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,14
	mov	ebx,offset FLAT:pnmac580
	mov	ecx,offset FLAT:zstatrc
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	eax,12
	mov	ebx,offset FLAT:pnmac581
	mov	ecx,offset FLAT:zstinread
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	dword ptr [cpkgc],esi
	mov	eax,4
	mov	ebx,offset FLAT:pnmac582
	mov	ecx,offset FLAT:lread
	mov	edx,offset FLAT:zlread
	push	z_lread
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac583
	mov	ecx,offset FLAT:implode
	mov	edx,offset FLAT:zimplode
	push	z_implode
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac584
	mov	ecx,offset FLAT:implodech
	mov	edx,offset FLAT:zimplodech
	push	z_implodech
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac585
	mov	ecx,offset FLAT:readch
	mov	edx,offset FLAT:zreadch
	push	z_readch
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac586
	mov	ecx,offset FLAT:readcod
	mov	edx,offset FLAT:zreadcod
	push	z_readcod
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac587
	mov	ecx,offset FLAT:lcuread
	mov	edx,offset FLAT:zlcuread
	push	z_lcuread
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac588
	mov	ecx,offset FLAT:teread
	mov	edx,offset FLAT:zteread
	push	z_teread
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac589
	mov	ecx,offset FLAT:reread
	mov	edx,offset FLAT:zreread
	push	z_reread
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac590
	mov	ecx,offset FLAT:readline
	mov	edx,offset FLAT:zreadline
	push	z_readline
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac591
	mov	ecx,offset FLAT:readstrg
	mov	edx,offset FLAT:zreadstrg
	push	z_readstrg
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac592
	mov	ecx,offset FLAT:stratom
	mov	edx,offset FLAT:zstratom
	push	z_stratom
	call	near ptr inisymb
	mov	eax,19
	mov	ebx,offset FLAT:pnmac593
	mov	ecx,offset FLAT:readdltd
	mov	edx,offset FLAT:zreaddltd
	push	z_readdltd
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac594
	mov	ecx,offset FLAT:peekch
	mov	edx,offset FLAT:zpeekch
	push	z_peekch
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac595
	mov	ecx,offset FLAT:peekcn
	mov	edx,offset FLAT:zpeekcn
	push	z_peekcn
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac596
	mov	ecx,offset FLAT:concatpk
	mov	edx,offset FLAT:zconcatpk
	push	z_concatpk
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac597
	mov	ecx,offset FLAT:fascii
	mov	edx,offset FLAT:zfascii
	push	z_fascii
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac598
	mov	ecx,offset FLAT:cascii
	mov	edx,offset FLAT:zcascii
	push	z_cascii
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac599
	mov	ecx,offset FLAT:uppercase
	mov	edx,offset FLAT:zuppercase
	push	z_uppercase
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac600
	mov	ecx,offset FLAT:lowercase
	mov	edx,offset FLAT:zlowercase
	push	z_lowercase
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac601
	mov	ecx,offset FLAT:asciip
	mov	edx,offset FLAT:zasciip
	push	z_asciip
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac602
	mov	ecx,offset FLAT:digitp
	mov	edx,offset FLAT:zdigitp
	push	z_digitp
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac603
	mov	ecx,offset FLAT:letterp
	mov	edx,offset FLAT:zletterp
	push	z_letterp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac604
	mov	ecx,offset FLAT:fibase
	mov	edx,offset FLAT:zfibase
	push	z_fibase
	call	near ptr inisymb
	mov	dword ptr [ibase],10
	mov	eax,256
	mov	ebx,12
	call	near ptr makestrg
	mov	dword ptr [tabch],eax
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+8],0
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+16],7
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+17],7
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+18],2
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+19],7
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+20],7
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+21],2
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+40],7
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+42],11
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+43],9
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+47],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+48],4
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+49],5
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+52],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+54],6
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+66],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+67],1
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+99],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+101],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+102],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+104],10
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+132],13
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+135],0
	mov	dword ptr [lgbufat],1024
	mov	eax,dword ptr [lgbufat]
	xor	ebx,ebx
	call	near ptr makestrg
	mov	dword ptr [bufat],eax
	mov	eax,128
	xor	ebx,ebx
	call	near ptr makevect
	mov	dword ptr [cachch],eax
	ret
rdpopj	label	near
	ret
hashint	label	near
	mov	ebx,eax
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
hashfast	label	near
	mov	ecx,eax
	cmp	ax,6
	jle	near ptr hashcour
	push	ecx
	mov	ecx,5
hashf1	label	near
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	add	ax,ax
	add	ax,dx
	dec	cx
	jge	near ptr hashf1
	mov	ecx,5
hashf5	label	near
	xchg	dword ptr [esp],ecx
	dec	cx
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	add	ax,ax
	add	ax,dx
	xchg	dword ptr [esp],ecx
	dec	cx
	jge	near ptr hashf5
	pop	ecx
	jmp	near ptr hashend
hashcour	label	near
	or	ax,ax
	je	near ptr hashret
	jmp	near ptr hashcou3
hashcou1	label	near
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	add	ax,ax
	add	ax,dx
hashcou3	label	near
	dec	cx
	jge	near ptr hashcou1
hashend	label	near
	and	ax,32767
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	or	edx,edx
	jz	short l9__1
	mov	ebp,edx
	cwd
	idiv	bp
	movzx	eax,dx
	mov	edx,ebp
l9__1:
hashret	label	near
	ret
inisymb	label	near
	push	edx
	push	ecx
	call	near ptr crastrg
	mov	ebx,eax
	call	near ptr crasymb
	pop	edx
	mov	dword ptr [8+eax],edx
	pop	edx
	cmp	edx,esi
	je	near ptr inisymr
	mov	dword ptr [edx],eax
inisymr	label	near
	pop	ecx
	pop	edx
	mov	word ptr [24+eax],dx
	jmp	ecx
inicst	label	near
	push	ecx
	call	near ptr crastrg
	mov	ebx,eax
	call	near ptr crasymb
	mov	dword ptr [eax],eax
	pop	ecx
	cmp	ecx,esi
	je	near ptr inicstr
	mov	dword ptr [ecx],eax
inicstr	label	near
	ret
crasymb	label	near
	call	near ptr symballc
	push	eax
	mov	ebp,dword ptr [cpkgc]
	mov	dword ptr [12+eax],ebp
	mov	dword ptr [28+eax],ebx
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
	call	near ptr trysymb0
	pop	eax
	cmp	bx,1
	je	near ptr plac2d
	cmp	bx,2
	je	near ptr plac3d12
	jmp	near ptr plac3d2n
inasymb	label	near
	mov	ebp,dword ptr [zundef]
	mov	dword ptr [eax],ebp
inasymb2	label	near
	mov	dword ptr [4+eax],esi
	mov	word ptr [26+eax],0
	mov	ebp,dword ptr [cpkgc]
	mov	dword ptr [12+eax],ebp
	mov	dword ptr [16+eax],esi
	push	eax
	mov	ebx,dword ptr [28+eax]
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
	call	near ptr trysymb0
	pop	eax
	cmp	bx,1
	je	near ptr plac2d
	cmp	bx,2
	je	near ptr plac3d12
	jmp	near ptr plac3d2n
inacst	label	near
	mov	dword ptr [eax],eax
	mov	dword ptr [8+eax],0
	mov	word ptr [24+eax],0
	jmp	near ptr inasymb2
makefix	label	near
	mov	dword ptr [negatif],esi
	xor	ecx,ecx
makefix0	label	near
	xor	eax,eax
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	cmp	dx,43
	je	near ptr makefix8
	cmp	dx,45
	jne	near ptr makefix1
	mov	dword ptr [negatif],edx
	jmp	near ptr makefix8
makefix1	label	near
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	cmp	dx,47
	je	near ptr makefxr1
	cmp	dx,48
	jl	near ptr makefxd1
	cmp	dx,57
	jg	near ptr makefxd1
	sub	dx,48
	jmp	near ptr makefix2
makefxd1	label	near
	cmp	dx,65
	jl	near ptr makefxd2
	cmp	dx,90
	jg	near ptr makefxd2
	sub	dx,65
	add	dx,10
	jmp	near ptr makefix2
makefxd2	label	near
	cmp	dx,97
	jl	near ptr makefix2
	cmp	dx,122
	jg	near ptr makefix2
	sub	dx,97
	add	dx,10
makefix2	label	near
	cmp	word ptr [ibase],10
	je	near ptr makefix6
	imul	ax,word ptr [ibase]
	jo	near ptr makefix3
makefix3	label	near
	add	ax,dx
	jo	near ptr makefix4
makefix4	label	near
	jmp	near ptr makefix8
makefix6	label	near
	push	ebx
	push	ecx
	push	edx
	mov	ebx,dword ptr [ibase]
	mov	edx,2
	call	near ptr gatim2i
	pop	ebx
	mov	edx,2
	call	near ptr gaplus2i
	pop	ecx
	pop	ebx
makefix8	label	near
	inc	cx
	cmp	cx,word ptr [tsymb000]
	jne	near ptr makefix1
	cmp	dword ptr [negatif],esi
	je	near ptr makefixr
	jmp	near ptr gadinv
makefixr	label	near
	ret
makefxr1	label	near
	cmp	dword ptr [negatif],esi
	je	near ptr makefixr2
	push	ebx
	push	ecx
	call	near ptr gadinv
	pop	ecx
	pop	ebx
makefixr2	label	near
	push	eax
	inc	cx
	mov	dword ptr [negatif],esi
	call	near ptr makefix0
	push	eax
	mov	edx,2
	jmp	near ptr gadiv
makeflo	label	near
	;; CVATOF
	push	ebp
	mov	ebp,dword ptr [ebx]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	mov	ebp,dword ptr [crwork]
	mov	eax,dword ptr [tsymb000]
	mov	byte ptr [ebp+eax],0
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _llrt_cvatof
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	fstp	dword ptr [_accusingle2]
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	;; CVATOF
	ret
nextfix	label	near
	cmp	cx,word ptr [tsymb000]
	jne	near ptr nextxxx
	add	esp,4
	jmp	near ptr makefix
nextflo	label	near
	cmp	cx,word ptr [tsymb000]
	jne	near ptr nextxxx
	add	esp,4
	jmp	near ptr makeflo
nextsym	label	near
	cmp	cx,word ptr [tsymb000]
	jne	near ptr nextxxx
	add	esp,4
	jmp	near ptr trysymi
nextxxx	label	near
	mov	ebp,dword ptr [ebx]
	movzx	edx,byte ptr [ebp+ecx+8]
	inc	cx
	ret
digitpi	label	near
	mov	eax,edx
	cmp	dx,48
	jl	near ptr digitpi1
	cmp	dx,57
	jg	near ptr digitpi1
	sub	ax,48
	jmp	near ptr digitpi9
digitpi1	label	near
	cmp	dx,65
	jl	near ptr digitpi2
	cmp	dx,90
	jg	near ptr digitpi2
	sub	ax,65
	jmp	near ptr digitpi8
digitpi2	label	near
	cmp	dx,97
	jl	near ptr digitpif
	cmp	dx,122
	jg	near ptr digitpif
	sub	ax,97
digitpi8	label	near
	add	ax,10
digitpi9	label	near
	cmp	ax,word ptr [ibase]
	jge	near ptr digitpif
	cmp	ax,57
	jle	near ptr digitpt
	mov	dword ptr [all09],esi
digitpit	label	near
	ret
digitpif	label	near
	mov	eax,esi
	ret
base10p	label	near
	cmp	dx,48
	jl	near ptr digitpif
	cmp	dx,57
	jg	near ptr digitpif
	mov	eax,edx
	ret
tryatom	label	near
	or	ax,ax
	jne	near ptr trynum
	cmp	dword ptr [cpkgc],esi
	jne	near ptr trynum
	mov	eax,esi
	ret
trynum	label	near
	mov	dword ptr [tsymb000],eax
	mov	dword ptr [asymb],ebx
	cmp	dword ptr [quotes],esi
	jne	near ptr trysymi
	xor	ecx,ecx
	mov	dword ptr [all09],ecx
	call	near ptr nextsym
	cmp	dx,46
	je	near ptr tryflo0
	cmp	dx,45
	je	near ptr tryfix0
	cmp	dx,43
	je	near ptr tryfix0
	call	near ptr digitpi
	cmp	eax,esi
	jne	near ptr tryfix1
	jmp	near ptr trysymi
tryfix0	label	near
	call	near ptr nextsym
	cmp	dx,46
	je	near ptr tryflo0
	call	near ptr digitpi
	cmp	eax,esi
	je	near ptr trysymi
tryfix1	label	near
	call	near ptr nextfix
	call	near ptr digitpi
	cmp	eax,esi
	jne	near ptr tryfix1
	cmp	dx,46
	je	near ptr tryflo2
	cmp	dx,69
	je	near ptr tryflo3
	cmp	dx,101
	je	near ptr tryflo3
	cmp	dx,47
	je	near ptr tryfix2
	jmp	near ptr trysymi
tryfix2	label	near
	call	near ptr nextsym
	cmp	dx,43
	je	near ptr tryfix3
	cmp	dx,45
	je	near ptr tryfix3
	call	near ptr digitpi
	cmp	eax,esi
	je	near ptr trysymi
	jmp	near ptr tryfix4
tryfix3	label	near
	call	near ptr nextsym
	call	near ptr digitpi
	cmp	eax,esi
	je	near ptr trysymi
tryfix4	label	near
	call	near ptr nextfix
	call	near ptr digitpi
	cmp	eax,esi
	jne	near ptr tryfix4
	jmp	near ptr trysymi
tryflo0	label	near
	call	near ptr nextsym
	call	near ptr base10p
	cmp	eax,esi
	je	near ptr trysymi
tryflo1	label	near
	call	near ptr nextflo
	call	near ptr base10p
	cmp	eax,esi
	jne	near ptr tryflo1
	cmp	dx,69
	je	near ptr tryflo4
	cmp	dx,101
	je	near ptr tryflo4
	jmp	near ptr trysymi
tryflo2	label	near
	cmp	dword ptr [all09],esi
	jne	near ptr tryflo1
	jmp	near ptr trysymi
tryflo3	label	near
	cmp	dword ptr [all09],esi
	je	near ptr trysymi
tryflo4	label	near
	call	near ptr nextsym
	call	near ptr base10p
	cmp	eax,esi
	jne	near ptr tryflo6
	cmp	dx,45
	je	near ptr tryflo5
	cmp	dx,43
	jne	near ptr trysymi
tryflo5	label	near
	call	near ptr nextsym
	call	near ptr base10p
	cmp	eax,esi
	je	near ptr trysymi
tryflo6	label	near
	call	near ptr nextflo
	call	near ptr base10p
	cmp	eax,esi
	jne	near ptr tryflo6
	jmp	near ptr trysymi
trysymi	label	near
	mov	eax,dword ptr [tsymb000]
trysymb	label	near
	call	near ptr trysymb0
trysymbx	label	near
	or	bx,bx
	je	near ptr trysymre
	cmp	bx,1
	je	near ptr mak2d
	cmp	bx,2
	je	near ptr mak3d12
mak3d2n	label	near
	call	near ptr symballc
plac3d2n	label	near
	mov	ecx,dword ptr [28+edx]
	mov	dword ptr [28+eax],ecx
	mov	dword ptr [28+edx],eax
	mov	ebp,dword ptr [20+ecx]
	mov	dword ptr [20+eax],ebp
trysymre	label	near
	ret
mak3d12	label	near
	call	near ptr symballc
plac3d12	label	near
	mov	ebp,dword ptr [28+edx]
	mov	dword ptr [20+eax],ebp
	mov	dword ptr [28+edx],eax
	mov	dword ptr [28+eax],edx
	ret
mak2d	label	near
	mov	ebx,dword ptr [tsymb000]
	call	near ptr strgallc
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [asymb]
	mov	esi,dword ptr [ebp]
	add	esi,8
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	jecxz	short l__2
	cmp	esi,edi
	jae	short l__2
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__2:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	mov	ebx,eax
	call	near ptr symballc
	mov	dword ptr [28+eax],ebx
	mov	edx,dword ptr [ksymb]
plac2d	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ebp,dword ptr [ebp+edx*4+8]
	mov	dword ptr [20+eax],ebp
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+edx*4+8],eax
	ret
trysymb0	label	near
	mov	dword ptr [tsymb000],eax
	mov	dword ptr [asymb],ebx
	call	near ptr hashfast
	mov	dword ptr [ksymb],eax
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+eax*4+8]
	mov	dword ptr [hsymb],ecx
	mov	eax,dword ptr [tsymb000]
	jmp	near ptr trysymb6
trysymb1	label	near
	mov	edx,dword ptr [28+ecx]
	cmp	dword ptr [bstrg],edx
	ja	short lmac605
	cmp	edx,esi
	jb	near ptr trysymb2
lmac605:
	mov	edx,dword ptr [20+edx]
trysymb2	label	near
	mov	ebp,dword ptr [edx]
	mov	ebx,dword ptr [4+ebp]
	cmp	ax,bx
	jne	near ptr trysymb5
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [asymb]
	mov	esi,dword ptr [ebp]
	add	esi,8
	mov	edi,dword ptr [edx]
	add	edi,8
	mov	ecx,eax
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr trysymb8
trysymb5	label	near
	mov	dword ptr [hsymb],ecx
	mov	ecx,dword ptr [20+ecx]
trysymb6	label	near
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr trysymb1
	mov	ebx,1
	mov	edx,dword ptr [ksymb]
	ret
trysymb8	label	near
	mov	eax,ecx
	mov	ebx,dword ptr [hsymb]
	cmp	eax,ebx
	je	near ptr trysy3d
	mov	ebp,dword ptr [20+eax]
	mov	dword ptr [20+ebx],ebp
	mov	ecx,dword ptr [ksymb]
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ebp,dword ptr [ebp+ecx*4+8]
	mov	dword ptr [20+eax],ebp
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+ecx*4+8],eax
	jmp	near ptr trysy3d
trysymp	label	near
	push	dword ptr [cpkgc]
	mov	dword ptr [cpkgc],eax
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
	mov	ecx,offset FLAT:trysymb
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	jmp	ecx
trysympk	label	near
	push	dword ptr [cpkgc]
	mov	dword ptr [cpkgc],eax
	mov	eax,ebx
	mov	ecx,offset FLAT:trysymp1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	jmp	ecx
trysymp1	label	near
	push	offset FLAT:trysymbx
	jmp	near ptr trysy3d
pkgcequ	label	near
	push	eax
	mov	eax,dword ptr [12+eax]
	mov	ebx,dword ptr [cpkgc]
	call	near ptr equal
	mov	ebx,eax
	pop	eax
	ret
trysy3d	label	near
	mov	edx,dword ptr [cpkgc]
	cmp	edx,esi
	jb	short lmac606
	cmp	edx,edi
	jb	near ptr trysy3s
lmac606:
trysy3c	label	near
	call	near ptr pkgcequ
	cmp	ebx,esi
	jne	near ptr trysyr4
	mov	ebp,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebp
	ja	near ptr trysy3c0
	cmp	esi,ebp
	jbe	near ptr trysy3c0
trysyr1	label	near
	mov	ebx,2
	mov	edx,eax
	ret
trysy3c0	label	near
	push	eax
	push	eax
trysy3c1	label	near
	mov	eax,dword ptr [28+eax]
	call	near ptr pkgcequ
	cmp	ebx,esi
	jne	near ptr trysyr3
	mov	ebp,dword ptr [20+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac607
	cmp	esi,ebp
	ja	near ptr trysy3c2
lmac607:
	mov	dword ptr [esp+4],eax
trysy3c2	label	near
	cmp	eax,dword ptr [esp]
	jne	near ptr trysy3c1
	add	esp,4
	pop	edx
trysyr2	label	near
	mov	ebx,3
	ret
trysyr3	label	near
	add	esp,8
trysyr4	label	near
	xor	ebx,ebx
	ret
trysy3s	label	near
	cmp	edx,dword ptr [12+eax]
	je	near ptr trysyr4
	mov	ebp,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac608
	cmp	esi,ebp
	ja	near ptr trysyr1
lmac608:
	mov	ebx,eax
	mov	ecx,eax
trysy31	label	near
	mov	eax,dword ptr [28+eax]
	cmp	edx,dword ptr [12+eax]
	je	near ptr trysyr4
	mov	ebp,dword ptr [20+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac609
	cmp	esi,ebp
	ja	near ptr trysy32
lmac609:
	mov	ebx,eax
trysy32	label	near
	cmp	eax,ecx
	jne	near ptr trysy31
	mov	edx,ebx
	jmp	near ptr trysyr2
istdsym	label	near
	mov	ebp,dword ptr [zundef]
	mov	dword ptr [eax],ebp
	mov	dword ptr [4+eax],esi
	mov	dword ptr [8+eax],0
	mov	word ptr [24+eax],0
	mov	word ptr [26+eax],0
	mov	dword ptr [16+eax],esi
	ret
symballc	label	near
	mov	eax,dword ptr [fsymb]
	or	eax,eax
	jne	near ptr symball1
	call	near ptr gcsymb
	mov	eax,dword ptr [fsymb]
symball1	label	near
	mov	ebp,dword ptr [20+eax]
	mov	dword ptr [fsymb],ebp
	call	near ptr istdsym
	mov	ebp,dword ptr [cpkgc]
	mov	dword ptr [12+eax],ebp
	ret
crastrg	label	near
	push	ebx
	mov	ebx,eax
	call	near ptr strgallc
	pop	ecx
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,ecx
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	rep	movsb
	pop	esi
	pop	edi
	pop	ecx
	ret
getch	label	near
	cmp	dword ptr [ringur],esi
	je	near ptr getch1
	mov	dword ptr [getchfl],1
	mov	edx,dword ptr [ringur]
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [ringur],ebp
	mov	edx,dword ptr [edx]
	jmp	near ptr getch2
getch1	label	near
	cmp	dword ptr [impli],esi
	jne	near ptr getch3
	mov	dword ptr [getchfl],0
	call	near ptr inphy
getch2	label	near
	mov	ecx,12
	cmp	dx,255
	jg	near ptr getch21
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	ecx,byte ptr [ebp+edx+8]
getch21	label	near
	ret
getch3	label	near
	mov	edx,dword ptr [impld]
	mov	dword ptr [getchfl],2
	cmp	edx,esi
	je	near ptr getch4
	cmp	edx,edi
	jl	near ptr erlec1
	mov	ebp,dword ptr [4+edx]
	mov	dword ptr [impld],ebp
	mov	edx,dword ptr [edx]
	cmp	dword ptr [bfloat],edx
	jbe	near ptr erlec9
	jmp	near ptr getch2
getch4	label	near
	mov	dword ptr [impld],0
	mov	edx,32
	jmp	near ptr getch2
getcv	label	near
	call	near ptr getch
	jmp	dword ptr cs:[ecx*4+tgetcv]
tgetcv	dd	offset FLAT:getcv
	dd	offset FLAT:getcvc
	dd	offset FLAT:getcvs
	dd	offset FLAT:getcv1
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcv2
	dd	offset FLAT:getcvr
	dd	offset FLAT:getcvr
getcvr	label	near
	ret
getcv1	label	near
	mov	dword ptr [quotes],edx
	call	near ptr getch
	mov	ecx,12
	ret
getcv2	label	near
	mov	ecx,dword ptr [zstatrc]
	cmp	dword ptr [ecx],esi
	jne	near ptr getcv3
	cmp	dx,65
	jl	near ptr getcv3
	cmp	dx,90
	jg	near ptr getcv3
	add	edx,32
getcv3	label	near
	mov	ecx,12
	ret
getcvc	label	near
	call	near ptr getch
	cmp	cx,2
	jne	near ptr getcvc
getcvs	label	near
	mov	ecx,7
	ret
rd1	label	near
	mov	dword ptr [quotes],esi
	xor	ebx,ebx
rdsep	label	near
	call	near ptr getcv
	jmp	dword ptr cs:[ecx*4+rdtb1]
rdtb1	dd	offset FLAT:erlec1
	dd	offset FLAT:erlec1
	dd	offset FLAT:erlec1
	dd	offset FLAT:erlec1
	dd	offset FLAT:rdparo
	dd	offset FLAT:rdparf
	dd	offset FLAT:rddot
	dd	offset FLAT:rdsep
	dd	offset FLAT:rdpkgc
	dd	offset FLAT:rdsplic
	dd	offset FLAT:rdmac
	dd	offset FLAT:rdstr
	dd	offset FLAT:rdpname
	dd	offset FLAT:rdsymb
	dd	offset FLAT:rdmsymb
rdparo	label	near
	inc	word ptr [rdprd]
	xor	ecx,ecx
	ret
rdparf	label	near
	dec	word ptr [rdprd]
	jge	near ptr rdparfr
	mov	dword ptr [rdprd],0
rdparfr	label	near
	mov	ecx,1
	ret
rddot	label	near
	cmp	dx,46
	jne	near ptr rddot1
	call	near ptr getcv
	cmp	cx,12
	je	near ptr rddot2
	mov	ecx,2
	jmp	near ptr rereada4
rddot1	label	near
	mov	ecx,2
	ret
rddot2	label	near
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+8],46
	mov	ebx,1
	jmp	near ptr rdpname
rdpkgc	label	near
	mov	eax,dword ptr [zsyscol]
	mov	eax,dword ptr [eax]
	jmp	near ptr rdpkgc2
rdpkgc1	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [bufat]
	call	near ptr tryatom
	cmp	eax,esi
	jb	near ptr erlec6
	cmp	eax,edi
	jae	near ptr erlec6
rdpkgc2	label	near
	push	dword ptr [cpkgc]
	mov	dword ptr [cpkgc],eax
	mov	ecx,offset FLAT:readi
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	push	ecx
	mov	ecx,3
	ret
rdsplic	label	near
	call	near ptr asciii
	mov	ebx,esi
	call	near ptr apply
	cmp	eax,esi
	je	near ptr rdsplic1
	cmp	eax,edi
	jge	near ptr rdsplic1
	jmp	near ptr erlec10
rdsplic1	label	near
	mov	ecx,4
	ret
rdmac	label	near
	call	near ptr asciii
	mov	ebx,esi
	call	near ptr apply
rdretobj	label	near
	mov	ecx,3
	ret
rdstr0	label	near
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ebx+8],dl
	inc	bx
	cmp	bx,word ptr [lgbufat]
	jge	near ptr erlec2
rdstr	label	near
	call	near ptr getch
	cmp	cx,11
	jne	near ptr rdstr0
	call	near ptr getch
	cmp	cx,11
	je	near ptr rdstr0
	call	near ptr rereada4
	call	near ptr strgallc
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [bufat]
	mov	esi,dword ptr [ebp]
	add	esi,8
	mov	edi,dword ptr [eax]
	add	edi,8
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
	cmp	dword ptr [cpkgc],esi
	je	near ptr rdretobj
	mov	ebp,dword ptr [cpkgc]
	mov	dword ptr [4+eax],ebp
	jmp	near ptr rdretobj
rdpname	label	near
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ebx+8],dl
	inc	bx
	cmp	bx,128
	jge	near ptr erlec3
	call	near ptr getcv
	cmp	cx,12
	je	near ptr rdpname
	cmp	cx,6
	je	near ptr rdpname
rdfinsym	label	near
	cmp	cx,8
	je	near ptr rdpkgc1
	call	near ptr rereada4
	mov	eax,ebx
	mov	ebx,dword ptr [bufat]
	call	near ptr tryatom
	jmp	near ptr rdretobj
rdsymb	label	near
	mov	dword ptr [quotes],edx
	jmp	near ptr rdsymb1
rdsymb0	label	near
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ebx+8],dl
	inc	bx
	cmp	bx,256
	jge	near ptr erlec5
rdsymb1	label	near
	call	near ptr getch
	cmp	cx,13
	jne	near ptr rdsymb0
	call	near ptr getch
	cmp	cx,13
	je	near ptr rdsymb0
	jmp	near ptr rdfinsym
rdmsymb	label	near
	mov	dword ptr [quotes],edx
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+8],dl
	mov	ebx,1
	call	near ptr getcv
	jmp	near ptr rdfinsym
readi	label	near
	call	near ptr rd1
read0	label	near
	jmp	dword ptr cs:[ecx*4+readt1]
readt1	dd	offset FLAT:read2
	dd	offset FLAT:erlec4
	dd	offset FLAT:erlec4
	dd	offset FLAT:rdpopj
	dd	offset FLAT:read1
read1	label	near
	cmp	dword ptr [4+eax],esi
	jne	near ptr erlec10
	mov	eax,dword ptr [eax]
	ret
read2	label	near
	push	dword ptr [curread]
	mov	eax,dword ptr [zlcuread]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	push	eax
	mov	dword ptr [curread],eax
read3	label	near
	push	eax
	call	near ptr rd1
read31	label	near
	jmp	dword ptr cs:[ecx*4+readt2]
readt2	dd	offset FLAT:read6
	dd	offset FLAT:read7
	dd	offset FLAT:read9
	dd	offset FLAT:read4
	dd	offset FLAT:read5
read4	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ebx
	mov	dword ptr [4+ebx],eax
	jmp	near ptr read3
read5	label	near
	cmp	eax,edi
	jge	near ptr read51
	pop	eax
	jmp	near ptr read3
read51	label	near
	pop	ebx
	mov	dword ptr [4+ebx],eax
read52	label	near
	cmp	dword ptr [4+eax],edi
	jl	near ptr read3
	mov	eax,dword ptr [4+eax]
	jmp	near ptr read52
read6	label	near
	push	offset FLAT:read4
	jmp	near ptr read2
read7	label	near
	pop	eax
read71	label	near
	pop	eax
	mov	eax,dword ptr [4+eax]
	pop	dword ptr [curread]
	ret
read9	label	near
	call	near ptr readi
	push	eax
	call	near ptr rd1
	pop	eax
	pop	ebx
	jmp	dword ptr cs:[ecx*4+readt3]
readt3	dd	offset FLAT:erlec7
	dd	offset FLAT:read91
	dd	offset FLAT:erlec7
	dd	offset FLAT:erlec7
	dd	offset FLAT:erlec7
read91	label	near
	mov	dword ptr [4+ebx],eax
	jmp	near ptr read71
erlec1	label	near
	mov	eax,1
	jmp	near ptr erlec
erlec2	label	near
	mov	eax,2
	jmp	near ptr erlec
erlec3	label	near
	mov	eax,3
	jmp	near ptr erlec
erlec4	label	near
	mov	eax,4
	jmp	near ptr erlec
erlec5	label	near
	mov	eax,5
	jmp	near ptr erlec
erlec6	label	near
	mov	eax,6
	jmp	near ptr erlec
erlec7	label	near
	mov	eax,7
	jmp	near ptr erlec
erlec8	label	near
	mov	eax,8
	jmp	near ptr erlec
erlec9	label	near
	mov	eax,9
	jmp	near ptr erlec
erlec10	label	near
	mov	eax,10
	jmp	near ptr erlec
erlec11	label	near
	mov	eax,11
	jmp	near ptr erlec
erlec	label	near
	cmp	dword ptr [impli],esi
	jne	near ptr erlecc1
	mov	ebx,dword ptr [zlread]
	jmp	near ptr errsxt
erlecc1	label	near
	mov	ebx,dword ptr [zimplode]
	mov	dword ptr [impli],esi
	mov	dword ptr [impld],esi
	jmp	near ptr errsxt
ini_read	endp

lread	proc	near
	call	near ptr getcv
	cmp	cx,5
	je	near ptr lread
	cmp	cx,7
	je	near ptr lread
	call	near ptr rereada4
	mov	eax,dword ptr [zstinread]
	push	dword ptr [eax]
	mov	ebp,dword ptr [zt]
	mov	dword ptr [eax],ebp
	mov	ecx,offset FLAT:readi
	call	near ptr sysprot
lreadend	label	near
	pop	eax
	mov	edx,dword ptr [zstinread]
	pop	dword ptr [edx]
	jmp	ecx
lread	endp

implode	proc	near
	push	dword ptr [impld]
	push	dword ptr [impli]
	push	dword ptr [ringur]
	mov	dword ptr [impld],eax
	mov	ebp,dword ptr [zt]
	mov	dword ptr [impli],ebp
	mov	dword ptr [ringur],esi
	mov	ecx,offset FLAT:readi
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [ringur]
	pop	dword ptr [impli]
	pop	dword ptr [impld]
	jmp	ecx
implode	endp

implodech	proc	near
	mov	ebx,eax
	mov	ecx,esi
impldech1	label	near
	cmp	ebx,edi
	jl	near ptr impldech2
	mov	eax,dword ptr [ebx]
	call	near ptr cascii
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr impldech1
impldech2	label	near
	mov	eax,ecx
	call	near ptr nreverse
	jmp	near ptr implode
	ret
implodech	endp

readch	proc	near
	push	offset FLAT:asciii
	jmp	near ptr getch
readch	endp

readcod	proc	near
	call	near ptr getch
	mov	eax,edx
	ret
readcod	endp

lcuread	proc	near
	mov	eax,dword ptr [curread]
	ret
lcuread	endp

teread	proc	near
	mov	dword ptr [ringur],esi
	mov	dword ptr [inmax],0
	ret
teread	endp

reread	proc	near
	cmp	eax,esi
	je	near ptr reread9
	cmp	eax,edi
	jl	near ptr rereade
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	ebx
reread4	label	near
	mov	ecx,dword ptr [eax]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	mov	dword ptr [4+ebx],ecx
	mov	ebx,ecx
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jge	near ptr reread4
	mov	ebp,dword ptr [ringur]
	mov	dword ptr [4+ebx],ebp
	pop	eax
	mov	eax,dword ptr [4+eax]
	mov	dword ptr [ringur],eax
reread9	label	near
	mov	eax,dword ptr [ringur]
	ret
rereade	label	near
	mov	ebx,dword ptr [zreread]
	jmp	near ptr errnla
rereada4	label	near
	cmp	word ptr [getchfl],0
	jne	near ptr rrda41
	dec	word ptr [polig]
	ret
rrda41	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],edx
	mov	edx,dword ptr [ringur]
	xchg	dword ptr [4+ebp],edx
	xchg	dword ptr [fcons],edx
	mov	dword ptr [ringur],edx
	ret
reread	endp

peekch	proc	near
	call	near ptr getch
	push	edx
	call	near ptr rereada4
	pop	edx
	jmp	near ptr asciii
peekch	endp

peekcn	proc	near
	call	near ptr getch
	mov	eax,edx
	jmp	near ptr rereada4
peekcn	endp

readline	proc	near
	call	near ptr getch
	mov	eax,esi
	cmp	dx,13
	jne	near ptr readl2
	call	near ptr getch
	mov	eax,esi
	cmp	dx,10
	jne	near ptr readl2
	ret
readl2	label	near
	cmp	dx,10
	je	near ptr readl4
readl3	label	near
	cmp	dx,10
	je	near ptr readl5
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
readl4	label	near
	push	eax
	call	near ptr getch
	pop	eax
	cmp	dx,13
	jne	near ptr readl3
readl5	label	near
	jmp	near ptr nreverse
readline	endp

stratom	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr erstrat1
	cmp	dword ptr [bstrg],ebx
	ja	near ptr erstrat2
	cmp	ebx,esi
	jae	near ptr erstrat2
	mov	dword ptr [quotes],ecx
	jmp	near ptr tryatom
erstrat1	label	near
	mov	ebx,dword ptr [zstratom]
	jmp	near ptr errnia
erstrat2	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zstratom]
	jmp	near ptr errnsa
stratom	endp

readstrg	proc	near
	call	near ptr getch
	xor	ebx,ebx
	cmp	dx,10
	je	near ptr reads4
	cmp	dx,13
	jne	near ptr reads3
	call	near ptr getch
	xor	ebx,ebx
reads3	label	near
	cmp	dx,10
	je	near ptr reads5
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ebx+8],dl
	cmp	bx,word ptr [lgbufat]
	je	near ptr reads5
	inc	bx
reads4	label	near
	push	ebx
	call	near ptr getch
	pop	ebx
	cmp	dx,13
	jne	near ptr reads3
reads5	label	near
	call	near ptr strgallc
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [bufat]
	mov	esi,dword ptr [ebp]
	add	esi,8
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	jecxz	short l__11
	cmp	esi,edi
	jae	short l__11
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__11:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	ret
readstrg	endp

readdltd	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr readdltr
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	ebx,byte ptr [ebp+eax+8]
	push	eax
	push	ebx
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],5
	mov	ecx,offset FLAT:read2
	call	near ptr sysprot
	pop	eax
	pop	ebx
	pop	edx
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+edx+8],bl
	jmp	ecx
readdltr	label	near
	mov	ebx,dword ptr [zreaddltd]
	jmp	near ptr errnia
asciii	label	near
	mov	eax,edx
	cmp	dword ptr [bfloat],eax
	jbe	near ptr ascierr
	or	ax,ax
	jl	near ptr fascii3
	cmp	ax,128
	jge	near ptr fascii3
	mov	ebp,dword ptr [cachch]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	cmp	ebx,esi
	jb	near ptr fascii3
	cmp	ebx,edi
	jae	near ptr fascii3
	mov	eax,ebx
	ret
fascii3	label	near
	push	eax
	xor	ebx,ebx
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ebx+8],al
	inc	bx
	mov	eax,ebx
	mov	ebx,dword ptr [bufat]
	push	dword ptr [cpkgc]
	mov	ecx,offset FLAT:fascii8
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	pop	ebx
	cmp	eax,esi
	jb	near ptr fascii7
	cmp	eax,edi
	jae	near ptr fascii7
	or	bx,bx
	jl	near ptr fascii7
	cmp	bx,128
	jge	near ptr fascii7
	mov	ebp,dword ptr [cachch]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+ebx*4+8],eax
fascii7	label	near
	jmp	ecx
fascii8	label	near
	mov	dword ptr [cpkgc],esi
	jmp	near ptr tryatom
ascierr	label	near
	mov	ebx,dword ptr [zfascii]
	jmp	near ptr errnia
readdltd	endp

fascii	proc	near
	mov	edx,eax
	jmp	near ptr asciii
fascii	endp

cascii	proc	near
	mov	ebp,dword ptr [zcascii]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	movzx	eax,byte ptr [ebp+8]
	ret
cascii	endp

concatpk	proc	near
	cmp	eax,esi
	jb	near ptr concpkr1
	cmp	eax,edi
	jae	near ptr concpkr1
	cmp	ebx,esi
	jb	near ptr concpkr2
	cmp	ebx,edi
	jae	near ptr concpkr2
concpk0	label	near
	cmp	ebx,esi
	je	near ptr concpkr
	push	ebx
	mov	ebx,dword ptr [12+ebx]
	call	near ptr concpk0
	pop	ebx
	jmp	near ptr trysympk
concpkr	label	near
	ret
concpkr2	label	near
	mov	eax,ebx
concpkr1	label	near
	mov	ebx,dword ptr [zconcatpk]
	jmp	near ptr errsym
concatpk	endp

uppercase	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr upper9
	cmp	ax,97
	jl	near ptr upper8
	cmp	ax,122
	jg	near ptr upper8
	sub	eax,32
upper8	label	near
	ret
upper9	label	near
	mov	ebx,dword ptr [zuppercase]
	jmp	near ptr errnia
uppercase	endp

lowercase	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr lower9
	cmp	ax,65
	jl	near ptr lower8
	cmp	ax,90
	jg	near ptr lower8
	add	eax,32
lower8	label	near
	ret
lower9	label	near
	mov	ebx,dword ptr [zlowercase]
	jmp	near ptr errnia
lowercase	endp

asciip	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr asciipn
	or	ax,ax
	jl	near ptr asciipn
	cmp	ax,255
	jle	near ptr asciipt
asciipn	label	near
	mov	eax,esi
asciipt	label	near
	ret
asciip	endp

digitp	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr digitpn
	cmp	ax,48
	jl	near ptr digitpn
	cmp	ax,57
	jle	near ptr digitpt
digitpn	label	near
	mov	eax,esi
digitpt	label	near
	ret
digitp	endp

letterp	proc	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr lettern
	cmp	ax,65
	jl	near ptr lettere
	cmp	ax,90
	jle	near ptr lettert
lettere	label	near
	cmp	ax,97
	jl	near ptr lettern
	cmp	ax,122
	jle	near ptr lettert
lettern	label	near
	mov	eax,esi
lettert	label	near
	ret
letterp	endp

fibase	proc	near
	mov	ebx,dword ptr [zfibase]
	mov	ecx,dword ptr [ibase]
	push	2
	push	36
	call	near ptr getsetn
	mov	dword ptr [ibase],eax
	ret
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
fibase	endp
_TEXT	ends
	end
