/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 09:40:17 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 21:33:19 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((*nptr && *nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		n = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		i = (i * 10) + (*nptr -48);
		nptr++;
	}
	return (i * n);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d\n", ft_atoi("-4536"));
	printf("%d\n", atoi("-4536"));
	return (0);
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_atoi("   -42"));   
    printf("%d\n", ft_atoi("   +42"));  
    printf("%d\n", ft_atoi("42abc"));    // Test mixed characters
    printf("%d\n", ft_atoi("+-42"));     // Test invalid sign combination
    printf("%d\n", ft_atoi("2147483648"));  // Test overflow
    printf("%d\n", ft_atoi("-2147483649")); // Test underflow
    printf("%d\n", ft_atoi(""));         // Test empty string
    return 0;
}*/
