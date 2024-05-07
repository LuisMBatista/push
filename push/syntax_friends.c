/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_friends.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:08:47 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/06 18:06:12 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax(char *nbr)
{
	if (*nbr == '+' || *nbr == '-')
		nbr++;
	if (!*nbr)
		return (1);
	while (*nbr)
	{
		if (!(*nbr >= '0' && *nbr <= '9'))
			return (1);
		nbr++;
	}
	return (0);
}

void	free_stack(t_stack_node **a)
{
	t_stack_node	*temp;

	if (!a)
		return ;
	while (*a)
	{
		temp = *a;
		*a = (*a)->next;
		free(temp);
	}
}

int	duplicated(t_stack_node *stack, int n)
{
	while (stack)
	{
		if (stack->nbr == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	current_index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	median = ft_lst_size(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->median = true;
		else
			stack->median = false;
		stack = stack->next;
		i++;
	}
}
