/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:59:07 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 12:19:25 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int nb = 0;
	int i = 0;
	int sig = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] >= '0' && str[1] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sig);
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
		if (nb <= 0 || nb > 23860929)
			return (0);
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
	write(1, "\n", 1);
}