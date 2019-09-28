	.386p
	.387

	include	ll386.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	ll386.equ
cfadd	proc	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	mov	ebp,dword ptr [farg2]
	fadd	qword ptr [ebp]
	cmp	dword ptr [ffloat],0
	jne	short laf__1
	call	near ptr gcfloat
laf__1:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	mov	dword ptr [farg2],ebp
	fstp	qword ptr [ebp]
	fwait
	ret
cfsub	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	mov	ebp,dword ptr [farg2]
	fsubr	qword ptr [ebp]
	cmp	dword ptr [ffloat],0
	jne	short laf__2
	call	near ptr gcfloat
laf__2:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	mov	dword ptr [farg2],ebp
	fstp	qword ptr [ebp]
	fwait
	ret
cfmul	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	mov	ebp,dword ptr [farg2]
	fmul	qword ptr [ebp]
	cmp	dword ptr [ffloat],0
	jne	short laf__3
	call	near ptr gcfloat
laf__3:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	mov	dword ptr [farg2],ebp
	fstp	qword ptr [ebp]
	fwait
	ret
cfdiv	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	mov	ebp,dword ptr [farg2]
	fdivr	qword ptr [ebp]
	cmp	dword ptr [ffloat],0
	jne	short laf__4
	call	near ptr gcfloat
laf__4:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	mov	dword ptr [farg2],ebp
	fstp	qword ptr [ebp]
	fwait
	ret
cret1	label	near
	ret
cfeqn	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	je	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cfneqn	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	jne	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cfgt	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cfge	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	jae	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cflt	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cfle	label	near
	mov	ebp,dword ptr [farg1]
	fld	qword ptr [ebp]
	push	eax
	mov	ebp,dword ptr [farg2]
	fcomp	qword ptr [ebp]
	fstsw	ax
	sahf
	pop	eax
	jbe	near ptr cret1
	mov	dword ptr [farg2],esi
	ret
cfadd	endp

_llstart	proc	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	mov	dword ptr [spext],esp
	mov	dword ptr [itstate],0
	mov	dword ptr [itcount],0
	mov	dword ptr [brkcnt],0
	mov	dword ptr [_mouscnt],0
	mov	dword ptr [clkcnt],0
	mov	ebp,dword ptr [_bcode]
	mov	dword ptr [bcode],ebp
	mov	ebp,dword ptr [_ccode]
	mov	dword ptr [ccode],ebp
	mov	ebp,dword ptr [_ecode]
	mov	dword ptr [ecode],ebp
	mov	ebp,dword ptr [_bheap]
	mov	dword ptr [bheap],ebp
	mov	ebp,dword ptr [_cheap]
	mov	dword ptr [cheap],ebp
	mov	ebp,dword ptr [_eheap]
	mov	dword ptr [eheap],ebp
	mov	ebp,dword ptr [_bnumb]
	mov	dword ptr [bnumb],ebp
	mov	ebp,dword ptr [_cnumb]
	mov	dword ptr [cnumb],ebp
	mov	ebp,dword ptr [_bfloat]
	mov	dword ptr [bfloat],ebp
	mov	ebp,dword ptr [_cfloat]
	mov	dword ptr [cfloat],ebp
	mov	ebp,dword ptr [_bvect]
	mov	dword ptr [bvect],ebp
	mov	ebp,dword ptr [_cvect]
	mov	dword ptr [cvect],ebp
	mov	ebp,dword ptr [_bstrg]
	mov	dword ptr [bstrg],ebp
	mov	ebp,dword ptr [_cstrg]
	mov	dword ptr [cstrg],ebp
	mov	esi,dword ptr [_bsymb]
	mov	ebp,dword ptr [_csymb]
	mov	dword ptr [csymb],ebp
	mov	edi,dword ptr [_bcons]
	mov	ebp,dword ptr [_ccons]
	mov	dword ptr [ccons],ebp
	mov	ebp,dword ptr [_bcons]
	mov	dword ptr [bold],ebp
	mov	ebp,dword ptr [_bstack]
	mov	dword ptr [bstack],ebp
	mov	ebp,dword ptr [_mstack1]
	mov	dword ptr [mstack1],ebp
	mov	ebp,dword ptr [_mstack2]
	mov	dword ptr [mstack2],ebp
	mov	ebp,dword ptr [_estack]
	mov	dword ptr [estack],ebp
	mov	ebp,dword ptr [_maxchan]
	mov	dword ptr [maxchan],ebp
	mov	ebp,dword ptr [_nbsyst]
	mov	dword ptr [nbsyst],ebp
	mov	ebp,dword ptr [_filit]
	mov	dword ptr [filit],ebp
	mov	ebp,dword ptr [_filiz]
	mov	dword ptr [filiz],ebp
	mov	ebp,dword ptr [_filin]
	mov	dword ptr [filin],ebp
	mov	ebp,dword ptr [_llban]
	mov	dword ptr [llban],ebp
	mov	ebp,dword ptr [_econs]
	mov	dword ptr [econs],ebp
	mov	ebp,dword ptr [_btbin]
	mov	dword ptr [btbin],ebp
	mov	ebp,dword ptr [_btbgc]
	mov	dword ptr [btbgc],ebp
	mov	dword ptr [_prtmsgs],offset FLAT:zprtmsgs
	call	near ptr _inton
	mov	ebp,edi
	sub	ebp,dword ptr[bnumb]
	shr	ebp,3
	mov	dword ptr [delta_cons],ebp
	finit
	mov	dword ptr [state],1
	jmp	near ptr llinit000
