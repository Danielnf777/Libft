/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:39:04 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 01:23:06 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 128;	
	if (ft_isascii(c))
		printf("%d is a ascii character\n", c);
	else
		printf("%d is not an ascii character\n", c);

	if (isascii(c))
                printf("%d is a ascii character", c);
	else
                printf("%d is not an ascii character", c);

}*/
