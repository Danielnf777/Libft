/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 01:57:01 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 10:05:11 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		l;

	str = (char *)s;
	l = ft_strlen(s);
	if (c == '\0')
		return (&str[l]);
	while (l > 0)
	{
		if (str[l - 1] == c)
			return (&str[l - 1]);
		l--;
	}
	return (NULL);
}
/*#include <string.h>

#include <stdio.h>
int	main(void)
{
	char	test[] = "The freespirit";
	int	c;

	c = 'e';
	printf("%p\n", ft_strrchr(test, c));
	printf("%p", strrchr(test, c));
	return (0);
}*/
