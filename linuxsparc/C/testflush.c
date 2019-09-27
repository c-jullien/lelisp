/*
 *      simple test for iflushX functions.
 */

extern void iflushw( unsigned long *addr, unsigned long *last );
extern void iflushb( unsigned char *addr, unsigned char *last );

#if     !defined( _USE_TO_GENERATE_ASSEMBLER_FILE )
int
main()
{
        int tab[1024];

        iflushw( (unsigned long *)&tab[0], (unsigned long *)&tab[1000] );
        printf( "Flushed from %08lx to %08lx\n",
                (unsigned long *)&tab[0], (unsigned long *)&tab[1000] );
        return 0;
}

void
iflushw( unsigned long *addr, unsigned long *last )
{
        while (addr < last) {
                *addr |= 0x1000;
                ++addr;
        }
}
#endif

#if     defined( _USE_TO_GENERATE_ASSEMBLER_FILE )

static void
flushbyte(unsigned char *b)
{
        printf("add %x\r\n", b);
}

void
iflushb( unsigned char *addr, unsigned char *last )
{
        while (addr < last) {
                flushbyte(addr);
                ++addr;
        }
}

#endif
