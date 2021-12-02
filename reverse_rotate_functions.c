#include "push_swap.h"
#include <unistd.h>

t_list	reverse_rotate_a(t_list structs)
{
	int	i;
	int	temp;

	i = structs.size_a - 1;
	temp = structs.arr_a[structs.size_a - 1];
	while (i > 0)
	{
		structs.arr_a[i] = structs.arr_a[i - 1];
		i--;
	}
	structs.arr_a[0] = temp;
	write(1, "rra\n", 4);
	return (structs);
}
