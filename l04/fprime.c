/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:01:41 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 14:23:26 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
	int i = 2;
	
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	next_prime(int nb)
{
	nb++;
	while (!is_prime(nb))
		nb++;
	return (nb);
}

void	fprime(int nb)
{
	int i = 2;

	while (i != nb)
	{
		if (nb % i == 0)
		{
			printf("%d*", i);
			nb = nb / i;
		}
		else
			i = next_prime(i);
	}
	printf("%d", i);
}

int main(int ac, char **av)
{
	int nb;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (is_prime(nb))
			printf("%d", nb);
		else
			fprime(nb);		
	}
	printf("\n");
}