_getbstack	label	near
	push	ebp
	mov	ebp,esp
	push	ebx
	push	ecx
	mov	ebx,esp
	and	ebx,0fffff000h
	sub	ebx,[ebp+12]
	mov	eax,ebx
	mov	ecx,[ebp+8]
	sub	ebx,ecx
getbstack2	label	near
	push	0
	cmp	esp,ebx
	ja	short getbstack2
	pop	ecx
	pop	ebx
	mov	esp,ebp
	leave
	ret
ll_corsav	label	near
	mov	dword ptr [name000],ebp
	cmp	edi,dword ptr [_bcons]
	je	near ptr ll_sav1
	push	edi
	call	near ptr hgc
	pop	edi
ll_sav1	label	near
	mov	dword ptr [_savsp],esp
	mov	dword ptr [_bllm3],offset FLAT:bsave
	mov	dword ptr [_ellm3],offset FLAT:eimpur
	mov	ebp,dword ptr [ccode]
	mov	dword ptr [_llucode],ebp
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [_lluheap],ebp
	mov	esp,dword ptr [spext]
	mov	dword ptr [state],2
	push	dword ptr [name000]
	call	near ptr _corsav
	mov	ebp,eax
	add	esp,4
	mov	esp,dword ptr [_savsp]
	mov	dword ptr [state],1
	ret
ll_corest	label	near
	mov	dword ptr [savsp1],esp
	mov	dword ptr [name000],ebp
	mov	dword ptr [_savsp],esp
	mov	esp,dword ptr [spext]
	mov	dword ptr [state],2
	mov	dword ptr [_bllm3],offset FLAT:bsave
	push	dword ptr [name000]
	call	near ptr _corest
	or	ax,ax
	je	near ptr ll_crest
	mov	dword ptr [state],1
	mov	esp,dword ptr [savsp1]
	jmp	near ptr ll_corret
ll_crest	label	near
	mov	ebp,eax
	mov	esp,dword ptr [_savsp]
	mov	dword ptr [state],1
	mov	dword ptr [esp+4],esi
ll_corret	label	near
	ret
_llcorgo	label	near
	mov	ebp,dword ptr [_econs]
	mov	dword ptr [econs],ebp
	mov	ebp,dword ptr [_btbin]
	mov	dword ptr [btbin],ebp
	mov	ebp,dword ptr [_btbgc]
	mov	dword ptr [btbgc],ebp
	mov	dword ptr [spext],esp
	mov	dword ptr [state],1
	mov	esp,dword ptr [_savsp]
	mov	esi,dword ptr [_bsymb]
	mov	edi,dword ptr [_bcons]
	mov	eax,esi
	add	esp,8
	ret
ll_exit	label	near
	mov	esp,dword ptr [spext]
	jmp	near ptr _outner
