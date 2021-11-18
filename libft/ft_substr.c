#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
	{
		sub_s[0] = 0;
		return (sub_s);
	}
	sub_s[len] = 0;
	while (i < len && s[start])
	{
		sub_s[i] = s[start++];
		i++;
	}
	sub_s[i] = 0;
	return (sub_s);
}
