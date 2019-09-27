	.386p
	.387

	include	symbs.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	symbs.equ
ini_sym	proc	near
	mov	eax,10
	mov	ebx,offset FLAT:pnmac731
	mov	ecx,offset FLAT:makunbound
	mov	edx,offset FLAT:zmakunbound
	push	z_makunbound
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac732
	mov	ecx,offset FLAT:fplist
	mov	edx,offset FLAT:zfplist
	push	z_fplist
	call	near ptr inisymb
	mov	eax,11
	mov	ebx,offset FLAT:pnmac733
	mov	ecx,offset FLAT:pckgcell
	mov	edx,offset FLAT:zpckgcell
	push	z_pckgcell
	call	near ptr inisymb
	mov	eax,14
	mov	ebx,offset FLAT:pnmac734
	mov	ecx,offset FLAT:d3root
	mov	edx,offset FLAT:zd3root
	push	z_d3root
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac735
	mov	ecx,offset FLAT:objval
	mov	edx,offset FLAT:zobjval
	push	z_objval
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac736
	mov	ecx,offset FLAT:valfn
	mov	edx,offset FLAT:zvalfn
	push	z_valfn
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac737
	mov	ecx,offset FLAT:typefn
	mov	edx,offset FLAT:ztypefn
	push	z_typefn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac738
	mov	ecx,offset FLAT:setfn
	mov	edx,offset FLAT:zsetfn
	push	z_setfn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac739
	mov	ecx,offset FLAT:remfn
	mov	edx,offset FLAT:zremfn
	push	z_remfn
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac740
	mov	ecx,offset FLAT:findfn
	mov	edx,offset FLAT:zfindfn
	push	z_findfn
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac741
	mov	ecx,offset FLAT:getfn1
	mov	edx,offset FLAT:zgetfn1
	push	z_getfn1
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac742
	mov	ecx,offset FLAT:getfn
	mov	edx,offset FLAT:zgetfn
	push	z_getfn
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac743
	mov	ecx,offset FLAT:getsym1
	mov	edx,offset FLAT:zgetsym1
	push	z_getsym1
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac744
	mov	ecx,offset FLAT:getsymb
	mov	edx,offset FLAT:zgetsymb
	push	z_getsymb
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac745
	mov	ecx,offset FLAT:getbi
	mov	edx,offset FLAT:zgetbi
	push	z_getbi
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac746
	mov	ecx,offset FLAT:synonym
	mov	edx,offset FLAT:zsynonym
	push	z_synonym
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac747
	mov	ecx,offset FLAT:synqnym
	mov	edx,offset FLAT:zsynqnym
	push	z_synqnym
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac748
	mov	ecx,offset FLAT:remob
	mov	edx,offset FLAT:zremob
	push	z_remob
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac749
	mov	ecx,offset FLAT:getprop
	mov	edx,offset FLAT:zgetprop
	push	z_getprop
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac750
	mov	ecx,offset FLAT:getprop
	mov	edx,offset FLAT:zgetprop
	push	z_getprop
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac751
	mov	ecx,offset FLAT:getl
	mov	edx,offset FLAT:zgetl
	push	z_getl
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac752
	mov	ecx,offset FLAT:addprop
	mov	edx,offset FLAT:zaddprop
	push	z_addprop
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac753
	mov	ecx,offset FLAT:putprop
	mov	edx,offset FLAT:zputprop
	push	z_putprop
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac754
	mov	ecx,offset FLAT:defprop
	mov	edx,offset FLAT:zdefprop
	push	z_defprop
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac755
	mov	ecx,offset FLAT:remprop
	mov	edx,offset FLAT:zremprop
	push	z_remprop
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac756
	mov	ecx,offset FLAT:fincr
	mov	edx,offset FLAT:zfincr
	push	z_fincr
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac757
	mov	ecx,offset FLAT:fdecr
	mov	edx,offset FLAT:zfdecr
	push	z_fdecr
	call	near ptr inisymb
	ret
sybfalse	label	near
	mov	eax,esi
	ret
sybret	label	near
	ret
ini_sym	endp

