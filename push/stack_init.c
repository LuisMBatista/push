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
void current_index(t_stack_node *stack)
{
    int quack;
    int mediana;

    quack = 0;
    if(!stack)
        return;
    mediana = ft_tamanho_lst(stack) / 2;
    while(stack)
    {
        stack ->index = quack;
        if(quack < mediana)
            stack -> median = true;
        else
            stack -> median = false;
        stack = stack ->next;
        quack++;
    }
}
static void set_target_a(t_stack_node *a, t_stack_node *b)
{
    t_stack_node *b_node;
    t_stack_node *target_node;
    int best_smaller_nbr;

    while(a)
    {
        best_smaller_nbr = INT_MIN;
        b_node = b;
        while(b_node)
        {
            if(b_node ->nbr < a->nbr && b_node ->nbr > best_smaller_nbr)
            {
                best_smaller_nbr = b_node ->nbr;
                target_node = b_node;
            }
            b_node = b_node ->next;
        }
        if (best_smaller_nbr == INT_MIN)
            a ->target = max_finder(b);
        else
            a ->target = target_node;
        a = a ->next;
    }
}
static void set_target_b(t_stack_node *a, t_stack_node *b)
{
    t_stack_node *a_node;
    t_stack_node *target_node;
    int best_bigger_nbr;

    while(a)
    {
        best_bigger_nbr = INT_MAX;
        a_node = a;
        while(a_node)
        {
            if(a_node ->nbr < b->nbr && a_node ->nbr > best_bigger_nbr)
            {
                best_bigger_nbr = a_node ->nbr;
                target_node = a_node;
            }
            a_node = a_node ->next;
        }
        if (best_bigger_nbr == INT_MAX)
            b ->target = min_finder(a);
        else
            b ->target = target_node;
        b = b ->next;
    }
}
static void cost_analysis_a(t_stack_node *a, t_stack_node *b)
{
    int len_a;
    int len_b;

    len_a = ft_tamanho_lst(a);
    len_b = ft_tamanho_lst(b);
    while(a)
    {
        a ->push_cost = a->index;
        if (!(a->median))
            a ->push_cost = len_a - (a->index);
        if (a->target->median)
            a->push_cost += a->target->index;
        else
            a->push_cost += len_b - (a->target->index);
        a = a->next;
    } 
}

