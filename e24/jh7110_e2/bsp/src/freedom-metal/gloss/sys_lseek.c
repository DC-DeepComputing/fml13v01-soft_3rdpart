#include <sys/types.h>
#include <errno.h>
#include <unistd.h>

off_t
_lseek(int file, off_t ptr, int dir)
{
  return 0; //fflush() need this
  //errno = ENOSYS;
  //return -1;
}
