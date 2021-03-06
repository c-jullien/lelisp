	.386p
	.387

	include	specnb.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	specnb.equ
ini_snb	proc	near
	mov	eax,5
	mov	ebx,offset FLAT:pnmac610
	mov	ecx,offset FLAT:scale
	mov	edx,offset FLAT:zscale
	push	z_scale
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac611
	mov	ecx,offset FLAT:lognot
	mov	edx,offset FLAT:zlognot
	push	z_lognot
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac612
	mov	ecx,offset FLAT:logand
	mov	edx,offset FLAT:zlogand
	push	z_logand
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac613
	mov	ecx,offset FLAT:logor
	mov	edx,offset FLAT:zlogor
	push	z_logor
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac614
	mov	ecx,offset FLAT:logxor
	mov	edx,offset FLAT:zlogxor
	push	z_logxor
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac615
	mov	ecx,offset FLAT:logshift
	mov	edx,offset FLAT:zlogshift
	push	z_logshift
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac616
	mov	ecx,offset FLAT:dpn
	mov	edx,offset FLAT:zdpn
	push	z_dpn
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac617
	mov	ecx,offset FLAT:mskfield
	mov	edx,offset FLAT:zmskfield
	push	z_mskfield
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac618
	mov	ecx,offset FLAT:ldbyte
	mov	edx,offset FLAT:zldbyte
	push	z_ldbyte
	call	near ptr inisymb
	mov	eax,12
	mov	ebx,offset FLAT:pnmac619
	mov	ecx,offset FLAT:dpbyte
	mov	edx,offset FLAT:zdpbyte
	push	z_dpbyte
	call	near ptr inisymb
	mov	eax,13
	mov	ebx,offset FLAT:pnmac620
	mov	ecx,offset FLAT:dpfield
	mov	edx,offset FLAT:zdpfield
	push	z_dpfield
	call	near ptr inisymb
	mov	eax,14
	mov	ebx,offset FLAT:pnmac621
	mov	ecx,offset FLAT:ldbt
	mov	edx,offset FLAT:zldbt
	push	z_ldbt
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac622
	mov	ecx,offset FLAT:oddp
	mov	edx,offset FLAT:zoddp
	push	z_oddp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac623
	mov	ecx,offset FLAT:evenp
	mov	edx,offset FLAT:zevenp
	push	z_evenp
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac624
	mov	ecx,offset FLAT:llrandom
	mov	edx,offset FLAT:zllrandom
	push	z_llrandom
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac625
	mov	ecx,offset FLAT:llsrandom
	mov	edx,offset FLAT:zllsrandom
	push	z_llsrandom
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac626
	mov	ecx,offset FLAT:floatp
	mov	edx,offset FLAT:zfloatp
	push	z_floatp
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac627
	mov	ecx,offset FLAT:fixp
	mov	edx,offset FLAT:zfixp
	push	z_fixp
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac628
	mov	ecx,offset FLAT:flplus
	mov	edx,offset FLAT:zflplus
	push	z_flplus
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac629
	mov	ecx,offset FLAT:fldiff
	mov	edx,offset FLAT:zfldiff
	push	z_fldiff
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac630
	mov	ecx,offset FLAT:fldiff
	mov	edx,offset FLAT:zfldiff
	push	z_fldiff
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac631
	mov	ecx,offset FLAT:fltimes
	mov	edx,offset FLAT:zfltimes
	push	z_fltimes
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac632
	mov	ecx,offset FLAT:flquo
	mov	edx,offset FLAT:zflquo
	push	z_flquo
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac633
	mov	ecx,offset FLAT:lladd1
	mov	edx,offset FLAT:zlladd1
	push	z_lladd1
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac634
	mov	ecx,offset FLAT:llsub1
	mov	edx,offset FLAT:zllsub1
	push	z_llsub1
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac635
	mov	ecx,offset FLAT:lladd
	mov	edx,offset FLAT:zlladd
	push	z_lladd
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac636
	mov	ecx,offset FLAT:llsub
	mov	edx,offset FLAT:zllsub
	push	z_llsub
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac637
	mov	ecx,offset FLAT:llmul
	mov	edx,offset FLAT:zllmul
	push	z_llmul
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac638
	mov	ecx,offset FLAT:ll_div
	mov	edx,offset FLAT:zll_div
	push	z_ll_div
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac639
	mov	ecx,offset FLAT:llrem
	mov	edx,offset FLAT:zllrem
	push	z_llrem
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac640
	mov	ecx,offset FLAT:lleqn
	mov	edx,offset FLAT:zlleqn
	push	z_lleqn
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac641
	mov	ecx,offset FLAT:llneqn
	mov	edx,offset FLAT:zllneqn
	push	z_llneqn
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac642
	mov	ecx,offset FLAT:llge
	mov	edx,offset FLAT:zllge
	push	z_llge
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac643
	mov	ecx,offset FLAT:llgt
	mov	edx,offset FLAT:zllgt
	push	z_llgt
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac644
	mov	ecx,offset FLAT:llle
	mov	edx,offset FLAT:zllle
	push	z_llle
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac645
	mov	ecx,offset FLAT:lllt
	mov	edx,offset FLAT:zlllt
	push	z_lllt
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac646
	mov	ecx,offset FLAT:llimin
	mov	edx,offset FLAT:zllimin
	push	z_llimin
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac647
	mov	ecx,offset FLAT:llimax
	mov	edx,offset FLAT:zllimax
	push	z_llimax
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac648
	mov	ecx,offset FLAT:llfadd
	mov	edx,offset FLAT:zllfadd
	push	z_llfadd
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac649
	mov	ecx,offset FLAT:llfsub
	mov	edx,offset FLAT:zllfsub
	push	z_llfsub
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac650
	mov	ecx,offset FLAT:llfmul
	mov	edx,offset FLAT:zllfmul
	push	z_llfmul
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac651
	mov	ecx,offset FLAT:llfdiv
	mov	edx,offset FLAT:zllfdiv
	push	z_llfdiv
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac652
	mov	ecx,offset FLAT:llfeqn
	mov	edx,offset FLAT:zllfeqn
	push	z_llfeqn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac653
	mov	ecx,offset FLAT:llfneqn
	mov	edx,offset FLAT:zllfneqn
	push	z_llfneqn
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac654
	mov	ecx,offset FLAT:llfge
	mov	edx,offset FLAT:zllfge
	push	z_llfge
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac655
	mov	ecx,offset FLAT:llfgt
	mov	edx,offset FLAT:zllfgt
	push	z_llfgt
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac656
	mov	ecx,offset FLAT:llfle
	mov	edx,offset FLAT:zllfle
	push	z_llfle
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac657
	mov	ecx,offset FLAT:llflt
	mov	edx,offset FLAT:zllflt
	push	z_llflt
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac658
	mov	ecx,offset FLAT:llfmin
	mov	edx,offset FLAT:zllfmin
	push	z_llfmin
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac659
	mov	ecx,offset FLAT:llfmax
	mov	edx,offset FLAT:zllfmax
	push	z_llfmax
	call	near ptr inisymb
	mov	ebp,dword ptr [zkllcp]
	mov	dword ptr [cpkgc],ebp
	mov	eax,8
	mov	ebx,offset FLAT:pnmac660
	mov	ecx,offset FLAT:clllsht
	mov	edx,offset FLAT:zclllsht
	push	z_clllsht
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac661
	mov	ecx,offset FLAT:cllmul
	mov	edx,offset FLAT:zcllmul
	push	z_cllmul
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac662
	mov	ecx,offset FLAT:clldiv
	mov	edx,offset FLAT:zclldiv
	push	z_clldiv
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac663
	mov	ecx,offset FLAT:cllrem
	mov	edx,offset FLAT:zcllrem
	push	z_cllrem
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac664
	mov	ecx,offset FLAT:cllfadd
	mov	edx,offset FLAT:zcllfadd
	push	z_cllfadd
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac665
	mov	ecx,offset FLAT:cllfsub
	mov	edx,offset FLAT:zcllfsub
	push	z_cllfsub
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac666
	mov	ecx,offset FLAT:cllfmul
	mov	edx,offset FLAT:zcllfmul
	push	z_cllfmul
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac667
	mov	ecx,offset FLAT:cllfdiv
	mov	edx,offset FLAT:zcllfdiv
	push	z_cllfdiv
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac668
	mov	ecx,offset FLAT:cllfeqn
	mov	edx,offset FLAT:zcllfeqn
	push	z_cllfeqn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac669
	mov	ecx,offset FLAT:cllfneqn
	mov	edx,offset FLAT:zcllfneqn
	push	z_cllfneqn
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac670
	mov	ecx,offset FLAT:cllfge
	mov	edx,offset FLAT:zcllfge
	push	z_cllfge
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac671
	mov	ecx,offset FLAT:cllfgt
	mov	edx,offset FLAT:zcllfgt
	push	z_cllfgt
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac672
	mov	ecx,offset FLAT:cllfle
	mov	edx,offset FLAT:zcllfle
	push	z_cllfle
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac673
	mov	ecx,offset FLAT:cllflt
	mov	edx,offset FLAT:zcllflt
	push	z_cllflt
	call	near ptr inisymb
	mov	dword ptr [cpkgc],esi
	mov	eax,6
	mov	ebx,offset FLAT:pnmac674
	mov	ecx,offset FLAT:zexcarry
	call	near ptr inicst
	mov	dword ptr [eax],0
	mov	ebp,dword ptr [zex]
	mov	dword ptr [12+eax],ebp
	mov	eax,3
	mov	ebx,offset FLAT:pnmac675
	mov	ecx,offset FLAT:exadd
	mov	edx,offset FLAT:zexadd
	push	z_exadd
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac676
	mov	ecx,offset FLAT:exincr
	mov	edx,offset FLAT:zexincr
	push	z_exincr
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac677
	mov	ecx,offset FLAT:exinv
	mov	edx,offset FLAT:zexinv
	push	z_exinv
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac678
	mov	ecx,offset FLAT:exmul
	mov	edx,offset FLAT:zexmul
	push	z_exmul
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac679
	mov	ecx,offset FLAT:exdiv
	mov	edx,offset FLAT:zexdiv
	push	z_exdiv
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac680
	mov	ecx,offset FLAT:excomp
	mov	edx,offset FLAT:zexcomp
	push	z_excomp
	call	near ptr inisymb
	ret
