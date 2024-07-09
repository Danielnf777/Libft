/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:20:26 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 11:13:56 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
/*#include <string.h>

#include <stdio.h>
int	main(void)
{
	char	test[] = "The freespirit";
	int	c;

	c = 'p';
	printf("%p\n", ft_strchr(test, c));
	printf("%p", strchr(test, c));

	return (0);
}*/
