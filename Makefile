NAME = push_swap

LIBFT = libft.a

SRC = push_swap.c

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
