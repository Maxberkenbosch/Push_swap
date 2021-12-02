FILES =	main.c\
		push_functions.c\
		push_swap_utils.c\
		reverse_rotate_functions.c\
		rotate_functions.c\
		sort_five.c\
		sort_three.c\
		swap_functions.c\
		radix_sort.c\
		error.c\
		checks.c\
		free_functions.c

OBJS = $(FILES:.c=.o)

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

CC = gcc

%.o : %.c
	@$(CC) $(CFLAGS) -c $<
	@echo "Compiling $<"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJS)
	@echo "Removing object files"

fclean: clean
	rm -rf $(NAME)

re: fclean all
