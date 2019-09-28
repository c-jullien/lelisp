	.386p
	.387

	include	print.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	print.equ
ini_print	proc	near
	mov	dword ptr [iexpld],esi
	mov	dword ptr [obase],10
	mov	dword ptr [prmdp],100
	mov	dword ptr [prmlp],2000
	mov	dword ptr [prmln],2000
	mov	dword ptr [prmpk],50
	mov	dword ptr [nbleft],0
	mov	dword ptr [nbrig],78
	mov	ebp,dword ptr [nbrig]
	mov	dword ptr [maxpocou],ebp
	mov	eax,256
	xor	ebx,ebx
	call	near ptr makestrg
	mov	dword ptr [bufpn],eax
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1436
	mov	ecx,offset FLAT:eol
	mov	edx,offset FLAT:zeol
	push	z_eol
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1437
	mov	ecx,offset FLAT:llfflush
	mov	edx,offset FLAT:zllfflush
	push	z_llfflush
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1438
	mov	ecx,offset FLAT:upratom
	mov	edx,offset FLAT:zupratom
	push	z_upratom
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1439
	mov	ecx,offset FLAT:prin
	mov	edx,offset FLAT:zprin
	push	z_prin
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1440
	mov	ecx,offset FLAT:print000
	mov	edx,offset FLAT:zprint000
	push	z_print000
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1441
	mov	ecx,offset FLAT:prinflush
	mov	edx,offset FLAT:zprinflush
	push	z_prinflush
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1442
	mov	ecx,offset FLAT:terpri
	mov	edx,offset FLAT:zterpri
	push	z_terpri
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1443
	mov	ecx,offset FLAT:princh
	mov	edx,offset FLAT:zprinch
	push	z_princh
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1444
	mov	ecx,offset FLAT:princod
	mov	edx,offset FLAT:zprincod
	push	z_princod
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1445
	mov	ecx,offset FLAT:fptype
	mov	edx,offset FLAT:zfptype
	push	z_fptype
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1446
	mov	ecx,offset FLAT:prline
	mov	edx,offset FLAT:zprline
	push	z_prline
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac1447
	mov	ecx,offset FLAT:prlevel
	mov	edx,offset FLAT:zprlevel
	push	z_prlevel
	call	near ptr inisymb
	mov	eax,11
	mov	ebx,offset FLAT:pnmac1448
	mov	ecx,offset FLAT:prlength
	mov	edx,offset FLAT:zprlength
	push	z_prlength
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1449
	mov	ecx,offset FLAT:fobase
	mov	edx,offset FLAT:zfobase
	push	z_fobase
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1450
	mov	ecx,offset FLAT:lmargin
	mov	edx,offset FLAT:zlmargin
	push	z_lmargin
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1451
	mov	ecx,offset FLAT:rmargin
	mov	edx,offset FLAT:zrmargin
	push	z_rmargin
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1452
	mov	ecx,offset FLAT:outpos
	mov	edx,offset FLAT:zoutpos
	push	z_outpos
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1453
	mov	ecx,offset FLAT:outbuf
	mov	edx,offset FLAT:zoutbuf
	push	z_outbuf
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1454
	mov	ecx,offset FLAT:explode
	mov	edx,offset FLAT:zexplode
	push	z_explode
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1455
	mov	ecx,offset FLAT:explodech
	mov	edx,offset FLAT:zexplodech
	push	z_explodech
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,14
	mov	ebx,offset FLAT:pnmac1456
	mov	ecx,offset FLAT:zstatpr
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	eax,15
	mov	ebx,offset FLAT:pnmac1457
	mov	ecx,offset FLAT:zstatpc
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	eax,18
	mov	ebx,offset FLAT:pnmac1458
	mov	ecx,offset FLAT:zstatpk
	call	near ptr inicst
	mov	ebp,dword ptr [zt]
	mov	dword ptr [eax],ebp
	mov	dword ptr [cpkgc],esi
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1459
	mov	ecx,offset FLAT:zudprs
	call	near ptr inicst
	ret
prpopj	label	near
	ret
prtrue	label	near
	mov	eax,dword ptr [zt]
	ret
u_print	label	near
	call	near ptr probj
	call	near ptr fullin
	ret
flulin	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	eax,dword ptr [zllfflush]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
fullin	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	eax,dword ptr [zeol]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
ini_print	endp