nfalse	label	near
	mov	eax,esi
	ret
rzero	label	near
	xor	eax,eax
	ret
rone	label	near
	mov	eax,1
	ret
banfix3	label	near
	mov	ebx,ecx
banfix2	label	near
	mov	eax,ebx
banfix1	label	near
	mov	ebx,edx
	jmp	near ptr errnia
banflt2	label	near
	mov	eax,ebx
banflt1	label	near
	mov	ebx,edx
	jmp	near ptr errnfa
banmix2	label	near
	mov	eax,ebx
banmix1	label	near
	mov	ebx,edx
	jmp	near ptr errnna
ban0dv	label	near
	mov	ebx,edx
	xor	eax,eax
	jmp	near ptr err0dv
banwna	label	near
	mov	eax,ecx
	mov	ebx,edx
	jmp	near ptr errwna
ini_snb	endp

oddp	proc	near
	mov	edx,dword ptr [zoddp]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	mov	ebx,eax
	and	bx,1
	or	bx,bx
	je	near ptr nfalse
	ret
oddp	endp

evenp	proc	near
	mov	edx,dword ptr [zevenp]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	mov	ebx,eax
	and	bx,1
	or	bx,bx
	jne	near ptr nfalse
	ret
evenp	endp

lleqn	proc	near
	mov	edx,dword ptr [zlleqn]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jne	near ptr nfalse
	ret
