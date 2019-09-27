#include "Machine.h"

#if !defined(_DARWIN_C_SOURCE)
#define _DARWIN_C_SOURCE 1
#endif

#include "sys/mman.h"

#if     !defined( VM_START )
#define VM_START        0x50000000
#endif

void *
llalloc(size_t size) {
#if 0
  size_t psize = sysconf( _SC_PAGESIZE );
#endif

  void *mem;

  mem = mmap(
              (void *)VM_START,
              size,
              PROT_READ | PROT_WRITE | PROT_EXEC,
              (MAP_ANON | MAP_FIXED | MAP_PRIVATE),
              -1,
              0
            );

  if (mem == MAP_FAILED) {
    return NULL;
  }

  return(mem);
}