eol	proc	near
	call	near ptr outlin
	mov	eax,esi
	ret
eol	endp

llfflush	proc	near
	cmp	dword ptr [iexpld],esi
	jne	near ptr prtrue
	mov	ebx,dword ptr [pocour]
	or	bx,bx
	je	near ptr prtrue
	mov	bp,word ptr [maxchan]
	cmp	word ptr [ostream],bp
	jl	near ptr fflush1
fflush0	label	near
	mov	eax,dword ptr [bufout]
	push	ebx
	mov	dword ptr [pocour],0
	call	near ptr tystrg
	pop	dword ptr [pocour]
	jmp	near ptr fflush3
fflush1	label	near
	mov	eax,dword ptr [pocour]
	mov	ebp,dword ptr [curoutch]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+12]
	cmp	cx,2
	je	near ptr fflush2
	push	ebp
	mov	ebp,dword ptr [bufout]
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
	push	dword ptr [crwork]
	push	eax
	push	dword ptr [ostream]
	call	near ptr _outfl
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
	mov	ebx,ebp
	jmp	near ptr fflush3
fflush2	label	near
	push	ebp
	mov	ebp,dword ptr [bufout]
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
	push	dword ptr [crwork]
	push	eax
	push	dword ptr [ostream]
	call	near ptr _outfl
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
	mov	ebx,ebp
fflush3	label	near
	call	near ptr outli2
	mov	dword ptr [pocour],0
	ret
outlin	label	near
	cmp	dword ptr [iexpld],esi
	jne	near ptr expls
	mov	bp,word ptr [maxchan]
	cmp	word ptr [ostream],bp
	jl	near ptr outli1
	mov	eax,dword ptr [bufout]
	mov	ebx,dword ptr [pocour]
	push	ebx
	mov	dword ptr [pocour],0
	call	near ptr tystrg
	call	near ptr tynewln
	pop	dword ptr [pocour]
	jmp	near ptr outli2
outli1	label	near
	mov	ebp,dword ptr [curoutch]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+12]
	cmp	cx,2
	je	near ptr outli11
	push	ebp
	mov	ebp,dword ptr [bufout]
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
	push	dword ptr [crwork]
	push	dword ptr [pocour]
	push	dword ptr [ostream]
	call	near ptr _outfl
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
	mov	ebx,ebp
	jmp	near ptr outli2
outli11	label	near
	push	ebp
	mov	ebp,dword ptr [bufout]
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
	push	dword ptr [crwork]
	push	dword ptr [pocour]
	push	dword ptr [ostream]
	call	near ptr _outf
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
	mov	ebx,ebp
outli2	label	near
	mov	ebx,dword ptr [pocour]
	mov	eax,dword ptr [bufout]
	jmp	near ptr outli4
outli3	label	near
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+ebx+8],32
outli4	label	near
	dec	bx
	jge	near ptr outli3
	mov	ebp,dword ptr [nbleft]
	mov	dword ptr [pocour],ebp
outlret	label	near
	ret
chklp	label	near
	mov	bp,word ptr [nbrig]
	cmp	word ptr [maxpocou],bp
	jne	near ptr flulin
	cmp	word ptr [prclp],1
	jne	near ptr chklp1
	mov	eax,dword ptr [pocour]
	sub	ax,3
	mov	ebx,46
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
	inc	ax
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
	inc	ax
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
	jmp	near ptr probjend
chklp1	label	near
	dec	word ptr [prclp]
	jmp	near ptr fullin
outch	label	near
	cmp	dword ptr [iexpld],esi
	jne	near ptr explch
	push	eax
	mov	eax,dword ptr [pocour]
	cmp	ax,word ptr [maxpocou]
	jl	near ptr outch1
	call	near ptr chklp
	mov	eax,dword ptr [pocour]
outch1	label	near
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],dl
	inc	word ptr [pocour]
	pop	eax
	ret
outsp	label	near
	cmp	dword ptr [iexpld],esi
	jne	near ptr expls
	push	eax
	mov	eax,dword ptr [pocour]
	cmp	ax,word ptr [maxpocou]
	jge	near ptr outsp1
outsp0	label	near
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],32
	inc	word ptr [pocour]
	pop	eax
	ret
