/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:59:07 by aniezgod          #+#    #+#             */
/*   Updated: 2023/02/22 12:07:11 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int nb = 0;
	int i = 0;

	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[1] <= '9' && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char str[10] = "0123456789";

	if (nb > 9)
		ft_putnbr(nb / 10);
	write (1, &str[nb % 10], 1);
}

int main(int ac, char **av)
{
	int nb;
	int i = 1;

	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(nb);
			write (1, " = ", 3);
			ft_putnbr(i * nb);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}