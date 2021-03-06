#include "../inc/filler.h"

static int		ft_verify_1st_num(char *str)
{
	size_t		cntr;

	if (!str)
		return (0);
	cntr = 0;
	while (str[cntr])
	{
		if (!(str[cntr] >= '0' && str[cntr] <= '9'))
			return (0);
		++cntr;
	}
	return (1);
}

static int		ft_verify_2nd_num(char *str)
{
	size_t		len_str;
	size_t		cntr;

	if (!str)
		return (0);
	len_str = ft_strlen(str);
	cntr = 0;
	if (str[len_str - 1] != ':')
		return (0);
	while (str[cntr] && cntr < (len_str - 1))
	{
		if (!(str[cntr] >= '0' && str[cntr] <= '9'))
			return (0);
		++cntr;
	}
	return (1);
}

int				ft_get_map_size(t_input *data)
{
	int			ans;
	char		*line;
	char		**arr;

	if ((ans = get_next_line(0, &line)) < 0)
		return (-1);
	if (ans == 0)
		ft_memdel((void **)(&line));
	if (ans == 0)
		return (2);
	if (ft_count_words(line, ' ') != 3)
		return (-1);
	arr = ft_strsplit(line, ' ');
	if (ft_strcmp(arr[0], "Plateau") != 0)
		return (-1);
	if (ft_verify_1st_num(arr[1]) == 0)
		return (-1);
	if (ft_verify_2nd_num(arr[2]) == 0)
		return (-1);
	data->mp_rws = ft_atoi(arr[1]);
	data->mp_cls = ft_atoi(arr[2]);
	ft_memdel((void **)(&line));
	ft_del_matrix((void **)arr, 3);
	return (0);
}
