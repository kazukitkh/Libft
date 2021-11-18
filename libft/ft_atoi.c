#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	sign = 0;
	nbr = 0;
	while (*str == ' ')
		str++;
	if (!ft_strncmp(str, "-2147483648", 11))
		return (-2147483648);
	if (*str == '-')
	{
		str++;
		sign++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += (*str - 48);
		str++;
	}
	if (sign)
		nbr *= -1;
	return (nbr);
}

int	main()
{
	char    str91[] = "     +5 ";
	printf("zisaku  : %d\n", ft_atoi(str91));
	printf("library : %d\n", atoi(str91));
	char    str92[] = "10000000000000";
	printf("zisaku  : %d\n", ft_atoi(str92));
	printf("library : %d\n", atoi(str92));
	char    str93[] = "1000321";
	printf("zisaku  : %d\n", ft_atoi(str93));
	printf("library : %d\n", atoi(str93));
	char    str94[] = "2147483648";
	printf("zisaku  : %d\n", ft_atoi(str94));
	printf("library : %d\n", atoi(str94));
	char    str95[] = "-2147483649";
	printf("zisaku  : %d\n", ft_atoi(str95));
	printf("library : %d\n", atoi(str95));
	char    str96[] = "100ab100";
	printf("zisaku  : %d\n", ft_atoi(str96));
	printf("library : %d\n", atoi(str96));
	char    str97[] = "\0";
	printf("zisaku  : %d\n", ft_atoi(str97));
	printf("library : %d\n", atoi(str97));
	char    str98[] = "111.11";
	printf("zisaku  : %d\n", ft_atoi(str98));
	printf("library : %d\n", atoi(str98));
	char    str99[] = "-2147483648";
	printf("zisaku  : %d\n", ft_atoi(str99));
	printf("library : %d\n", atoi(str99));
	char    str99_1[] = "2147483647";
	printf("zisaku  : %d\n", ft_atoi(str99_1));
	printf("library : %d\n", atoi(str99_1));
	char str99_2[] ="999999999";
	printf("zisaku  : %d\n", ft_atoi(str99_2));
	printf("library : %d\n", atoi(str99_2));
}