makunbound	proc	near
	cmp	dword ptr [bvar],eax
	ja	near ptr makuerr
	cmp	eax,edi
	jae	near ptr makuerr
	mov	ebp,dword ptr [zundef]
	mov	dword ptr [eax],ebp
	ret
makuerr	label	near
	mov	ebx,dword ptr [zmakunbound]
	jmp	near ptr errnva
makunbound	endp

fplist	proc	near
	mov	ebx,dword ptr [zfplist]
	mov	ecx,offset FLAT:setplist
	call	near ptr getset12
	mov	eax,dword ptr [4+eax]
	ret
setplist	label	near
	mov	dword ptr [4+ecx],eax
	ret
fplist	endp

pckgcell	proc	near
	mov	ebx,dword ptr [zpckgcell]
	mov	ecx,offset FLAT:pckgset
	call	near ptr getset12
	mov	eax,dword ptr [12+eax]
	ret
pckgset	label	near
	mov	dword ptr [12+ecx],eax
	ret
pckgcell	endp

d3root	proc	near
	cmp	dword ptr [28+eax],esi
	jb	near ptr d3rootn
	cmp	dword ptr [28+eax],edi
	jae	near ptr d3rootn
	mov	edx,eax
d3roota	label	near
	cmp	dword ptr [12+eax],esi
	je	near ptr d3rootr
	mov	eax,dword ptr [28+eax]
	cmp	eax,edx
	jne	near ptr d3roota
d3rootn	label	near
	mov	eax,esi
d3rootr	label	near
	ret
d3root	endp

objval	proc	near
	mov	ebx,dword ptr [zobjval]
	mov	ecx,offset FLAT:objvset
	call	near ptr getset12
	mov	eax,dword ptr [16+eax]
	ret
objvset	label	near
	mov	dword ptr [16+ecx],eax
	ret
objval	endp

valfn	proc	near
	cmp	eax,esi
	jb	near ptr valferr
	cmp	eax,edi
	jae	near ptr valferr
	mov	eax,dword ptr [8+eax]
	cmp	dword ptr [bfloat],eax
	ja	short lmac758
	cmp	dword ptr [econs],eax
	ja	near ptr valfnr
lmac758:
	jmp	near ptr loc
valferr	label	near
	mov	ebx,dword ptr [zvalfn]
	jmp	near ptr errsym
valfnr	label	near
	ret
valfn	endp

typefn	proc	near
	cmp	eax,esi
	jb	near ptr typefer1
	cmp	eax,edi
	jae	near ptr typefer1
	movzx	eax,word ptr [24+eax]
	mov	ebx,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebx]
	mov	ecx,dword ptr [4+ebp]
	dec	cx
typefn1	label	near
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [ebp+ecx*4+8]
	cmp	edx,eax
	je	near ptr typefn2
	dec	cx
	jg	near ptr typefn1
typefn2	label	near
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+ecx*4+8]
	ret
typefer1	label	near
	mov	ebx,dword ptr [ztypefn]
	jmp	near ptr errsym
typefer2	label	near
	mov	ebx,dword ptr [ztypefn]
	jmp	near ptr erroob
typefn	endp

setfn	proc	near
	cmp	dword ptr [bvar],eax
	ja	near ptr setfner2
	cmp	eax,edi
	jae	near ptr setfner2
	cmp	ebx,esi
	jb	near ptr setfner1
	cmp	ebx,edi
	jae	near ptr setfner1
	push	ecx
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	jmp	near ptr setfn3
setfner1	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zsetfn]
	jmp	near ptr errsym
setfner2	label	near
	mov	ebx,dword ptr [zsetfn]
	jmp	near ptr errnva
setfner3	label	near
	mov	ebx,dword ptr [zsetfn]
	mov	eax,ecx
	jmp	near ptr erroob
setfn2	label	near
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+edx*4+8]
	cmp	ecx,ebx
	je	near ptr setfn4
setfn3	label	near
	dec	dx
	jge	near ptr setfn2
	jmp	near ptr setfner3
