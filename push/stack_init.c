#include "push_swap.h"

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
