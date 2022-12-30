/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:04:54 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 17:01:33 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int inter(char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int no_twin(int i, char *str)
{
	int j = 0;

	while (j < i)
	{
		if (str[j] == str[i])
			return (0);
		j++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (inter(av[2], av[1][i]) && no_twin(i, av[1]))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}