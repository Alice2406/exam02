/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:57:17 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/06 13:42:08 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int	ft_atoi(char *str)
{
	int compteur;
	int nb;
	int i;
	
	compteur = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compteur = -1;
		i++;
	}
	while(str[i] >= '1' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * compteur);
}

void	ft_putnbr(int nb)
{
	char str[10] ="0123456789";
	
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &str[nb % 10], 1);
}

int main(int ac, char **av)
{
	unsigned int nb;
	unsigned int i = 2;
	int sum = 0;

	if (ac == 2 && ft_atoi(av[1]) > 0)
	{
		nb = ft_atoi(av[1]);
		while (i <= nb)
		{
			if (is_prime(i))
				sum = sum + i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}