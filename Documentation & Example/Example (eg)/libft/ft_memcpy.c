#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	return (dst);
}
