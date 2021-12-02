#include "push_swap.h"
#include <stdio.h>

t_list	get_list(t_list structs, char **argv)
{
	int	i;

	i = 0;
	structs.arr_a = ft_calloc(structs.size + 1, sizeof(int));
	structs.arr_b = ft_calloc(structs.size + 1, sizeof(int));
	while (structs.size_a > i)
	{
		structs.arr_a[i] = ft_atoi(argv[i + 1], structs);
		i++;
	}
	return (structs);
}

int	main(int argc, char **argv)
{
	t_list	structs;
	int		i;

	i = 0;
	structs.size = argc - 1;
	structs.size_a = structs.size;
	structs.size_b = 0;
	check_min_max_int(structs, argv);
	structs = get_list(structs, argv);
	check_double(structs);
	if (check_order(structs))
		return (0);
	if (argc > 1)
	{
		if (argc > 1 && argc < 5)
			structs = sort_three(structs);
		if (argc > 4 && argc < 7)
			structs = sort_five(structs);
		if (argc > 6)
			structs = radix_sort(structs);
	}
	return (0);
}