lleqn	endp

llneqn	proc	near
	mov	edx,dword ptr [zllneqn]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	je	near ptr nfalse
	ret
llneqn	endp

llgt	proc	near
	mov	edx,dword ptr [zllgt]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jle	near ptr nfalse
	ret
llgt	endp

llge	proc	near
	mov	edx,dword ptr [zllge]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jl	near ptr nfalse
	ret
llge	endp

lllt	proc	near
	mov	edx,dword ptr [zlllt]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jge	near ptr nfalse
	ret
lllt	endp

llle	proc	near
	mov	edx,dword ptr [zllle]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jg	near ptr nfalse
	ret
llle	endp

llimin	proc	near
	mov	edx,dword ptr [zllimin]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jle	near ptr lliminr
	mov	eax,ebx
lliminr	label	near
	ret
llimin	endp

llimax	proc	near
	mov	edx,dword ptr [zllimax]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	jg	near ptr llimaxr
	mov	eax,ebx
llimaxr	label	near
	ret
llimax	endp

lladd1	proc	near
	mov	edx,dword ptr [zlladd1]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	inc	ax
lla1ret	label	near
	ret
lladd1	endp

llsub1	proc	near
	mov	edx,dword ptr [zllsub1]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	dec	ax
lls1ret	label	near
	ret
