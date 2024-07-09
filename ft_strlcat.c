/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:16:06 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/06 22:38:44 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	j = 0;
	if (lendst >= size)
		lensrc += size;
	else
		lensrc += lendst;
	while (lendst + 1 < size && src[j] != '\0')
	{
		dst[lendst] = src[j];
		j++;
		lendst++;
	}
	dst[lendst] = '\0';
	return (lensrc);
}
/*#include <stdio.h>
int	main(void)
{

	char	dst[14] = "a";
//	char	src[] = "There is just a way...";

//	ft_strlcat(dst, src, 100);
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 15));
	return (0);
}*/
