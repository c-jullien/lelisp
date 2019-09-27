	.386p
	.387

	include	llinit.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	llinit.equ
llinit000	proc	near
	mov	esp,dword ptr [bstack]
	mov	ebp,dword ptr [mstack1]
	mov	dword ptr [mstack],ebp
	xor	eax,eax
	mov	ebx,dword ptr [cnumb]
	jmp	near ptr ifrns3
ifrns1	label	near
	mov	dword ptr [ebx],eax
	mov	eax,ebx
ifrns3	label	near
	mov	dword ptr [fnumb],eax
	xor	eax,eax
	mov	ebx,dword ptr [cfloat]
	cmp	dword ptr [bfloat],ebx
	ja	near ptr ifrfs3
	cmp	dword ptr [bvect],ebx
	jbe	near ptr ifrfs3
ifrfs1	label	near
	mov	dword ptr [ebx],eax
	mov	eax,ebx
	add	ebx,8
	cmp	dword ptr [bvect],ebx
	ja	near ptr ifrfs1
ifrfs3	label	near
	mov	dword ptr [ffloat],eax
	mov	eax,esi
	mov	ebx,dword ptr [cvect]
ifrvs1	label	near
	mov	dword ptr [ebx],eax
	mov	eax,ebx
	add	ebx,8
	cmp	dword ptr [bstrg],ebx
	ja	near ptr ifrvs1
	mov	dword ptr [fvect],eax
	mov	eax,esi
	mov	ebx,dword ptr [cstrg]
ifrss1	label	near
	mov	dword ptr [ebx],eax
	mov	eax,ebx
	add	ebx,8
	cmp	esi,ebx
	ja	near ptr ifrss1
	mov	dword ptr [fstrg],eax
	mov	eax,dword ptr [filiz]
	or	ax,ax
	je	near ptr initf9
	cmp	word ptr [filit],0
	je	near ptr initf9
	mov	ebx,dword ptr [filin]
	call	near ptr crastrg
	call	near ptr restcori
initf9	label	near
	mov	ebx,dword ptr [csymb]
	jmp	near ptr ifrsy2
ifrsy1	label	near
	mov	dword ptr [20+eax],ebx
ifrsy2	label	near
	mov	eax,ebx
	add	ebx,32
	cmp	edi,ebx
	ja	near ptr ifrsy1
ifrsy3	label	near
	mov	dword ptr [20+eax],0
	mov	ebp,dword ptr [csymb]
	mov	dword ptr [fsymb],ebp
	mov	eax,esi
	mov	ebx,dword ptr [ccons]
ifrls1	label	near
	mov	dword ptr [ebx],esi
	mov	dword ptr [4+ebx],eax
	mov	ebp,ebx
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	btr	dword ptr [eax],ebp
	pop	eax
	mov	eax,ebx
	add	ebx,8
	cmp	dword ptr [econs],ebx
	ja	near ptr ifrls1
	mov	dword ptr [fcons],eax
	mov	dword ptr [savea1],esi
	mov	dword ptr [savea2],esi
	mov	dword ptr [savea3],esi
	mov	dword ptr [savea4],esi
	mov	eax,997
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [hashtab],eax
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	jmp	near ptr inhas2
inhas1	label	near
	mov	ebp,dword ptr [hashtab]
	mov	ebp,dword ptr [ebp]
	mov	dword ptr [ebp+eax*4+8],eax
