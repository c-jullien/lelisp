	.386p
	.387

	include	fspecs.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	fspecs.equ
ini_spec	proc	near
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1073
	mov	ecx,offset FLAT:schedule
	mov	edx,offset FLAT:zschedule
	push	z_schedule
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1074
	mov	ecx,offset FLAT:suspend
	mov	edx,offset FLAT:zsuspend
	push	z_suspend
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1075
	mov	ecx,offset FLAT:resume
	mov	edx,offset FLAT:zresume
	push	z_resume
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1076
	mov	ecx,offset FLAT:tagbody
	mov	edx,offset FLAT:ztagbody
	push	z_tagbody
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac1077
	mov	ecx,offset FLAT:go
	mov	edx,offset FLAT:zgo
	push	z_go
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1078
	mov	ecx,offset FLAT:block
	mov	edx,offset FLAT:zblock
	push	z_block
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1079
	mov	ecx,offset FLAT:llret
	mov	edx,offset FLAT:zllret
	push	z_llret
	call	near ptr inisymb
	mov	eax,11
	mov	ebx,offset FLAT:pnmac1080
	mov	ecx,offset FLAT:llretf
	mov	edx,offset FLAT:zllretf
	push	z_llretf
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1081
	mov	ecx,offset FLAT:zkllcp
	call	near ptr inicst
	mov	ebp,dword ptr [zkllcp]
	mov	dword ptr [cpkgc],ebp
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1082
	mov	ecx,offset FLAT:cbind0
	mov	edx,offset FLAT:zcbind0
	push	z_cbind0
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1083
	mov	ecx,offset FLAT:cbind1
	mov	edx,offset FLAT:zcbind1
	push	z_cbind1
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1084
	mov	ecx,offset FLAT:cbind2
	mov	edx,offset FLAT:zcbind2
	push	z_cbind2
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1085
	mov	ecx,offset FLAT:cbind3
	mov	edx,offset FLAT:zcbind3
	push	z_cbind3
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1086
	mov	ecx,offset FLAT:cbindn
	mov	edx,offset FLAT:zcbindn
	push	z_cbindn
	call	near ptr inisymb
	mov	eax,offset FLAT:unbind1
	call	near ptr loc
	mov	ebx,dword ptr [zcbindn]
	mov	dword ptr [ebx],eax
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1087
	mov	ecx,offset FLAT:cbindl
	mov	edx,offset FLAT:zcbindl
	push	z_cbindl
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1088
	mov	ecx,offset FLAT:cbinds
	mov	edx,offset FLAT:zcbinds
	push	z_cbinds
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1089
	mov	ecx,offset FLAT:cexit
	mov	edx,offset FLAT:zcexit
	push	z_cexit
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1090
	mov	ecx,offset FLAT:ctag
	mov	edx,offset FLAT:zctag
	push	z_ctag
	call	near ptr inisymb
	mov	eax,offset FLAT:unbind3
	call	near ptr loc
	mov	ebx,dword ptr [zctag]
	mov	dword ptr [ebx],eax
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1091
	mov	ecx,offset FLAT:cprot
	mov	edx,offset FLAT:zcprot
	push	z_cprot
	call	near ptr inisymb
	mov	eax,offset FLAT:unbind7
	call	near ptr loc
	mov	ebx,dword ptr [zcprot]
	mov	dword ptr [ebx],eax
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1092
	mov	ecx,offset FLAT:cmplock
	mov	edx,offset FLAT:zcmplock
	push	z_cmplock
	call	near ptr inisymb
	mov	eax,offset FLAT:unbind5
	call	near ptr loc
	mov	ebx,dword ptr [zcmplock]
	mov	dword ptr [ebx],eax
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1093
	mov	ecx,offset FLAT:csched
	mov	edx,offset FLAT:zcsched
	push	z_csched
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1094
	mov	ecx,offset FLAT:cblock
	mov	edx,offset FLAT:zcblock
	push	z_cblock
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1095
	mov	ecx,offset FLAT:cretfr
	mov	edx,offset FLAT:zcretfr
	push	z_cretfr
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac1096
	mov	ecx,offset FLAT:cgo
	mov	edx,offset FLAT:zcgo
	push	z_cgo
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1097
	mov	ecx,offset FLAT:ctagbody
	mov	edx,offset FLAT:zctagbody
	push	z_ctagbody
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1098
	mov	ecx,offset FLAT:cffuncall
	mov	edx,offset FLAT:zcffuncall
	push	z_cffuncall
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac1099
	mov	ecx,offset FLAT:cwithit
	mov	edx,offset FLAT:zcwithit
	push	z_cwithit
	call	near ptr inisymb
	mov	eax,18
	mov	ebx,offset FLAT:pnmac1100
	mov	ecx,offset FLAT:cwithnoit
	mov	edx,offset FLAT:zcwithnoit
	push	z_cwithnoit
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1101
	mov	ecx,offset FLAT:llcpnlist
	mov	edx,offset FLAT:zllcpnlist
	push	z_llcpnlist
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1102
	mov	ecx,offset FLAT:llcperwna
	mov	edx,offset FLAT:zllcperwna
	push	z_llcperwna
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1103
	mov	ecx,offset FLAT:zddlink
	call	near ptr inicst
	mov	eax,offset FLAT:dlink
	call	near ptr loc
	mov	ebx,dword ptr [zddlink]
	mov	dword ptr [ebx],eax
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1104
	mov	ecx,offset FLAT:zdllink
	call	near ptr inicst
	mov	eax,offset FLAT:llink
	call	near ptr loc
	mov	ebx,dword ptr [zdllink]
	mov	dword ptr [ebx],eax
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1105
	mov	ecx,offset FLAT:zditcnt
	call	near ptr inicst
	mov	eax,offset FLAT:itcount
	call	near ptr loc
	mov	ebx,dword ptr [zditcnt]
	mov	dword ptr [ebx],eax
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [cpkgc],ebp
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1106
	mov	ecx,offset FLAT:znvar
	call	near ptr inicst
	mov	ebx,eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__1
