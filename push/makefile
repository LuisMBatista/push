NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
LIBFT = ../libft/libft.a
FT_PRINTF = ../ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(OBJS) -L../libft -lft -L../ft_printf -lftprintf -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C ../libft

$(FT_PRINTF):
	@make -C ../ft_printf

clean:
	@make -C ../libft clean
	@make -C ../ft_printf clean
	rm -f $(OBJS)

fclean: clean
	@make -C ../libft fclean
	@make -C ../ft_printf fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
