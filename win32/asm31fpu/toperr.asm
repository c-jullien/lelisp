	.386p
	.387

	include	toperr.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	toperr.equ
ini_top	proc	near
	mov	eax,5
	mov	ebx,offset FLAT:pnmac768
	mov	ecx,offset FLAT:zlsubr0
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac769
	mov	ecx,offset FLAT:zlsubr1
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac770
	mov	ecx,offset FLAT:zlsubr2
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac771
	mov	ecx,offset FLAT:zlsubr3
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac772
	mov	ecx,offset FLAT:znlsubr
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac773
	mov	ecx,offset FLAT:zflsubr
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac774
	mov	ecx,offset FLAT:zllexpr
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac775
	mov	ecx,offset FLAT:zllfexpr
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac776
	mov	ecx,offset FLAT:zllmacro
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac777
	mov	ecx,offset FLAT:zlldmacro
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac778
	mov	ecx,offset FLAT:zllmsubr
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac779
	mov	ecx,offset FLAT:zlldmsubr
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac780
	mov	ecx,offset FLAT:toplevel
	mov	edx,offset FLAT:ztoplevel
	push	z_toplevel
	call	near ptr inisymb
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,13
	mov	ebx,offset FLAT:pnmac781
	mov	ecx,offset FLAT:zstatoplevel
	call	near ptr inicst
	mov	ebp,dword ptr [zt]
	mov	dword ptr [eax],ebp
	mov	eax,10
	mov	ebx,offset FLAT:pnmac782
	mov	ecx,offset FLAT:zprtmsgs
	call	near ptr inicst
	mov	dword ptr [eax],1
	mov	eax,12
	mov	ebx,offset FLAT:pnmac783
	mov	ecx,offset FLAT:zprtfltl
	call	near ptr inicst
	mov	dword ptr [eax],3
	mov	eax,9
	mov	ebx,offset FLAT:pnmac784
	mov	ecx,offset FLAT:zfatalerror
	call	near ptr inicst
	mov	dword ptr [cpkgc],esi
	mov	eax,7
	mov	ebx,offset FLAT:pnmac785
	mov	ecx,offset FLAT:runt
	mov	edx,offset FLAT:zrunt
	push	z_runt
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac786
	mov	ecx,offset FLAT:llsleep
	mov	edx,offset FLAT:zllsleep
	push	z_llsleep
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac787
	mov	ecx,offset FLAT:lldate
	mov	edx,offset FLAT:zlldate
	push	z_lldate
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac788
	mov	ecx,offset FLAT:clkalarm
	mov	edx,offset FLAT:zclkalarm
	push	z_clkalarm
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac789
	mov	ecx,offset FLAT:withit
	mov	edx,offset FLAT:zwithit
	push	z_withit
	call	near ptr inisymb
	mov	eax,18
	mov	ebx,offset FLAT:pnmac790
	mov	ecx,offset FLAT:withnoit
	mov	edx,offset FLAT:zwithnoit
	push	z_withnoit
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac791
	mov	ecx,offset FLAT:lltime
	mov	edx,offset FLAT:zlltime
	push	z_lltime
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac792
	mov	ecx,offset FLAT:llshwstk
	mov	edx,offset FLAT:zllshwstk
	push	z_llshwstk
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac793
	mov	ecx,offset FLAT:llcline
	mov	edx,offset FLAT:zllcline
	push	z_llcline
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac794
	mov	ecx,offset FLAT:llgetenv
	mov	edx,offset FLAT:zllgetenv
	push	z_llgetenv
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac795
	mov	ecx,offset FLAT:llgetadr
	mov	edx,offset FLAT:zllgetadr
	push	z_llgetadr
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac796
	mov	ecx,offset FLAT:llcallx
	mov	edx,offset FLAT:zllcallx
	push	z_llcallx
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac797
	mov	ecx,offset FLAT:cstack
	mov	edx,offset FLAT:zcstack
	push	z_cstack
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac798
	mov	ecx,offset FLAT:syserror
	mov	edx,offset FLAT:zsyserror
	push	z_syserror
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac799
	mov	ecx,offset FLAT:lerror
	mov	edx,offset FLAT:zlerror
	push	z_lerror
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac800
	mov	ecx,offset FLAT:sysdebug
	mov	edx,offset FLAT:zsysdebug
	push	z_sysdebug
	call	near ptr inisymb
	mov	dword ptr [eax],esi
	mov	eax,3
	mov	ebx,offset FLAT:pnmac801
	mov	ecx,offset FLAT:zmserror
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac802
	mov	ecx,offset FLAT:zcolon
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac803
	mov	ecx,offset FLAT:zerrfstk
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac804
	mov	ecx,offset FLAT:zerrfsgc
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac805
	mov	ecx,offset FLAT:zerrfsud
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac806
	mov	ecx,offset FLAT:zerrfpgc
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac807
	mov	ecx,offset FLAT:zerrfsym
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac808
	mov	ecx,offset FLAT:zerrfcns
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac809
	mov	ecx,offset FLAT:zerrfflt
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac810
	mov	ecx,offset FLAT:zerrffix
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac811
	mov	ecx,offset FLAT:zerrfhep
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac812
	mov	ecx,offset FLAT:zerrfstr
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac813
	mov	ecx,offset FLAT:zerrfvec
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac814
	mov	ecx,offset FLAT:zerrmac
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac815
	mov	ecx,offset FLAT:zerrudv
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac816
	mov	ecx,offset FLAT:zerrudf
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac817
	mov	ecx,offset FLAT:zerrudm
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac818
	mov	ecx,offset FLAT:zerrudt
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac819
	mov	ecx,offset FLAT:zerrbdf
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac820
	mov	ecx,offset FLAT:zerrwna
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac821
	mov	ecx,offset FLAT:zerrbpa
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac822
	mov	ecx,offset FLAT:zerrbal
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac823
	mov	ecx,offset FLAT:zerrilb
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac824
	mov	ecx,offset FLAT:zerrsxt
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac825
	mov	ecx,offset FLAT:zerrios
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac826
	mov	ecx,offset FLAT:zerr0dv
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac827
	mov	ecx,offset FLAT:zerrnna
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac828
	mov	ecx,offset FLAT:zerrnia
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac829
	mov	ecx,offset FLAT:zerrnfa
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac830
	mov	ecx,offset FLAT:zerrnsa
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac831
	mov	ecx,offset FLAT:zerrnaa
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac832
	mov	ecx,offset FLAT:zerrnla
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac833
	mov	ecx,offset FLAT:zerrnva
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac834
	mov	ecx,offset FLAT:zerroob
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac835
	mov	ecx,offset FLAT:zerrstl
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac836
	mov	ecx,offset FLAT:zerrvec
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac837
	mov	ecx,offset FLAT:zerrnda
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac838
	mov	ecx,offset FLAT:zerrstc
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac839
	mov	ecx,offset FLAT:zerrsym
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac840
	mov	ecx,offset FLAT:zerrgen
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac841
	mov	ecx,offset FLAT:zerrnab
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac842
	mov	ecx,offset FLAT:zerrxia
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac843
	mov	ecx,offset FLAT:zbreak
	call	near ptr inicst
	mov	eax,14
	mov	ebx,offset FLAT:pnmac844
	mov	ecx,offset FLAT:userit
	mov	edx,offset FLAT:zuserit
	push	z_userit
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac845
	mov	ecx,offset FLAT:mouse
	mov	edx,offset FLAT:zmouse
	push	z_mouse
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac846
	mov	ecx,offset FLAT:lltclock
	mov	edx,offset FLAT:zlltclock
	push	z_lltclock
	call	near ptr inisymb
	ret
