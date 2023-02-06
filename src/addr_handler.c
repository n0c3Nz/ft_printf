#include "src.h"

int	addr_handler(void *ptr)
{
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (ft_strlen("(nil)"));
	}
	write(1, "0x", 2);
	return (ft_putaddr_fd((unsigned long int)ptr, 1) + 3);
}
