	.386p
	.387

	include	gc.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	gc.equ
ini_gc	proc	near
	mov	eax,2
	mov	ebx,offset FLAT:pnmac261
	mov	ecx,offset FLAT:gcuser
	mov	edx,offset FLAT:zgcuser
	push	z_gcuser
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac262
	mov	ecx,offset FLAT:gcalarm
	mov	edx,offset FLAT:zgcalarm
	push	z_gcalarm
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac263
	mov	ecx,offset FLAT:gcalarb
	mov	edx,offset FLAT:zgcalarb
	push	z_gcalarb
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac264
	mov	ecx,offset FLAT:gcinfo
	mov	edx,offset FLAT:zgcinfo
	push	z_gcinfo
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac265
	mov	ecx,offset FLAT:zsizecd
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac266
	mov	ecx,offset FLAT:zsizehp
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac267
	mov	ecx,offset FLAT:tconscl
	mov	edx,offset FLAT:ztconscl
	push	z_tconscl
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac268
	mov	ecx,offset FLAT:tconsmk
	mov	edx,offset FLAT:ztconsmk
	push	z_tconsmk
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac269
	mov	ecx,offset FLAT:tcons
	mov	edx,offset FLAT:ztcons
	push	z_tcons
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac270
	mov	ecx,offset FLAT:tconsp
	mov	edx,offset FLAT:ztconsp
	push	z_tconsp
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac271
	mov	ecx,offset FLAT:frcons
	mov	edx,offset FLAT:zfrcons
	push	z_frcons
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac272
	mov	ecx,offset FLAT:frtree
	mov	edx,offset FLAT:zfrtree
	push	z_frtree
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac273
	mov	ecx,offset FLAT:gettype
	mov	edx,offset FLAT:zgettype
	push	z_gettype
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac274
	mov	ecx,offset FLAT:subtypep
	mov	edx,offset FLAT:zsubtypep
	push	z_subtypep
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac275
	mov	ecx,offset FLAT:typep
	mov	edx,offset FLAT:ztypep
	push	z_typep
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac276
	mov	ecx,offset FLAT:llsend
	mov	edx,offset FLAT:zllsend
	push	z_llsend
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac277
	mov	ecx,offset FLAT:supsend
	mov	edx,offset FLAT:zsupsend
	push	z_supsend
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac278
	mov	ecx,offset FLAT:csend
	mov	edx,offset FLAT:zcsend
	push	z_csend
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac279
	mov	ecx,offset FLAT:sendbi
	mov	edx,offset FLAT:zsendbi
	push	z_sendbi
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac280
	mov	ecx,offset FLAT:senderro
	mov	edx,offset FLAT:zsenderro
	push	z_senderro
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,12
	mov	ebx,offset FLAT:pnmac281
	mov	ecx,offset FLAT:strctacc
	mov	edx,offset FLAT:zstrctacc
	push	z_strctacc
	call	near ptr inisymb
	mov	eax,11
	mov	ebx,offset FLAT:pnmac282
	mov	ecx,offset FLAT:zbigtype
	call	near ptr inicst
	mov	eax,12
	mov	ebx,offset FLAT:pnmac283
	mov	ecx,offset FLAT:smpvect
	mov	edx,offset FLAT:zsmpvect
	push	z_smpvect
	call	near ptr inisymb
	mov	eax,12
	mov	ebx,offset FLAT:pnmac284
	mov	ecx,offset FLAT:smpstrg
	mov	edx,offset FLAT:zsmpstrg
	push	z_smpstrg
	call	near ptr inisymb
	mov	eax,13
	mov	ebx,offset FLAT:pnmac285
	mov	ecx,offset FLAT:zfnalzeff
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	eax,17
	mov	ebx,offset FLAT:pnmac286
	mov	ecx,offset FLAT:fnalzefn
	mov	edx,offset FLAT:zfnalzefn
	push	z_fnalzefn
	call	near ptr inisymb
	mov	dword ptr [cpkgc],esi
	mov	dword ptr [ngccons],0
	mov	dword ptr [ngcsymb],0
	mov	dword ptr [ngcstrg],0
	mov	dword ptr [ngcvect],0
	mov	dword ptr [ngcfloat],0
	mov	dword ptr [ngcnumb],0
	mov	dword ptr [ngcuser],0
	mov	dword ptr [ngch],0
	ret
hgc	label	near
	inc	word ptr [ngch]
	jmp	near ptr gcgo
gccons	label	near
	inc	word ptr [ngccons]
	call	near ptr gcgo
	cmp	word ptr [freelm],0
	jg	near ptr gcret
	cmp	word ptr [freelu],400
	jge	near ptr gcret
	jmp	near ptr errfm
gcsymb	label	near
	inc	word ptr [ngcsymb]
	call	near ptr gcgo
	cmp	dword ptr [fsymb],0
	jne	near ptr gcret
	jmp	near ptr errato
gcstrg	label	near
	inc	word ptr [ngcstrg]
	call	near ptr gcgo
	cmp	dword ptr [fstrg],esi
	jne	near ptr gcret
	jmp	near ptr errfr
gcvect	label	near
	inc	word ptr [ngcvect]
	call	near ptr gcgo
	cmp	dword ptr [fvect],esi
	jne	near ptr gcret
	jmp	near ptr errfv
gcfloat	label	near
	inc	word ptr [ngcfloat]
	call	near ptr gcgo
	cmp	word ptr [freefm],0
	jg	near ptr gcret
	cmp	word ptr [freefu],0
	jg	near ptr gcret
	jmp	near ptr errff
gcnumb	label	near
	inc	word ptr [ngcnumb]
	call	near ptr gcgo
	cmp	word ptr [freenm],0
	jg	near ptr gcret
	cmp	word ptr [freenu],0
	jg	near ptr gcret
	jmp	near ptr errfn
gcret	label	near
	ret
