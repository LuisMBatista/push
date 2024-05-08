/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concent_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:27:13 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/08 17:51:29 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
