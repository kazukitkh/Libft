#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	int	i;

	i = -1;
	while (++i < (int)size)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
	}
	return (0);
}