systop	label	near
	mov	dword ptr [dlink],esi
	push	dword ptr [dlink]
	push	offset FLAT:unbind0
	mov	dword ptr [dlink],esp
systop2	label	near
	mov	eax,dword ptr [ztoplevel]
	mov	ebx,esi
	call	near ptr itsoft
	jmp	near ptr systop2
ini_top	endp

toplevel	proc	near
	call	near ptr lread
	push	offset FLAT:toplevr
	push	eax
	push	esi
	mov	edx,2
	jmp	near ptr eval000
toplevr	label	near
	mov	ebx,dword ptr [zstatoplevel]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,esi
	je	near ptr toplend
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__1
	push	2
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	call	near ptr u_print
toplend	label	near
	ret
toplevel	endp

cstack	proc	near
	mov	eax,esi
	push	eax
	mov	ebx,esp
	mov	edx,dword ptr [dlink]
evstck0	label	near
	cmp	ebx,edx
	je	near ptr evstck1
	mov	eax,dword ptr [ebx]
	add	ebx,4
	cmp	eax,offset FLAT:evprognr
	jne	near ptr evstck0
	mov	eax,dword ptr [ebx]
	add	ebx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],11
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	mov	ebp,dword ptr [esp]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [esp],ebp
	xchg	dword ptr [fcons],edi
	jmp	near ptr evstck0
