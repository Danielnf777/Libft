/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:26:38 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/07 02:20:11 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		while (big[i + j] == little[j] || little[j] == '\0')
		{
			j++;
			len--;
			if (len == 0 && little[j] != '\0')
				return (NULL);
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	big[] = "The blue house";
	char	little[] = "blue";
	size_t	len;

	len = 2;
	printf("%p\n", ft_strnstr(big, little, len));
 	printf("%p\n", strnstr(big, little, len));
	printf("%p\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%p\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
