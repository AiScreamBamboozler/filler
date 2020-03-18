#include "libft.h"

int		ft_isalpha(int c)
{
	t_uchar	ch;

	ch = (t_uchar)c;
	if (c > 122 || c < 65)
		return (0);
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return (1);
	return (0);
}
