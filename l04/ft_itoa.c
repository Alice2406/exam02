/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:27:41 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 15:40:21 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int size_nb(int nb, int i)
{
	if (nb > 9)
	{
		i++;
		return(size_nb(nb / 10, i));
	}
	return(i);
}

char *ft_itoa(int nb)
{
	int size = 1;
	int sig = 1;
	char *str;

	if (nb == -2147483648)
		return ("-2147483648");
	if (nb < 0)
		sig = -1;
	if (nb == 0)
		return("0");
	size = size_nb(nb * sig, size);
	if (sig == -1)
	{
		nb = nb * (-1);
		size++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (sig == -1)
		str[0] = '-';
	while (nb)
	{
		str[--size] = (nb % 10) + '0';
		nb /= 10;
	}
	return(str);
}
