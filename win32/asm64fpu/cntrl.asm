	.386p
	.387

	include	cntrl.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	cntrl.equ
ini_ctl	proc	near
	mov	eax,16
	mov	ebx,offset FLAT:pnmac894
	mov	ecx,offset FLAT:zlff
	call	near ptr inicst
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	dword ptr [eax],esi
	mov	eax,13
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [tabtypfn],eax
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlsubr0]
	pop	dword ptr [ebp+12]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlsubr1]
	pop	dword ptr [ebp+16]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlsubr2]
	pop	dword ptr [ebp+20]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlsubr3]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [znlsubr]
	pop	dword ptr [ebp+28]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zflsubr]
	pop	dword ptr [ebp+32]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zllexpr]
	pop	dword ptr [ebp+36]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zllfexpr]
	pop	dword ptr [ebp+40]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zllmacro]
	pop	dword ptr [ebp+44]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlldmacro]
	pop	dword ptr [ebp+48]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zllmsubr]
	pop	dword ptr [ebp+52]
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	push	dword ptr [zlldmsubr]
	pop	dword ptr [ebp+56]
	mov	eax,13
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [tabcodfn],eax
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+12],1
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+16],2
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+20],3
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+24],4
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+28],5
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+32],6
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+36],7
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+40],8
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+44],9
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+48],10
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+52],11
	mov	ebp,dword ptr [tabcodfn]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+56],12
	mov	eax,5
	mov	ebx,offset FLAT:pnmac895
	mov	ecx,offset FLAT:llde
	mov	edx,offset FLAT:zllde
	push	z_llde
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac896
	mov	ecx,offset FLAT:llde
	mov	edx,offset FLAT:zllde
	push	z_llde
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac897
	mov	ecx,offset FLAT:lldf
	mov	edx,offset FLAT:zlldf
	push	z_lldf
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac898
	mov	ecx,offset FLAT:lldm
	mov	edx,offset FLAT:zlldm
	push	z_lldm
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac899
	mov	ecx,offset FLAT:dmd
	mov	edx,offset FLAT:zdmd
	push	z_dmd
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac900
	mov	ecx,offset FLAT:dmd
	mov	edx,offset FLAT:zdmd
	push	z_dmd
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac901
	mov	ecx,offset FLAT:llds
	mov	edx,offset FLAT:zllds
	push	z_llds
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac902
	mov	ecx,offset FLAT:defvar
	mov	edx,offset FLAT:zdefvar
	push	z_defvar
	call	near ptr inisymb
	mov	eax,12
	mov	ebx,offset FLAT:pnmac903
	mov	ecx,offset FLAT:zprevdef
	call	near ptr inicst
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	eax,6
	mov	ebx,offset FLAT:pnmac904
	mov	ecx,offset FLAT:revert
	mov	edx,offset FLAT:zrevert
	push	z_revert
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac905
	mov	ecx,offset FLAT:getdef
	mov	edx,offset FLAT:zgetdef
	push	z_getdef
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac906
	mov	ecx,offset FLAT:makedef
	mov	edx,offset FLAT:zmakedef
	push	z_makedef
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac907
	mov	ecx,offset FLAT:llif
	mov	edx,offset FLAT:zllif
	push	z_llif
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac908
	mov	ecx,offset FLAT:llifn
	mov	edx,offset FLAT:zllifn
	push	z_llifn
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac909
	mov	ecx,offset FLAT:when
	mov	edx,offset FLAT:zwhen
	push	z_when
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac910
	mov	ecx,offset FLAT:unless
	mov	edx,offset FLAT:zunless
	push	z_unless
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac911
	mov	ecx,offset FLAT:cond
	mov	edx,offset FLAT:zcond
	push	z_cond
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac912
	mov	ecx,offset FLAT:llor
	mov	edx,offset FLAT:zllor
	push	z_llor
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac913
	mov	ecx,offset FLAT:lland
	mov	edx,offset FLAT:zlland
	push	z_lland
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac914
	mov	ecx,offset FLAT:while000
	mov	edx,offset FLAT:zwhile000
	push	z_while000
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac915
	mov	ecx,offset FLAT:until
	mov	edx,offset FLAT:zuntil
	push	z_until
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac916
	mov	ecx,offset FLAT:loop000
	mov	edx,offset FLAT:zloop000
	push	z_loop000
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac917
	mov	ecx,offset FLAT:frepeat
	mov	edx,offset FLAT:zfrepeat
	push	z_frepeat
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac918
	mov	ecx,offset FLAT:selectq
	mov	edx,offset FLAT:zselectq
	push	z_selectq
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac919
	mov	ecx,offset FLAT:map
	mov	edx,offset FLAT:zmap
	push	z_map
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac920
	mov	ecx,offset FLAT:map
	mov	edx,offset FLAT:zmap
	push	z_map
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac921
	mov	ecx,offset FLAT:mapc
	mov	edx,offset FLAT:zmapc
	push	z_mapc
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac922
	mov	ecx,offset FLAT:maplist
	mov	edx,offset FLAT:zmaplist
	push	z_maplist
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac923
	mov	ecx,offset FLAT:mapcar
	mov	edx,offset FLAT:zmapcar
	push	z_mapcar
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac924
	mov	ecx,offset FLAT:mapcon
	mov	edx,offset FLAT:zmapcon
	push	z_mapcon
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac925
	mov	ecx,offset FLAT:mapcan
	mov	edx,offset FLAT:zmapcan
	push	z_mapcan
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac926
	mov	ecx,offset FLAT:fevery
	mov	edx,offset FLAT:zfevery
	push	z_fevery
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac927
	mov	ecx,offset FLAT:fany
	mov	edx,offset FLAT:zfany
	push	z_fany
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac928
	mov	ecx,offset FLAT:mapvect
	mov	edx,offset FLAT:zmapvect
	push	z_mapvect
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac929
	mov	ecx,offset FLAT:mapoblist
	mov	edx,offset FLAT:zmapoblist
	push	z_mapoblist
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac930
	mov	ecx,offset FLAT:mapcoblist
	mov	edx,offset FLAT:zmapcoblist
	push	z_mapcoblist
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac931
	mov	ecx,offset FLAT:maploblist
	mov	edx,offset FLAT:zmaploblist
	push	z_maploblist
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac932
	mov	ecx,offset FLAT:quote
	mov	edx,offset FLAT:zquote
	push	z_quote
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac933
	mov	ecx,offset FLAT:lambda
	mov	edx,offset FLAT:zlambda
	push	z_lambda
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac934
	mov	ecx,offset FLAT:flambda
	mov	edx,offset FLAT:zflambda
	push	z_flambda
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac935
	mov	ecx,offset FLAT:mlambda
	mov	edx,offset FLAT:zmlambda
	push	z_mlambda
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac936
	mov	ecx,offset FLAT:llident
	mov	edx,offset FLAT:zllident
	push	z_llident
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac937
	mov	ecx,offset FLAT:comment000
	mov	edx,offset FLAT:zcomment000
	push	z_comment000
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac938
	mov	ecx,offset FLAT:progn
	mov	edx,offset FLAT:zprogn
	push	z_progn
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac939
	mov	ecx,offset FLAT:eprogn
	mov	edx,offset FLAT:zeprogn
	push	z_eprogn
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac940
	mov	ecx,offset FLAT:prog1
	mov	edx,offset FLAT:zprog1
	push	z_prog1
	call	near ptr inisymb
	mov	eax,21
	mov	ebx,offset FLAT:pnmac941
	mov	ecx,offset FLAT:exdef
	mov	edx,offset FLAT:zexdef
	push	z_exdef
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac942
	mov	ecx,offset FLAT:prog2
	mov	edx,offset FLAT:zprog2
	push	z_prog2
	call	near ptr inisymb
	mov	eax,dword ptr [zquote]
	mov	dword ptr [eax],eax
	mov	eax,dword ptr [zlambda]
	mov	dword ptr [eax],eax
	mov	eax,dword ptr [zflambda]
	mov	dword ptr [eax],eax
	mov	eax,dword ptr [zmlambda]
	mov	dword ptr [eax],eax
