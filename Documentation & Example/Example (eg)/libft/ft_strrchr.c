#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	cntr;
	char	ch;
	char	*ptr;

	cntr = 0;
	ch = (char)c;
	ptr = NULL;
	while (s[cntr])
	{
		if (s[cntr] == ch)
			ptr = (char *)(&s[cntr]);
		++cntr;
	}
	if (s[cntr] == ch)
		ptr = (char *)(&s[cntr]);
	return (ptr);
}
