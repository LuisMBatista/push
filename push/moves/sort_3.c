#include "../push_swap.h" 

void sort_3 (stack_node **a)
{
    stack_node *maximum_node;

    maximum_node = max_finder(*a);
    if(maximum_node == *a)
        ra(a);
    else if((*a)->next == maximum_node)
        rra(a);
    if ((*a)->next->nbr <(*a)->nbr)
        sa(a);
}