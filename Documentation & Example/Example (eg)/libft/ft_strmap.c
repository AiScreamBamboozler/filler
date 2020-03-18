#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	str_len;
	size_t	cntr;
	char	*newstr;

	if (s && f)
	{
		str_len = ft_strlen(s);
		cntr = 0;
		newstr = ft_strnew(str_len);
		if (!newstr)
			return (NULL);
		while (newstr && s[cntr])
		{
			newstr[cntr] = (*f)(s[cntr]);
			++cntr;
		}
		return (newstr);
	}
	return (NULL);
}
