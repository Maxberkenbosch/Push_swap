#include "push_swap.h"

int	search_lowest_num(t_list structs)
{
	int	i;
	int	lowest;

	i = 1;
	lowest = structs.arr_a[0];
	while (i < (structs.size_a))
	{
		if (structs.arr_a[i] < lowest)
			lowest = structs.arr_a[i];
		i++;
	}
	return (lowest);
}

int	check_position(t_list structs)
{
	int	i;
	int	lowest;

	i = 0;
	lowest = search_lowest_num(structs);
	while (i < structs.size_a)
	{
		if (structs.arr_a[i] == lowest)
			return (i);
		i++;
	}
	return (i);
}

t_list	lowest_begin(t_list structs)
{
	int	lowest;

	lowest = search_lowest_num(structs);
	while (structs.arr_a[0] != lowest)
		structs = rotate_a(structs);
	structs = push_b(structs);
	if (structs.size == 5)
	{
		lowest = search_lowest_num(structs);
		while (structs.arr_a[0] != lowest)
			structs = rotate_a(structs);
		structs = push_b(structs);
	}
	structs = sort_three(structs);
	structs = push_a(structs);
	if (structs.size == 5)
		structs = push_a(structs);
	return (structs);
}

t_list	lowest_end(t_list structs)
{
	int	lowest;

	lowest = search_lowest_num(structs);
	while (structs.arr_a[0] != lowest)
		structs = reverse_rotate_a(structs);
	structs = push_b(structs);
	if (structs.size == 5)
	{
		lowest = search_lowest_num(structs);
		while (structs.arr_a[0] != lowest)
			structs = reverse_rotate_a(structs);
		structs = push_b(structs);
	}
	structs = sort_three(structs);
	structs = push_a(structs);
	if (structs.size == 5)
		structs = push_a(structs);
	return (structs);
}

t_list	sort_five(t_list structs)
{
	if (check_position(structs) < (structs.size_a / 2))
		structs = lowest_begin(structs);
	else
		structs = lowest_end(structs);
	return (structs);
}
