#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		ans;

	if (!s1 || !s2)
		return (0);
	ans = ft_strncmp(s1, s2, n);
	if (ans == 0)
		return (1);
	return (0);
}
