#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*buff;

	buff = malloc(num * (size + 1));
	return ((void *)buff);
}
