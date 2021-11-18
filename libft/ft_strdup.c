#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	s_size;
	int		i;

	s_size = ft_strlen(s);
	s_dup = malloc(sizeof(char) * (s_size + 1));
	if (!s_dup)
		return (NULL);
	s_dup[s_size] = 0;
	i = -1;
	while (++i < (int)s_size)
		s_dup[i] = s[i];
	return (s_dup);
}
