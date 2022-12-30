/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:21:32 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 12:31:09 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char str[26] = "abcdefghifklmnopqrstuvwxyz";
	char str2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				write(1, &str2[av[1][i] - 97], 1);
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				write(1, &str[av[1][i] - 65], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}