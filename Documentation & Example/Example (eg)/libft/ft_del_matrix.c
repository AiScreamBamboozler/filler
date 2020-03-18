#include "libft.h"

void		ft_del_matrix(void **arr, size_t rows)
{
	size_t		cntr;

	if (!rows || !arr)
		return ;
	cntr = 0;
	while (cntr < rows && arr[cntr])
	{
		free(arr[cntr]);
		arr[cntr] = NULL;
		++cntr;
	}
	free(arr);
	arr = NULL;
	return ;
}
