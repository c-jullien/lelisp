#include "Machine.h"
#include <sys/mman.h>

#if     !defined( VM_START )
#define VM_START        0x10000000
#endif

void *
llalloc(size_t size) {
/*
  size_t psize = sysconf( _SC_PAGESIZE );
*/
  void *mem;

  mem = mmap(
              (void *)VM_START,
              size,
              PROT_READ | PROT_WRITE | PROT_EXEC,
              (MAP_ANON| MAP_FIXED | MAP_PRIVATE),
              -1,
              0
            );

  if (mem == MAP_FAILED) {
    return NULL;
  }

  return(mem);
}
