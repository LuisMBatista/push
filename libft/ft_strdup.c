/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:41:07 by lumiguel          #+#    #+#             */
/*   Updated: 2023/10/19 17:28:16 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		size;

	size = ft_size(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*teste;
	char	*original;

	if(argc > 1)
	{
		teste = ft_strdup(argv[1]);
		original = strdup(argv[1]);
		printf("%s  ft_strdup: \n" , teste);
		printf("%s  strdup: \n", original);
	}
}
*/