outsp1	label	near
	mov	bp,word ptr [nbrig]
	cmp	word ptr [maxpocou],bp
	jne	near ptr outsp2
	call	near ptr chklp
	pop	eax
	ret
outsp2	label	near
	call	near ptr chklp
	mov	eax,dword ptr [pocour]
	jmp	near ptr outsp0
outshrp	label	near
	cmp	dword ptr [iexpld],esi
	jne	near ptr explsh
	push	eax
	mov	eax,dword ptr [pocour]
	inc	ax
	cmp	ax,word ptr [maxpocou]
	jl	near ptr outshrp1
	call	near ptr chklp
	mov	eax,dword ptr [pocour]
	inc	ax
outshrp1	label	near
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],dl
	dec	ax
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],35
	add	word ptr [pocour],2
	pop	eax
	ret
outet	label	near
	mov	ebx,dword ptr [prcln]
	or	bx,bx
	jl	near ptr outet1
	cmp	bx,1
	je	near ptr outddd
outet1	label	near
	dec	word ptr [prcln]
	mov	edx,38
	jmp	near ptr outch
outddd	label	near
	mov	edx,46
	call	near ptr outch
	call	near ptr outch
	call	near ptr outch
	jmp	near ptr probjend
pratom	label	near
	mov	ebx,dword ptr [prcln]
	or	bx,bx
	jl	near ptr pratom1
	cmp	bx,1
	je	near ptr outddd
	dec	word ptr [prcln]
pratom1	label	near
	push	eax
	call	near ptr gettype
	cmp	eax,esi
	jb	near ptr pratom2
	cmp	eax,edi
	jae	near ptr pratom2
	mov	ebx,dword ptr [zprin]
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	je	near ptr pratom2
	cmp	eax,dword ptr [zprin]
	je	near ptr pratom2
	mov	edx,1
	jmp	near ptr ffuncall
pratom2	label	near
	pop	eax
	jmp	near ptr upratom
llfflush	endp

upratom	proc	near
	cmp	eax,esi
	jb	short lmac1460
	cmp	eax,edi
	jb	near ptr prsympk
lmac1460:
	cmp	dword ptr [bfloat],eax
	ja	near ptr prfix
	cmp	dword ptr [bfloat],eax
	ja	short lmac1461
	cmp	dword ptr [bvect],eax
	ja	near ptr prfloat
lmac1461:
	cmp	dword ptr [bstrg],eax
	ja	short lmac1462
	cmp	eax,esi
	jb	near ptr prstrg
lmac1462:
	jmp	near ptr prvect
prsympk	label	near
	cmp	eax,esi
	je	near ptr pratnil
	mov	dword ptr [prcpk],0
	mov	ecx,dword ptr [zstatpk]
	cmp	dword ptr [ecx],esi
	je	near ptr prsymb
prsympk0	label	near
	mov	ecx,dword ptr [12+eax]
	cmp	ecx,esi
	je	near ptr prsymb
prsympk1	label	near
	push	eax
	mov	eax,dword ptr [12+eax]
	call	near ptr prpkg
	pop	eax
	jmp	near ptr prsymb
prpkg	label	near
	push	dword ptr [prcpk]
	mov	ecx,offset FLAT:prpkg0
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [prcpk]
	jmp	ecx
prpkg0	label	near
	mov	edx,dword ptr [zstatpk]
	cmp	dword ptr [edx],0
	jne	near ptr prpkg1
	mov	edx,dword ptr [zsyscol]
	cmp	eax,dword ptr [edx]
	jne	near ptr prpkg1
	mov	edx,58
	jmp	near ptr outch
prpkg1	label	near
	inc	word ptr [prcpk]
	cmp	word ptr [prmpk],0
	je	near ptr prpkg2
	mov	bp,word ptr [prmpk]
	cmp	word ptr [prcpk],bp
	jle	near ptr prpkg2
	jmp	near ptr outddd
prpkg2	label	near
	cmp	eax,esi
	jb	short lmac1463
	cmp	eax,edi
	jb	near ptr prpkgsym
lmac1463:
	mov	edx,58
	call	near ptr outshrp
	call	near ptr probj0
	mov	edx,58
	jmp	near ptr outch
prpkgsym	label	near
	cmp	dword ptr [12+eax],esi
	jne	near ptr prsympk1
	mov	edx,58
	push	offset FLAT:prsymb
	jmp	near ptr outshrp