inhas2	label	near
	dec	ax
	jge	near ptr inhas1
	xor	eax,eax
	mov	ebx,offset FLAT:pnmac1175
	mov	ecx,offset FLAT:zvoid
	call	near ptr inicst
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [12+eax],ebp
	mov	word ptr [26+eax],128
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1176
	mov	ecx,offset FLAT:zundef
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1177
	mov	ecx,offset FLAT:znewnil
	call	near ptr inicst
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1178
	mov	ecx,offset FLAT:zt
	call	near ptr inicst
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [cpkgc],ebp
	mov	eax,dword ptr [znewnil]
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [12+eax],ebp
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [eax],ebp
	mov	eax,dword ptr [zundef]
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [12+eax],ebp
	mov	eax,dword ptr [zt]
	mov	ebp,dword ptr [zvoid]
	mov	dword ptr [12+eax],ebp
	mov	ebp,dword ptr [fsymb]
	mov	dword ptr [bvar],ebp
	mov	eax,11
	mov	ebx,offset FLAT:pnmac1179
	mov	ecx,offset FLAT:zsyspkgc
	call	near ptr inicst
	mov	dword ptr [eax],esi
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1180
	mov	ecx,offset FLAT:itsoft
	mov	edx,offset FLAT:zitsoft
	push	z_itsoft
	call	near ptr inisymb
	mov	eax,12
	mov	ebx,offset FLAT:pnmac1181
	mov	ecx,offset FLAT:supitsof
	mov	edx,offset FLAT:zsupitsof
	push	z_supitsof
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1182
	mov	ecx,offset FLAT:llsystem
	mov	edx,offset FLAT:zllsystem
	push	z_llsystem
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1183
	mov	ecx,offset FLAT:zsysobslt
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1184
	mov	ecx,offset FLAT:zapollo
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1185
	mov	ecx,offset FLAT:zvaxunix
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1186
	mov	ecx,offset FLAT:zvaxvms
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1187
	mov	ecx,offset FLAT:zcpm86
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1188
	mov	ecx,offset FLAT:zpcdos
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1189
	mov	ecx,offset FLAT:zksun
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1190
	mov	ecx,offset FLAT:zhp9000
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1191
	mov	ecx,offset FLAT:zibmrt
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1192
	mov	ecx,offset FLAT:zunigraph
	call	near ptr inicst
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1193
	mov	ecx,offset FLAT:zsllc
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1194
	mov	ecx,offset FLAT:zlews
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1195
	mov	ecx,offset FLAT:zsun4
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1196
	mov	ecx,offset FLAT:zatari
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1197
	mov	ecx,offset FLAT:zmacaux
	call	near ptr inicst
	mov	eax,10
	mov	ebx,offset FLAT:pnmac1198
	mov	ecx,offset FLAT:zdecstation
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1199
	mov	ecx,offset FLAT:zsony
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1200
	mov	ecx,offset FLAT:zm88k
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1201
	mov	ecx,offset FLAT:zsun386i
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1202
	mov	ecx,offset FLAT:zaix386
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1203
	mov	ecx,offset FLAT:zix386
	call	near ptr inicst
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1204
	mov	ecx,offset FLAT:zsonyr3000
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1205
	mov	ecx,offset FLAT:zllmips
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1206
	mov	ecx,offset FLAT:zrs6000
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1207
	mov	ecx,offset FLAT:zsco386
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1208
	mov	ecx,offset FLAT:zos2
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1209
	mov	ecx,offset FLAT:zhp9400
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1210
	mov	ecx,offset FLAT:ziris4d
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1211
	mov	ecx,offset FLAT:zsvr4i386
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1212
	mov	ecx,offset FLAT:zos220
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1213
	mov	ecx,offset FLAT:zchp9700
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1214
	mov	ecx,offset FLAT:zcsun4
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1215
	mov	ecx,offset FLAT:zcetia88k
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1216
	mov	ecx,offset FLAT:zsun4mbc
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1217
	mov	ecx,offset FLAT:zhp9700
	call	near ptr inicst
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1218
	mov	ecx,offset FLAT:zcalphavms
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1219
	mov	ecx,offset FLAT:znt386
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1220
	mov	ecx,offset FLAT:znext68k
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1221
	mov	ecx,offset FLAT:zsolaris
	call	near ptr inicst
	mov	eax,9
	mov	ebx,offset FLAT:pnmac1222
	mov	ecx,offset FLAT:zcalphaosf
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1223
	mov	ecx,offset FLAT:zciris4d
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1224
	mov	ecx,offset FLAT:zalphaosf
	call	near ptr inicst
	mov	eax,10
	mov	ebx,offset FLAT:pnmac1225
	mov	ecx,offset FLAT:zsolaris386
	call	near ptr inicst
	mov	eax,11
	mov	ebx,offset FLAT:pnmac1226
	mov	ecx,offset FLAT:zunixware386
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1227
	mov	ecx,offset FLAT:zirix5
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1228
	mov	ecx,offset FLAT:zalphavms
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1229
	mov	ecx,offset FLAT:zlinux
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1230
	mov	ecx,offset FLAT:zwin95
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1231
	mov	ecx,offset FLAT:zcygwin
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1232
	mov	ecx,offset FLAT:zhp11
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1233
	mov	ecx,offset FLAT:zwin32
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1234
	mov	ecx,offset FLAT:zwin64
	call	near ptr inicst
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1235
	mov	ecx,offset FLAT:zx86macos
	call	near ptr inicst
	mov	eax,10
	mov	ebx,offset FLAT:pnmac1236
	mov	ecx,offset FLAT:zlinuxsparc
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1237
	mov	ecx,offset FLAT:zfreebsd
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1238
	mov	ecx,offset FLAT:znetbsd
	call	near ptr inicst
	mov	eax,80
	mov	ebx,dword ptr [zsysobslt]
	call	near ptr makevect
	mov	dword ptr [tabsyst],eax
	mov	ebp,dword ptr [eax]
	push	dword ptr [zapollo]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zvaxunix]
	pop	dword ptr [ebp+40]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zvaxvms]
	pop	dword ptr [ebp+44]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcpm86]
	pop	dword ptr [ebp+60]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zpcdos]
	pop	dword ptr [ebp+64]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zksun]
	pop	dword ptr [ebp+96]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zhp9000]
	pop	dword ptr [ebp+100]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zibmrt]
	pop	dword ptr [ebp+112]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zunigraph]
	pop	dword ptr [ebp+124]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsllc]
	pop	dword ptr [ebp+140]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zlews]
	pop	dword ptr [ebp+144]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsun4]
	pop	dword ptr [ebp+148]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zatari]
	pop	dword ptr [ebp+152]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zmacaux]
	pop	dword ptr [ebp+160]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zdecstation]
	pop	dword ptr [ebp+164]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsony]
	pop	dword ptr [ebp+168]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zm88k]
	pop	dword ptr [ebp+172]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsun386i]
	pop	dword ptr [ebp+176]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zaix386]
	pop	dword ptr [ebp+180]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zix386]
	pop	dword ptr [ebp+184]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsonyr3000]
	pop	dword ptr [ebp+188]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zllmips]
	pop	dword ptr [ebp+192]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zrs6000]
	pop	dword ptr [ebp+196]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsco386]
	pop	dword ptr [ebp+200]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zos2]
	pop	dword ptr [ebp+204]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zhp9400]
	pop	dword ptr [ebp+208]
	mov	ebp,dword ptr [eax]
	push	dword ptr [ziris4d]
	pop	dword ptr [ebp+212]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsvr4i386]
	pop	dword ptr [ebp+216]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zos220]
	pop	dword ptr [ebp+220]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zchp9700]
	pop	dword ptr [ebp+224]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcsun4]
	pop	dword ptr [ebp+228]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcetia88k]
	pop	dword ptr [ebp+232]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsun4mbc]
	pop	dword ptr [ebp+236]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zhp9700]
	pop	dword ptr [ebp+240]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcalphavms]
	pop	dword ptr [ebp+244]
	mov	ebp,dword ptr [eax]
	push	dword ptr [znt386]
	pop	dword ptr [ebp+248]
	mov	ebp,dword ptr [eax]
	push	dword ptr [znext68k]
	pop	dword ptr [ebp+252]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsolaris]
	pop	dword ptr [ebp+256]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcalphaosf]
	pop	dword ptr [ebp+260]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zciris4d]
	pop	dword ptr [ebp+264]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zalphaosf]
	pop	dword ptr [ebp+268]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zsolaris386]
	pop	dword ptr [ebp+272]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zunixware386]
	pop	dword ptr [ebp+276]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zirix5]
	pop	dword ptr [ebp+280]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zalphavms]
	pop	dword ptr [ebp+284]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zlinux]
	pop	dword ptr [ebp+288]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zwin95]
	pop	dword ptr [ebp+292]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcygwin]
	pop	dword ptr [ebp+296]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zhp11]
	pop	dword ptr [ebp+300]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zwin32]
	pop	dword ptr [ebp+304]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zwin64]
	pop	dword ptr [ebp+308]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zx86macos]
	pop	dword ptr [ebp+312]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zlinuxsparc]
	pop	dword ptr [ebp+316]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zfreebsd]
	pop	dword ptr [ebp+320]
	mov	ebp,dword ptr [eax]
	push	dword ptr [znetbsd]
	pop	dword ptr [ebp+324]
	mov	ebp,dword ptr [tabsyst]
	mov	ebp,dword ptr [ebp]
	push	edi
	mov	edi,ebp
	mov	ebp,dword ptr [nbsyst]
	lea	ebp,[edi+ebp*4+8]
	pop	edi
	mov	eax,dword ptr [ebp]
	mov	dword ptr [cstsyste],eax
	mov	ebp,dword ptr [tabsyst]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [4+ebp]
	dec	ax