llsub1	endp

lladd	proc	near
	mov	edx,dword ptr [zlladd]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	add	ax,bx
	jo	near ptr lladdret
lladdret	label	near
	ret
lladd	endp

llsub	proc	near
	mov	edx,dword ptr [zllsub]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	sub	ax,bx
	jo	near ptr llsubret
llsubret	label	near
	ret
llsub	endp

llmul	proc	near
	mov	edx,dword ptr [zllmul]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	imul	ax,bx
	jo	near ptr llmulret
llmulret	label	near
	ret
llmul	endp

ll_div	proc	near
	mov	edx,dword ptr [zll_div]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	or	bx,bx
	je	near ptr ban0dv
	or	ebx,ebx
	jz	near ptr lldivret
	push	edx
	cwd
	idiv	bx
	movzx	eax,ax
	pop	edx
l9__1:
lldivret	label	near
	ret
ll_div	endp

llrem	proc	near
	mov	edx,dword ptr [zllrem]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	or	bx,bx
	je	near ptr ban0dv
	or	ebx,ebx
	jz	short l9__2
	push	edx
	cwd
	idiv	bx
	movzx	eax,dx
	pop	edx
l9__2:
	ret
llrem	endp

scale	proc	near
	mov	edx,dword ptr [zscale]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr banfix3
	or	cx,cx
	je	near ptr ban0dv
	xor	edx,edx
	or	ax,ax
	jge	near ptr scale1
	neg	ax
	inc	dx
scale1	label	near
	or	bx,bx
	jge	near ptr scale2
	neg	bx
	inc	dx
scale2	label	near
	or	cx,cx
	jge	near ptr scale3
	neg	cx
	inc	dx
scale3	label	near
	mov	ebp,eax
	imul	ebp,ebx
	movzx	ebx,bp
	shr	ebp,16
	mov	eax,ebp
	xchg	eax,edx
	xchg	ebx,eax
	shl	edx,16
	add	eax,edx
	xor	edx,edx
	div	ecx
	xchg	ebx,edx
	or	dx,dx
	je	near ptr scale4
	cmp	dx,2
	je	near ptr scale4
	neg	ax
scale4	label	near
	ret
scale	endp

llsrandom	proc	near
	mov	ecx,edx
	mov	edx,dword ptr [zllsrandom]
	or	cx,cx
	je	near ptr srand1
	cmp	cx,1
	je	near ptr srand0
	jmp	near ptr banwna
srand0	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	push	edx
	cwd
	mov	ebp,31213
	idiv	bp
	movzx	eax,dx
	pop	edx
l9__3:
	mov	dword ptr [randseed],eax
srand1	label	near
	mov	eax,dword ptr [randseed]
	ret
llsrandom	endp

llrandom	proc	near
	mov	edx,dword ptr [zllrandom]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	ax,bx
	je	near ptr random1
	cmp	ax,bx
	jl	near ptr random2
	mov	ecx,eax
	mov	eax,ebx
	mov	ebx,ecx
random2	label	near
	sub	bx,ax