gcgo	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	dword ptr [llink]
	push	dword ptr [evalst]
	push	dword ptr [forme]
	push	dword ptr [funct]
	push	dword ptr [savea1]
	push	dword ptr [savea2]
	push	dword ptr [savea3]
	push	dword ptr [savea4]
	push	dword ptr [errname]
	push	dword ptr [intret]
	push	dword ptr [intllink]
	push	dword ptr [iexpld]
	push	dword ptr [impli]
	push	dword ptr [ringur]
	push	dword ptr [curread]
	push	dword ptr [impld]
	push	dword ptr [lexpld]
	mov	edx,esp
	push	dword ptr [asymb]
	push	dword ptr [tabch]
	push	dword ptr [cachch]
	push	dword ptr [bufat]
	push	dword ptr [cpkgc]
	push	dword ptr [tabtypfn]
	push	dword ptr [tabcodfn]
	push	dword ptr [tabctyp]
	push	dword ptr [tabccod]
	push	dword ptr [bufpn]
	push	dword ptr [bufstrg]
	push	dword ptr [curprmpt]
	push	dword ptr [tabchan]
	push	dword ptr [cntrlc]
	push	dword ptr [bufch]
	push	dword ptr [rubstrg]
	push	dword ptr [cstsyste]
	push	dword ptr [fzero]
	push	dword ptr [fltun]
	push	dword ptr [fltmun]
	push	dword ptr [fltimax]
	push	dword ptr [fltimin]
	push	edx
	mov	dword ptr [iexpld],esi
	mov	dword ptr [impli],esi
	mov	dword ptr [llink],esi
	mov	eax,dword ptr [zgcalarb]
	mov	ebx,esi
	call	near ptr itsoft
	call	near ptr gcnoit
	mov	eax,dword ptr [zgcalarm]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	mov	esp,edx
	pop	dword ptr [lexpld]
	pop	dword ptr [impld]
	pop	dword ptr [curread]
	pop	dword ptr [ringur]
	pop	dword ptr [impli]
	pop	dword ptr [iexpld]
	pop	dword ptr [intllink]
	pop	dword ptr [intret]
	pop	dword ptr [errname]
	pop	dword ptr [savea4]
	pop	dword ptr [savea3]
	pop	dword ptr [savea2]
	pop	dword ptr [savea1]
	pop	dword ptr [funct]
	pop	dword ptr [forme]
	pop	dword ptr [evalst]
	pop	dword ptr [llink]
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
gcend	label	near
gcpopj	label	near
	ret
gcnoit	label	near
	cmp	dword ptr [itstate],0
	je	near ptr gcst0
	mov	ecx,offset FLAT:gcst00
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
gcst00	label	near
	mov	dword ptr [itstate],0
gcst0	label	near
gcstmrk	label	near
	mov	edx,esp
	mov	ecx,dword ptr [bstack]
gcst1	label	near
	mov	eax,dword ptr [edx]
	add	edx,4
	call	near ptr mark
	cmp	edx,ecx
	jne	near ptr gcst1
	mov	eax,dword ptr [hashtab]
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bts	dword ptr [eax],ebp
	pop	eax
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	dec	dx
gcat0	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [ebp+edx*4+8]
	jmp	near ptr gcat8
gcat1	label	near
	mov	ecx,edx
	mov	ebp,dword ptr [28+edx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac287
	cmp	esi,ebp
	ja	near ptr gcat5
lmac287:
gcat2	label	near
	mov	edx,dword ptr [28+edx]
gcat5	label	near
	mov	eax,dword ptr [edx]
	cmp	eax,dword ptr [zundef]
	je	near ptr gcatm1
	call	near ptr mark
gcatm1	label	near
	mov	eax,dword ptr [4+edx]
	cmp	eax,esi
	je	near ptr gcatm2
	call	near ptr mark
gcatm2	label	near
	mov	eax,dword ptr [8+edx]
	or	eax,eax
	je	near ptr gcatm3
	call	near ptr mark
gcatm3	label	near
	mov	eax,dword ptr [12+edx]
	cmp	eax,esi
	je	near ptr gcatm4
	call	near ptr mark
gcatm4	label	near
	mov	eax,dword ptr [16+edx]
	cmp	eax,esi
	je	near ptr gcatm5
	call	near ptr mark
gcatm5	label	near
	mov	eax,dword ptr [20+edx]
	cmp	dword ptr [bstrg],eax
	ja	short lmac288
	cmp	eax,esi
	jb	near ptr gcatm9
lmac288:
	mov	eax,dword ptr [28+edx]
	cmp	dword ptr [bstrg],eax
	ja	short lmac289
	cmp	eax,esi
	jb	near ptr gcatm9
lmac289:
	mov	eax,dword ptr [20+eax]
gcatm9	label	near
	call	near ptr mark
	cmp	edx,ecx
	jne	near ptr gcat2
gcat6	label	near
	mov	edx,dword ptr [20+edx]
gcat8	label	near
	cmp	edx,esi
	jb	short lmac290
	cmp	edx,edi
	jb	near ptr gcat1
lmac290:
	dec	dx
	jge	near ptr gcat0
gcat9	label	near
	jmp	near ptr gcfnlz
mark	label	near
	cmp	dword ptr [bfloat],eax
	ja	short markr
	cmp	dword ptr [econs],eax
	jbe	short markr
	mov	ebp,eax
	sub 	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	jnc	short mac290
	pop	eax
	ret
mac290:
	bts	dword ptr [eax],ebp
	pop	eax
	cmp	eax,edi
	jge	short markl
	cmp	dword ptr [bvect],eax
	ja	short mac291
	cmp	dword ptr [bstrg],eax
	ja	short markv
mac291:
	cmp	dword ptr [bstrg],eax
	ja	short mac292
	cmp	esi,eax
	ja	short markt
mac292:
markr:
	ret
markl:
	cmp	dword ptr [estack],esp
	ja	near ptr errfsgc
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	call	near ptr mark
	pop	eax
	jmp	near ptr mark
markv:
	push	ecx
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	push	eax
	cmp	dword ptr [estack],esp
	ja	near ptr errfsgc
	jmp	short markv4
markv2:
	mov	ebp,dword ptr [esp]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+ecx*4+8]
	push	ecx
	call	near ptr mark
	pop	ecx