prsymb	label	near
	mov	ebx,dword ptr [zstatpr]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,esi
	je	near ptr prat2
	call	near ptr chksymb
	cmp	ebx,esi
	je	near ptr prat2
	add	bx,2
	cmp	word ptr [prcpk],0
	je	near ptr prat0
	inc	bx
prat0	label	near
	add	bx,word ptr [pocour]
	cmp	bx,word ptr [maxpocou]
	jle	near ptr prat1
	call	near ptr chklp
prat1	label	near
	mov	edx,124
	call	near ptr outch
	call	near ptr strgsymb
	mov	dword ptr [savea1],eax
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	xor	ecx,ecx
	jmp	near ptr prat12
prat10	label	near
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+edx+8]
	cmp	ax,13
	jne	near ptr prat11
	call	near ptr outch
prat11	label	near
	call	near ptr outch
	inc	cx
prat12	label	near
	cmp	cx,bx
	jne	near ptr prat10
	mov	edx,124
	cmp	word ptr [prcpk],0
	je	near ptr outch
	call	near ptr outch
	mov	edx,58
	jmp	near ptr outch
prat2	label	near
	call	near ptr strgsymb
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebx,ecx
	cmp	word ptr [prcpk],0
	je	near ptr prat21
	inc	bx
prat21	label	near
	add	bx,word ptr [pocour]
	cmp	bx,word ptr [maxpocou]
	jle	near ptr prat3
	call	near ptr chklp
prat3	label	near
	xor	ebx,ebx
	mov	edx,dword ptr [zstatpc]
	mov	edx,dword ptr [edx]
	cmp	edx,esi
	jne	near ptr prat8
	jmp	near ptr prathb
prat5	label	near
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ebx+8]
	cmp	dx,97
	jl	near ptr prat6
	cmp	dx,122
	jg	near ptr prat6
	sub	edx,32
prat6	label	near
	call	near ptr outch
	inc	bx
prat8	label	near
	dec	cx
	jge	near ptr prat5
	cmp	word ptr [prcpk],0
	je	near ptr prpopj
	mov	edx,58
	jmp	near ptr outch
pratnil	label	near
	mov	edx,40
	call	near ptr outch
	mov	edx,41
	jmp	near ptr outch
chksymb	label	near
	push	eax
	call	near ptr strgsymb
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	or	bx,bx
	je	near ptr chksymb9
	push	ebx
	mov	ecx,esi
	jmp	near ptr chksymb3
chksymb0	label	near
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ebx+8]
	cmp	dx,43
	je	near ptr chksymb2
	cmp	dx,45
	je	near ptr chksymb2
	cmp	dx,101
	je	near ptr chksymb2
	cmp	dx,69
	je	near ptr chksymb2
	cmp	dx,48
	jl	near ptr chksymb1
	cmp	dx,57
	jle	near ptr chksymb2
chksymb1	label	near
	inc	cx
chksymb2	label	near
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+edx+8]
	cmp	dx,12
	jne	near ptr chksymb5
chksymb3	label	near
	dec	bx
	jge	near ptr chksymb0
	cmp	ecx,esi
	je	near ptr chksymb4
	add	esp,4
	mov	ebx,esi
	pop	eax
	ret
chksymb4	label	near
	pop	ebx
	pop	eax
	ret
chksymb5	label	near
	mov	ecx,ebx
	pop	ebx
	jmp	near ptr chksymb7
chksymb6	label	near
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+edx+8]
chksymb7	label	near
	cmp	dx,13
	jne	near ptr chksymb8
	inc	bx
chksymb8	label	near
	dec	cx
	jge	near ptr chksymb6
chksymb9	label	near
	pop	eax
	ret
chkstrg	label	near
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebx,ecx
	or	cx,cx
	je	near ptr chkstrg3
	jmp	near ptr chkstrg2
chkstrg1	label	near
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+edx+8]
	cmp	dx,11
	jne	near ptr chkstrg2
	inc	bx
chkstrg2	label	near
	dec	cx
	jge	near ptr chkstrg1
chkstrg3	label	near
	ret
prtypvec	label	near
	mov	ebp,dword ptr [zvector]
	cmp	dword ptr [4+eax],ebp
	je	near ptr prpopj
	mov	ebp,dword ptr [zstring000]
	cmp	dword ptr [4+eax],ebp
	je	near ptr prpopj
	push	eax
	mov	eax,dword ptr [4+eax]
	call	near ptr prpkg
	pop	eax
	ret