random3	label	near
	mov	ecx,dword ptr [randseed]
	mov	ebp,ecx
	imul	ebp,92
	add	ebp,2731
	movzx	edx,bp
	shr	ebp,16
	mov	ecx,ebp
	xchg	edx,eax
	xchg	ecx,edx
	mov	ebp,31213
	div	bp
	xchg	ecx,eax
	mov	dword ptr [randseed],edx
	mov	ebp,edx
	imul	ebp,ebx
	movzx	edx,bp
	shr	ebp,16
	mov	ecx,ebp
	xchg	edx,eax
	xchg	ecx,edx
	mov	ebp,31213
	div	bp
	xchg	ecx,eax
	cmp	cx,bx
	jg	near ptr random3
	add	ax,cx
random1	label	near
	ret
llrandom	endp

lognot	proc	near
	mov	edx,dword ptr [zlognot]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	xor	ax,(65536+-1)
	ret
lognot	endp

logand	proc	near
	mov	edx,dword ptr [zlogand]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	and	ax,bx
	ret
logand	endp

logor	proc	near
	mov	edx,dword ptr [zlogor]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	or	ax,bx
	ret
logor	endp

logxor	proc	near
	mov	edx,dword ptr [zlogxor]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	xor	ax,bx
	ret
logxor	endp

logshift	proc	near
	mov	edx,dword ptr [zlogshift]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__4
	shl	ax,cl
	jmp	short l2__4
l1__4:
	neg	cl
	shr	ax,cl
l2__4:
	xchg	ebx,ecx
	ret
logshift	endp

dpn	proc	near
	mov	edx,dword ptr [zdpn]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	mov	ebx,eax
	mov	eax,1
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__5
	shl	ax,cl
	jmp	short l2__5
l1__5:
	neg	cl
	shr	ax,cl
l2__5:
	xchg	ebx,ecx
	ret
dpn	endp

mskfield	proc	near
	mov	edx,dword ptr [zmskfield]
mskf0	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr banfix3
	mov	edx,1
	or	cl,cl
	jl	short l1__6
	shl	dx,cl
	jmp	short l2__6
l1__6:
	neg	cl
	shr	dx,cl
l2__6:
	dec	dx
mskf1	label	near
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__7
	shl	dx,cl
	jmp	short l2__7
l1__7:
	neg	cl
	shr	dx,cl
l2__7:
	xchg	ebx,ecx
	and	ax,dx
	ret
mskfield	endp

ldbyte	proc	near
	mov	edx,dword ptr [zldbyte]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr banfix3
	mov	edx,1
	or	cl,cl
	jl	short l1__8
	shl	dx,cl
	jmp	short l2__8
l1__8:
	neg	cl
	shr	dx,cl
l2__8:
	dec	dx
ldby1	label	near
	neg	bx
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__9
	shl	ax,cl
	jmp	short l2__9
l1__9:
	neg	cl
	shr	ax,cl
l2__9:
	xchg	ebx,ecx
	and	ax,dx
	ret
ldbyte	endp

ldbt	proc	near
	mov	edx,dword ptr [zldbt]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banfix2
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr banfix3
	mov	edx,1
	or	cl,cl
	jl	short l1__10
	shl	dx,cl
	jmp	short l2__10
l1__10:
	neg	cl
	shr	dx,cl
l2__10:
	dec	dx
ldbt1	label	near
	neg	bx
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__11
	shl	ax,cl
	jmp	short l2__11
l1__11:
	neg	cl
	shr	ax,cl
l2__11:
	xchg	ebx,ecx
	and	ax,dx
	or	ax,ax
	je	near ptr nfalse
	ret
ldbt	endp

dpbyte	proc	near
	mov	ecx,edx
	mov	edx,dword ptr [zdpbyte]
	jmp	near ptr dpfi0
dpbyte	endp

dpfield	proc	near
	mov	ecx,edx
	mov	edx,dword ptr [zdpfield]
dpfi0	label	near
	cmp	cx,4
	jne	near ptr banwna
	mov	eax,dword ptr [esp+12]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banfix1
	pop	eax
	pop	ecx
	pop	ebx
	cmp	edx,dword ptr [zdpfield]
	je	near ptr dpfi1
	xchg	ebx,ecx
	or	cl,cl
	jl	short l1__12
	shl	ax,cl
	jmp	short l2__12
l1__12:
	neg	cl
	shr	ax,cl
l2__12:
	xchg	ebx,ecx
