#include "push_swap.h"

static void move_a_b(t_stack_node **a, t_stack_node **b)
{
    t_stack_node *cheapest;

    cheapest = cheapest_node(*a);
    if(cheapest->median && cheapest->target->median)
    {
       rotate_both(a, b, cheapest);
    }
    else if(!(cheapest->median) && !(cheapest->target->median))
    {
        rev_rotate_both(a, b, cheapest);
    }
    prep_for_push(a, cheapest,'a');
    prep_for_push(b, cheapest->target,'b');
    pb(b, a);
}

static void move_b_a(t_stack_node **a, t_stack_node **b)
{
    prep_for_push(a, (*b)->target,'a');
    pa(a, b);
}