markv4:
	dec	cx
	jge	short markv2
	pop	eax
	pop	ecx
markt:
	mov	eax,dword ptr [4+eax]
	jmp	near ptr mark
	ret
gcfnlz	label	near
	mov	ebx,dword ptr [zfnalzeff]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,esi
	je	near ptr gcfnlz9
	mov	ebx,dword ptr [zfnalzefn]
	movzx	ecx,word ptr [24+ebx]
	cmp	ecx,2
	jne	near ptr gcfnlz9
	mov	ecx,dword ptr [8+ebx]
	mov	eax,dword ptr [bvect]
gcfnlz2	label	near
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcfnlz8
	mov	ebx,dword ptr [eax]
	cmp	ebx,esi
	je	near ptr gcfnlz8
	cmp	dword ptr [bvect],ebx
	ja	short lmac294
	cmp	dword ptr [bstrg],ebx
	ja	near ptr gcfnlz8
lmac294:
	push	eax
	push	ecx
	push	offset FLAT:gcfnlz6
	jmp	ecx
gcfnlz6	label	near
	pop	ecx
	pop	eax
gcfnlz8	label	near
	add	eax,8
	cmp	dword ptr [bstrg],eax
	ja	near ptr gcfnlz2
gcfnlz9	label	near
	jmp	near ptr gcompact
gcompact	label	near
	mov	ecx,dword ptr [bheap]
	mov	edx,dword ptr [bheap]
	jmp	near ptr hsweep8
hsweep2	label	near
	mov	eax,dword ptr [ecx]
	cmp	dword ptr [bstrg],eax
	ja	short lmac295
	cmp	eax,esi
	jb	near ptr hsweep4
lmac295:
	cmp	dword ptr [bvect],eax
	ja	short lmac296
	cmp	dword ptr [bstrg],eax
	ja	near ptr hsweep5
lmac296:
	or	eax,eax
	js	near ptr hsweep6
	cmp	eax,esi
	jb	short lmac297
	cmp	eax,edi
	jb	near ptr hsweep7
lmac297:
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__1
	push	13
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	;; Prepare a C function call with 4 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	mov	ebp,dword ptr [oswheap]
	push	ebp
	mov	ebp,dword ptr [eheap]
	push	ebp
	mov	ebp,dword ptr [cheap]
	push	ebp
	mov	ebp,dword ptr [bheap]
	push	ebp
	call	near ptr _llovni
	add	esp,16
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	jmp	near ptr hsweep9
hsweep4	label	near
	mov	dword ptr [oswheap],ecx
	mov	ebx,dword ptr [4+ecx]
	lea	ecx,dword ptr [ecx+ebx+10]
	test	ecx,1
	jz	short l__2
	inc	ecx
l__2:
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr hsweep8
	cmp	dword ptr [oswheap],edx
	jne	near ptr hsweep41
	mov	edx,ecx
	jmp	near ptr hsweep8
hsweep41	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [oswheap]
	mov	edi,edx
	sub	ecx,esi
	mov	ebp,ecx
	shr	ecx,2
	rep	movsd
	mov	ecx,ebp
	and	ecx,3
	rep	movsb
	pop	esi
	pop	edi
	pop	ecx
	mov	dword ptr [eax],edx
	lea	edx,dword ptr [edx+ebx+10]
	test	edx,1
	jz	short l__3
	inc	edx
l__3:
	jmp	near ptr hsweep8
hsweep5	label	near
	mov	dword ptr [oswheap],ecx
	mov	ebx,dword ptr [4+ecx]
	lea	ecx,dword ptr [ecx+ebx*4+8]
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr hsweep8
	cmp	dword ptr [oswheap],edx
	jne	near ptr hsweep51
	mov	edx,ecx
	jmp	near ptr hsweep8
hsweep51	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [oswheap]
	mov	edi,edx
	sub	ecx,esi
	mov	ebp,ecx
	shr	ecx,2
	rep	movsd
	mov	ecx,ebp
	and	ecx,3
	rep	movsb
	pop	esi
	pop	edi
	pop	ecx
	mov	dword ptr [eax],edx
	lea	edx,dword ptr [edx+ebx*4+8]
	jmp	near ptr hsweep8
hsweep6	label	near
	mov	dword ptr [oswheap],ecx
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr hsweep8
	cmp	dword ptr [oswheap],edx
	jne	near ptr hsweep61
	mov	edx,ecx
	jmp	near ptr hsweep8
hsweep61	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [oswheap]
	mov	edi,edx
	mov	ecx,dword ptr [swheap]
	sub	ecx,esi
	mov	ebp,ecx
	shr	ecx,2
	rep	movsd
	mov	ecx,ebp
	and	ecx,3
	rep	movsb
	pop	esi
	pop	edi
	pop	ecx
	mov	dword ptr [eax],edx
	jmp	near ptr hsweep8
hsweep7	label	near
	mov	dword ptr [oswheap],ecx
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr hsweep8
	cmp	dword ptr [oswheap],edx
	jne	near ptr hsweep71
	mov	edx,ecx
	jmp	near ptr hsweep8
hsweep71	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [oswheap]
	mov	edi,edx
	sub	ecx,esi
	mov	ebp,ecx
	shr	ecx,2
	rep	movsd
	mov	ecx,ebp
	and	ecx,3
	rep	movsb
	pop	esi
	pop	edi
	pop	ecx
	mov	dword ptr [eax],edx
hsweep8	label	near
	cmp	ecx,dword ptr [cheap]
	jb	near ptr hsweep2
	mov	dword ptr [cheap],edx
hsweep9	label	near
	jmp	near ptr gcsweep
gcsweep	label	near
	xor	eax,eax
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [cnumb]
	jmp	near ptr gcswn4
