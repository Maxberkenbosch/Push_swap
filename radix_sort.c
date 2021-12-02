#include "push_swap.h"

t_list	sort_array(t_list structs)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = i + 1;
	while (i < structs.size)
	{
		j = i + 1;
		while (j < structs.size)
		{
			if (structs.sorted_array[i] > structs.sorted_array[j])
			{
				temp = structs.sorted_array[i];
				structs.sorted_array[i] = structs.sorted_array[j];
				structs.sorted_array[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (structs);
}

t_list	simplify_array(t_list structs)
{
	int	i;
	int	j;

	structs.simple_arr = calloc(structs.size, sizeof(int));
	i = 0;
	while (i < structs.size)
	{
		j = 0;
		while (j < structs.size)
		{
			if (structs.sorted_array[i] == structs.dec_array[j])
				structs.simple_arr[j] = i;
			j++;
		}
		i++;
	}
	return (structs);
}

t_list	make_array(t_list structs)
{
	int	i;

	if (structs.sorted_array || structs.dec_array)
		free_arr(structs);
	structs.sorted_array = calloc(structs.size, sizeof(int));
	structs.dec_array = calloc(structs.size, sizeof(int));
	i = 0;
	while (i < structs.size_a)
	{
		structs.sorted_array[i] = structs.arr_a[i];
		structs.dec_array[i] = structs.arr_a[i];
		i++;
	}
	structs = sort_array(structs);
	structs = simplify_array(structs);
	i = 0;
	return (structs);
}

static int	ft_count_num(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 2;
		i++;
	}
	return (i);
}

t_list	radix_sort(t_list structs)
{
	int	max_size;
	int	i;
	int	j;

	i = 0;
	structs = make_array(structs);
	max_size = (ft_count_num(structs.size));
	while (i < max_size)
	{
		j = 0;
		while (structs.size > j)
		{
			if ((structs.simple_arr[j] & (1 << i)) == 0)
				structs = push_b(structs);
			else
				structs = rotate_a(structs);
			j++;
		}
		while (structs.size_b != 0)
			structs = push_a(structs);
		i++;
		structs = make_array(structs);
	}
	return (structs);
}
