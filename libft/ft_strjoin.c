#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*jnd_str;
	int		i;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	jnd_str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!jnd_str)
		return (NULL);
	jnd_str[size_s1 + size_s2] = 0;
	i = -1;
	while (++i < (int)size_s1)
		jnd_str[i] = s1[i];
	while (i < (int)(size_s1 + size_s2))
	{
		jnd_str[i] = *s2;
		s2++;
		i++;
	}
	return (jnd_str);
}
