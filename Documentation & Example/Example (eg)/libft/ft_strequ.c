#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		ans;

	if (!s1 || !s2)
		return (0);
	ans = ft_strcmp(s1, s2);
	if (ans == 0)
		return (1);
	return (0);
}
