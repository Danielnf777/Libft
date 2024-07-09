/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:49:44 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/09 23:08:25 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

char	*ft_lines(char **dest, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		dest[i] = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
		if (!dest[i])
			return (NULL);
		if (*s == c)
			s++;
		while (*s && *s != c)
		{
			dest[i][j++] = *s;
			s++;
			if (*s == c)
			{
				dest[i++][j] = '\0';
				j = 0;
			}
		}
	}
	return (*dest);
}


char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	dest = (char **)malloc(sizeof (char *) * (ft_count(s, c)));
	if (!dest)
		return (NULL);
/*	while (*s)
	{
		dest[i] = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
		if (!dest[i])
			return (NULL);
		if (*s == c)
			s++;
		while (*s && *s != c)
		{
			dest[i][j++] = *s;
			s++;
			if (*s == c)
			{
				dest[i++][j] = '\0';
				j = 0;
			}
		}
	}*/
	ft_lines(dest, s, c);
	dest[i] = NULL;
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char	s[] = "  Not bad ...  ";
	char	c = ' ';
	char	**result;
	result = ft_split(s, c);
	printf("%s\n", result[2]);
	return (0);
}
