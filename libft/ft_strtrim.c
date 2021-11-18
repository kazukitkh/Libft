#include "libft.h"

void	func_trim2(char **new_str, int *num, size_t *size)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = size[0] - 1;
	while (start <= end && num[start])
		start++;
	while (start < end && num[end])
		end--;
	(*new_str)[end + 1] = 0;
	*new_str += start;
}

void	func_trim1(size_t *size, char const *s1, char const *set, int **num)
{
	int	i;
	int	j;

	i = -1;
	ft_bzero(*num, size[0]);
	while (++i < (int)size[0])
	{
		j = -1;
		while (++j < (int)size[1])
			if (s1[i] == set[j])
				(*num)[i] = 1;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size[2];
	int		*num;
	char	*new_str;

	size[0] = ft_strlen(s1);
	size[1] = ft_strlen(set);
	num = malloc(sizeof(int) * (size[0]));
	if (!s1 || !num)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	func_trim1(size, s1, set, &num);
	// for (int i = 0; i < size[0]; i++)
	// 	printf("%d", num[i]);
	new_str = malloc(sizeof(char) * (size[0] + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, size[0] + 1);
	// printf("%s, %s, %zu", new_str, s1, size[0]);
	func_trim2(&new_str, num, size);
	return (new_str);
}

// int	main()
// {
// 	char	s[] = "12345";
// 	char	set[] = "12345";
// 	printf("\n%s", ft_strtrim(s, set));
// 	return 0;
// }