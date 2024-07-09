/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:36:10 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/21 00:08:48 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>
int     main(void)
{
        int     i;
        int     c;
        char    b[] = "The House is The number 43";

        i = 0;
        c = 'f';
        ft_toupper(b[i]);
        while (b[i] != '\0')
        {
                printf("%c\n", ft_toupper(b[i]));
                i++;
        }
	printf("%c", ft_toupper(c));
        return (0);
}*/
