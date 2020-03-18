#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	cntr;
	size_t	strlen;
	char	*str_ptr;

	cntr = 0;
	strlen = ft_strlen(s1);
	str_ptr = (char *)malloc(sizeof(char) * strlen + 1);
	if (!(str_ptr))
		return (NULL);
	while (cntr < strlen)
	{
		str_ptr[cntr] = s1[cntr];
		++cntr;
	}
	str_ptr[cntr] = '\0';
	return (str_ptr);
}