dpfi1	label	near
	call	near ptr mskf0
	pop	ebx
	xor	dx,(65536+-1)
	and	bx,dx
	or	ax,bx
	ret
dpfield	endp

llfeqn	proc	near
	mov	edx,dword ptr [zllfeqn]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	jne	near ptr nfalse
	ret
llfeqn	endp

llfneqn	proc	near
	mov	edx,dword ptr [zllfneqn]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	je	near ptr nfalse
	ret
llfneqn	endp

llfgt	proc	near
	mov	edx,dword ptr [zllfgt]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	jbe	near ptr nfalse
	ret
llfgt	endp

llfge	proc	near
	mov	edx,dword ptr [zllfge]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	jb	near ptr nfalse
	ret
llfge	endp

llflt	proc	near
	mov	edx,dword ptr [zllflt]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	jae	near ptr nfalse
	ret
llflt	endp

llfle	proc	near
	mov	edx,dword ptr [zllfle]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	ja	near ptr nfalse
	ret
llfle	endp

llfmin	proc	near
	mov	edx,dword ptr [zllfmin]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	jbe	near ptr llfminr
	mov	eax,ebx
llfminr	label	near
	ret
llfmin	endp

llfmax	proc	near
	mov	edx,dword ptr [zllfmax]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
	ja	near ptr llfmaxr
	mov	eax,ebx
llfmaxr	label	near
	ret
llfmax	endp

llfadd	proc	near
	mov	edx,dword ptr [zllfadd]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
llfadd	endp

llfsub	proc	near
	mov	edx,dword ptr [zllfsub]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
llfsub	endp

llfmul	proc	near
	mov	edx,dword ptr [zllfmul]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
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
llfmul	endp

llfdiv	proc	near
	mov	edx,dword ptr [zllfdiv]
	or	eax,eax
	jns	near ptr banflt1
	or	ebx,ebx
	jns	near ptr banflt2
	mov	dword ptr [_accusingle2],ebx
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
	je	near ptr ban0dv
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
llfdiv	endp

clllsht	proc	near
	xchg	dword ptr [esp],ecx
	or	cl,cl
	jl	short l1__13
	shl	word ptr [esp+4*2],cl
	jmp	short l2__13
l1__13:
	neg	cl
	shr	word ptr [esp+4*2],cl
l2__13:
	xchg	dword ptr [esp],ecx
	add	esp,4
	ret
clllsht	endp

cllmul	proc	near
	mov	ebp,dword ptr [esp+4*2]
	imul	bp,word ptr [esp]
	mov	dword ptr [esp+4*2],ebp
	add	esp,4
	ret
cllmul	endp

clldiv	proc	near
;; Patch on DIV/REM used
	mov	ebp,esp
	cmp	dword ptr [esp],0
	jz	short l9__14
	push	eax
	push	edx
	mov	eax,dword ptr [esp+4*2]
	cwd
	idiv	word ptr [esp]
	push	edi
	mov	edi,dword ptr [esp+4*2]
	movzx	edi,ax
	mov	dword ptr [esp+4*2],edi
	pop	edi
	pop	edx
	pop	eax
l9__14:
	add	esp,4
	ret
clldiv	endp

cllrem	proc	near
;; Patch on DIV/REM used
	mov	ebp,esp
	cmp	dword ptr [esp],0
	jz	short l9__15
	push	eax
	push	edx
	mov	eax,dword ptr [esp+4*2]
	cwd
	idiv	word ptr [esp]
	push	edi
	mov	edi,dword ptr [esp+4*2]
	movzx	edi,dx
	mov	dword ptr [esp+4*2],edi
	pop	edi
	pop	edx
	pop	eax
l9__15:
	add	esp,4
	ret
cllrem	endp

cllfadd	proc	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fadd	dword ptr [_accusingle2]
	fstp	dword ptr [esp+4*2]
	fwait
	shr	dword ptr [esp+4*2],1
	or	dword ptr [esp+4*2],80000000h
	add	esp,4
	ret
cllfadd	endp

cllfsub	proc	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fsubr	dword ptr [_accusingle2]
	fstp	dword ptr [esp+4*2]
	fwait
	shr	dword ptr [esp+4*2],1
	or	dword ptr [esp+4*2],80000000h
	add	esp,4
	ret