evstck1	label	near
	mov	eax,esi
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	ecx,offset FLAT:unbind0
	je	near ptr evstkf
	cmp	ecx,offset FLAT:unbind1
	je	near ptr evstkl
	cmp	ecx,offset FLAT:unbind2
	je	near ptr evstka
	cmp	ecx,offset FLAT:unbind3
	je	near ptr evstke
	cmp	ecx,offset FLAT:unbind4
	je	near ptr evstks
	cmp	ecx,offset FLAT:unbind5
	je	near ptr evstkb
	cmp	ecx,offset FLAT:unbind6
	je	near ptr evstku
	cmp	ecx,offset FLAT:unbind7
	je	near ptr evstky
	cmp	ecx,offset FLAT:unbind8
	je	near ptr evstkh
	cmp	ecx,offset FLAT:unbind9
	je	near ptr evstkt
	cmp	ecx,offset FLAT:unbind10
	je	near ptr evstkk
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__5
	push	14
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
evstkf	label	near
	pop	eax
	jmp	near ptr nreverse
evstck2	label	near
	push	edx
	push	dword ptr [savea4]
	call	near ptr nreverse
	pop	edx
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	mov	ebp,dword ptr [esp]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [esp],ebp
	xchg	dword ptr [fcons],edi
	jmp	near ptr evstck0
evstkl	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],1
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [edx]
	mov	dword ptr [savea4],ebp
	add	edx,4
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,dword ptr [edx]
	add	edx,4
	jmp	near ptr evstkl2
evstkl1	label	near
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
evstkl2	label	near
	dec	bx
	jge	near ptr evstkl1
	jmp	near ptr evstck2
evstka	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],2
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,dword ptr [edx]
	add	edx,4
	jmp	near ptr evstka4
evstka3	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__14
l1__14:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ecx,dword ptr [edx]
	add	edx,4
	cmp	dword ptr [fcons],edi
	jb	near ptr l__15
l1__15:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
evstka4	label	near
	mov	ecx,dword ptr [edx]
	add	edx,4
	or	cx,cx
	jne	near ptr evstka3
	mov	dword ptr [savea4],ebx
	jmp	near ptr evstck2
evstke	label	near
	mov	ebx,3
	jmp	near ptr evstkb1
evstks	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__16
l1__16:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],4
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [edx]
	mov	dword ptr [savea4],ebp
	add	edx,4
	mov	ebx,10
	jmp	near ptr evstkl2
evstkb	label	near
	mov	ebx,5
evstkb1	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__17
l1__17:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [edx]
	mov	dword ptr [savea4],ebp
	add	edx,4
evstkb2	label	near
	mov	ebx,1
	jmp	near ptr evstkl2
evstku	label	near
	mov	ebx,6
	jmp	near ptr evstkb1
