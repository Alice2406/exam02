/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:02:21 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 18:38:46 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int space;

	if (ac == 2)
	{
		while (is_space_tab(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (is_space_tab(av[1][i]))
				space = 1;
			if (!is_space_tab(av[1][i]))
			{
				if (space)
					write(1, " ", 1); 
				space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}