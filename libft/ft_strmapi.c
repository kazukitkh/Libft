#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map_str;
	int		i;

	i = -1;
	map_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_bzero(map_str, ft_strlen(s));
	while (++i < (int)ft_strlen(s))
		map_str[i] = (*f)((unsigned)i, s[i]);
	return (map_str);
}

// char	test_strmapi(unsigned int n, char c)
// {
// 	if (!(c + n >= 65 && c + n < 91 || c + n >= 97 && c + n < 123))
// 		return (c);
// 	return (c + (int)n);
// }
// int	main(int argc, char *argv[])
// {
// 	printf("%s\n", ft_strmapi("Hello", test_strmapi));
// 	return 0;
// }