/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks_components.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:08:30 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/07 20:21:30 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	move_a_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;

	cheapest = find_cheap(*a);
	if (cheapest->median && cheapest->target->median)
	{
		rotate_both(a, b, cheapest);
	}
	else if (!(cheapest->median) && !(cheapest->target->median))
	{
		rev_rotate_both(a, b, cheapest);
	}
	prep_to_push(a, cheapest, 'a');
	prep_to_push(b, cheapest->target, 'b');
	pb(b, a);
}

void	move_b_a(t_stack_node **a, t_stack_node **b)
{
	prep_to_push(a, (*b)->target, 'a');
	pa(a, b);
}

void	init_node_a(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	cheapest_node(a);
}

void	init_node_b(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}