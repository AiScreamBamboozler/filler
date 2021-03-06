#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uchar		*dst_cpy;
	t_uchar		*src_cpy;
	size_t		cntr;

	dst_cpy = (t_uchar *)dst;
	src_cpy = (t_uchar *)src;
	cntr = 0;
	if (!(dst || src))
		return (NULL);
	while (cntr < n)
	{
		dst_cpy[cntr] = src_cpy[cntr];
		if (src_cpy[cntr] == (t_uchar)c)
			return (dst + cntr + 1);
		if (cntr == n)
			break ;
		++cntr;
	}
	return (NULL);
}
