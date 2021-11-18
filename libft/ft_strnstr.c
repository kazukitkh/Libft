#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	size_ndl;

	size_ndl = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (ft_strlen(haystack) < size_ndl || !*haystack)
		return (NULL);
	while (--len - size_ndl + 2 && haystack[size_ndl - 1])
	{
		if (*haystack == *needle)
		{
			j = 1;
			while (needle[j] && haystack[j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

// int	main()
// {
// 	char str81_0[] ="nesugosita!!!";
// 	char str81_1[] ="go";
// 	printf("zisaku  : %s\n", ft_strnstr(str81_0, str81_1, 5));
// 	printf("library : %s\n", strnstr(str81_0, str81_1, 5));
// 	printf("zisaku  : %s\n", ft_strnstr(str81_0, str81_1, 6));
// 	printf("library : %s\n", strnstr(str81_0, str81_1, 6));
// }