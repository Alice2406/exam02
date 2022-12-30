/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 09:44:14 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 09:59:33 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nb)
{
	char str[10] = "0123456789";

	if (nb > 9)
		ft_print(nb / 10);
	write(1, &str[nb % 10], 1);
}
int main(void)
{
	int i;

	i = 1;
	while ( i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else 
			ft_print(i);
		write (1, "\n", 1);
		i++;
	}
}