gcswn1	label	near
	mov	ebp,edx
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	btr	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcswn3
	mov	dword ptr [edx],eax
	mov	eax,edx
	inc	ebx
	cmp	ebx,1024
	jl	short mac298
	xor	ebx,ebx
	inc	ecx
mac298:
gcswn3	label	near
gcswn4	label	near
	mov	dword ptr [fnumb],eax
	mov	dword ptr [freenu],ebx
	mov	dword ptr [freenm],ecx
	xor	eax,eax
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bfloat]
	or	edx,edx
	jns	near ptr gcswf4
gcswf1	label	near
	mov	ebp,edx
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	btr	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcswf3
	mov	dword ptr [edx],eax
	mov	eax,edx
	inc	ebx
	cmp	ebx,1024
	jl	short mac299
	xor	ebx,ebx
	inc	ecx
mac299:
gcswf3	label	near
gcswf4	label	near
	mov	dword ptr [ffloat],eax
	mov	dword ptr [freefu],ebx
	mov	dword ptr [freefm],ecx
	mov	eax,esi
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bvect]
gcswv1	label	near
	mov	ebp,edx
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	btr	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcswv2
	mov	dword ptr [edx],eax
	mov	eax,edx
	inc	ebx
	cmp	ebx,1024
	jl	short mac300
	xor	ebx,ebx
	inc	ecx
mac300:
gcswv2	label	near
	add	edx,8
	cmp	dword ptr [bstrg],edx
	ja	near ptr gcswv1
	mov	dword ptr [fvect],eax
	mov	dword ptr [freevu],ebx
	mov	dword ptr [freevm],ecx
	mov	eax,esi
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bstrg]
gcsws1	label	near
	mov	ebp,edx
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	btr	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcsws2
	mov	dword ptr [edx],eax
	mov	eax,edx
	inc	ebx
	cmp	ebx,1024
	jl	short mac301
	xor	ebx,ebx
	inc	ecx
mac301:
gcsws2	label	near
	add	edx,8
	cmp	esi,edx
	ja	near ptr gcsws1
	mov	dword ptr [fstrg],eax
	mov	dword ptr [freesu],ebx
	mov	dword ptr [freesm],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	eax,dword ptr [fsymb]
	jmp	near ptr gcswyc3
gcswyc2	label	near
	mov	eax,dword ptr [20+eax]
	inc	ebx
	cmp	ebx,1024
	jl	short mac302
	xor	ebx,ebx
	inc	ecx
mac302:
gcswyc3	label	near
	cmp	eax,esi
	jb	short lmac303
	cmp	eax,edi
	jb	near ptr gcswyc2
lmac303:
	mov	dword ptr [freeyu],ebx
	mov	dword ptr [freeym],ecx
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	jmp	near ptr gcswy9
gcswy2	label	near
	mov	ebx,eax
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	jmp	near ptr gcswy8
gcswy3	label	near
	mov	ecx,eax
	mov	edx,eax
gcswy4	label	near
	mov	ebp,eax
	sub	ebp,bnumb
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbgc]
	btr	dword ptr [eax],ebp
	pop	eax
	jc	near ptr gcswy5
	cmp	dword ptr [bvar],eax
	ja	near ptr gcswy5
	cmp	eax,edi
	jae	near ptr gcswy5
	mov	ebp,dword ptr [zundef]
	cmp	dword ptr [eax],ebp
	jne	near ptr gcswy5
	cmp	dword ptr [4+eax],esi
	jne	near ptr gcswy5
	cmp	dword ptr [16+eax],esi
	jne	near ptr gcswy5
	push	ebx
	movzx	ebx,word ptr [24+eax]
	or	bx,bx
	je	near ptr gcswys
	pop	ebx
gcswy5	label	near
	mov	ebp,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac304
	cmp	esi,ebp
	ja	near ptr gcswy6
lmac304:
gcswy50	label	near
	mov	edx,eax
	mov	eax,dword ptr [28+eax]
	cmp	eax,ecx
	jne	near ptr gcswy4
gcswy6	label	near
	mov	ebx,ecx
	mov	eax,dword ptr [20+ecx]
gcswy8	label	near
	cmp	eax,esi
	jb	short lmac305
	cmp	eax,edi
	jb	near ptr gcswy3
lmac305:
gcswy9	label	near
	dec	ax
	jge	near ptr gcswy2
	jmp	near ptr gcswcons
gcswys	label	near
	pop	ebx
	mov	ebp,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac306
	cmp	esi,ebp
	ja	near ptr gcswys1
lmac306:
	cmp	eax,ecx
	jne	near ptr gcswys2
	jmp	near ptr gcswys3
gcswys1	label	near
	mov	edx,dword ptr [20+eax]
	cmp	dword ptr [bfloat],ebx
	ja	near ptr gcswys12
	mov	dword ptr [20+ebx],edx
	jmp	near ptr gcswys14
gcswys12	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+ebx*4+8],edx
gcswys14	label	near
	mov	ebp,dword ptr [fsymb]
	mov	dword ptr [20+eax],ebp
	mov	dword ptr [fsymb],eax
	inc	dword ptr [freeyu]
	cmp	dword ptr [freeyu],1024
	jl	short mac307
	mov	dword ptr [freeyu],0
	inc	dword ptr [freeym]
mac307:
	mov	eax,edx
	jmp	near ptr gcswy8
gcswys2	label	near
	mov	ebp,dword ptr [28+eax]
	mov	dword ptr [28+edx],ebp
	cmp	ecx,dword ptr [28+ecx]
	je	near ptr gcswys20
	mov	ebp,dword ptr [fsymb]
	mov	dword ptr [20+eax],ebp
	mov	dword ptr [fsymb],eax
	inc	dword ptr [freeyu]
	cmp	dword ptr [freeyu],1024
	jl	short mac308
	mov	dword ptr [freeyu],0
	inc	dword ptr [freeym]
mac308:
	mov	eax,edx
	jmp	near ptr gcswy50