l1__1:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	ebp,dword ptr [zundef]
	mov	dword ptr [eax],ebp
	mov	dword ptr [16+eax],ebx
	mov	dword ptr [cpkgc],esi
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1107
	mov	ecx,offset FLAT:fibd
	mov	edx,offset FLAT:zfibd
	push	z_fibd
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1108
	mov	ecx,offset FLAT:fibl
	mov	edx,offset FLAT:zfibl
	push	z_fibl
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1109
	mov	ecx,offset FLAT:fibml
	mov	edx,offset FLAT:zfibml
	push	z_fibml
	call	near ptr inisymb
	ret
ini_spec	endp

schedule	proc	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	push	dword ptr [eax]
	push	dword ptr [dlink]
	push	offset FLAT:unbind8
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [zschedule]
	mov	dword ptr [errname],ebp
	jmp	near ptr evexpg
schedule	endp

suspend	proc	near
	mov	ebp,dword ptr [itstate]
	mov	dword ptr [savits],ebp
	mov	dword ptr [itstate],0
	mov	eax,esi
	jmp	near ptr sus00
sus000	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
sus00	label	near
	mov	ecx,dword ptr [dlink]
	mov	ebx,esi
	jmp	near ptr sus02
sus01	label	near
	pop	edx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
sus02	label	near
	mov	edx,esp
	cmp	edx,ecx
	jne	near ptr sus01
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	ebx,esi
	pop	edx
	pop	dword ptr [dlink]
	cmp	edx,offset FLAT:unbind0
	je	near ptr susb0
	cmp	edx,offset FLAT:unbind1
	je	near ptr susb1
	cmp	edx,offset FLAT:unbind2
	je	near ptr susb2
	cmp	edx,offset FLAT:unbind3
	je	near ptr susb3
	cmp	edx,offset FLAT:unbind4
	je	near ptr susb4
	cmp	edx,offset FLAT:unbind5
	je	near ptr susb5
	cmp	edx,offset FLAT:unbind6
	je	near ptr susb6
	cmp	edx,offset FLAT:unbind7
	je	near ptr susb7
	cmp	edx,offset FLAT:unbind8
	je	near ptr susb8
	cmp	edx,offset FLAT:unbind9
	je	near ptr susb9
	cmp	edx,offset FLAT:unbind10
	je	near ptr susb10
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__6
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
susb0	label	near
	jmp	near ptr erres
