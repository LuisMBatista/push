#include "push_swap.h"

int syntax (char *nbr)
{
    if((nbr[0]!= '+') || (nbr[0]!= '-') || (!(nbr[0] >= '0' && nbr[0] <= '9')))
        return(1);
    if(nbr[0]== '+' || (nbr[0]== '-' && !(nbr[1] >= '0' && nbr[1] <= '9')))
        return(1);
    while(*nbr)
    {   
        nbr++;
        if (!(*nbr >= '0' && *nbr <= '9'))
            return(1);
    }
    return(0);
}

void free_stack (t_stack_node **a)
{
    t_stack_node *temp;

    if(!a)
        return;
    while(*a)
    {
        temp = *a;
        *a = (*a)->next;
        free(temp);
    }
}

bool stack_sorted (t_stack_node *stack)
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

t_stack_node *minimum_finder (t_stack_node *stack)
{
    long min;
    t_stack_node *min_node;

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

t_stack_node *max_finder (t_stack_node *stack)
{
    long max;
    t_stack_node *max_node;

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


t_stack_node	*ft_ultima_node(t_stack_node *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
int	ft_tamanho_lst(t_stack_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
int duplicated(t_stack_node *stack, int n)
{
    while(stack)
    {
        if(stack->nbr == n)
            free_stack(&stack);
        stack = stack->next;
    }
    return(0);
}
static void min_on_top(t_stack_node **a)
{
   while ((*a)->nbr != minimum_finder(*a)->nbr)
   {
       if ((*a)->nbr != minimum_finder(*a)->nbr)
           ra(a);
        else rra(a);
   }
}