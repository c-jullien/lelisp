#include "sys/mman.h"
#include "lldata.h"
#include "Machine.h"

#if     !defined(VM_START)
#define VM_START        0x50000000
#endif

#if defined(__APPLE)
#undef MAP_FIXED
#define MAP_FIXED 0
#endif

void *
llalloc(size_t size) {
/*
  size_t psize = sysconf( _SC_PAGESIZE );
*/
  void *mem;
#if defined(__NetBSD__)
  int fd = open("/dev/zero", O_RDWR, (S_IRUSR|S_IWUSR));

  if (fd >= 0) {
    mem = mmap((void *)VM_START,
               size,
               PROT_READ | PROT_WRITE,
               (MAP_FIXED | MAP_PRIVATE),
               fd,
               0);

    close(fd);
  } else {
    return NULL;
  }
#else
  mem = mmap((void *)VM_START,
             size,
             PROT_READ | PROT_WRITE,
             (MAP_ANON | MAP_PRIVATE),
             -1,
             0);
#endif

  if (mem == MAP_FAILED) {
    return NULL;
  }

  return(mem);
}
