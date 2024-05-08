/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:13:21 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/08 16:23:52 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	double				push_cost;
	bool				median;
	bool				cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	struct s_stack_node	*target;
}						t_stack_node;

int						main(int argc, char **argv);
void					swap(t_stack_node **first);
void					sa(t_stack_node **a);
void					sb(t_stack_node **b);
void					ss(t_stack_node **a, t_stack_node **b);
int						push(t_stack_node **dest, t_stack_node **src);
void					pa(t_stack_node **a, t_stack_node **b);
void					pb(t_stack_node **b, t_stack_node **a);
void					rotate(t_stack_node **stack);
void					ra(t_stack_node **a);
void					rb(t_stack_node **b);
void					rr(t_stack_node **a, t_stack_node **b);
void					reverse_rotate(t_stack_node **stack);
void					rra(t_stack_node **a);
void					rrb(t_stack_node **b);
void					rrr(t_stack_node **a, t_stack_node **b);
void					rev_rotate_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest);
void					sort_3(t_stack_node **a);
void					move_b_a(t_stack_node **a, t_stack_node **b);
void					move_a_b(t_stack_node **a, t_stack_node **b);
void					rotate_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest);
void					rev_rotate_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest);
void					prep_to_push(t_stack_node **stack,
							t_stack_node *top_node,
							char stack_name);
size_t					ft_countword(char const *s, char c);
char					*get_word(char *s, char c);
char					**split(char *s, char c);
void					append_node(t_stack_node **stack, int n);
int						init_stack_a(t_stack_node **a, char **argv);
void					current_index(t_stack_node *stack);
void					set_target_a(t_stack_node *a, t_stack_node *b);
void					set_target_b(t_stack_node *a, t_stack_node *b);
void					cost_analysis_a(t_stack_node *a, t_stack_node *b);
int						syntax(char *nbr);
void					free_stack(t_stack_node **a);
bool					stack_sorted(t_stack_node *stack);
t_stack_node			*minimum_finder(t_stack_node *stack);
t_stack_node			*max_finder(t_stack_node *stack);
int						ft_lst_size(t_stack_node *lst);
t_stack_node			*ft_ultima_node(t_stack_node *lst);
int						duplicated(t_stack_node *stack, int n);
void					sort_3(t_stack_node **a);
void					sort_stacks(t_stack_node **a, t_stack_node **b);
void					init_node_a(t_stack_node *a, t_stack_node *b);
void					cheapest_node(t_stack_node *stack);
void					init_node_b(t_stack_node *a, t_stack_node *b);
void					min_on_top(t_stack_node **a);
t_stack_node			*find_cheap(t_stack_node *stack);
void					free_array(char **array);
char					*force_join(char **argv);
char					*force_helper(char **argv);

#endif
