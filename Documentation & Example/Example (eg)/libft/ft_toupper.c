#include "libft.h"

int	ft_toupper(int c)
{
	t_uchar	ch;

	ch = (t_uchar)c;
	if (c < 'a' || c > 'z')
		return (c);
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (c);
}