evstky	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__18
l1__18:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],7
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [edx]
	mov	dword ptr [savea4],ebp
	add	edx,4
	jmp	near ptr evstck2
evstkh	label	near
	mov	ebx,8
	jmp	near ptr evstkb1
evstkt	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__19
l1__19:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],9
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [edx]
	mov	dword ptr [savea4],ebp
	add	edx,4
	add	edx,4
	mov	ebx,dword ptr [edx]
	add	edx,4
	jmp	near ptr evstkl2
evstkk	label	near
	mov	ebx,10
	jmp	near ptr evstkb1
cstack	endp

llcline	proc	near
	mov	ebp,dword ptr [zllcline]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	cmp	dword ptr [itstate],0
	je	near ptr llclin2
	mov	ecx,offset FLAT:llclin1
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
llclin1	label	near
	mov	dword ptr [itstate],0
llclin2	label	near
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
	call	near ptr _cline
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	eax,dword ptr [zt]
	ret
llcline	endp

llgetenv	proc	near
	mov	ebp,dword ptr [zllgetenv]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	ebp
	mov	ebp,dword ptr [bufat]
	mov	ebp,dword ptr [ebp]
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
	call	near ptr _getenvrn
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
	jne	near ptr gtenv8
	mov	eax,esi
	ret
gtenv8	label	near
	mov	ebx,dword ptr [bufat]
	jmp	near ptr tryatom
llgetenv	endp

llgetadr	proc	near
	mov	ebp,dword ptr [zllgetadr]
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
	call	near ptr _getgloba
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
	jmp	near ptr loc
llgetadr	endp

llcallx	proc	near
	dec	dx
	mov	eax,dword ptr [esp+edx*4]
	mov	ebx,dword ptr [zllcallx]
	call	near ptr vaga1
	mov	dword ptr [esp+edx*4],eax
	inc	dx
	push	edx
	call	near ptr ll_callg
	mov	eax,ebp
	lea	esp,dword ptr [esp+edx*4]
	ret
llcallx	endp

runt	proc	near
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _runtime
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
	ret
runt	endp

llsleep	proc	near
	or	eax,eax
	js	near ptr llsleep1
	cmp	dword ptr [bfloat],eax
	jbe	near ptr llsleep2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
llsleep1	label	near
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	shl	eax,1
	mov	_accusingle1,eax
	fld	dword ptr [_accusingle1]
	fstp	qword ptr [_accudouble1]
	push	dword ptr [_accudouble1+4]
	push	dword ptr [_accudouble1]
	call	near ptr _cdleep
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	ret
llsleep2	label	near
	mov	ebx,dword ptr [zllsleep]
	jmp	near ptr errnna
llsleep	endp

lldate	proc	near
	mov	eax,8
	mov	ebx,esi
	call	near ptr makevect
	mov	ebp,dword ptr [zlldate]
	mov	dword ptr [4+eax],ebp
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
	call	near ptr _cdate
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	ret
lldate	endp

clkalarm	proc	near
	or	eax,eax
	js	near ptr alrms1
	cmp	dword ptr [bfloat],eax
	jbe	near ptr alrmer2
	mov	dword ptr [_accusingle1],eax
	fild	word ptr [_accusingle1]
	fstp	dword ptr [_accusingle2]
	fwait
	mov	eax,dword ptr [_accusingle2]
	shr	eax,1
	or	eax,80000000h
alrms1	label	near
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	shl	eax,1
	mov	_accusingle1,eax
	fld	dword ptr [_accusingle1]
	fstp	qword ptr [_accudouble1]
	push	dword ptr [_accudouble1+4]
	push	dword ptr [_accudouble1]
	call	near ptr _setalarm
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	fstp	st(0)
	ret
alrmer2	label	near
	mov	ebx,dword ptr [zclkalarm]
	jmp	near ptr errnna
clkalarm	endp

withit	proc	near
	cmp	dword ptr [itstate],0
	jne	near ptr withit2
	mov	ecx,offset FLAT:withit1
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],0
	jmp	ecx