prstrg	label	near
	call	near ptr prtypvec
	mov	ebx,dword ptr [zstatpr]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,esi
	jne	near ptr prstr5
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebx,ecx
	add	bx,word ptr [pocour]
	cmp	bx,word ptr [maxpocou]
	jle	near ptr prathb
	cmp	dword ptr [iexpld],esi
	jne	near ptr prathb
	call	near ptr chklp
prathb	label	near
	xor	ebx,ebx
	jmp	near ptr prathb4
prathb2	label	near
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ebx+8]
	call	near ptr outch
	inc	bx
prathb4	label	near
	dec	cx
	jge	near ptr prathb2
	cmp	word ptr [prcpk],0
	je	near ptr prpopj
	mov	edx,58
	jmp	near ptr outch
prstr5	label	near
	call	near ptr chkstrg
	add	bx,2
	add	bx,word ptr [pocour]
	add	bx,2
	cmp	bx,word ptr [maxpocou]
	jle	near ptr prstr6
	cmp	dword ptr [iexpld],esi
	jne	near ptr prstrg
	call	near ptr chklp
prstr6	label	near
	mov	edx,34
	call	near ptr outch
	mov	dword ptr [savea1],eax
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	xor	ecx,ecx
prstr60	label	near
	cmp	cx,ax
	je	near ptr prstr63
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	ebx,byte ptr [ebp+edx+8]
	cmp	bx,11
	jne	near ptr prstr61
	call	near ptr outch
prstr61	label	near
	call	near ptr outch
	inc	cx
	jmp	near ptr prstr60
prstr63	label	near
	mov	edx,34
	jmp	near ptr outch
prvect	label	near
	mov	ebx,dword ptr [prcdp]
	or	bx,bx
	jle	near ptr prvect11
	cmp	bx,1
	jne	near ptr prvect1
	jmp	near ptr outet
prvect1	label	near
	dec	word ptr [prcdp]
prvect11	label	near
	call	near ptr prtypvec
prvectv	label	near
	mov	edx,91
	call	near ptr outshrp
	call	near ptr prvectin
	mov	edx,93
	jmp	near ptr outch
prvectin	label	near
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	xor	ecx,ecx
	jmp	near ptr prvect6
prvect2	label	near
	push	eax
	push	ecx
	push	ebx
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [ebp+ecx*4+8]
	call	near ptr probj0
	mov	edx,dword ptr [esp]
	or	dx,dx
	je	near ptr prvect4
	call	near ptr outsp
prvect4	label	near
	pop	ebx
	pop	ecx
	inc	cx
	pop	eax
prvect6	label	near
	dec	bx
	jge	near ptr prvect2
prvect9	label	near
	cmp	word ptr [prcdp],0
	jle	near ptr prvect91
	inc	word ptr [prcdp]
prvect91	label	near
	ret
prfloat	label	near
	push	eax
	mov	ecx,dword ptr [bufpn]
	push	ebp
	mov	ebp,dword ptr [ecx]
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
	push	[eax+4]
	push	[eax]
	call	near ptr _llrt_cvftoa
	mov	dword ptr [crwork],eax
	add	esp,12
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebx,dword ptr [crwork]
	jmp	near ptr prnum0
prfix	label	near
	push	eax
	mov	ecx,dword ptr [bufpn]
	xor	ebx,ebx
	push	edx
	call	near ptr getnumi
	pop	edx
prnum0	label	near
	mov	ecx,ebx
	add	cx,word ptr [pocour]
	cmp	cx,word ptr [maxpocou]
	jle	near ptr prnum1
	call	near ptr chklp
prnum1	label	near
	xor	eax,eax
	jmp	near ptr prnum4
prnum3	label	near
	mov	ebp,dword ptr [bufpn]
	mov	ebp,dword ptr [ebp]
	movzx	edx,byte ptr [ebp+eax+8]
	call	near ptr outch
	inc	ax
prnum4	label	near
	dec	bx
	jge	near ptr prnum3
	pop	eax
	ret
probj	label	near
	push	eax
	push	offset FLAT:probje
	push	dword ptr [zprin]
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	jmp	near ptr probj01
probje	label	near
	pop	eax
	ret
