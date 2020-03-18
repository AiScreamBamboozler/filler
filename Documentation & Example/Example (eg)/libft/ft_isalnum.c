#include "libft.h"

int		ft_isalnum(int c)
{
	t_uchar	ch;

	ch = (t_uchar)c;
	if (c < '0' || c > 'z')
		return (0);
	if (ch >= '0' && ch <= '9')
		return (1);
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}
