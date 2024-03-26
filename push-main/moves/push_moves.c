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
        return;
    temp = (*first)-> nbr;
    (*first)->nbr = (*first)->next->nbr;
    return(1);
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
