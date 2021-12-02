#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_list
{
	int		*dec_array;
	int		*sorted_array;
	int		*simple_arr;
	int		max_num;
	int		*arr_a;
	int		*arr_b;
	int		size;
	int		size_a;
	int		size_b;
	long	total;
	long	min_plus;
}	t_list;

//push_swap_utils
size_t		ft_strlen(const char *s);
long int	ft_atoi(const char *str, t_list structs);
void		*ft_calloc(size_t count, size_t size);

//swap functions
t_list		swap_a(t_list structs);
t_list		swap_b(t_list structs);

//push functions
t_list		push_a(t_list structs);
t_list		push_b(t_list structs);

//rotate functions
t_list		rotate_a(t_list structs);
t_list		rotate_b(t_list structs);

//reverse rotate functions
t_list		reverse_rotate_a(t_list structs);

//sort three
t_list		sort_three(t_list structs);
t_list		sorting(t_list structs, int one, int two, int three);

//sort five
t_list		sort_five(t_list structs);

//radix sort
t_list		make_array(t_list structs);
t_list		radix_sort(t_list structs);

//checks
int			check_order(t_list structs);
void		check_min_max_int(t_list structs, char **argv);
void		check_double(t_list structs);

//error
void		error(void);

//free functions
void		free_arr(t_list structs);

#endif
