/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:48:43 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 10:45:19 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new1;
	unsigned char	*new2;
	size_t			i;

	new1 = (unsigned char *)s1;
	new2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (new1[i] != new2[i])
			return (new1[i] - new2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "What' you doing!";
	char	s2[] = "Whb's upp!!";

	printf("%i\n", ft_memcmp(s1, s2, 5));
	printf("%i\n", memcmp(s1, s2, 5));
	return (0);
}*/
