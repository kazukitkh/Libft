#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = malloc(sizeof(int) * 13);
	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
}