exwer	label	near
	mov	esp,dword ptr [spext]
	jmp	near ptr _outwer
_ll_break	label	near
	inc	word ptr [brkcnt]
	inc	word ptr [itcount]
	call	near ptr _inton
	cmp	word ptr [brkcnt],4
	jge	near ptr ll_panic
ll_brear	label	near
	ret
ll_panic	label	near
	cmp	word ptr [itstate],0
	je	near ptr ll_brear
	cmp	word ptr [state],0
	je	near ptr llpanicc
	cmp	word ptr [state],1
	je	near ptr llpanicl
	jmp	near ptr llpanice
llpanicc	label	near
	mov	esp,dword ptr [splisp]
	mov	dword ptr [state],1
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	call	near ptr gopanic
	mov	ebp,(65536+-1)
	ret
llpanicl	label	near
	mov	ebp,dword ptr [spext]
	mov	dword ptr [spext1],ebp
	call	near ptr restore
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	dword ptr [spext1]
	call	near ptr panicl1
	add	esp,4
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
panicl1	label	near
	mov	ecx,offset FLAT:gopanic
	call	near ptr sysprot
	pop	eax
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [spext],ebp
	jmp	ecx
llpanice	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	push	dword ptr [splisp]
	push	dword ptr [sparg]
	push	dword ptr [spext]
	mov	dword ptr [spext],esp
	mov	esp,dword ptr [sparg]
	mov	dword ptr [state],1
	call	near ptr panice1
	mov	esp,dword ptr [spext1]
	mov	dword ptr [state],2
	add	esp,12
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
panice1	label	near
	call	near ptr restore
	mov	ecx,offset FLAT:gopanic
	call	near ptr sysprot
	pop	eax
	mov	ebp,dword ptr [spext]
	mov	dword ptr [spext1],ebp
	mov	edx,dword ptr [spext]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [spext],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [sparg],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [splisp],ebp
	add	edx,4
	jmp	ecx
gopanic	label	near
	call	near ptr restore
	mov	bp,word ptr [brkcnt]
	sub	word ptr [itcount],bp
	mov	dword ptr [brkcnt],0
	mov	ecx,offset FLAT:gopanic1
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
gopanic1	label	near
	mov	dword ptr [itstate],0
	jmp	near ptr llpanic
restore	label	near
	mov	esi,dword ptr [_bsymb]
	mov	edi,dword ptr [_bcons]
	ret
_ll_clock	label	near
	cmp	word ptr [clkcnt],1
	je	near ptr llclk1
	mov	dword ptr [clkcnt],1
	inc	word ptr [itcount]
llclk1	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	call	near ptr _inton
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
ithard	label	near
	cmp	word ptr [itstate],0
	je	near ptr ithardr
	push	eax
	push	ebx
	push	ecx
	push	edx
	call	near ptr ithardd
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
ithardd	label	near
	mov	ecx,offset FLAT:ithard0
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
ithard0	label	near
	mov	dword ptr [itstate],0
	cmp	word ptr [brkcnt],0
	je	near ptr ithard1
	mov	bp,word ptr [brkcnt]
	sub	word ptr [itcount],bp
	mov	dword ptr [brkcnt],0
	call	near ptr llbreak
ithard1	label	near
	cmp	word ptr [_mouscnt],1
	jne	near ptr ithard2
	dec	word ptr [itcount]
	mov	dword ptr [_mouscnt],0
	call	near ptr llmouse
ithard2	label	near
	cmp	word ptr [clkcnt],0
	je	near ptr ithardr
	mov	dword ptr [itcount],0
	mov	dword ptr [clkcnt],0
	call	near ptr llclock
ithardr	label	near
	ret
_ll_merro	label	near
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [signum],ebp
	call	near ptr _inton
	cmp	word ptr [state],0
	je	near ptr llmerroc
	cmp	word ptr [state],1
	je	near ptr llmerrol
	jmp	near ptr llmerroe
llmerroc	label	near
	mov	esp,dword ptr [splisp]
	mov	dword ptr [state],1
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	call	near ptr restore
	mov	ebx,dword ptr [signum]
	call	near ptr llmerro
	mov	ebp,(65536+-1)
	ret
