/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 00:47:51 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/03 23:42:20 by danavarr         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		a;
	char	**dest;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	j = 0;
	a = 0;
	dest = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[j] = (char *)malloc(sizeof(char) * ft_strlen(s));
		if (dest[j] == NULL)
			return (NULL);
		if (s1[i] == c)
			i++;
		while (s1[i] != c && s1[i] != '\0')
		{
			dest[j][a] = s1[i];
			i++;
			a++;
			if (s[i] == c)
			{
				dest[j][a] = '\0';
				j++;
				a = 0;
			}
		}
	}
	dest[j] = NULL;
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[] = "  Not bad ...  ";
	char	c = ' ';
	char	**result;
	result = ft_split(s, c);
	printf("%s\n", result[2]);
	return (0);
}*/