probjend	label	near
	mov	ebx,dword ptr [zprin]
	jmp	near ptr findtag
probj01	label	near
	mov	ebp,dword ptr [prmlp]
	mov	dword ptr [prclp],ebp
	mov	ebx,dword ptr [prmln]
	or	bx,bx
	je	near ptr probj02
	inc	bx
probj02	label	near
	mov	dword ptr [prcln],ebx
	mov	ebx,dword ptr [prmdp]
	or	bx,bx
	je	near ptr probj03
	inc	bx
probj03	label	near
	mov	dword ptr [prcdp],ebx
probj0	label	near
	dec	_itloop
	jz	near ptr l___1
l1___1:
	cmp	word ptr [itcount],0
	je 	short l__1
	cmp	word ptr [itstate],0 
	je 	short l__1
	call	near ptr ithard
l__1:
	cmp	dword ptr [bfloat],eax
	ja	near ptr pratom
	cmp	dword ptr [bfloat],eax
	ja	short lmac1464
	cmp	dword ptr [bvect],eax
	ja	near ptr pratom
lmac1464:
	cmp	dword ptr [bfloat],eax
	ja	short lmac1465
	cmp	dword ptr [econs],eax
	ja	near ptr probj0t
lmac1465:
	mov	eax,dword ptr [zudprs]
	jmp	near ptr prsymb
probj0t	label	near
	cmp	eax,edi
	jb	near ptr pratom
	mov	ebx,dword ptr [prcdp]
	or	bx,bx
	jle	near ptr probj11
	cmp	bx,1
	jne	near ptr probj1
	jmp	near ptr outet
probj1	label	near
	dec	word ptr [prcdp]
probj11	label	near
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr probj3
	push	eax
	call	near ptr gettype
	cmp	eax,esi
	jb	near ptr probj12
	cmp	eax,edi
	jae	near ptr probj12
	mov	ebx,dword ptr [zprin]
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,dword ptr [zprin]
	je	near ptr probj12
	cmp	eax,esi
	je	near ptr probj12
	mov	edx,1
	jmp	near ptr ffuncall
probj12	label	near
	pop	eax
probj2	label	near
	mov	edx,40
	call	near ptr outshrp
	jmp	near ptr probj7
probj3	label	near
	mov	ebx,dword ptr [eax]
	cmp	ebx,dword ptr [zquote]
	jne	near ptr probj5
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jb	near ptr probj5
	cmp	dword ptr [4+ebx],esi
	jne	near ptr probj5
	mov	edx,39
	call	near ptr outch
	mov	eax,dword ptr [ebx]
	cmp	word ptr [prcdp],0
	jle	near ptr probj4
	inc	word ptr [prcdp]
probj4	label	near
	jmp	near ptr probj0
probj5	label	near
	mov	edx,40
	call	near ptr outch
	jmp	near ptr probj7
probjd	label	near
	mov	edx,46
	jmp	near ptr outch
probj6	label	near
	call	near ptr outsp
probj7	label	near
probj8	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfsp
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	call	near ptr probj0
	pop	eax
	cmp	eax,esi
	je	near ptr probj9
	cmp	eax,edi
	jb	near ptr probjk
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr probj6
probjk	label	near
	call	near ptr outsp
	call	near ptr probjd
	call	near ptr outsp
	call	near ptr probj0
probj9	label	near
	mov	edx,41
	cmp	word ptr [prcdp],0
	jle	near ptr probj91
	inc	word ptr [prcdp]
probj91	label	near
	jmp	near ptr outch
probjt	label	near
	push	offset FLAT:chklp
	jmp	near ptr probj
upratom	endp

prin	proc	near
	call	near ptr prinn
	ret
prinn	label	near
	or	dx,dx
	je	near ptr prinnr
	inc	dx
	push	edx
	jmp	near ptr prinn1
prinn0	label	near
	mov	eax,dword ptr [zstatpr]
	mov	eax,dword ptr [eax]
	cmp	eax,esi
	je	near ptr prinn1
	push	edx
	push	offset FLAT:prinn2
	push	dword ptr [zprin]
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	jmp	near ptr outsp
prinn2	label	near
	pop	edx
