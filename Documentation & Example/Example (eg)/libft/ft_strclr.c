#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	str_len;

	if (s)
	{
		str_len = ft_strlen((const char *)s);
		ft_bzero((t_uchar *)s, str_len);
	}
}
