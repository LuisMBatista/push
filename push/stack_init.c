#include "push_swap.h"

static void append_node (t_stack_node **stack, int n)
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if(!stack)
        return;
    node = malloc(sizeof(t_stack_node));
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
        last_node = ft_ultima_node(*stack);
        last_node ->next =node;
        node->prev = last_node;
    }
}

void    init_stack_a(t_stack_node **a, char **argv)
{
    long n;
    int quack;

    quack = 0;
    while(argv [quack])
    {
        if (syntax(argv[quack]))
            free_stack(a);
        n = ft_atoi(argv[quack]);
        if (n > INT_MAX || n < INT_MIN)
            free_stack(a);
        if (duplicated(*a, (int)n))
            free_stack(a);
        append_node(a, (int)n);
        quack++;
    }
}
