/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:25:21 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/06 12:39:05 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int no_twin(char *str, int i)
{
	int j = 0;

	while(j < i)
	{
		if (str[i] == str[j])
			return (0);
		j++;
	}
	return (1);
}

int	no_twin_av_one(char *str, char c)
{
	int	i = 0;
	
	while(str[i])
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while(av[1][i])
		{
			if (no_twin(av[1], i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if (no_twin(av[2], i) && no_twin_av_one(av[1], av[2][i]))
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}