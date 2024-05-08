/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_finders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:37:11 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/08 16:16:51 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != minimum_finder(*a)->nbr)
	{
		if (minimum_finder(*a)->median)
			ra(a);
		else
			rra(a);
	}
}

t_stack_node	*ft_ultima_node(t_stack_node *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lst_size(t_stack_node *lst)
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

bool	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}
