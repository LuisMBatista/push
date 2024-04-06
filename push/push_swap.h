/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:13:21 by lumiguel          #+#    #+#             */
/*   Updated: 2024/04/06 17:19:22 by lumiguel         ###   ########.fr       */
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
    t_list  pao;
    int nbr;
    bool smallest;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}   stack_node;

int main (int argc, char**argv );
//moves
//static void swap (stack_node** first);
void	sa(stack_node** a);
void	sb(stack_node** b);
void	ss(stack_node** a,stack_node** b);
int	    push(stack_node **dest, stack_node **src);
void	pa(stack_node **a, stack_node **b);
void	pb(stack_node **b, stack_node **a);
//static void	rotate(stack_node **stack) ;
void ra(stack_node **a);
void rb(stack_node **b);
void rr(stack_node **a, stack_node **b);
//static void	reverse_rotate(stack_node **stack);
void rra(stack_node **a);
void rrb(stack_node **b);
void rrr(stack_node **a, stack_node **b);
void sort_3 (stack_node **a);
//split
//static size_t	ft_countword(char const *s, char c);
//static char *get_word(char *s, char c);
char    **split(char *s, char c);
//stack init
//static void append_node (stack_node **stack, int n);
void    init_stack_a(stack_node **a, char **argv);
//support
int syntax (char *nbr);
void free_stack (stack_node **a);
bool stack_sorted (stack_node *stack);
stack_node *minimum_finder (stack_node *stack);
stack_node *max_finder (stack_node *stack);

#endif