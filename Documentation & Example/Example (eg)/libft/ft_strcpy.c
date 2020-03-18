#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	strlen;
	size_t	cntr;

	strlen = ft_strlen(src);
	cntr = 0;
	while (cntr < strlen)
	{
		dst[cntr] = src[cntr];
		++cntr;
	}
	dst[cntr] = '\0';
	return (dst);
}