susb1	label	near
	mov	ebx,dword ptr [esp+4*2]
	call	near ptr sus100
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	mov	dword ptr [savea1],eax
	mov	edx,dword ptr [esp+4*3]
	add	dx,4
	xor	ecx,ecx
	mov	ebx,esi
susb11	label	near
	mov	eax,dword ptr [esp+ecx*4]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	inc	cx
susb12	label	near
	dec	dx
	jg	near ptr susb11
	mov	eax,dword ptr [savea1]
	mov	ecx,offset FLAT:susb13
	push	dword ptr [dlink]
	jmp	near ptr unbinp1
susb13	label	near
	mov	edx,offset FLAT:unbind1
	jmp	near ptr sus000
sus100	label	near
	cmp	ebx,edi
	jb	near ptr sus101
	push	dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	call	near ptr sus100
	xchg	dword ptr [esp],ebx
	call	near ptr sus100
	pop	ecx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,ecx
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	ret
sus101	label	near
	cmp	ebx,esi
	je	near ptr sus102
	mov	ebx,dword ptr [ebx]
sus102	label	near
	ret
susb2	label	near
	pop	ecx
	or	ecx,ecx
	je	near ptr sus23
	movzx	edx,word ptr [24+ecx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	pop	edx
	mov	word ptr [24+ecx],dx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [8+ecx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	pop	dword ptr [8+ecx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr susb2
sus23	label	near
	mov	edx,offset FLAT:unbind2
	jmp	near ptr sus000
susb3	label	near
susb5	label	near
susb6	label	near
susb7	label	near
susb9	label	near
susb10	label	near
	pop	ebx
	jmp	near ptr sus000
susb4	label	near
	pop	ecx
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr sus000
susb8	label	near
	mov	ecx,dword ptr [esp]
	push	dword ptr [dlink]
	push	offset FLAT:unbind8
	mov	dword ptr [dlink],esp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__14
l1__14:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	mov	ebx,eax
	mov	eax,ecx
	mov	ebp,dword ptr [savits]
	mov	dword ptr [itstate],ebp
	jmp	near ptr apply
suspend	endp

resume	proc	near
	mov	ebp,dword ptr [itstate]
	mov	dword ptr [savits],ebp
	mov	dword ptr [itstate],0
	cmp	eax,esi
	je	near ptr resso
restes	label	near
	mov	esp,dword ptr [dlink]
	mov	ecx,dword ptr [esp]
	cmp	ecx,offset FLAT:unbind8
	je	near ptr resfin
	mov	ecx,offset FLAT:restes
	jmp	near ptr unbinp
res00	label	near
	mov	ebx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	mov	ecx,dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	cmp	ecx,offset FLAT:unbind2
	je	near ptr res20
	cmp	ecx,offset FLAT:unbind4
	je	near ptr res40
	cmp	ecx,offset FLAT:unbind1
	jne	near ptr resn1
res11	label	near
	cmp	ebx,esi
	je	near ptr res12
	push	dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr res11
res12	label	near
	mov	ebp,dword ptr [esp]
	mov	dword ptr [llink],ebp
	mov	ebx,dword ptr [eax]
	push	dword ptr [4+eax]
	mov	eax,dword ptr [esp+4*3]
	call	near ptr deset
	pop	eax
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	jmp	near ptr resfin
res20	label	near
	push	0
res21	label	near
	cmp	ebx,esi
	je	near ptr res22
	mov	ecx,dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	push	dword ptr [8+ecx]
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [8+ecx],ebp
	mov	ebx,dword ptr [4+ebx]
	movzx	edx,word ptr [24+ecx]
	push	edx
	mov	edx,dword ptr [ebx]
	mov	word ptr [24+ecx],dx
	mov	ebx,dword ptr [4+ebx]
	push	ecx
	jmp	near ptr res21
res22	label	near
	push	dword ptr [dlink]
	push	offset FLAT:unbind2
	mov	dword ptr [dlink],esp
	jmp	near ptr resfin
res40	label	near
	push	dword ptr [4+ebx]
	mov	ebx,dword ptr [ebx]
resn1	label	near
	push	ebx
	push	dword ptr [dlink]
	push	ecx
	mov	dword ptr [dlink],esp
resfin	label	near
	mov	ebx,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
res14	label	near
	cmp	ebx,esi
	je	near ptr res15
	push	dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr res14
res15	label	near
	cmp	dword ptr [4+eax],esi
	jne	near ptr res00
resso	label	near
	mov	ebx,esi
	mov	ecx,esi
	mov	edx,esi
	mov	ebp,dword ptr [savits]
	mov	dword ptr [itstate],ebp
	ret
resume	endp

tagbody	proc	near
	cmp	eax,edi
	jb	near ptr tagbdr
	mov	ecx,eax
	xor	edx,edx
tagbdr2	label	near
	mov	ebx,dword ptr [ecx]
	mov	ecx,dword ptr [4+ecx]
	cmp	ebx,edi
	jae	near ptr tagbdr3
	push	ecx
	push	ebx
	inc	dx
tagbdr3	label	near
	cmp	ecx,edi
	jae	near ptr tagbdr2
	push	edx
	xor	ebx,ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__15
l1__15:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	ebx
	push	dword ptr [dlink]
	push	offset FLAT:unbind9
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [dlink]
	mov	dword ptr [4+ebx],ebp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__16
l1__16:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	mov	ebp,dword ptr [llink]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [llink],ebp
	xchg	dword ptr [fcons],edi
	mov	ebx,eax
	jmp	near ptr tagbd4
tagbd2	label	near
	mov	eax,dword ptr [ebx]
	cmp	eax,edi
	jb	near ptr tagbd3
	push	ebx
	call	near ptr evala1
	pop	ebx
tagbd3	label	near
	mov	ebx,dword ptr [4+ebx]
tagbd4	label	near
	cmp	ebx,edi
	jae	near ptr tagbd2
tagbdr	label	near
	mov	eax,esi
	ret
tagbody	endp

go	proc	near
	mov	eax,dword ptr [eax]
llgof1	label	near
	mov	edx,dword ptr [llink]
	jmp	near ptr llgof6
llgof2	label	near
	mov	ecx,dword ptr [edx]
	cmp	dword ptr [ecx],0
	jne	near ptr llgof5
	mov	ebx,dword ptr [4+ecx]
	cmp	ebx,esi
	je	near ptr llgof5
	push	edx
	push	ebx
	add	ebx,12
	mov	edx,dword ptr [ebx]
	add	ebx,4
	jmp	near ptr llgof4
llgof3	label	near
	mov	ecx,dword ptr [ebx]
	cmp	ecx,eax
	je	near ptr llgof7
	add	ebx,8
llgof4	label	near
	dec	dx
	jge	near ptr llgof3
	add	esp,4
	pop	edx
llgof5	label	near
	mov	edx,dword ptr [4+edx]
llgof6	label	near
	cmp	edx,edi
	jae	near ptr llgof2
	mov	ebx,dword ptr [zgo]
	jmp	near ptr errnab
llgof7	label	near
	add	ebx,4
	mov	ebx,dword ptr [ebx]
	mov	eax,dword ptr [esp]
llgof8	label	near
	mov	edx,dword ptr [dlink]
	mov	esp,edx
	cmp	edx,eax
	je	near ptr llgof9
	mov	ecx,offset FLAT:llgof8
	jmp	near ptr unbinp
llgof9	label	near
	cmp	dword ptr [bfloat],ebx
	ja	short lmac1110
	cmp	dword ptr [econs],ebx
	ja	near ptr tagbd4
lmac1110:
	jmp	ebx
go	endp

block	proc	near
	mov	ebx,dword ptr [eax]
	cmp	ebx,esi
	jb	near ptr blckerr
	cmp	ebx,edi
	jae	near ptr blckerr
	cmp	dword ptr [fcons],edi
	jb	near ptr l__17
l1__17:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	ecx,ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__18
l1__18:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],1
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	push	ecx
	push	dword ptr [dlink]
	push	offset FLAT:unbind10
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [dlink]
	mov	dword ptr [4+ecx],ebp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__19
l1__19:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	mov	ebp,dword ptr [llink]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [llink],ebp
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zblock]
	mov	dword ptr [errname],ebp
	jmp	near ptr evexpg
blckerr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zblock]
	jmp	near ptr errsym
