/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:12:52 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/08 17:03:56 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			*temp;
	char			**superargv;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	temp = force_join(argv);
	superargv = ft_split(temp, ' ');
	free(temp);
	init_stack_a(&a, superargv);
	free_array(superargv);
	if (!stack_sorted(a))
	{
		if (ft_lst_size(a) == 2)
			sa(&a);
		else if (ft_lst_size(a) == 3)
			sort_3(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
