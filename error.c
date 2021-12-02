#include <unistd.h>
#include <stdlib.h>

void	error(void)
{
	write(1, "Error\n", 6);
	exit (0);
}
