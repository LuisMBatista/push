#include "push_swap.h"

void sort_stacks(t_stack_node **a, t_stack_node **b)
{
    int len_a;
    int len_b;

    len_a = ft_tamanho_lst(*a);
    len_b = ft_tamanho_lst(*b);
    if (len_b == 0)
    {
        pb(b, a);
        pb(b, a);
    }
    while(len_a > 3)
    {
        init_node(*a,*b);
        move_to_b(a,b);
    }
    sort_3(a);
    while(*b)
    {
        init_node(*b,*a);
        move_to_a(a,b);
    }
    current_position(a);
    min_to_top(a);
}