llmerrol	label	near
	call	near ptr restore
	mov	ebx,dword ptr [signum]
	call	near ptr llmerro
	ret
llmerroe	label	near
	mov	esp,dword ptr [splisp]
	mov	dword ptr [state],1
	call	near ptr restore
merroe1	label	near
	mov	ebx,dword ptr [signum]
	call	near ptr llmerro
	jmp	near ptr merroe1
ll_callg	label	near
	mov	ebp,dword ptr [callsp]
	mov	dword ptr [callsp1],ebp
	mov	dword ptr [callsp],esp
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [callnarg],ebp
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	edx,dword ptr [callsp]
	push	dword ptr [callsp1]
	mov	ebp,dword ptr [callnarg]
	lea	edx,dword ptr [edx+ebp*4]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [calltypr],ebp
	push	dword ptr [calltypr]
	push	dword ptr [splisp]
	call	near ptr call_c1
	add	esp,12
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	mov	esi,dword ptr [calltypr]
	mov	edi,dword ptr [callreg0]
	mov	ebp,dword ptr [callreg1]
	mov	dword ptr [dux1],ebp
	cmp	si,2
	jne	near ptr ll_callg0
	fstp	qword ptr [callreg0]
ll_callg0	label	near
	call	near ptr ll_build
	pop	ecx
	pop	edx
	mov	esi,dword ptr [_bsymb]
	mov	edi,dword ptr [_bcons]
	jmp	ecx
call_c1	label	near
	mov	ecx,offset FLAT:call_c2
	call	near ptr sysprot
	mov	eax,dword ptr [extvflag]
	cmp	eax,esi
	je	near ptr noextv
	call	near ptr extvrest
noextv	label	near
	pop	eax
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [splisp],ebp
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [calltypr],ebp
	mov	ebp,dword ptr [esp+4*3]
	mov	dword ptr [callsp],ebp
	jmp	ecx
call_c2	label	near
	mov	dword ptr [splisp],esp
	mov	dword ptr [sparg],esp
	mov	dword ptr [state],2
	mov	esp,dword ptr [spext]
	mov	edx,dword ptr [callsp]
	add	edx,8
	mov	ecx,dword ptr [callnarg]
	call	near ptr ll_conve
	mov	ebp,dword ptr [edx]
	mov	dword ptr [calltypr],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [callgadr],ebp
	add	edx,4
	mov	dword ptr [spext1],esp
	mov	ecx,dword ptr [aux1]
	mov	ebp,ecx
	lea	ebp,[ebp*4]
	sub	esp,ebp
	mov	edi,esp
	mov	esi,offset FLAT:calltarg
	sub	esi,ebp
	rep	movsd
	mov	edi,_bcons
	mov	esi,_bsymb
	push	offset FLAT:call_c5
	mov	ecx,dword ptr [callgadr]
	jmp	ecx
call_c5	label	near
	mov	esp,dword ptr [spext1]
	mov	dword ptr [callreg0],eax
	mov	dword ptr [callreg1],edx
	mov	esp,dword ptr [splisp]
	mov	dword ptr [state],1
	call	near ptr restore
	ret
extvrest	label	near
	mov	eax,dword ptr [callsp]
	add	eax,4
	mov	ebp,dword ptr [eax]
	mov	dword ptr [aux1],ebp
	add	eax,4
	jmp	near ptr extv1
extv2	label	near
	mov	edi,dword ptr [eax]
	add	eax,4
	cmp	di,7
	jne	near ptr extv3
	mov	esi,dword ptr [eax]
	add	eax,4
	;; FIXV_X_LL start
	push	esi
	push	ecx
	push	edi
	mov	esi,dword ptr [esi]
	add	esi,8
	mov	ecx,dword ptr [esi-4]
fixvxllcvt	label	near
	cmp	ecx,0
	jle	near ptr fixvxlldone
	and	dword ptr [esi],0000FFFFh
	add	esi,4
	dec	ecx
	jmp	near ptr fixvxllcvt
fixvxlldone	label	near
	pop	edi
	pop	ecx
	pop	esi
	;; FIXV_X_LL end
	jmp	near ptr extv1
extv3	label	near
	cmp	di,8
	jne	near ptr extv4
	mov	esi,dword ptr [eax]
	add	eax,4
	jmp	near ptr extv1