prinn1	label	near
	mov	eax,dword ptr [esp+edx*4]
	push	edx
	call	near ptr probj
	pop	edx
	dec	dx
	cmp	dx,1
	jg	near ptr prinn0
	mov	ecx,dword ptr [esp+edx*4]
	pop	edx
	lea	esp,dword ptr [esp+edx*4]
	jmp	ecx
prinnr	label	near
	mov	eax,esi
	ret
prin	endp

print000	proc	near
	call	near ptr prinn
	jmp	near ptr fullin
print000	endp

prinflush	proc	near
	call	near ptr prinn
	jmp	near ptr flulin
prinflush	endp

terpri	proc	near
	mov	ebx,dword ptr [zterpri]
	cmp	dx,1
	je	near ptr terpr2
	mov	eax,1
	or	dx,dx
	je	near ptr terpr6
	jmp	near ptr errwna
terpr2	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr terpr6
	jmp	near ptr errnia
terpr5	label	near
	call	near ptr fullin
terpr6	label	near
	dec	ax
	jge	near ptr terpr5
	jmp	near ptr prtrue
terpri	endp

princh	proc	near
	mov	ebx,1
	cmp	dx,1
	je	near ptr princh1
	cmp	dx,2
	je	near ptr princh2
	mov	eax,2
	mov	ebx,dword ptr [zprinch]
	jmp	near ptr errwna
princh2	label	near
	pop	ebx
princh1	label	near
	cmp	dword ptr [bfloat],ebx
	ja	near ptr princh3
	mov	eax,ebx
	mov	ebx,dword ptr [zprinch]
	jmp	near ptr errnia
princh3	label	near
	mov	eax,dword ptr [esp]
	mov	ebp,dword ptr [zprinch]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+8]
	call	near ptr princr1
	pop	eax
	ret
princr1	label	near
	mov	ebp,dword ptr [prmlp]
	mov	dword ptr [prclp],ebp
	push	dword ptr [zprin]
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	jmp	near ptr princr3
princr2	label	near
	push	ebx
	call	near ptr outch
	pop	ebx
princr3	label	near
	dec	bx
	jge	near ptr princr2
	ret
princh	endp

princod	proc	near
	mov	ebx,1
	cmp	dx,1
	je	near ptr princd1
	cmp	dx,2
	je	near ptr princd0
	mov	eax,2
	mov	ebx,dword ptr [zprincod]
	jmp	near ptr errwna
princd0	label	near
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	ja	near ptr princd1
	mov	eax,ebx
	mov	ebx,dword ptr [zprincod]
	jmp	near ptr errnia
princd1	label	near
	mov	edx,dword ptr [esp]
	cmp	dword ptr [bfloat],edx
	ja	near ptr princd2
	mov	eax,edx
	mov	ebx,dword ptr [zprincod]
	jmp	near ptr errnia
princd2	label	near
	call	near ptr princr1
	pop	eax
	ret
princod	endp

explode	proc	near
	push	dword ptr [lexpld]
	push	dword ptr [iexpld]
	mov	ecx,offset FLAT:explode1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [iexpld]
	pop	dword ptr [lexpld]
	jmp	ecx
explode1	label	near
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	ebx
	mov	dword ptr [lexpld],ebx
	mov	ebp,dword ptr [zt]
	mov	dword ptr [iexpld],ebp
	call	near ptr probj
	pop	eax
	mov	eax,dword ptr [4+eax]
	ret
explode	endp

explodech	proc	near
	call	near ptr explode
	mov	ebx,eax
	push	eax
	push	eax
expldech1	label	near
	cmp	ebx,edi
	jb	near ptr expldech2
	mov	eax,dword ptr [ebx]
	mov	dword ptr [esp],ebx
	call	near ptr fascii
	mov	ebx,dword ptr [esp]
	mov	dword ptr [ebx],eax
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr expldech1
expldech2	label	near
	add	esp,4
	pop	eax
	ret
expls	label	near
	push	edx
	mov	edx,32
	jmp	near ptr explch1
explsh	label	near
	push	edx
	mov	edx,35
	call	near ptr explch
	mov	edx,dword ptr [esp]
	jmp	near ptr explch1
explch	label	near
	push	edx
explch1	label	near
	push	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],edx
	mov	edx,esi
	xchg	dword ptr [4+ebp],edx
	xchg	dword ptr [fcons],edx
	mov	ebx,dword ptr [lexpld]
	mov	dword ptr [4+ebx],edx
	mov	dword ptr [lexpld],edx
	pop	ebx
	pop	edx
	ret