cnfalse	label	near
	mov	eax,esi
cnpopj	label	near
	ret
cnttrue	label	near
	mov	eax,dword ptr [zt]
	ret
def	label	near
	mov	ebx,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	mov	word ptr [24+eax],cx
	mov	dword ptr [8+eax],ebx
	mov	ecx,dword ptr [zlff]
	mov	ebx,dword ptr [ecx]
	cmp	ebx,esi
	je	near ptr cnpopj
	push	eax
	call	near ptr putprop
	pop	eax
	ret
ini_ctl	endp

llde	proc	near
	mov	ecx,7
	jmp	near ptr def
llde	endp

lldf	proc	near
	mov	ecx,8
	jmp	near ptr def
lldf	endp

lldm	proc	near
	mov	ecx,9
	jmp	near ptr def
lldm	endp

dmd	proc	near
	mov	ecx,10
	jmp	near ptr def
dmd	endp

llds	proc	near
	mov	eax,esi
	ret
llds	endp

defvar	proc	near
	cmp	eax,edi
	jb	near ptr defvar9
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	cmp	dword ptr [bvar],ebx
	ja	near ptr defverr
	cmp	ebx,edi
	jae	near ptr defverr
	mov	dword ptr [ebx],eax
	mov	eax,ebx
	mov	ecx,dword ptr [zlff]
	mov	ebx,dword ptr [ecx]
	cmp	ebx,esi
	je	near ptr defvar9
	push	eax
	call	near ptr putprop
	pop	eax
