#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	char *cptr;

	cptr = (char *)ptr;
	while (cptr[0] != ch && --count)
		cptr++;
	if (cptr[0] == ch)
		return ((void *)cptr);
	return (NULL);
}
