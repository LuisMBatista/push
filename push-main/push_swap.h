/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:13:21 by lumiguel          #+#    #+#             */
/*   Updated: 2024/03/20 17:35:31 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"

typedef struct s_stack_node
{
    int nbr;
    bool smallest;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}   stack_node;

#endif