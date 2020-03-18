#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		nul_pos;
	int		s2_cntr;

	nul_pos = 0;
	s2_cntr = 0;
	while (s1[nul_pos])
		++nul_pos;
	while (s2[s2_cntr])
	{
		s1[nul_pos] = s2[s2_cntr];
		++nul_pos;
		++s2_cntr;
	}
	s1[nul_pos] = '\0';
	return (s1);
}
