#include "push_swap.h"
#include <stdlib.h>

void	free_arr(t_list structs)
{
	if (structs.dec_array)
		free(structs.dec_array);
	if (structs.dec_array)
		free(structs.sorted_array);
	if (structs.dec_array)
		free(structs.simple_arr);
}
