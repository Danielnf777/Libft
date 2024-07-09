/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:46:24 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/04 22:08:09 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[21];
	char	src[] = "The paradise is blue";
	ft_memcpy(dest, "zyxwvutsrqponmlkjihgfedcba", 14);
	printf("%s\n", dest);
	return(0);
}*/
