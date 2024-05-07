/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:02:34 by lumiguel          #+#    #+#             */
/*   Updated: 2024/05/06 15:17:42 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	i;

	if (!*s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

char	*get_word(char *s, char c)
{
	static int	passer;
	char		*next_word;
	int			len;
	int			quack;

	passer = 0;
	len = 0;
	quack = 0;
	while (s[passer] == c)
		++passer;
	while ((s[passer + len] != c) && s[passer + len])
		len++;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[passer] != c) && s[passer])
		next_word[quack++] = s[passer++];
	next_word[quack] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		word_count;
	char	**array;
	int		quack;

	quack = 0;
	word_count = ft_countword(s, c);
	if (!word_count)
		exit(1);
	array = malloc(sizeof(char *) * (size_t)(word_count + 2));
	if (!array)
		return (NULL);
	while (word_count-- >= 0)
	{
		if (quack == 0)
		{
			array[quack] = malloc(sizeof(char));
			if (!array[quack])
				return (NULL);
			array[quack++][0] = '\0';
			continue ;
		}
		array[quack++] = get_word(s, c);
	}
	array[quack] = NULL;
	return (array);
}
