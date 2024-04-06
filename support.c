#include "push_swap.h"

int syntax (char *nbr)
{
    if((nbr[0]!= '+') || (nbr[0]!= '-') || (!(nbr[0] >= '0' && nbr[0] <= '9')))
        return(1);
    if(nbr[0]== '+' || nbr[0]== '-' && !(nbr[1] >= '0' && nbr[1] <= '9'))
        return(1);
    while(*nbr)
    {   
        *nbr++;
        if (!(*nbr >= '0' && *nbr <= '9'))
            return(1);
    }
    return(0);
}

void free_stack (stack_node **a)
{
    stack_node *temp;
    stack_node *del;

    if (!(*a))
        return(1);
    del = *a;
    while(del)
    {
        temp = del;
    }
}

bool stack_sorted (stack_node *stack)
{
    if(!stack)
        return(1);
    while (stack -> next)
    {
        if (stack ->nbr > stack->next->nbr)
            return(false);
        stack = stack->next;
    }
    return(true);
}

stack_node *minimum_finder (stack_node *stack)
{
    long min;
    stack_node *min_node;

    if (!stack)
        return(NULL);
    min= INT_MAX;
    while(stack)
    {
        if(stack ->nbr < min)
        {
            min = stack->nbr;
            min_node = stack;
        }
        stack = stack->next;
    }
    return(min_node);
}

stack_node *max_finder (stack_node *stack)
{
    long max;
    stack_node *max_node;

    if (!stack)
        return(NULL);
    max= INT_MIN;
    while(stack)
    {
        if(stack ->nbr < max)
        {
            max = stack->nbr;
            max_node = stack;
        }
        stack = stack->next;
    }
    return(max_node);
}