defvar9	label	near
	ret
defverr	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zdefvar]
	jmp	near ptr errnva
defvar	endp

revert	proc	near
	mov	ebx,dword ptr [zprevdef]
	call	near ptr getprop
	cmp	eax,esi
	je	near ptr cnpopj
	jmp	near ptr evala1
revert	endp

getdef	proc	near
	cmp	eax,esi
	jb	near ptr gtdefe
	cmp	eax,edi
	jae	near ptr gtdefe
	movzx	ebx,word ptr [24+eax]
	mov	ecx,dword ptr [8+eax]
	jmp	near ptr defsuit
gtdefe	label	near
	mov	ebx,dword ptr [zgetdef]
	jmp	near ptr errsym
getdef	endp

makedef	proc	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr uncod0
	or	bx,bx
	jl	near ptr uncodtr
	cmp	bx,12
	jle	near ptr defsuit
uncodtr	label	near
	mov	ebx,dword ptr [zmakedef]
	jmp	near ptr erroob
uncod0	label	near
	push	ecx
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [4+ebp]
	jmp	near ptr uncod2
uncod1	label	near
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+edx*4+8]
	cmp	ecx,ebx
	je	near ptr uncod3
uncod2	label	near
	dec	dx
	jg	near ptr uncod1
uncod3	label	near
	mov	ebx,edx
	pop	ecx
defsuit	label	near
	jmp	dword ptr cs:[ebx*4+tbmakdef]
tbmakdef	dd	offset FLAT:mkdef0
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef2
	dd	offset FLAT:mkdef3
	dd	offset FLAT:mkdef4
	dd	offset FLAT:mkdef5
	dd	offset FLAT:mkdef1
	dd	offset FLAT:mkdef1
mkdef0	label	near
	mov	eax,esi
	ret
mkdef1	label	near
	cmp	dword ptr [bfloat],ecx
	ja	short lmac943
	cmp	dword ptr [econs],ecx
	ja	near ptr mkdef10
lmac943:
	push	eax
	push	ebx
	mov	eax,ecx
	call	near ptr loc
	mov	ecx,eax
	pop	ebx
	pop	eax
mkdef10	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__1
l1__1:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ecx
	mov	ecx,esi
	xchg	dword ptr [4+ebp],ecx
	xchg	dword ptr [fcons],ecx
	mov	ebp,dword ptr [tabtypfn]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+ebx*4+8]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	edx,dword ptr [zllds]
	jmp	near ptr mkdef8
mkdef2	label	near
	mov	edx,dword ptr [zllde]
	jmp	near ptr mkdef8
mkdef3	label	near
	mov	edx,dword ptr [zlldf]
	jmp	near ptr mkdef8
mkdef4	label	near
	mov	edx,dword ptr [zlldm]
	jmp	near ptr mkdef8
mkdef5	label	near
	mov	edx,dword ptr [zdmd]
