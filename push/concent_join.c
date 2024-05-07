/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concent_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:27:13 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/07 16:31:43 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gimme_stack(t_stack_node *stack, t_stack_node *stackb)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp1;

	tmp = stack;
	tmp1 = stackb;
	printf("this is a: ");
	fflush(stdout);
	while (tmp)
	{
		printf("%d:%d ", tmp->index, tmp->nbr);
		fflush(stdout);
		tmp = tmp->next;
	}
	printf("\nthis is b: ");
	fflush(stdout);
	while (tmp1)
	{
		printf("%d:%d ", tmp1->index, tmp1->nbr);
		fflush(stdout);
		tmp1 = tmp1->next;
	}
	printf("\n");
}

char	*force_join(char **argv)
{
	char	*str;
	int		i;

	i = 1;
	str = NULL;
	while (argv[i])
	{
		if (!(ft_isdigits(argv[i])))
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
	i = 1;
	str = force_helper(argv);
	return (str);
}

char	*force_helper(char **argv)
{
	char	*str;
	char	*temp;
	char	*temp2;
	int		i;

	i = 1;
	str = NULL;
	temp = NULL;
	temp2 = NULL;
	while (argv[i])
	{
		temp = ft_strjoin(argv[i], " ");
		if (!str)
			str = ft_strdup(temp);
		else
		{
			temp2 = str;
			str = ft_strjoin(temp2, temp);
			free(temp2);
		}
		free(temp);
		i++;
	}
	return (str);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