block	endp

llret	proc	near
	mov	ebx,esi
	push	ebx
	mov	ebp,dword ptr [zllret]
	mov	dword ptr [errname],ebp
	jmp	near ptr llretf1
llret	endp

llretf	proc	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [zllretf]
	mov	dword ptr [errname],ebp
llretf1	label	near
	call	near ptr evprogn
	pop	ebx
llretg	label	near
	mov	edx,dword ptr [llink]
	jmp	near ptr llretf4
llretf2	label	near
	mov	ecx,dword ptr [edx]
	cmp	dword ptr [ecx],1
	jne	near ptr llretf3
	mov	ecx,dword ptr [4+ecx]
	cmp	dword ptr [ecx],ebx
	je	near ptr llretf6
llretf3	label	near
	mov	edx,dword ptr [4+edx]
llretf4	label	near
	cmp	edx,edi
	jae	near ptr llretf2
	mov	eax,ebx
	mov	ebx,dword ptr [zllretf]
	jmp	near ptr errnab
llretf6	label	near
	cmp	dword ptr [4+ecx],esi
	jne	near ptr llretr2
	mov	eax,ebx
	mov	ebx,dword ptr [zllretf]
	jmp	near ptr errxia
llretr2	label	near
	mov	ebx,dword ptr [4+ecx]
