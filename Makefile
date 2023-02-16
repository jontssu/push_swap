NAME = push_swap

LIBFT = libft.a

SRC = push_swap.c init_vars.c init_n_print_stack.c copy_n_sort_array.c swap.c push.c rotate.c reverse_rotate.c push_smalls.c rotate_b.c

OSRC = $(SRC:%.c=%.o)

WWW = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OSRC)
	make -C libft
	cc $(WWW) $(OSRC) -o $(NAME) -L libft -lft

clean:
	rm -f $(OSRC)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -rf ./libft/$(LIBFT)

%.o: %.c
	cc $(WWW) -c -o $@ $^

re: fclean all
