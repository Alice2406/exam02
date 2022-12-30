/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:52:19 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 12:58:00 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z' && i != 0)
			{
				write(1, "_", 1);
				write(1, &str[av[1][i] - 65], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}