mkdef8	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],ecx
	xchg	ecx,edi
	xchg	dword ptr [fcons],edi
	mov	eax,ecx
	ret
makedef	endp

llif	proc	near
	cmp	eax,edi
	jb	near ptr ifer2
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	cmp	ebx,edi
	jb	near ptr ifer1
	mov	ecx,dword ptr [4+ebx]
	mov	ebp,dword ptr [zllif]
	mov	dword ptr [errname],ebp
	cmp	eax,esi
	je	near ptr progna3
	mov	eax,dword ptr [ebx]
	jmp	near ptr evala1
ifer1	label	near
	mov	eax,ebx
ifer2	label	near
	cmp	eax,esi
	je	near ptr cnpopj
	mov	ebx,dword ptr [zllif]
	jmp	near ptr errbal
llif	endp

llifn	proc	near
	cmp	eax,edi
	jb	near ptr ifner2
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ebx
	cmp	ebx,edi
	jb	near ptr ifner1
	mov	ecx,dword ptr [4+ebx]
	mov	ebp,dword ptr [zllifn]
	mov	dword ptr [errname],ebp
	cmp	eax,esi
	jne	near ptr progna3
	mov	eax,dword ptr [ebx]
	jmp	near ptr evala1
ifner1	label	near
	mov	eax,ebx
ifner2	label	near
	cmp	eax,esi
	je	near ptr cnpopj
	mov	ebx,dword ptr [zllifn]
	jmp	near ptr errbal
llifn	endp

when	proc	near
	cmp	eax,edi
	jb	near ptr whener1
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ecx
	mov	ebp,dword ptr [zwhen]
	mov	dword ptr [errname],ebp
	cmp	eax,esi
	jne	near ptr progna3
whenr	label	near
	ret
whener1	label	near
	cmp	eax,esi
	je	near ptr whenr
	mov	ebx,dword ptr [zwhen]
	jmp	near ptr errbal
when	endp

unless	proc	near
	cmp	eax,edi
	jb	near ptr unler1
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ecx
	mov	ebp,dword ptr [zunless]
	mov	dword ptr [errname],ebp
	cmp	eax,esi
	je	near ptr progna3
	mov	eax,esi
unlesr	label	near
	ret
unler1	label	near
	cmp	eax,esi
	je	near ptr unlesr
	mov	ebx,dword ptr [zunless]
	jmp	near ptr errbal
unless	endp

cond	proc	near
	mov	ebx,eax
cond1	label	near
	cmp	ebx,edi
	jb	near ptr conder3
	push	dword ptr [4+ebx]
	mov	eax,dword ptr [ebx]
	cmp	eax,edi
	jb	near ptr conder1
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ecx
	pop	ebx
	cmp	eax,esi
	je	near ptr cond1
	mov	ebp,dword ptr [zcond]
	mov	dword ptr [errname],ebp
	cmp	ecx,edi
	jae	near ptr progna3
	cmp	ecx,esi
	je	near ptr condret
	mov	eax,ecx
	jmp	near ptr conder4
condret	label	near
	ret
conder1	label	near
	cmp	eax,esi
	jne	near ptr conder2
	pop	ebx
	jmp	near ptr cond1
conder2	label	near
	mov	ebx,dword ptr [zcond]
	jmp	near ptr errnla
conder3	label	near
	mov	eax,ebx
	cmp	eax,esi
	jne	near ptr conder4
	ret
conder4	label	near
	mov	ebx,dword ptr [zcond]
	jmp	near ptr errbal
cond	endp

llor	proc	near
	cmp	eax,edi
	jae	near ptr or2
	cmp	eax,esi
	je	near ptr cnpopj
	jmp	near ptr orer2
or1	label	near
	push	ebx
	call	near ptr evalcar
	cmp	eax,esi
	jne	near ptr pret
	pop	eax
or2	label	near
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr or1
	cmp	ebx,esi
	jne	near ptr orer1
	jmp	near ptr evalcar
orer1	label	near
	mov	eax,ebx
orer2	label	near
	mov	ebx,dword ptr [zllor]
	jmp	near ptr errbal
llor	endp

lland	proc	near
	cmp	eax,edi
	jae	near ptr and2
	cmp	eax,esi
	je	near ptr cnttrue
	jmp	near ptr ander2