gcswys20	label	near
	mov	ebp,dword ptr [20+eax]
	mov	dword ptr [28+ecx],ebp
	mov	ebp,dword ptr [fsymb]
	mov	dword ptr [20+eax],ebp
	mov	dword ptr [fsymb],eax
	inc	dword ptr [freeyu]
	cmp	dword ptr [freeyu],1024
	jl	short mac309
	mov	dword ptr [freeyu],0
	inc	dword ptr [freeym]
mac309:
	jmp	near ptr gcswy6
gcswys3	label	near
	cmp	dword ptr [bfloat],ebx
	ja	near ptr gcswys30
	mov	ebp,dword ptr [28+ecx]
	mov	dword ptr [20+ebx],ebp
	jmp	near ptr gcswys31
gcswys30	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [28+ecx]
	pop	dword ptr [ebp+ebx*4+8]
gcswys31	label	near
	mov	edx,ecx
gcswys32	label	near
	mov	edx,dword ptr [28+edx]
	cmp	dword ptr [28+edx],ecx
	jne	near ptr gcswys32
	mov	ebp,dword ptr [28+ecx]
	mov	dword ptr [28+edx],ebp
	mov	ecx,dword ptr [28+ecx]
	cmp	ecx,dword ptr [28+ecx]
	jne	near ptr gcswys33
	mov	ebp,dword ptr [20+ecx]
	mov	dword ptr [28+ecx],ebp
	mov	ebp,dword ptr [20+eax]
	mov	dword ptr [20+ecx],ebp
	jmp	near ptr gcswys34
gcswys33	label	near
	mov	ebp,dword ptr [20+eax]
	mov	dword ptr [20+ecx],ebp
gcswys34	label	near
	mov	ebp,dword ptr [fsymb]
	mov	dword ptr [20+eax],ebp
	mov	dword ptr [fsymb],eax
	inc	dword ptr [freeyu]
	cmp	dword ptr [freeyu],1024
	jl	short mac310
	mov	dword ptr [freeyu],0
	inc	dword ptr [freeym]
mac310:
	mov	eax,ecx
	jmp	near ptr gcswy3
gcswcons	label	near
	mov	eax,esi
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,edi
	;;
	;; new SWPCONS macro
	;;
swpcons_macro	label	near
	public	swpcons_macro
	push	edi
	push	btbin
	mov	ebx,dword ptr [_bsymb]
	mov	ebp,dword ptr [btbgc]
	mov	esi,dword ptr [_bcons]
	sub	esi,dword ptr [bnumb]
	shr	esi,6
	add	ebp,esi
	xor	esi,esi
nextw:
	mov	delta_cons,ebx
	mov	edi,[esp]
	mov	ebx,[ebp]
	add	dword ptr [esp], 4
	and	[edi],ebx
	xor	edi,edi
	mov	ebx,delta_cons
nextb:
	bt	[ebp],edi
	jc	short marked
	mov	[0+edx],ebx
	mov	[4+edx],eax
	inc	esi
	mov	eax, edx
marked:
	inc	edi
	add	edx,8
	cmp	edi,32
	jne	short nextb
	mov	dword ptr [ebp],0
	add	ebp, 4
	cmp	[econs],edx
	ja	short nextw
	mov	ebx,esi
	and	ebx,1023
	mov	ecx,esi
	shr	ecx,10
	pop	ebp
	pop	edi
	mov	esi,[_bsymb]
	;;
	;; end SWPCONS macro
	;;
	mov	dword ptr [fcons],eax
	mov	dword ptr [freelu],ebx
	mov	dword ptr [freelm],ecx
	jmp	near ptr gcswend
gcswend	label	near
	ret
ini_gc	endp

gcuser	proc	near
	cmp	dx,1
	je	near ptr gcuser5
	or	dx,dx
	je	near ptr gcuser4
	mov	eax,1
	mov	ebx,dword ptr [zgcuser]
	jmp	near ptr errwna
gcuser4	label	near
	mov	eax,esi
	push	eax
gcuser5	label	near
	inc	word ptr [ngcuser]
	call	near ptr gcgo
	pop	eax
	cmp	eax,esi
	jne	near ptr gcinfo0
	mov	eax,dword ptr [zt]
	ret
gcuser	endp

gcalarb	proc	near
	mov	eax,esi
	ret
gcalarb	endp

gcalarm	proc	near
	mov	eax,esi
	ret
gcalarm	endp

fnalzefn	proc	near
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__4
	push	34
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
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
fnalzefn	endp

gcinfo	proc	near
	or	edx,edx
	je	near ptr gcinfo0
	cmp	edx,1
	je	near ptr gcinfo1
	mov	eax,1
	mov	ebx,dword ptr [zgcinfo]
	jmp	near ptr errwna
gcinfo0	label	near
	mov	edx,esi
gcinfou	label	near
	push	dword ptr [zgcuser]
	push	dword ptr [ngccons]
	push	dword ptr [ngcsymb]
	push	dword ptr [ngcstrg]
	push	dword ptr [ngcvect]
	push	dword ptr [ngcfloat]
	push	dword ptr [ngcnumb]
	push	dword ptr [ngch]
	push	dword ptr [ngcuser]
	push	dword ptr [zllcons]
	mov	eax,dword ptr [freelu]
	mov	ebx,dword ptr [freelm]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zffsymbol]
	mov	eax,dword ptr [freeyu]
	mov	ebx,dword ptr [freeym]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zstring000]
	mov	eax,dword ptr [freesu]
	mov	ebx,dword ptr [freesm]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zvector]
	mov	eax,dword ptr [freevu]
	mov	ebx,dword ptr [freevm]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zllfloat]
	mov	eax,dword ptr [freefu]
	mov	ebx,dword ptr [freefm]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zllfix]
	mov	eax,dword ptr [freenu]
	mov	ebx,dword ptr [freenm]
	call	near ptr gcinfz
	push	eax
	push	dword ptr [zsizehp]
	cmp	edx,esi
	je	near ptr gcinfou2
	mov	ebp,dword ptr [eheap]
	sub	ebp,dword ptr [bheap]
	push	ebp
	and	ebp,1023
	mov	eax,ebp
	pop	ebp
	shr	ebp,10
	mov	ebx,ebp
	jmp	near ptr gcinfou3
