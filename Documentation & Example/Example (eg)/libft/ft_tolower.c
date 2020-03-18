#include "libft.h"

int	ft_tolower(int c)
{
	t_uchar	ch;

	ch = (t_uchar)c;
	if (c < 'A' || c > 'Z')
		return (c);
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (c);
}
