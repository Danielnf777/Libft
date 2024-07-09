/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:44:13 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/29 17:02:53 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char str[] = "Teh hou8s";
	
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]))
			printf("%c is an alphabetic character.\n", str[i]);
		else
			printf("%c is not an alphabetic character.\n",str[i]);
		i++;
	}
}*/
