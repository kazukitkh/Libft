#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if (!*str)
	{
		if (!c)
			return ((char *)str);
		return (NULL);
	}
	str += len - 1;
	if (!c)
		return ((char *)(str + 1));
	while (*str != c && len)
	{
		str--;
		len--;
	}
	if (len)
		return ((char *)str);
	return (NULL);
}

// int	main()
// {
// 	char a[] = "aiueo";
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'a'));
// 	printf("library : %s\n", strrchr(a, 'a'));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'i'));
// 	printf("library : %s\n", strrchr(a, 'i'));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'u'));
// 	printf("library : %s\n", strrchr(a, 'u'));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'e'));
// 	printf("library : %s\n", strrchr(a, 'e'));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'o'));
// 	printf("library : %s\n", strrchr(a, 'o'));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 0));
// 	printf("library : %s\n", strrchr(a, 0));
// 	printf("zisaku  : %p\n", ft_strrchr(a, 0));
// 	printf("library : %p\n", strrchr(a, 0));
// 	printf("library : %p\n", a);
// 	printf("zisaku  : %s\n", ft_strrchr(a, 1));
// 	printf("library : %s\n", strrchr(a, 1));
// 	printf("zisaku  : %s\n", ft_strrchr(a, 'z'));
// 	printf("library : %s\n", strrchr(a, 'z'));
// }