withit1	label	near
	mov	dword ptr [itstate],1
withit2	label	near
	jmp	near ptr evprogn
withit	endp

withnoit	proc	near
	cmp	dword ptr [itstate],0
	je	near ptr withno2
	mov	ecx,offset FLAT:withno1
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],1
	jmp	ecx
withno1	label	near
	mov	dword ptr [itstate],0
withno2	label	near
	jmp	near ptr evprogn
withnoit	endp

lltime	proc	near
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _runtime
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	fstp	dword ptr [_accusingle2]
	mov	ebx,dword ptr [_accusingle2]
	shr	ebx,1
	or	ebx,80000000h
	push	ebx
	call	near ptr evala1
	;; Prepare a C function call with 0 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	call	near ptr _runtime
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
	xchg	dword ptr [esp],eax
	push	eax
	mov	edx,2
	jmp	near ptr fldiff
lltime	endp

llshwstk	proc	near
	mov	edx,esp
	mov	ebx,dword ptr [bstack]
	mov	ecx,dword ptr [mstack]
llshwstk1	label	near
	cmp	ecx,esp
	ja	near ptr llshwstk2
	push	ebx
	jmp	near ptr llshwstk1
llshwstk2	label	near
	mov	esp,edx
	call	near ptr evala1
	mov	ecx,esp
	xor	eax,eax
	xor	ebx,ebx
llshwstk3	label	near
	add	esp,-4
	mov	edx,dword ptr [esp]
	cmp	dword ptr [bstack],edx
	je	near ptr llshwstk4
	inc	eax
	cmp	eax,1024
	jl	short mac847
	xor	eax,eax
	inc	ebx
mac847:
	jmp	near ptr llshwstk3
llshwstk4	label	near
	mov	esp,ecx
	or	bx,bx
	je	near ptr llshwstk5
	cmp	dword ptr [fcons],edi
	jb	near ptr l__20
l1__20:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
llshwstk5	label	near
	ret
llshwstk	endp

lerror	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__21
l1__21:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__22
l1__22:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__23
l1__23:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,ecx
	mov	eax,dword ptr [zsyserror]
	jmp	near ptr itsoft
serror	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__24
l1__24:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__25
l1__25:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__26
l1__26:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,eax
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	eax,dword ptr [zsyserror]
	jmp	near ptr itsoft
ferror	label	near
	push	eax
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac848
	cmp	ebx,esi
	jb	near ptr ferror1
lmac848:
	call	near ptr stringa1
	mov	ebx,eax
ferror1	label	near
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
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
	push	eax
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
	pop	eax
ferror2	label	near
	mov	eax,esi
	mov	ebx,dword ptr [zfatalerror]
	mov	ecx,esi
	mov	edx,esi
	jmp	near ptr findtag
lerror	endp

syserror	proc	near
	push	ecx
	push	ebx
	push	eax
	mov	eax,dword ptr [zmserror]
	call	near ptr probj
	pop	eax
	call	near ptr probj
	mov	eax,dword ptr [zcolon]
	call	near ptr probj
	pop	eax
	call	near ptr probj
	mov	eax,dword ptr [zcolon]
	call	near ptr probj
	pop	eax
	call	near ptr probjt
	jmp	near ptr reenter
syserror	endp

sysdebug	proc	near
	ret
errfs	label	near
	mov	eax,dword ptr [zerrfstk]
	cmp	dword ptr [mstack2],esp
	ja	near ptr ferror
	mov	ecx,offset FLAT:errfs0
	call	near ptr sysprot
	pop	eax
	mov	ebp,dword ptr [mstack1]
	mov	dword ptr [mstack],ebp
	jmp	ecx
errfs0	label	near
	mov	ebp,dword ptr [mstack2]
	mov	dword ptr [mstack],ebp
	mov	ecx,eax
	mov	ebx,dword ptr [zeval000]
	mov	eax,esi
	jmp	near ptr serror
errfsgc	label	near
	mov	eax,dword ptr [zerrfsgc]
	jmp	near ptr ferror