gcinfou2	label	near
	mov	ebp,dword ptr [eheap]
	sub	ebp,dword ptr [cheap]
	push	ebp
	and	ebp,1023
	mov	eax,ebp
	pop	ebp
	shr	ebp,10
	mov	ebx,ebp
gcinfou3	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,eax
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	eax,ebx
	push	eax
	push	dword ptr [zsizecd]
	cmp	edx,esi
	je	near ptr gcinfou4
	mov	ebp,dword ptr [ecode]
	sub	ebp,dword ptr [bcode]
	push	ebp
	and	ebp,1023
	mov	eax,ebp
	pop	ebp
	shr	ebp,10
	mov	ebx,ebp
	jmp	near ptr gcinfou5
gcinfou4	label	near
	mov	ebp,dword ptr [ecode]
	sub	ebp,dword ptr [ccode]
	push	ebp
	and	ebp,1023
	mov	eax,ebp
	pop	ebp
	shr	ebp,10
	mov	ebx,ebp
gcinfou5	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,eax
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	eax,ebx
	push	eax
	mov	edx,25
	jmp	near ptr list
gcinfo1	label	near
	pop	eax
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bnumb]
	jmp	near ptr gcinfon9
gcinfon1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac311
	xor	ebx,ebx
	inc	ecx
mac311:
gcinfon9	label	near
	mov	dword ptr [freenu],ebx
	mov	dword ptr [freenm],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bfloat]
	or	edx,edx
	jns	near ptr gcinfof9
gcinfof1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac312
	xor	ebx,ebx
	inc	ecx
mac312:
gcinfof9	label	near
	mov	dword ptr [freefu],ebx
	mov	dword ptr [freefm],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bvect]
gcinfov1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac313
	xor	ebx,ebx
	inc	ecx
mac313:
	add	edx,8
	cmp	dword ptr [bstrg],edx
	ja	near ptr gcinfov1
	mov	dword ptr [freevu],ebx
	mov	dword ptr [freevm],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,dword ptr [bstrg]
gcinfos1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac314
	xor	ebx,ebx
	inc	ecx
mac314:
	add	edx,8
	cmp	esi,edx
	ja	near ptr gcinfos1
	mov	dword ptr [freesu],ebx
	mov	dword ptr [freesm],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,esi
gcinfoy1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac315
	xor	ebx,ebx
	inc	ecx
mac315:
	add	edx,32
	cmp	edi,edx
	ja	near ptr gcinfoy1
	mov	dword ptr [freeyu],ebx
	mov	dword ptr [freeym],ecx
	xor	ebx,ebx
	xor	ecx,ecx
	mov	edx,edi
gcinfol1	label	near
	inc	ebx
	cmp	ebx,1024
	jl	short mac316
	xor	ebx,ebx
	inc	ecx
mac316:
	add	edx,8
	cmp	dword ptr [econs],edx
	ja	near ptr gcinfol1
	mov	dword ptr [freelu],ebx
	mov	dword ptr [freelm],ecx
	xor	edx,edx
	jmp	near ptr gcinfou
gcinfz	label	near
	or	bx,bx
	je	near ptr gcinfz9
	cmp	bx,32
	jge	near ptr gcinfz1
	imul	bx,1024
	add	ax,bx
	jmp	near ptr gcinfz9
gcinfz1	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,eax
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	eax,ebx
gcinfz9	label	near
	ret
gcinfo	endp

tcons	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bts	dword ptr [eax],ebp
	pop	eax
	ret
tcons	endp

tconsmk	proc	near
	cmp	eax,edi
	jl	near ptr tcmker
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bts	dword ptr [eax],ebp
	pop	eax
	ret
tcmker	label	near
	mov	ebx,dword ptr [ztconsmk]
	jmp	near ptr errnla
tconsmk	endp

tconscl	proc	near
	cmp	eax,edi
	jl	near ptr tccler
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	btr	dword ptr [eax],ebp
	pop	eax
	ret
tccler	label	near
	mov	ebx,dword ptr [ztconscl]
	jmp	near ptr errnla
tconscl	endp

tconsp	proc	near
	cmp	eax,edi
	jl	near ptr tconsp1
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jc	near ptr tconsp2
tconsp1	label	near
	mov	eax,esi
tconsp2	label	near
	ret
tconsp	endp

frcons	proc	near
	cmp	dword ptr [itstate],0
	je	near ptr frcs1
	mov	ecx,offset FLAT:frcs0
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
frcs0	label	near
	mov	dword ptr [itstate],0
frcs1	label	near
	mov	ebx,dword ptr [fcons]
	cmp	eax,edi
	jl	near ptr frcser
	mov	dword ptr [eax],esi
	mov	dword ptr [4+eax],ebx
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	btr	dword ptr [eax],ebp
	pop	eax
	mov	dword ptr [fcons],eax
	mov	ebx,esi
	mov	eax,esi
	ret
frcser	label	near
	mov	ebx,dword ptr [zfrcons]
	jmp	near ptr errnla
frcons	endp

frtree	proc	near
	cmp	dword ptr [itstate],0
	je	near ptr frtr1
	mov	ecx,offset FLAT:frtr0
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
frtr0	label	near
	mov	dword ptr [itstate],0
frtr1	label	near
	mov	edx,dword ptr [fcons]
	call	near ptr frtr3
	mov	dword ptr [fcons],edx
	mov	edx,esi
	mov	ecx,esi
	mov	ebx,esi
	mov	eax,esi
frtret	label	near
	ret
frtr2	label	near
	mov	eax,ecx
frtr3	label	near
	cmp	eax,edi
	jl	near ptr frtret
