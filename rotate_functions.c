#include "push_swap.h"
#include <unistd.h>

t_list	rotate_a(t_list structs)
{
	int	temp;
	int	i;

	i = 0;
	temp = structs.arr_a[0];
	while (i < structs.size)
	{
		structs.arr_a[i] = structs.arr_a[i + 1];
		i++;
	}
	structs.arr_a[structs.size_a - 1] = temp;
	write(1, "ra\n", 3);
	return (structs);
}

t_list	rotate_b(t_list structs)
{
	int	temp;
	int	i;

	i = 0;
	temp = structs.arr_a[0];
	while (i < structs.size)
	{
		structs.arr_a[i] = structs.arr_a[i + 1];
		i++;
	}
	structs.arr_a[structs.size_a - 1] = temp;
	write(1, "ra\n", 3);
	return (structs);
}

t_list	reverse_a_and_b(t_list structs)
{
	structs = rotate_a(structs);
	structs = rotate_b(structs);
	write(1, "rr\n", 3);
	return (structs);
}
