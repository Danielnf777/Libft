/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:10:27 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 11:11:59 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>
int     main(void)
{
        int     i;
        char    b[] = "The House is The number 43";

        i = 0;
        
	ft_tolower(b[i]);
        while (b[i] != '\0')
        {
                printf("%c", ft_tolower(b[i]));
                i++;
        }
        return (0);
}*/