erres	label	near
	mov	eax,dword ptr [zerrfsud]
	mov	ebx,dword ptr [eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac849
	cmp	ebx,esi
	jb	near ptr erres2
lmac849:
	call	near ptr stringa1
	mov	ebx,eax
erres2	label	near
	mov	ebp,dword ptr [ebx]
	mov	eax,dword ptr [4+ebp]
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
	push	eax
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
	jmp	near ptr reenter
errfsp	label	near
	mov	eax,dword ptr [zerrfpgc]
	jmp	near ptr ferror
errato	label	near
	mov	eax,dword ptr [zerrfsym]
	jmp	near ptr ferror
errfm	label	near
	mov	eax,dword ptr [zerrfcns]
	jmp	near ptr ferror
errff	label	near
	mov	eax,dword ptr [zerrfflt]
	jmp	near ptr ferror
errfn	label	near
	mov	eax,dword ptr [zerrffix]
	jmp	near ptr ferror
errfh	label	near
	mov	eax,dword ptr [zerrfhep]
	jmp	near ptr ferror
errfr	label	near
	mov	eax,dword ptr [zerrfstr]
	jmp	near ptr ferror
errfv	label	near
	mov	eax,dword ptr [zerrfvec]
	jmp	near ptr ferror
errudv	label	near
	mov	ecx,dword ptr [zerrudv]
	jmp	near ptr serror
errudf	label	near
	mov	ecx,dword ptr [zerrudf]
	jmp	near ptr serror
errudm	label	near
	mov	ecx,dword ptr [zerrudm]
	jmp	near ptr serror
errudt	label	near
	mov	ecx,dword ptr [zerrudt]
	jmp	near ptr serror
errbdf	label	near
	mov	ecx,dword ptr [zerrbdf]
	jmp	near ptr serror
errwna	label	near
	mov	ecx,dword ptr [zerrwna]
	jmp	near ptr serror
errbpa	label	near
	mov	ecx,dword ptr [zerrbpa]
	jmp	near ptr serror
errbal	label	near
	mov	ecx,dword ptr [zerrbal]
	jmp	near ptr serror
errilb	label	near
	mov	ecx,dword ptr [zerrilb]
	jmp	near ptr serror
errsxt	label	near
	mov	ecx,dword ptr [zerrsxt]
	jmp	near ptr serror
errios	label	near
	mov	ecx,dword ptr [zerrios]
	jmp	near ptr serror
err0dv	label	near
	mov	ecx,dword ptr [zerr0dv]
	jmp	near ptr serror
errnaa	label	near
	mov	ecx,dword ptr [zerrnaa]
	jmp	near ptr serror
errnna	label	near
	mov	ecx,dword ptr [zerrnna]
	jmp	near ptr serror
errnia	label	near
	mov	ecx,dword ptr [zerrnia]
	jmp	near ptr serror
errnfa	label	near
	mov	ecx,dword ptr [zerrnfa]
	jmp	near ptr serror
errnsa	label	near
	mov	ecx,dword ptr [zerrnsa]
	jmp	near ptr serror
errnla	label	near
	mov	ecx,dword ptr [zerrnla]
	jmp	near ptr serror
errnva	label	near
	mov	ecx,dword ptr [zerrnva]
	jmp	near ptr serror
errstl	label	near
	mov	ecx,dword ptr [zerrstl]
	jmp	near ptr serror
erroob	label	near
	mov	ecx,dword ptr [zerroob]
	jmp	near ptr serror
errvec	label	near
	mov	ecx,dword ptr [zerrvec]
	jmp	near ptr serror
errnda	label	near
	mov	ecx,dword ptr [zerrnda]
	jmp	near ptr serror
errstc	label	near
	mov	ecx,dword ptr [zerrstc]
	jmp	near ptr serror
errsym	label	near
	mov	ecx,dword ptr [zerrsym]
	jmp	near ptr serror
errgen	label	near
	mov	ecx,dword ptr [zerrgen]
	jmp	near ptr serror
errnab	label	near
	mov	ecx,dword ptr [zerrnab]
	jmp	near ptr serror
errxia	label	near
	mov	ecx,dword ptr [zerrxia]
	jmp	near ptr serror
llmerro	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	call	near ptr llsystem
	cmp	dword ptr [fcons],edi
	jb	near ptr l__27
l1__27:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__28
l1__28:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zerrmac]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__29
l1__29:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	mov	eax,dword ptr [zsyserror]
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
llbreak	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	eax,dword ptr [zuserit]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
llpanic	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__30
l1__30:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__31
l1__31:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zbreak]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__32
l1__32:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zbreak]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	mov	eax,dword ptr [zsyserror]
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
llmouse	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	ebx,esi
	mov	eax,dword ptr [zmouse]
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
llclock	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	eax,dword ptr [zlltclock]
	mov	ebx,esi
	call	near ptr itsoft
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	ret
sysdebug	endp