frtr4	label	near
	mov	ebx,dword ptr [eax]
	mov	ecx,dword ptr [4+eax]
	mov	dword ptr [4+eax],edx
	mov	dword ptr [eax],esi
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	btr	dword ptr [eax],ebp
	pop	eax
	mov	edx,eax
	cmp	ebx,edi
	jl	near ptr frtr2
	push	ecx
	mov	eax,ebx
	call	near ptr frtr4
	pop	eax
	jmp	near ptr frtr3
frtree	endp

gettype	proc	near
	cmp	eax,edi
	jl	near ptr gettype0
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bt	dword ptr [eax],ebp
	pop	eax
	jnc	near ptr gettype2
	mov	eax,dword ptr [eax]
	cmp	eax,esi
	jb	short lmac317
	cmp	eax,edi
	jb	near ptr gettyper
lmac317:
	cmp	dword ptr [bfloat],eax
	ja	near ptr gettypfx
	cmp	eax,edi
	jl	near ptr gettyper
	cmp	dword ptr [eax],esi
	jb	near ptr gettypfx
	cmp	dword ptr [eax],edi
	jae	near ptr gettypfx
gettyper	label	near
	ret
gettype0	label	near
	cmp	dword ptr [bvect],eax
	ja	short lmac318
	cmp	dword ptr [bstrg],eax
	ja	near ptr gettype1
lmac318:
	cmp	dword ptr [bfloat],eax
	ja	near ptr gettype6
	or	eax,eax
	js	near ptr gettype5
	cmp	dword ptr [bstrg],eax
	ja	short lmac319
	cmp	eax,esi
	jb	near ptr gettype1
lmac319:
	cmp	eax,esi
	je	near ptr gettype3
	cmp	eax,esi
	jb	short lmac320
	cmp	eax,edi
	jb	near ptr gettype4
lmac320:
gettype6	label	near
	mov	eax,dword ptr [zllfix]
	ret
gettype1	label	near
	mov	eax,dword ptr [4+eax]
	ret
gettype2	label	near
	mov	eax,dword ptr [zllcons]
	ret
gettype3	label	near
	mov	eax,dword ptr [zllnull]
	ret
gettype4	label	near
	mov	eax,dword ptr [zffsymbol]
	ret
gettype5	label	near
	mov	eax,dword ptr [zllfloat]
	ret
gettypfx	label	near
	mov	eax,dword ptr [zbigtype]
	mov	eax,dword ptr [eax]
	ret
gettype	endp

typep	proc	near
	push	offset FLAT:subtypep
	jmp	near ptr gettype
typep	endp

subtypep	proc	near
	cmp	eax,esi
	jb	near ptr subtypr1
	cmp	eax,edi
	jae	near ptr subtypr1
	cmp	ebx,esi
	jb	near ptr subtypr2
	cmp	ebx,edi
	jae	near ptr subtypr2
	jmp	near ptr subtyp1
subtyp0	label	near
	mov	eax,dword ptr [12+eax]
subtyp1	label	near
	cmp	eax,ebx
	je	near ptr subtyp3
	cmp	eax,edi
	jge	near ptr subtyp5
	cmp	eax,esi
	jb	near ptr subtyp2
	cmp	eax,edi
	jae	near ptr subtyp2
	cmp	eax,esi
	jne	near ptr subtyp0
subtyp2	label	near
	ret
subtyp3	label	near
	mov	eax,dword ptr [zt]
	ret
subtyp4	label	near
	pop	eax
	cmp	eax,edi
	jl	near ptr subtyp7
subtyp5	label	near
	push	dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	call	near ptr subtyp7
	cmp	eax,esi
	je	near ptr subtyp4
	add	esp,4
	ret
subtyp6	label	near
	mov	eax,dword ptr [12+eax]
subtyp7	label	near
	cmp	eax,ebx
	je	near ptr subtyp9
	cmp	eax,edi
	jge	near ptr subtyp5
	cmp	eax,esi
	jb	near ptr subtyp8
	cmp	eax,edi
	jae	near ptr subtyp8
	cmp	eax,esi
	jne	near ptr subtyp6
subtyp8	label	near
	ret
subtyp9	label	near
	mov	eax,dword ptr [zt]
	ret
subtypr2	label	near
	mov	eax,ebx
subtypr1	label	near
	mov	ebx,dword ptr [zsubtypep]
	jmp	near ptr errsym
subtypep	endp

llsend	proc	near
	cmp	dx,1
	jle	near ptr sender
	dec	dx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	inc	dx
	cmp	dword ptr [bvect],eax
	ja	near ptr send2
	cmp	dword ptr [bstrg],eax
	jbe	near ptr send2
	mov	eax,dword ptr [4+eax]
send1	label	near
	mov	ebx,dword ptr [esp+edx*4]
	mov	ecx,dword ptr [zvoid]
	push	edx
	call	near ptr getfns
	pop	edx
	cmp	eax,esi
	je	near ptr send3
	mov	dword ptr [esp+edx*4],offset FLAT:gcpopj
	jmp	near ptr ffuncall
send2	label	near
	call	near ptr gettype
	jmp	near ptr send1
send3	label	near
	mov	ecx,edx
	jmp	near ptr send5
send4	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
send5	label	near
	dec	cx
	jge	near ptr send4
	push	eax
	mov	edx,2
	mov	eax,dword ptr [zsenderro]
	jmp	near ptr ffuncall
sender	label	near
	mov	eax,2
	mov	ebx,dword ptr [zllsend]
	jmp	near ptr errwna
llsend	endp

senderro	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ebx,dword ptr [zllsend]
	jmp	near ptr errudm
senderro	endp

csend	proc	near
	cmp	dx,2
	jle	near ptr csender
	push	offset FLAT:csend1
	dec	dx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	jmp	near ptr gettype
