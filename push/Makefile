NAME = push_swap

SRCS = main.c split.c stack_init.c support.c 

MOVES = push_moves.c sort_3.c sort_stacks.c

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
		@make -s -C ft_printf
		@$(CC) $(CFLAGS) -s  $(addprefix moves/,$(MOVES)) -o $(NAME) $(OBJ) ft_printf/libftprintf.a 
		@echo "makou"

clean:
		@make clean -s -C ft_printf
		@$(RM) $(OBJ)

fclean:	clean
		@make fclean -s -C ft_printf
		@$(RM) $(NAME)
		@echo "apagou"

re:	fclean $(NAME)
		@echo "makou outra vez"