userit	proc	near
	cmp	dword ptr [itstate],1
	je	near ptr userit2
	mov	ecx,offset FLAT:userit1
	call	near ptr sysprot
	pop	eax
	mov	dword ptr [itstate],0
	jmp	ecx
userit1	label	near
	mov	dword ptr [itstate],1
userit2	label	near
	mov	ebx,esi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__33
l1__33:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__34
l1__34:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zbreak]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__35
l1__35:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zbreak]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	mov	eax,dword ptr [zsyserror]
	jmp	near ptr itsoft
userit	endp

mouse	proc	near
	mov	eax,esi
	ret
mouse	endp

lltclock	proc	near
	mov	eax,esi
	ret
getsetn	label	near
	or	dx,dx
	je	near ptr getsetn1
	cmp	dx,1
	je	near ptr getsetn2
	mov	eax,1
	jmp	near ptr errwna
getsetn1	label	near
	pop	edx
	mov	eax,ecx
	add	esp,8
	jmp	edx
getsetn2	label	near
	pop	edx
	pop	ecx
	mov	eax,dword ptr [esp+4]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr errnia
	cmp	ax,cx
	jg	near ptr erroob
	pop	ecx
	cmp	ax,cx
	jl	near ptr erroob
	pop	eax
	jmp	edx
l__35:
	call	near ptr gccons
	jmp	near ptr l1__35
l__34:
	call	near ptr gccons
	jmp	near ptr l1__34
l__33:
	call	near ptr gccons
	jmp	near ptr l1__33
l__32:
	call	near ptr gccons
	jmp	near ptr l1__32
l__31:
	call	near ptr gccons
	jmp	near ptr l1__31
l__30:
	call	near ptr gccons
	jmp	near ptr l1__30
l__29:
	call	near ptr gccons
	jmp	near ptr l1__29
l__28:
	call	near ptr gccons
	jmp	near ptr l1__28
l__27:
	call	near ptr gccons
	jmp	near ptr l1__27
l__26:
	call	near ptr gccons
	jmp	near ptr l1__26
l__25:
	call	near ptr gccons
	jmp	near ptr l1__25
l__24:
	call	near ptr gccons
	jmp	near ptr l1__24
l__23:
	call	near ptr gccons
	jmp	near ptr l1__23
l__22:
	call	near ptr gccons
	jmp	near ptr l1__22
l__21:
	call	near ptr gccons
	jmp	near ptr l1__21
l__20:
	call	near ptr gccons
	jmp	near ptr l1__20
l__19:
	call	near ptr gccons
	jmp	near ptr l1__19
l__18:
	call	near ptr gccons
	jmp	near ptr l1__18
l__17:
	call	near ptr gccons
	jmp	near ptr l1__17
l__16:
	call	near ptr gccons
	jmp	near ptr l1__16
l__15:
	call	near ptr gccons
	jmp	near ptr l1__15
l__14:
	call	near ptr gccons
	jmp	near ptr l1__14
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
l__4:
	call	near ptr gccons
	jmp	near ptr l1__4
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
lltclock	endp
_TEXT	ends
	end
