#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	cntr;

	cntr = 0;
	ft_bzero(dst, len);
	while (cntr < len && src[cntr])
	{
		dst[cntr] = src[cntr];
		++cntr;
	}
	return (dst);
}
