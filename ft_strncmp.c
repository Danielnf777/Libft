/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 02:46:52 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/07 01:25:56 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((i < n) && (s1[i] == s2[i])) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
//	const	char s1[] = "Hola";
//	const	char s2[] = "Adios";
	printf("%d\n", ft_strncmp("Hola", "Hol1", 4));
	 printf("%d\n", strncmp("Hola", "Hol1", 4));

	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
        printf("%d", strncmp("test\200", "test\0", 6));
	return (0);
}*/
