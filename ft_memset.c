/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:59:33 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 10:54:53 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*value;

	value = s;
	i = 0;
	while (i < n)
	{
		value[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[5];

	ft_memset(s, 'j', 5);
	printf("%s", s);
	return (0);
}*/
