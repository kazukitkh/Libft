#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while ((int)n - i)
	{
		((char *)str)[i] = c;
		i ++;
	}
	return (str);
}
