/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:42:50 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/06 12:56:13 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int len = 0;

	if (ac == 3)
	{
		while(av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					len++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (len == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}