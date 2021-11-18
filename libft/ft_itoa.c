#include "libft.h"

void	itoa_func(char *str, int n, int *i)
{
	if (n > 9)
		itoa_func(str, n / 10, i);
	n %= 10;
	str[*i] = n + 48;
	(*i)++;
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (12));
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		i++;
		str[0] = '-';
		n *= -1;
	}
	itoa_func(str, n, &i);
	str[i] = 0;
	return (str);
}