llretr3	label	near
	mov	edx,dword ptr [dlink]
	mov	esp,edx
	mov	ecx,dword ptr [esp]
	cmp	ecx,offset FLAT:unbind10
	jne	near ptr llretr4
	cmp	ebx,edx
	je	near ptr llretr9
llretr4	label	near
	mov	ecx,offset FLAT:llretr3
	jmp	near ptr unbinp
llretr9	label	near
	ret
llretf	endp

cbind0	proc	near
	dec	_itloop
	jz	near ptr l___20
l1___20:
	cmp	word ptr [itcount],0
	je 	short l__20
	cmp	word ptr [itstate],0 
	je 	short l__20
	call	near ptr ithard
l__20:
	cmp	dword ptr [esp+4],offset FLAT:unbind1
	jne	near ptr cbind0g
	cmp	dword ptr [esp+4*4],edx
	jne	near ptr cbind0g
	mov	dword ptr [llink],esi
	ret
cbind0g	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	pop	ebx
	push	0
	push	esi
	push	edx
	push	dword ptr [llink]
	mov	dword ptr [llink],esi
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	jmp	ebx
cbind0	endp

cbind1	proc	near
	dec	_itloop
	jz	near ptr l___21
l1___21:
	cmp	word ptr [itcount],0
	je 	short l__21
	cmp	word ptr [itstate],0 
	je 	short l__21
	call	near ptr ithard
