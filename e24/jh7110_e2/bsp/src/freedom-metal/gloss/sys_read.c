#include <sys/types.h>
#include <errno.h>
#include <unistd.h>

extern char *sys_gets_ex(char *str, size_t size, size_t *len);

ssize_t
_read(int file, void *ptr, size_t len)
{
  if (file != STDIN_FILENO) {
    errno = ENOSYS;
    return -1;
  }

  size_t str_len = 0;
  char *str = sys_gets_ex(ptr, len, &str_len);

  return (ssize_t)str_len;
}
