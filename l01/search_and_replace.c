/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:54:08 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 12:15:14 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		while(av[1][i])
		{
			if (av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}