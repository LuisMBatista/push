#include "push_swap.h"

static long	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

static void append_node (stack_node **stack, int n)
{
    stack_node    *node;
    stack_node    *last_node;

    if(!stack)
        return;
    node = malloc(sizeof(stack_node));
    if(!node)
        return;
    node ->next = NULL;
    node ->nbr = n;
    if(!(*stack))
    {
        *stack = node;
        node ->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node ->next =node;
        node->prev = last_node;
    }
}

void    init_stack_a(stack_node **a, char **argv)
{
    long n;
    int quack;

    quack = 0;
    while(argv [quack])
    {
        if (syntax(argv[quack]))
            free_stack(a);
        n = ft_atol(argv[quack]);
        if (n > INT_MAX || n < INT_MIN)
            free_stack(a);
        if (duplicado(*a, (int)n))
            free_stack(a);
        append_node(a, (int)n);
        quack++;
    }
}