csend1	label	near
	mov	ebx,dword ptr [esp+edx*4]
	mov	ecx,dword ptr [zvoid]
	push	edx
	call	near ptr getfns
	pop	edx
	cmp	eax,esi
	je	near ptr csend3
	mov	dword ptr [esp+edx*4],offset FLAT:gcpopj
	inc	dx
	mov	dword ptr [esp+edx*4],offset FLAT:gcpopj
	dec	dx
	jmp	near ptr ffuncall
csend3	label	near
	add	dx,2
	jmp	near ptr funcall
csender	label	near
	mov	eax,3
	mov	ebx,dword ptr [zcsend]
	jmp	near ptr errwna
csend	endp

supsend	proc	near
	cmp	dx,2
	jle	near ptr supsenr1
	push	edx
	mov	ebx,dword ptr [esp+edx*4]
	sub	dx,2
	mov	eax,dword ptr [esp+edx*4]
	call	near ptr typep
	cmp	eax,esi
	je	near ptr supsenr3
	pop	edx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	cmp	eax,esi
	jb	near ptr supsenr2
	cmp	eax,edi
	jae	near ptr supsenr2
	mov	eax,dword ptr [12+eax]
	mov	dword ptr [esp+edx*4],offset FLAT:gcpopj
	dec	dx
	jmp	near ptr send1
supsenr1	label	near
	mov	eax,3
	mov	ebx,dword ptr [zsupsend]
	jmp	near ptr errwna
supsenr2	label	near
	mov	ebx,dword ptr [zsupsend]
	jmp	near ptr errsym
supsenr3	label	near
	mov	ebx,dword ptr [zsupsend]
	pop	edx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	sub	dx,2
	mov	ecx,dword ptr [esp+edx*4]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ecx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	jmp	near ptr erroob
supsend	endp

sendbi	proc	near
	cmp	dx,2
	jle	near ptr sendbier
	push	edx
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	call	near ptr gettype
	push	eax
	mov	eax,dword ptr [esp+edx*4]
	call	near ptr gettype
	mov	ebx,eax
	pop	eax
	pop	edx
	dec	dx
	mov	ecx,dword ptr [esp+edx*4]
	push	edx
	call	near ptr getbi
	pop	edx
	cmp	eax,esi
	je	near ptr sendbi3
	mov	dword ptr [esp+edx*4],offset FLAT:gcpopj
	jmp	near ptr ffuncall
sendbi2	label	near
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
sendbi3	label	near
	dec	dx
	jge	near ptr sendbi2
	mov	ebx,dword ptr [zsendbi]
	jmp	near ptr errudm
sendbier	label	near
	mov	eax,3
	mov	ebx,dword ptr [zsendbi]
	jmp	near ptr errwna
sendbi	endp

strctacc	proc	near
	cmp	dx,5
	jne	near ptr fieldr1
	mov	eax,dword ptr [esp+8]
	cmp	dword ptr [bvect],eax
	ja	near ptr fieldr2
	cmp	dword ptr [bstrg],eax
	jbe	near ptr fieldr2
	mov	ebx,dword ptr [esp+16]
	cmp	ebx,esi
	jb	near ptr fieldr3
	cmp	ebx,edi
	jae	near ptr fieldr3
	mov	ebx,dword ptr [12+ebx]
	push	eax
	push	edx
	call	near ptr typep
	pop	edx
	pop	ebx
	cmp	eax,esi
	je	near ptr fieldr4
	mov	ecx,dword ptr [esp+12]
	or	cx,cx
	jl	near ptr fieldr5
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	cmp	cx,dx
	jge	near ptr fieldr4
	mov	edx,dword ptr [esp]
fieldn	label	near
	cmp	dx,1
	je	near ptr fieldget
	cmp	dx,2
	je	near ptr fieldset
	mov	eax,1
	mov	ebx,dword ptr [esp+16]
	jmp	near ptr errwna
fieldget	label	near
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [ebp+ecx*4+8]
	add	esp,20
	ret
fieldset	label	near
	mov	eax,dword ptr [esp+4]
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp+ecx*4+8],eax
	add	esp,20
	ret
fieldr1	label	near
	mov	eax,5
	mov	ebx,dword ptr [zstrctacc]
	jmp	near ptr errwna
fieldr4	label	near
	mov	eax,ebx
fieldr2	label	near
	mov	ebx,dword ptr [esp+16]
	jmp	near ptr errstc
fieldr3	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [esp+16]
	jmp	near ptr errnaa
fieldr5	label	near
	mov	eax,ecx
	mov	ebx,dword ptr [zstrctacc]
	jmp	near ptr erroob
strctacc	endp

smpvect	proc	near
	mov	ebx,dword ptr [bvect]
smpvect2	label	near
	mov	ebp,dword ptr [ebx]
	cmp	dword ptr [bvect],ebp
	ja	short lmac321
	cmp	dword ptr [bstrg],ebp
	ja	near ptr smpvect4
lmac321:
	cmp	dword ptr [ebx],esi
	je	near ptr smpvect4
	push	ebx
	push	eax
	push	offset FLAT:smpvect3
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr funcall
smpvect3	label	near
	pop	eax
	pop	ebx
smpvect4	label	near
	add	ebx,8
	cmp	dword ptr [bstrg],ebx
	ja	near ptr smpvect2
	mov	eax,esi
	ret
smpvect	endp

smpstrg	proc	near
	mov	ebx,dword ptr [bstrg]
smpstrg2	label	near
	mov	ebp,dword ptr [ebx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac322
	cmp	esi,ebp
	ja	near ptr smpstrg4
lmac322:
	cmp	dword ptr [ebx],esi
	je	near ptr smpstrg4
	push	ebx
	push	eax
	push	offset FLAT:smpstrg3
	push	eax
	push	ebx
	mov	edx,2
	jmp	near ptr funcall
smpstrg3	label	near
	pop	eax
	pop	ebx
smpstrg4	label	near
	add	ebx,8
	cmp	esi,ebx
	ja	near ptr smpstrg2
	mov	eax,esi
	ret
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
smpstrg	endp
_TEXT	ends
	end
