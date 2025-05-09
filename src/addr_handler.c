#include "src.h"

int addr_handler(void *ptr)
{
    if (ptr == NULL)
        return write(1, "(nil)", 5);
    write(1, "0x", 2);
    return (ft_putaddr_fd((unsigned long int)ptr, 1) + 2);
}
