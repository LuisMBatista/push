/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:58:26 by lumiguel          #+#    #+#             */
/*   Updated: 2024/03/18 14:04:00 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h" 

static void swap (t_stack_node** first)
{
    int temp;

    temp = 0;
    if (!*first || !(*first)->next)
        return;
    temp = (*first)-> nbr;
    (*first)->nbr = (*first)->next->nbr;
    return(1);
}

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
