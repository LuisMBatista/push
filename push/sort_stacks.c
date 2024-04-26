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
        init_node_a(*a,*b);
        move_to_b(a,b);
    }
    sort_3(a);
    while(*b)
    {
        init_node_b(*a,*b);
        move_to_a(a,b);
    }
    current_index(a);
    min_to_top(a);
}

void init_node_a(t_stack_node *a, t_stack_node *b)
{
    current_index(a);
    current_index(b);
    set_target_a(a,b);
    cost_analysis_a(a,b);
    set_cheapest(a);
}
void cheapest_node(t_stack_node *stack)
{
    int cheapest_value;
    t_stack_node *cheapest_node;

    cheapest_value = INT_MAX;
    while(stack)
    {
        if(stack ->push_cost < cheapest_value)
        {
            cheapest_value = stack ->push_cost;
            cheapest_node = stack;
        }
        stack = stack ->next;
    }
    cheapest_node ->cheapest = true;
}
init_node_b(t_stack_node *a, t_stack_node *b)
{
    current_index(a);
    current_index(b);
    set_target_b(a,b);
}
