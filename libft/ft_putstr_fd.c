#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	while (length--)
		write(fd, s++, 1);
}
