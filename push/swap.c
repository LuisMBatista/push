/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:22:02 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/06 15:43:32 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_node **first)
{
	int	temp;

	temp = 0;
	if (!*first || !(*first)->next)
		return ;
	temp = (*first)->nbr;
	(*first)->nbr = (*first)->next->nbr;
	(*first)->next->nbr = temp;
}

void	sa(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