l__21:
	cmp	dword ptr [esp+4],offset FLAT:unbind1
	jne	near ptr cbind1g
	cmp	dword ptr [esp+4*4],edx
	jne	near ptr cbind1g
	mov	ebx,dword ptr [ecx]
	mov	dword ptr [ebx],eax
	mov	dword ptr [llink],esi
	ret
cbind1g	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	ebx,dword ptr [esp]
	push	1
	push	ecx
	push	edx
	mov	edx,dword ptr [ecx]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [esp+4*3],ebp
	mov	dword ptr [edx],eax
	push	dword ptr [llink]
	mov	dword ptr [llink],esi
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	jmp	ebx
cbind1	endp

cbind2	proc	near
	dec	_itloop
	jz	near ptr l___22
l1___22:
	cmp	word ptr [itcount],0
	je 	short l__22
	cmp	word ptr [itstate],0 
	je 	short l__22
	call	near ptr ithard
l__22:
	cmp	dword ptr [esp+4],offset FLAT:unbind1
	jne	near ptr cbind2g
	cmp	dword ptr [esp+4*4],edx
	jne	near ptr cbind2g
	mov	edx,dword ptr [ecx]
	mov	dword ptr [edx],eax
	mov	edx,dword ptr [4+ecx]
	mov	ecx,dword ptr [edx]
	mov	dword ptr [ecx],ebx
	mov	dword ptr [llink],esi
	ret
cbind2g	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	ebp,dword ptr [esp]
	mov	dword ptr [savea2],ebp
	add	esp,-4
	push	2
	push	ecx
	push	edx
	mov	edx,dword ptr [ecx]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [esp+4*4],ebp
	mov	dword ptr [edx],eax
	mov	edx,dword ptr [4+ecx]
	mov	edx,dword ptr [edx]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [esp+4*3],ebp
	mov	dword ptr [edx],ebx
	push	dword ptr [llink]
	mov	dword ptr [llink],esi
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	jmp	dword ptr [savea2]
cbind2	endp

cbind3	proc	near
	dec	_itloop
	jz	near ptr l___23
l1___23:
	cmp	word ptr [itcount],0
	je 	short l__23
	cmp	word ptr [itstate],0 
	je 	short l__23
	call	near ptr ithard
l__23:
	mov	dword ptr [savea3],ecx
	pop	dword ptr [savea2]
	pop	dword ptr [savea4]
	cmp	dword ptr [esp],offset FLAT:unbind1
	jne	near ptr cbind3g
	mov	ebp,dword ptr [savea4]
	cmp	dword ptr [esp+4*3],ebp
	jne	near ptr cbind3g
	mov	ecx,dword ptr [edx]
	mov	dword ptr [ecx],eax
	mov	edx,dword ptr [4+edx]
	mov	ecx,dword ptr [edx]
	mov	dword ptr [ecx],ebx
	mov	edx,dword ptr [4+edx]
	mov	edx,dword ptr [edx]
	mov	ecx,dword ptr [savea3]
	mov	dword ptr [edx],ecx
	mov	dword ptr [llink],esi
	jmp	dword ptr [savea2]
cbind3g	label	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	add	esp,-12
	mov	dword ptr [savea1],edx
	mov	ecx,dword ptr [edx]
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [esp+4*2],ebp
	mov	dword ptr [ecx],eax
	mov	edx,dword ptr [4+edx]
	mov	ecx,dword ptr [edx]
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [esp+4],ebp
	mov	dword ptr [ecx],ebx
	mov	edx,dword ptr [4+edx]
	mov	edx,dword ptr [edx]
	mov	ebp,dword ptr [edx]
	mov	dword ptr [esp],ebp
	mov	ecx,dword ptr [savea3]
	mov	dword ptr [edx],ecx
	push	3
	push	dword ptr [savea1]
	push	dword ptr [savea4]
	push	dword ptr [llink]
	mov	dword ptr [llink],esi
	push	dword ptr [dlink]
	push	offset FLAT:unbind1
	mov	dword ptr [dlink],esp
	jmp	dword ptr [savea2]