cllfsub	endp

cllfmul	proc	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fmul	dword ptr [_accusingle2]
	fstp	dword ptr [esp+4*2]
	fwait
	shr	dword ptr [esp+4*2],1
	or	dword ptr [esp+4*2],80000000h
	add	esp,4
	ret
cllfmul	endp

cllfdiv	proc	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fdivr	dword ptr [_accusingle2]
	fstp	dword ptr [esp+4*2]
	fwait
	shr	dword ptr [esp+4*2],1
	or	dword ptr [esp+4*2],80000000h
	add	esp,4
	ret
cllret1	label	near
	mov	dword ptr [esp+4*2],1
	add	esp,4
	ret
cllfdiv	endp

cllfeqn	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	je	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllfeqn	endp

cllfneqn	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jne	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllfneqn	endp

cllfgt	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	ja	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllfgt	endp

cllfge	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jae	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllfge	endp

cllflt	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jb	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllflt	endp

cllfle	proc	near
	mov	ebp,esp
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fld	dword ptr [_accusingle2]
	push	eax
	mov	ebp,dword ptr [ebp+4*2]
	mov	dword ptr [_accusingle2],ebp
	shl	dword ptr [_accusingle2],1
	fcomp	dword ptr [_accusingle2]
	fstsw	ax
	sahf
	pop	eax
	jbe	near ptr cllret1
	mov	dword ptr [esp+4*2],0
	add	esp,4
	ret
cllfle	endp

floatp	proc	near
	or	eax,eax
	js	near ptr floatp2
	mov	eax,esi
floatp2	label	near
	ret
floatp	endp

fixp	proc	near
	cmp	dword ptr [bfloat],eax
	ja	near ptr fixp2
	mov	eax,esi
fixp2	label	near
	ret
fixp	endp

flplus	proc	near
	xor	eax,eax
	jmp	near ptr fplus2
fplus1	label	near
	pop	ebx
	or	ebx,ebx
	js	near ptr fplus5
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr fpluser1
	mov	ecx,eax
	add	ax,bx
	jo	near ptr fplus4
fplus2	label	near
	dec	dx
	jge	near ptr fplus1
	ret
fplus4	label	near
	mov	eax,ecx
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr fplus7
fplus5	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr fplus8
fplus6	label	near
	pop	ebx
fplus7	label	near
	or	ebx,ebx
	js	near ptr fplus8
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr fpluser1
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
fplus8	label	near
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
	dec	dx
	jge	near ptr fplus6
fplus9	label	near
	ret
fpluser1	label	near
	mov	eax,ebx
fpluser2	label	near
	mov	ebx,dword ptr [zflplus]
	jmp	near ptr errnna
flplus	endp

fldiff	proc	near
	or	dx,dx
	je	near ptr rzero
	cmp	dx,1
	jne	near ptr fdif1
	xor	eax,eax
	xchg	dword ptr [esp],eax
	push	eax
	inc	dx
fdif1	label	near
	xor	ebx,ebx
	jmp	near ptr fdif3
fdif2	label	near
	pop	eax
	or	eax,eax
	js	near ptr fdif5
	cmp	dword ptr [bfloat],eax
	jbe	near ptr fdiferr2
	mov	ecx,ebx
	add	bx,ax
	jo	near ptr fdif4
fdif3	label	near
	dec	dx
	jg	near ptr fdif2
	pop	eax
	or	eax,eax
	js	near ptr fdif10
	cmp	dword ptr [bfloat],eax
	jbe	near ptr fdiferr2
	mov	ecx,eax
	sub	ax,bx
	jo	near ptr fdif91
	ret
fdif4	label	near
	mov	ebx,ecx
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
fdif5	label	near
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr fdif7
fdif6	label	near
	pop	eax
	or	eax,eax
	js	near ptr fdif7
	cmp	dword ptr [bfloat],eax
	jbe	near ptr fdiferr2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
fdif7	label	near
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
fdif8	label	near
	dec	dx
	jg	near ptr fdif6
	pop	eax
	or	eax,eax
	js	near ptr fdif9
	cmp	dword ptr [bfloat],eax
	jbe	near ptr fdiferr2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