clrsyst	label	near
	mov	ebp,dword ptr [tabsyst]
	mov	ebp,dword ptr [ebp]
	mov	ebx,dword ptr [ebp+eax*4+8]
	mov	ebp,dword ptr [zundef]
	mov	dword ptr [ebx],ebp
	dec	ax
	jg	near ptr clrsyst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1239
	mov	ecx,offset FLAT:llversion
	mov	edx,offset FLAT:zllversion
	push	z_llversion
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1240
	mov	ecx,offset FLAT:znaversion
	call	near ptr inicst
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1241
	mov	ecx,offset FLAT:stop
	mov	edx,offset FLAT:zstop
	push	z_stop
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1242
	mov	ecx,offset FLAT:llatend
	mov	edx,offset FLAT:zllatend
	push	z_llatend
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1243
	mov	ecx,offset FLAT:herald
	mov	edx,offset FLAT:zherald
	push	z_herald
	call	near ptr inisymb
	call	near ptr ini_top
	call	near ptr ini_gc
	call	near ptr ini_pio
	call	near ptr ini_read
	call	near ptr ini_mach
	call	near ptr ini_print
	call	near ptr ini_eval
	call	near ptr ini_spec
	call	near ptr ini_ctl
	call	near ptr ini_cad
	call	near ptr ini_sym
	call	near ptr ini_std
	call	near ptr ini_nbs
	call	near ptr ini_snb
	call	near ptr ini_chr
	call	near ptr ini_str
	call	near ptr ini_ext
	call	near ptr ini_bll
	mov	eax,esi
	mov	eax,dword ptr [28+eax]
	mov	ebp,dword ptr [zstring000]
	mov	dword ptr [4+eax],ebp
	mov	eax,dword ptr [bstrg]
	mov	ebx,dword ptr [zstring000]
