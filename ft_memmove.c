/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:00:46 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/05 11:13:07 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d == s)
		return (dest);
	while (i < n && d < s)
	{
		d[i] = s[i];
		i++;
	}
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i -1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	src[20] = "1234567890";
	printf("hola soy memmove \n");

	printf("%s\n", src);
	ft_memmove(src, &src[2], 5);
	printf("%s\n", src);
	return (0);
}*/