cbind3	endp

cbindn	proc	near
	dec	_itloop
	jz	near ptr l___24
l1___24:
	cmp	word ptr [itcount],0
	je 	short l__24
	cmp	word ptr [itstate],0 
	je 	short l__24
	call	near ptr ithard
l__24:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	dword ptr [intllink],esi
cbindnc	label	near
	pop	dword ptr [intret]
cbindnn	label	near
	mov	dword ptr [savea2],ecx
	mov	dword ptr [savea4],edx
	mov	dword ptr [savea1],ebx
	mov	dword ptr [errname],ebx
	jmp	near ptr evbndext
cbindn	endp

cbindl	proc	near
	dec	_itloop
	jz	near ptr l___25
l1___25:
	cmp	word ptr [itcount],0
	je 	short l__25
	cmp	word ptr [itstate],0 
	je 	short l__25
	call	near ptr ithard
l__25:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	mov	ebp,dword ptr [llink]
	mov	dword ptr [intllink],ebp
	jmp	near ptr cbindnc
cbindl	endp

cbinds	proc	near
	dec	_itloop
	jz	near ptr l___26
l1___26:
	cmp	word ptr [itcount],0
	je 	short l__26
	cmp	word ptr [itstate],0 
	je 	short l__26
	call	near ptr ithard
l__26:
	pop	dword ptr [intret]
	mov	dword ptr [intllink],esi
	mov	dword ptr [savea2],ecx
	mov	dword ptr [savea1],ebx
	mov	dword ptr [errname],ebx
	jmp	near ptr bndtrbex
cbinds	endp

ctag	proc	near
	pop	ebx
	push	eax
	push	dword ptr [dlink]
	push	offset FLAT:unbind3
	mov	dword ptr [dlink],esp
	jmp	ebx
ctag	endp

cprot	proc	near
	jmp	near ptr sysprot
cprot	endp

cmplock	proc	near
	pop	ebx
	push	eax
	push	dword ptr [dlink]
	push	offset FLAT:unbind5
	mov	dword ptr [dlink],esp
	jmp	ebx
cmplock	endp

csched	proc	near
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	pop	ebx
	push	eax
	push	dword ptr [dlink]
	push	offset FLAT:unbind8
	mov	dword ptr [dlink],esp
	jmp	ebx
csched	endp

cblock	proc	near
	mov	ebx,eax
	pop	eax
	cmp	ebx,esi
	jb	near ptr blckerr
	cmp	ebx,edi
	jae	near ptr blckerr
	cmp	dword ptr [fcons],edi
	jb	near ptr l__27
l1__27:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	ecx,ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__28
l1__28:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],1
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	push	ecx
	push	dword ptr [dlink]
	push	offset FLAT:unbind10
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [dlink]
	mov	dword ptr [4+ecx],ebp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__29
l1__29:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	mov	ebp,dword ptr [llink]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [llink],ebp
	xchg	dword ptr [fcons],edi
	jmp	eax
cblock	endp

cexit	proc	near
	jmp	near ptr findtag
cexit	endp

cretfr	proc	near
	jmp	near ptr llretg
cretfr	endp

cgo	proc	near
	jmp	near ptr llgof1
cgo	endp

ctagbody	proc	near
	pop	eax
	xor	ebx,ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__30
l1__30:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	push	ebx
	push	dword ptr [dlink]
	push	offset FLAT:unbind9
	mov	dword ptr [dlink],esp
	mov	ebp,dword ptr [dlink]
	mov	dword ptr [4+ebx],ebp
	cmp	dword ptr [fcons],edi
	jb	near ptr l__31
