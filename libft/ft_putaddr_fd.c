#include "libft.h"

int ft_putaddr_fd(unsigned long int n, int fd)
{
    char *base = "0123456789abcdef";
    int count = 0;

    if (n == 0)
    {
        write(fd, "0", 1);
        return (1);
    }
    if (n >= 16)
        count += ft_putaddr_fd(n / 16, fd);
    write(fd, &base[n % 16], 1);
    return (count + 1);
}
