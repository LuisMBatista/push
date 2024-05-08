/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:23 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/08 16:17:34 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	if (ft_lst_size(*a) > 3)
		pb(b, a);
	if (ft_lst_size(*a) > 3)
		pb(b, a);
	while (ft_lst_size(*a) > 3)
	{
		init_node_a(*a, *b);
		move_a_b(a, b);
	}
	sort_3(a);
	while (*b)
	{
		init_node_b(*a, *b);
		move_b_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
