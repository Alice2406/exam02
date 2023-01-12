/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:35 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/12 15:58:15 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr_hex(int nb)
{
	char str[16] = "0123456789abcdef";

	if (nb >= 16)
		putnbr_hex(nb / 16);
	write(1, &str[nb % 16], 1);
}

int	ft_atoi(char *str)
{
	int nb = 0;
	int i = 0;

	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
	
}

int main(int ac, char **av)
{
	if (ac == 2)
		putnbr_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}