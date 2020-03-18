#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cntr;

	cntr = 0;
	while (s[cntr] != (char)c && s[cntr])
		++cntr;
	return (s[cntr] == (char)c ? (char *)(&(s[cntr])) : NULL);
}
