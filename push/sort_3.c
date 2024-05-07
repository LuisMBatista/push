/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:08:25 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/06 15:18:54 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack_node **a)
{
	t_stack_node	*maximum_node;

	maximum_node = max_finder(*a);
	if (maximum_node == *a)
		ra(a);
	else if ((*a)->next == maximum_node)
		rra(a);
	if ((*a)->next->nbr < (*a)->nbr)
		sa(a);
	return ;
}
