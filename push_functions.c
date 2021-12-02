#include "push_swap.h"
#include <unistd.h>

t_list	push_a(t_list structs)
{
	int	i;
	int	j;

	i = structs.size;
	j = 0;
	if (structs.size_b != 0)
	{
		while (i > 0)
		{
			structs.arr_a[i] = structs.arr_a[i - 1];
			i--;
		}
		structs.arr_a[0] = structs.arr_b[0];
		while (j < structs.size_b)
		{
			structs.arr_b[j] = structs.arr_b[j + 1];
			j++;
		}
		structs.size_a += 1;
		structs.size_b -= 1;
		write(1, "pa\n", 3);
	}
	return (structs);
}

t_list	push_b(t_list structs)
{
	int	i;
	int	j;

	i = structs.size;
	j = 0;
	if (structs.size_a != 0)
	{
		while (i > 0)
		{
			structs.arr_b[i] = structs.arr_b[i - 1];
			i--;
		}
		structs.arr_b[0] = structs.arr_a[0];
		while (j < structs.size_a)
		{
			structs.arr_a[j] = structs.arr_a[j + 1];
			j++;
		}
		structs.size_a -= 1;
		structs.size_b += 1;
		write(1, "pb\n", 3);
	}
	return (structs);
}