extv4	label	near
	add	eax,4
extv1	label	near
	dec	word ptr [aux1]
	dec	word ptr [aux1]
	jg	near ptr extv2
	ret
ll_conve	label	near
	mov	eax,offset FLAT:calltarg
	mov	ebx,offset FLAT:callrarg
	mov	dword ptr [extvflag],esi
	sub	cx,2
	mov	dword ptr [aux1],0
	jmp	near ptr ll_convl
ll_conv0	label	near
	dec	cx
	inc	word ptr [aux1]
	mov	edi,dword ptr [edx]
	add	edx,4
	mov	esi,dword ptr [edx]
	add	edx,4
ll_conv1	label	near
	cmp	di,1
	jne	near ptr ll_conv2
	mov	edi,esi
	movsx	edi,di
	sub	eax,4
	mov	dword ptr [eax],edi
	jmp	near ptr ll_convl
ll_conv2	label	near
	cmp	di,2
	jne	near ptr ll_conv3
	mov	ebp,dword ptr [4+esi]
	mov	dword ptr [dux1],ebp
	mov	edi,dword ptr [esi]
	sub	eax,4
	mov	ebp,dword ptr [dux1]
	mov	dword ptr [eax],ebp
	sub	eax,4
	mov	dword ptr [eax],edi
	inc	word ptr [aux1]
	jmp	near ptr ll_convl
ll_conv3	label	near
	cmp	di,3
	jne	near ptr ll_conv4
	mov	esi,dword ptr [esi]
	add	esi,8
	sub	eax,4
	mov	dword ptr [eax],esi
	jmp	near ptr ll_convl
ll_conv4	label	near
	cmp	di,4
	jne	near ptr ll_conv5
	;; VECT_LL_C start
	mov	esi,dword ptr [esi]
	add	esi,8
	;; VECT_LL_C end
	sub	eax,4
	mov	dword ptr [eax],esi
	jmp	near ptr ll_convl
ll_conv5	label	near
	cmp	di,5
	jne	near ptr ll_conv6
	mov	edi,esi
	;; RFIX_LL_X start
	sub	ebx,4
	movsx	edi,di
	mov	dword ptr [ebx],edi
	;; RFIX_LL_X end
	sub	eax,4
	mov	dword ptr [eax],ebx
	jmp	near ptr ll_convl
ll_conv6	label	near
	cmp	di,6
	jne	near ptr ll_conv7
	sub	ebx,4
	mov	ebp,dword ptr [esi]
	mov	dword ptr [ebx],ebp
	mov	ebp,dword ptr [4+esi]
	mov	dword ptr [4+ebx],ebp
	sub	eax,4
	mov	dword ptr [eax],ebx
	jmp	near ptr ll_convl
ll_conv7	label	near
	cmp	di,7
	jne	near ptr ll_conv8
	;; FIXV_LL_X start
	mov	esi,dword ptr [esi]
	push	ecx
	push	edi
	add	esi,4
	mov	ecx,dword ptr [esi]
	add	esi,4
	push	esi
fixvllxcvt	label	near
	cmp	ecx,0
	jle	near ptr fixvllxdone
	mov	edi,dword ptr [esi]
	movsx	edi,di
	mov	dword ptr [esi],edi
	add	esi,4
	dec	ecx
	jmp	near ptr fixvllxcvt
fixvllxdone	label	near
	pop	esi
	pop	edi
	pop	ecx
	;; FIXV_LL_X end
	sub	eax,4
	mov	dword ptr [eax],esi
	mov	dword ptr [extvflag],0
	jmp	near ptr ll_convl
ll_conv8	label	near
	cmp	di,8
	jne	near ptr ll_conv9
	sub	eax,4
	mov	dword ptr [eax],esi
	mov	dword ptr [extvflag],0
	jmp	near ptr ll_convl
ll_conv9	label	near
	sub	eax,4
	mov	dword ptr [eax],esi
ll_convl	label	near
	dec	cx
	jg	near ptr ll_conv0
	ret
ll_build	label	near
ll_buil1	label	near
	cmp	si,1
	jne	near ptr ll_buil2
	mov	ebp,edi
	and	ebp,0000FFFFh
	ret
