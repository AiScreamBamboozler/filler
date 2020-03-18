#include "libft.h"

size_t	ft_count_words(char *s, char c)
{
	size_t		cntr;
	size_t		wrd_count;
	_Bool		swtch;
	t_uchar		ch;

	cntr = 0;
	wrd_count = 0;
	swtch = 0;
	ch = (t_uchar)c;
	while (s && s[cntr])
	{
		if (s[cntr] != ch && swtch == 0)
			++wrd_count;
		if (s[cntr] != ch)
			swtch = 1;
		if (s[cntr] == ch)
			swtch = 0;
		++cntr;
	}
	return (wrd_count);
}
