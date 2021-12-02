#include "push_swap.h"
#include <unistd.h>

t_list	swap_a(t_list structs)
{
	int	temp;

	if (structs.arr_a)
	{
		temp = structs.arr_a[0];
		structs.arr_a[0] = structs.arr_a[1];
		structs.arr_a[1] = temp;
		write(1, "sa\n", 3);
	}
	return (structs);
}

t_list	swap_b(t_list structs)
{
	int	temp;

	if (structs.arr_b)
	{
		temp = structs.arr_b[0];
		structs.arr_b[0] = structs.arr_b[1];
		structs.arr_b[1] = temp;
		write(1, "sa\n", 3);
	}
	return (structs);
}