explodech	endp

fptype	proc	near
	mov	ebx,dword ptr [zfptype]
	cmp	dx,1
	je	near ptr ptyp1
	cmp	dx,2
	je	near ptr ptyp2
	mov	eax,2
	jmp	near ptr errwna
ptyp1	label	near
	pop	eax
	cmp	eax,esi
	jb	near ptr ptyper1
	cmp	eax,edi
	jae	near ptr ptyper1
	movzx	eax,word ptr [26+eax]
	ret
ptyp2	label	near
	pop	eax
	pop	ecx
	cmp	ecx,esi
	jb	near ptr ptyper1
	cmp	ecx,edi
	jae	near ptr ptyper1
	mov	word ptr [26+ecx],ax
	ret
ptyper1	label	near
	jmp	near ptr errsym
ptyper2	label	near
	mov	eax,ecx
	jmp	near ptr errnia
fptype	endp

fobase	proc	near
	mov	ebx,dword ptr [zfobase]
	mov	ecx,dword ptr [obase]
	push	2
	push	36
	call	near ptr getsetn
	mov	dword ptr [obase],eax
	ret
fobase	endp

prline	proc	near
	mov	ebx,dword ptr [zprline]
	mov	ecx,dword ptr [prmlp]
	push	0
	push	32767
	call	near ptr getsetn
	mov	dword ptr [prmlp],eax
	ret
prline	endp

prlevel	proc	near
	mov	ebx,dword ptr [zprlevel]
	mov	ecx,dword ptr [prmdp]
	push	0
	push	32767
	call	near ptr getsetn
	mov	dword ptr [prmdp],eax
	ret
prlevel	endp

prlength	proc	near
	mov	ebx,dword ptr [zprlength]
	mov	ecx,dword ptr [prmln]
	push	0
	push	32767
	call	near ptr getsetn
	mov	dword ptr [prmln],eax
	ret
tespos	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr poser2
	or	ax,ax
	jl	near ptr poser
	cmp	ax,word ptr [maxpocou]
	jle	near ptr prpopj
poser	label	near
	mov	ebx,edx
	jmp	near ptr erroob
poser2	label	near
	mov	ebx,edx
	jmp	near ptr errnia
prlength	endp

lmargin	proc	near
	mov	ebx,dword ptr [zlmargin]
	mov	ecx,dword ptr [nbleft]
	push	0
	push	dword ptr [nbrig]
	call	near ptr getsetn
	mov	dword ptr [nbleft],eax
	ret
lmargin	endp

rmargin	proc	near
	push	1
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [4+ebp]
	inc	bx
	push	ebx
	mov	ebx,dword ptr [zrmargin]
	mov	ecx,dword ptr [nbrig]
	call	near ptr getsetn
	mov	dword ptr [nbrig],eax
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [4+ebp]
	cmp	ax,bx
	jle	near ptr rmargin1
	mov	eax,ebx
rmargin1	label	near
	mov	dword ptr [maxpocou],eax
	mov	eax,dword ptr [nbrig]
rmargin2	label	near
	ret
rmargin	endp

outpos	proc	near
	mov	ebx,dword ptr [zoutpos]
	mov	ecx,dword ptr [pocour]
	push	0
	push	dword ptr [maxpocou]
	call	near ptr getsetn
	mov	dword ptr [pocour],eax
	ret
outpos	endp

outbuf	proc	near
	or	dx,dx
	je	near ptr outbu1
	mov	ebx,esi
	cmp	dx,1
	je	near ptr outbu5
	cmp	dx,2
	je	near ptr outbu4
	mov	eax,1
	mov	ebx,dword ptr [zoutbuf]
	jmp	near ptr errwna
outbu1	label	near
	mov	eax,dword ptr [bufout]
	ret
outbu4	label	near
	pop	ebx
outbu5	label	near
	pop	eax
	mov	edx,dword ptr [zoutbuf]
	call	near ptr tespos
	cmp	ebx,esi
	je	near ptr outbu6
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr outbuer
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
outbu6	label	near
	mov	ebp,dword ptr [bufout]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+eax+8]
	ret
outbuer	label	near
	mov	eax,ebx
	mov	ebx,edx
	jmp	near ptr errnia
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
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
outbuf	endp
_TEXT	ends
	end
