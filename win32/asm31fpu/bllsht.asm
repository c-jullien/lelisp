	.386p
	.387

	include	bllsht.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	bllsht.equ
ini_bll	proc	near
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1
	mov	ecx,offset FLAT:loc
	mov	edx,offset FLAT:zloc
	push	z_loc
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac2
	mov	ecx,offset FLAT:locint
	mov	edx,offset FLAT:zlocint
	push	z_locint
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	eax,3
	mov	ebx,offset FLAT:pnmac3
	mov	ecx,offset FLAT:vag
	mov	edx,offset FLAT:zvag
	push	z_vag
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac4
	mov	ecx,offset FLAT:memory
	mov	edx,offset FLAT:zmemory
	push	z_memory
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac5
	mov	ecx,offset FLAT:bltmemory
	mov	edx,offset FLAT:zbltmemory
	push	z_bltmemory
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac6
	mov	ecx,offset FLAT:addadr
	mov	edx,offset FLAT:zaddadr
	push	z_addadr
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac7
	mov	ecx,offset FLAT:incradr
	mov	edx,offset FLAT:zincradr
	push	z_incradr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac8
	mov	ecx,offset FLAT:subadr
	mov	edx,offset FLAT:zsubadr
	push	z_subadr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac9
	mov	ecx,offset FLAT:gtadr
	mov	edx,offset FLAT:zgtadr
	push	z_gtadr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac10
	mov	ecx,offset FLAT:accode
	mov	edx,offset FLAT:zaccode
	push	z_accode
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	eax,5
	mov	ebx,offset FLAT:pnmac11
	mov	ecx,offset FLAT:aecode
	mov	edx,offset FLAT:zaecode
	push	z_aecode
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	eax,10
	mov	ebx,offset FLAT:pnmac12
	mov	ecx,offset FLAT:precomp
	mov	edx,offset FLAT:zprecomp
	push	z_precomp
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac13
	mov	ecx,offset FLAT:llcall
	mov	edx,offset FLAT:zllcall
	push	z_llcall
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac14
	mov	ecx,offset FLAT:llcaln
	mov	edx,offset FLAT:zllcaln
	push	z_llcaln
	call	near ptr inisymb
	ret
ini_bll	endp

loc	proc	near
	mov	ebx,eax
	shr	ebx,16
	movzx	eax,ax
	or	bx,bx
	je	near ptr loc9
	cmp	dword ptr [fcons],edi
	jb	near ptr l__1
l1__1:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
loc9	label	near
	ret
loc	endp

locint	proc	near
	mov	ebx,eax
	shr	ebx,16
	movzx	eax,ax
	add	ax,bx
	and	ax,32767
	ret
locint	endp

vag	proc	near
	mov	ebx,dword ptr [zvag]
