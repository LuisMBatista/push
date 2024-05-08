NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
SRCS =	concent_join.c detective_work.c push_moves_2.c push.c reverse_rotate.c \
		rotate.c sort_3.c sort_stack.c sort_stacks_components.c split.c \
		stack_init.c support_finders.c swap.c syntax_friends.c main.c 
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
