/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:14:50 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/10 00:44:54 by danavarr         ###   ########.fr       */
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

int	ft_characters(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i + j] != '\0')
	{
		if (s[i + j] == c)
			j++;
		while (s[i + j] != '\0' && s[i + j] != c)
		{
			i++;
			if (s[i + j] == c || s[i + j] == '\0')
				return (i);
		}
	}
	return (i);
}

void	*nullmemory(char **dest, int i)
{
	while (i >= 0)
	{
		free(dest[i]);
		i--;
	}
	return (NULL);
}

char	*ft_lines(char **dest, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		dest[i] = (char *)malloc(sizeof (char) * (ft_characters(s, c) + 1));
		if (!dest)
			nullmemory(dest, i - 1);
		if (*s == c)
			s++;
		while (*s && *s != c)
		{
			dest[i][j++] = *s;
			s++;
			if (*s == c || *s == '\0')
			{
				dest[i++][j] = '\0';
				j = 0;
			}
		}
	}
	dest[i] = NULL;
	return (*dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	dest = (char **)malloc(sizeof (char *) * (ft_count(s, c) + 1));
	if (!dest)
		return (NULL);
	ft_lines(dest, s, c);
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[] = "  Not bad ...  ";
	char	c = ' ';
	char	**result;
	result = ft_split("lorrisus. Suspendisse", ' ');
	int i;

	//	i = 0;
	//	while (result[i] != NULL)
	//	{
	printf("%s\n", result[0]);
	//		i++;
	//	}
	return (0);
}*/
