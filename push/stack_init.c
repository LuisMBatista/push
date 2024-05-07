/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:08:40 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/07 20:21:44 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->nbr = n;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = ft_ultima_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

int	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		quack;
	int		error;

	error = 0;
	quack = 0;
	while (argv[quack] != NULL)
	{
		if (syntax(argv[quack]))
			error = 1;
		n = ft_atoi(argv[quack]);
		if (n > INT_MAX || n < INT_MIN)
			error = 1;
		if (duplicated(*a, (int)n))
			error = 1;
		append_node(a, (int)n);
		quack++;
	}
	if (error)
	{
		ft_printf("Error\n");
		free_stack(a);
		return (1);
	}
	return (0);
}

void	set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*b_node;
	t_stack_node	*target_node;
	int				best_smaller_nbr;

	while (a)
	{
		best_smaller_nbr = INT_MIN;
		b_node = b;
		while (b_node)
		{
			if (b_node->nbr < a->nbr && b_node->nbr > best_smaller_nbr)
			{
				best_smaller_nbr = b_node->nbr;
				target_node = b_node;
			}
			b_node = b_node->next;
		}
		if (best_smaller_nbr == INT_MIN)
			a->target = max_finder(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

void	set_target_b(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*a_node;
	t_stack_node	*target_node;
	int				best_bigger_nbr;

	while (b)
	{
		best_bigger_nbr = INT_MAX;
		a_node = a;
		while (a_node)
		{
			if (a_node->nbr > b->nbr && a_node->nbr <= best_bigger_nbr)
			{
				best_bigger_nbr = a_node->nbr;
				target_node = a_node;
			}
			a_node = a_node->next;
		}
		if (best_bigger_nbr == INT_MAX)
			b->target = minimum_finder(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	cost_analysis_a(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lst_size(a);
	len_b = ft_lst_size(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->median))
			a->push_cost = len_a - (a->index);
		if (a->target->median)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - (a->target->index);
		a = a->next;
	}
}
