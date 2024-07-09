/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:17:06 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/03 21:12:09 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;
	char	*s1;
	int		len;

	len = ft_strlen(s);
	i = 0;
	s1 = (char *)s;
	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char s[] = "The new house";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return (0);
}*/
