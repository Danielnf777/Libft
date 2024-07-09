/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:12:06 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/02 09:09:30 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;

	c = 77;
	if (ft_isprint(c))
		printf("%d is a printable character\n", c);
	else
		printf("%d is not a printable character\n", c);

	if (isprint(c))
		printf("%d is a printable character\n", c);
	else
		printf("%d is not a printable character\n", c);
	return (0);

	return (0);
}*/
