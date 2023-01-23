/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:51:12 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/23 12:37:08 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] < 'z')
				av[1][i] = av[1][i] + 1;
 			else if (av[1][i] == 'z')
				av[1][i] = 'a';
			else if (av[1][i] >= 'A' && av[1][i] < 'Z')
				av[1][i] = av[1][i] + 1;
			else if (av[1][i] == 'Z')
				av[1][i] = 'A';
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}