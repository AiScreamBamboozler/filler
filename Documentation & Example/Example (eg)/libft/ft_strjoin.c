#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_len;
	size_t	str2_len;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	newstr = ft_strnew(str1_len + str2_len);
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