and1	label	near
	push	ebx
	call	near ptr evalcar
	cmp	eax,esi
	je	near ptr pret
	pop	eax
and2	label	near
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,edi
	jae	near ptr and1
	cmp	ebx,esi
	jne	near ptr ander1
	jmp	near ptr evalcar
pret	label	near
	pop	ebx
	ret
ander1	label	near
	mov	eax,ebx
ander2	label	near
	mov	ebx,dword ptr [zlland]
	jmp	near ptr errbal
lland	endp

while000	proc	near
	cmp	eax,edi
	jb	near ptr whiler
	push	eax
	jmp	near ptr while2
while1	label	near
	mov	eax,dword ptr [esp]
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [zwhile000]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
while2	label	near
	mov	eax,dword ptr [esp]
	call	near ptr evalcar
	cmp	eax,esi
	jne	near ptr while1
	pop	ebx
whileret	label	near
	ret
whiler	label	near
	cmp	eax,esi
	je	near ptr whileret
	mov	ebx,dword ptr [zwhile000]
	jmp	near ptr errbal
while000	endp

until	proc	near
	cmp	eax,edi
	jb	near ptr untiler
	push	eax
	jmp	near ptr until2
until1	label	near
	mov	eax,dword ptr [esp]
	mov	eax,dword ptr [4+eax]
	mov	ebp,dword ptr [zuntil]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
until2	label	near
	mov	eax,dword ptr [esp]
	call	near ptr evalcar
	cmp	eax,esi
	je	near ptr until1
	pop	ebx
untilret	label	near
	ret
untiler	label	near
	cmp	eax,esi
	je	near ptr untilret
	mov	ebx,dword ptr [zuntil]
	jmp	near ptr errbal
until	endp

loop000	proc	near
	push	eax
loop1	label	near
	mov	eax,dword ptr [esp]
	mov	ebp,dword ptr [zloop000]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
	jmp	near ptr loop1
loop000	endp

frepeat	proc	near
	cmp	eax,edi
	jb	near ptr freper
	push	dword ptr [4+eax]
	call	near ptr evalcar
	mov	ebx,eax
	pop	eax
	cmp	dword ptr [bfloat],ebx
	ja	near ptr repeat2
	mov	eax,ebx
	mov	ebx,dword ptr [zfrepeat]
	jmp	near ptr errnia
repeat1	label	near
	push	eax
	push	ebx
	mov	ebp,dword ptr [zfrepeat]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
	pop	ebx
	pop	eax
repeat2	label	near
	dec	bx
	jge	near ptr repeat1
	jmp	near ptr cnttrue
freper	label	near
	cmp	eax,esi
	je	near ptr cnttrue
	mov	ebx,dword ptr [zfrepeat]
	jmp	near ptr errbal
frepeat	endp

selectq	proc	near
	cmp	eax,edi
	jb	near ptr selecer1
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	ecx
	jmp	near ptr selec5
selec1	label	near
	mov	ebx,dword ptr [ecx]
	mov	ecx,dword ptr [4+ecx]
	cmp	ebx,edi
	jb	near ptr selecer2
	mov	edx,dword ptr [4+ebx]
	mov	ebx,dword ptr [ebx]
	cmp	ebx,dword ptr [zt]
	je	near ptr selec7
	push	eax
	push	ebx
	push	ecx
	push	edx
	cmp	ebx,edi
	jb	near ptr selec2
	call	near ptr member
	jmp	near ptr selec3
selec2	label	near
	call	near ptr equal
selec3	label	near
	pop	edx
	pop	ecx
	pop	ebx
	cmp	eax,esi
	jne	near ptr selec6
	pop	eax
selec5	label	near
	cmp	ecx,edi
	jae	near ptr selec1
	mov	eax,ecx
selecer1	label	near
	cmp	eax,esi
	je	near ptr cnpopj
	mov	ebx,dword ptr [zselectq]
	jmp	near ptr errbal
selecer2	label	near
	cmp	ebx,esi
	je	near ptr selec5
	mov	eax,ebx
	mov	ebx,dword ptr [zselectq]
	jmp	near ptr errnla
selec6	label	near
	pop	eax
