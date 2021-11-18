#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while(*str1 && *str2 && *str1 == *str2 && n--)
	{
		str1++;
		str2++;
	}
	return ((unsigned char)str1[0] - (unsigned char)str2[0]);
}

// int	main()
// {
// 	char str141[] = "heheailweh";
// 	char *str142 = str141 + 2;
// 	char str143[] = "";
// 	printf("library: %d\n", strncmp(str142, str141, 14));
// 	printf("zisaku : %d\n", ft_strncmp(str142, str141, 14));
// 	printf("library: %d\n", strncmp(str141, str143, 7));
// 	printf("zisaku : %d\n", ft_strncmp(str141, str143, 7));
// 	printf("library: %d\n", strncmp(str141, str143, 8));
// 	printf("zisaku : %d\n", ft_strncmp(str141, str143, 8));
// }