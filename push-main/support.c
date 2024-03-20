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