selec7	label	near
	mov	eax,edx
	mov	ebp,dword ptr [zselectq]
	mov	dword ptr [errname],ebp
	jmp	near ptr iprogn
selectq	endp

map	proc	near
	mov	ebx,dword ptr [zmap]
	push	0
	push	offset FLAT:map1
	mov	ecx,esi
allmap	label	near
	push	edx
	push	ecx
	cmp	dx,1
	jle	near ptr maper
map1	label	near
	mov	edx,dword ptr [esp+12]
	mov	eax,dword ptr [esp+8]
	mov	ebx,dword ptr [esp+4]
	push	eax
	mov	ecx,ebx
	add	cx,4
	mov	eax,dword ptr [esp+ecx*4]
	jmp	near ptr map3
map2	label	near
	mov	eax,dword ptr [esp+ecx*4]
	cmp	eax,edi
	jb	near ptr map4
	mov	ebp,dword ptr [4+eax]
	mov	dword ptr [esp+ecx*4],ebp
	or	dx,dx
	je	near ptr map3
	mov	eax,dword ptr [eax]
map3	label	near
	push	eax
	dec	bx
	jg	near ptr map2
	sub	cx,4
	mov	edx,ecx
	jmp	near ptr funcall
map4	label	near
	sub	cx,bx
	sub	cx,3
	lea	esp,dword ptr [esp+ecx*4]
	pop	eax
	pop	ecx
	add	cx,2
	lea	esp,dword ptr [esp+ecx*4]
	cmp	dx,2
	je	near ptr map5
	jmp	near ptr nreverse
map5	label	near
	ret
map6	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	push	ebx
	jmp	near ptr map1
map7	label	near
	cmp	eax,edi
	jb	near ptr map1
	pop	ebx
	call	near ptr nreconc
	push	eax
	jmp	near ptr map1
map8	label	near
	mov	dword ptr [esp],eax
	cmp	eax,esi
	jne	near ptr map1
	jmp	near ptr map10
map9	label	near
	mov	dword ptr [esp],eax
	cmp	eax,esi
	je	near ptr map1
map10	label	near
	add	esp,4
	mov	edx,dword ptr [esp]
	add	dx,3
	lea	esp,dword ptr [esp+edx*4]
	ret
maper	label	near
	mov	eax,edx
	jmp	near ptr errwna
allmapun	label	near
	pop	edx
	pop	eax
	pop	ebx
	xchg	dword ptr [esp],eax
	push	eax
	push	ebx
	push	edx
	push	ecx
mapun1	label	near
	mov	ebx,dword ptr [esp+8]
	cmp	ebx,edi
	jb	near ptr mapun4
	mov	ebp,dword ptr [4+ebx]
	mov	dword ptr [esp+8],ebp
	mov	ecx,dword ptr [esp+4]
	mov	eax,dword ptr [esp+12]
	push	ecx
	push	dword ptr [ebx]
	mov	edx,1
	jmp	near ptr ffuncall
mapun4	label	near
	pop	eax
	add	esp,12
	pop	edx
	cmp	dx,2
	je	near ptr mapun5
	jmp	near ptr nreverse
mapun5	label	near
	ret
mapun6	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],eax
	xchg	dword ptr [4+edi],ebx
	xchg	ebx,edi
	xchg	dword ptr [fcons],edi
	push	ebx
	jmp	near ptr mapun1
mapun7	label	near
	cmp	eax,edi
	jb	near ptr mapun1
	pop	ebx
	call	near ptr nreconc
	push	eax
	jmp	near ptr mapun1
mapun8	label	near
	mov	dword ptr [esp],eax
	cmp	eax,esi
	jne	near ptr mapun1
	add	esp,20
	ret
mapun9	label	near
	cmp	eax,esi
	je	near ptr mapun1
	add	esp,20
	ret
map	endp

mapc	proc	near
	mov	ecx,esi
	push	1
	cmp	dx,2
	jne	near ptr mapcn
	push	offset FLAT:mapun1
	jmp	near ptr allmapun
mapcn	label	near
	mov	ebx,dword ptr [zmapc]
	push	offset FLAT:map1
	jmp	near ptr allmap
mapc	endp

maplist	proc	near
	mov	ecx,esi
	mov	ebx,dword ptr [zmaplist]
	push	0
	push	offset FLAT:map6
	jmp	near ptr allmap
