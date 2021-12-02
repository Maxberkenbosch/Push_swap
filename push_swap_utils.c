#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

long	ft_atoi(const char *str, t_list structs)
{
	structs.total = 0;
	structs.min_plus = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			structs.min_plus = -1;
		else
			error();
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		error();
	if (*str == '0' && !(*(str + 1) == '\0'))
		error();
	while (*str >= '0' && *str <= '9')
	{
		structs.total = structs.total * 10 + (*str - 48);
		str++;
	}
	if (*str != '\0')
		error();
	return (structs.total * structs.min_plus);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		len--;
		*ptr = c;
		ptr++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, '\0', n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	ptr = malloc(count * size);
	if (!ptr)
		error();
	ft_bzero(ptr, count * size);
	return (ptr);
}
