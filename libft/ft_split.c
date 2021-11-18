#include "libft.h"

int	func_split(char const *s, char c, char ***strs, int **n)
{
	int	j;

	j = (*n)[0];
	if (s[j] != c)
	{
		while (j < (int)ft_strlen(s))
		{
			if (s[j] == c)
				break ;
			j++;
		}
		strs[(*n)[1]] = malloc(sizeof(char) * (j - (*n)[0] + 1));
		if (!strs[(*n)[1]])
		{
			free(strs);
			while ((*n)[1]--)
				free(strs[(*n)[1]]);
			return (0);
		}
		ft_bzero(strs[(*n)[1]], (size_t)(j - (*n)[0]));
		strs[(*n)[1]] = ft_memcpy(strs[(*n)[1]], s + (*n)[0], j - (*n)[0]);
		(*n)[1]++;
	}
	(*n)[0] = j;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		*n;
	char	**strs;

	strs = malloc(sizeof(char *) * (ft_strlen(s) / 2 + 1));
	n = malloc(sizeof(int) * 3);
	n[2] = 0;
	if (!strs)
		return (NULL);
	n[0] = -1;
	n[1] = 0;
	while (++n[0] < (int)ft_strlen(s))
		if (!func_split(s, c, &strs, &n))
			return (NULL);
	strs[n[1]] = NULL;
	return (strs);
}

// for main function
// char	**str;

// str = malloc(sizeof(char *) * (ft_strlen(argv[1]) / 2 + 1));
// printf("hello\n");
// str = ft_split(argv[1], argv[2][0]);
// for (int i = 0; str[i]; i++)
// 	printf("%s\n", str[i]);