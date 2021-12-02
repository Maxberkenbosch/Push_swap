#include "push_swap.h"

int	check_order(t_list structs)
{
	int	i;

	i = 0;
	while (i < structs.size - 1)
	{
		if (structs.arr_a[i + 1] < structs.arr_a[i])
			return (0);
		i++;
	}
	return (1);
}

void	check_min_max_int(t_list structs, char **argv)
{
	int		i;
	long	*check_arr;

	i = 0;
	check_arr = calloc(structs.size, sizeof(long));
	while (structs.size > i)
	{
		check_arr[i] = ft_atoi(argv[i + 1], structs);
		i++;
	}
	i = 0;
	while (i < structs.size)
	{
		if (check_arr[i] > 2147483647 || check_arr[i] < -2147483648)
			error();
		i++;
	}
	free (check_arr);
}

void	check_double(t_list structs)
{
	int	i;
	int	j;

	i = 0;
	while ((structs.size - 1) > i)
	{
		j = i + 1;
		while (structs.size > j)
		{
			if (structs.arr_a[i] == structs.arr_a[j])
				error();
			j++;
		}
		i++;
	}
}
