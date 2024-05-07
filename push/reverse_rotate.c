/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:25:42 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/06 15:42:33 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*first_node;
	t_stack_node	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	last_node = ft_ultima_node(*stack);
	*stack = last_node;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
