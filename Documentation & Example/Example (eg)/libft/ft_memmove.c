#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cntr;
	t_uchar *src_cpy;
	t_uchar *dst_cpy;

	cntr = 0;
	src_cpy = (t_uchar *)src;
	dst_cpy = (t_uchar *)dst;
	if (dst < src)
		while (cntr < len)
		{
			dst_cpy[cntr] = src_cpy[cntr];
			++cntr;
		}
	else
		while (cntr < len)
		{
			dst_cpy[(len - 1) - cntr] = src_cpy[(len - 1) - cntr];
			++cntr;
		}
	return (dst);
}
