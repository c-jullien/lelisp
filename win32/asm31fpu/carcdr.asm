	.386p
	.387

	include	carcdr.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	carcdr.equ
ini_cad	proc	near
	mov	eax,3
	mov	ebx,offset FLAT:pnmac15
	mov	ecx,offset FLAT:fcar
	mov	edx,offset FLAT:zfcar
	push	z_fcar
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac16
	mov	ecx,offset FLAT:fcdr
	mov	edx,offset FLAT:zfcdr
	push	z_fcdr
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac17
	mov	ecx,offset FLAT:ca2r
	mov	edx,offset FLAT:zca2r
	push	z_ca2r
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac18
	mov	ecx,offset FLAT:cadr
	mov	edx,offset FLAT:zcadr
	push	z_cadr
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac19
	mov	ecx,offset FLAT:cdar
	mov	edx,offset FLAT:zcdar
	push	z_cdar
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac20
	mov	ecx,offset FLAT:cddr
	mov	edx,offset FLAT:zcddr
	push	z_cddr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac21
	mov	ecx,offset FLAT:caaar
	mov	edx,offset FLAT:zcaaar
	push	z_caaar
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac22
	mov	ecx,offset FLAT:caadr
	mov	edx,offset FLAT:zcaadr
	push	z_caadr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac23
	mov	ecx,offset FLAT:cadar
	mov	edx,offset FLAT:zcadar
	push	z_cadar
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac24
	mov	ecx,offset FLAT:caddr
	mov	edx,offset FLAT:zcaddr
	push	z_caddr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac25
	mov	ecx,offset FLAT:cdaar
	mov	edx,offset FLAT:zcdaar
	push	z_cdaar
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac26
	mov	ecx,offset FLAT:cdadr
	mov	edx,offset FLAT:zcdadr
	push	z_cdadr
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac27
	mov	ecx,offset FLAT:cddar
	mov	edx,offset FLAT:zcddar
	push	z_cddar
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac28
	mov	ecx,offset FLAT:cdddr
	mov	edx,offset FLAT:zcdddr
	push	z_cdddr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac29
	mov	ecx,offset FLAT:caaaar
	mov	edx,offset FLAT:zcaaaar
	push	z_caaaar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac30
	mov	ecx,offset FLAT:caaadr
	mov	edx,offset FLAT:zcaaadr
	push	z_caaadr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac31
	mov	ecx,offset FLAT:caadar
	mov	edx,offset FLAT:zcaadar
	push	z_caadar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac32
	mov	ecx,offset FLAT:caaddr
	mov	edx,offset FLAT:zcaaddr
	push	z_caaddr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac33
	mov	ecx,offset FLAT:cadaar
	mov	edx,offset FLAT:zcadaar
	push	z_cadaar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac34
	mov	ecx,offset FLAT:cadadr
	mov	edx,offset FLAT:zcadadr
	push	z_cadadr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac35
	mov	ecx,offset FLAT:caddar
	mov	edx,offset FLAT:zcaddar
	push	z_caddar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac36
	mov	ecx,offset FLAT:cadddr
	mov	edx,offset FLAT:zcadddr
	push	z_cadddr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac37
	mov	ecx,offset FLAT:cdaaar
	mov	edx,offset FLAT:zcdaaar
	push	z_cdaaar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac38
	mov	ecx,offset FLAT:cdaadr
	mov	edx,offset FLAT:zcdaadr
	push	z_cdaadr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac39
	mov	ecx,offset FLAT:cdadar
	mov	edx,offset FLAT:zcdadar
	push	z_cdadar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac40
	mov	ecx,offset FLAT:cdaddr
	mov	edx,offset FLAT:zcdaddr
	push	z_cdaddr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac41
	mov	ecx,offset FLAT:cddaar
	mov	edx,offset FLAT:zcddaar
	push	z_cddaar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac42
	mov	ecx,offset FLAT:cddadr
	mov	edx,offset FLAT:zcddadr
	push	z_cddadr
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac43
	mov	ecx,offset FLAT:cdddar
	mov	edx,offset FLAT:zcdddar
	push	z_cdddar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac44
	mov	ecx,offset FLAT:cddddr
	mov	edx,offset FLAT:zcddddr
	push	z_cddddr
	call	near ptr inisymb
	ret
