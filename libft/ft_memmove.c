#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s_dst;
	char	*s_src;

	s_dst = (char*)dst;
	s_src = (char*)src;
	if (s_dst > s_src && (s_src + n > s_dst))
	{
		s_dst = s_dst + n - 1;
		s_src = s_src + n - 1;
		while (n--)
			*s_dst-- = *s_src--; 
	}
	else
	{ 
		while(n--)
			*s_dst++ = *s_src++;
	}
	return dst;
}

//memmoveとmemcpyの違いはポインタが指すメモリ領域に重複があった場合の動作が異なります。って書いてたけど
// 関数同じ内容でも別にいいんじゃないか?

// void* my_memmove(void* dst, const void* src, size_t n)
// { 
// 	char	*s_dst;
// 	char	*s_src;
	
// 	s_dst = (char*)dst;
// 	s_src = (char*)src;
// 	if (s_dst > s_src && (s_src + n > s_dst))
// 	{
// 		s_dst = s_dst + n - 1;
// 		s_src = s_src + n - 1;
// 		while (n--)
// 			*s_dst-- = *s_src--; 
// 	}
// 	else
// 	{ 
// 		while(n--)
// 			*s_dst++ = *s_src++;
// 	}
// 	return dst;
// }
