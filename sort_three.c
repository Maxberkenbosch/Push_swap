#include "push_swap.h"

t_list	sorting(t_list structs, int one, int two, int three)
{
	if (one > two && two < three && one < three)
		structs = swap_a(structs);
	else if (one > two && two > three)
	{
		structs = swap_a(structs);
		structs = reverse_rotate_a(structs);
	}
	else if (one > two && two < one && three < one)
		structs = rotate_a(structs);
	else if (one < three && two > three && one < three)
	{
		structs = swap_a(structs);
		structs = rotate_a(structs);
	}
	else if (one < two && two > three && three < one)
		structs = reverse_rotate_a(structs);
	return (structs);
}

t_list	sort_three(t_list structs)
{
	int	one;
	int	two;
	int	three;

	one = structs.arr_a[0];
	two = structs.arr_a[1];
	three = structs.arr_a[2];
	structs = sorting(structs, one, two, three);
	return (structs);
}