carerr	label	near
	cmp	eax,esi
	je	near ptr careret
	mov	eax,ecx
	jmp	near ptr errnla
careret	label	near
	ret
ini_cad	endp

fcar	proc	near
	mov	ebx,dword ptr [zfcar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
fcar	endp

fcdr	proc	near
	mov	ebx,dword ptr [zfcdr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
fcdr	endp

ca2r	proc	near
	mov	ebx,dword ptr [zca2r]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
ca2r	endp

cadr	proc	near
	mov	ebx,dword ptr [zcadr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
cadr	endp

cdar	proc	near
	mov	ebx,dword ptr [zcdar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cdar	endp

cddr	proc	near
	mov	ebx,dword ptr [zcddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cddr	endp

caaar	proc	near
	mov	ebx,dword ptr [zcaaar]
	mov	ecx,eax
caaar1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
caaar	endp

caadr	proc	near
	mov	ebx,dword ptr [zcaadr]
	mov	ecx,eax
caadr1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
caadr	endp

cadar	proc	near
	mov	ebx,dword ptr [zcadar]
	mov	ecx,eax
cadar1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
cadar	endp

caddr	proc	near
	mov	ebx,dword ptr [zcaddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
caddr	endp

cdaar	proc	near
	mov	ebx,dword ptr [zcdaar]
	mov	ecx,eax
cdaar1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cdaar	endp

cdadr	proc	near
	mov	ebx,dword ptr [zcdadr]
	mov	ecx,eax
cdadr1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cdadr	endp

cddar	proc	near
	mov	ebx,dword ptr [zcddar]
	mov	ecx,eax
cddar1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cddar	endp

cdddr	proc	near
	mov	ebx,dword ptr [zcdddr]
	mov	ecx,eax
cdddr1	label	near
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	ret
cdddr	endp

caaaar	proc	near
	mov	ebx,dword ptr [zcaaaar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr caaar1
caaaar	endp

caaadr	proc	near
	mov	ebx,dword ptr [zcaaadr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr caaar1
caaadr	endp

caadar	proc	near
	mov	ebx,dword ptr [zcaadar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr caadr1
caadar	endp

caaddr	proc	near
	mov	ebx,dword ptr [zcaaddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr caadr1
caaddr	endp

cadaar	proc	near
	mov	ebx,dword ptr [zcadaar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr cadar1
cadaar	endp

cadadr	proc	near
	mov	ebx,dword ptr [zcadadr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr cadar1
cadadr	endp

caddar	proc	near
	mov	ebx,dword ptr [zcaddar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
caddar	endp

cadddr	proc	near
	mov	ebx,dword ptr [zcadddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	ret
cadddr	endp

cdaaar	proc	near
	mov	ebx,dword ptr [zcdaaar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr cdaar1
cdaaar	endp

cdaadr	proc	near
	mov	ebx,dword ptr [zcdaadr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr cdaar1
cdaadr	endp

cdadar	proc	near
	mov	ebx,dword ptr [zcdadar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr cdadr1
cdadar	endp

cdaddr	proc	near
	mov	ebx,dword ptr [zcdaddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr cdadr1
cdaddr	endp

cddaar	proc	near
	mov	ebx,dword ptr [zcddaar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr cddar1
cddaar	endp

cddadr	proc	near
	mov	ebx,dword ptr [zcddadr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr cddar1
cddadr	endp

cdddar	proc	near
	mov	ebx,dword ptr [zcdddar]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [eax]
	jmp	near ptr cdddr1
cdddar	endp

cddddr	proc	near
	mov	ebx,dword ptr [zcddddr]
	mov	ecx,eax
	cmp	eax,edi
	jl	near ptr carerr
	mov	eax,dword ptr [4+eax]
	jmp	near ptr cdddr1
cddddr	endp
_TEXT	ends
	end