setfn4	label	near
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [ebp+edx*4+8]
	mov	word ptr [24+eax],dx
	xchg	dword ptr [esp],eax
	cmp	eax,edi
	jl	near ptr setfn5
	mov	ebp,dword ptr [eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr setfn6
setfn5	label	near
	call	near ptr vag
setfn6	label	near
	mov	ebx,eax
	pop	eax
	mov	dword ptr [8+eax],ebx
	ret
setfn	endp

getfn1	proc	near
	cmp	eax,esi
	jb	near ptr getfn1r2
	cmp	eax,edi
	jae	near ptr getfn1r2
	cmp	ebx,esi
	jb	near ptr getfn1r1
	cmp	ebx,edi
	jae	near ptr getfn1r1
	cmp	dword ptr [12+ebx],esi
	jne	near ptr sybfalse
getfn1i	label	near
	call	near ptr getsym1i
	movzx	ebx,word ptr [24+eax]
	or	bx,bx
	je	near ptr sybfalse
	ret
getfn1r1	label	near
	mov	eax,ebx
getfn1r2	label	near
	mov	ebx,dword ptr [zgetfn1]
	jmp	near ptr errsym
getfn1	endp

getfn	proc	near
	mov	ebx,dword ptr [zgetfn]
	xor	ecx,ecx
	cmp	dx,2
	je	near ptr getfn2
	cmp	dx,3
	je	near ptr getfn3
	mov	eax,3
	jmp	near ptr errwna
getfn3	label	near
	pop	ecx
	cmp	ecx,esi
	jb	near ptr getfner3
	cmp	ecx,edi
	jae	near ptr getfner3
getfn2	label	near
	pop	ebx
	pop	eax
	jmp	near ptr getfns
getfner1	label	near
	mov	eax,ebx
getfner2	label	near
	mov	ebx,dword ptr [zgetfn]
	jmp	near ptr errsym
getfner3	label	near
	mov	eax,ecx
	jmp	near ptr errsym
getfns	label	near
	cmp	ebx,esi
	jb	near ptr getfner1
	cmp	ebx,edi
	jae	near ptr getfner1
	cmp	eax,esi
	jb	short lmac759
	cmp	eax,edi
	jb	near ptr getfn5
lmac759:
	cmp	eax,edi
	jl	near ptr getfner2
	mov	edx,eax
	cmp	edx,edi
	jge	near ptr getfnm1
	mov	eax,esi
	ret
getfnm1	label	near
	mov	eax,dword ptr [edx]
	cmp	eax,esi
	jb	near ptr getfner2
	cmp	eax,edi
	jae	near ptr getfner2
	push	dword ptr [4+edx]
	call	near ptr getfn5
	cmp	eax,esi
	je	near ptr getfnm2
	add	esp,4
	ret
getfnm2	label	near
	pop	edx
	cmp	edx,edi
	jge	near ptr getfnm1
	mov	eax,esi
	ret
getfn5	label	near
	mov	ebp,dword ptr [28+ebx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac760
	cmp	esi,ebp
	ja	near ptr getfnone
lmac760:
	cmp	eax,edi
	jl	near ptr getfn8
getfn7	label	near
	mov	edx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	cmp	edx,esi
	je	near ptr getfn8
	push	edx
	call	near ptr getfn8
	pop	edx
	cmp	eax,esi
	jne	near ptr getfnrt
	mov	eax,edx
	cmp	eax,edi
	jl	near ptr getfn8
	jmp	near ptr getfn7
getfnrt	label	near
	ret
getfn8	label	near
getfn80	label	near
	mov	edx,ebx
getfn81	label	near
	cmp	dword ptr [12+ebx],eax
	je	near ptr getfn9
	mov	ebx,dword ptr [28+ebx]
	cmp	ebx,edx
	jne	near ptr getfn81
getfn82	label	near
	cmp	eax,esi
	je	near ptr getfn83
	mov	eax,dword ptr [12+eax]
	cmp	eax,ecx
	jne	near ptr getfn84
getfn83	label	near
	mov	eax,esi
	ret
getfn84	label	near
	cmp	eax,edi
	jl	near ptr getfn80
	jmp	near ptr getfn7
getfn9	label	near
	push	ecx
	movzx	ecx,word ptr [24+ebx]
	or	cx,cx
	je	near ptr getfn91
	pop	ecx
	mov	eax,ebx
	ret
getfn91	label	near
	pop	ecx
	jmp	near ptr getfn82
getfnone	label	near
	movzx	edx,word ptr [24+ebx]
	or	dx,dx
	je	near ptr sybfalse
	mov	edx,dword ptr [12+ebx]
getfno1	label	near
	cmp	eax,edi
	jl	near ptr getfno3
getfno2	label	near
	mov	edx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	cmp	edx,esi
	je	near ptr getfno3
	push	edx
	mov	edx,dword ptr [12+ebx]
	call	near ptr getfno3
	pop	edx
	cmp	eax,esi
	jne	near ptr getfnor
	mov	eax,edx
	jmp	near ptr getfno2
getfnor	label	near
	ret
getfno3	label	near
	cmp	eax,edx
	je	near ptr getfno9
	cmp	eax,esi
	je	near ptr sybfalse
	mov	eax,dword ptr [12+eax]
	cmp	eax,ecx
	jne	near ptr getfno1
getfnof	label	near
	mov	eax,esi
	ret
getfno9	label	near
	mov	eax,ebx
	ret
getfn	endp

getbi	proc	near
	cmp	eax,esi
	jb	near ptr getbier1
	cmp	eax,edi
	jae	near ptr getbier1
	cmp	ebx,esi
	jb	near ptr getbier2
	cmp	ebx,edi
	jae	near ptr getbier2
	cmp	ecx,esi
	jb	near ptr getbier3
	cmp	ecx,edi
	jae	near ptr getbier3
	cmp	dword ptr [12+ecx],esi
	jne	near ptr sybfalse
getbi1	label	near
	push	ebx
getbi2	label	near
	push	eax
	call	near ptr getbi1i
	cmp	eax,esi
	jne	near ptr getbi9
	pop	eax
	mov	ebx,dword ptr [12+ebx]
	cmp	ebx,esi
	jne	near ptr getbi2
	pop	ebx
	mov	eax,dword ptr [12+eax]
	cmp	eax,esi
	jne	near ptr getbi1
	ret
getbi9	label	near
	add	esp,8
	ret
getbier3	label	near
	mov	eax,ecx
	jmp	near ptr getbier1
getbier2	label	near
	mov	eax,ebx
getbier1	label	near
	mov	ebx,dword ptr [zgetbi]
	jmp	near ptr errsym
getbi1i	label	near
	mov	edx,dword ptr [12+ecx]
	cmp	edx,edi
	jl	near ptr getbi1i1
	cmp	dword ptr [edx],eax
	jne	near ptr getbi1i1
	cmp	dword ptr [4+edx],ebx
	jne	near ptr getbi1i1
	movzx	edx,word ptr [24+ecx]
	or	dx,dx
	jne	near ptr getbi1i9
getbi1i1	label	near
	mov	ebp,dword ptr [28+ecx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac761
	cmp	esi,ebp
	ja	near ptr sybfalse
lmac761:
	push	ecx
getbi1i2	label	near
	mov	ecx,dword ptr [28+ecx]
	mov	edx,dword ptr [12+ecx]
	cmp	edx,edi
	jl	near ptr getbi1i3
	cmp	dword ptr [edx],eax
	jne	near ptr getbi1i3
	cmp	dword ptr [4+edx],ebx
	jne	near ptr getbi1i3
	movzx	edx,word ptr [24+ecx]
	or	dx,dx
	jne	near ptr getbi1i8
getbi1i3	label	near
	cmp	ecx,dword ptr [esp]
	jne	near ptr getbi1i2
	add	esp,4
	jmp	near ptr sybfalse
getbi1i8	label	near
	add	esp,4
getbi1i9	label	near
	mov	eax,ecx
	ret
getbi	endp

remfn	proc	near
	cmp	eax,esi
	jb	near ptr makunfner
	cmp	eax,edi
	jae	near ptr makunfner
	mov	dword ptr [8+eax],0
	mov	word ptr [24+eax],0
	ret
makunfner	label	near
	mov	ebx,dword ptr [zremfn]
	jmp	near ptr errsym
remfn	endp

findfn	proc	near
	mov	ebx,eax
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	dec	ax
findfn1	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	jmp	near ptr findfn8
findfn2	label	near
	mov	ecx,eax
	mov	ebp,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac762
	cmp	esi,ebp
	ja	near ptr findfn4
lmac762:
findfn3	label	near
	mov	eax,dword ptr [28+eax]
findfn4	label	near
	cmp	dword ptr [8+eax],ebx
	je	near ptr findfn9
	cmp	eax,ecx
	jne	near ptr findfn3
	mov	eax,dword ptr [20+eax]
findfn8	label	near
	cmp	eax,esi
	jb	short lmac763
	cmp	eax,edi
	jb	near ptr findfn2
lmac763:
	dec	ax
	jge	near ptr findfn1
	mov	eax,esi
findfn9	label	near
	ret
findfn	endp

synonym	proc	near
	cmp	eax,esi
	jb	near ptr synmerr2
	cmp	eax,edi
	jae	near ptr synmerr2
	cmp	eax,esi
	je	near ptr synmerr2
	cmp	ebx,esi
	jb	short lmac764
	cmp	ebx,edi
	jb	near ptr synom
lmac764:
	mov	eax,ebx
synmerr2	label	near
	mov	ebx,dword ptr [zsynonym]
	jmp	near ptr errsym
synom	label	near
	movzx	ecx,word ptr [24+ebx]
	or	cx,cx
	je	near ptr synmerr3
	mov	word ptr [24+eax],cx
	mov	ebp,dword ptr [8+ebx]
	mov	dword ptr [8+eax],ebp
	ret
synmerr3	label	near
	push	eax
	mov	eax,ebx
	mov	ebx,dword ptr [zsynonym]
	call	near ptr errudf
	pop	eax
	jmp	near ptr synonym
synonym	endp

synqnym	proc	near
	mov	ebx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	mov	ebx,dword ptr [ebx]
	cmp	eax,esi
	jb	near ptr synmerq2
	cmp	eax,edi
	jae	near ptr synmerq2
	cmp	eax,esi
	je	near ptr synmerq2
	cmp	ebx,esi
	jb	near ptr synmerq1
	cmp	ebx,edi
	jae	near ptr synmerq1
	jmp	near ptr synom
synmerq1	label	near
	mov	eax,ebx
synmerq2	label	near
	mov	ebx,dword ptr [zsynqnym]
	jmp	near ptr errsym
synqnym	endp

remob	proc	near
	cmp	dword ptr [bvar],eax
	ja	near ptr remoberr
	cmp	eax,edi
	jae	near ptr remoberr
	jmp	near ptr istdsym
remoberr	label	near
	mov	ebx,dword ptr [zremob]
	jmp	near ptr errsym
remob	endp

getsymb	proc	near
	cmp	dx,3
	je	near ptr getsymb0
	cmp	dx,2
	je	near ptr getsymb1
	mov	ebx,dword ptr [zgetsymb]
	mov	eax,3
	jmp	near ptr errwna
getsymb0	label	near
	pop	ecx
	cmp	ecx,esi
	jb	short lmac765
	cmp	ecx,edi
	jb	near ptr getsymb2
lmac765:
	mov	eax,ecx
	mov	ebx,dword ptr [zgetsymb]
	jmp	near ptr errsym
getsymb1	label	near
	xor	ecx,ecx
getsymb2	label	near
	pop	ebx
	pop	eax
	jmp	near ptr getsymi
getsymi	label	near
	cmp	ebx,esi
	jb	near ptr getsymer
	cmp	ebx,edi
	jae	near ptr getsymer
getsymi1	label	near
	cmp	eax,esi
	jb	short lmac766
	cmp	eax,edi
	jb	near ptr getsymi3
lmac766:
	mov	eax,esi
	ret
getsymi3	label	near
	cmp	eax,ecx
	je	near ptr sybfalse
	push	eax
	call	near ptr getsym1i
	cmp	eax,esi
	jne	near ptr getsymi5
	pop	eax
	cmp	eax,esi
	je	near ptr sybfalse
	mov	eax,dword ptr [12+eax]
	jmp	near ptr getsymi1
getsymi5	label	near
	add	esp,4
	ret
getsymer	label	near
	mov	eax,dword ptr [zgetsymb]
	jmp	near ptr errsym
getsymb	endp

getsym1	proc	near
	cmp	eax,esi
	jb	near ptr getsy1r1
	cmp	eax,edi
	jae	near ptr getsy1r1
	cmp	ebx,esi
	jb	near ptr getsy1r2
	cmp	ebx,edi
	jae	near ptr getsy1r2
	cmp	dword ptr [12+ebx],esi
	jne	near ptr sybfalse
getsym1i	label	near
	cmp	dword ptr [12+ebx],eax
	je	near ptr getsym12
	mov	ebp,dword ptr [28+ebx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac767
	cmp	esi,ebp
	ja	near ptr sybfalse
lmac767:
	mov	edx,ebx
getsym11	label	near
	mov	ebx,dword ptr [28+ebx]
	cmp	dword ptr [12+ebx],eax
	je	near ptr getsym12
	cmp	ebx,edx
	jne	near ptr getsym11
	jmp	near ptr sybfalse
getsym12	label	near
	mov	eax,ebx
	ret
getsy1r2	label	near
	mov	eax,ebx
getsy1r1	label	near
	mov	ebx,dword ptr [zgetsym1]
	jmp	near ptr errsym
geti	label	near
	mov	edx,dword ptr [4+eax]
	mov	ecx,esi
	jmp	near ptr geti3
geti2	label	near
	cmp	ebx,dword ptr [edx]
	je	near ptr getiret
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jl	near ptr geti4
	mov	ecx,edx
	mov	edx,dword ptr [4+edx]
	dec	_itloop
	jz	near ptr l___1
l1___1:
	cmp	word ptr [itcount],0
	je 	short l__1
	cmp	word ptr [itstate],0 
	je 	short l__1
	call	near ptr ithard
l__1:
geti3	label	near
	cmp	edx,edi
	jge	near ptr geti2
geti4	label	near
	mov	edx,esi
getiret	label	near
	ret
getsym1	endp

getprop	proc	near
	cmp	eax,esi
	je	near ptr getpr4
	cmp	eax,esi
	jb	near ptr geterr
	cmp	eax,edi
	jae	near ptr geterr
	mov	edx,dword ptr [4+eax]
	cmp	edx,edi
	jl	near ptr getpr4
getpr2	label	near
	cmp	ebx,dword ptr [edx]
	je	near ptr getpr5
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jl	near ptr getpr4
	mov	edx,dword ptr [4+edx]
	dec	_itloop
	jz	near ptr l___2
l1___2:
	cmp	word ptr [itcount],0
	je 	short l__2
	cmp	word ptr [itstate],0 
	je 	short l__2
	call	near ptr ithard
l__2:
	cmp	edx,edi
	jge	near ptr getpr2
getpr4	label	near
	mov	eax,esi
	ret
getpr5	label	near
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jl	near ptr getpr4
	mov	eax,dword ptr [edx]
	ret
geterr	label	near
	mov	ebx,dword ptr [zgetprop]
	jmp	near ptr errsym
getprop	endp

getl	proc	near
	cmp	eax,esi
	je	near ptr sybfalse
	cmp	eax,esi
	jb	near ptr getlerr
	cmp	eax,edi
	jae	near ptr getlerr
	cmp	ebx,esi
	je	near ptr sybfalse
	cmp	ebx,edi
	jl	near ptr getlerr2
	mov	eax,dword ptr [4+eax]
	jmp	near ptr getl7
getl1	label	near
	mov	ecx,dword ptr [eax]
	push	ebx
getl2	label	near
	mov	edx,dword ptr [ebx]
	cmp	ecx,edx
	je	near ptr getl8
	mov	ebx,dword ptr [4+ebx]
	cmp	ebx,edi
	jge	near ptr getl2
	pop	ebx
	mov	eax,dword ptr [4+eax]
	cmp	eax,edi
	jl	near ptr getl7
	mov	eax,dword ptr [4+eax]
getl7	label	near
	cmp	eax,edi
	jge	near ptr getl1
	ret
getl8	label	near
	pop	ebx
	ret
getlerr	label	near
	mov	ebx,dword ptr [zgetl]
	jmp	near ptr errsym
getlerr2	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zgetl]
	jmp	near ptr errnla
getl	endp

addprop	proc	near
	cmp	eax,esi
	jb	near ptr addpret
	cmp	eax,edi
	jae	near ptr addpret
	cmp	eax,esi
	je	near ptr addpret
	mov	edx,dword ptr [4+eax]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],edx
	xchg	edx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],edx
	xchg	edx,edi
	xchg	dword ptr [fcons],edi
	mov	dword ptr [4+eax],edx
	mov	eax,ebx
	ret
addpret	label	near
	mov	ebx,dword ptr [zaddprop]
	jmp	near ptr errnva
addprop	endp

putprop	proc	near
	cmp	eax,esi
	jb	near ptr putperr
	cmp	eax,edi
	jae	near ptr putperr
	cmp	eax,esi
	je	near ptr putperr
	push	ebx
	mov	ebx,ecx
	call	near ptr geti
	mov	ecx,ebx
	pop	ebx
	cmp	edx,edi
	jl	near ptr addprop
	mov	edx,dword ptr [4+edx]
	cmp	edx,edi
	jl	near ptr sybfalse
	mov	dword ptr [edx],ebx
	mov	eax,ebx
	ret
putperr	label	near
	mov	ebx,dword ptr [zputprop]
	jmp	near ptr errnva
putprop	endp

defprop	proc	near
	cmp	eax,edi
	jl	near ptr defperr
	mov	edx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	cmp	edx,edi
	jl	near ptr defperr
	mov	ebx,dword ptr [edx]
	mov	ecx,dword ptr [4+edx]
	cmp	ecx,edi
	jl	near ptr defperr
	mov	ecx,dword ptr [ecx]
	jmp	near ptr putprop
defperr	label	near
	mov	ebx,dword ptr [zdefprop]
	jmp	near ptr errnva
defprop	endp

remprop	proc	near
	cmp	eax,esi
	jb	near ptr remperr
	cmp	eax,edi
	jae	near ptr remperr
	call	near ptr geti
	cmp	edx,edi
	jl	near ptr sybfalse
	push	edx
	mov	ebx,dword ptr [4+edx]
	cmp	ebx,edi
	jl	near ptr rempr2
	mov	ebx,dword ptr [4+ebx]
rempr2	label	near
	cmp	ecx,edi
	jl	near ptr rempr4
	mov	dword ptr [4+ecx],ebx
	pop	eax
	ret
rempr4	label	near
	mov	dword ptr [4+eax],ebx
	pop	eax
	ret
remperr	label	near
	mov	ebx,dword ptr [zremprop]
	jmp	near ptr errnva
getset12	label	near
	cmp	dx,1
	je	near ptr getseta
	cmp	dx,2
	je	near ptr getsetb
	mov	eax,2
	jmp	near ptr errwna
getseta	label	near
	pop	ecx
	pop	eax
	cmp	eax,esi
	jb	near ptr getsetc
	cmp	eax,edi
	jae	near ptr getsetc
	jmp	ecx
getsetb	label	near
	pop	edx
	pop	eax
	xchg	dword ptr [esp],ecx
	cmp	ecx,esi
	jb	near ptr getsetd
	cmp	ecx,edi
	jae	near ptr getsetd
	cmp	ecx,esi
	je	near ptr getsetd
	ret
getsetd	label	near
	mov	eax,ecx
getsetc	label	near
	jmp	near ptr errsym
remprop	endp

fincr	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	eax,esi
	jne	near ptr incr2
	mov	eax,1
	jmp	near ptr incr3
incr2	label	near
	call	near ptr evalcar
incr3	label	near
	mov	ebx,eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bvar],eax
	ja	near ptr increrr1
	cmp	eax,edi
	jae	near ptr increrr1
	mov	eax,dword ptr [eax]
	mov	edx,2
	call	near ptr gaplus2i
	pop	ebx
	mov	dword ptr [ebx],eax
	ret
increrr1	label	near
	mov	ebx,dword ptr [zfincr]
	jmp	near ptr errnva
fincr	endp

fdecr	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	cmp	eax,esi
	jne	near ptr decr2
	mov	eax,1
	jmp	near ptr decr3
decr2	label	near
	call	near ptr evalcar
decr3	label	near
	mov	ebx,eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bvar],eax
	ja	near ptr decrerr1
	cmp	eax,edi
	jae	near ptr decrerr1
	mov	eax,dword ptr [eax]
	call	near ptr gadiff2i
	pop	ebx
	mov	dword ptr [ebx],eax
	ret
decrerr1	label	near
	mov	ebx,dword ptr [zfdecr]
	jmp	near ptr errnva
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
l__4:
	call	near ptr gccons
	jmp	near ptr l1__4
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
fdecr	endp
_TEXT	ends
	end