forcstr2	label	near
	mov	dword ptr [4+eax],ebx
	add	eax,8
	cmp	esi,eax
	ja	near ptr forcstr2
	mov	eax,dword ptr [bvect]
	mov	ebx,dword ptr [zvector]
forcvec2	label	near
	mov	dword ptr [4+eax],ebx
	add	eax,8
	cmp	dword ptr [bstrg],eax
	ja	near ptr forcvec2
	mov	eax,esi
topmin	label	near
	cmp	word ptr [llban],0
	jne	near ptr imin2
	call	near ptr herald
imin2	label	near
	mov	eax,dword ptr [filiz]
	or	ax,ax
	je	near ptr imin4
	mov	ebx,dword ptr [filin]
	call	near ptr crastrg
	cmp	word ptr [filit],0
	je	near ptr imin3
	call	near ptr restcori
	jmp	near ptr imin4
imin3	label	near
	call	near ptr input
imin4	label	near
reenter	label	near
	mov	esp,dword ptr [bstack]
	mov	ebp,dword ptr [mstack1]
	mov	dword ptr [mstack],ebp
	mov	dword ptr [itcount],0
	mov	dword ptr [itstate],1
	jmp	near ptr systop
theend	label	near
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__1
	push	25
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
	call	near ptr ll_exit
	ret
llinit000	endp

itsoft	proc	near
	jmp	near ptr llitsoft
itsoft	endp

supitsof	proc	near
	jmp	near ptr llsupit
supitsof	endp

llversion	proc	near
	mov	eax,dword ptr [znaversion]
	mov	eax,dword ptr [28+eax]
	;; CVATOF
	push	ebp
	mov	ebp,dword ptr [eax]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	mov	ebp,dword ptr [crwork]
	mov	byte ptr [ebp+5],0
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	call	near ptr _llrt_cvatof
	add	esp,4
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	cmp	dword ptr [ffloat],0
	jne	short laf__2
	call	near ptr gcfloat
laf__2:
	mov	ebp,dword ptr [ffloat]
	mov	ebp,dword ptr [ebp]
	xchg	ebp,dword ptr [ffloat]
	mov	eax,ebp
	fstp	qword ptr [ebp]
	fwait
	;; CVATOF
llversr	label	near
	ret
llversion	endp

llsystem	proc	near
	mov	eax,dword ptr [cstsyste]
	ret
llsystem	endp

stop	proc	near
	cmp	dx,1
	jg	near ptr stop6
	push	edx
	push	ecx
	push	ebx
	push	eax
	or	dx,dx
	je	near ptr stop3
	mov	ebx,dword ptr [esp+16]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	jmp	near ptr stop4
stop3	label	near
	mov	ebx,esi
stop4	label	near
	mov	eax,dword ptr [zllatend]
	call	near ptr itsoft
	pop	eax
	pop	ebx
	pop	ecx
	pop	edx
	or	dx,dx
	je	near ptr theend
	pop	eax
	cmp	eax,esi
	je	near ptr stop5
	call	near ptr exwer
stop5	label	near
	call	near ptr ll_exit
	ret
stop6	label	near
	xor	eax,eax
	mov	ebx,dword ptr [zstop]
	jmp	near ptr errwna
stop	endp

llatend	proc	near
	cmp	dx,1
	jg	near ptr llatend2
	cmp	dx,1
	je	near ptr llatend1
	mov	eax,esi
	ret
llatend1	label	near
	pop	eax
	ret
llatend2	label	near
	xor	eax,eax
	mov	ebx,dword ptr [zllatend]
	jmp	near ptr errwna
llatend	endp

herald	proc	near
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__4
	push	52
	call	near ptr _ttyout
	add	esp,8
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	eax,dword ptr [cstsyste]
	call	near ptr strgsymb
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	;; Entering TTYSTRG
	push	ebp
	mov	ebp,dword ptr [eax]
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
	push	ebx
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
	;; Prepare a C function call with 2 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	offset ds:lab_m__5
	push	1
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
	mov	eax,esi
	ret
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
herald	endp
_TEXT	ends
	end
