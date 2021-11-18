#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	while (++i < (int)n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}

//後ろから文字を入れることによって、本家memcpyと変わることがあった。例えば、コピー元の前半部分が、memcpyによって変更された場合である。
// 元々の函数:
// void	*ft_memcpy(void *dest, void *src, int n)
// {
// 	while (n--)
// 		((char *)dest)[n] = ((char *)src)[n];
// 	return (dest);
// }
// 今回: ./a.out abc world 5
// dorldorld
// 本家:
// worldorld