l1__31:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	mov	ebp,dword ptr [llink]
	xchg	[4+edi],ebp
	xchg	edi,ebp
	mov	dword ptr [llink],ebp
	xchg	dword ptr [fcons],edi
	jmp	eax
ctagbody	endp

cffuncall	proc	near
	jmp	near ptr ffuncall
cffuncall	endp

cwithit	proc	near
	pop	eax
	push	dword ptr [itstate]
	mov	ecx,offset FLAT:cwithit1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [itstate]
	jmp	ecx
cwithit1	label	near
	mov	dword ptr [itstate],1
	jmp	eax
cwithit	endp

cwithnoit	proc	near
	pop	eax
	push	dword ptr [itstate]
	mov	ecx,offset FLAT:cwithno1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [itstate]
	jmp	ecx
cwithno1	label	near
	mov	dword ptr [itstate],0
	jmp	eax
cwithnoit	endp

llcpnlist	proc	near
	mov	eax,esi
	or	edx,edx
	jne	near ptr llcpnl1
	ret
llcpnl1	label	near
	pop	ecx
	jmp	near ptr llcpnl3
llcpnl2	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__32
l1__32:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
llcpnl3	label	near
	dec	dx
	jge	near ptr llcpnl2
	jmp	ecx
llcpnlist	endp

llcperwna	proc	near
	mov	ecx,eax
	mov	eax,ebx
	mov	ebx,ecx
	jmp	near ptr errwna
llcperwna	endp

fibd	proc	near
	mov	ecx,dword ptr [znvar]
	mov	ecx,dword ptr [16+ecx]
	mov	edx,dword ptr [zfibd]
	call	near ptr cbind1
	cmp	ax,1
	jne	near ptr fibd2
	mov	eax,1
	ret
fibd2	label	near
	cmp	ax,2
	jne	near ptr fibd3
	mov	eax,1
	ret
fibd3	label	near
	dec	ax
	call	near ptr fibd
	push	eax
	mov	eax,dword ptr [znvar]
	mov	eax,dword ptr [eax]
	sub	ax,2
	call	near ptr fibd
	pop	ebx
	add	ax,bx
	ret
fibd	endp

fibl	proc	near
	push	eax
	cmp	ax,1
	jne	near ptr fibl2
	mov	eax,1
	jmp	near ptr fibl9
fibl2	label	near
	cmp	ax,2
	jne	near ptr fibl3
	mov	eax,1
	jmp	near ptr fibl9
fibl3	label	near
	dec	ax
	call	near ptr fibl
	push	eax
	mov	eax,dword ptr [esp+4]
	sub	ax,2
	call	near ptr fibl
	pop	ebx
	add	ax,bx
fibl9	label	near
	add	esp,4
	ret
fibl	endp

fibml	proc	near
	cmp	ax,2
	jle	near ptr fibmlr
	push	eax
	dec	ax
	call	near ptr fibml
	xchg	dword ptr [esp],eax
	sub	ax,2
	call	near ptr fibml
	pop	ebx
	add	ax,bx
	ret
fibmlr	label	near
	mov	eax,1
	ret
l___26:
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
	jmp	near ptr l1___26
l___25:
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
	jmp	near ptr l1___25
l___24:
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
	jmp	near ptr l1___24
l___23:
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
	jmp	near ptr l1___23
l___22:
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
	jmp	near ptr l1___22
l___21:
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
	jmp	near ptr l1___21
l___20:
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
	jmp	near ptr l1___20
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
l__5:
	call	near ptr gccons
	jmp	near ptr l1__5
l__4:
	call	near ptr gccons
	jmp	near ptr l1__4
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
l__1:
	call	near ptr gccons
	jmp	near ptr l1__1
fibml	endp
_TEXT	ends
	end