vaga1	label	near
	cmp	eax,edi
	jl	near ptr vagc
	mov	ebp,dword ptr [eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr vagerr
	mov	ebp,dword ptr [4+eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr vagerr
	mov	ebx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	mov	ebp,ebx
	shl	ebp,16
	or	eax,ebp
vagret	label	near
	ret
vagc	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr vagerr
	jmp	near ptr vagret
	mov	eax,dword ptr [eax]
	ret
vagerr3	label	near
	mov	eax,ecx
vagerr	label	near
	jmp	near ptr errnda
vaga3	label	near
	cmp	ecx,edi
	jl	near ptr vaga3c
	mov	ebp,dword ptr [ecx]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr vagerr3
	mov	ebp,dword ptr [4+ecx]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr vagerr3
	mov	ebx,dword ptr [ecx]
	mov	ecx,dword ptr [4+ecx]
	mov	ebp,ebx
	shl	ebp,16
	or	ecx,ebp
vaga3ret	label	near
	ret
vaga3c	label	near
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr vagerr3
	jmp	near ptr vaga3ret
	mov	ecx,dword ptr [ecx]
	ret
vag	endp

addadr	proc	near
	mov	ebp,dword ptr [zaddadr]
	mov	dword ptr [adrtmp],ebp
	call	near ptr adrverif
	add	ax,bx
	adc	cx,dx
	jmp	near ptr adrcreat
addadr	endp

incradr	proc	near
	push	eax
	mov	ebp,dword ptr [zincradr]
	mov	dword ptr [adrtmp],ebp
	call	near ptr adrverif
	add	ax,bx
	adc	cx,dx
	pop	edx
	or	cx,cx
	jne	near ptr incadr2
	or	ax,ax
	jge	near ptr incadr3
incadr2	label	near
	cmp	cx,(65536+-1)
	je	near ptr incadr3
	cmp	edx,edi
	jl	near ptr incadr1
	mov	dword ptr [edx],ecx
	mov	dword ptr [4+edx],eax
	mov	eax,edx
	ret
incadr1	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
incadr3	label	near
	ret
incradr	endp

subadr	proc	near
	mov	ebp,dword ptr [zsubadr]
	mov	dword ptr [adrtmp],ebp
	call	near ptr adrverif
	sub	ax,bx
	sbb	cx,dx
	jmp	near ptr adrcreat
subadr	endp

gtadr	proc	near
	mov	ebp,dword ptr [zgtadr]
	mov	dword ptr [adrtmp],ebp
	call	near ptr adrverif
	cmp	ecx,edx
	jb	near ptr gtadr0
	je	near ptr gtadr1
	ja	near ptr gtadr2
gtadr1	label	near
	cmp	eax,ebx
	jb	near ptr gtadr0
	je	near ptr gtadr0
	ja	near ptr gtadr2
gtadr2	label	near
	mov	eax,dword ptr [zt]
	ret
gtadr0	label	near
	mov	eax,esi
	ret
adrverif	label	near
	cmp	eax,edi
	jge	near ptr adrver1
	cmp	dword ptr [bfloat],eax
	jbe	near ptr adrerr1
	xor	ecx,ecx
	or	ax,ax
	jge	near ptr adrver4
	mov	ecx,(65536+-1)
adrver4	label	near
	cmp	ebx,edi
	jge	near ptr adrver2
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr adrerr2
	xor	edx,edx
	or	bx,bx
	jge	near ptr adrver5
	mov	edx,(65536+-1)
adrver5	label	near
	ret
adrver2	label	near
	mov	edx,dword ptr [ebx]
	cmp	dword ptr [bfloat],edx
	jbe	near ptr adrerr2
	mov	ebp,dword ptr [4+ebx]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr adrerr2
	mov	ebx,dword ptr [4+ebx]
	ret
adrver1	label	near
	cmp	ebx,edi
	jge	near ptr adrver3
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr adrerr2
	mov	ecx,dword ptr [eax]
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr adrerr1
	xor	edx,edx
	or	bx,bx
	jge	near ptr adrver6
	mov	edx,(65536+-1)
adrver6	label	near
	mov	ebp,dword ptr [4+eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr adrerr1
	mov	eax,dword ptr [4+eax]
	ret
adrver3	label	near
	mov	ecx,dword ptr [eax]
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr adrerr1
	mov	edx,dword ptr [ebx]
	cmp	dword ptr [bfloat],edx
	jbe	near ptr adrerr2
	mov	ebp,dword ptr [4+eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr adrerr1
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [4+ebx]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr adrerr2
	mov	ebx,dword ptr [4+ebx]
	ret
adrerr2	label	near
	mov	eax,ebx
adrerr1	label	near
	mov	ebx,dword ptr [adrtmp]
	jmp	near ptr errnda
adrcreat	label	near
	or	cx,cx
	jne	near ptr adrcrea1
	or	ax,ax
	jl	near ptr adrcrea2
	ret
adrcrea1	label	near
	cmp	cx,(65536+-1)
	jne	near ptr adrcrea2
	or	ax,ax
	jl	near ptr adrcrear
adrcrea2	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
adrcrear	label	near
	ret
gtadr	endp

accode	proc	near
	mov	ebx,dword ptr [zaccode]
	or	dx,dx
	je	near ptr accodeg
	cmp	dx,1
	je	near ptr accodes
	mov	eax,1
	jmp	near ptr errwna
accodes	label	near
	pop	eax
	call	near ptr vaga1
	mov	dword ptr [ccode],eax
accodeg	label	near
	mov	eax,dword ptr [ccode]
	jmp	near ptr loc
accode	endp

aecode	proc	near
	mov	eax,dword ptr [ecode]
	jmp	near ptr loc
aecode	endp

memory	proc	near
	mov	ebx,dword ptr [zmemory]
	cmp	dx,2
	jne	near ptr memor2
	pop	eax
	pop	ecx
	call	near ptr vaga3
	mov	byte ptr [ecx],al
	ret
memor2	label	near
	cmp	dx,1
	jne	near ptr memor3
	pop	eax
	call	near ptr vaga1
	movzx	eax, byte ptr [eax]
	ret
memor3	label	near
	mov	eax,2
	jmp	near ptr errwna
memory	endp

bltmemory	proc	near
	push	ebx
	mov	ebx,dword ptr [zbltmemory]
	call	near ptr vaga1
	call	near ptr vaga3
	mov	edx,eax
	mov	eax,dword ptr [esp]
	call	near ptr vaga1
	mov	ebx,edx
	pop	eax
	ret
bltmemory	endp

precomp	proc	near
	jmp	near ptr evalcar
precomp	endp

llcall	proc	near
	cmp	dx,4
	jne	near ptr callerr1
	pop	ecx
	pop	ebx
	pop	edx
	pop	eax
	push	ebx
	call	near ptr vaga1
	xchg	dword ptr [esp],eax
	mov	ebx,eax
	mov	eax,edx
	ret
callerr1	label	near
	mov	ebx,dword ptr [zllcall]
	mov	eax,4
	jmp	near ptr errwna
llcall	endp

llcaln	proc	near
	mov	ecx,ebx
	mov	ebx,dword ptr [zllcaln]
	call	near ptr vaga1
	xor	edx,edx
	jmp	near ptr calln3
calln2	label	near
	push	dword ptr [ecx]
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	ecx,dword ptr [4+ecx]
	inc	dx
calln3	label	near
	cmp	ecx,edi
	jge	near ptr calln2
	jmp	eax
epur	label	near
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
l__1:
	call	near ptr gccons
	jmp	near ptr l1__1
llcaln	endp
_TEXT	ends
	end