maplist	endp

mapcar	proc	near
	mov	ecx,esi
	push	1
	cmp	dx,2
	jne	near ptr mapcarn
	push	offset FLAT:mapun6
	jmp	near ptr allmapun
mapcarn	label	near
	mov	ebx,dword ptr [zmapcar]
	push	offset FLAT:map6
	jmp	near ptr allmap
mapcar	endp

mapcon	proc	near
	mov	ebx,dword ptr [zmapcon]
	mov	ecx,esi
	push	0
	push	offset FLAT:map7
	jmp	near ptr allmap
mapcon	endp

mapcan	proc	near
	mov	ecx,esi
	push	1
	cmp	dx,2
	jne	near ptr mapcann
	push	offset FLAT:mapun7
	jmp	near ptr allmapun
mapcann	label	near
	mov	ebx,dword ptr [zmapcan]
	push	offset FLAT:map7
	jmp	near ptr allmap
mapcan	endp

fevery	proc	near
	mov	ecx,dword ptr [zt]
	push	2
	cmp	dx,2
	jne	near ptr feveryn
	push	offset FLAT:mapun8
	jmp	near ptr allmapun
feveryn	label	near
	mov	ebx,dword ptr [zfevery]
	push	offset FLAT:map8
	jmp	near ptr allmap
fevery	endp

fany	proc	near
	mov	ecx,esi
	push	2
	cmp	dx,2
	jne	near ptr fanyn
	push	offset FLAT:mapun9
	jmp	near ptr allmapun
fanyn	label	near
	mov	ebx,dword ptr [zfany]
	push	offset FLAT:map9
	jmp	near ptr allmap
fany	endp

mapvect	proc	near
	cmp	dword ptr [bvect],ebx
	ja	near ptr mapvect9
	cmp	dword ptr [bstrg],ebx
	jbe	near ptr mapvect9
	xor	ecx,ecx
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	jmp	near ptr mapvect8
mapvect1	label	near
	push	eax
	push	ebx
	push	ecx
	push	edx
	mov	ebp,dword ptr [ebx]
	mov	ecx,dword ptr [ebp+ecx*4+8]
	push	offset FLAT:mapvect2
	push	ecx
	mov	edx,1
	jmp	near ptr ffuncall
mapvect2	label	near
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	inc	cx
mapvect8	label	near
	dec	dx
	jge	near ptr mapvect1
	mov	eax,esi
	ret
mapvect9	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zmapvect]
	jmp	near ptr errvec
mapvect	endp

mapcoblist	proc	near
	push	offset FLAT:mapcobco
allmapob	label	near
	mov	edx,esi
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [4+ebp]
	dec	cx
mapcob0	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	ecx,dword ptr [ebp+ecx*4+8]
	jmp	near ptr mapcob7
mapcob1	label	near
	mov	ebx,ecx
	mov	ebp,dword ptr [28+ebx]
	cmp	dword ptr [bstrg],ebp
	ja	short lmac944
	cmp	esi,ebp
	ja	near ptr mapcob3
lmac944:
mapcob2	label	near
	mov	ebx,dword ptr [28+ebx]
mapcob3	label	near
	cmp	ebx,dword ptr [zundef]
	je	near ptr mapcob6
	push	eax
	push	ecx
	push	ebx
	push	edx
	mov	edx,dword ptr [esp+16]
	push	edx
	push	ebx
	mov	edx,1
	jmp	near ptr ffuncall
mapcob5	label	near
	pop	edx
mapcob5a	label	near
	pop	ebx
mapcob5b	label	near
	pop	ecx
	pop	eax
mapcob6	label	near
	cmp	ecx,ebx
	jne	near ptr mapcob2
	mov	ecx,dword ptr [20+ecx]
mapcob7	label	near
	cmp	ecx,esi
	jb	short lmac945
	cmp	ecx,edi
	jb	near ptr mapcob1
lmac945:
mapcob8	label	near
	dec	cx
	jge	near ptr mapcob0
	pop	eax
	mov	eax,edx
	jmp	near ptr nreverse
maplobco	label	near
	cmp	eax,esi
	je	near ptr mapcob5
	pop	edx
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],edx
	xchg	edx,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr mapcob5b
