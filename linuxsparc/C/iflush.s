!   	Routines to flush Instruction Cache on sparc. (C. Jullien)
!
!   	iflushw( register unsigned long *addr, register unsigned long *last );
!   	iflushb( register unsigned char *addr, register unsigned char *last );

	.ident	 "$Id: iflush.s,v 1.3 2017/10/05 04:04:48 jullien Exp $"
	.section ".text",#alloc,#execinstr
	.align	 8
	.skip	 16

!    	void
!    	iflushw( register unsigned long *addr, register unsigned long *last )

	.global	iflushw
	.type	iflushw, #function
iflushw:
	save	%sp,-96,%sp		! create frame
	st	%i1,[%fp+72]		! load last
	st	%i0,[%fp+68]		! load addr

	cmp	%i0,%i1			! at the end?
	bgeu	.fwdone			! Yes, done.
	nop				! align

.loopword:
	flush	%i0			! and flush
	add	%i0,4,%i0		! next 32 bits word
	cmp	%i0,%i1			! done?
	blu	.loopword		! continue
	nop

.fwdone:
	! NOTE:
	! Sparc v9 'membar #Xxxx' to Synchronyse Memory
	! while v8 seems to use stbar
	membar	#StoreStore|#StoreLoad	! force memory synchronization
	membar	#Sync			! force full   synchronization
	jmp	%i7+8
	restore
	.size	iflushw,(.-iflushw)
	.align	8
	.align	8
	.skip	16

!   	void
!   	iflushb( register unsigned char *addr, register unsigned char *last )

	.global	iflushb
	.type	iflushb, #function

iflushb:
	save	%sp,-96,%sp		! create frame
	st	%i1,[%fp+72]		! load last
	st	%i0,[%fp+68]		! load addr

	cmp	%i0,%i1			! at the end?
	bgeu	.fbdone			! Yes, done.
	nop				! align

.loopbyte:
	flush	%i0			! flush addess
	add	%i0,1,%i0		! next byte
	cmp	%i0,%i1			! done?
	blu	.loopbyte		! continue
	nop

.fbdone:
	! NOTE:
	! Sparc v9 'membar #Xxxx' to Synchronyse Memory
	! while v8 seems to use stbar
	membar	#StoreStore|#StoreLoad	! force memory synchronization
	membar	#Sync			! force full   synchronization
	jmp	%i7+8
	restore
	.size	iflushb,(.-iflushb)
	.align	8
