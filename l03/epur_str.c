/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:02:21 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/10 16:57:28 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


//not goood 


int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i = -1;
	int space = 0;

	if (ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while(av[1][++i])
		{
			space = 0;
			while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			{
				space = 1;
				i++;
			}
			printf("%d\n", ft_strlen(av[1]));
			if (i == ft_strlen(av[1]) && (av[1][i] == ' ' || av[1][i] == '\t'))
			{
				space = 0;
				break ;
			}
			if (space == 1)
				write(1, " ", 1);
			write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
}