
#include "libft.h"

void	ft_putnendl_fd(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	write(fd, "\n", 1);
}