fdif9	label	near
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
fdif91	label	near
	mov	eax,ecx
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
fdif10	label	near
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr fdif9
fdiferr1	label	near
	mov	eax,ebx
fdiferr2	label	near
	mov	ebx,dword ptr [zfldiff]
	jmp	near ptr errnna
fldiff	endp

fltimes	proc	near
	mov	eax,1
	jmp	near ptr ftime2
ftime1	label	near
	pop	ebx
	or	ebx,ebx
	js	near ptr ftime5
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr ftimerr1
	mov	ecx,eax
	imul	ax,bx
	jo	near ptr ftime4
ftime2	label	near
	dec	dx
	jge	near ptr ftime1
	ret
ftime4	label	near
	mov	eax,ecx
ftime5	label	near
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
	jmp	near ptr ftime7
ftime6	label	near
	pop	ebx
ftime7	label	near
	or	ebx,ebx
	js	near ptr ftime8
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr ftimerr1
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
ftime8	label	near
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
	dec	dx
	jge	near ptr ftime6
	ret
ftimerr1	label	near
	mov	eax,ebx
ftimerr2	label	near
	mov	ebx,dword ptr [zfltimes]
	jmp	near ptr errnna
fltimes	endp

flquo	proc	near
	mov	edx,dword ptr [zflquo]
	or	eax,eax
	js	near ptr fquo2
	or	ebx,ebx
	js	near ptr fquo3
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banmix1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banmix2
	or	bx,bx
	je	near ptr fquoovf
	mov	ecx,eax
	or	ebx,ebx
	jz	short l9__16
	push	edx
	cwd
	idiv	bx
	movzx	eax,dx
	pop	edx
l9__16:
	or	ax,ax
	jne	near ptr fquo1
	mov	eax,ecx
	or	ebx,ebx
	jz	near ptr fquoovf
	push	edx
	cwd
	idiv	bx
	movzx	eax,ax
	pop	edx
l9__17:
	ret
fquo1	label	near
	mov	eax,ecx
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr fquo3
fquo2	label	near
	or	ebx,ebx
	js	near ptr fquo4
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr banmix2
	mov	dword ptr [_accusingle1],ebx
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	jmp	near ptr fquo4
fquo3	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr banmix1
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
fquo4	label	near
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
fquoovf	label	near
	xor	eax,eax
	mov	ebx,dword ptr [zflquo]
	jmp	near ptr err0dv
flquo	endp

exadd	proc	near
	mov	ecx,dword ptr [zexcarry]
	add	eax,ebx
	add	eax,dword ptr [ecx]
	mov	dword ptr [ecx],eax
	shr	dword ptr [ecx],16
	movzx	eax,ax
	ret
exadd	endp

exincr	proc	near
	mov	ebx,dword ptr [zexcarry]
	add	eax,1
	add	eax,dword ptr [ebx]
	mov	dword ptr [ebx],eax
	shr	dword ptr [ebx],16
	movzx	eax,ax
	ret
exincr	endp

exinv	proc	near
	neg	ax
	dec	ax
exinvret	label	near
	ret
exinv	endp

exmul	proc	near
	mov	edx,dword ptr [zexcarry]
	mov	ebp,eax
	imul	ebp,ebx
	add	ebp,ecx
	add	ebp,dword ptr [edx]
	movzx	eax,bp
	shr	ebp,16
	mov	dword ptr [edx],ebp
	ret
exmul	endp

exdiv	proc	near
	mov	ecx,dword ptr [zexcarry]
	xchg	dword ptr [ecx],edx
	shl	edx,16
	add	eax,edx
	xor	edx,edx
	div	ebx
	xchg	dword ptr [ecx],edx
	ret
exdiv	endp

excomp	proc	near
	cmp	eax,ebx
	jb	near ptr excomp1
	je	near ptr excomp2
	ja	near ptr excomp3
excomp1	label	near
	mov	eax,(65536+-1)
	ret
excomp2	label	near
	xor	eax,eax
	ret
excomp3	label	near
	mov	eax,1
	ret
excomp	endp
_TEXT	ends
	end