ll_buil2	label	near
	cmp	si,2
	jne	near ptr ll_buil3
	cmp	dword ptr [ffloat],0
	jne	short laf__5
	call	near ptr gcfloat
laf__5:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	fld	qword ptr [callreg0]
	fstp	qword ptr ds:[ebp]
	fwait
	ret
ll_buil3	label	near
	cmp	si,3
	jne	near ptr ll_buil4
	mov	ebx,edi
	mov	eax,0
	jmp	near ptr ll_buil1__6
ll_buil__6:
	inc	ax
ll_buil1__6:
	cmp	byte ptr [edi+eax*1],0
	jne	near ptr ll_buil__6
	push	eax
	push	edi
	mov	edi,_bcons
	mov	esi,_bsymb
	call	near ptr crastrg
	pop	edi
	mov	ebp,eax
	pop	edi
	ret
ll_buil4	label	near
	cmp	si,4
	jne	near ptr ll_buil5
	xor	ebp,ebp
	ret
ll_buil5	label	near
	mov	ebp,edi
	ret
_getsym	label	near
	mov	dword ptr [saurwork],ebp
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [callreg0],ebp
	mov	ebp,dword ptr [saurwork]
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	push	dword ptr [splisp]
	push	dword ptr [spext]
	mov	dword ptr [spext],esp
	mov	esp,dword ptr [sparg]
	mov	dword ptr [state],1
	call	near ptr getsym1
	mov	esp,edx
	mov	dword ptr [state],2
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	mov	eax,dword ptr [callreg0]
	ret
getsym1	label	near
	call	near ptr restore
	mov	ecx,offset FLAT:getsym2
	call	near ptr sysprot
	pop	eax
	mov	edx,dword ptr [spext]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [spext],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [splisp],ebp
	add	edx,4
	jmp	ecx
getsym2	label	near
	push	edi
	mov	edi,dword ptr [callreg0]
	mov	ebx,edi
	mov	eax,0
	jmp	near ptr ll_buil1__7
ll_buil__7:
	inc	ax
ll_buil1__7:
	cmp	byte ptr [edi+eax*1],0
	jne	near ptr ll_buil__7
	push	eax
	push	edi
	mov	edi,_bcons
	mov	esi,_bsymb
	call	near ptr crastrg
	pop	edi
	mov	ebx,eax
	pop	eax
	pop	edi
	call	near ptr trysymb
	mov	dword ptr [callreg0],eax
	ret
_pushargd	label	near
_pusharg	label	near
	mov	dword ptr [saurwork],ebp
	mov	ebp,dword ptr [esp+4*3]
	mov	dword ptr [callreg1],ebp
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [callreg0],ebp
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [calltypr],ebp
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	push	dword ptr [splisp]
	push	dword ptr [spext]
	mov	dword ptr [spext],esp
	mov	esp,dword ptr [sparg]
	mov	dword ptr [state],1
	call	near ptr restore
	mov	edi,dword ptr [callreg0]
	mov	ebp,dword ptr [callreg1]
	mov	dword ptr [dux1],ebp
	mov	esi,dword ptr [calltypr]
	call	near ptr ll_build
	push	ebp
	mov	dword ptr [sparg],esp
	mov	ebp,dword ptr [spext]
	mov	dword ptr [spext1],ebp
	mov	edx,dword ptr [spext]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [spext],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [splisp],ebp
	add	edx,4
	mov	esp,edx
	mov	dword ptr [state],2
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	mov	ebp,dword ptr [saurwork]
	ret
_lispcall	label	near
	mov	dword ptr [saurwork],ebp
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [calltypr],ebp
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [callnarg],ebp
	mov	ebp,dword ptr [esp+4*3]
	mov	dword ptr [callsymb],ebp
	mov	ebp,dword ptr [saurwork]
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	push	dword ptr [calltypr]
	push	dword ptr [splisp]
	push	dword ptr [spext]
	mov	dword ptr [spext],esp
	mov	esp,dword ptr [sparg]
	mov	dword ptr [state],1
	call	near ptr call_l1
	mov	esi,dword ptr [calltypr]
	call	near ptr ll_resl
	mov	dword ptr [callreg0],edi
	mov	ebp,dword ptr [dux1]
	mov	dword ptr [callreg1],ebp
	mov	esp,dword ptr [spext1]
	mov	dword ptr [state],2
	add	esp,12
	mov	ebp,dword ptr [splisp]
	mov	dword ptr [sparg],ebp
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	mov	eax,dword ptr [callreg0]
	mov	edx,dword ptr [callreg1]
	ret
