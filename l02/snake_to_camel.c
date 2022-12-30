/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:24:02 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 13:30:04 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char str[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] == '_')
			{
				i++;
				write(1, &str[av[1][i] - 97], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}