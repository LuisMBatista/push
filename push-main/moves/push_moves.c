/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:58:26 by lumiguel          #+#    #+#             */
/*   Updated: 2024/03/25 15:25:19 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

//SWAP-------------------------------------------------------
static void swap (stack_node** first)
{
    int temp;

    temp = 0;
    if (!*first || !(*first)->next)
        return ;
    temp = (*first)-> nbr;
    (*first)->nbr = (*first)->next->nbr;
}

void	sa(stack_node** a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(stack_node** b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(stack_node** a,stack_node** b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

//PUSH-------------------------------------------------------------
int	push(stack_node **dest, stack_node **src)
{
	stack_node	*node_to_push;

	node_to_push = *src;
	if (*src == NULL)
		return (0);
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_to_push->next = NULL;
	if (*dest == NULL)
	{
		*dest = node_to_push;
		return (1);
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->prev = node_to_push;
		*dest = node_to_push;
		return (1);
	}
	return (1);
}

void	pa(stack_node **a, stack_node **b)
{
	push(a, b); 
	ft_printf("pa\n");
}

void	pb(stack_node **b, stack_node **a)
{
	push(b, a); 
	ft_printf("pb\n");
}

//ROTATE-------------------------

static void	rotate(stack_node **stack) 
{
	stack_node	*last_node; 

	if (!*stack || !(*stack)->next) 
		return ;
	last_node = ft_lstlast(*stack); 
	last_node->next = *stack; 
	(*stack)->prev = NULL; 
	last_node = ft_lstlast(*stack); 
	last_node->next = NULL;
}

void ra(stack_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void rb(stack_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void rr(stack_node **a, stack_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

static void	reverse_rotate(stack_node **stack)
{
	stack_node	*last_node; 

	if (!*stack || !(*stack)->next) 
		return ;
	last_node = ft_lstlast(*stack);
	(*stack)->prev = last_node; 
	last_node-> next = (*stack); 
	last_node-> prev = NULL;
	last_node->prev->next = NULL;
}

void rra(stack_node **a)
{
	reverse_rotate(a);
	ft_printf("ra\n");
}

void rrb(stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rb\n");
}

void rrr(stack_node **a, stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rr\n");
}