call_l1	label	near
	call	near ptr restore
	mov	ecx,offset FLAT:call_l2
	call	near ptr sysprot
	pop	dword ptr [callreg0]
	mov	ebp,dword ptr [spext]
	mov	dword ptr [spext1],ebp
	mov	edx,dword ptr [spext]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [spext],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [splisp],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [calltypr],ebp
	jmp	ecx
call_l2	label	near
	mov	edx,dword ptr [sparg]
	mov	ebp,dword ptr [callnarg]
	lea	edx,dword ptr [edx+ebp*4]
	mov	ecx,dword ptr [callnarg]
	mov	ebp,ecx
	lea	ebp,[ebp*4]
	sub	esp,ebp
	mov	edi,esp
	mov	esi,edx
	sub	esi,ebp
	rep	movsd
	mov	edi,_bcons
	mov	esi,_bsymb
	mov	eax,dword ptr [callsymb]
	mov	edx,dword ptr [callnarg]
	jmp	near ptr ffuncall
ll_resl	label	near
ll_res1	label	near
	cmp	si,1
	jne	near ptr ll_res2
	mov	edi,dword ptr [callreg0]
	movsx	edi,di
	ret
ll_res2	label	near
	cmp	si,2
	jne	near ptr ll_res3
	mov	edi,dword ptr [callreg0]
	mov	ebp,dword ptr [4+esi]
	mov	dword ptr [dux1],ebp
	mov	edi,dword ptr [esi]
	ret
ll_res3	label	near
	cmp	si,3
	jne	near ptr ll_res4
	mov	esi,dword ptr [callreg0]
	mov	esi,dword ptr [esi]
	add	esi,8
	mov	edi,esi
	ret
ll_res4	label	near
	cmp	si,4
	jne	near ptr ll_res5
	mov	esi,dword ptr [callreg0]
	;; VECT_LL_C start
	mov	esi,dword ptr [esi]
	add	esi,8
	;; VECT_LL_C end
	mov	edi,esi
	ret
ll_res5	label	near
	mov	edi,dword ptr [callreg0]
	ret
_cfloat_to_lfloat	label	near
	mov	dword ptr [saurwork],ebp
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [callreg1],ebp
	mov	ebp,dword ptr [esp+4]
	mov	dword ptr [callreg0],ebp
	mov	ebp,dword ptr [saurwork]
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	push	dword ptr [splisp]
	push	dword ptr [spext]
	mov	dword ptr [spext],esp
	mov	esp,dword ptr [sparg]
	mov	dword ptr [state],1
	call	near ptr restore
	mov	edi,dword ptr [callreg0]
	mov	ebp,dword ptr [callreg1]
	mov	dword ptr [dux1],ebp
	cmp	dword ptr [ffloat],0
	jne	short laf__8
	call	near ptr gcfloat
laf__8:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	fld	qword ptr [callreg0]
	fstp	qword ptr ds:[ebp]
	fwait
	mov	dword ptr [callreg0],ebp
	mov	ebp,dword ptr [spext]
	mov	dword ptr [spext1],ebp
	mov	edx,dword ptr [spext]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [spext],ebp
	add	edx,4
	mov	ebp,dword ptr [edx]
	mov	dword ptr [splisp],ebp
	add	edx,4
	mov	esp,edx
	mov	dword ptr [state],2
	pop	ebp
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	mov	eax,dword ptr [callreg0]
	ret
_lfloat_to_cfloat	label	near
;;	New macro CVTFLT_LL_C
	push	ebp
	mov	ebp,esp
	mov	eax,dword ptr [ebp+8]
	fld	qword ptr [eax]
	mov	esp,ebp
	pop	ebp
	ret
_llstart	endp
_TEXT	ends
	end
