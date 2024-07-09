/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:41:38 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/07 07:45:34 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_checkset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*dest;
	char	*set1;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	set1 = (char *)set;
	while (ft_checkset(s1[i], set1))
		i++;
	while (i < len && ft_checkset(s1[len - 1], set1))
		len--;
	dest = malloc(sizeof (char) * len - i);
	if (dest == NULL)
		return (NULL);
	if (i == len)
		return (dest);
	while (i < len)
		dest[j++] = s1[i++];
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
//	char	s1[] = "Tnsihe paradise is bluste";
//	char	set[] = "Testing";
	char	set[] = "\t \n";
	char	s1[] = "          ";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
