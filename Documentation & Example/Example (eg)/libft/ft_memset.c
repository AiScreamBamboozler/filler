#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < len)
	{
		((unsigned char *)b)[cntr] = (unsigned char)c;
		++cntr;
	}
	return (b);
}