mapcobco	label	near
	cmp	eax,edi
	jb	near ptr mapcob5
	pop	ebx
	call	near ptr nreconc
	mov	edx,eax
	jmp	near ptr mapcob5a
mapcoblist	endp

maploblist	proc	near
	push	offset FLAT:maplobco
	jmp	near ptr allmapob
maploblist	endp

mapoblist	proc	near
	push	offset FLAT:mapcob5
	jmp	near ptr allmapob
mapoblist	endp

quote	proc	near
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,esi
	jne	near ptr quoterr
	mov	eax,dword ptr [eax]
	ret
quoterr	label	near
	mov	eax,1
	mov	ebx,dword ptr [zquote]
	jmp	near ptr errwna
quote	endp

lambda	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zlambda]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
lambda	endp

flambda	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zflambda]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
flambda	endp

mlambda	proc	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zmlambda]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
mlambda	endp

comment000	proc	near
	mov	eax,dword ptr [zcomment000]
	ret
comment000	endp

llident	proc	near
	dec	_itloop
	jz	near ptr l___11
l1___11:
	cmp	word ptr [itcount],0
	je 	short l__11
	cmp	word ptr [itstate],0 
	je 	short l__11
	call	near ptr ithard
l__11:
	cmp	dword ptr [mstack],esp
	ja	near ptr errfs
	ret
progna3	label	near
	mov	eax,ecx
	dec	_itloop
	jz	near ptr l___12
l1___12:
	cmp	word ptr [itcount],0
	je 	short l__12
	cmp	word ptr [itstate],0 
	je 	short l__12
	call	near ptr ithard
l__12:
	cmp	eax,edi
	jb	near ptr progna35
	mov	ebx,dword ptr [4+eax]
	cmp	ebx,esi
	je	near ptr progna36
progna35	label	near
	jmp	near ptr evprogn
progna36	label	near
	jmp	near ptr evalcar
llident	endp

eprogn	proc	near
	mov	ebp,dword ptr [zeprogn]
	mov	dword ptr [errname],ebp
	dec	_itloop
	jz	near ptr l___13
l1___13:
	cmp	word ptr [itcount],0
	je 	short l__13
	cmp	word ptr [itstate],0 
	je 	short l__13
	call	near ptr ithard
l__13:
	jmp	near ptr evprogn
eprogn	endp

progn	proc	near
	mov	ebp,dword ptr [zprogn]
	mov	dword ptr [errname],ebp
iprogn	label	near
	dec	_itloop
	jz	near ptr l___14
l1___14:
	cmp	word ptr [itcount],0
	je 	short l__14
	cmp	word ptr [itstate],0 
	je 	short l__14
	call	near ptr ithard
l__14:
	jmp	near ptr evprogn
progn	endp

exdef	proc	near
	jmp	near ptr prog1
exdef	endp

prog1	proc	near
	cmp	eax,edi
	jb	near ptr prog1e
	push	dword ptr [4+eax]
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	mov	ebp,dword ptr [zprog1]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
	pop	eax
prog1r	label	near
	ret
prog1e	label	near
	cmp	eax,esi
	je	near ptr prog1r
	mov	ebx,dword ptr [zprog1]
	jmp	near ptr errbal
prog1	endp

prog2	proc	near
	cmp	eax,edi
	jb	near ptr prog2e
	push	dword ptr [4+eax]
	call	near ptr evalcar
	pop	eax
	cmp	eax,edi
	jb	near ptr prog2e
	push	dword ptr [4+eax]
	call	near ptr evalcar
	xchg	dword ptr [esp],eax
	mov	ebp,dword ptr [zprog2]
	mov	dword ptr [errname],ebp
	call	near ptr iprogn
	pop	eax
prog2r	label	near
	ret
prog2e	label	near
	cmp	eax,esi
	je	near ptr prog2r
	mov	ebx,dword ptr [zprog2]
	jmp	near ptr errbal
l___14:
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
	jmp	near ptr l1___14
l___13:
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
	jmp	near ptr l1___13
l___12:
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
	jmp	near ptr l1___12
l___11:
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
	jmp	near ptr l1___11
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
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
l__1:
	call	near ptr gccons
	jmp	near ptr l1__1
prog2	endp
_TEXT	ends
	end
