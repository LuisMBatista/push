/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:58:26 by lumiguel          #+#    #+#             */
/*   Updated: 2024/04/15 16:47:39 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

//SWAP-------------------------------------------------------
static void swap (t_stack_node** first)
{
    int temp;

    temp = 0;
    if (!*first || !(*first)->next)
        return ;
    temp = (*first)-> nbr;
    (*first)->nbr = (*first)->next->nbr;
	(*first)->next->nbr = temp;
}

void	sa(t_stack_node** a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node** b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node** a,t_stack_node** b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

//PUSH-------------------------------------------------------------
int	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*node_to_push;

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

void	pa(t_stack_node **a, t_stack_node **b)
{
	push(a, b); 
	ft_printf("pa\n");
}

void	pb(t_stack_node **b, t_stack_node **a)
{
	push(b, a); 
	ft_printf("pb\n");
}

//ROTATE-------------------------

static void	rotate(t_stack_node **stack) 
{
	t_stack_node	*last_node; 

	if (!*stack || !(*stack)->next) 
		return ;
	last_node = ft_ultima_node(*stack); 
	last_node->next = *stack; 
	(*stack)->prev = NULL; 
	last_node = ft_ultima_node(*stack); 
	last_node->next = NULL;
}

void ra(t_stack_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void rb(t_stack_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

static void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*last_node; 

	if (!*stack || !(*stack)->next) 
		return ;
	last_node = ft_ultima_node(*stack);
	(*stack)->prev = last_node; 
	last_node-> next = (*stack); 
	last_node-> prev = NULL;
	last_node->prev->next = NULL;
}

void rra(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("ra\n");
}

void rrb(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rb\n");
}

void rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rr\n");
}